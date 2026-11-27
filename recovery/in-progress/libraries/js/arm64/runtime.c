/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4fb8U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000608
 */

void recovered_10000608(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000634();
  DAT_1000c0e0 = 0;
  recovered_1000066c();
  DAT_1000c0e4 = 0;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e4

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(int *)(((uintptr_t)pf_module_state + 0x4fbcU)))
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
#define DAT_1000c0e0 (*(byte *)(((uintptr_t)pf_module_state + 0x4fb8U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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
  if ((DAT_1000c0e0 & 1) == 0) {
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
      recovered_10002c34(puVar8[-1],*puVar8,&local_48);
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
      recovered_10002c34(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_1000c0f0 == 0) {
      DAT_1000c0f0 = DAT_1000c0e8;
    }
    DAT_1000c0e0 = 1;
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
#undef local_48
#undef auStack_458

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f0
 */

bool recovered_100008f0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10000634();
  bVar1 = recovered_1000092c(addresses,sizes,count);
  DAT_1000c0e4 = 0;
  return bVar1;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb8U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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
    if ((PF_PART1(DAT_1000c0e0, 1) & 1) == 0) {
      PF_PART1(DAT_1000c0e0, 1) = 1;
      recovered_1000066c();
      for (lVar9 = 0; lVar9 != param_3; lVar9 = lVar9 + 1) {
        address = (long *)param_1[lVar9];
        uVar3 = param_2[lVar9];
        plVar1 = (long *)((long)address + uVar3);
        if (CARRY8((ulong)address,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)address < uVar3 || plVar1 <= address) {
          PF_PART1(DAT_1000c0e0, 1) = 0;
          return false;
        }
        if ((ulong)address >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)address >> 0x1a < 0x21) &&
             (bVar2 = recovered_10002d38((ulong)address,0x84000000 - (long)address,&local_61),
             !bVar2)) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x10000a2c;
        }
        else {
          bVar2 = recovered_10002d38((ulong)address,uVar3,&local_61);
          if (!bVar2) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
            return false;
          }
