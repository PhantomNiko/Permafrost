/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100f0
#define DAT_100100f0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000748
 */

void recovered_10000748(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000774();
  DAT_100100f0 = 0;
  recovered_100007ac();
  DAT_100100f4 = 0;
  return;
}

#undef DAT_100100f0
#undef DAT_100100f4

#undef DAT_100100f4
#define DAT_100100f4 (*(int *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000774
 */

void recovered_10000774(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_100100f4;
      cVar1 = '\x01';
      { __typeof__(DAT_100100f4) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_100100f4),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_100100f4 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_100100f4

#undef DAT_100100f0
#define DAT_100100f0 (*(byte *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
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
 * Address: 0x100007ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100007ac(void)

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
  if ((DAT_100100f0 & 1) == 0) {
    DAT_100100f8 = 0;
    DAT_10010100 = 0;
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
      recovered_10002d74(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_100100f8 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002d74(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_10010100 == 0) {
      DAT_10010100 = DAT_100100f8;
    }
    DAT_100100f0 = 1;
  }
  return;
}

#undef DAT_100100f0
#undef DAT_100100f8
#undef DAT_10010100
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

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a30
 */

bool recovered_10000a30(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10000774();
  bVar1 = recovered_10000a6c(addresses,sizes,count);
  DAT_100100f4 = 0;
  return bVar1;
}

#undef DAT_100100f4

#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
#define local_61 (*(byte *)(pf_stack_frame + 31))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a6c
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_10000a6c(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *address;
  long lVar9;

  bVar2 = false;
  if (((param_1 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != 0)) {
    if ((PF_PART1(DAT_100100f0, 1) & 1) == 0) {
      PF_PART1(DAT_100100f0, 1) = 1;
      recovered_100007ac();
      for (lVar9 = 0; lVar9 != param_3; lVar9 = lVar9 + 1) {
        address = (long *)param_1[lVar9];
        uVar3 = param_2[lVar9];
        plVar1 = (long *)((long)address + uVar3);
        if (CARRY8((ulong)address,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)address < uVar3 || plVar1 <= address) {
          PF_PART1(DAT_100100f0, 1) = 0;
          return false;
        }
        if ((ulong)address >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)address >> 0x1a < 0x21) &&
             (bVar2 = recovered_10002e78((ulong)address,0x84000000 - (long)address,&local_61),
             !bVar2)) {
            PF_PART1(DAT_100100f0, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x10000b6c;
        }
        else {
          bVar2 = recovered_10002e78((ulong)address,uVar3,&local_61);
          if (!bVar2) {
            PF_PART1(DAT_100100f0, 1) = 0;
            return false;
          }
joined_r0x10000b6c:
          if ((local_61 & 1) == 0) {
            PF_PART1(DAT_100100f0, 1) = 0;
            return false;
          }
        }
        lVar4 = 0;
        while (lVar9 != lVar4) {
          plVar7 = (long *)param_1[lVar4];
          plVar8 = (long *)((long)plVar7 + param_2[lVar4]);
          if (CARRY8((ulong)plVar7,param_2[lVar4])) {
            plVar8 = (long *)0xffffffffffffffff;
          }
          lVar4 = lVar4 + 1;
          if (plVar7 < plVar1 && address < plVar8) {
            PF_PART1(DAT_100100f0, 1) = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_100100f8;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && address < plVar7) {
            PF_PART1(DAT_100100f0, 1) = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_100100f8;
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = *puVar5;
        puVar5 = (ulong *)(uVar3 + 8);
        uStack_70 = uVar6;
      } while (uVar3 != 0);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        recovered_10002d74(*param_1,*param_2,&uStack_70);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_10010100 == 0) {
        DAT_10010100 = DAT_100100f8;
      }
      PF_PART1(DAT_100100f0, 1) = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_100100f0
#undef DAT_100100f8
#undef DAT_10010100
#undef local_61
#undef uStack_70

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c68
 */

bool recovered_10000c68(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = size;
  uStack_18 = address;
  recovered_10000774();
  bVar1 = recovered_10000a6c(&uStack_18,&local_20,1);
  DAT_100100f4 = 0;
  return bVar1;
}

#undef DAT_100100f4
#undef uStack_18
#undef local_20

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca4
 */

uint recovered_10000ca4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000774();
  recovered_100007ac();
  uVar1 = 0;
  for (plVar2 = &DAT_100100f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_100100f4 = 0;
  return (uint)uVar1;
}

#undef DAT_100100f4
#undef DAT_100100f8

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

ulonglong recovered_10000d04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long *plVar2;

  recovered_10000774();
  recovered_100007ac();
  uVar1 = 0;
  for (plVar2 = &DAT_100100f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  DAT_100100f4 = 0;
  return uVar1;
}

#undef DAT_100100f4
#undef DAT_100100f8

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d58
 */

uint recovered_10000d58(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000774();
  recovered_100007ac();
  uVar1 = 0;
  for (plVar2 = &DAT_100100f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_100100f4 = 0;
  return (uint)uVar1;
}

#undef DAT_100100f4
#undef DAT_100100f8

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da8
 */

ulonglong recovered_10000da8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long *plVar2;

  recovered_10000774();
  recovered_100007ac();
  uVar1 = 0;
  for (plVar2 = &DAT_100100f8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  DAT_100100f4 = 0;
  return uVar1;
}

#undef DAT_100100f4
#undef DAT_100100f8

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dec
 */

void * recovered_10000dec(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000774();
  puVar1 = recovered_10000e18(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_100100f4 = 0;
  return puVar1;
}

#undef DAT_100100f4

#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e18
 */

ulong * recovered_10000e18(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_100007ac();
    puVar4 = DAT_100100f8;
    puVar3 = DAT_100100f8;
    if (DAT_10010100 != (ulong *)0x0) {
      puVar3 = DAT_10010100;
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
                if (uVar9 < uVar7) goto LAB_10000ec8;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000ec8:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000f04;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000f04:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000fac;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000f60;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000f60:
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
LAB_10000fac:
                        recovered_10002ec8(puVar11,uVar5);
                        *(undefined1 *)(puVar11 + 3) = 0;
                        DAT_10010100 = DAT_100100f8;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_10010100 = (ulong *)puVar11[1];
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

#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd4
 */

void * recovered_10000fd4(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000774();
  puVar1 = recovered_10000e18(size,(ulong *)0x0,(ulong *)limit);
  DAT_100100f4 = 0;
  return puVar1;
}

#undef DAT_100100f4

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000100c
 */

void * recovered_1000100c(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000774();
  if (last < first) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000e18(size,(ulong *)first,(ulong *)last);
  }
  DAT_100100f4 = 0;
  return puVar1;
}

#undef DAT_100100f4

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

void recovered_10001050(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000774();
  recovered_10001078((long)pointer);
  DAT_100100f4 = 0;
  return;
}

#undef DAT_100100f4

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001078
 */

void recovered_10001078(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_100007ac();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002f1c(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002f1c(puVar2);
      puVar1 = puVar2;
    }
    DAT_10010100 = puVar1;
  }
  return;
}

#undef DAT_10010100

#undef DAT_100100f4
#define DAT_100100f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x794cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010ec
 */

void * recovered_100010ec(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;

  recovered_10000774();
  if (pointer == (void *)0x0) {
    puVar7 = recovered_10000e18(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_100100f4 = 0;
    return puVar7;
  }
  if (size == 0) {
    recovered_10001078((long)pointer);
    DAT_100100f4 = 0;
    return (void *)0x0;
  }
  if (0xfffffffffffffff0 < size) {
    DAT_100100f4 = 0;
    return (void *)0x0;
  }
  recovered_100007ac();
  uVar6 = size + 0xf & 0xfffffffffffffff0;
  puVar7 = (ulong *)((long)pointer + -0x20);
  uVar2 = *puVar7;
  if (uVar6 <= uVar2) {
    if (uVar2 <= uVar6 - 1) {
      DAT_100100f4 = 0;
      return (void *)0x0;
    }
    if (uVar2 - uVar6 < 0x30) {
      if (0xffffffffffffffdf < uVar2) {
        DAT_100100f4 = 0;
        return (void *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < size) {
      DAT_100100f4 = 0;
      return (void *)0x0;
    }
    uVar1 = recovered_10002ec8(puVar7,uVar6);
    if ((int)uVar1 == 0) {
      DAT_100100f4 = 0;
      return pointer;
    }
    DAT_100100f4 = 0;
    DAT_10010100 = *(undefined8 *)((long)pointer + -0x18);
    return pointer;
  }
  puVar5 = puVar7;
  for (uVar3 = uVar2;
      (((uVar3 < uVar6 && (puVar4 = (ulong *)puVar5[1], puVar4 != (ulong *)0x0)) &&
       ((char)puVar4[3] == '\x01')) &&
      ((uVar3 < 0xffffffffffffffe0 && (ulong *)((long)puVar5 + uVar2 + 0x20) == puVar4 &&
       (uVar2 = *puVar4, uVar2 <= -uVar3 - 0x21)))); uVar3 = uVar3 + uVar2 + 0x20) {
    puVar5 = puVar4;
  }
  if (uVar6 - 1 < uVar3) {
    if (uVar3 - uVar6 < 0x30) {
      if (0xffffffffffffffdf < uVar3) goto LAB_10020124;
    }
    else if (0xffffffffffffffb0 < size) goto LAB_10020124;
    do {
      uVar2 = *puVar7;
      if (uVar6 <= uVar2) goto LAB_10001218;
      uVar2 = recovered_10002f3c(puVar7);
    } while ((uVar2 & 1) != 0);
    uVar2 = *puVar7;
LAB_10001218:
    if (uVar6 <= uVar2) {
      uVar1 = recovered_10002ec8(puVar7,uVar6);
      if ((int)uVar1 != 0) {
        DAT_10010100 = *(undefined8 *)((long)pointer + -0x18);
      }
      *(undefined1 *)((long)pointer + -8) = 0;
      DAT_100100f4 = 0;
      return pointer;
    }
  }
  else {
LAB_10020124:
    puVar7 = recovered_10000e18(uVar6,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar7 != (ulong *)0x0) {
      uVar2 = *(ulong *)((long)pointer + -0x20);
      if (uVar6 <= *(ulong *)((long)pointer + -0x20)) {
        uVar2 = uVar6;
      }
      recovered_1000156c(puVar7,pointer,uVar2);
      recovered_10001078((long)pointer);
      DAT_100100f4 = 0;
      return puVar7;
    }
  }
  DAT_100100f4 = 0;
  return (void *)0x0;
}

#undef DAT_100100f4
#undef DAT_10010100

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001294
 */

ulong recovered_10001294(ulong param_1,uint param_2)

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
 * Address: 0x100012d8
 */

ulong recovered_100012d8(ulong param_1,uint param_2)

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
 * Address: 0x10001324
 */

long recovered_10001324(long param_1,uint param_2)

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
 * Address: 0x10001374
 */

/* WARNING: Removing unreachable block (ram,0x100013c4) */

ulong recovered_10001374(ulong param_1,ulong param_2)

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
 * Address: 0x1000137c
 */

ulong recovered_1000137c(ulong param_1,ulong param_2,long *param_3)

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
 * Address: 0x100013dc
 */

undefined8 recovered_100013dc(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_1000137c(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013fc
 */

long recovered_100013fc(ulong param_1,ulong param_2)

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
  lVar4 = recovered_1000137c(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000143c
 */

long recovered_1000143c(long param_1,long param_2)

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
  recovered_1000137c(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001488
 */

void recovered_10001488(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001490
 */

int recovered_10001490(int param_1)

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
 * Address: 0x1000149c
 */

void * recovered_1000149c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002fc4(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(size);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef UINT_8201084c

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

void recovered_100014e0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10002fc4(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(pointer);
    return;
  }
  return;
}

#undef UINT_82010850

#undef UINT_82010854
#define UINT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001520
 */

void * recovered_10001520(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002fc4(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000155c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(pointer,size);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef UINT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000156c
 */

void * recovered_1000156c(void *destination,void *source,ulong count)

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
 * Address: 0x10001644
 */

void * recovered_10001644(void *destination,void *source,ulong count)

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
      destination = recovered_1000156c(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001758
 */

void * recovered_10001758(void *destination,int value,ulong count)

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
 * Address: 0x100017f0
 */

void recovered_100017f0(ulong *param_1,ulong param_2)

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
 * Address: 0x100017f4
 */

void recovered_100017f4(ulong *param_1,ulong param_2)

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
 * Address: 0x100017f8
 */

char * recovered_100017f8(long param_1,char param_2,long param_3)

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
 * Address: 0x1000181c
 */

int recovered_1000181c(void *left,void *right,ulong count)

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
        goto recovered_10001984;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_10001984;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_10001984;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_10001984;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_10001984:
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
 * Address: 0x10001984
 */

int recovered_10001984(long param_1,long param_2)

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
 * Address: 0x100019b0
 */

bool recovered_100019b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c0
 */

bool recovered_100019c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d0
 */

bool recovered_100019d0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e4
 */

bool recovered_100019e4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a00
 */

bool recovered_10001a00(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a10
 */

bool recovered_10001a10(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

int recovered_10001a20(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a34
 */

int recovered_10001a34(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a48
 */

ulong recovered_10001a48(char *text)

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
 * Address: 0x10001a6c
 */

int recovered_10001a6c(char *left,char *right)

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
 * Address: 0x10001a94
 */

int recovered_10001a94(char *left,char *right)

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
 * Address: 0x10001a98
 */

void recovered_10001a98(long param_1,long param_2)

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
 * Address: 0x10001ab0
 */

void recovered_10001ab0(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10001a48(param_1);
    destination = recovered_1000149c(uVar1 + 1);
    if (destination != (void *)0x0) {
      recovered_1000156c(destination,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aec
 */

char * recovered_10001aec(char *param_1,char param_2)

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
 * Address: 0x10001b14
 */

long recovered_10001b14(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_10001aec(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b54
 */

ulong recovered_10001b54(char *text,char *reject)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  while ((text[uVar2] != '\0' &&
         (pcVar1 = recovered_10001aec(reject,text[uVar2]), pcVar1 == (char *)0x0))) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b94
 */

char * recovered_10001b94(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10001aec(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd4
 */

char * recovered_10001bd4(char *param_1,char *param_2)

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


#undef DAT_100092ee
#define DAT_100092ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb46U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

undefined * recovered_10001c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100092ee;
}

#undef DAT_100092ee

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7860U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c1c
 */

undefined ** recovered_10001c1c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010008;
}

#undef PTR_DAT_10010008

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001c28(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10001758(auStack_38,0,0x18);
  bVar1 = recovered_10002fc4(0x168);
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
 * Address: 0x10001ca0
 */

double recovered_10001ca0(double param_1,uint param_2)

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
 * Address: 0x10001cd4
 */

uint128 recovered_10001cd4(double param_1,int *param_2)

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
 * Address: 0x10001d48
 */

uint128 recovered_10001d48(double param_1,double param_2)

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
 * Address: 0x10001d6c
 */

uint128 recovered_10001d6c(double param_1,double param_2)

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
 * Address: 0x10001dcc
 */

uint128 recovered_10001dcc(double param_1)

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
 * Address: 0x10001de8
 */

uint128 recovered_10001de8(double param_1)

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
 * Address: 0x10001e14
 */

uint128 recovered_10001e14(double param_1)

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


#undef DAT_100087d8
#define DAT_100087d8 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e50
 */

uint128 recovered_10001e50(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_100087d8 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_100087d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001efc
 */

long recovered_10001efc(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_100087e0
#define DAT_100087e0 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f10
 */

uint128 recovered_10001f10(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001f64(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100087e0);
  return auVar1;
}

#undef DAT_100087e0

#undef DAT_100087e8
#define DAT_100087e8 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_100087f0
#define DAT_100087f0 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_100087f8
#define DAT_100087f8 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10008800
#define DAT_10008800 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f64
 */

void recovered_10001f64(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_100087e8 < param_1; param_1 = param_1 + DAT_10008800) {
  }
  for (; param_1 < DAT_100087f0; param_1 = param_1 + DAT_100087f8) {
  }
  return;
}

#undef DAT_100087e8
#undef DAT_100087f0
#undef DAT_100087f8
#undef DAT_10008800

#undef DAT_10008808
#define DAT_10008808 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa8
 */

uint128 recovered_10001fa8(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001f64(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10008808;
  return auVar1;
}

#undef DAT_10008808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff4
 */

uint128 recovered_10001ff4(double param_1)

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
 * Address: 0x10002004
 */

longlong recovered_10002004(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002064
 */

ulonglong recovered_10002064(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100020b4
 */

double recovered_100020b4(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100020dc
 */

double recovered_100020dc(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if (value < 0) {
    dVar2 = recovered_100020b4(-value);
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
 * Address: 0x10002100
 */

float recovered_10002100(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002134
 */

void recovered_10002134(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001cd4((double)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000214c
 */

float recovered_1000214c(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001ca0((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002164
 */

void recovered_10002164(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001d6c((double)param_1,(double)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002180
 */

float recovered_10002180(float param_1)

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
 * Address: 0x100021a4
 */

void recovered_100021a4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001de8((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021bc
 */

uint128 recovered_100021bc(double param_1)

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
 * Address: 0x100021e4
 */

void recovered_100021e4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100021bc((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021fc
 */

void recovered_100021fc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001e14((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002214
 */

void recovered_10002214(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001e50((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000222c
 */

long recovered_1000222c(double param_1)

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
 * Address: 0x10002240
 */

void recovered_10002240(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001f10((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002258
 */

void recovered_10002258(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001fa8((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002270
 */

float recovered_10002270(float param_1)

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
 * Address: 0x10002280
 */

long recovered_10002280(byte *param_1,undefined8 *param_2,uint param_3)

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10002318;
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
      goto LAB_10002344;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_10002344;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_10002344;
    }
LAB_10002318:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_10002344:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10002384((uint)*pbVar4);
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
 * Address: 0x10002384
 */

uint recovered_10002384(int param_1)

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
 * Address: 0x100023b4
 */

long recovered_100023b4(byte *param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_10002498;
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
      goto LAB_10002498;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10002498;
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
LAB_10002498:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10002384((uint)*pbVar6);
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
 * Address: 0x100024d8
 */

uint128 recovered_100024d8(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_10001ca0(dVar12,iVar9 * iVar6);
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
 * Address: 0x10002668
 */

void recovered_10002668(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100024d8(param_1,param_2);
  return;
}


#undef str_100092f0
#define str_100092f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb48U)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

int recovered_10002680(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_100026f0:
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
      goto LAB_1000271c;
    }
    goto LAB_10002720;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x100027b0;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002798;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_10002798;
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
  goto LAB_10002a78;
LAB_10002798:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_100027c0:
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
LAB_100028ac:
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
      goto LAB_100028ac;
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
      goto LAB_1000271c;
    }
    break;
  case 100:
  case 0x69:
code_r0x100029cc:
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
LAB_10002a68:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x10002a70:
    uVar6 = 0;
LAB_10002a74:
    recovered_10002c60((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_10002a78;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002d00((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0xb4fU));
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
      recovered_10002c60((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
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
    goto LAB_10002a78;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002d00((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0xb7dU));
      uVar7 = 0x10;
      goto code_r0x10002a70;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_100092f0;
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
      goto LAB_10002a78;
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
      goto LAB_10002a68;
    case 0x78:
code_r0x10002988:
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
      goto LAB_10002a74;
    default:
      if (bVar9 == 0x49) goto code_r0x100029cc;
      if (bVar9 == 0x58) goto code_r0x10002988;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_1000271c:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10002720:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002a78:
  param_3 = pbVar8 + 1;
  goto LAB_100026f0;
code_r0x100027b0:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_100027c0;
}

#undef str_100092f0
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c24
 */

void recovered_10002c24(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10009303
#define str_10009303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5bU)))
#undef str_10009314
#define str_10009314 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6cU)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c60
 */

void recovered_10002c60(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10009303;
  if (param_6 == 0) {
    pcVar1 = str_10009314;
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
    recovered_10002c24(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_10009303
#undef str_10009314
#undef acStack_80

#undef str_100092f0
#define str_100092f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d00
 */

void recovered_10002d00(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_100092f0;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002c24(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100092f0

/* Recovered variadic formatting boundary; Pooka's Free Software License. */
int recovered_10002d4c(char *out,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10002680(out,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d74
 */

void recovered_10002d74(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_10002df8(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_100100f0;
      if (DAT_100100f8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_10010100 == (long *)0x0) {
        DAT_10010100 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100f0
#undef DAT_100100f8
#undef DAT_10010100

#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7948U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7950U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df8
 */

void recovered_10002df8(ulong param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_100100f0;
      if (DAT_100100f8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10010100 == (long *)0x0) {
        DAT_10010100 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100f0
#undef DAT_100100f8
#undef DAT_10010100

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e78
 */

bool recovered_10002e78(ulong address,ulong size,uchar *added)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((address < 0xfffffffffffffff1 && added != (uchar *)0x0) && size <= ~address) {
    *added = '\0';
    uVar2 = (address + 0xf & 0xfffffffffffffff0) - address;
    uVar1 = size - uVar2;
    if ((uVar2 <= size && uVar1 != 0) && (0x30 < (uVar1 & 0xfffffffffffffff0))) {
      *added = '\x01';
    }
  }
  return (address < 0xfffffffffffffff1 && added != (uchar *)0x0) && size <= ~address;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec8
 */

undefined8 recovered_10002ec8(ulong *param_1,long param_2)

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
 * Address: 0x10002f1c
 */

void recovered_10002f1c(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002f3c(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_10010100
#define DAT_10010100 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f3c
 */

undefined8 recovered_10002f3c(ulong *param_1)

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
      if (DAT_10010100 == puVar2) {
        DAT_10010100 = param_1;
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

#undef DAT_10010100

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
 * Address: 0x10002fc4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002fc4(int param_1)

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

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000315c
 */

void recovered_1000315c(char *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010110 != 0) {
          DAT_10010110 = DAT_10010110 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003214(1);
        }
        else {
          if (DAT_10010110 - 0x1ffU < 0xfffffffffffffdff || DAT_10010110 == -2) {
            recovered_10003214(0);
          }
          pcVar1 = &DAT_10010118 + DAT_10010110;
          DAT_10010110 = DAT_10010110 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003214
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003214(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010110 != 0) || (param_1 != 0)) {
    if (DAT_10010110 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000156c(local_230,&DAT_10010118,DAT_10010110);
      uVar2 = DAT_10010110;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003f84(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_10010110 = 0;
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100032a0(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010110 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_1000156c(auStack_230,&DAT_10010118,DAT_10010110);
    uVar2 = DAT_10010110;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003f84(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_10010110 = 0;
  return;
}

#undef DAT_10010110
#undef DAT_10010118
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100032a8(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010110 != 0) {
    if (DAT_10010110 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000156c(auStack_230,&DAT_10010118,DAT_10010110);
      uVar2 = DAT_10010110;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003f84(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_10010110 = 0;
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10009328
#define DAT_10009328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb80U)))
#define acStack_160 (*(char (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b0
 */

void recovered_100032b0(char *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10009328;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002d4c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_1000315c(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10009328
#undef acStack_160

#undef DAT_10009346
#define DAT_10009346 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9eU)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef str_1000932b
#define str_1000932b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003314
 */

/* WARNING: Removing unreachable block (ram,0x10003360) */

void recovered_10003314(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10003338(str_1000932b);
  pcVar4 = &DAT_10009346;
  for (uVar3 = recovered_10001a48(&DAT_10009346); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010110 != 0) {
        DAT_10010110 = DAT_10010110 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003214(1);
      }
      else {
        if (DAT_10010110 - 0x1ffU < 0xfffffffffffffdff || DAT_10010110 == -2) {
          recovered_10003214(0);
        }
        pcVar1 = &DAT_10010118 + DAT_10010110;
        DAT_10010110 = DAT_10010110 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10009346
#undef DAT_10010110
#undef DAT_10010118
#undef str_1000932b

#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003338
 */

void recovered_10003338(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10001a48(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010110 != 0) {
          DAT_10010110 = DAT_10010110 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003214(1);
        }
        else {
          if (DAT_10010110 - 0x1ffU < 0xfffffffffffffdff || DAT_10010110 == -2) {
            recovered_10003214(0);
          }
          pcVar1 = &DAT_10010118 + DAT_10010110;
          DAT_10010110 = DAT_10010110 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118

#undef DAT_10009346
#define DAT_10009346 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb9eU)))
#undef DAT_10010110
#define DAT_10010110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef str_10009349
#define str_10009349 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003364
 */

/* WARNING: Removing unreachable block (ram,0x10003360) */

void recovered_10003364(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10003338(str_10009349);
  pcVar4 = &DAT_10009346;
  for (uVar3 = recovered_10001a48(&DAT_10009346); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010110 != 0) {
        DAT_10010110 = DAT_10010110 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003214(1);
      }
      else {
        if (DAT_10010110 - 0x1ffU < 0xfffffffffffffdff || DAT_10010110 == -2) {
          recovered_10003214(0);
        }
        pcVar1 = &DAT_10010118 + DAT_10010110;
        DAT_10010110 = DAT_10010110 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10009346
#undef DAT_10010110
#undef DAT_10010118
#undef str_10009349

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003388
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003388(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_100032a8();
    bVar2 = recovered_10003f84(0x44);
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
 * Address: 0x10003400
 */

undefined8 recovered_10003400(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003404
 */

void recovered_10003404(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003408
 */

undefined8 recovered_10003408(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10009328
#define DAT_10009328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb80U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
#undef str_100093ca
#define str_100093ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc22U)))
#undef str_100093d7
#define str_100093d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2fU)))
#undef str_100093e5
#define str_100093e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3dU)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003410
 */

undefined4 * recovered_10003410(byte *param_1,char *param_2)

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
    DAT_10010068 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001a6c((char *)param_1,str_100093ca);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001a6c((char *)param_1,str_100093d7);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001a6c((char *)param_1,str_100093e5);
      if (iVar3 != 0) {
        puVar4 = recovered_1000149c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010068 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001758(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10001aec(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001aec(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001aec(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10001aec(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001aec(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001aec(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10001aec(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002d4c((char *)(puVar4 + 1),0xf1,&DAT_10009328);
        recovered_10001758(&uStack_4c,0,0xc);
        uVar6 = recovered_1000364c(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010068 = 2;
LAB_100035f4:
            recovered_100014e0(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001aec(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000369c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100035f4;
              recovered_1000156c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000149c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010068 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001758(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002d4c((char *)(puVar4 + 1),0xf1,&DAT_10009328);
  return puVar4;
}

#undef DAT_10009328
#undef DAT_10010068
#undef str_100093ca
#undef str_100093d7
#undef str_100093e5
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000364c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000364c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003f84(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000369c
 */

undefined8 recovered_1000369c(long param_1,ulong param_2)

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
      pvVar2 = recovered_10001520(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_10010068 = 0xc;
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

#undef DAT_10010068

#undef DAT_10009328
#define DAT_10009328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb80U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
#undef str_100093ca
#define str_100093ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc22U)))
#undef str_100093d7
#define str_100093d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2fU)))
#undef str_100093e5
#define str_100093e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3dU)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003724
 */

undefined4 * recovered_10003724(byte *param_1,char *param_2,int *param_3)

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
    recovered_10003758(param_3);
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_10010068 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001a6c((char *)param_1,str_100093ca);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001a6c((char *)param_1,str_100093d7);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001a6c((char *)param_1,str_100093e5);
      if (iVar3 != 0) {
        puVar4 = recovered_1000149c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010068 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001758(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_10001aec(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001aec(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001aec(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_10001aec(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10001aec(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_10001aec(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_10001aec(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002d4c((char *)(puVar4 + 1),0xf1,&DAT_10009328);
        recovered_10001758(&uStack_4c,0,0xc);
        uVar6 = recovered_1000364c(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010068 = 2;
LAB_100035f4:
            recovered_100014e0(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_10001aec(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000369c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100035f4;
              recovered_1000156c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000149c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010068 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001758(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002d4c((char *)(puVar4 + 1),0xf1,&DAT_10009328);
  return puVar4;
}

#undef DAT_10009328
#undef DAT_10010068
#undef str_100093ca
#undef str_100093d7
#undef str_100093e5
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003758
 */

undefined8 recovered_10003758(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003b7c(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_100014e0(*(void **)(param_1 + 0x40));
    }
    recovered_100014e0(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000379c
 */

ulong recovered_1000379c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

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
          recovered_1000156c(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
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
            uVar4 = recovered_100038d0(param_4);
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


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d0
 */

uint recovered_100038d0(int *param_1)

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
LAB_10003968:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10003388((long)text,0x1fe,&DAT_10009302,0);
      if (bVar2) {
        uVar3 = recovered_10001a48(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10003968;
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

#undef DAT_10009302

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b4
 */

long recovered_100039b4(char *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_1000315c(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10003ab4;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_1000369c((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10001758((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_1000156c((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10003ab4;
    }
  }
  param_3 = 0;
LAB_10003ab4:
  return param_3;
}


#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ac4
 */

undefined8 recovered_10003ac4(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10010068 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10003ad0;
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
LAB_10003ad0:
  DAT_10010068 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010068

#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b58
 */

undefined8 recovered_10003b58(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10010068 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10010068

#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b7c
 */

undefined8 recovered_10003b7c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003d58(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_10010068 = 5;
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

#undef DAT_10010068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf0
 */

undefined1 recovered_10003bf0(long param_1)

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
 * Address: 0x10003bfc
 */

undefined1 recovered_10003bfc(long param_1)

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
 * Address: 0x10003c08
 */

void recovered_10003c08(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c1c
 */

uint recovered_10003c1c(uint param_1,long param_2)

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


#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c40
 */

undefined8 recovered_10003c40(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010068 = 0x16;
  }
  else {
    uVar1 = recovered_10003c78(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10010068 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10010068

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003c78(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003f84(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_10010068
#define DAT_10010068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cbc
 */

undefined8 recovered_10003cbc(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010068 = 0x16;
  }
  else {
    recovered_10001758(&uStack_2c,0,0xc);
    uVar1 = recovered_1000364c(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010068 = 2;
    }
    else {
      uVar1 = recovered_10003d58(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003c78(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_10010068 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_10010068
#undef uStack_28
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003f84(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003da8. Too many branches */
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
 * Address: 0x10003db8
 */

undefined8 recovered_10003db8(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *destination;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10001758(&uStack_3c,0,0xc);
    uVar2 = recovered_1000364c(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      destination = recovered_1000149c((ulong)uVar1);
      uVar2 = 0;
      if (destination != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_1000156c(destination,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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
 * Address: 0x10003e58
 */

bool recovered_10003e58(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003d58(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e84
 */

undefined8 recovered_10003e84(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e88
 */

void recovered_10003e88(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e8c
 */

undefined8 recovered_10003e8c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e90
 */

undefined8 recovered_10003e90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e94
 */

undefined8 recovered_10003e94(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e98
 */

int recovered_10003e98(char *left,char *right,ulong count)

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


#undef DAT_10009359
#define DAT_10009359 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbb1U)))
#undef str_1000935c
#define str_1000935c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb4U)))
#undef str_10009369
#define str_10009369 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc1U)))
#undef str_10009373
#define str_10009373 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcbU)))
#undef str_10009387
#define str_10009387 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdfU)))
#undef str_10009395
#define str_10009395 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbedU)))
#undef str_100093a7
#define str_100093a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbffU)))
#undef str_100093b3
#define str_100093b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0bU)))
#undef str_100093c4
#define str_100093c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec8
 */

char * recovered_10003ec8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10009359;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003ef4_caseD_1;
  case 2:
    return str_1000935c;
  case 5:
    return str_10009369;
  case 9:
    return str_10009373;
  case 0xc:
    return str_10009387;
  case 0xd:
    return str_10009395;
  default:
    if (param_1 == 0x11) {
      return str_100093a7;
    }
    if (param_1 == 0x16) {
      return str_100093b3;
    }
switchD_10003ef4_caseD_1:
    return str_100093c4;
  }
}

#undef DAT_10009359
#undef str_1000935c
#undef str_10009369
#undef str_10009373
#undef str_10009387
#undef str_10009395
#undef str_100093a7
#undef str_100093b3
#undef str_100093c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f68
 */

undefined8 recovered_10003f68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f6c
 */

undefined8 recovered_10003f6c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10010108
#define DAT_10010108 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

void recovered_10003f70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010108 = DAT_10010108 + 1;
  return;
}

#undef DAT_10010108

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
 * Address: 0x10003f84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003f84(int param_1)

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

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10004050(void *context,...){
 __asm__ volatile("ldr x16, [x0, #0x50]\nmov sp, x16\nldr x29, [x0, #0x40]\nldr x16, [x0, #0x48]\nbr x16");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10004064(void *context){__asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret \nbrk #1");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100040c0(void *context,int value){__asm__ volatile("cbnz w1, Lpf_context_100040c8\nmov w1, #1\nLpf_context_100040c8:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret \nbrk #1");}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004124
 */

void recovered_10004124(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10001488();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004134);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004138
 */

undefined8 recovered_10004138(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004140
 */

void recovered_10004140(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004150(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004124();
}


#undef DAT_10010318
#define DAT_10010318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004150
 */

long recovered_10004150(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10004354(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004124();
  }
  *(long *)(lVar1 + 0x10) = DAT_10010318;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_10010318 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_10010318

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000417c
 */

void * recovered_1000417c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000149c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041ac
 */

void * recovered_100041ac(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000149c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041b0
 */

void recovered_100041b0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c8
 */

void recovered_100041c8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e0
 */

void recovered_100041e0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f8
 */

void recovered_100041f8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004210
 */

undefined8 recovered_10004210(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004218
 */

uint recovered_10004218(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004228
 */

void recovered_10004228(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004238
 */

void recovered_10004238(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010328
#define DAT_10010328 (*(int *)(((uintptr_t)pf_module_state + 0x7b80U)))
#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000423c
 */

long recovered_1000423c(ulong param_1)

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
  pvVar1 = recovered_1000149c(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004124();
  }
  for (uVar3 = 0; param_1 + 0x38 != uVar3; uVar3 = uVar3 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar3) = 0;
  }
  iVar2 = DAT_10010328;
  do {
    DAT_10010328 = 1;
    if (1 < iVar2 + 1U) {
      DAT_10010328 = iVar2 + 1;
    }
    plVar4 = (long *)&DAT_10010330;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        *(int *)((long)pvVar1 + 0x30) = DAT_10010328;
        *(void **)((long)pvVar1 + 0x18) = DAT_10010330;
        DAT_10010330 = pvVar1;
        return (long)pvVar1 + 0x38;
      }
      plVar4 = (long *)(lVar5 + 0x18);
      iVar2 = DAT_10010328;
    } while (*(int *)(lVar5 + 0x30) != DAT_10010328);
  } while( true );
}

#undef DAT_10010328
#undef DAT_10010330

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100042e4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  recovered_10004314(param_1 + -0x38);
  bVar1 = recovered_10002fc4(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x38);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004314
 */

void recovered_10004314(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  long lVar3;

  if (param_1 != 0) {
    puVar2 = &DAT_10010330;
    lVar1 = DAT_10010330;
    if (DAT_10010330 != param_1) {
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

#undef DAT_10010330

#undef DAT_10010330
#define DAT_10010330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004354
 */

long recovered_10004354(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = &DAT_10010330;
  while ((lVar2 = *plVar1, lVar2 != 0 && lVar2 != param_1 &&
         (*(int *)(lVar2 + 0x30) != (int)param_1))) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  return lVar2;
}

#undef DAT_10010330

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004384
 */

long recovered_10004384(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10010318
#define DAT_10010318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b70U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000438c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000438c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10010318;
  if (DAT_10010318 != 0) {
    puVar1 = (undefined8 *)(DAT_10010318 + 0x10);
    DAT_10010318 = *(long *)(DAT_10010318 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x38);
      }
      recovered_10004314(lVar2);
      bVar3 = recovered_10002fc4(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010318
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043ec
 */

void recovered_100043ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000440c((undefined8 *)(param_1 + -0x38));
}


#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b78U)))
#define local_30 (*(undefined2 *)(pf_stack_frame + 16))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define cStack_2e (*(char *)(pf_stack_frame + 18))
#define uStack_2d (*(undefined1 *)(pf_stack_frame + 19))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000440c
 */

void recovered_1000440c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10010320;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1000446c;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10004a00((long)puVar2,(undefined8 *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[4] = puVar2;
  param_1[5] = CONCAT44(local_28,uStack_2c);
  recovered_10004524(param_1);
LAB_1000446c:
                    /* WARNING: Subroutine does not return */
  recovered_10004124();
}

#undef DAT_10010320
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010318
#define DAT_10010318 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7b70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004470
 */

void recovered_10004470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010318;
  if (DAT_10010318 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004124();
  }
  *(undefined1 *)((long)DAT_10010318 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000440c(puVar1);
}

#undef DAT_10010318

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7b78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044a0
 */

void recovered_100044a0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010320;
  DAT_10010320 = param_1;
  return;
}

#undef DAT_10010320

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7b78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b4
 */

void recovered_100044b4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010320;
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

#undef DAT_10010320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e0
 */

void recovered_100044e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000440c(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044ec
 */

void recovered_100044ec(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004124();
}


#undef DAT_10010320
#define DAT_10010320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7b78U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044f8
 */

undefined8 recovered_100044f8(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long extraout_x0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_10004354(param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004124();
  }
  if (DAT_10010320 != (long *)0x0) {
    DAT_10010320 = (long *)*DAT_10010320;
  }
  puVar2 = (undefined8 *)recovered_10004524(puVar2);
  plVar3 = DAT_10010320;
  while( true ) {
    DAT_10010320 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004124();
    }
    if (plVar3 == (long *)puVar2[4]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10004a00((long)plVar3,(undefined8 *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_100045b8;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_100045b8:
  recovered_10004050((long)plVar3);
  recovered_100044f8(extraout_x0);
  return 0;
}

#undef DAT_10010320
#undef uStack_50
#undef uStack_48

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7b78U)))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004524
 */

undefined8 recovered_10004524(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long extraout_x0;
  long *plVar2;

  plVar2 = DAT_10010320;
  while( true ) {
    DAT_10010320 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004124();
    }
    if (plVar2 == (long *)param_1[4]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10004a00((long)plVar2,(undefined8 *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_100045b8;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x2c);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_100045b8:
  recovered_10004050((long)plVar2);
  recovered_100044f8(extraout_x0);
  return 0;
}

#undef DAT_10010320
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

undefined8 recovered_100045c0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100044f8(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045cc
 */

undefined8 recovered_100045cc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d4
 */

void recovered_100045d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004124();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045e0
 */

long recovered_100045e0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10004620(*(undefined8 **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


#undef DAT_100100c0
#define DAT_100100c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7918U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004620
 */

bool recovered_10004620(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (undefined8 *)0x0) {
LAB_100046a4:
    bVar3 = true;
  }
  else {
    while ((puVar4 = param_1, bVar3 = puVar4 != (undefined8 *)0x0, puVar4 != param_2 &&
           (puVar4 != (undefined8 *)0x0))) {
      pcVar5 = (char *)puVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_100046a4;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100046a4;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (undefined8 *)0x0;
      if ((undefined *)*puVar4 == &DAT_100100c0) {
        param_1 = (undefined8 *)puVar4[2];
      }
    }
  }
  return bVar3;
}

#undef DAT_100100c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046ac
 */

void recovered_100046ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b0
 */

undefined8 recovered_100046b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b8
 */

bool recovered_100046b8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046c8
 */

bool recovered_100046c8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004700
 */

bool recovered_10004700(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000471c
 */

bool recovered_1000471c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004734
 */

bool recovered_10004734(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000474c
 */

bool recovered_1000474c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004764
 */

bool recovered_10004764(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10008850
#define DAT_10008850 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_10008858
#define DAT_10008858 (*(double *)(((uintptr_t)pf_module_state + 0xb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000477c
 */

double recovered_1000477c(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (NAN(value)) {
    dVar3 = value;
  }
  else if (value <= DAT_10008850) {
    dVar3 = 0.0;
    if (DAT_10008858 <= value) {
      iVar1 = 0;
      for (; 0.5 < value; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; value < -0.5; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
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
    }
  }
  else {
    dVar3 = INFINITY;
  }
  return dVar3;
}

#undef DAT_10008850
#undef DAT_10008858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000483c
 */

float recovered_1000483c(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000477c((double)value);
  return (float)dVar1;
}


#undef DAT_10008850
#define DAT_10008850 (*(double *)(((uintptr_t)pf_module_state + 0xa8U)))
#undef DAT_10008858
#define DAT_10008858 (*(double *)(((uintptr_t)pf_module_state + 0xb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004858
 */

double recovered_10004858(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (NAN(value)) {
    dVar3 = value;
  }
  else if (value <= DAT_10008850) {
    dVar3 = 0.0;
    if (DAT_10008858 <= value) {
      iVar1 = 0;
      for (; 0.5 < value; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; value < -0.5; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
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
    }
  }
  else {
    dVar3 = INFINITY;
  }
  return dVar3;
}

#undef DAT_10008850
#undef DAT_10008858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000485c
 */

double recovered_1000485c(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000486c
 */

uint128 recovered_1000486c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001dcc(param_1);
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
 * Address: 0x100048b8
 */

longlong recovered_100048b8(char *text,char **end,int base)

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

  for (pbVar6 = (byte *)text; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100048f8;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100048f8:
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
      goto LAB_1000497c;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (base != 0) goto LAB_1000497c;
    if (*pbVar6 != 0x30) {
      base = 10;
      goto LAB_1000497c;
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
LAB_1000497c:
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
 * Address: 0x100049fc
 */

longlong recovered_100049fc(char *text,char **end,int base)

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

  for (pbVar6 = (byte *)text; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100048f8;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100048f8:
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
      goto LAB_1000497c;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (base != 0) goto LAB_1000497c;
    if (*pbVar6 != 0x30) {
      base = 10;
      goto LAB_1000497c;
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
LAB_1000497c:
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

#undef DAT_10008870
#define DAT_10008870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8U)))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a00
 */

undefined8 recovered_10004a00(long param_1,undefined8 *param_2,undefined2 *param_3)

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
      recovered_10004bd8((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004ccc(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004ccc(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004ccc(&local_68);
        uVar5 = recovered_10004ccc(&local_68);
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
            uVar5 = recovered_10004d28(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004d28(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10008870 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004bd8((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10004620(param_2,puVar6);
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

#undef DAT_10008870
#undef local_68
#undef pbStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bd8
 */

ulong * recovered_10004bd8(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10004d00(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10004c90;
  case 1:
    puVar1 = (ulong *)recovered_10004ccc(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004d00(pbVar5,2);
    goto LAB_10004c8c;
  case 3:
    puVar1 = (ulong *)recovered_10004d00(pbVar5,4);
    goto LAB_10004c54;
  default:
    goto switchD_10004c20_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004d28(param_2);
    break;
  case 10:
    uVar3 = recovered_10004d00(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004c8c:
    pbVar4 = pbVar5 + 2;
LAB_10004c90:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004d00(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004c54:
    pbVar4 = pbVar5 + 4;
    goto LAB_10004c90;
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
switchD_10004c20_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ccc
 */

ulong recovered_10004ccc(undefined8 *param_1)

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
 * Address: 0x10004d00
 */

ulong recovered_10004d00(byte *param_1,long param_2)

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
 * Address: 0x10004d28
 */

ulong recovered_10004d28(undefined8 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004da8
 */

void recovered_10004da8(undefined1 *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  recovered_100069a0((long *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dfc
 */

void recovered_10004dfc(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0;
  recovered_10006bc8((undefined8 *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e38
 */

void recovered_10004e38(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10004e58
 */

void recovered_10004e58(undefined1 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10004e80
 */

void recovered_10004e80(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e9c
 */

void recovered_10004e9c(undefined1 *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  recovered_100069a0((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec4
 */

void recovered_10004ec4(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  recovered_10006bc8((undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eec
 */

void recovered_10004eec(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  return;
}


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
#define lStack_38 (*(long *)(pf_stack_frame + 24))
#define lStack_30 (*(long *)(pf_stack_frame + 32))
#define lStack_28 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f0c
 */

long * recovered_10004f0c(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *extraout_x0;

  if ((char)*param_2 == '\x02') {
    recovered_10006c54(&lStack_38,param_2[4]);
    *param_1 = lStack_38;
    param_1[2] = lStack_28;
    param_1[1] = lStack_30;
    lStack_38 = 0;
    lStack_30 = 0;
    lStack_28 = 0;
    recovered_100041b0((void *)0x0);
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
  puVar1 = &DAT_10009302;
  if ((undefined1 *)param_2[1] != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)param_2[1];
  }
  recovered_100069e4(param_1,(long)puVar1,param_2[2]);
  return param_1;
}

#undef DAT_10009302
#undef lStack_38
#undef lStack_30
#undef lStack_28

#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f40
 */

void recovered_10004f40(undefined8 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};


  recovered_10006c54(&local_38,param_2);
  *param_1 = local_38;
  param_1[2] = uStack_28;
  param_1[1] = local_30;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  recovered_100041b0((void *)0x0);
  return;
}

#undef local_38
#undef local_30
#undef uStack_28

#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
#undef DAT_10010068
#define DAT_10010068 (*(int *)(((uintptr_t)pf_module_state + 0x78c0U)))
#define local_38 (*(char * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f8c
 */

longlong recovered_10004f8c(void *variable)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;

  if (*(char *)variable == '\x01') {
    if (*(long *)((long)variable + 0x10) != 0) {
      local_38 = (char *)0x0;
      DAT_10010068 = 0;
      pcVar1 = &DAT_10009302;
      if (*(char **)((long)variable + 8) != (char *)0x0) {
        pcVar1 = *(char **)((long)variable + 8);
      }
      lVar3 = recovered_100049fc(pcVar1,&local_38,10);
      pcVar1 = &DAT_10009302;
      if (*(char **)((long)variable + 8) != (char *)0x0) {
        pcVar1 = *(char **)((long)variable + 8);
      }
      if ((((local_38 != (char *)0x0) && (local_38 != pcVar1)) && (*local_38 == '\0')) &&
         (DAT_10010068 != 0x22)) {
        return lVar3;
      }
      if (((2 < *(ulong *)((long)variable + 0x10)) && (*pcVar1 == '0')) &&
         ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
        local_38 = (char *)0x0;
        DAT_10010068 = 0;
        lVar3 = recovered_100049fc(pcVar1 + 2,&local_38,0x10);
        puVar2 = &DAT_10009302;
        if (*(undefined1 **)((long)variable + 8) != (undefined1 *)0x0) {
          puVar2 = *(undefined1 **)((long)variable + 8);
        }
        if (((local_38 != (char *)0x0) && (local_38 != puVar2 + 2)) &&
           ((*local_38 == '\0' && (DAT_10010068 != 0x22)))) {
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

#undef DAT_10009302
#undef DAT_10010068
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b4
 */

undefined8 * recovered_100050b4(undefined8 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  recovered_10005134((long)param_1);
  recovered_10005b44(param_1);
  return param_1;
}


#undef PTR_recovered_10007418_1000c020
#define PTR_recovered_10007418_1000c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3878U)))
#undef PTR_recovered_100074f4_1000c078
#define PTR_recovered_100074f4_1000c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x38d0U)))
#undef PTR_recovered_10007574_1000c0c0
#define PTR_recovered_10007574_1000c0c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3918U)))
#undef PTR_recovered_100075d0_1000c108
#define PTR_recovered_100075d0_1000c108 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3960U)))
#undef PTR_recovered_10007634_1000c150
#define PTR_recovered_10007634_1000c150 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x39a8U)))
#undef PTR_recovered_100076a4_1000c198
#define PTR_recovered_100076a4_1000c198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x39f0U)))
#undef PTR_recovered_1000772c_1000c1e0
#define PTR_recovered_1000772c_1000c1e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3a38U)))
#undef PTR_recovered_10007830_1000c228
#define PTR_recovered_10007830_1000c228 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3a80U)))
#undef PTR_recovered_1000793c_1000c270
#define PTR_recovered_1000793c_1000c270 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3ac8U)))
#undef PTR_recovered_10007bcc_1000c2b8
#define PTR_recovered_10007bcc_1000c2b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3b10U)))
#undef PTR_recovered_10007c24_1000c300
#define PTR_recovered_10007c24_1000c300 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3b58U)))
#undef PTR_recovered_10007c64_1000c348
#define PTR_recovered_10007c64_1000c348 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3ba0U)))
#undef PTR_recovered_10007e90_1000c390
#define PTR_recovered_10007e90_1000c390 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3be8U)))
#undef PTR_recovered_10007f3c_1000c3d8
#define PTR_recovered_10007f3c_1000c3d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c30U)))
#undef PTR_recovered_10007f98_1000c420
#define PTR_recovered_10007f98_1000c420 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c78U)))
#undef PTR_recovered_10007ff8_1000c468
#define PTR_recovered_10007ff8_1000c468 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3cc0U)))
#undef PTR_recovered_10008054_1000c4b0
#define PTR_recovered_10008054_1000c4b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3d08U)))
#undef PTR_recovered_100080b4_1000c4f8
#define PTR_recovered_100080b4_1000c4f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3d50U)))
#undef PTR_recovered_10008110_1000c540
#define PTR_recovered_10008110_1000c540 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3d98U)))
#undef PTR_recovered_10008170_1000c588
#define PTR_recovered_10008170_1000c588 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3de0U)))
#undef PTR_recovered_10008204_1000c5d0
#define PTR_recovered_10008204_1000c5d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3e28U)))
#undef PTR_recovered_1000828c_1000c618
#define PTR_recovered_1000828c_1000c618 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3e70U)))
#define plStack_158 (*(long * *)(pf_stack_frame + 440))
#define pvStack_150 (*(void * *)(pf_stack_frame + 448))
#define uStack_148 (*(undefined8 *)(pf_stack_frame + 456))
#define plStack_138 (*(long * *)(pf_stack_frame + 472))
#define uStack_129 (*(undefined1 *)(pf_stack_frame + 487))
#define pvStack_128 (*(void * *)(pf_stack_frame + 488))
#define uStack_120 (*(undefined8 *)(pf_stack_frame + 496))
#define plStack_110 (*(long * *)(pf_stack_frame + 512))
#define pvStack_108 (*(void * *)(pf_stack_frame + 520))
#define uStack_100 (*(undefined8 *)(pf_stack_frame + 528))
#define plStack_f0 (*(long * *)(pf_stack_frame + 544))
#define pvStack_e8 (*(void * *)(pf_stack_frame + 552))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 560))
#define plStack_d0 (*(long * *)(pf_stack_frame + 576))
#define pvStack_c8 (*(void * *)(pf_stack_frame + 584))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 592))
#define plStack_b0 (*(long * *)(pf_stack_frame + 608))
#define pvStack_a8 (*(void * *)(pf_stack_frame + 616))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 624))
#define plStack_90 (*(long * *)(pf_stack_frame + 640))
#define pvStack_88 (*(void * *)(pf_stack_frame + 648))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 656))
#define plStack_70 (*(long * *)(pf_stack_frame + 672))
#define pvStack_68 (*(void * *)(pf_stack_frame + 680))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 688))
#define plStack_50 (*(long * *)(pf_stack_frame + 704))
#define pvStack_48 (*(void * *)(pf_stack_frame + 712))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 720))
#define plStack_2f8 (*(long * *)(pf_stack_frame + 24))
#define pvStack_2f0 (*(void * *)(pf_stack_frame + 32))
#define uStack_2e8 (*(undefined8 *)(pf_stack_frame + 40))
#define plStack_2d8 (*(long * *)(pf_stack_frame + 56))
#define pvStack_2d0 (*(void * *)(pf_stack_frame + 64))
#define uStack_2c8 (*(undefined8 *)(pf_stack_frame + 72))
#define plStack_2b8 (*(long * *)(pf_stack_frame + 88))
#define pvStack_2b0 (*(void * *)(pf_stack_frame + 96))
#define local_12b (*(undefined2 *)(pf_stack_frame + 485))
#define uStack_2a8 (*(undefined8 *)(pf_stack_frame + 104))
#define plStack_298 (*(long * *)(pf_stack_frame + 120))
#define pvStack_290 (*(void * *)(pf_stack_frame + 128))
#define uStack_288 (*(undefined8 *)(pf_stack_frame + 136))
#define plStack_278 (*(long * *)(pf_stack_frame + 152))
#define pvStack_270 (*(void * *)(pf_stack_frame + 160))
#define uStack_268 (*(undefined8 *)(pf_stack_frame + 168))
#define plStack_258 (*(long * *)(pf_stack_frame + 184))
#define pvStack_250 (*(void * *)(pf_stack_frame + 192))
#define uStack_248 (*(undefined8 *)(pf_stack_frame + 200))
#define plStack_238 (*(long * *)(pf_stack_frame + 216))
#define pvStack_230 (*(void * *)(pf_stack_frame + 224))
#define uStack_228 (*(undefined8 *)(pf_stack_frame + 232))
#define plStack_218 (*(long * *)(pf_stack_frame + 248))
#define pvStack_210 (*(void * *)(pf_stack_frame + 256))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 264))
#define plStack_1f8 (*(long * *)(pf_stack_frame + 280))
#define pvStack_1f0 (*(void * *)(pf_stack_frame + 288))
#define uStack_1e8 (*(undefined8 *)(pf_stack_frame + 296))
#define plStack_1d8 (*(long * *)(pf_stack_frame + 312))
#define pvStack_1d0 (*(void * *)(pf_stack_frame + 320))
#define uStack_1c8 (*(undefined8 *)(pf_stack_frame + 328))
#define plStack_1b8 (*(long * *)(pf_stack_frame + 344))
#define pvStack_1b0 (*(void * *)(pf_stack_frame + 352))
#define uStack_1a8 (*(undefined8 *)(pf_stack_frame + 360))
#define plStack_198 (*(long * *)(pf_stack_frame + 376))
#define pvStack_190 (*(void * *)(pf_stack_frame + 384))
#define uStack_188 (*(undefined8 *)(pf_stack_frame + 392))
#define plStack_178 (*(long * *)(pf_stack_frame + 408))
#define pvStack_170 (*(void * *)(pf_stack_frame + 416))
#define uStack_168 (*(undefined8 *)(pf_stack_frame + 424))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005134
 */

void recovered_10005134(long param_1)

{
  unsigned char pf_stack_frame[816] __attribute__((aligned(16))) = {0};


  recovered_10006618((long *)(param_1 + 0x20));
  local_12b = (ushort)PF_PART1(local_12b, 1) << 8;
  recovered_10007358((long *)&pvStack_48,(undefined1 *)&local_12b,1);
  plStack_50 = recovered_1000417c(0x10);
  *plStack_50 = (long)&PTR_recovered_10007418_1000c020;
  recovered_10006494(param_1,1,&pvStack_48,(long *)&plStack_50);
  if (plStack_50 != (long *)0x0) {
    (**(code **)(*plStack_50 + 8))(plStack_50);
  }
  uStack_40 = 0;
  recovered_100041b0(pvStack_48);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_10007358((long *)&pvStack_68,(undefined1 *)&local_12b,1);
  plStack_70 = recovered_1000417c(0x10);
  *plStack_70 = (long)&PTR_recovered_100074f4_1000c078;
  recovered_10006494(param_1,2,&pvStack_68,(long *)&plStack_70);
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 8))(plStack_70);
  }
  uStack_60 = 0;
  recovered_100041b0(pvStack_68);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_10007358((long *)&pvStack_88,(undefined1 *)&local_12b,1);
  plStack_90 = recovered_1000417c(0x10);
  *plStack_90 = (long)&PTR_recovered_10007574_1000c0c0;
  recovered_10006494(param_1,3,&pvStack_88,(long *)&plStack_90);
  if (plStack_90 != (long *)0x0) {
    (**(code **)(*plStack_90 + 8))(plStack_90);
  }
  uStack_80 = 0;
  recovered_100041b0(pvStack_88);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_10007358((long *)&pvStack_a8,(undefined1 *)&local_12b,1);
  plStack_b0 = recovered_1000417c(0x10);
  *plStack_b0 = (long)&PTR_recovered_100075d0_1000c108;
  recovered_10006494(param_1,4,&pvStack_a8,(long *)&plStack_b0);
  if (plStack_b0 != (long *)0x0) {
    (**(code **)(*plStack_b0 + 8))(plStack_b0);
  }
  uStack_a0 = 0;
  recovered_100041b0(pvStack_a8);
  local_12b = local_12b & 0xff00;
  recovered_10007358((long *)&pvStack_c8,(undefined1 *)&local_12b,1);
  plStack_d0 = recovered_1000417c(0x10);
  *plStack_d0 = (long)&PTR_recovered_10007634_1000c150;
  recovered_10006494(param_1,5,&pvStack_c8,(long *)&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    (**(code **)(*plStack_d0 + 8))(plStack_d0);
  }
  uStack_c0 = 0;
  recovered_100041b0(pvStack_c8);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_10007358((long *)&pvStack_e8,(undefined1 *)&local_12b,1);
  plStack_f0 = recovered_1000417c(0x10);
  *plStack_f0 = (long)&PTR_recovered_100076a4_1000c198;
  recovered_10006494(param_1,6,&pvStack_e8,(long *)&plStack_f0);
  if (plStack_f0 != (long *)0x0) {
    (**(code **)(*plStack_f0 + 8))(plStack_f0);
  }
  uStack_e0 = 0;
  recovered_100041b0(pvStack_e8);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),2);
  recovered_10007358((long *)&pvStack_108,(undefined1 *)&local_12b,1);
  plStack_110 = recovered_1000417c(0x10);
  *plStack_110 = (long)&PTR_recovered_1000772c_1000c1e0;
  recovered_10006494(param_1,7,&pvStack_108,(long *)&plStack_110);
  if (plStack_110 != (long *)0x0) {
    (**(code **)(*plStack_110 + 8))(plStack_110);
  }
  uStack_100 = 0;
  recovered_100041b0(pvStack_108);
  local_12b = 0x101;
  uStack_129 = 1;
  recovered_10007358((long *)&pvStack_128,(undefined1 *)&local_12b,3);
  plStack_138 = recovered_1000417c(0x10);
  *plStack_138 = (long)&PTR_recovered_10007830_1000c228;
  recovered_10006494(param_1,8,&pvStack_128,(long *)&plStack_138);
  if (plStack_138 != (long *)0x0) {
    (**(code **)(*plStack_138 + 8))(plStack_138);
  }
  uStack_120 = 0;
  recovered_100041b0(pvStack_128);
  local_12b = 0x101;
  uStack_129 = 0;
  recovered_10007358((long *)&pvStack_150,(undefined1 *)&local_12b,3);
  plStack_158 = recovered_1000417c(0x10);
  *plStack_158 = (long)&PTR_recovered_1000793c_1000c270;
  recovered_10006494(param_1,9,&pvStack_150,(long *)&plStack_158);
  if (plStack_158 != (long *)0x0) {
    (**(code **)(*plStack_158 + 8))(plStack_158);
  }
  uStack_148 = 0;
  recovered_100041b0(pvStack_150);
  local_12b = 0x101;
  recovered_10007358((long *)&pvStack_170,(undefined1 *)&local_12b,2);
  plStack_178 = recovered_1000417c(0x10);
  *plStack_178 = (long)&PTR_recovered_10007bcc_1000c2b8;
  recovered_10006494(param_1,10,&pvStack_170,(long *)&plStack_178);
  if (plStack_178 != (long *)0x0) {
    (**(code **)(*plStack_178 + 8))(plStack_178);
  }
  uStack_168 = 0;
  recovered_100041b0(pvStack_170);
  local_12b = CONCAT11(PF_PART1(local_12b, 1),1);
  recovered_10007358((long *)&pvStack_190,(undefined1 *)&local_12b,1);
  plStack_198 = recovered_1000417c(0x10);
  *plStack_198 = (long)&PTR_recovered_10007c24_1000c300;
  recovered_10006494(param_1,0xb,&pvStack_190,(long *)&plStack_198);
  if (plStack_198 != (long *)0x0) {
    (**(code **)(*plStack_198 + 8))(plStack_198);
  }
  uStack_188 = 0;
  recovered_100041b0(pvStack_190);
  local_12b = 0x202;
  recovered_10007358((long *)&pvStack_1b0,(undefined1 *)&local_12b,2);
  plStack_1b8 = recovered_1000417c(0x10);
  *plStack_1b8 = (long)&PTR_recovered_10007c64_1000c348;
  recovered_10006494(param_1,0xc,&pvStack_1b0,(long *)&plStack_1b8);
  if (plStack_1b8 != (long *)0x0) {
    (**(code **)(*plStack_1b8 + 8))(plStack_1b8);
  }
  uStack_1a8 = 0;
  recovered_100041b0(pvStack_1b0);
  local_12b = 2;
  recovered_10007358((long *)&pvStack_1d0,(undefined1 *)&local_12b,2);
  plStack_1d8 = recovered_1000417c(0x10);
  *plStack_1d8 = (long)&PTR_recovered_10007e90_1000c390;
  recovered_10006494(param_1,0xd,&pvStack_1d0,(long *)&plStack_1d8);
  if (plStack_1d8 != (long *)0x0) {
    (**(code **)(*plStack_1d8 + 8))(plStack_1d8);
  }
  uStack_1c8 = 0;
  recovered_100041b0(pvStack_1d0);
  local_12b = 0x102;
  recovered_10007358((long *)&pvStack_1f0,(undefined1 *)&local_12b,2);
  plStack_1f8 = recovered_1000417c(0x10);
  *plStack_1f8 = (long)&PTR_recovered_10007f3c_1000c3d8;
  recovered_10006494(param_1,0xe,&pvStack_1f0,(long *)&plStack_1f8);
  if (plStack_1f8 != (long *)0x0) {
    (**(code **)(*plStack_1f8 + 8))(plStack_1f8);
  }
  uStack_1e8 = 0;
  recovered_100041b0(pvStack_1f0);
  local_12b = 0x202;
  recovered_10007358((long *)&pvStack_210,(undefined1 *)&local_12b,2);
  plStack_218 = recovered_1000417c(0x10);
  *plStack_218 = (long)&PTR_recovered_10007f98_1000c420;
  recovered_10006494(param_1,0xf,&pvStack_210,(long *)&plStack_218);
  if (plStack_218 != (long *)0x0) {
    (**(code **)(*plStack_218 + 8))(plStack_218);
  }
  uStack_208 = 0;
  recovered_100041b0(pvStack_210);
  local_12b = 0x102;
  recovered_10007358((long *)&pvStack_230,(undefined1 *)&local_12b,2);
  plStack_238 = recovered_1000417c(0x10);
  *plStack_238 = (long)&PTR_recovered_10007ff8_1000c468;
  recovered_10006494(param_1,0x10,&pvStack_230,(long *)&plStack_238);
  if (plStack_238 != (long *)0x0) {
    (**(code **)(*plStack_238 + 8))(plStack_238);
  }
  uStack_228 = 0;
  recovered_100041b0(pvStack_230);
  local_12b = 0x202;
  recovered_10007358((long *)&pvStack_250,(undefined1 *)&local_12b,2);
  plStack_258 = recovered_1000417c(0x10);
  *plStack_258 = (long)&PTR_recovered_10008054_1000c4b0;
  recovered_10006494(param_1,0x11,&pvStack_250,(long *)&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (**(code **)(*plStack_258 + 8))(plStack_258);
  }
  uStack_248 = 0;
  recovered_100041b0(pvStack_250);
  local_12b = 0x102;
  recovered_10007358((long *)&pvStack_270,(undefined1 *)&local_12b,2);
  plStack_278 = recovered_1000417c(0x10);
  *plStack_278 = (long)&PTR_recovered_100080b4_1000c4f8;
  recovered_10006494(param_1,0x12,&pvStack_270,(long *)&plStack_278);
  if (plStack_278 != (long *)0x0) {
    (**(code **)(*plStack_278 + 8))(plStack_278);
  }
  uStack_268 = 0;
  recovered_100041b0(pvStack_270);
  local_12b = 0x202;
  recovered_10007358((long *)&pvStack_290,(undefined1 *)&local_12b,2);
  plStack_298 = recovered_1000417c(0x10);
  *plStack_298 = (long)&PTR_recovered_10008110_1000c540;
  recovered_10006494(param_1,0x13,&pvStack_290,(long *)&plStack_298);
  if (plStack_298 != (long *)0x0) {
    (**(code **)(*plStack_298 + 8))(plStack_298);
  }
  uStack_288 = 0;
  recovered_100041b0(pvStack_290);
  local_12b = 0x102;
  recovered_10007358((long *)&pvStack_2b0,(undefined1 *)&local_12b,2);
  plStack_2b8 = recovered_1000417c(0x10);
  *plStack_2b8 = (long)&PTR_recovered_10008170_1000c588;
  recovered_10006494(param_1,0x14,&pvStack_2b0,(long *)&plStack_2b8);
  if (plStack_2b8 != (long *)0x0) {
    (**(code **)(*plStack_2b8 + 8))(plStack_2b8);
  }
  uStack_2a8 = 0;
  recovered_100041b0(pvStack_2b0);
  local_12b = 0x202;
  recovered_10007358((long *)&pvStack_2d0,(undefined1 *)&local_12b,2);
  plStack_2d8 = recovered_1000417c(0x10);
  *plStack_2d8 = (long)&PTR_recovered_10008204_1000c5d0;
  recovered_10006494(param_1,0x15,&pvStack_2d0,(long *)&plStack_2d8);
  if (plStack_2d8 != (long *)0x0) {
    (**(code **)(*plStack_2d8 + 8))(plStack_2d8);
  }
  uStack_2c8 = 0;
  recovered_100041b0(pvStack_2d0);
  local_12b = 0x202;
  recovered_10007358((long *)&pvStack_2f0,(undefined1 *)&local_12b,2);
  plStack_2f8 = recovered_1000417c(0x10);
  *plStack_2f8 = (long)&PTR_recovered_1000828c_1000c618;
  recovered_10006494(param_1,0x16,&pvStack_2f0,(long *)&plStack_2f8);
  if (plStack_2f8 != (long *)0x0) {
    (**(code **)(*plStack_2f8 + 8))(plStack_2f8);
  }
  uStack_2e8 = 0;
  recovered_100041b0(pvStack_2f0);
  return;
}

#undef PTR_recovered_10007418_1000c020
#undef PTR_recovered_100074f4_1000c078
#undef PTR_recovered_10007574_1000c0c0
#undef PTR_recovered_100075d0_1000c108
#undef PTR_recovered_10007634_1000c150
#undef PTR_recovered_100076a4_1000c198
#undef PTR_recovered_1000772c_1000c1e0
#undef PTR_recovered_10007830_1000c228
#undef PTR_recovered_1000793c_1000c270
#undef PTR_recovered_10007bcc_1000c2b8
#undef PTR_recovered_10007c24_1000c300
#undef PTR_recovered_10007c64_1000c348
#undef PTR_recovered_10007e90_1000c390
#undef PTR_recovered_10007f3c_1000c3d8
#undef PTR_recovered_10007f98_1000c420
#undef PTR_recovered_10007ff8_1000c468
#undef PTR_recovered_10008054_1000c4b0
#undef PTR_recovered_100080b4_1000c4f8
#undef PTR_recovered_10008110_1000c540
#undef PTR_recovered_10008170_1000c588
#undef PTR_recovered_10008204_1000c5d0
#undef PTR_recovered_1000828c_1000c618
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
#undef plStack_2f8
#undef pvStack_2f0
#undef uStack_2e8
#undef plStack_2d8
#undef pvStack_2d0
#undef uStack_2c8
#undef plStack_2b8
#undef pvStack_2b0
#undef local_12b
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
 * Address: 0x10005b44
 */

void recovered_10005b44(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = recovered_10005b8c((int *)*param_1);
  *(bool *)(param_1 + 9) = !bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b78
 */

undefined8 * recovered_10005b78(undefined8 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  recovered_10005134((long)param_1);
  recovered_10005b44(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b7c
 */

void recovered_10005b7c(undefined8 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  bVar1 = recovered_10005b8c((int *)*param_1);
  *(bool *)(param_1 + 9) = !bVar1;
  *(undefined1 *)((long)param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b84
 */

undefined8 recovered_10005b84(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b8c
 */

bool recovered_10005b8c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#define pvStack_110 (*(void * *)(pf_stack_frame + 32))
#define uStack_108 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_100 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_f8 (*(ulong *)(pf_stack_frame + 56))
#define uStack_f0 (*(ulong *)(pf_stack_frame + 64))
#define uStack_e8 (*(undefined1 *)(pf_stack_frame + 72))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_b8 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_90 (*(undefined8 *)(pf_stack_frame + 160))
#define iStack_80 (*(int *)(pf_stack_frame + 176))
#define local_118 (*(int (*)[70])(pf_stack_frame + 24))
#define local_e0 (*(void * *)(pf_stack_frame + 80))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 88))
#define local_c8 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_c0 (*(ulong *)(pf_stack_frame + 112))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 128))
#define local_a8 (*(byte *)(pf_stack_frame + 136))
#define local_a0 (*(long *)(pf_stack_frame + 144))
#define local_98 (*(undefined8 *)(pf_stack_frame + 152))
#define local_84 (*(int *)(pf_stack_frame + 172))
#define local_7c (*(char *)(pf_stack_frame + 180))
#define local_7b (*(char (*)[123])(pf_stack_frame + 181))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bbc
 */

byte recovered_10005bbc(undefined8 *param_1)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  void *pvVar10;
  long *plVar11;
  byte bVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  char *pcVar20;

  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    piVar15 = (int *)*param_1;
    iVar13 = *(int *)(param_1 + 7);
    iVar16 = *(int *)((long)param_1 + 0x3c);
    bVar6 = recovered_1000602c(piVar15,iVar13,iVar16);
    if (bVar6) {
      uVar8 = recovered_1000608c(piVar15,iVar13,iVar16);
      if (uVar8 == 0) {
        recovered_10006130((long)param_1);
        local_118[0] = *(int *)(param_1 + 7);
        local_c8 = (undefined1 *)CONCAT44(PF_PART4(local_c8, 4),*(undefined4 *)((long)param_1 + 0x3c));
      }
      else {
        if (uVar8 == 0xffffff) {
          *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
        }
        else {
          bVar12 = *(byte *)((long)param_1 + 0x49);
          uVar4 = *(uint *)((long)param_1 + 0x44);
          uVar3 = uVar4 - uVar8;
          if (uVar4 <= uVar8) {
            uVar3 = uVar8 - uVar4;
          }
          *(uint *)((long)param_1 + 0x44) = uVar8;
          *(undefined1 *)((long)param_1 + 0x49) = 0;
          if (((bVar12 & 1) != 0) || (uVar8 != uVar4)) {
            local_84 = iVar16;
            iStack_80 = iVar13;
            recovered_100060e8(&iStack_80,&local_84,(uint)*(byte *)(param_1 + 8));
            local_98 = 0;
            uStack_90 = 0;
            local_a0 = 0;
            if (((ulong)uVar3 < (ulong)param_1[5]) && (param_1[4] != 0)) {
              plVar11 = (long *)(param_1[4] + (ulong)uVar3 * 0x20);
              recovered_10006154(&local_a0,plVar11[1]);
              pcVar20 = (char *)*plVar11;
              pcVar2 = pcVar20 + plVar11[1];
              iVar13 = local_84;
              iVar16 = iStack_80;
              do {
                if (pcVar20 == pcVar2) {
                  *(int *)(param_1 + 7) = iVar16;
                  *(int *)((long)param_1 + 0x3c) = iVar13;
                  plVar11 = (long *)plVar11[3];
                  if (plVar11 != (long *)0x0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11,param_1,&local_a0);
                    iVar13 = *(int *)((long)param_1 + 0x3c);
                    iVar16 = *(int *)(param_1 + 7);
                  }
                  goto LAB_10005f7c;
                }
                bVar6 = false;
                cVar5 = *pcVar20;
                piVar15 = (int *)*param_1;
                bVar12 = *(byte *)(param_1 + 8);
                local_c0 = 0;
                uStack_b8 = 0;
                local_c8 = (undefined1 *)0x0;
                local_b0 = 0x100000001;
                local_a8 = 0;
                local_e0 = (void *)CONCAT44(PF_PART4(local_e0, 4),iVar13);
                iVar19 = iVar13;
                local_118[0] = iVar16;
LAB_10005d84:
                iVar17 = local_118[0];
                bVar7 = recovered_1000602c(piVar15,local_118[0],iVar19);
                if (bVar7) {
                  uVar8 = recovered_1000608c(piVar15,iVar17,iVar19);
                  if (uVar8 != 0xffffff) goto code_r0x10005db0;
                  recovered_100060e8(local_118,(int *)&local_e0,(uint)bVar12);
                  local_b0 = CONCAT44((int)local_e0,local_118[0]);
                  iVar19 = (int)local_e0;
                  iVar17 = local_118[0];
                  if ((local_a8 & 1) != 0) goto LAB_10005e50;
                  if (cVar5 == '\x02') {
                    uVar9 = recovered_100062c8(&local_c8);
                    uVar14 = uVar9 + 1;
                    if (uVar9 == 0xffffffffffffffff) {
                      uVar14 = 0xffffffffffffffff;
                    }
                    uStack_f8 = 0;
                    uStack_100 = 0;
                    uStack_108 = 0;
                    pvStack_110 = (void *)0x0;
                    local_118[0] = CONCAT31(PF_PART3(local_118[0], 1),2);
                    uStack_e8 = local_c0 == 0;
                    uStack_f0 = uVar14;
                    recovered_100071cc(&local_a0,(undefined1 *)local_118);
                    recovered_100062fc((long)param_1,uVar14);
LAB_10005f50:
                    pvVar10 = pvStack_110;
                  }
                  else {
                    if (cVar5 == '\x01') {
                      uStack_f8 = recovered_100062c8(&local_c8);
                      if (0x7ffffffffffffffe < uStack_f8) {
                        uStack_f8 = 0x7fffffffffffffff;
                      }
                      uStack_100 = 0;
                      uStack_f0 = 0;
                      uStack_108 = 0;
                      pvStack_110 = (void *)0x0;
                      local_118[0] = CONCAT31(PF_PART3(local_118[0], 1),1);
                      uStack_e8 = local_c0 == 0;
                      recovered_100071cc(&local_a0,(undefined1 *)local_118);
                      goto LAB_10005f50;
                    }
                    if (cVar5 != '\0') goto LAB_10005f58;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_e0 = (void *)0x0;
                    recovered_100061ec((long *)&local_e0,local_c0);
                    puVar1 = local_c8;
                    for (uVar14 = local_c0; uVar14 != 0; uVar14 = uVar14 - 1) {
                      recovered_10006264((long *)&local_e0,*puVar1);
                      puVar1 = puVar1 + 1;
                    }
                    recovered_10004dfc((undefined1 *)local_118,&local_e0);
                    uStack_e8 = local_c0 == 0;
                    recovered_100071cc(&local_a0,(undefined1 *)local_118);
                    recovered_100041b0(pvStack_110);
                    pvVar10 = local_e0;
                  }
                  recovered_100041b0(pvVar10);
LAB_10005f58:
                  bVar6 = false;
                  iVar13 = PF_PART4(local_b0, 4);
                  iVar16 = (int)local_b0;
                  goto LAB_10005f60;
                }
                local_b0 = CONCAT44(iVar19,iVar17);
                local_a8 = 1;
LAB_10005e50:
                *(int *)(param_1 + 7) = iVar17;
                *(int *)((long)param_1 + 0x3c) = iVar19;
                bVar6 = true;
                *(undefined1 *)(param_1 + 9) = 1;
LAB_10005f60:
                local_c0 = 0;
                recovered_100041b0(local_c8);
                pcVar20 = pcVar20 + 1;
              } while (!bVar6);
              bVar12 = 0;
            }
            else {
              *(int *)(param_1 + 7) = iStack_80;
              *(int *)((long)param_1 + 0x3c) = local_84;
              iVar13 = local_84;
              iVar16 = iStack_80;
LAB_10005f7c:
              bVar6 = recovered_1000602c((int *)*param_1,iVar16,iVar13);
              if (bVar6) {
                bVar12 = *(byte *)(param_1 + 9) ^ 1;
              }
              else {
                bVar12 = 0;
                *(undefined1 *)(param_1 + 9) = 1;
              }
            }
            recovered_100070f8(&local_a0);
            goto LAB_10005cc4;
          }
        }
        local_c8 = (undefined1 *)CONCAT44(PF_PART4(local_c8, 4),iVar16);
        local_118[0] = iVar13;
      }
      recovered_100060e8(local_118,(int *)&local_c8,(uint)*(byte *)(param_1 + 8));
      *(int *)(param_1 + 7) = local_118[0];
      *(int *)((long)param_1 + 0x3c) = (int)local_c8;
      bVar6 = recovered_1000602c((int *)*param_1,local_118[0],(int)local_c8);
      if (bVar6) {
        bVar12 = *(byte *)(param_1 + 9) ^ 1;
        goto LAB_10005cc4;
      }
    }
    bVar12 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    bVar12 = 0;
  }
LAB_10005cc4:
  return bVar12 & 1;
code_r0x10005db0:
  if (bVar6) {
    bVar6 = true;
  }
  else {
    local_7b[0] = (char)(uVar8 >> 0x10);
    local_7b[1] = (char)(uVar8 >> 8);
    local_7b[2] = (char)uVar8;
    for (lVar18 = 0; (bVar6 = lVar18 != 3, bVar6 && (local_7c = local_7b[lVar18], local_7c != -1));
        lVar18 = lVar18 + 1) {
      recovered_10006d98((long *)&local_c8,&local_7c);
    }
  }
  recovered_100060e8(local_118,(int *)&local_e0,(uint)bVar12);
  iVar19 = (int)local_e0;
  goto LAB_10005d84;
}

#undef pvStack_110
#undef uStack_108
#undef uStack_100
#undef uStack_f8
#undef uStack_f0
#undef uStack_e8
#undef uStack_d0
#undef uStack_b8
#undef uStack_90
#undef iStack_80
#undef local_118
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_84
#undef local_7c
#undef local_7b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000602c
 */

bool recovered_1000602c(int *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;

  bVar1 = recovered_10005b8c(param_1);
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
 * Address: 0x1000608c
 */

uint recovered_1000608c(int *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  uint uVar3;

  bVar2 = recovered_1000602c(param_1,param_2,param_3);
  uVar3 = (uint)bVar2;
  if (bVar2) {
    pbVar1 = (byte *)(*(long *)(param_1 + 2) + (long)(param_2 + *param_1 * (param_3 + -1) + -1) * 4)
    ;
    uVar3 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060e8
 */

void recovered_100060e8(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    goto switchD_1000610c_default;
  }
  *param_1 = *param_1 + iVar2;
switchD_1000610c_default:
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006130
 */

void recovered_10006130(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x40) < 4) {
    *(char *)(param_1 + 0x40) = (char)(0x30201 >> (ulong)((*(byte *)(param_1 + 0x40) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006154
 */

void recovered_10006154(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10007178(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000718c((undefined1 *)((long)pvVar1 + lVar2),(undefined1 *)(*param_1 + lVar2));
      recovered_10006b84((undefined8 *)(*param_1 + lVar2 + 8));
      lVar2 = lVar2 + 0x38;
    }
    recovered_100041b0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061ec
 */

void recovered_100061ec(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006bac(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)((long)pvVar1 + param_1[1]) = 0;
    recovered_100041b0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006264
 */

void recovered_10006264(long *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_100061ec(param_1,uVar1);
  }
  recovered_10006b18(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062c8
 */

ulong recovered_100062c8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100062fc
 */

long recovered_100062fc(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    recovered_10006678((long *)(param_1 + 8),param_2);
  }
  return *(long *)(param_1 + 8) + param_2 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006344
 */

void recovered_10006344(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_10005bbc(param_1);
  } while ((bVar1 & 1) != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006368
 */

undefined1 recovered_10006368(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x48);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006370
 */

long recovered_10006370(long param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    recovered_100063c0((long *)(param_1 + 0x20),param_2 + 1);
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + param_2 * 0x20);
  recovered_10006e80(plVar1,(long *)param_3);
  recovered_10006edc(plVar1 + 3,(long *)(param_3 + 0x18));
  return (long)plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c0
 */

void recovered_100063c0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    lVar2 = uVar3 * 0x20;
    for (; lVar2 = lVar2 + -0x20, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_10007018((undefined8 *)(*param_1 + lVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_10007240(param_1,param_2);
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
 * Address: 0x10006460
 */

long * recovered_10006460(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006e80(param_1,param_2);
  recovered_10006edc(param_1 + 3,param_2 + 3);
  return param_1;
}


#define local_50 (*(undefined8 *)(pf_stack_frame + 16))
#define local_40 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24))
#define lStack_38 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006494
 */

void recovered_10006494(long param_1,ulong param_2,undefined8 *param_3,long *param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};


  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  recovered_10006508(&local_50,param_3);
  recovered_10006558(&lStack_38,param_4);
  recovered_10006370(param_1,param_2,(long)&local_50);
  recovered_10007018(&local_50);
  return;
}

#undef local_50
#undef local_40
#undef uStack_48
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006508
 */

undefined8 * recovered_10006508(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100041b0((void *)*param_1);
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
 * Address: 0x10006558
 */

long * recovered_10006558(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *owner;

  if (param_1 != param_2) {
    owner = (long *)*param_1;
    if (owner != (long *)0x0) {
      (**(code **)(*owner + 8))(owner);
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#define uStack_28 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 40))
#define local_30 (*(undefined8 *)(pf_stack_frame + 16))
#define local_20 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065a4
 */

void recovered_100065a4(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};


  if (param_2 < *(ulong *)(param_1 + 0x28)) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    recovered_100065e4((undefined8 *)(*(long *)(param_1 + 0x20) + param_2 * 0x20),&local_30);
    recovered_10007018(&local_30);
  }
  return;
}

#undef uStack_28
#undef uStack_18
#undef local_30
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065e4
 */

undefined8 * recovered_100065e4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006508(param_1,param_2);
  recovered_10006558(param_1 + 3,param_2 + 3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006618
 */

void recovered_10006618(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10007018((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006668
 */

long recovered_10006668(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006670
 */

long recovered_10006670(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006678
 */

void recovered_10006678(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    lVar3 = uVar2 * 0x28 + -0x20;
    for (; param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_10006b84((undefined8 *)(*param_1 + lVar3));
      lVar3 = lVar3 + -0x28;
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_100083a8(param_1,param_2);
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
 * Address: 0x10006724
 */

long recovered_10006724(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    return 0;
  }
  return *(long *)(param_1 + 8) + param_2 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006744
 */

void recovered_10006744(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000848c((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000676c
 */

void recovered_1000676c(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008500((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 56))
#define pvStack_40 (*(void * *)(pf_stack_frame + 32))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006794
 */

undefined8 recovered_10006794(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  auStack_48[0] = 0;
  uStack_38 = 0;
  pvStack_40 = (void *)0x0;
  uStack_28 = 0;
  uStack_30 = 0;
  recovered_10004e9c(auStack_48,param_2);
  recovered_1000676c(param_1,auStack_48);
  recovered_100041b0(pvStack_40);
  return extraout_x0;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 56))
#define pvStack_40 (*(void * *)(pf_stack_frame + 32))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067d0
 */

undefined8 recovered_100067d0(long param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  auStack_48[0] = 0;
  uStack_38 = 0;
  pvStack_40 = (void *)0x0;
  uStack_28 = 0;
  uStack_30 = 0;
  recovered_10004ec4(auStack_48,param_2);
  recovered_1000676c(param_1,auStack_48);
  recovered_100041b0(pvStack_40);
  return extraout_x0;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 56))
#define local_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
#define local_40 (*(void * *)(pf_stack_frame + 32))
#define local_30 (*(undefined8 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000680c
 */

undefined8 recovered_1000680c(long param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 extraout_x0 = 0;

  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_48[0] = 2;
  local_30 = 0;
  uStack_28 = param_2;
  recovered_1000676c(param_1,local_48);
  recovered_100041b0(local_40);
  return extraout_x0;
}

#undef uStack_38
#undef uStack_28
#undef local_48
#undef local_40
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000684c
 */

void recovered_1000684c(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_100062fc(param_1,param_2);
  recovered_1000848c((long *)(param_1 + 8),puVar1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006874
 */

void recovered_10006874(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  recovered_100068b8(param_1,param_2);
  puVar1 = (undefined1 *)recovered_100062fc(param_1,param_2);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068b8
 */

void recovered_100068b8(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      recovered_10006b84((undefined8 *)(*plVar1 + lVar4));
      lVar4 = lVar4 + -0x28;
    }
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_100083a8(plVar1,param_2);
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


#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 56))
#define pvStack_40 (*(void * *)(pf_stack_frame + 32))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068dc
 */

long recovered_100068dc(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

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
    recovered_1000676c(param_1,auStack_48);
    lVar1 = recovered_100062fc(param_1,extraout_x0);
    recovered_100041b0(pvStack_40);
    return lVar1;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    recovered_10006678((long *)(param_1 + 8),uVar2);
  }
  return *(long *)(param_1 + 8) + uVar2 * 0x28 + -0x28;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006934
 */

long recovered_10006934(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = *(ulong *)(param_1 + 0x50);
  if ((uVar1 == 0) || (*(ulong *)(param_1 + 0x10) < uVar1)) {
    return 0;
  }
  return *(long *)(param_1 + 8) + uVar1 * 0x28 + -0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006954
 */

long recovered_10006954(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000695c
 */

long recovered_1000695c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006964
 */

undefined8 recovered_10006964(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined8 *)(param_1 + 0x50);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000696c
 */

undefined4 recovered_1000696c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006974
 */

undefined4 recovered_10006974(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x3c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000697c
 */

undefined1 recovered_1000697c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x40);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006984
 */

void recovered_10006984(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000698c
 */

undefined4 recovered_1000698c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x44);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006994
 */

void recovered_10006994(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x44) = param_2 & 0xffffff;
  return;
}


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069a0
 */

long * recovered_100069a0(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_10009302;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_100069e4(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_10009302

#define local_50 (*(void * *)(pf_stack_frame + 16))
#define local_48 (*(long *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069e4
 */

void recovered_100069e4(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

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
  uVar2 = recovered_10006acc(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10006b18(param_1);
    }
    else {
      recovered_100061ec(param_1,uVar1);
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
    recovered_10006b50(&local_50,*param_1 + local_38,uVar1);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar6 = param_1[2];
    lVar5 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pvVar3;
    local_48 = lVar5;
    lStack_40 = lVar6;
    recovered_100041b0(pvVar3);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006acc
 */

undefined8 recovered_10006acc(long *param_1,long param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10006b18
 */

void recovered_10006b18(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (*param_1 == 0) {
    pvVar1 = recovered_10006bac(0);
    *param_1 = (long)pvVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

undefined8 * recovered_10006b50(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_100069e4(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b84
 */

undefined8 * recovered_10006b84(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100041b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bac
 */

void * recovered_10006bac(ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = recovered_1000417c(capacity + 1);
  *puVar1 = 0;
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bc8
 */

undefined8 * recovered_10006bc8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_100041b0((void *)*param_1);
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


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c14
 */

long * recovered_10006c14(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10009302;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100069e4(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10009302

#define abStack_40 (*(byte (*)[64])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c54
 */

void recovered_10006c54(undefined8 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10006cb0(abStack_40,abStack_40 + 0x20,param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10006b50(param_1,(long)abStack_40,PF_PART8(auVar1, 0) - (long)abStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef abStack_40

#define abStack_42 (*(byte (*)[66])(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cb0
 */

uint128 recovered_10006cb0(byte *param_1,byte *param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10006d7c
 */

void recovered_10006d7c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10006d98
 */

long recovered_10006d98(long *param_1,undefined1 *param_2)

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
    recovered_10006e00(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

void recovered_10006e00(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006e74(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_100041b0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e74
 */

void * recovered_10006e74(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000149c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


#define lStack_28 (*(long *)(pf_stack_frame + 40))
#define local_38 (*(void * *)(pf_stack_frame + 24))
#define local_30 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

long * recovered_10006e80(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;

  if (param_1 != param_2) {
    recovered_10006f3c((long *)&local_38,param_2);
    pvVar1 = (void *)*param_1;
    *param_1 = (long)local_38;
    lVar2 = param_1[2];
    param_1[2] = lStack_28;
    param_1[1] = local_30;
    local_30 = 0;
    local_38 = pvVar1;
    lStack_28 = lVar2;
    recovered_100041b0(pvVar1);
  }
  return param_1;
}

#undef lStack_28
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006edc
 */

long * recovered_10006edc(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  void *pvVar2;

  if (param_1 != param_2) {
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    plVar1 = (long *)*param_1;
    *param_1 = (long)pvVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f3c
 */

long * recovered_10006f3c(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10006f98(param_1,param_2[1]);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  for (lVar3 = 0; lVar2 != lVar3; lVar3 = lVar3 + 1) {
    *(undefined1 *)(*param_1 + lVar3) = *(undefined1 *)(lVar1 + lVar3);
  }
  param_1[1] = lVar2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f98
 */

void recovered_10006f98(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_1000700c(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_100041b0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000700c
 */

void * recovered_1000700c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000149c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007018
 */

undefined8 * recovered_10007018(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *owner;

  owner = (long *)param_1[3];
  if (owner != (long *)0x0) {
    (**(code **)(*owner + 8))(owner);
  }
  param_1[1] = 0;
  recovered_100041b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000704c
 */

long * recovered_1000704c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007078(param_1);
  recovered_100041b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007078
 */

void recovered_10007078(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10006b84((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070cc
 */

long * recovered_100070cc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006618(param_1);
  recovered_100041b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f8
 */

long * recovered_100070f8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007124(param_1);
  recovered_100041b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007124
 */

void recovered_10007124(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x30;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10006b84((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007178
 */

void * recovered_10007178(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x38;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000149c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000718c
 */

undefined1 * recovered_1000718c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  *param_1 = *param_2;
  recovered_10006d7c((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071cc
 */

long recovered_100071cc(long *param_1,undefined1 *param_2)

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
    recovered_10006154(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_1000718c((undefined1 *)(*param_1 + lVar2 * 0x38),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x38;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007240
 */

void recovered_10007240(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_100072d4(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_100072e4((void *)((long)pvVar1 + lVar2),(void *)(*param_1 + lVar2));
      recovered_10007018((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x20;
    }
    recovered_100041b0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072d4
 */

void * recovered_100072d4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x20;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000149c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072e4
 */

void recovered_100072e4(void *param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10007310(param_1,param_2);
  *(undefined8 *)((long)pvVar1 + 0x18) = *(undefined8 *)((long)param_2 + 0x18);
  *(undefined8 *)((long)param_2 + 0x18) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

void * recovered_10007310(void *destination,void *source)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x1000732c
 */

undefined8 * recovered_1000732c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100041b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007358
 */

long * recovered_10007358(long *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_10006f98(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 - 1) {
    recovered_100073b4(param_1,param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073b4
 */

long recovered_100073b4(long *param_1,undefined1 *param_2)

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
    recovered_10006f98(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007418
 */

void recovered_10007418(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000741c
 */

void recovered_1000741c(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
#undef DAT_10010078
#define DAT_10010078 (*(uint * *)(((uintptr_t)pf_module_state + 0x78d0U)))
#define pvStack_38 (*(void * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007420
 */

void recovered_10007420(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char *source;
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;

  puVar1 = DAT_10010078;
  if (*(long *)((long)arguments + 8) != 0) {
    if (*(char *)(*(long *)arguments + 0x30) != '\x01') {
      pcVar8 = *(char **)(*(long *)arguments + 8);
      source = &DAT_10009302;
      if (pcVar8 != (char *)0x0) {
        source = pcVar8;
      }
      if (DAT_10010078 == (uint *)0x0) {
        return;
      }
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
      } while (source[uVar6] != '\0');
      if ((((uVar6 != 0) && (source != (char *)0x0)) && (DAT_10010078 != (uint *)0x0)) &&
         (*(char *)((long)DAT_10010078 + 0x125) == '\x01')) {
        if ((*DAT_10010078 & 0xfffffffe) == 2) {
          recovered_1000315c(source,uVar6);
          *(ulong *)(puVar1 + 0x46) = *(long *)(puVar1 + 0x46) + uVar6;
        }
        else {
          if ((*(byte *)((long)DAT_10010078 + 0x126) & 1) == 0) {
            lVar4 = *(long *)(DAT_10010078 + 0x46);
          }
          else {
            lVar4 = *(long *)(DAT_10010078 + 0x42);
            *(long *)(DAT_10010078 + 0x46) = lVar4;
          }
          uVar2 = recovered_1000369c((long)puVar1,lVar4 + uVar6);
          if ((int)uVar2 != 0) {
            uVar5 = *(ulong *)(puVar1 + 0x46);
            uVar7 = *(ulong *)(puVar1 + 0x42);
            if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
              recovered_10001758((void *)(*(long *)(puVar1 + 0x40) + uVar7),0,uVar5 - uVar7);
              uVar5 = *(ulong *)(puVar1 + 0x46);
            }
            recovered_1000156c((void *)(*(long *)(puVar1 + 0x40) + uVar5),source,uVar6);
            uVar6 = *(long *)(puVar1 + 0x46) + uVar6;
            *(ulong *)(puVar1 + 0x46) = uVar6;
            if (*(ulong *)(puVar1 + 0x42) < uVar6) {
              *(ulong *)(puVar1 + 0x42) = uVar6;
            }
            *(undefined2 *)((long)puVar1 + 0x127) = 1;
          }
        }
      }
      return;
    }
    plVar3 = (long *)recovered_10006934((long)engine);
    if (plVar3 != (long *)0x0) {
      recovered_10004f0c((long *)&pvStack_38,plVar3);
      recovered_100074b0(&pvStack_38);
      recovered_100041b0(pvStack_38);
    }
  }
  return;
}

#undef DAT_10009302
#undef DAT_10010078
#undef pvStack_38

#undef PTR_recovered_10007418_1000c020
#define PTR_recovered_10007418_1000c020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3878U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

void * recovered_10007490(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007418_1000c020;
  return puVar1;
}

#undef PTR_recovered_10007418_1000c020

#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
#undef DAT_10010078
#define DAT_10010078 (*(uint * *)(((uintptr_t)pf_module_state + 0x78d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b0
 */

char * recovered_100074b0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *count;
  long lVar5;
  ulong uVar6;
  ulong uVar7;

  puVar2 = DAT_10010078;
  pcVar1 = &DAT_10009302;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  if (DAT_10010078 == (uint *)0x0) {
    return pcVar1;
  }
  pcVar3 = (char *)0x0;
  do {
    count = pcVar3;
    pcVar3 = count + 1;
  } while (pcVar1[(long)count] != '\0');
  if (count == (char *)0x0) {
    return (char *)0x0;
  }
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (DAT_10010078 == (uint *)0x0) {
    return (char *)0x0;
  }
  if (*(char *)((long)DAT_10010078 + 0x125) == '\x01') {
    if ((*DAT_10010078 & 0xfffffffe) == 2) {
      recovered_1000315c(pcVar1,(long)count);
      *(char **)(puVar2 + 0x46) = count + *(long *)(puVar2 + 0x46);
      goto LAB_10003ab4;
    }
    if ((*(byte *)((long)DAT_10010078 + 0x126) & 1) == 0) {
      lVar5 = *(long *)(DAT_10010078 + 0x46);
    }
    else {
      lVar5 = *(long *)(DAT_10010078 + 0x42);
      *(long *)(DAT_10010078 + 0x46) = lVar5;
    }
    uVar4 = recovered_1000369c((long)puVar2,(ulong)(count + lVar5));
    if ((int)uVar4 != 0) {
      uVar6 = *(ulong *)(puVar2 + 0x46);
      uVar7 = *(ulong *)(puVar2 + 0x42);
      if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
        recovered_10001758((void *)(*(long *)(puVar2 + 0x40) + uVar7),0,uVar6 - uVar7);
        uVar6 = *(ulong *)(puVar2 + 0x46);
      }
      recovered_1000156c((void *)(*(long *)(puVar2 + 0x40) + uVar6),pcVar1,(ulong)count);
      pcVar1 = count + *(long *)(puVar2 + 0x46);
      *(char **)(puVar2 + 0x46) = pcVar1;
      if (*(char **)(puVar2 + 0x42) < pcVar1) {
        *(char **)(puVar2 + 0x42) = pcVar1;
      }
      *(undefined2 *)((long)puVar2 + 0x127) = 1;
      goto LAB_10003ab4;
    }
  }
  count = (char *)0x0;
LAB_10003ab4:
  return count;
}

#undef DAT_10009302
#undef DAT_10010078

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074f4
 */

void recovered_100074f4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074f8
 */

void recovered_100074f8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recover the native integer-print builtin and its imported formatting call.
 * Pooka's Free Software License. */
void recovered_100074fc(uint64_t holder,uintptr_t engine,uintptr_t *arguments){
 (void)holder;
 if(!arguments[1])return;
 unsigned char *value=(unsigned char *)arguments[0];
 long long number;
 if(value[48]==1){
   void *variable=(void *)recovered_10006934(engine);
   if(!variable)return;
   number=recovered_10004f8c(variable);
 }else __builtin_memcpy(&number,value+32,8);
 char buffer[32];
 int length=recovered_10002d4c(buffer,sizeof(buffer),"%lld",number);
 recovered_1000315c(buffer,length);
}


#undef PTR_recovered_100074f4_1000c078
#define PTR_recovered_100074f4_1000c078 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x38d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007554
 */

void * recovered_10007554(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_100074f4_1000c078;
  return puVar1;
}

#undef PTR_recovered_100074f4_1000c078

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007574
 */

void recovered_10007574(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007578
 */

void recovered_10007578(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#define apvStack_38 (*(void * (*)[7])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000757c
 */

void recovered_1000757c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long *plVar1;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  plVar1 = (long *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  recovered_10004f0c((long *)apvStack_38,plVar1);
  recovered_10004ec4((undefined1 *)plVar1,apvStack_38);
  recovered_100041b0(apvStack_38[0]);
  return;
}

#undef apvStack_38

#undef PTR_recovered_10007574_1000c0c0
#define PTR_recovered_10007574_1000c0c0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3918U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b0
 */

void * recovered_100075b0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007574_1000c0c0;
  return puVar1;
}

#undef PTR_recovered_10007574_1000c0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d0
 */

void recovered_100075d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d4
 */

void recovered_100075d4(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d8
 */

void recovered_100075d8(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  lVar1 = recovered_10004f8c(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_100075d0_1000c108
#define PTR_recovered_100075d0_1000c108 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007614
 */

void * recovered_10007614(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_100075d0_1000c108;
  return puVar1;
}

#undef PTR_recovered_100075d0_1000c108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007634
 */

void recovered_10007634(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007638
 */

void recovered_10007638(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 56))
#define pvStack_40 (*(void * *)(pf_stack_frame + 32))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000763c
 */

void recovered_1000763c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  if (*(long *)((long)engine + 0x50) == 0) {
    auStack_48[0] = 0;
    uStack_38 = 0;
    pvStack_40 = (void *)0x0;
    uStack_28 = 0;
    uStack_30 = 0;
    recovered_10004e9c(auStack_48,(long *)(*(long *)arguments + 8));
    recovered_1000676c((long)engine,auStack_48);
    recovered_100041b0(pvStack_40);
    return;
  }
  puVar1 = (undefined1 *)recovered_100068dc((long)engine);
  lVar2 = *(long *)arguments;
  *puVar1 = 1;
  recovered_100069a0((long *)(puVar1 + 8),(long *)(lVar2 + 8));
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_10007634_1000c150
#define PTR_recovered_10007634_1000c150 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x39a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007684
 */

void * recovered_10007684(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007634_1000c150;
  return puVar1;
}

#undef PTR_recovered_10007634_1000c150

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076a4
 */

void recovered_100076a4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076a8
 */

void recovered_100076a8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 56))
#define pvStack_40 (*(void * *)(pf_stack_frame + 32))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076ac
 */

void recovered_100076ac(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;

  if (*(long *)((long)engine + 0x50) == 0) {
    uStack_28 = *(undefined8 *)(*(long *)arguments + 0x20);
    pvStack_40 = (void *)0x0;
    uStack_38 = 0;
    auStack_48[0] = 2;
    uStack_30 = 0;
    recovered_1000676c((long)engine,auStack_48);
    recovered_100041b0(pvStack_40);
    return;
  }
  puVar1 = (undefined1 *)recovered_100068dc((long)engine);
  uVar2 = *(undefined8 *)(*(long *)arguments + 0x20);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}

#undef uStack_30
#undef uStack_38
#undef uStack_28
#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_100076a4_1000c198
#define PTR_recovered_100076a4_1000c198 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x39f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000770c
 */

void * recovered_1000770c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_100076a4_1000c198;
  return puVar1;
}

#undef PTR_recovered_100076a4_1000c198

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000772c
 */

void recovered_1000772c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007730
 */

void recovered_10007730(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#define pvStack_40 (*(void * *)(pf_stack_frame + 32))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007734
 */

void recovered_10007734(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  recovered_100077f8(auStack_48,puVar1);
  if (*(long *)((long)engine + 0x50) == 0) {
    recovered_10006744((long)engine,auStack_48);
  }
  else {
    puVar1 = (undefined1 *)recovered_100068dc((long)engine);
    recovered_100077c0(puVar1,auStack_48);
  }
  recovered_100041b0(pvStack_40);
  return;
}

#undef pvStack_40
#undef auStack_48

#undef PTR_recovered_1000772c_1000c1e0
#define PTR_recovered_1000772c_1000c1e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3a38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a0
 */

void * recovered_100077a0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_1000772c_1000c1e0;
  return puVar1;
}

#undef PTR_recovered_1000772c_1000c1e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077c0
 */

undefined1 * recovered_100077c0(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_100069a0((long *)(param_1 + 8),(long *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f8
 */

undefined1 * recovered_100077f8(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10006c14((long *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007830
 */

void recovered_10007830(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007834
 */

void recovered_10007834(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007838
 */

void recovered_10007838(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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

  piVar7 = *(int **)engine;
  lVar8 = *(long *)arguments;
  lVar10 = *(long *)(lVar8 + 0x20);
  if (lVar10 < -0x7fffffff) {
    lVar10 = -0x80000000LL;
  }
  if (0x7ffffffe < lVar10) {
    lVar10 = 0x7fffffff;
  }
  lVar2 = *(long *)(lVar8 + 0x58);
  if (*(long *)(lVar8 + 0x58) < -0x7fffffff) {
    lVar2 = -0x80000000LL;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  uVar11 = *(uint *)(lVar8 + 0x90);
  bVar6 = recovered_1000602c(piVar7,(int)lVar10,(int)lVar2);
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


#undef PTR_recovered_10007830_1000c228
#define PTR_recovered_10007830_1000c228 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3a80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000786c
 */

void * recovered_1000786c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007830_1000c228;
  return puVar1;
}

#undef PTR_recovered_10007830_1000c228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000788c
 */

void recovered_1000788c(int *param_1,int param_2,int param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 uVar7;

  uVar7 = (undefined1)param_4;
  bVar5 = recovered_1000602c(param_1,param_2,param_3);
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
 * Address: 0x1000793c
 */

void recovered_1000793c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007940
 */

void recovered_10007940(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 40))
#define local_58 (*(char * *)(pf_stack_frame + 24))
#define local_50 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007944
 */

void recovered_10007944(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;

  lVar6 = *(long *)arguments;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = (char *)0x0;
  recovered_100061ec((long *)&local_58,*(ulong *)(lVar6 + 0x80));
  lVar7 = *(long *)(lVar6 + 0x80);
  pbVar3 = &DAT_10009302;
  if (*(byte **)(lVar6 + 0x78) != (byte *)0x0) {
    pbVar3 = *(byte **)(lVar6 + 0x78);
  }
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    bVar1 = *pbVar3;
    if (0x23 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x900002600U) == 0) {
      recovered_10006264((long *)&local_58,bVar1);
    }
    pbVar3 = pbVar3 + 1;
  }
  if (1 < local_50) {
    if ((*local_58 == '0') && ((byte)(local_58[1] | 0x20U) == 0x78)) {
      recovered_10007b20((long *)&local_58,0,2);
    }
    if (local_50 == 8 || local_50 == 6) {
      pbVar3 = (byte *)recovered_10007ba8((long *)&local_58);
      pbVar4 = (byte *)recovered_10007b80((long *)&local_58);
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
      goto LAB_10007a94;
    }
  }
  uVar8 = 0;
  bVar2 = false;
LAB_10007a94:
  recovered_100041b0(local_58);
  if (bVar2) {
    lVar7 = *(long *)(*(long *)arguments + 0x20);
    if (lVar7 < -0x7fffffff) {
      lVar7 = -0x80000000LL;
    }
    if (0x7ffffffe < lVar7) {
      lVar7 = 0x7fffffff;
    }
    lVar6 = *(long *)(*(long *)arguments + 0x58);
    if (lVar6 < -0x7fffffff) {
      lVar6 = -0x80000000LL;
    }
    if (0x7ffffffe < lVar6) {
      lVar6 = 0x7fffffff;
    }
    recovered_1000788c(*(int **)engine,(int)lVar7,(int)lVar6,uVar8);
  }
  return;
}

#undef DAT_10009302
#undef uStack_48
#undef local_58
#undef local_50

#undef PTR_recovered_1000793c_1000c270
#define PTR_recovered_1000793c_1000c270 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3ac8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b00
 */

void * recovered_10007b00(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_1000793c_1000c270;
  return puVar1;
}

#undef PTR_recovered_1000793c_1000c270

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b20
 */

void recovered_10007b20(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007b80
 */

long recovered_10007b80(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10007ba8(param_1);
  return lVar1 + param_1[1];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ba8
 */

long recovered_10007ba8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006b18(param_1);
  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bcc
 */

void recovered_10007bcc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bd0
 */

void recovered_10007bd0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bd4
 */

void recovered_10007bd4(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = *(long *)(*(long *)arguments + 0x20);
  if (lVar2 < -0x7fffffff) {
    lVar2 = -0x80000000LL;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  lVar1 = *(long *)(*(long *)arguments + 0x58);
  if (lVar1 < -0x7fffffff) {
    lVar1 = -0x80000000LL;
  }
  if (0x7ffffffe < lVar1) {
    lVar1 = 0x7fffffff;
  }
  *(int *)((long)engine + 0x38) = (int)lVar2;
  *(int *)((long)engine + 0x3c) = (int)lVar1;
  return;
}


#undef PTR_recovered_10007bcc_1000c2b8
#define PTR_recovered_10007bcc_1000c2b8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3b10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c04
 */

void * recovered_10007c04(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007bcc_1000c2b8;
  return puVar1;
}

#undef PTR_recovered_10007bcc_1000c2b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c24
 */

void recovered_10007c24(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c28
 */

void recovered_10007c28(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c2c
 */

void recovered_10007c2c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;

  uVar2 = *(ulong *)(*(long *)arguments + 0x20);
  if ((long)uVar2 < 2) {
    uVar2 = 1;
  }
  recovered_100068b8((long)engine,uVar2);
  puVar1 = (undefined1 *)recovered_100062fc((long)engine,uVar2);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


#undef PTR_recovered_10007c24_1000c300
#define PTR_recovered_10007c24_1000c300 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3b58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c44
 */

void * recovered_10007c44(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007c24_1000c300;
  return puVar1;
}

#undef PTR_recovered_10007c24_1000c300

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c64
 */

void recovered_10007c64(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c68
 */

void recovered_10007c68(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#define apvStack_60 (*(void * (*)[12])(pf_stack_frame + 48))
#define apvStack_78 (*(void * (*)[15])(pf_stack_frame + 24))
#define apvStack_48 (*(void * (*)[9])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c6c
 */

void recovered_10007c6c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  plVar1 = (long *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  plVar2 = (long *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x60));
  recovered_10004f0c((long *)apvStack_48,plVar2);
  recovered_10004f0c((long *)apvStack_78,plVar1);
  recovered_10007d28((long *)apvStack_60,apvStack_78,apvStack_48);
  recovered_10004ec4((undefined1 *)plVar1,apvStack_60);
  recovered_100041b0(apvStack_60[0]);
  recovered_100041b0(apvStack_78[0]);
  recovered_100041b0(apvStack_48[0]);
  return;
}

#undef apvStack_60
#undef apvStack_78
#undef apvStack_48

#undef PTR_recovered_10007c64_1000c348
#define PTR_recovered_10007c64_1000c348 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3ba0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d08
 */

void * recovered_10007d08(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007c64_1000c348;
  return puVar1;
}

#undef PTR_recovered_10007c64_1000c348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d28
 */

void recovered_10007d28(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006d7c(param_1,param_2);
  recovered_10007d74(param_1,param_3);
  return;
}


#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d74
 */

long * recovered_10007d74(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10009302;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10007dac(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10009302

#define local_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dac
 */

long * recovered_10007dac(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10006acc(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_100061ec(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_100061ec(param_1,uVar3 + lVar5);
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
 * Address: 0x10007e90
 */

void recovered_10007e90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e94
 */

void recovered_10007e94(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


#define apvStack_38 (*(void * (*)[7])(pf_stack_frame + 40))
#define apvStack_50 (*(void * (*)[10])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e98
 */

void recovered_10007e98(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  long *plVar1;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  plVar1 = (long *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  recovered_10004f0c((long *)apvStack_50,plVar1);
  recovered_10007d28((long *)apvStack_38,apvStack_50,(undefined8 *)(*(long *)arguments + 0x40));
  recovered_10004ec4((undefined1 *)plVar1,apvStack_38);
  recovered_100041b0(apvStack_38[0]);
  recovered_100041b0(apvStack_50[0]);
  return;
}

#undef apvStack_38
#undef apvStack_50

#undef PTR_recovered_10007e90_1000c390
#define PTR_recovered_10007e90_1000c390 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f1c
 */

void * recovered_10007f1c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007e90_1000c390;
  return puVar1;
}

#undef PTR_recovered_10007e90_1000c390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f3c
 */

void recovered_10007f3c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f40
 */

void recovered_10007f40(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f44
 */

void recovered_10007f44(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  lVar1 = recovered_10004f8c(variable);
  lVar2 = *(long *)(*(long *)arguments + 0x58);
  *variable = 2;
  *(long *)(variable + 0x20) = lVar2 + lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007f3c_1000c3d8
#define PTR_recovered_10007f3c_1000c3d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f78
 */

void * recovered_10007f78(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007f3c_1000c3d8;
  return puVar1;
}

#undef PTR_recovered_10007f3c_1000c3d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f98
 */

void recovered_10007f98(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f9c
 */

void recovered_10007f9c(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fa0
 */

void recovered_10007fa0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;
  void *variable_00;
  longlong lVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable_00 = (void *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x60));
  lVar1 = recovered_10004f8c(variable_00);
  lVar2 = recovered_10004f8c(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar2 + lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007f98_1000c420
#define PTR_recovered_10007f98_1000c420 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fd8
 */

void * recovered_10007fd8(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007f98_1000c420;
  return puVar1;
}

#undef PTR_recovered_10007f98_1000c420

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff8
 */

void recovered_10007ff8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ffc
 */

void recovered_10007ffc(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008000
 */

void recovered_10008000(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  lVar1 = recovered_10004f8c(variable);
  lVar2 = *(long *)(*(long *)arguments + 0x58);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar1 - lVar2;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007ff8_1000c468
#define PTR_recovered_10007ff8_1000c468 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3cc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008034
 */

void * recovered_10008034(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10007ff8_1000c468;
  return puVar1;
}

#undef PTR_recovered_10007ff8_1000c468

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008054
 */

void recovered_10008054(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008058
 */

void recovered_10008058(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000805c
 */

void recovered_1000805c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;
  void *variable_00;
  longlong lVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable_00 = (void *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x60));
  lVar1 = recovered_10004f8c(variable_00);
  lVar2 = recovered_10004f8c(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar2 - lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10008054_1000c4b0
#define PTR_recovered_10008054_1000c4b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3d08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008094
 */

void * recovered_10008094(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10008054_1000c4b0;
  return puVar1;
}

#undef PTR_recovered_10008054_1000c4b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080b4
 */

void recovered_100080b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080b8
 */

void recovered_100080b8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080bc
 */

void recovered_100080bc(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  lVar1 = recovered_10004f8c(variable);
  lVar2 = *(long *)(*(long *)arguments + 0x58);
  *variable = 2;
  *(long *)(variable + 0x20) = lVar2 * lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_100080b4_1000c4f8
#define PTR_recovered_100080b4_1000c4f8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3d50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

void * recovered_100080f0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_100080b4_1000c4f8;
  return puVar1;
}

#undef PTR_recovered_100080b4_1000c4f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008110
 */

void recovered_10008110(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008114
 */

void recovered_10008114(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008118
 */

void recovered_10008118(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *variable;
  void *variable_00;
  longlong lVar2;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable_00 = (void *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x60));
  lVar1 = recovered_10004f8c(variable_00);
  lVar2 = recovered_10004f8c(variable);
  *variable = 2;
  *(longlong *)(variable + 0x20) = lVar2 * lVar1;
  *(undefined8 *)(variable + 0x10) = 0;
  if (*(undefined1 **)(variable + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(variable + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10008110_1000c540
#define PTR_recovered_10008110_1000c540 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008150
 */

void * recovered_10008150(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10008110_1000c540;
  return puVar1;
}

#undef PTR_recovered_10008110_1000c540

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008170
 */

void recovered_10008170(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008174
 */

void recovered_10008174(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008178
 */

void recovered_10008178(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *variable;
  longlong lVar1;
  long lVar2;
  long lVar3;

  lVar3 = *(long *)(*(long *)arguments + 0x58);
  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = recovered_10004f8c(variable);
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


#undef PTR_recovered_10008170_1000c588
#define PTR_recovered_10008170_1000c588 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3de0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081e4
 */

void * recovered_100081e4(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10008170_1000c588;
  return puVar1;
}

#undef PTR_recovered_10008170_1000c588

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008204
 */

void recovered_10008204(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008208
 */

void recovered_10008208(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000820c
 */

void recovered_1000820c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  undefined1 *variable;
  void *variable_00;
  long lVar3;

  recovered_100068b8((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable = (undefined1 *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  variable_00 = (void *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x60));
  lVar1 = recovered_10004f8c(variable_00);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = recovered_10004f8c(variable);
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


#undef PTR_recovered_10008204_1000c5d0
#define PTR_recovered_10008204_1000c5d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3e28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000826c
 */

void * recovered_1000826c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_10008204_1000c5d0;
  return puVar1;
}

#undef PTR_recovered_10008204_1000c5d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000828c
 */

void recovered_1000828c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008290
 */

void recovered_10008290(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008294
 */

void recovered_10008294(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x28));
  pcVar4 = (char *)recovered_100062fc((long)engine,*(ulong *)(*(long *)arguments + 0x60));
  cVar1 = *pcVar3;
  if (cVar1 != *pcVar4) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      bVar2 = recovered_10008348((undefined8 *)(pcVar3 + 8),(undefined8 *)(pcVar4 + 8));
      if (!bVar2) {
        return;
      }
    }
    else if ((cVar1 != '\x02') || (*(long *)(pcVar3 + 0x20) != *(long *)(pcVar4 + 0x20))) {
      return;
    }
  }
  if (*(byte *)((long)engine + 0x40) < 4) {
    *(char *)((long)engine + 0x40) =
         (char)(0x30201 >> (ulong)((*(byte *)((long)engine + 0x40) & 3) << 3));
  }
  return;
}


#undef PTR_recovered_1000828c_1000c618
#define PTR_recovered_1000828c_1000c618 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3e70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008328
 */

void * recovered_10008328(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = recovered_1000417c(0x10);
  *puVar1 = &PTR_recovered_1000828c_1000c618;
  return puVar1;
}

#undef PTR_recovered_1000828c_1000c618

#undef DAT_10009302
#define DAT_10009302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008348
 */

bool recovered_10008348(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;

  lVar5 = param_1[1];
  pcVar4 = &DAT_10009302;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  pcVar6 = &DAT_10009302;
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

#undef DAT_10009302

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008370
 */

bool recovered_10008370(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100083a8
 */

void recovered_100083a8(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10008440(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10008454((undefined1 *)((long)pvVar1 + lVar2),(undefined1 *)(*param_1 + lVar2));
      recovered_10006b84((undefined8 *)(*param_1 + lVar2 + 8));
      lVar2 = lVar2 + 0x28;
    }
    recovered_100041b0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008440
 */

void * recovered_10008440(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x28;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_1000149c(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001488();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008454
 */

undefined1 * recovered_10008454(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10006d7c((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000848c
 */

long recovered_1000848c(long *param_1,undefined1 *param_2)

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
    recovered_100083a8(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_100077f8((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008500
 */

long recovered_10008500(long *param_1,undefined1 *param_2)

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
    recovered_100083a8(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10008454((undefined1 *)(*param_1 + lVar2 * 0x28),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x28;
}