joined_r0x10000a2c:
          if ((local_61 & 1) == 0) {
            PF_PART1(DAT_1000c0e0, 1) = 0;
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
          if (plVar8 < plVar1 && address < plVar7) {
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
        recovered_10002c34(*param_1,*param_2,&uStack_70);
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
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b28
 */

bool recovered_10000b28(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = size;
  uStack_18 = address;
  recovered_10000634();
  bVar1 = recovered_1000092c(&uStack_18,&local_20,1);
  DAT_1000c0e4 = 0;
  return bVar1;
}

#undef DAT_1000c0e4
#undef local_20
#undef uStack_18

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b64
 */

uint recovered_10000b64(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
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
  return (uint)uVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc4
 */

ulonglong recovered_10000bc4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  DAT_1000c0e4 = 0;
  return uVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c18
 */

uint recovered_10000c18(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_1000c0e4 = 0;
  return (uint)uVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c68
 */

ulonglong recovered_10000c68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long *plVar2;

  recovered_10000634();
  recovered_1000066c();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c0e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  DAT_1000c0e4 = 0;
  return uVar1;
}

#undef DAT_1000c0e4
#undef DAT_1000c0e8

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cac
 */

void * recovered_10000cac(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000634();
  puVar1 = recovered_10000cd8(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_1000c0e4 = 0;
  return puVar1;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fc0U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e94
 */

void * recovered_10000e94(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000634();
  puVar1 = recovered_10000cd8(size,(ulong *)0x0,(ulong *)limit);
  DAT_1000c0e4 = 0;
  return puVar1;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ecc
 */

void * recovered_10000ecc(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000634();
  if (last < first) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000cd8(size,(ulong *)first,(ulong *)last);
  }
  DAT_1000c0e4 = 0;
  return puVar1;
}

#undef DAT_1000c0e4

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f10
 */

void recovered_10000f10(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000634();
  recovered_10000f38((long)pointer);
  DAT_1000c0e4 = 0;
  return;
}

#undef DAT_1000c0e4

#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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
    DAT_1000c0f0 = puVar1;
  }
  return;
}

#undef DAT_1000c0f0

#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fac
 */

void * recovered_10000fac(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;

  recovered_10000634();
  if (pointer == (void *)0x0) {
    puVar7 = recovered_10000cd8(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000c0e4 = 0;
    return puVar7;
  }
  if (size == 0) {
    recovered_10000f38((long)pointer);
    DAT_1000c0e4 = 0;
    return (void *)0x0;
  }
  if (0xfffffffffffffff0 < size) {
    DAT_1000c0e4 = 0;
    return (void *)0x0;
  }
  recovered_1000066c();
  uVar6 = size + 0xf & 0xfffffffffffffff0;
  puVar7 = (ulong *)((long)pointer + -0x20);
  uVar2 = *puVar7;
  if (uVar6 <= uVar2) {
    if (uVar2 <= uVar6 - 1) {
      DAT_1000c0e4 = 0;
      return (void *)0x0;
    }
    if (uVar2 - uVar6 < 0x30) {
      if (0xffffffffffffffdf < uVar2) {
        DAT_1000c0e4 = 0;
        return (void *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < size) {
      DAT_1000c0e4 = 0;
      return (void *)0x0;
    }
    uVar1 = recovered_10002d88(puVar7,uVar6);
    if ((int)uVar1 == 0) {
      DAT_1000c0e4 = 0;
      return pointer;
    }
    DAT_1000c0e4 = 0;
    DAT_1000c0f0 = *(undefined8 *)((long)pointer + -0x18);
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
      if (0xffffffffffffffdf < uVar3) goto LAB_10014124;
    }
    else if (0xffffffffffffffb0 < size) goto LAB_10014124;
    do {
      uVar2 = *puVar7;
      if (uVar6 <= uVar2) goto LAB_100010d8;
      uVar2 = recovered_10002dfc(puVar7);
    } while ((uVar2 & 1) != 0);
    uVar2 = *puVar7;
LAB_100010d8:
    if (uVar6 <= uVar2) {
      uVar1 = recovered_10002d88(puVar7,uVar6);
      if ((int)uVar1 != 0) {
        DAT_1000c0f0 = *(undefined8 *)((long)pointer + -0x18);
      }
      *(undefined1 *)((long)pointer + -8) = 0;
      DAT_1000c0e4 = 0;
      return pointer;
    }
  }
  else {
LAB_10014124:
    puVar7 = recovered_10000cd8(uVar6,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar7 != (ulong *)0x0) {
      uVar2 = *(ulong *)((long)pointer + -0x20);
      if (uVar6 <= *(ulong *)((long)pointer + -0x20)) {
        uVar2 = uVar6;
      }
      recovered_1000142c((undefined1 *)puVar7,pointer,uVar2);
      recovered_10000f38((long)pointer);
      DAT_1000c0e4 = 0;
      return puVar7;
    }
  }
  DAT_1000c0e4 = 0;
  return (void *)0x0;
}

#undef DAT_1000c0e4
#undef DAT_1000c0f0

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


#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000135c
 */

void * recovered_1000135c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002e84(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001390. Too many branches */
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
 * Address: 0x100013a0
 */

void recovered_100013a0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10002e84(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013d4. Too many branches */
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
 * Address: 0x100013e0
 */

void * recovered_100013e0(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002e84(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(pointer,size);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef UINT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000142c
 */

void recovered_1000142c(undefined1 *param_1,undefined1 *param_2,ulong param_3)

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
 * Address: 0x10001504
 */

void recovered_10001504(undefined1 *param_1,undefined1 *param_2,ulong param_3)

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
      recovered_1000142c(param_1,param_2,param_3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001618
 */

void recovered_10001618(ulong *param_1,byte param_2,ulong param_3)

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

int recovered_100016dc(byte *param_1,byte *param_2,ulong param_3)

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
        goto recovered_10001844;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_10001844;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_10001844;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_10001844;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_10001844:
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

long recovered_10001908(long param_1)

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
 * Address: 0x1000192c
 */

int recovered_1000192c(byte *param_1,byte *param_2)

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
 * Address: 0x10001954
 */

int recovered_10001954(byte *param_1,byte *param_2)

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

void recovered_10001970(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;

  if (param_1 != (undefined1 *)0x0) {
    lVar1 = recovered_10001908((long)param_1);
    puVar2 = recovered_1000135c(lVar1 + 1);
    if (puVar2 != (undefined1 *)0x0) {
      recovered_1000142c(puVar2,param_1,lVar1 + 1);
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

ulong recovered_10001a14(char *text,char *reject)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  while ((text[uVar2] != '\0' &&
         (pcVar1 = recovered_100019ac(reject,text[uVar2]), pcVar1 == (char *)0x0))) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
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


#undef DAT_1000723b
#define DAT_1000723b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x113U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad0
 */

undefined * recovered_10001ad0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000723b;
}

#undef DAT_1000723b

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ed8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001adc
 */

undefined ** recovered_10001adc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define uStack_38 (*(ulong *)(pf_stack_frame + 24))
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

  recovered_10001618(&uStack_38,0,0x18);
  bVar1 = recovered_10002e84(0x168);
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


#undef DAT_10007128
#define DAT_10007128 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10007128 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10007128

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


#undef DAT_10007130
#define DAT_10007130 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_10007130);
  return auVar1;
}

#undef DAT_10007130

#undef DAT_10007138
#define DAT_10007138 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10007140
#define DAT_10007140 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10007148
#define DAT_10007148 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10007150
#define DAT_10007150 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e24
 */

void recovered_10001e24(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10007138 < param_1; param_1 = param_1 + DAT_10007150) {
  }
  for (; param_1 < DAT_10007140; param_1 = param_1 + DAT_10007148) {
  }
  return;
}

#undef DAT_10007138
#undef DAT_10007140
#undef DAT_10007148
#undef DAT_10007150

#undef DAT_10007158
#define DAT_10007158 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_10007158;
  return auVar1;
}

#undef DAT_10007158

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec4
 */

longlong recovered_10001ec4(double value)

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
 * Address: 0x10001f24
 */

ulonglong recovered_10001f24(double value)

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
 * Address: 0x10001f74
 */

double recovered_10001f74(ulonglong value)

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
 * Address: 0x10001f9c
 */

double recovered_10001f9c(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if (value < 0) {
    dVar2 = recovered_10001f74(-value);
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


#undef str_1000723d
#define str_1000723d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
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
      recovered_10002bc0((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x11cU));
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
      recovered_10002bc0((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x14aU));
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
      pbVar13 = (byte *)str_1000723d;
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

#undef str_1000723d
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


#undef str_10007250
#define str_10007250 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_10007261
#define str_10007261 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
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

  pcVar1 = str_10007250;
  if (param_6 == 0) {
    pcVar1 = str_10007261;
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

#undef str_10007250
#undef str_10007261
#undef acStack_80

#undef str_1000723d
#define str_1000723d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc0
 */

void recovered_10002bc0(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_1000723d;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002ae4(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1000723d

#define uStack0000000000000000 (*(undefined1 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c0c
 */

int recovered_10002c0c(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002540((byte *)buffer,capacity,(byte *)format,
                             (double *)&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb8U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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
      puVar2 = &DAT_1000c0e0;
      if (DAT_1000c0e8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
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
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb8U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc0U)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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
      puVar1 = &DAT_1000c0e0;
      if (DAT_1000c0e8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
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
 * Address: 0x10002d38
 */

bool recovered_10002d38(ulong address,ulong size,uchar *added)

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


#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4fc8U)))
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

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
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
        if (DAT_1000c100 != 0) {
          DAT_1000c100 = DAT_1000c100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100030d4(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_100030d4(0);
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
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
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

  if ((DAT_1000c100 != 0) || (param_1 != 0)) {
    if (DAT_1000c100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000142c(local_230,&DAT_1000c108,DAT_1000c100);
      uVar2 = DAT_1000c100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003e44(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_1000c100 = 0;
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
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

  if (DAT_1000c100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_1000142c(auStack_230,&DAT_1000c108,DAT_1000c100);
    uVar2 = DAT_1000c100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003e44(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_1000c100 = 0;
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
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

  if (DAT_1000c100 != 0) {
    if (DAT_1000c100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000142c(auStack_230,&DAT_1000c108,DAT_1000c100);
      uVar2 = DAT_1000c100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003e44(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_1000c100 = 0;
  }
  return;
}

#undef DAT_1000c100
#undef DAT_1000c108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10007275
#define DAT_10007275 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14dU)))
#define acStack_160 (*(char (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003170
 */

void recovered_10003170(char *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10007275;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002c0c(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_1000301c(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10007275
#undef acStack_160

#undef DAT_10007293
#define DAT_10007293 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16bU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
#undef str_10007278
#define str_10007278 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

/* WARNING: Removing unreachable block (ram,0x10003220) */

void recovered_100031d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_100031f8(str_10007278);
  pcVar4 = &DAT_10007293;
  for (lVar3 = recovered_10001908(((uintptr_t)pf_module_state+0x16bU)); lVar3 != 0; lVar3 = lVar3 + -1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100030d4(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_100030d4(0);
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

#undef DAT_10007293
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10007278

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

void recovered_100031f8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  lVar3 = recovered_10001908((long)param_1);
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
          recovered_100030d4(1);
        }
        else {
          if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
            recovered_100030d4(0);
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

#undef DAT_10007293
#define DAT_10007293 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16bU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe0U)))
#undef str_10007296
#define str_10007296 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003224
 */

/* WARNING: Removing unreachable block (ram,0x10003220) */

void recovered_10003224(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;

  recovered_100031f8(str_10007296);
  pcVar4 = &DAT_10007293;
  for (lVar3 = recovered_10001908(((uintptr_t)pf_module_state+0x16bU)); lVar3 != 0; lVar3 = lVar3 + -1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c100 != 0) {
        DAT_1000c100 = DAT_1000c100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100030d4(1);
      }
      else {
        if (DAT_1000c100 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c100 == -2) {
          recovered_100030d4(0);
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

#undef DAT_10007293
#undef DAT_1000c100
#undef DAT_1000c108
#undef str_10007296

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


#undef DAT_10007275
#define DAT_10007275 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14dU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
#undef str_10007317
#define str_10007317 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1efU)))
#undef str_10007324
#define str_10007324 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_10007332
#define str_10007332 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20aU)))
#define uStack_4c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d0
 */

/* WARNING: Type propagation algorithm not settling */

ulong * recovered_100032d0(byte *param_1,char *param_2)

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
  iVar2 = recovered_1000192c(param_1,(byte *)str_10007317);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_1000192c(param_1,(byte *)str_10007324);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_1000192c(param_1,(byte *)str_10007332);
      if (iVar3 != 0) {
        puVar4 = recovered_1000135c(0x340);
        if (puVar4 == (ulong *)0x0) {
          DAT_1000c058 = 0xc;
          return (ulong *)0x0;
        }
        recovered_10001618(puVar4,0,0x340);
        *(undefined4 *)puVar4 = 0;
        pcVar5 = recovered_100019ac(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019ac(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019ac(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x124) = bVar1;
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
        *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
        recovered_10002c0c((char *)((long)puVar4 + 4),0xf1,&DAT_10007275);
        recovered_10001618(&uStack_4c,0,0xc);
        uVar6 = recovered_1000350c(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_100034b4:
            recovered_100013a0(puVar4);
            return (ulong *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019ac(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)PF_PART4(uStack_4c, 4), PF_PART4(uStack_4c, 4) != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000355c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100034b4;
              recovered_1000142c((undefined1 *)puVar4[0x20],(undefined1 *)(ulong)(uint)uStack_4c,
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
  puVar4 = recovered_1000135c(0x340);
  if (puVar4 == (ulong *)0x0) {
    DAT_1000c058 = 0xc;
    return (ulong *)0x0;
  }
  recovered_10001618(puVar4,0,0x340);
  *(undefined4 *)puVar4 = uVar8;
  *(bool *)((long)puVar4 + 0x124) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  recovered_10002c0c((char *)((long)puVar4 + 4),0xf1,&DAT_10007275);
  return puVar4;
}

#undef DAT_10007275
#undef DAT_1000c058
#undef str_10007317
#undef str_10007324
#undef str_10007332
#undef uStack_4c

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

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
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

#undef DAT_10007275
#define DAT_10007275 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14dU)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
#undef str_10007317
#define str_10007317 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1efU)))
#undef str_10007324
#define str_10007324 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_10007332
#define str_10007332 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20aU)))
#define uStack_4c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e4
 */

/* WARNING: Type propagation algorithm not settling */

ulong * recovered_100035e4(byte *param_1,char *param_2,int *param_3)

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
    recovered_10003618(param_3);
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_1000c058 = 0x16;
    return (ulong *)0x0;
  }
  iVar2 = recovered_1000192c(param_1,(byte *)str_10007317);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_1000192c(param_1,(byte *)str_10007324);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_1000192c(param_1,(byte *)str_10007332);
      if (iVar3 != 0) {
        puVar4 = recovered_1000135c(0x340);
        if (puVar4 == (ulong *)0x0) {
          DAT_1000c058 = 0xc;
          return (ulong *)0x0;
        }
        recovered_10001618(puVar4,0,0x340);
        *(undefined4 *)puVar4 = 0;
        pcVar5 = recovered_100019ac(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019ac(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019ac(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x124) = bVar1;
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
        *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
        recovered_10002c0c((char *)((long)puVar4 + 4),0xf1,&DAT_10007275);
        recovered_10001618(&uStack_4c,0,0xc);
        uVar6 = recovered_1000350c(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_100034b4:
            recovered_100013a0(puVar4);
            return (ulong *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019ac(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)PF_PART4(uStack_4c, 4), PF_PART4(uStack_4c, 4) != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000355c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100034b4;
              recovered_1000142c((undefined1 *)puVar4[0x20],(undefined1 *)(ulong)(uint)uStack_4c,
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
  puVar4 = recovered_1000135c(0x340);
  if (puVar4 == (ulong *)0x0) {
    DAT_1000c058 = 0xc;
    return (ulong *)0x0;
  }
  recovered_10001618(puVar4,0,0x340);
  *(undefined4 *)puVar4 = uVar8;
  *(bool *)((long)puVar4 + 0x124) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  recovered_10002c0c((char *)((long)puVar4 + 4),0xf1,&DAT_10007275);
  return puVar4;
}

#undef DAT_10007275
#undef DAT_1000c058
#undef str_10007317
#undef str_10007324
#undef str_10007332
#undef uStack_4c

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
          recovered_1000142c(param_1,(undefined1 *)(*(long *)(param_4 + 0x3e) + uVar6),uVar1);
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
            uVar5 = recovered_10003790(param_4);
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


#undef DAT_1000724f
#define DAT_1000724f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003790
 */

uint recovered_10003790(int *param_1)

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
LAB_10003828:
        *(ulong *)(param_1 + 0xce) = uVar5 + 1;
        return (uint)*(byte *)((long)param_1 + uVar5 + 0x12a);
      }
      lVar1 = (long)param_1 + 0x12a;
      bVar3 = recovered_10003248(lVar1,0x1fe,&DAT_1000724f,0);
      if (bVar3) {
        lVar4 = recovered_10001908(lVar1);
        uVar5 = 0;
        *(long *)(param_1 + 0xcc) = lVar4 + 1;
        *(undefined1 *)(lVar1 + lVar4) = 10;
        *(undefined1 *)(lVar1 + *(long *)(param_1 + 0xcc)) = 0;
        goto LAB_10003828;
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

#undef DAT_1000724f

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
        recovered_10001618((ulong *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_1000142c((undefined1 *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
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


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003984
 */

undefined8 recovered_10003984(int *param_1,ulong param_2,int param_3)

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
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a18
 */

undefined8 recovered_10003a18(long param_1)

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
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
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


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b00
 */

undefined8 recovered_10003b00(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10003b38(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c058

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

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f30U)))
#define uStack_2c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b7c
 */

undefined8 recovered_10003b7c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10001618(&uStack_2c,0,0xc);
    uVar1 = recovered_1000350c(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10003c18(param_2,(ulong)(uint)uStack_2c,(ulong)PF_PART4(uStack_2c, 4));
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003b38(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c058
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

#define uStack_3c (*(undefined8 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c78
 */

undefined8 recovered_10003c78(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10001618(&uStack_3c,0,0xc);
    uVar2 = recovered_1000350c(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = PF_PART4(uStack_3c, 4);
      if (PF_PART4(uStack_3c, 4) < 2) {
        uVar1 = 1;
      }
      puVar3 = recovered_1000135c((ulong)uVar1);
      uVar2 = 0;
      if (puVar3 != (undefined1 *)0x0) {
        if (PF_PART4(uStack_3c, 4) == 0) {
          uVar4 = 0;
        }
        else {
          recovered_1000142c(puVar3,(undefined1 *)(ulong)(uint)uStack_3c,(ulong)PF_PART4(uStack_3c, 4));
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

int recovered_10003d58(byte *param_1,byte *param_2,long param_3)

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


#undef DAT_100072a6
#define DAT_100072a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eU)))
#undef str_100072a9
#define str_100072a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x181U)))
#undef str_100072b6
#define str_100072b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_100072c0
#define str_100072c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x198U)))
#undef str_100072d4
#define str_100072d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1acU)))
#undef str_100072e2
#define str_100072e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1baU)))
#undef str_100072f4
#define str_100072f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ccU)))
#undef str_10007300
#define str_10007300 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d8U)))
#undef str_10007311
#define str_10007311 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d88
 */

char * recovered_10003d88(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_100072a6;
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
    return str_100072a9;
  case 5:
    return str_100072b6;
  case 9:
    return str_100072c0;
  case 0xc:
    return str_100072d4;
  case 0xd:
    return str_100072e2;
  default:
    if (param_1 == 0x11) {
      return str_100072f4;
    }
    if (param_1 == 0x16) {
      return str_10007300;
    }
switchD_10003db4_caseD_1:
    return str_10007311;
  }
}

#undef DAT_100072a6
#undef str_100072a9
#undef str_100072b6
#undef str_100072c0
#undef str_100072d4
#undef str_100072e2
#undef str_100072f4
#undef str_10007300
#undef str_10007311

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


#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e30
 */

void recovered_10003e30(void)

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

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003f10(void *context,...){
 __asm__ volatile("ldr x16, [x0, #0x50]\nmov sp, x16\nldr x29, [x0, #0x40]\nldr x16, [x0, #0x48]\nbr x16");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003f24(void *context){__asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret \nbrk #1");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003f80(void *context,int value){__asm__ volatile("cbnz w1, Lpf_context_10003f88\nmov w1, #1\nLpf_context_10003f88:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret \nbrk #1");}


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


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51e0U)))
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
  *(long *)(lVar1 + 0x10) = DAT_1000c308;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_1000c308 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_1000c308

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


#undef DAT_1000c318
#define DAT_1000c318 (*(int *)(((uintptr_t)pf_module_state + 0x51f0U)))
#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51f8U)))
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
  iVar2 = DAT_1000c318;
  do {
    DAT_1000c318 = 1;
    if (1 < iVar2 + 1U) {
      DAT_1000c318 = iVar2 + 1;
    }
    plVar4 = (long *)&DAT_1000c320;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        *(int *)((long)pvVar1 + 0x30) = DAT_1000c318;
        *(void **)((long)pvVar1 + 0x18) = DAT_1000c320;
        DAT_1000c320 = pvVar1;
        return (long)pvVar1 + 0x38;
      }
      plVar4 = (long *)(lVar5 + 0x18);
      iVar2 = DAT_1000c318;
    } while (*(int *)(lVar5 + 0x30) != DAT_1000c318);
  } while( true );
}

#undef DAT_1000c318
#undef DAT_1000c320

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

#undef DAT_1000c320
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51f8U)))
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
#define DAT_1000c320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004214
 */

long recovered_10004214(long param_1)

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
 * Address: 0x10004244
 */

long recovered_10004244(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51e0U)))
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

  lVar2 = DAT_1000c308;
  if (DAT_1000c308 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c308 + 0x10);
    DAT_1000c308 = *(long *)(DAT_1000c308 + 0x10);
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

#undef DAT_1000c308
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


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51e8U)))
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

  puVar2 = &DAT_1000c310;
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

#undef DAT_1000c310
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c308
#define DAT_1000c308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x51e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004330
 */

void recovered_10004330(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c308;
  if (DAT_1000c308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fe4();
  }
  *(undefined1 *)((long)DAT_1000c308 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100042cc(puVar1);
}

#undef DAT_1000c308

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004360
 */

void recovered_10004360(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c310;
  DAT_1000c310 = param_1;
  return;
}

#undef DAT_1000c310

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x51e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004374
 */

void recovered_10004374(undefined8 *param_1)

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


#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
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
  if (DAT_1000c310 != (long *)0x0) {
    DAT_1000c310 = (long *)*DAT_1000c310;
  }
  puVar2 = (undefined8 *)recovered_100043e4(puVar2);
  plVar3 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar3;
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

#undef DAT_1000c310
#undef uStack_50
#undef uStack_48

#undef DAT_1000c310
#define DAT_1000c310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
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

  plVar2 = DAT_1000c310;
  while( true ) {
    DAT_1000c310 = plVar2;
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

#undef DAT_1000c310
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
      if (*plVar4 == ((uintptr_t)pf_module_state+0x4f88U)) {
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


#undef DAT_100071a0
#define DAT_100071a0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_100071a8
#define DAT_100071a8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000463c
 */

double recovered_1000463c(double value)

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
  else if (value <= DAT_100071a0) {
    dVar3 = 0.0;
    if (DAT_100071a8 <= value) {
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

#undef DAT_100071a0
#undef DAT_100071a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046fc
 */

float recovered_100046fc(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000463c((double)value);
  return (float)dVar1;
}


#undef DAT_100071a0
#define DAT_100071a0 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_100071a8
#define DAT_100071a8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004718
 */

double recovered_10004718(double value)

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
  else if (value <= DAT_100071a0) {
    dVar3 = 0.0;
    if (DAT_100071a8 <= value) {
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

#undef DAT_100071a0
#undef DAT_100071a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000471c
 */

double recovered_1000471c(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


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

#undef DAT_100071c0
#define DAT_100071c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
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
                local_68 = pbVar7 + *(long *)(&DAT_100071c0 + uVar4 * 8) * (uVar5 & 0x7fffffff);
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

#undef DAT_100071c0
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


#undef DAT_10007340
#define DAT_10007340 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x218U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c68
 */

undefined * recovered_10004c68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10007340;
}

#undef DAT_10007340

#undef PTR_str_10007471_10008008
#define PTR_str_10007471_10008008 (*(char * *)(((uintptr_t)pf_module_state + 0xee0U)))
#undef str_10007344
#define str_10007344 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_10007354
#define str_10007354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_10007375
#define str_10007375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef str_1000742c
#define str_1000742c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
#undef str_10007435
#define str_10007435 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30dU)))
#undef str_1000744a
#define str_1000744a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#undef str_10007458
#define str_10007458 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#undef str_10007468
#define str_10007468 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
#define pbStack_1100 (*(byte * *)(pf_stack_frame + 16))
#define acStack_10c8 (*(char (*)[4296])(pf_stack_frame + 72))
#define abStack_c8 (*(byte (*)[200])(pf_stack_frame + 4168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c74
 */

uint recovered_10004c74(char *param_1,byte *param_2,char *param_3,char *param_4,char *param_5,
                       uint param_6,char *param_7,uint param_8,char *param_9,ulong param_10)

{
  unsigned char pf_stack_frame[4400] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *last;

  if (param_2 == (byte *)0x0) {
    last = (byte *)0x0;
  }
  else {
    lVar16 = recovered_10001908((long)param_2);
    last = param_2 + lVar16;
  }
  if ((param_5 != (char *)0x0) && (param_6 != 0)) {
    *param_5 = '\0';
  }
  if ((param_9 != (char *)0x0) && ((uint)param_10 != 0)) {
    *param_9 = '\0';
  }
  if ((param_7 != (char *)0x0) && (param_8 != 0)) {
    *param_7 = '\0';
  }
  if (param_2 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    abStack_c8[0] = 0;
    for (pbVar17 = param_2; uVar18 = (ulong)*pbVar17,
        *pbVar17 < 0x21 && (1L << (uVar18 & 0x3f) & 0x100002600U) != 0; pbVar17 = pbVar17 + 1) {
    }
    uVar5 = 0;
    while (((uVar6 = (uint)uVar18, uVar6 - 0x30 < 10 || (uVar6 & 0xdf) - 0x41 < 0x1a ||
            (uVar6 == 0x5f)) || (uVar6 == 0x24))) {
      if (uVar5 + 1 < 0x60) {
        abStack_c8[uVar5] = (byte)uVar18;
        uVar5 = uVar5 + 1;
      }
      pbVar17 = pbVar17 + 1;
      uVar18 = (ulong)*pbVar17;
    }
    abStack_c8[uVar5] = 0;
    lVar16 = 1;
    while (((uint)uVar18 < 0x21 && ((1L << (uVar18 & 0x3f) & 0x100002600U) != 0))) {
      pbVar15 = pbVar17 + lVar16;
      lVar16 = lVar16 + 1;
      uVar18 = (ulong)*pbVar15;
    }
    pbVar17 = param_2;
    if ((uVar5 != 0) && ((uint)uVar18 == 0x28)) {
      pbStack_1100 = (byte *)0x0;
      pbVar17 = (byte *)0x0;
      if ((param_1 != (char *)0x0) && (abStack_c8[0] != 0)) {
        pbStack_1100 = (byte *)0x0;
LAB_10004e08:
        pcVar10 = recovered_10005b0c(param_1,str_1000742c);
        if (pcVar10 != (char *)0x0) {
          for (pbVar15 = (byte *)(pcVar10 + 8);
              *pbVar15 < 0x21 && (1L << ((ulong)*pbVar15 & 0x3f) & 0x100002600U) != 0;
              pbVar15 = pbVar15 + 1) {
          }
          lVar16 = recovered_10001908((long)abStack_c8);
          iVar4 = recovered_10003d58(pbVar15,abStack_c8,lVar16);
          if (iVar4 == 0) {
            bVar3 = pbVar15[lVar16];
            if (bVar3 < 0x29 && (1L << ((ulong)bVar3 & 0x3f) & 0x10100002600U) != 0) {
              pcVar11 = recovered_100019ac((char *)(pbVar15 + lVar16),'{');
              if (pcVar11 != (char *)0x0) {
                pbVar17 = (byte *)(pcVar11 + 1);
                iVar4 = 1;
                pbVar15 = pbVar17;
LAB_10004ea0:
                bVar1 = *pbVar15;
                if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                  pbVar15 = pbVar15 + 1;
LAB_10004eb8:
                  do {
                    bVar2 = *pbVar15;
                    if (bVar2 == 0x5c) {
                      if (pbVar15[1] != 0) {
                        pbVar15 = pbVar15 + 2;
                        goto LAB_10004eb8;
                      }
                    }
                    else if (bVar2 == 0) break;
                    pbVar15 = pbVar15 + 1;
                  } while (bVar2 != bVar1);
                  goto LAB_10004ea0;
                }
                if (bVar1 == 0) goto LAB_10004f18;
                if (bVar1 == 0x7b) {
                  iVar4 = iVar4 + 1;
                }
                else if ((bVar1 == 0x7d) && (iVar4 = iVar4 + -1, iVar4 == 0)) goto LAB_10004f50;
                pbVar15 = pbVar15 + 1;
                goto LAB_10004ea0;
              }
LAB_10004f18:
              pbVar17 = (byte *)0x0;
            }
            goto LAB_10004f1c;
          }
          goto LAB_10004f48;
        }
        pbVar17 = (byte *)0x0;
      }
LAB_10004f64:
      if (pbVar17 == (byte *)0x0 || pbStack_1100 == (byte *)0x0) {
        pbVar17 = param_2;
        pbStack_1100 = last;
      }
      last = pbStack_1100;
    }
    uVar6 = 0;
    if (((PF_PART4(param_10, 4) >> 1 & 1) != 0) && (last != (byte *)0x0)) {
      pcVar10 = recovered_100052e8((char *)pbVar17,(char *)last,str_10007344);
      if (pcVar10 == (char *)0x0) {
        uVar6 = 0;
      }
      else {
        recovered_100053c4(param_9,(uint)param_10,str_10007354);
        uVar6 = 4;
      }
    }
    uVar5 = 0;
    if (((param_6 != 0) && (param_5 != (char *)0x0)) && (last != (byte *)0x0)) {
      pbVar15 = pbVar17;
LAB_10004ff4:
      while (pbVar15 < last) {
        pbVar12 = (byte *)recovered_100052e8((char *)pbVar15,(char *)last,str_10007435);
        pbVar13 = (byte *)recovered_100052e8((char *)pbVar15,(char *)last,str_1000744a);
        pbVar14 = (byte *)recovered_100052e8((char *)pbVar15,(char *)last,str_10007458);
        pbVar15 = (byte *)recovered_100052e8((char *)pbVar15,(char *)last,str_10007468);
        if (pbVar12 == (byte *)0x0) {
          if (pbVar13 != (byte *)0x0) goto LAB_10005060;
          if (pbVar14 != (byte *)0x0) goto LAB_10005070;
LAB_1000507c:
          pbVar14 = pbVar15;
        }
        else {
          if (pbVar12 <= pbVar13 || pbVar13 == (byte *)0x0) {
            pbVar13 = pbVar12;
          }
LAB_10005060:
          if (pbVar13 <= pbVar14 || pbVar14 == (byte *)0x0) {
            pbVar14 = pbVar13;
          }
LAB_10005070:
          if ((pbVar15 != (byte *)0x0) && (pbVar15 < pbVar14)) goto LAB_1000507c;
        }
        if ((pbVar14 == (byte *)0x0) || (last <= pbVar14)) break;
        if ((((pbVar14 <= pbVar17) ||
             ((bVar3 = pbVar14[-1], 9 < (byte)(bVar3 - 0x30U) && 0x19 < (byte)((bVar3 & 0xdf) + 0xbf)
              && ((0x3b < bVar3 - 0x24 ||
                  ((1L << ((ulong)(bVar3 - 0x24) & 0x3f) & 0x800000000000401U) == 0)))))) &&
            (pbVar13 = (byte *)recovered_100019ac((char *)pbVar14,'='), pbVar13 != (byte *)0x0)) &&
           (pbVar13 < last)) goto code_r0x100050f0;
        pbVar15 = pbVar14 + 1;
      }
      for (lVar16 = 0; lVar16 != 5; lVar16 = lVar16 + 1) {
        pcVar10 = (&PTR_str_10007471_10008008)[lVar16];
        pbVar15 = pbVar17;
        while (((pbVar15 < last &&
                (pbVar15 = (byte *)recovered_100052e8((char *)pbVar15,(char *)last,pcVar10),
                pbVar15 != (byte *)0x0)) && (pbVar15 < last))) {
          pcVar11 = recovered_100019ac((char *)pbVar15,'(');
          if (((pcVar11 != (char *)0x0) &&
              (pbVar13 = (byte *)recovered_100062c4(pcVar11), pcVar11 != (char *)0x0)) &&
             ((pbVar13 != (byte *)0x0 && (pbVar13 <= last)))) {
            *param_5 = '\0';
            uVar5 = recovered_10005bb0(param_5,param_6,pcVar11 + 1,(char *)pbVar13,param_3,param_4);
            pbVar15 = pbVar13;
            if (((uVar5 >> 4 & 1) != 0) && (*param_5 != '\0')) goto LAB_10005244;
          }
          pbVar15 = pbVar15 + 1;
        }
      }
      uVar5 = 0;
    }
LAB_10005244:
    uVar5 = uVar5 | uVar6;
    if (((param_10 & 0x100000000) != 0) && (last != (byte *)0x0)) {
      uVar18 = (long)last - (long)pbVar17;
      if (0xffe < uVar18) {
        uVar18 = 0xfff;
      }
      recovered_1000142c(acStack_10c8,pbVar17,uVar18);
      acStack_10c8[uVar18] = '\0';
      uVar6 = recovered_10005430(acStack_10c8,param_7,param_8);
      uVar7 = recovered_10005528(acStack_10c8,param_7,param_8);
      uVar8 = recovered_100056f0(acStack_10c8,param_7,param_8);
      uVar9 = recovered_100057e8(acStack_10c8,param_7,param_8);
      uVar5 = uVar6 | uVar7 | uVar8 | uVar9 | uVar5;
    }
    if (uVar5 == 0) {
      recovered_100053c4(param_9,(uint)param_10,str_10007375);
      uVar5 = 8;
    }
  }
  return uVar5;
LAB_10004f50:
  pbStack_1100 = pbVar15;
LAB_10004f1c:
  if ((bVar3 < 0x29) && ((1L << ((ulong)(uint)bVar3 & 0x3f) & 0x10100002600U) != 0))
  goto LAB_10004f64;
LAB_10004f48:
  param_1 = pcVar10 + 1;
  goto LAB_10004e08;
code_r0x100050f0:
  for (pbVar15 = pbVar13 + 1; pbVar15 < last; pbVar15 = pbVar15 + 1) {
    if (*pbVar15 < 0x3c && (1L << ((ulong)*pbVar15 & 0x3f) & 0x800000000002400U) != 0)
    goto LAB_10005138;
  }
  pbVar15 = last;
LAB_10005138:
  *param_5 = '\0';
  uVar5 = recovered_10005bb0(param_5,param_6,(char *)(pbVar13 + 1),(char *)pbVar15,param_3,param_4);
  if (((uVar5 >> 4 & 1) == 0) || (*param_5 == '\0')) goto LAB_10004ff4;
  goto LAB_10005244;
}

#undef PTR_str_10007471_10008008
#undef str_10007344
#undef str_10007354
#undef str_10007375
#undef str_1000742c
#undef str_10007435
#undef str_1000744a
#undef str_10007458
#undef str_10007468
#undef pbStack_1100
#undef acStack_10c8
#undef abStack_c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e8
 */

char * recovered_100052e8(char *first,char *last,char *pattern)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;

  if (pattern == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = recovered_10001908((long)pattern);
  }
  if ((((first <= last) && (first != (char *)0x0)) && (last != (char *)0x0)) &&
     ((pattern != (char *)0x0 && (lVar3 != 0)))) {
    for (; (first + lVar3 <= last && (*first != 0)); first = first + 1) {
      pbVar4 = (byte *)pattern;
      pbVar5 = (byte *)first;
      lVar6 = lVar3;
      do {
        if (lVar6 == 0) {
          return (char *)(byte *)first;
        }
        if (last <= pbVar5) break;
        bVar2 = *pbVar5;
        if (bVar2 == 0) break;
        uVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar1 = (uint)bVar2;
        }
        bVar2 = *pbVar4;
        uVar7 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar7 = (uint)bVar2;
        }
        lVar6 = lVar6 + -1;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar1 == uVar7);
    }
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053c4
 */

void recovered_100053c4(char *buffer,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((((buffer != (char *)0x0) && (capacity != 0)) && (text != (char *)0x0)) && (*buffer == '\0'))
  {
    uVar1 = recovered_10001908((long)text);
    if (capacity <= uVar1) {
      uVar1 = (ulong)capacity - 1;
    }
    if (uVar1 != 0) {
      recovered_1000142c(buffer,text,uVar1);
    }
    buffer[uVar1] = '\0';
  }
  return;
}


#undef str_100073d1
#define str_100073d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_10007588
#define str_10007588 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x460U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005430
 */

uint recovered_10005430(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *first;
  char *last;
  byte *text;
  byte *pbVar2;
  uint uVar3;

  uVar3 = 0;
  do {
    text = (byte *)recovered_10005b0c(script,str_100073d1);
    if (text == (byte *)0x0) {
      return uVar3;
    }
    pbVar2 = (byte *)recovered_10005b0c((char *)text,str_10007588);
    first = text;
    script = (char *)text;
    while( true ) {
      script = script + 1;
      if (*first == 0) {
        return uVar3;
      }
      if (*first == 0x28) break;
      first = first + 1;
    }
    for (; (byte)*script < 0x21 && (1L << ((ulong)(byte)*script & 0x3f) & 0x100002600U) != 0;
        script = script + 1) {
    }
    last = recovered_100062c4((char *)first);
    if (last != (char *)0x0) {
      uVar1 = recovered_10006a00(output,capacity,script,last);
      if (uVar1 != 0) {
        uVar3 = 1;
      }
      if (pbVar2 == text) {
        recovered_10006d64(output,capacity,10);
        uVar3 = 1;
      }
      script = last + 1;
    }
  } while( true );
}

#undef str_100073d1
#undef str_10007588

#undef DAT_100075cc
#define DAT_100075cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef PTR_str_1000759e_10008030
#define PTR_str_1000759e_10008030 (*(char * *)(((uintptr_t)pf_module_state + 0xf08U)))
#undef PTR_str_100075b4_10008040
#define PTR_str_100075b4_10008040 (*(char * *)(((uintptr_t)pf_module_state + 0xf18U)))
#undef str_100075d5
#define str_100075d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4adU)))
#undef str_100075e4
#define str_100075e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bcU)))
#undef str_100075ec
#define str_100075ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005528
 */

uint recovered_10005528(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;

  uVar4 = 0;
  if (((script != (char *)0x0) && (output != (char *)0x0)) && (capacity != 0)) {
    uVar4 = 0;
    for (lVar6 = 0; lVar6 != 2; lVar6 = lVar6 + 1) {
      pcVar5 = (&PTR_str_1000759e_10008030)[lVar6];
      pcVar3 = script;
      while ((pcVar3 = recovered_10005b0c(pcVar3,pcVar5), pcVar3 != (char *)0x0 &&
             (pcVar3 = recovered_100019ac(pcVar3,'='), pcVar3 != (char *)0x0))) {
        pcVar3 = pcVar3 + 1;
        pcVar2 = recovered_10006db0(pcVar3);
        if (pcVar2 != (char *)0x0) {
          uVar1 = recovered_10006a00(output,capacity,pcVar3,pcVar2);
          if (uVar1 != 0) {
            uVar4 = 1;
          }
          if (*pcVar2 != '\0') {
            pcVar3 = pcVar2 + 1;
          }
        }
      }
    }
    for (lVar6 = 0; lVar6 != 2; lVar6 = lVar6 + 1) {
      pcVar5 = (&PTR_str_100075b4_10008040)[lVar6];
      pcVar3 = script;
      while ((pcVar3 = recovered_10005b0c(pcVar3,pcVar5), pcVar3 != (char *)0x0 &&
             (pcVar3 = recovered_100019ac(pcVar3,'='), pcVar3 != (char *)0x0))) {
        pcVar3 = pcVar3 + 1;
        pcVar2 = recovered_10006db0(pcVar3);
        if (pcVar2 != (char *)0x0) {
          recovered_10006998(output,capacity,&DAT_100075cc);
          recovered_10006eb8(output,capacity,pcVar3,pcVar2);
          recovered_10006998(output,capacity,(char *)((uintptr_t)pf_module_state+0x4a8U));
          if (*pcVar2 != '\0') {
            pcVar3 = pcVar2 + 1;
          }
          uVar4 = 1;
        }
      }
    }
    while ((pcVar3 = recovered_10005b0c(script,str_100075d5), pcVar3 != (char *)0x0 &&
           (pcVar3 = recovered_100019ac(pcVar3,'='), pcVar3 != (char *)0x0))) {
      script = pcVar3 + 1;
      pcVar3 = recovered_10006db0(script);
      if (pcVar3 != (char *)0x0) {
        recovered_10006998(output,capacity,str_100075e4);
        recovered_10006eb8(output,capacity,script,pcVar3);
        recovered_10006998(output,capacity,str_100075ec);
        if (*pcVar3 != '\0') {
          script = pcVar3 + 1;
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

#undef DAT_100075cc
#undef PTR_str_1000759e_10008030
#undef PTR_str_100075b4_10008040
#undef str_100075d5
#undef str_100075e4
#undef str_100075ec

#undef str_10007605
#define str_10007605 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ddU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f0
 */

uint recovered_100056f0(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *last;
  char *pcVar5;
  uint uVar6;

  uVar6 = 0;
  do {
    pcVar4 = recovered_10005b0c(script,str_10007605);
    if ((pcVar4 == (char *)0x0) || (pcVar4 = recovered_100019ac(pcVar4,'('), pcVar4 == (char *)0x0))
    {
      return uVar6;
    }
    last = recovered_100062c4(pcVar4);
    if (last != (char *)0x0) {
      pcVar5 = pcVar4 + 1;
LAB_10005740:
      pcVar4 = last;
      if (pcVar5 < last) {
        cVar2 = *pcVar5;
        if (((cVar2 == '\"') || (cVar2 == '\'')) || (cVar2 == '`')) {
          pcVar4 = pcVar5 + 1;
          do {
            while( true ) {
              if (last <= pcVar4) {
                pcVar5 = pcVar4;
                goto LAB_10005740;
              }
              pcVar5 = pcVar4 + 1;
              cVar1 = *pcVar4;
              if (cVar1 != '\\' || last <= pcVar5) break;
              pcVar4 = pcVar4 + 2;
            }
            pcVar4 = pcVar5;
          } while (cVar1 != cVar2);
        }
        else {
          if (cVar2 == ',') {
            uVar3 = recovered_10006a00(output,capacity,pcVar5 + 1,last);
            if (uVar3 != 0) {
              uVar6 = 1;
            }
            goto LAB_100057d4;
          }
          pcVar5 = pcVar5 + 1;
        }
        goto LAB_10005740;
      }
    }
LAB_100057d4:
    script = pcVar4 + 1;
  } while( true );
}

#undef str_10007605

#undef str_10007413
#define str_10007413 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#undef str_1000741f
#define str_1000741f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e8
 */

uint recovered_100057e8(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;

  uVar9 = 0;
  do {
    if ((script == (char *)0x0) || (*script == '\0')) {
      return uVar9;
    }
    pcVar6 = recovered_10005b0c(script,str_10007413);
    pcVar5 = recovered_10005b0c(script,str_1000741f);
    if (pcVar6 == (char *)0x0) {
      if (pcVar5 == (char *)0x0) {
        return uVar9;
      }
    }
    else if (pcVar6 <= pcVar5 || pcVar5 == (char *)0x0) {
      pcVar5 = pcVar6;
    }
    pcVar5 = recovered_100019ac(pcVar5,'(');
    if (pcVar5 == (char *)0x0) {
      return uVar9;
    }
    pcVar6 = recovered_100062c4(pcVar5);
    if (pcVar6 != (char *)0x0) {
      bVar3 = false;
      do {
        if (pcVar6 < pcVar5 + 1) break;
        lVar7 = 1;
LAB_1000587c:
        pcVar1 = pcVar5 + lVar7;
        if (pcVar1 < pcVar6) {
          cVar2 = *pcVar1;
          if ((cVar2 == '\"') || (cVar2 == '\'')) {
            lVar8 = lVar7 + 1;
            do {
              while( true ) {
                if (pcVar6 <= pcVar5 + lVar8) {
                  lVar7 = lVar8;
                  goto LAB_1000587c;
                }
                pcVar1 = pcVar5 + lVar8;
                lVar7 = lVar8 + 1;
                if (*pcVar1 != '\\' || pcVar6 <= pcVar5 + lVar7) break;
                lVar8 = lVar8 + 2;
              }
              lVar8 = lVar7;
            } while (*pcVar1 != cVar2);
          }
          else {
            if (cVar2 == ',') goto LAB_100058f4;
            lVar7 = lVar7 + 1;
          }
          goto LAB_1000587c;
        }
LAB_100058f4:
        if (1 < lVar7) {
          if (bVar3) {
            recovered_10006d64(output,capacity,0x20);
          }
          uVar4 = recovered_10006a00(output,capacity,pcVar5 + 1,pcVar1);
          if (uVar4 != 0) {
            bVar3 = true;
          }
        }
        pcVar5 = pcVar1;
      } while (pcVar1 < pcVar6);
      pcVar5 = pcVar6;
      if (bVar3) {
        recovered_10006d64(output,capacity,10);
        uVar9 = 1;
      }
    }
    script = pcVar5 + 1;
  } while( true );
}

#undef str_10007413
#undef str_1000741f

#undef str_10007344
#define str_10007344 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_10007354
#define str_10007354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22cU)))
#undef str_10007375
#define str_10007375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef str_10007391
#define str_10007391 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x269U)))
#undef str_10007398
#define str_10007398 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x270U)))
#undef str_100073c7
#define str_100073c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_100073d1
#define str_100073d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_100073e0
#define str_100073e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_100073ea
#define str_100073ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c2U)))
#undef str_100073f6
#define str_100073f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ceU)))
#undef str_10007400
#define str_10007400 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d8U)))
#undef str_10007413
#define str_10007413 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#undef str_1000741f
#define str_1000741f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005960
 */

uint recovered_10005960(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;

  if ((status != (char *)0x0) && (status_capacity != 0)) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((flags & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = recovered_10005430(script,output,capacity);
      uVar2 = recovered_10005528(script,output,capacity);
      uVar3 = recovered_100056f0(script,output,capacity);
      uVar4 = recovered_100057e8(script,output,capacity);
      uVar1 = uVar2 | uVar1 | uVar3 | uVar4;
    }
    pcVar5 = recovered_10005b0c(script,str_10007391);
    if (pcVar5 != (char *)0x0) {
      uVar1 = uVar1 | 2;
      recovered_100053c4(status,status_capacity,str_10007398);
    }
    if (((flags >> 1 & 1) != 0) &&
       (pcVar5 = recovered_10005b0c(script,str_10007344), pcVar5 != (char *)0x0)) {
      uVar1 = uVar1 | 4;
      recovered_100053c4(status,status_capacity,str_10007354);
    }
    pcVar5 = recovered_10005b0c(script,str_100073c7);
    if ((((((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_10005b0c(script,str_100073d1), pcVar5 == (char *)0x0)) &&
          (pcVar5 = recovered_10005b0c(script,str_100073e0), pcVar5 == (char *)0x0)) &&
         ((pcVar5 = recovered_10005b0c(script,str_100073ea), pcVar5 == (char *)0x0 &&
          (pcVar5 = recovered_10005b0c(script,str_100073f6), pcVar5 == (char *)0x0)))) &&
        ((pcVar5 = recovered_10005b0c(script,str_10007400), pcVar5 == (char *)0x0 &&
         ((pcVar5 = recovered_10005b0c(script,str_10007413), pcVar5 == (char *)0x0 &&
          (pcVar5 = recovered_10005b0c(script,str_1000741f), pcVar5 == (char *)0x0)))))) &&
       ((pcVar5 = recovered_10005b0c(script,str_10007391), pcVar5 == (char *)0x0 &&
        ((pcVar5 = recovered_10005b0c(script,str_10007344), pcVar5 == (char *)0x0 &&
         (*script != '\0')))))) {
      uVar1 = uVar1 | 8;
      recovered_100053c4(status,status_capacity,str_10007375);
    }
  }
  return uVar1;
}

#undef str_10007344
#undef str_10007354
#undef str_10007375
#undef str_10007391
#undef str_10007398
#undef str_100073c7
#undef str_100073d1
#undef str_100073e0
#undef str_100073ea
#undef str_100073f6
#undef str_10007400
#undef str_10007413
#undef str_1000741f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b0c
 */

char * recovered_10005b0c(char *text,char *pattern)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;

  if (pattern == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = recovered_10001908((long)pattern);
  }
  if (((text != (char *)0x0) && (pattern != (char *)0x0)) && (lVar3 != 0)) {
    for (; *text != '\0'; text = text + 1) {
      lVar4 = 0;
      do {
        if (lVar3 == lVar4) {
          return text;
        }
        bVar2 = text[lVar4];
        if (bVar2 == 0) break;
        uVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar1 = (uint)bVar2;
        }
        bVar2 = pattern[lVar4];
        uVar5 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar5 = (uint)bVar2;
        }
        lVar4 = lVar4 + 1;
      } while (uVar1 == uVar5);
    }
  }
  return (char *)0x0;
}


#undef DAT_1000724f
#define DAT_1000724f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef str_100074cd
#define str_100074cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a5U)))
#undef str_100074e0
#define str_100074e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b8U)))
#undef str_100074ea
#define str_100074ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c2U)))
#undef str_10007502
#define str_10007502 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3daU)))
#undef str_10007517
#define str_10007517 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_1000751e
#define str_1000751e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_10007535
#define str_10007535 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_10007540
#define str_10007540 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#define acStack_268 (*(char (*)[616])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb0
 */

uint recovered_10005bb0(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char pf_stack_frame[672] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  char *last_00;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;

  pcVar1 = &DAT_1000724f;
  if (html != (char *)0x0) {
    pcVar1 = html;
  }
  pbVar4 = (byte *)first;
LAB_10005c00:
  do {
    while( true ) {
      if (pbVar4 == (byte *)0x0) {
        return 0x10;
      }
      pbVar8 = pbVar4;
      if (last <= pbVar4) {
        return 0x10;
      }
      while( true ) {
        if (last <= pbVar8) {
          return 0x10;
        }
        bVar2 = *pbVar8;
        if (0x2b < bVar2) goto LAB_10005c8c;
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x80100002600U) == 0) break;
        pbVar8 = pbVar8 + 1;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x8400000000U) == 0) break;
      first = (char *)(pbVar8 + 1);
      pbVar8 = (byte *)first;
      do {
        while( true ) {
          pbVar4 = pbVar8;
          if (last <= pbVar4) goto LAB_10005e10;
          if (*pbVar4 != 0x5c || last <= pbVar4 + 1) break;
          pbVar8 = pbVar4 + 2;
        }
        pbVar8 = pbVar4 + 1;
      } while (*pbVar4 != bVar2);
LAB_10005e10:
      recovered_10005fb8(output,capacity,first,(char *)pbVar4);
      if (pbVar4 < last) {
        pbVar4 = pbVar4 + 1;
      }
    }
LAB_10005c8c:
    if (bVar2 == 0x60) {
      do {
        first = (char *)(pbVar8 + 1);
        pbVar8 = (byte *)first;
        do {
          while( true ) {
            while( true ) {
              pbVar4 = pbVar8;
              if (last <= pbVar4) goto LAB_10005e10;
              pbVar8 = pbVar4 + 1;
              bVar2 = *pbVar4;
              if (!(bVar2 == 0x5c && pbVar8 < last)) break;
              pbVar8 = pbVar4 + 2;
            }
            if (bVar2 == 0x24) break;
            if (bVar2 == 0x60) goto LAB_10005e10;
          }
        } while ((last <= pbVar8) || (*pbVar8 != 0x7b));
        pbVar8 = (byte *)recovered_10006200((char *)(pbVar4 + 2),last);
        if (pbVar8 == (byte *)0x0) {
          return 8;
        }
        recovered_10005fb8(output,capacity,first,(char *)pbVar4);
        uVar3 = recovered_10005bb0(output,capacity,(char *)(pbVar4 + 2),(char *)pbVar8,url,html);
        if ((uVar3 >> 3 & 1) != 0) {
          return uVar3;
        }
      } while( true );
    }
    pbVar4 = (byte *)recovered_10005b0c((char *)pbVar8,str_100074cd);
    if ((pbVar8 != pbVar4) &&
       (pbVar4 = (byte *)recovered_10005b0c((char *)pbVar8,str_100074e0), pbVar8 != pbVar4))
    {
      pbVar4 = (byte *)recovered_10005b0c((char *)pbVar8,str_100074ea);
      if (pbVar8 == pbVar4) {
        pcVar7 = recovered_100019ac((char *)pbVar8,'(');
        if (pcVar7 == (char *)0x0) {
          return 8;
        }
        pcVar7 = recovered_100062c4(pcVar7);
        if (pcVar7 == (char *)0x0) {
          return 8;
        }
        if (last < pcVar7) {
          return 8;
        }
        pbVar4 = (byte *)(pcVar7 + 1);
        pbVar5 = (byte *)recovered_10005b0c((char *)pbVar8,str_10007502);
        if ((pbVar8 == pbVar5) ||
           (pbVar5 = (byte *)recovered_10005b0c((char *)pbVar4,str_10007502), pbVar5 != pbVar4)) {
          uVar3 = recovered_10006360(output,capacity,(char *)pbVar8,last,url,html,0);
          pbVar5 = (byte *)recovered_10005b0c((char *)pbVar4,str_10007517);
          if (pbVar5 == pbVar4) {
            pcVar7 = str_10007517;
            goto LAB_10005f80;
          }
        }
        else {
          acStack_268[0] = '\0';
          recovered_10006608(acStack_268,(uint)pcVar1,first);
          uVar3 = recovered_10006360(output,capacity,(char *)pbVar8,last,url,acStack_268,0);
          pcVar7 = str_10007502;
LAB_10005f80:
          lVar6 = recovered_10001908((long)pcVar7);
          pbVar4 = pbVar4 + lVar6;
        }
        first = (char *)pbVar8;
        if ((uVar3 >> 3 & 1) != 0) {
          return uVar3;
        }
      }
      else {
        pbVar4 = (byte *)recovered_10005b0c((char *)pbVar8,str_1000751e);
        first = (char *)pbVar8;
        if (((pbVar8 == pbVar4) ||
            (pbVar4 = (byte *)recovered_10005b0c((char *)pbVar8,str_10007535), pbVar8 == pbVar4)) ||
           (pbVar4 = (byte *)recovered_10005b0c((char *)pbVar8,str_10007540), pbVar8 == pbVar4)) {
          uVar3 = recovered_10006360(output,capacity,(char *)pbVar8,last,url,html,0);
          if ((uVar3 >> 3 & 1) != 0) {
            return uVar3;
          }
          while( true ) {
            pbVar4 = pbVar8;
            if ((last <= pbVar8) ||
               (!(0x3b < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x800180000000000U) == 0)))
            break;
            pbVar8 = pbVar8 + 1;
          }
        }
        else {
          uVar3 = recovered_10006678(output,capacity,(char *)pbVar8,last,url,html,0);
          if ((uVar3 >> 3 & 1) != 0) {
            return 8;
          }
          while( true ) {
            pbVar4 = pbVar8;
            if ((last <= pbVar8) ||
               (!(0x3b < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x800180000000000U) == 0)))
            break;
            pbVar8 = pbVar8 + 1;
          }
        }
      }
      goto LAB_10005c00;
    }
    pcVar7 = recovered_100019ac((char *)pbVar8,'(');
    if (pcVar7 == (char *)0x0) {
      return 8;
    }
    last_00 = recovered_100062c4(pcVar7);
    if (last_00 == (char *)0x0) {
      return 8;
    }
    if (last < last_00) {
      return 8;
    }
    first = pcVar7 + 1;
    uVar3 = recovered_10006360(output,capacity,first,last_00,url,html,1);
    pbVar4 = (byte *)(last_00 + 1);
    if ((uVar3 >> 3 & 1) != 0) {
      return uVar3;
    }
  } while( true );
}

#undef DAT_1000724f
#undef str_100074cd
#undef str_100074e0
#undef str_100074ea
#undef str_10007502
#undef str_10007517
#undef str_1000751e
#undef str_10007535
#undef str_10007540
#undef acStack_268

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fb8
 */

uint recovered_10005fb8(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;

  uVar3 = 0;
  if ((((output != (char *)0x0) && (capacity != 0)) && (first <= last)) &&
     ((first != (char *)0x0 && (last != (char *)0x0)))) {
    uVar5 = recovered_10001908((long)output);
    uVar3 = 0;
    uVar8 = (ulong)capacity;
    while (first < last) {
      pcVar1 = first + 1;
      if (*first != '\\' || last <= pcVar1) {
        uVar6 = uVar5 + 1;
        if (uVar6 < uVar8) {
          output[uVar5] = *first;
          output[uVar6] = '\0';
          uVar5 = uVar6;
        }
        uVar3 = 1;
        uVar6 = uVar5;
        pcVar10 = first;
        goto LAB_1000604c;
      }
      cVar7 = *pcVar1;
      uVar6 = uVar5;
      pcVar10 = pcVar1;
      switch((uintptr_t)(cVar7)) {
      case 'n':
        if (uVar8 <= uVar5 + 1) goto LAB_10006194;
        cVar7 = '\n';
LAB_10006180:
        output[uVar5] = cVar7;
code_r0x10006184:
        uVar6 = uVar5 + 1;
        output[uVar6] = '\0';
        uVar3 = 1;
        pcVar10 = pcVar1;
        break;
      case 'o':
      case 'p':
      case 'q':
      case 's':
      case 'w':
code_r0x100060ac:
        uVar6 = uVar5 + 1;
        if (uVar8 <= uVar6) goto LAB_10006194;
        output[uVar5] = cVar7;
        output[uVar6] = '\0';
        uVar3 = 1;
        break;
      case 'r':
        break;
      case 't':
        if (uVar5 + 1 < uVar8) {
          output[uVar5] = ' ';
          goto code_r0x10006184;
        }
        goto LAB_10006194;
      case 'u':
        pcVar10 = first + 5;
        if (pcVar10 < last) {
          uVar3 = 0;
          for (lVar9 = 0; lVar9 != 4; lVar9 = lVar9 + 1) {
            uVar4 = recovered_10006840((int)first[lVar9 + 2]);
            if ((int)uVar4 < 0) goto code_r0x10014d30;
            uVar3 = uVar4 | uVar3 << 4;
          }
          uVar6 = uVar5 + 1;
          if (uVar6 < uVar8) {
            if (0x5e < uVar3 - 0x20) {
              uVar3 = 0x20;
            }
            output[uVar5] = (char)uVar3;
            output[uVar6] = '\0';
            uVar3 = 1;
            break;
          }
          uVar6 = uVar5;
        }
        else {
code_r0x10014d30:
          uVar2 = uVar5 + 1;
          pcVar10 = pcVar1;
          if (uVar2 < uVar8) {
            output[uVar5] = 'u';
            output[uVar2] = '\0';
            uVar6 = uVar2;
          }
        }
        uVar3 = 1;
        break;
      case 'v':
        goto LAB_10006194;
      case 'x':
        pcVar10 = first + 3;
        if (pcVar10 < last) {
          uVar3 = recovered_10006840((int)first[2]);
          uVar4 = recovered_10006840((int)first[3]);
          if ((-1 < (int)uVar3) && (-1 < (int)uVar4)) {
            uVar2 = uVar5 + 1;
            if (uVar2 < uVar8) {
              output[uVar5] = (byte)uVar4 | (byte)(uVar3 << 4);
              output[uVar2] = '\0';
              uVar6 = uVar2;
            }
            uVar3 = 1;
            break;
          }
        }
        if (uVar5 + 1 < uVar8) {
          cVar7 = 'x';
          goto LAB_10006180;
        }
        goto LAB_10006194;
      default:
        if (cVar7 == '\"') {
          if (uVar5 + 1 < uVar8) {
            cVar7 = '\"';
            goto LAB_10006180;
          }
        }
        else if (cVar7 == '\'') {
          if (uVar5 + 1 < uVar8) {
            cVar7 = '\'';
            goto LAB_10006180;
          }
        }
        else if (cVar7 == '\\') {
          if (uVar5 + 1 < uVar8) {
            cVar7 = '\\';
            goto LAB_10006180;
          }
        }
        else if ((cVar7 != 'b') && (cVar7 != 'f')) goto code_r0x100060ac;
LAB_10006194:
        uVar3 = 1;
        uVar6 = uVar5;
        pcVar10 = pcVar1;
      }
LAB_1000604c:
      uVar5 = uVar6;
      first = pcVar10 + 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006200
 */

char * recovered_10006200(char *first,char *last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;

  if (((first <= last) && (first != (char *)0x0)) && (last != (char *)0x0)) {
    iVar4 = 1;
LAB_10006224:
    if (first < last) {
      bVar2 = *first;
      uVar3 = bVar2 - 0x22;
      if (uVar3 < 0x3f && (1L << ((ulong)uVar3 & 0x3f) & 0x4000000000000021U) != 0) {
        pbVar5 = (byte *)(first + 1);
        do {
          while( true ) {
            if (last <= pbVar5) {
              first = (char *)pbVar5;
              goto LAB_10006224;
            }
            first = (char *)(pbVar5 + 1);
            bVar1 = *pbVar5;
            if (bVar1 != 0x5c || last <= first) break;
            pbVar5 = pbVar5 + 2;
          }
          pbVar5 = (byte *)first;
        } while (bVar1 != bVar2);
      }
      else {
        if (bVar2 == 0x7b) {
          iVar4 = iVar4 + 1;
        }
        else if ((bVar2 == 0x7d) && (iVar4 = iVar4 + -1, iVar4 == 0)) {
          return (char *)(byte *)first;
        }
        first = first + 1;
      }
      goto LAB_10006224;
    }
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062c4
 */

char * recovered_100062c4(char *first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
    return (char *)0x0;
  }
  iVar3 = 1;
switchD_10006300_caseD_23:
  first = first + 1;
LAB_100062e4:
  cVar1 = *first;
  switch((uintptr_t)(cVar1)) {
  case '\"':
  case '\'':
    first = first + 1;
LAB_10006308:
    do {
      cVar2 = *first;
      if (cVar2 == '\\') {
        if (first[1] != '\0') {
          first = first + 2;
          goto LAB_10006308;
        }
      }
      else if (cVar2 == '\0') break;
      first = first + 1;
    } while (cVar2 != cVar1);
    goto LAB_100062e4;
  case '#':
  case '$':
  case '%':
  case '&':
    goto switchD_10006300_caseD_23;
  case '(':
    iVar3 = iVar3 + 1;
    goto switchD_10006300_caseD_23;
  case ')':
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return first;
    }
    goto switchD_10006300_caseD_23;
  default:
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    goto switchD_10006300_caseD_23;
  }
}


#undef DAT_1000724f
#define DAT_1000724f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef str_100074ea
#define str_100074ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c2U)))
#undef str_1000751e
#define str_1000751e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_10007535
#define str_10007535 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_10007540
#define str_10007540 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_10007553
#define str_10007553 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42bU)))
#define abStack_110 (*(byte (*)[272])(pf_stack_frame + 16))
#define abStack_b0 (*(byte (*)[176])(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006360
 */

uint recovered_10006360(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;

  if (first == (char *)0x0) {
    return 8;
  }
  if (last <= first) {
    return 8;
  }
  pcVar4 = recovered_10005b0c(first,str_100074ea);
  if ((pcVar4 == first) || (pcVar4 = recovered_10005b0c(first,str_1000751e), pcVar4 == first)) {
    pbVar5 = (byte *)recovered_100019ac(first,'(');
    if (pbVar5 == (byte *)0x0) {
      return 8;
    }
    if (last <= pbVar5) {
      return 8;
    }
    do {
      pbVar6 = pbVar5;
      pbVar5 = pbVar6 + 1;
      if (last <= pbVar5) {
        return 8;
      }
      bVar1 = *pbVar5;
      if (0x27 < bVar1) {
        return 8;
      }
    } while ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0);
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x8400000000U) == 0) {
      return 8;
    }
    pbVar5 = pbVar6 + 2;
    for (lVar7 = 2; (pbVar6 + lVar7 < last && (pbVar6[lVar7] != bVar1)); lVar7 = lVar7 + 1) {
    }
    if (lVar7 - 2U == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = lVar7 - 2U;
      if (*pbVar5 == 0x23) {
        uVar8 = lVar7 - 3;
        pbVar5 = pbVar6 + 3;
      }
    }
    if (0x5e < uVar8) {
      uVar8 = 0x5f;
    }
    recovered_1000142c(abStack_110,pbVar5,uVar8);
    abStack_110[uVar8] = 0;
    if ((url != (char *)0x0) && (*url != '\0')) {
      iVar3 = recovered_1000192c(abStack_110,(byte *)url);
      if (iVar3 == 0) {
LAB_100065c4:
        pcVar4 = &DAT_1000724f;
        if (html != (char *)0x0) {
          pcVar4 = html;
        }
        if (depth == 0) {
          recovered_10006998(output,capacity,pcVar4);
        }
        else {
          recovered_10006870(output,capacity,pcVar4);
        }
        return 0x10;
      }
      pcVar4 = recovered_10005b0c((char *)abStack_110,str_10007553);
      if (pcVar4 != (char *)0x0) {
        pbVar5 = (byte *)(pcVar4 + 5);
        while( true ) {
          bVar1 = *pbVar5;
          uVar2 = (uint)bVar1;
          if ((bVar1 != 9) && (bVar1 != 0x20)) break;
          pbVar5 = pbVar5 + 1;
        }
        if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
          pbVar5 = pbVar5 + 1;
        }
        else {
          uVar2 = 0;
        }
        uVar8 = 0;
        while( true ) {
          bVar1 = pbVar5[uVar8];
          if ((((int)(char)bVar1 == 0) || (0x5e < uVar8 || uVar2 == (int)(char)bVar1)) ||
             ((uVar2 == 0 && (((bVar1 == 9 || (bVar1 == 0x20)) || (bVar1 == 0x5d)))))) break;
          abStack_b0[uVar8] = bVar1;
          uVar8 = uVar8 + 1;
        }
        abStack_b0[uVar8] = 0;
        iVar3 = recovered_1000192c(abStack_b0,(byte *)url);
        if (iVar3 == 0) goto LAB_100065c4;
      }
    }
  }
  else {
    uVar2 = recovered_10006678(output,capacity,first,last,url,html,depth);
    if ((uVar2 >> 3 & 1) == 0) {
      return uVar2;
    }
    pcVar4 = recovered_10005b0c(first,str_10007535);
    if ((pcVar4 == first) || (pcVar4 = recovered_10005b0c(first,str_10007540), pcVar4 == first))
    goto LAB_100065c4;
  }
  return 8;
}

#undef DAT_1000724f
#undef str_100074ea
#undef str_1000751e
#undef str_10007535
#undef str_10007540
#undef str_10007553
#undef abStack_110
#undef abStack_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006608
 */

uint recovered_10006608(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;

  pbVar5 = (byte *)(ulong)capacity;
  pcVar4 = output;
  if (pbVar5 != (byte *)0x0) {
    if (output == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)recovered_10001908((long)output);
    }
    while( true ) {
      bVar3 = *pbVar5;
      if (bVar3 == 0) break;
      bVar2 = bVar3 - 0x20;
      if (0x19 < bVar3 - 0x61U) {
        bVar2 = bVar3;
      }
      if ((output != (char *)0x0) && (pcVar1 = pcVar4 + 1, pcVar1 < (char *)0x200)) {
        output[(long)pcVar4] = bVar2;
        output[(long)pcVar1] = '\0';
        pcVar4 = pcVar1;
      }
      pbVar5 = pbVar5 + 1;
    }
  }
  return (uint)pcVar4;
}


#undef DAT_1000724f
#define DAT_1000724f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x127U)))
#undef str_10007517
#define str_10007517 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_1000756a
#define str_1000756a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x442U)))
#undef str_10007579
#define str_10007579 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#define local_a0 (*(byte (*)[160])(pf_stack_frame + 528))
#define abStack_2a0 (*(byte (*)[672])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006678
 */

uint recovered_10006678(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;

  if (first == (char *)0x0) {
    return 8;
  }
  if (last == (char *)0x0) {
    return 8;
  }
  if (last <= first) {
    return 8;
  }
  if (url == (char *)0x0) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  bVar2 = *first;
  if (((0x19 < (bVar2 & 0xffffffdf) - 0x41) && (bVar2 != 0x5f)) && (bVar2 != 0x24)) {
    return 8;
  }
  uVar7 = 0;
  for (pbVar8 = (byte *)first;
      (pbVar8 < last &&
      (((bVar2 = *pbVar8, bVar2 - 0x30U < 10 || (bVar2 & 0xffffffdf) - 0x41 < 0x1a || (bVar2 == 0x5f)
        ) || (bVar2 == 0x24)))); pbVar8 = pbVar8 + 1) {
    if (uVar7 + 1 < 0x60) {
      local_a0[uVar7] = bVar2;
      uVar7 = uVar7 + 1;
    }
  }
  local_a0[uVar7] = 0;
  iVar3 = recovered_1000192c(local_a0,(byte *)url);
  if ((iVar3 != 0) ||
     (pbVar5 = (byte *)recovered_10005b0c((char *)pbVar8,str_10007517), pbVar8 != pbVar5)) {
    return 8;
  }
  lVar4 = recovered_10001908(((uintptr_t)pf_module_state+0x3efU));
  pbVar8 = pbVar8 + lVar4;
  pbVar5 = &DAT_1000724f;
  if (html != (char *)0x0) {
    pbVar5 = (byte *)html;
  }
  pbVar6 = (byte *)recovered_10005b0c((char *)pbVar8,str_1000756a);
  if (pbVar8 == pbVar6) {
    abStack_2a0[0] = 0;
    recovered_10006608((char *)abStack_2a0,(uint)pbVar5,first);
  }
  else {
    pbVar6 = (byte *)recovered_10005b0c((char *)pbVar8,str_10007579);
    if (pbVar8 != pbVar6) goto LAB_10006820;
    abStack_2a0[0] = 0;
    uVar7 = recovered_10001908((long)abStack_2a0);
    while( true ) {
      bVar2 = *pbVar5;
      if (bVar2 == 0) break;
      if (uVar7 + 1 < 0x200) {
        bVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          bVar1 = bVar2;
        }
        abStack_2a0[uVar7] = bVar1;
        abStack_2a0[uVar7 + 1] = 0;
        uVar7 = uVar7 + 1;
      }
      pbVar5 = pbVar5 + 1;
    }
  }
  pbVar5 = abStack_2a0;
LAB_10006820:
  if (depth == 0) {
    recovered_10006998(output,capacity,(char *)pbVar5);
  }
  else {
    recovered_10006870(output,capacity,(char *)pbVar5);
  }
  return 0x10;
}

#undef DAT_1000724f
#undef str_10007517
#undef str_1000756a
#undef str_10007579
#undef local_a0
#undef abStack_2a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006840
 */

uint recovered_10006840(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 - 0x37;
  if (5 < param_1 - 0x41U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x61U < 6) {
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}


#undef str_10007559
#define str_10007559 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x431U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

uint recovered_10006870(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;

  pcVar3 = output;
  if (text != (char *)0x0) {
    if (output == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)recovered_10001908((long)output);
    }
    bVar1 = output != (char *)0x0;
    bVar2 = capacity != 0;
    pcVar4 = (char *)(ulong)capacity;
    while( true ) {
      bVar5 = *text;
      if (bVar5 == 0) break;
      uVar6 = (uint)bVar5;
      if ((uVar6 - 0x30 < 10 || (bVar5 & 0xffffffdf) - 0x41 < 0x1a) || (uVar6 - 0x2d < 2)) {
LAB_10014e34:
        pcVar7 = pcVar3 + 1;
        if (pcVar7 < pcVar4 && (bVar1 && bVar2)) {
LAB_1000690c:
          output[(long)pcVar3] = bVar5;
          output[(long)pcVar7] = '\0';
          pcVar3 = pcVar7;
        }
      }
      else if (uVar6 == 0x20) {
        pcVar7 = pcVar3 + 1;
        if (pcVar7 < pcVar4 && (bVar1 && bVar2)) {
          bVar5 = 0x2b;
          goto LAB_1000690c;
        }
      }
      else {
        if ((uVar6 == 0x7e) || (bVar5 == 0x5f)) goto LAB_10014e34;
        if (bVar1 && bVar2) {
          pcVar7 = pcVar3 + 1;
          if (pcVar7 < pcVar4) {
            output[(long)pcVar3] = '%';
            output[(long)pcVar7] = '\0';
            bVar5 = *text;
            pcVar3 = pcVar7;
          }
          pcVar7 = pcVar3 + 1;
          if (pcVar7 < pcVar4) {
            output[(long)pcVar3] = str_10007559[bVar5 >> 4];
            output[(long)pcVar7] = '\0';
            bVar5 = *text;
            pcVar3 = pcVar7;
          }
          pcVar7 = pcVar3 + 1;
          if (pcVar7 < pcVar4) {
            bVar5 = str_10007559[(ulong)bVar5 & 0xf];
            goto LAB_1000690c;
          }
        }
      }
      text = text + 1;
    }
  }
  return (uint)pcVar3;
}

#undef str_10007559

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006998
 */

uint recovered_10006998(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = output;
  if ((output != (char *)0x0) && (text != (char *)0x0)) {
    pcVar2 = (char *)recovered_10001908((long)output);
    for (; *text != '\0'; text = text + 1) {
      if ((capacity != 0) && (pcVar1 = pcVar2 + 1, pcVar1 < (char *)(ulong)capacity)) {
        output[(long)pcVar2] = *text;
        output[(long)pcVar1] = '\0';
        pcVar2 = pcVar1;
      }
    }
  }
  return (uint)pcVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a00
 */

uint recovered_10006a00(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;

  if ((((output != (char *)0x0) && (capacity != 0)) && (first <= last)) &&
     ((first != (char *)0x0 && (last != (char *)0x0)))) {
    uVar5 = 0;
LAB_10006a74:
    do {
      pbVar12 = (byte *)first;
      if (last <= pbVar12) {
        return uVar5;
      }
      while( true ) {
        if (last <= pbVar12) {
          return uVar5;
        }
        bVar2 = *pbVar12;
        if (0x2b < bVar2) goto LAB_10006b28;
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x80100002600U) == 0) break;
        pbVar12 = pbVar12 + 1;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x8400000000U) == 0) {
LAB_10006b28:
        if (bVar2 == 0x60) {
          do {
            lVar9 = 1;
LAB_10006b34:
            lVar8 = lVar9;
            first = (char *)(pbVar12 + lVar8);
            if (last <= first) {
LAB_10014e88:
              uVar5 = recovered_10005fb8(output,capacity,(char *)(pbVar12 + 1),first);
              if ((uVar5 == 0) && (lVar8 != 1)) {
                return 0;
              }
              if (first < last) {
                first = first + 1;
              }
              uVar5 = 1;
              goto LAB_10006a74;
            }
            bVar2 = pbVar12[lVar8];
            lVar9 = lVar8 + 1;
            pbVar6 = pbVar12 + lVar9;
            if (bVar2 == 0x5c && pbVar6 < last) {
              lVar9 = lVar8 + 2;
              goto LAB_10006b34;
            }
            if (bVar2 != 0x24) {
              if (bVar2 == 0x60) goto LAB_10014e88;
              goto LAB_10006b34;
            }
            if ((last <= pbVar6) || (*pbVar6 != 0x7b)) goto LAB_10006b34;
            pbVar6 = (byte *)recovered_10006200(first + 2,last);
            if (pbVar6 == (byte *)0x0) {
              return 0;
            }
            recovered_10005fb8(output,capacity,(char *)(pbVar12 + 1),first);
            uVar5 = recovered_10006a00(output,capacity,first + 2,(char *)pbVar6);
            pbVar12 = pbVar6;
            if (uVar5 == 0) {
              return 0;
            }
          } while( true );
        }
        lVar9 = 4;
        for (first = (char *)pbVar12; (first < last && (1 < (byte)*first - 0x2b)); first = first + 1
            ) {
          lVar9 = lVar9 + -1;
        }
        for (; (pbVar12 < first &&
               (*pbVar12 < 0x21 && (1L << ((ulong)*pbVar12 & 0x3f) & 0x100002600U) != 0));
            pbVar12 = pbVar12 + 1) {
          lVar9 = lVar9 + 1;
        }
        pbVar6 = (byte *)first;
        while( true ) {
          if (pbVar6 <= pbVar12) {
            return 0;
          }
          bVar2 = pbVar6[-1];
          if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          lVar9 = lVar9 + 1;
          pbVar6 = pbVar6 + -1;
        }
        pbVar10 = pbVar12;
        if (lVar9 == 0) {
          iVar4 = recovered_10003d58(pbVar12,(byte *)((uintptr_t)pf_module_state+0x471U),4);
          uVar5 = 1;
          if (iVar4 == 0) goto LAB_10006a74;
        }
        while (pbVar10 < pbVar6) {
          pbVar11 = pbVar10 + 1;
          bVar2 = *pbVar10;
          pbVar10 = pbVar11;
          if (((bVar2 & 0xffffffdf) - 0x5b < 0xffffffe6) &&
             ((bVar2 != 0x2b && bVar2 - 0x3a < 0xfffffff6) && bVar2 - 0x2f < 0xfffffffe)) {
            return 0;
          }
        }
        uVar7 = recovered_10001908((long)output);
        for (; pbVar12 < pbVar6; pbVar12 = pbVar12 + 1) {
          uVar1 = uVar7 + 1;
          if (uVar1 < capacity) {
            output[uVar7] = *pbVar12;
            output[uVar1] = '\0';
            uVar7 = uVar1;
          }
        }
        uVar5 = 1;
        goto LAB_10006a74;
      }
      pbVar6 = pbVar12 + 1;
      do {
        while( true ) {
          first = (char *)pbVar6;
          if (last <= first) goto LAB_10006af4;
          if (*first != 0x5c || last <= first + 1) break;
          pbVar6 = (byte *)(first + 2);
        }
        pbVar6 = (byte *)(first + 1);
      } while (*first != bVar2);
LAB_10006af4:
      uVar3 = recovered_10005fb8(output,capacity,(char *)(pbVar12 + 1),first);
      if (first < last) {
        first = first + 1;
      }
      uVar5 = 1;
    } while (uVar3 != 0);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d64
 */

uint recovered_10006d64(char *output,uint capacity,int character)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = output;
  if ((output != (char *)0x0) && (capacity != 0)) {
    pcVar1 = (char *)recovered_10001908((long)output);
    if (pcVar1 + 1 < (char *)(ulong)capacity) {
      output[(long)pcVar1] = (char)character;
      output[(long)(pcVar1 + 1)] = '\0';
    }
  }
  return (uint)pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db0
 */

char * recovered_10006db0(char *first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar5 = 0;
  iVar3 = 0;
  iVar4 = 0;
  do {
    for (; ((cVar1 = *first, cVar1 != '\"' && (cVar1 != '\'')) && (cVar1 != '`')); first = first + 1
        ) {
      if (cVar1 == '\0') {
        return first;
      }
      if (cVar1 == '(') {
        iVar5 = iVar5 + 1;
      }
      else if (cVar1 == ')' && 0 < iVar5) {
        iVar5 = iVar5 + -1;
      }
      else if (cVar1 == '[') {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == ']' && 0 < iVar3) {
        iVar3 = iVar3 + -1;
      }
      else if (cVar1 == '{') {
        iVar4 = iVar4 + 1;
      }
      else if (cVar1 == '}' && 0 < iVar4) {
        iVar4 = iVar4 + -1;
      }
      else if ((((cVar1 == '\n') || (cVar1 == ';')) || (cVar1 == '\r')) && (iVar5 == 0)) {
        if (iVar3 == 0 && iVar4 == 0) {
          return first;
        }
        iVar5 = 0;
      }
    }
    first = first + 1;
LAB_10006de0:
    do {
      cVar2 = *first;
      if (cVar2 == '\\') {
        if (first[1] != '\0') {
          first = first + 2;
          goto LAB_10006de0;
        }
      }
      else if (cVar2 == '\0') break;
      first = first + 1;
    } while (cVar2 != cVar1);
  } while( true );
}


#define acStack_460 (*(char (*)[1120])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb8
 */

uint recovered_10006eb8(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  char *text;
  char *pcVar5;

  pcVar5 = acStack_460;
  acStack_460[0] = '\0';
  uVar3 = recovered_10006a00(acStack_460,0x400,first,last);
  uVar4 = (ulong)uVar3;
  if (uVar3 == 0) {
LAB_10006fa4:
    return (uint)uVar4;
  }
  if (output == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = recovered_10001908((long)output);
  }
  do {
    cVar2 = *pcVar5;
    if (cVar2 == '&') {
      text = (char *)((uintptr_t)pf_module_state+0x4cdU);
LAB_10006f88:
      recovered_10006998(output,capacity,text);
      if (output == (char *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = recovered_10001908((long)output);
      }
    }
    else {
      if (cVar2 == '<') {
        text = (char *)((uintptr_t)pf_module_state+0x4d3U);
        goto LAB_10006f88;
      }
      if (cVar2 == '>') {
        text = (char *)((uintptr_t)pf_module_state+0x4d8U);
        goto LAB_10006f88;
      }
      if (cVar2 == '\0') goto LAB_10006fa4;
      if ((output != (char *)0x0 && capacity != 0) && (uVar1 = uVar4 + 1, uVar1 < capacity)) {
        output[uVar4] = cVar2;
        output[uVar1] = '\0';
        uVar4 = uVar1;
      }
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
}

#undef acStack_460
