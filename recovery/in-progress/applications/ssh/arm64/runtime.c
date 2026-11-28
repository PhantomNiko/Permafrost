/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10010060
#define DAT_10010060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x401cU)))
#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000488
 */

void recovered_10000488(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  DAT_10010060 = 0;
  recovered_100004ec();
  DAT_10010064 = 0;
  return;
}

#undef DAT_10010060
#undef DAT_10010064

#undef DAT_10010064
#define DAT_10010064 (*(int *)(((uintptr_t)pf_module_state + 0x4020U)))
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
      iVar3 = DAT_10010064;
      cVar1 = '\x01';
      { __typeof__(DAT_10010064) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10010064),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_10010064 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_10010064

#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401cU)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x402cU)))
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
  if (((byte)DAT_10010060 & 1) == 0) {
    DAT_10010068 = 0;
    DAT_10010070 = 0;
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
    if (DAT_10010068 == 0) {
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
    if (DAT_10010070 == 0) {
      DAT_10010070 = DAT_10010068;
    }
    PF_PART1(DAT_10010060, 0) = 1;
  }
  return;
}

#undef DAT_10010060
#undef DAT_10010068
#undef DAT_10010070
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

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000770
 */

bool recovered_10000770(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_100004b4();
  bVar1 = recovered_100007ac(param_1,param_2,param_3);
  DAT_10010064 = 0;
  return bVar1;
}

#undef DAT_10010064

#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401cU)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x402cU)))
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
    if ((PF_PART1(DAT_10010060, 1) & 1) == 0) {
      PF_PART1(DAT_10010060, 1) = 1;
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
          PF_PART1(DAT_10010060, 1) = 0;
          return false;
        }
        if ((ulong)plVar9 >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)plVar9 >> 0x1a < 0x21) &&
             (recovered_10002bb8((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            PF_PART1(DAT_10010060, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x100008ac;
        }
        else {
          recovered_10002bb8((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            PF_PART1(DAT_10010060, 1) = 0;
            return false;
          }
joined_r0x100008ac:
          if ((local_61 & 1) == 0) {
            PF_PART1(DAT_10010060, 1) = 0;
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
            PF_PART1(DAT_10010060, 1) = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_10010068;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && plVar9 < plVar7) {
            PF_PART1(DAT_10010060, 1) = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_10010068;
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
      if (DAT_10010070 == 0) {
        DAT_10010070 = DAT_10010068;
      }
      PF_PART1(DAT_10010060, 1) = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_10010060
#undef DAT_10010068
#undef DAT_10010070
#undef uStack_70
#undef local_61

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
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
  DAT_10010064 = 0;
  return bVar1;
}

#undef DAT_10010064
#undef local_20
#undef uStack_18

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
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
  for (plVar2 = &DAT_10010068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_10010064 = 0;
  return uVar1;
}

#undef DAT_10010064
#undef DAT_10010068

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
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
  for (plVar2 = &DAT_10010068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  DAT_10010064 = 0;
  return lVar1;
}

#undef DAT_10010064
#undef DAT_10010068

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
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
  for (plVar2 = &DAT_10010068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_10010064 = 0;
  return uVar1;
}

#undef DAT_10010064
#undef DAT_10010068

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
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
  for (plVar2 = &DAT_10010068; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  DAT_10010064 = 0;
  return lVar1;
}

#undef DAT_10010064
#undef DAT_10010068

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b2c
 */

void recovered_10000b2c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  recovered_10000b58(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_10010064 = 0;
  return;
}

#undef DAT_10010064

#undef DAT_10010068
#define DAT_10010068 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x402cU)))
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
    puVar4 = DAT_10010068;
    puVar3 = DAT_10010068;
    if (DAT_10010070 != (ulong *)0x0) {
      puVar3 = DAT_10010070;
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
                        DAT_10010070 = DAT_10010068;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_10010070 = (ulong *)puVar11[1];
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

#undef DAT_10010068
#undef DAT_10010070

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d14
 */

void recovered_10000d14(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  recovered_10000b58(param_1,(ulong *)0x0,param_2);
  DAT_10010064 = 0;
  return;
}

#undef DAT_10010064

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
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
  DAT_10010064 = 0;
  return puVar1;
}

#undef DAT_10010064

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

void recovered_10000d90(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100004b4();
  recovered_10000db8(param_1);
  DAT_10010064 = 0;
  return;
}

#undef DAT_10010064

#undef DAT_10010070
#define DAT_10010070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x402cU)))
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
    DAT_10010070 = puVar1;
  }
  return;
}

#undef DAT_10010070

#undef DAT_10010064
#define DAT_10010064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4020U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x402cU)))
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
    DAT_10010064 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000db8((long)param_1);
    DAT_10010064 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10010064 = 0;
    return (ulong *)0x0;
  }
  recovered_100004ec();
  uVar7 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar2 = param_1 + -4;
  uVar3 = *puVar2;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7 - 1) {
      DAT_10010064 = 0;
      return (ulong *)0x0;
    }
    if (uVar3 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar3) {
        DAT_10010064 = 0;
        return (ulong *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < param_2) {
      DAT_10010064 = 0;
      return (ulong *)0x0;
    }
    uVar1 = recovered_10002c08(puVar2,uVar7);
    if ((int)uVar1 == 0) {
      DAT_10010064 = 0;
      return param_1;
    }
    DAT_10010064 = 0;
    DAT_10010070 = param_1[-3];
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
      if (0xffffffffffffffdf < uVar4) goto LAB_10020124;
    }
    else if (0xffffffffffffffb0 < param_2) goto LAB_10020124;
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
        DAT_10010070 = param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10010064 = 0;
      return param_1;
    }
  }
  else {
LAB_10020124:
    puVar2 = recovered_10000b58(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_100012ac((undefined1 *)puVar2,(undefined1 *)param_1,uVar3);
      recovered_10000db8((long)param_1);
      DAT_10010064 = 0;
      return puVar2;
    }
  }
  DAT_10010064 = 0;
  return (ulong *)0x0;
}

#undef DAT_10010064
#undef DAT_10010070

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


#undef DAT_1000ca6e
#define DAT_1000ca6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa2aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001950
 */

undefined * recovered_10001950(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000ca6e;
}

#undef DAT_1000ca6e

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000195c
 */

undefined ** recovered_1000195c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

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


#undef DAT_1000c050
#define DAT_1000c050 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_1000c050 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_1000c050

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


#undef DAT_1000c058
#define DAT_1000c058 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_1000c058);
  return auVar1;
}

#undef DAT_1000c058

#undef DAT_1000c060
#define DAT_1000c060 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000c068
#define DAT_1000c068 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000c070
#define DAT_1000c070 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000c078
#define DAT_1000c078 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca4
 */

void recovered_10001ca4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_1000c060 < param_1; param_1 = param_1 + DAT_1000c078) {
  }
  for (; param_1 < DAT_1000c068; param_1 = param_1 + DAT_1000c070) {
  }
  return;
}

#undef DAT_1000c060
#undef DAT_1000c068
#undef DAT_1000c070
#undef DAT_1000c078

#undef DAT_1000c080
#define DAT_1000c080 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
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
                 (dVar2 * dVar2 * dVar2) / DAT_1000c080;
  return auVar1;
}

#undef DAT_1000c080

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


#undef str_1000ca70
#define str_1000ca70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2cU)))
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
      recovered_10002a40((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0xa33U));
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
      recovered_10002a40((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state + 0xa61U));
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
      pbVar13 = (byte *)str_1000ca70;
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

#undef str_1000ca70
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


#undef str_1000ca83
#define str_1000ca83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3fU)))
#undef str_1000ca94
#define str_1000ca94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa50U)))
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

  pcVar1 = str_1000ca83;
  if (param_6 == 0) {
    pcVar1 = str_1000ca94;
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

#undef str_1000ca83
#undef str_1000ca94
#undef acStack_80

#undef str_1000ca70
#define str_1000ca70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

void recovered_10002a40(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_1000ca70;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002964(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_1000ca70

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_10002a8c(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_100023c0(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10010060
#define DAT_10010060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x401cU)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x402cU)))
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
      puVar2 = &DAT_10010060;
      if (DAT_10010068 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 4) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_10010070 == (long *)0x0) {
        DAT_10010070 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_10010060
#undef DAT_10010068
#undef DAT_10010070

#undef DAT_10010060
#define DAT_10010060 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x401cU)))
#undef DAT_10010068
#define DAT_10010068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4024U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x402cU)))
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
      puVar1 = &DAT_10010060;
      if (DAT_10010068 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 4) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10010070 == (long *)0x0) {
        DAT_10010070 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_10010060
#undef DAT_10010068
#undef DAT_10010070

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


#undef DAT_10010070
#define DAT_10010070 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x402cU)))
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
      if (DAT_10010070 == puVar2) {
        DAT_10010070 = param_1;
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

#undef DAT_10010070

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

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000ca82
#define DAT_1000ca82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3eU)))
#undef DAT_1000cb44
#define DAT_1000cb44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_1000cb4f
#define DAT_1000cb4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb0bU)))
#undef DAT_1000cc43
#define DAT_1000cc43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbffU)))
#undef DAT_1000cc5a
#define DAT_1000cc5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc16U)))
#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4034U)))
#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4038U)))
#undef DAT_10010080
#define DAT_10010080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x403cU)))
#undef DAT_10010088
#define DAT_10010088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4044U)))
#undef DAT_100101b0
#define DAT_100101b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x416cU)))
#undef DAT_100101c0
#define DAT_100101c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x417cU)))
#undef DAT_10013858
#define DAT_10013858 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_1001385f
#define DAT_1001385f (*(byte *)(((uintptr_t)pf_module_state + 0x781bU)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_100138d4
#define DAT_100138d4 (*(int *)(((uintptr_t)pf_module_state + 0x7890U)))
#undef DAT_100138e4
#define DAT_100138e4 (*(uint *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_100138e8
#define DAT_100138e8 (*(uint *)(((uintptr_t)pf_module_state + 0x78a4U)))
#undef DAT_100138ec
#define DAT_100138ec (*(int *)(((uintptr_t)pf_module_state + 0x78a8U)))
#undef DAT_100138f0
#define DAT_100138f0 (*(uint *)(((uintptr_t)pf_module_state + 0x78acU)))
#undef DAT_100138f4
#define DAT_100138f4 (*(int *)(((uintptr_t)pf_module_state + 0x78b0U)))
#undef DAT_100138f8
#define DAT_100138f8 (*(int *)(((uintptr_t)pf_module_state + 0x78b4U)))
#undef DAT_100138fc
#define DAT_100138fc (*(uint *)(((uintptr_t)pf_module_state + 0x78b8U)))
#undef DAT_10013900
#define DAT_10013900 (*(uint *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014908
#define DAT_10014908 (*(byte *)(((uintptr_t)pf_module_state + 0x88c4U)))
#undef DAT_1001490c
#define DAT_1001490c (*(uint *)(((uintptr_t)pf_module_state + 0x88c8U)))
#undef DAT_10014910
#define DAT_10014910 (*(int *)(((uintptr_t)pf_module_state + 0x88ccU)))
#undef DAT_10014918
#define DAT_10014918 (*(int *)(((uintptr_t)pf_module_state + 0x88d4U)))
#undef DAT_1001491c
#define DAT_1001491c (*(uint *)(((uintptr_t)pf_module_state + 0x88d8U)))
#undef DAT_10014920
#define DAT_10014920 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88dcU)))
#undef DAT_10014928
#define DAT_10014928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88e4U)))
#undef DAT_10014968
#define DAT_10014968 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8924U)))
#undef DAT_1001499c
#define DAT_1001499c (*(uint *)(((uintptr_t)pf_module_state + 0x8958U)))
#undef DAT_100149a0
#define DAT_100149a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x895cU)))
#undef DAT_100149e0
#define DAT_100149e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x899cU)))
#undef DAT_10014ae0
#define DAT_10014ae0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x8a9cU)))
#undef DAT_10014ae2
#define DAT_10014ae2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a9eU)))
#undef DAT_10014ae3
#define DAT_10014ae3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a9fU)))
#undef DAT_10014b22
#define DAT_10014b22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8adeU)))
#undef DAT_10014ba2
#define DAT_10014ba2 (*(byte *)(((uintptr_t)pf_module_state + 0x8b5eU)))
#undef DAT_10014ba4
#define DAT_10014ba4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8b60U)))
#undef DAT_10014ba8
#define DAT_10014ba8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8b64U)))
#undef DAT_10014bac
#define DAT_10014bac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8b68U)))
#undef DAT_10014bb0
#define DAT_10014bb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8b6cU)))
#undef DAT_10014cb0
#define DAT_10014cb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8c6cU)))
#undef DAT_10014cba
#define DAT_10014cba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8c76U)))
#undef DAT_10014cf0
#define DAT_10014cf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cacU)))
#undef DAT_10014d10
#define DAT_10014d10 (*(char *)(((uintptr_t)pf_module_state + 0x8cccU)))
#undef DAT_10014d14
#define DAT_10014d14 (*(uint *)(((uintptr_t)pf_module_state + 0x8cd0U)))
#undef DAT_10014d18
#define DAT_10014d18 (*(char *)(((uintptr_t)pf_module_state + 0x8cd4U)))
#undef DAT_10014d20
#define DAT_10014d20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cdcU)))
#undef DAT_10014d24
#define DAT_10014d24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8ce0U)))
#undef DAT_10014d30
#define DAT_10014d30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cecU)))
#undef DAT_10014d34
#define DAT_10014d34 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x8cf0U)))
#undef DAT_10014d60
#define DAT_10014d60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8d1cU)))
#undef DAT_10014d8c
#define DAT_10014d8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d48U)))
#undef DAT_82010820
#define DAT_82010820 (*(uint8_t *)(0x82010820U))
#undef DAT_82010894
#define DAT_82010894 (*(uint8_t *)(0x82010894U))
#undef DAT_820108f8
#define DAT_820108f8 (*(uint8_t *)(0x820108f8U))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef UNK_1001385e
#define UNK_1001385e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x781aU)))
#undef UNK_8201082c
#define UNK_8201082c (*(uint *)(0x8201082cU))
#undef UNK_82010834
#define UNK_82010834 (*(uint *)(0x82010834U))
#undef UNK_82010838
#define UNK_82010838 (*(uint *)(0x82010838U))
#undef UNK_82010924
#define UNK_82010924 (*(uint *)(0x82010924U))
#undef UNK_820109fc
#define UNK_820109fc (*(uint *)(0x820109fcU))
#undef _DAT_1000c120
#define _DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef _DAT_1000c130
#define _DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef _DAT_100138e8
#define _DAT_100138e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a4U)))
#undef _DAT_82010820
#define _DAT_82010820 (*(uint *)(0x82010820U))
#undef _DAT_82010894
#define _DAT_82010894 (*(uint *)(0x82010894U))
#undef _DAT_820108f8
#define _DAT_820108f8 (*(uint *)(0x820108f8U))
#undef str_1000c44e
#define str_1000c44e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#undef str_1000c6f4
#define str_1000c6f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b0U)))
#undef str_1000caa8
#define str_1000caa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa64U)))
#undef str_1000cabc
#define str_1000cabc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa78U)))
#undef str_1000caea
#define str_1000caea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa6U)))
#undef str_1000cb11
#define str_1000cb11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacdU)))
#undef str_1000cb46
#define str_1000cb46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb02U)))
#undef str_1000cb53
#define str_1000cb53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#undef str_1000cb7e
#define str_1000cb7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3aU)))
#undef str_1000cb85
#define str_1000cb85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb41U)))
#undef str_1000cbc2
#define str_1000cbc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7eU)))
#undef str_1000cbd0
#define str_1000cbd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8cU)))
#undef str_1000cbe8
#define str_1000cbe8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba4U)))
#undef str_1000cbf8
#define str_1000cbf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb4U)))
#undef str_1000cc18
#define str_1000cc18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd4U)))
#undef str_1000cc48
#define str_1000cc48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef str_1000cc51
#define str_1000cc51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0dU)))
#undef str_1000cc5f
#define str_1000cc5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1bU)))
#undef str_1000cc67
#define str_1000cc67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc23U)))
#undef str_1000cc6f
#define str_1000cc6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2bU)))
#undef str_1000cc77
#define str_1000cc77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc33U)))
#undef str_1000cc7e
#define str_1000cc7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3aU)))
#undef str_1000cc87
#define str_1000cc87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc43U)))
#undef str_1000cc92
#define str_1000cc92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4eU)))
#undef str_1000cc9b
#define str_1000cc9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc57U)))
#undef str_1000cca8
#define str_1000cca8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc64U)))
#undef str_1000ccb0
#define str_1000ccb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6cU)))
#undef str_1000cce4
#define str_1000cce4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca0U)))
#undef str_1000cd1b
#define str_1000cd1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd7U)))
#undef str_1000cd5d
#define str_1000cd5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd19U)))
#undef str_1000cda6
#define str_1000cda6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd62U)))
#undef str_1000cdc7
#define str_1000cdc7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd83U)))
#undef str_1000cde4
#define str_1000cde4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xda0U)))
#undef str_1000cdff
#define str_1000cdff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbbU)))
#undef str_1000ce28
#define str_1000ce28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde4U)))
#undef str_1000ce4c
#define str_1000ce4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe08U)))
#undef str_1000ce7c
#define str_1000ce7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe38U)))
#undef str_1000ce99
#define str_1000ce99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe55U)))
#undef str_1000ceaa
#define str_1000ceaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe66U)))
#undef str_1000ceb4
#define str_1000ceb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe70U)))
#undef str_1000cef5
#define str_1000cef5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeb1U)))
#undef str_1000cf1a
#define str_1000cf1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xed6U)))
#undef str_1000cf38
#define str_1000cf38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xef4U)))
#undef str_1000cf4d
#define str_1000cf4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf09U)))
#undef str_1000cf7b
#define str_1000cf7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf37U)))
#undef str_1000cfef
#define str_1000cfef (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfabU)))
#undef str_1000d007
#define str_1000d007 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfc3U)))
#undef str_1000d028
#define str_1000d028 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe4U)))
#undef str_1000d5ba
#define str_1000d5ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1576U)))
#undef str_1000d5c2
#define str_1000d5c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157eU)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef uRam000000001001385e
#define uRam000000001001385e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x781aU)))
#undef uRam000000008201082c
#define uRam000000008201082c (*(uint32_t *)(0x8201082cU))
#undef uRam0000000082010834
#define uRam0000000082010834 (*(uint32_t *)(0x82010834U))
#undef uRam0000000082010838
#define uRam0000000082010838 (*(uint32_t *)(0x82010838U))
#undef uRam0000000082010924
#define uRam0000000082010924 (*(uint32_t *)(0x82010924U))
#undef uRam00000000820109fc
#define uRam00000000820109fc (*(uint32_t *)(0x820109fcU))
#define uStack_310 (*(uint *)(pf_stack_frame + 16))
#define uStack_30c (*(uint *)(pf_stack_frame + 20))
#define uStack_2e4 (*(undefined8 *)(pf_stack_frame + 60))
#define puStack_2d8 (*(undefined * *)(pf_stack_frame + 72))
#define uStack_2d0 (*(undefined8 *)(pf_stack_frame + 80))
#define uStack_2c8 (*(undefined1 *)(pf_stack_frame + 88))
#define cStack_2c1 (*(char *)(pf_stack_frame + 95))
#define uStack_2c0 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_2b8 (*(undefined8 *)(pf_stack_frame + 104))
#define uStack_2b0 (*(undefined8 *)(pf_stack_frame + 112))
#define uStack_2a8 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_2a0 (*(undefined8 *)(pf_stack_frame + 128))
#define acStack_280 (*(char (*)[640])(pf_stack_frame + 160))
#define uStack_258 (*(undefined4 *)(pf_stack_frame + 200))
#define acStack_240 (*(char (*)[576])(pf_stack_frame + 224))
#define uStack_bc (*(undefined8 *)(pf_stack_frame + 612))
#define bStack_9d (*(byte *)(pf_stack_frame + 643))
#define acStack_7d (*(char (*)[125])(pf_stack_frame + 675))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002e9c(void)

{
  unsigned char pf_stack_frame[832] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  undefined8 extraout_x1 = 0;
  undefined8 extraout_x1_00 = 0;
  undefined8 extraout_x1_01 = 0;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  int *piVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint *puVar28;
  undefined8 uVar29;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint128 auVar33;

  bVar3 = recovered_1000532c(0x20);
  if ((!bVar3) || (_DAT_82010820 == 0)) {
    bVar3 = true;
  }
  else {
    iVar7 = (*(code *)(ulong)_DAT_82010820)(0xb1a2c,0xd8e6f2,0x1f);
    bVar3 = iVar7 == 0;
  }
  recovered_10004058(str_1000caa8);
  recovered_10004058(str_1000cabc);
  recovered_10004058(&DAT_1000ca82);
  recovered_100053b4();
  iVar7 = 0x40;
  do {
    uVar8 = recovered_10005408();
    recovered_100053e4((ulong)uVar8);
    recovered_10005104();
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  recovered_10001498(&uStack_2c0,0,0xa8);
  bVar4 = recovered_1000532c(0xf8);
  if (((bVar4) && (_DAT_820108f8 != 0)) &&
     (iVar7 = (*(code *)(ulong)_DAT_820108f8)(&uStack_2c0), iVar7 != 0)) {
    recovered_10005438((undefined1 *)&uStack_2c0,0xa8);
  }
  recovered_100053b4();
  iVar9 = recovered_10005408();
  recovered_10005138(250000);
  DAT_10014918 = recovered_10005408();
  iVar7 = (DAT_10014918 - iVar9) * 4;
  DAT_10014910 = 0x12;
  if (iVar7 != 0) {
    DAT_10014910 = iVar7;
  }
  DAT_10014920 = 0;
  recovered_100053e4(CONCAT44(iVar9,DAT_10014918));
  recovered_10001498((ulong *)&DAT_10014ae0,0,0x23c);
  recovered_10005b84(str_1000cce4,0,0);
  recovered_10005b84(str_1000cd1b,0,0);
  recovered_10005b84(str_1000cd5d,0,0);
  bVar4 = recovered_1000532c(0x1fc);
  if (((!bVar4) || (uRam00000000820109fc == 0)) ||
     (iVar7 = (*(code *)(ulong)uRam00000000820109fc)(str_1000cbe8), iVar7 == 0)) {
    pcVar10 = str_1000cc18;
  }
  else {
    pcVar10 = str_1000cbf8;
  }
  recovered_100040ec(pcVar10,str_1000cbe8);
  uVar11 = recovered_1000576c(&DAT_1000cc43,0x16);
  iVar7 = (int)uVar11;
  if (0xfffe < iVar7 - 1U) {
    iVar7 = 0x16;
  }
  DAT_10014ae0 = (ushort)iVar7;
  recovered_100057c8(str_1000cc48,&DAT_10014ae2,0x40,&DAT_1000cb44);
  recovered_100057c8(str_1000cc51,&DAT_10014b22,0x80,&DAT_1000cb44);
  uVar11 = recovered_10005980(&DAT_1000cc5a,1);
  DAT_10014ba2 = (byte)uVar11;
  recovered_10005a0c(str_1000cc5f,&DAT_10014ba4);
  recovered_10005a0c(str_1000cc67,&DAT_10014ba8);
  recovered_10005a0c(str_1000cc6f,&DAT_10014bac);
  recovered_100057c8(str_1000cc77,&DAT_10014bb0,0x100,&DAT_1000ca82);
  recovered_100057c8(str_1000cc7e,&DAT_10014cb0,0x40,str_1000cc87);
  recovered_100057c8(str_1000cc92,(undefined1 *)&uStack_2c0,0x100,&DAT_1000ca82);
  uVar11 = recovered_10001788((long)&uStack_2c0);
  if (0x3f < uVar11) {
    uVar8 = recovered_10005ac8((long)&uStack_2c0,(long)&uStack_bc);
    if (uVar8 != 0) {
      recovered_100012ac(&DAT_10014cf0,(undefined1 *)&uStack_bc,0x20);
      DAT_10014d10 = '\x01';
    }
    recovered_10005318((undefined1 *)&uStack_bc,0x20);
  }
  uVar11 = recovered_1000576c(str_1000cc9b,4);
  DAT_10014d14 = (uint)uVar11;
  if (3 < DAT_10014d14 - 1) {
    DAT_10014d14 = 4;
  }
  uVar11 = recovered_10005980(str_1000cca8,0);
  DAT_10014d18 = (char)uVar11;
  if (DAT_10014ae2 == '\0') {
    recovered_100012ac(&DAT_10014ae2,&DAT_1000cb44,1);
    DAT_10014ae3 = 0;
  }
  if (DAT_10014cb0 == '\0') {
    recovered_100012ac(&DAT_10014cb0,str_1000cc87,10);
    DAT_10014cba = 0;
  }
  if (((DAT_10014ba2 & 1) == 0) && (DAT_10014ba4 == 0)) {
    recovered_10004058(str_1000ccb0);
    DAT_10014ba2 = 1;
  }
  if ((DAT_10014ba8 == 0) && (DAT_10014ba4 != 0)) {
    DAT_10014ba8 = 0xffffff00;
  }
  if (DAT_10014d10 == '\x01') {
    recovered_100012ac(&DAT_10014928,&DAT_10014cf0,0x20);
    recovered_10004058(str_1000cda6);
    recovered_10001498(&uStack_2e4,0,0xc);
  }
  else {
    recovered_10001498(&uStack_2e4,0,0xc);
    bVar4 = recovered_1000532c(0x34);
    if (bVar4) {
      bVar4 = false;
      if (uRam0000000082010834 != 0) {
        iVar7 = (*(code *)(ulong)uRam0000000082010834)(str_1000cdc7,&uStack_2e4);
        bVar4 = iVar7 != 0;
      }
    }
    else {
      bVar4 = false;
    }
    if (((!bVar4) || ((uint)uStack_2e4 == 0)) || (PF_PART4(uStack_2e4, 4) < 0x40)) {
LAB_10003358:
      recovered_10005c4c(&DAT_10014928,0x20);
      pbVar18 = &DAT_10014928;
      for (lVar20 = 0; lVar20 != 0x40; lVar20 = lVar20 + 2) {
        bVar30 = *pbVar18;
        acStack_280[lVar20 + -0x40] = str_1000ce99[bVar30 >> 4];
        acStack_280[lVar20 + -0x3f] = str_1000ce99[(ulong)bVar30 & 0xf];
        pbVar18 = pbVar18 + 1;
      }
      acStack_280[0] = '\n';
      acStack_280[1] = '\0';
      bVar4 = recovered_1000532c(0x38);
      if (((!bVar4) || (uRam0000000082010838 == 0)) ||
         (iVar7 = (*(code *)(ulong)uRam0000000082010838)(str_1000cdc7,&uStack_2c0,0x41), iVar7 == 0)
         ) {
        pcVar10 = str_1000ce4c;
      }
      else {
        pcVar10 = str_1000ce28;
      }
      recovered_100040ec(pcVar10,str_1000cdc7);
      lVar20 = 0x44;
    }
    else {
      if (0x4e < PF_PART4(uStack_2e4, 4)) {
        PF_PART4(uStack_2e4, 4) = 0x4f;
      }
      recovered_100012ac((undefined1 *)&uStack_2c0,(undefined1 *)(ulong)(uint)uStack_2e4,
                         (ulong)PF_PART4(uStack_2e4, 4));
      acStack_280[(ulong)PF_PART4(uStack_2e4, 4) - 0x40] = '\0';
      uVar8 = recovered_10005ac8((long)&uStack_2c0,((uintptr_t)pf_module_state + 0x88e4U));
      if (uVar8 == 0) {
        recovered_100040ec(str_1000cdff,str_1000cdc7);
        recovered_10005318((undefined1 *)&uStack_2c0,0x50);
        goto LAB_10003358;
      }
      recovered_100040ec(str_1000cde4,str_1000cdc7);
      lVar20 = 0x50;
    }
    recovered_10005318((undefined1 *)&uStack_2c0,lVar20);
  }
  recovered_10006240(&DAT_10014928,0x20,&uStack_bc);
  PF_PART1(uStack_bc, 0) = (byte)uStack_bc & 0xf8;
  bStack_9d = bStack_9d & 0x3f | 0x40;
  recovered_100062b0((long)&uStack_2c0,(long)&uStack_bc);
  recovered_100063c4(((uintptr_t)pf_module_state + 0x8904U),(long)&uStack_2c0);
  recovered_10005318((undefined1 *)&uStack_bc,0x40);
  puStack_2d8 = &DAT_10014968;
  uStack_2d0 = DAT_1000c0b8;
  uStack_2c8 = 0;
  recovered_100060c8((long *)&puStack_2d8,str_1000c44e + 10);
  recovered_100060e8((long *)&puStack_2d8,(undefined1 *)((uintptr_t)pf_module_state + 0x8904U),0x20);
  DAT_1001499c = PF_PART4(uStack_2d0, 4);
  uStack_2b8 = uRam000000001000c128;
  uStack_2c0 = _DAT_1000c120;
  uStack_2a8 = uRam000000001000c138;
  uStack_2b0 = _DAT_1000c130;
  uStack_2a0 = 0;
  uStack_258 = 0;
  recovered_1000611c((uint *)&uStack_2c0,&DAT_10014968,(ulong)PF_PART4(uStack_2d0, 4));
  recovered_1000618c((uint *)&uStack_2c0,(long)&uStack_bc);
  uVar14 = 0;
  for (uVar11 = 0; uVar11 < 0x20; uVar11 = uVar11 + 3) {
    if (uVar11 == 0x1f) {
      uVar8 = 0;
LAB_10003524:
      bVar4 = false;
      uVar19 = 0;
    }
    else {
      uVar8 = (uint)(byte)acStack_240[uVar11 + 0x185] << 8;
      if (0x1d < uVar11) goto LAB_10003524;
      uVar19 = (ulong)(byte)acStack_240[uVar11 + 0x186];
      bVar4 = true;
    }
    acStack_7d[1] = str_1000ceb4[(byte)acStack_240[uVar11 + 0x184] >> 2];
    acStack_7d[2] =
         str_1000ceb4
         [(ulong)((uVar8 | (uint)(byte)acStack_240[uVar11 + 0x184] << 0x10) >> 0xc) & 0x3f];
    if (uVar11 == 0x1f) {
      acStack_7d[3] = '=';
    }
    else {
      acStack_7d[3] = str_1000ceb4[(ulong)(((uint)uVar19 | uVar8) >> 6) & 0x3f];
    }
    if (bVar4) {
      acStack_7d[4] = str_1000ceb4[uVar19 & 0x3f];
    }
    else {
      acStack_7d[4] = '=';
    }
    for (lVar20 = 1; lVar20 != 5; lVar20 = lVar20 + 1) {
      if (uVar14 + 1 < 0x40) {
        acStack_280[uVar14 - 0x40] = acStack_7d[lVar20];
      }
      uVar14 = uVar14 + 1;
    }
  }
  uVar11 = uVar14;
  if (0x3e < uVar14) {
    uVar11 = 0x3f;
  }
  do {
    acStack_280[uVar11 - 0x40] = '\0';
    if (uVar14 == 0) break;
    uVar11 = uVar14 - 1;
    lVar20 = uVar14 - 0x41;
    uVar14 = uVar11;
  } while (acStack_280[lVar20] == '=');
  recovered_10002a8c(&DAT_100149a0,0x40,str_1000ceaa,&uStack_2c0);
  recovered_100040ec(str_1000ce7c,&DAT_100149a0);
  iVar7 = 0;
  lVar20 = -0x37e0;
  do {
    if (lVar20 == 0) {
      uVar11 = recovered_100040a8();
      uStack_30c = (uint)uVar11;
      recovered_10001498(&uStack_2c0,0,0xc0);
      uStack_2c0 = CONCAT44(PF_PART4(uStack_2c0, 4),0xc0);
      bVar4 = recovered_1000532c(0x124);
      if (((!bVar4) || (uRam0000000082010924 == 0)) ||
         ((iVar7 = (*(code *)(ulong)uRam0000000082010924)(&uStack_2c0), iVar7 == 0 ||
          ((uStack_2c0 & 0x100000000) == 0)))) {
        pcVar10 = str_1000cef5;
        goto LAB_100036d0;
      }
      recovered_100012ac(&DAT_10013858,(undefined1 *)&uStack_2b0,6);
      uRam000000001001385e = 1;
      recovered_10005438((undefined1 *)&uStack_2c0,0xc0);
      recovered_10002a8c((char *)&uStack_bc,0x18,str_1000cf1a,(uint)uStack_2b0 & 0xff,
                         (uint)PF_PART1(uStack_2b0, 1),(uint)PF_PART1(uStack_2b0, 2),(uint)PF_PART1(uStack_2b0, 3),
                         (uint)PF_PART1(uStack_2b0, 4),(uint)PF_PART1(uStack_2b0, 5));
      pcVar10 = acStack_280;
      if (acStack_240[0] != '\0') {
        pcVar10 = acStack_240;
      }
      recovered_100040ec(str_1000cf38,&uStack_bc,pcVar10);
      if ((PF_PART1(uStack_2c0, 4) >> 1 & 1) == 0) {
        recovered_10004058(str_1000cf4d);
      }
      puVar22 = &DAT_10014d60;
      lVar20 = 0xd;
      pcVar10 = str_1000cf7b;
      goto LAB_10003810;
    }
    *(int *)(lVar20 + ((uintptr_t)pf_module_state + 0x7818U)) = iVar7;
    puVar12 = recovered_10006b90(0x89cc);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x794cU)) = puVar12;
    puVar12 = recovered_10006b90(0x890c);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x795cU)) = puVar12;
    puVar12 = recovered_10006b90(0x2000);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x7964U)) = puVar12;
    puVar12 = recovered_10006b90(0x2000);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x7cd4U)) = puVar12;
    puVar12 = recovered_10006b90(0x2000);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x7ce4U)) = puVar12;
    puVar12 = recovered_10006b90(0x8000);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x83bcU)) = puVar12;
    puVar12 = recovered_10006b90(0x10000);
    *(ulong **)(lVar20 + ((uintptr_t)pf_module_state + 0x85d4U)) = puVar12;
    if ((*(long *)(lVar20 + ((uintptr_t)pf_module_state + 0x794cU)) == 0) ||
       ((((*(long *)(lVar20 + ((uintptr_t)pf_module_state + 0x795cU)) == 0 || (*(long *)(lVar20 + ((uintptr_t)pf_module_state + 0x7964U)) == 0)) ||
         (*(long *)(lVar20 + ((uintptr_t)pf_module_state + 0x7cd4U)) == 0)) ||
        ((*(long *)(lVar20 + ((uintptr_t)pf_module_state + 0x7ce4U)) == 0 || (*(long *)(lVar20 + ((uintptr_t)pf_module_state + 0x83bcU)) == 0)))))) break;
    lVar20 = lVar20 + 0xdf8;
    iVar7 = iVar7 + 1;
  } while (puVar12 != (ulong *)0x0);
  pcVar10 = str_1000caea;
  goto LAB_100036d0;
LAB_100038e0:
  if (((bVar3) || (bVar4 = recovered_1000532c(0x2c), !bVar4)) || (uRam000000008201082c == 0)) {
    bVar4 = false;
  }
  else {
    cVar5 = (*(code *)(ulong)uRam000000008201082c)();
    bVar4 = cVar5 == '\x1b';
  }
  uVar11 = recovered_100040a8();
  if (!bVar4) {
    uVar8 = (uint)uVar11;
    uVar14 = recovered_10004118(0x20,uVar8);
    bVar4 = (int)uVar14 != 0;
    if (DAT_100138d4 - 1U < 2) {
LAB_10003960:
      if (DAT_100138e8 <= uVar8 - DAT_100138e4) {
        uVar13 = DAT_100138ec + 1;
        _DAT_100138e8 = CONCAT44(uVar13,DAT_100138e8);
        if (DAT_100138d4 != 2 || uVar13 < 4) {
          if ((DAT_100138d4 != 4) || (uVar8 - DAT_100138f4 < DAT_100138f0)) {
            if (DAT_100138e8 >> 7 < 0x7d) {
              _DAT_100138e8 = CONCAT44(uVar13,DAT_100138e8 << 1);
            }
            if (DAT_100138d4 == 2) {
              iVar7 = 3;
              DAT_100138e4 = uVar8;
            }
            else {
              if (DAT_100138d4 != 1) goto LAB_10003a28;
              DAT_100138e4 = uVar8;
              if ((uVar13 & 3) == 0) {
                recovered_10004058(str_1000d007);
              }
              iVar7 = 1;
            }
            uVar13 = 0;
            goto LAB_10003a3c;
          }
          recovered_10004058(str_1000cfef);
          DAT_1001385f = 0;
        }
        recovered_10006bf0(uVar8);
      }
    }
    else if (DAT_100138d4 == 3) {
      if (-1 < (int)(uVar8 - DAT_100138f8)) {
        DAT_100138d4 = 4;
        _DAT_100138e8 = uVar21;
LAB_10003a28:
        iVar7 = 3;
        uVar13 = 1;
        DAT_100138e4 = uVar8;
LAB_10003a3c:
        recovered_10006d08(iVar7,uVar13);
      }
    }
    else if (DAT_100138d4 == 4) goto LAB_10003960;
    puVar28 = &DAT_10014d20;
    lVar20 = 0xc;
    do {
      recovered_10004f54(puVar28,uVar11);
      lVar20 = lVar20 + -1;
      puVar28 = puVar28 + 0x1e;
    } while (lVar20 != 0);
    lVar20 = 0;
    while( true ) {
      pbVar18 = &DAT_10010078;
      piVar17 = &DAT_10010088;
      if (lVar20 == 0xc) break;
      if ((&DAT_10014d20)[lVar20 * 0x1e] == 2) {
        puVar28 = &DAT_10014d20 + lVar20 * 0x1e;
        lVar15 = 4;
        do {
          if ((((char)piVar17[-4] == '\x01') && (*(uint **)(piVar17 + -2) == puVar28)) &&
             (*piVar17 == (&DAT_10014d24)[lVar20 * 0x1e])) goto LAB_10003c5c;
          piVar17 = piVar17 + 0x37e;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        for (lVar15 = 0; (ulong)DAT_10014d14 * 0xdf8 != lVar15; lVar15 = lVar15 + 0xdf8) {
          if ((((&DAT_10010078)[lVar15] & 1) == 0) &&
             (puVar12 = (ulong *)(&DAT_10010078 + lVar15), (*(byte *)(lVar15 + ((uintptr_t)pf_module_state + 0x4bedU)) & 1) == 0
             )) {
            uVar1 = *(undefined4 *)((long)&DAT_1001007c + lVar15);
            uVar26 = *(undefined8 *)((long)&DAT_100101b0 + lVar15);
            uVar27 = *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x44f4U));
            uVar23 = *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4504U));
            uVar24 = *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4bdcU));
            uVar29 = *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4df4U));
            uVar32 = *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4184U));
            uVar31 = *(undefined8 *)((long)&DAT_100101c0 + lVar15);
            recovered_10001498(puVar12,0,0xdf8);
            *(undefined4 *)((long)&DAT_1001007c + lVar15) = uVar1;
            *(undefined8 *)((long)&DAT_100101b0 + lVar15) = uVar26;
            *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4184U)) = uVar32;
            *(undefined8 *)((long)&DAT_100101c0 + lVar15) = uVar31;
            *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x44f4U)) = uVar27;
            *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4504U)) = uVar23;
            *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4bdcU)) = uVar24;
            *(undefined8 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4df4U)) = uVar29;
            *(undefined1 *)puVar12 = 1;
            *(uint **)((long)&DAT_10010080 + lVar15) = puVar28;
            *(undefined4 *)((long)&DAT_10010088 + lVar15) = (&DAT_10014d24)[lVar20 * 0x1e];
            *(undefined4 *)(lVar15 + ((uintptr_t)pf_module_state + 0x4048U)) = 0;
            *(uint *)(lVar15 + ((uintptr_t)pf_module_state + 0x404cU)) = uVar8;
            *(uint *)(lVar15 + ((uintptr_t)pf_module_state + 0x4050U)) = uVar8;
            recovered_100050c0((ulong)(uint)(&DAT_10014d30)[lVar20 * 0x1e],(byte *)&uStack_2c0);
            recovered_10002a8c((char *)(lVar15 + ((uintptr_t)pf_module_state + 0x4154U)),0x18,str_1000d028,&uStack_2c0,
                               (uint)(ushort)(&DAT_10014d34)[lVar20 * 0x3c]);
            DAT_1001490c = DAT_1001490c + 1;
            recovered_100097c0();
            recovered_100097f4(puVar28,str_1000c6f4,0x24);
            recovered_10009868((long)puVar12);
            goto LAB_10003c58;
          }
        }
        if (uVar8 - (&DAT_10014d8c)[lVar20 * 0x1e] < 90000) {
LAB_10003c58:
          recovered_100078b8(puVar28,uVar11 & 0xffffffff);
        }
        else {
          recovered_10005270(puVar28,uVar11 & 0xffffffff);
        }
      }
LAB_10003c5c:
      lVar20 = lVar20 + 1;
    }
    lVar20 = 4;
    pbVar16 = pbVar18;
    do {
      if (*pbVar16 == 1) {
        recovered_10007ac4(pbVar16,uVar11 & 0xffffffff);
      }
      else if ((pbVar16[0xbb9] == 1) && (*(int *)(pbVar16 + 0xdc8) != 0)) {
        recovered_10009744((long)pbVar16);
        pbVar16[0xde0] = 0;
      }
      pbVar16 = pbVar16 + 0xdf8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    pbVar16 = pbVar18;
    do {
      if ((pbVar16[0xbb9] == 1) && (*(int *)(pbVar16 + 0xdc8) != 0)) {
        recovered_10009744((long)pbVar16);
      }
      pbVar16 = pbVar16 + 0xdf8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    if ((DAT_10014908 & 1) == 0) {
      iVar7 = 4;
      uVar13 = DAT_1001491c;
      do {
        lVar20 = (ulong)(uVar13 & 3) * 0xdf8;
        pcVar10 = &DAT_10010078 + lVar20;
        if (((*pcVar10 == '\x01') && (*(char *)(lVar20 + ((uintptr_t)pf_module_state + 0x4becU)) == '\x01')) &&
           ((*(byte *)(lVar20 + ((uintptr_t)pf_module_state + 0x4e20U)) & 1) == 0)) {
          DAT_1001491c = (&DAT_1001007c)[(ulong)(uVar13 & 3) * 0x37e] + 1 & 3;
          *(undefined2 *)(lVar20 + ((uintptr_t)pf_module_state + 0x4becU)) = 0x100;
          *(undefined4 *)(lVar20 + ((uintptr_t)pf_module_state + 0x4dfcU)) = 0;
          *(undefined4 *)(lVar20 + ((uintptr_t)pf_module_state + 0x4e00U)) = 0;
          *(uint *)(lVar20 + ((uintptr_t)pf_module_state + 0x4e04U)) = uVar8;
          **(undefined1 **)(lVar20 + ((uintptr_t)pf_module_state + 0x4df4U)) = 0;
          DAT_10014908 = 1;
          if (DAT_10014d18 == '\x01') {
            recovered_1000a7c8(pcVar10,str_1000d5ba);
          }
          DataMemoryBarrier(2,3);
          bVar6 = recovered_1000532c(0x94);
          if (((!bVar6) || (_DAT_82010894 == 0)) ||
             (iVar7 = (*(code *)(ulong)_DAT_82010894)(recovered_1000ba2c,pcVar10,str_1000d5c2),
             iVar7 == 0)) {
            recovered_1000ba2c((long)pcVar10);
          }
          break;
        }
        uVar13 = uVar13 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar20 = 4;
    pbVar16 = pbVar18;
    do {
      if ((*pbVar16 == 1) && ((*(int *)(pbVar16 + 0x140) != 0 || (*(int *)(pbVar16 + 0xbb4) != 0))))
      {
        bVar4 = true;
      }
      lVar20 = lVar20 + -1;
      pbVar16 = pbVar16 + 0xdf8;
    } while (lVar20 != 0);
    if ((DAT_1001385f != (bVar30 & 1)) && (bVar30 = DAT_1001385f, (DAT_1001385f & 1) != 0)) {
      recovered_100050c0((ulong)DAT_10013860,(byte *)&uStack_2c0);
      iVar7 = recovered_100017ac((byte *)&DAT_10014ae2,&DAT_1000cb44);
      pcVar10 = str_1000cb7e;
      if (iVar7 != 0) {
        pcVar10 = &DAT_10014ae2;
      }
      recovered_100040ec(str_1000cb53,pcVar10,&uStack_2c0,(uint)DAT_10014ae0);
      bVar30 = 1;
    }
    uVar13 = 0;
    lVar20 = 4;
    do {
      uVar13 = uVar13 + *pbVar18;
      pbVar18 = pbVar18 + 0xdf8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    if (uVar13 == uStack_310) {
      if (0x752 < uVar8 - uStack_30c >> 5) {
        if (DAT_10014d18 == '\x01') goto LAB_10003e60;
        goto LAB_10003e8c;
      }
    }
    else {
LAB_10003e60:
      recovered_100040ec(str_1000cb85,uVar13,DAT_1001490c,DAT_100138fc,DAT_10013900);
      uStack_310 = uVar13;
LAB_10003e8c:
      uStack_30c = uVar8;
    }
    recovered_10005104();
    if (!bVar4) {
      recovered_10005138(1000);
    }
    goto LAB_100038e0;
  }
  recovered_10004058(str_1000cbc2);
  pcVar10 = &DAT_10010078;
  lVar20 = 4;
  do {
    if (*pcVar10 == '\x01') {
      recovered_1000517c(pcVar10,0xb,str_1000cbd0);
    }
    lVar20 = lVar20 + -1;
    pcVar10 = pcVar10 + 0xdf8;
  } while (lVar20 != 0);
  recovered_100040a8();
  uVar21 = extraout_x1;
  for (iVar7 = 0; iVar7 != 200; iVar7 = iVar7 + 1) {
    uVar11 = recovered_100040a8();
    recovered_10004118(0x10,(uint)uVar11);
    puVar28 = &DAT_10014d20;
    lVar20 = 0xc;
    do {
      recovered_10004f54(puVar28,uVar11);
      lVar20 = lVar20 + -1;
      puVar28 = puVar28 + 0x1e;
    } while (lVar20 != 0);
    recovered_10005138(2000);
    uVar21 = extraout_x1_00;
  }
  puVar28 = &DAT_10014d20;
  lVar20 = 0xc;
  do {
    if (*puVar28 != 0) {
      auVar33 = recovered_10005270(puVar28,uVar21);
      uVar21 = PF_PART8(auVar33, 8);
    }
    lVar20 = lVar20 + -1;
    puVar28 = puVar28 + 0x1e;
  } while (lVar20 != 0);
  puVar25 = &DAT_10010078;
  lVar20 = 4;
  do {
    recovered_100052b0(puVar25,uVar21);
    lVar20 = lVar20 + -1;
    puVar25 = puVar25 + 0xdf8;
    uVar21 = extraout_x1_01;
  } while (lVar20 != 0);
  recovered_10005318(&DAT_10014928,0x20);
  recovered_10005318(&DAT_100149e0,0x100);
  uVar21 = 0;
  goto LAB_100036d8;
  while( true ) {
    puVar12 = recovered_10006b90(0x4000);
    puVar22[-3] = puVar12;
    puVar12 = recovered_10006b90(0x8000);
    *puVar22 = puVar12;
    *(undefined4 *)(puVar22 + -8) = 0;
    if ((puVar22[-3] == 0) || (puVar22 = puVar22 + 0xf, puVar12 == (ulong *)0x0)) break;
LAB_10003810:
    lVar20 = lVar20 + -1;
    if (lVar20 == 0) {
      if (DAT_10014ba2 == 1) {
        DAT_1001385f = 0;
        recovered_10006bf0(uStack_30c);
      }
      else {
        DAT_100138d4 = 0;
        recovered_10006c44((ulong)DAT_10014ba4,(ulong)DAT_10014ba8,(ulong)DAT_10014bac);
      }
      uVar2 = DAT_10014ae0;
      iVar7 = recovered_100017ac(&DAT_10014b22,&DAT_1000cb44);
      pcVar10 = str_1000cb46;
      if (iVar7 != 0) {
        pcVar10 = &DAT_1000cb4f;
      }
      recovered_100040ec(str_1000cb11,(uint)uVar2,&DAT_10014ae2,pcVar10);
      uVar21 = DAT_1000c0c0;
      bVar30 = 0;
      uStack_310 = 0;
      goto LAB_100038e0;
    }
  }
LAB_100036d0:
  recovered_10004058(pcVar10);
  uVar21 = 1;
LAB_100036d8:
  recovered_10004074();
  return uVar21;
}

#undef DAT_1000c0b8
#undef DAT_1000c0c0
#undef DAT_1000c120
#undef DAT_1000c130
#undef DAT_1000ca82
#undef DAT_1000cb44
#undef DAT_1000cb4f
#undef DAT_1000cc43
#undef DAT_1000cc5a
#undef DAT_10010078
#undef DAT_1001007c
#undef DAT_10010080
#undef DAT_10010088
#undef DAT_100101b0
#undef DAT_100101c0
#undef DAT_10013858
#undef DAT_1001385f
#undef DAT_10013860
#undef DAT_100138d4
#undef DAT_100138e4
#undef DAT_100138e8
#undef DAT_100138ec
#undef DAT_100138f0
#undef DAT_100138f4
#undef DAT_100138f8
#undef DAT_100138fc
#undef DAT_10013900
#undef DAT_10014908
#undef DAT_1001490c
#undef DAT_10014910
#undef DAT_10014918
#undef DAT_1001491c
#undef DAT_10014920
#undef DAT_10014928
#undef DAT_10014968
#undef DAT_1001499c
#undef DAT_100149a0
#undef DAT_100149e0
#undef DAT_10014ae0
#undef DAT_10014ae2
#undef DAT_10014ae3
#undef DAT_10014b22
#undef DAT_10014ba2
#undef DAT_10014ba4
#undef DAT_10014ba8
#undef DAT_10014bac
#undef DAT_10014bb0
#undef DAT_10014cb0
#undef DAT_10014cba
#undef DAT_10014cf0
#undef DAT_10014d10
#undef DAT_10014d14
#undef DAT_10014d18
#undef DAT_10014d20
#undef DAT_10014d24
#undef DAT_10014d30
#undef DAT_10014d34
#undef DAT_10014d60
#undef DAT_10014d8c
#undef DAT_82010820
#undef DAT_82010894
#undef DAT_820108f8
#undef UNK_1000c128
#undef UNK_1000c138
#undef UNK_1001385e
#undef UNK_8201082c
#undef UNK_82010834
#undef UNK_82010838
#undef UNK_82010924
#undef UNK_820109fc
#undef _DAT_1000c120
#undef _DAT_1000c130
#undef _DAT_100138e8
#undef _DAT_82010820
#undef _DAT_82010894
#undef _DAT_820108f8
#undef str_1000c44e
#undef str_1000c6f4
#undef str_1000caa8
#undef str_1000cabc
#undef str_1000caea
#undef str_1000cb11
#undef str_1000cb46
#undef str_1000cb53
#undef str_1000cb7e
#undef str_1000cb85
#undef str_1000cbc2
#undef str_1000cbd0
#undef str_1000cbe8
#undef str_1000cbf8
#undef str_1000cc18
#undef str_1000cc48
#undef str_1000cc51
#undef str_1000cc5f
#undef str_1000cc67
#undef str_1000cc6f
#undef str_1000cc77
#undef str_1000cc7e
#undef str_1000cc87
#undef str_1000cc92
#undef str_1000cc9b
#undef str_1000cca8
#undef str_1000ccb0
#undef str_1000cce4
#undef str_1000cd1b
#undef str_1000cd5d
#undef str_1000cda6
#undef str_1000cdc7
#undef str_1000cde4
#undef str_1000cdff
#undef str_1000ce28
#undef str_1000ce4c
#undef str_1000ce7c
#undef str_1000ce99
#undef str_1000ceaa
#undef str_1000ceb4
#undef str_1000cef5
#undef str_1000cf1a
#undef str_1000cf38
#undef str_1000cf4d
#undef str_1000cf7b
#undef str_1000cfef
#undef str_1000d007
#undef str_1000d028
#undef str_1000d5ba
#undef str_1000d5c2
#undef uRam000000001000c128
#undef uRam000000001000c138
#undef uRam000000001001385e
#undef uRam000000008201082c
#undef uRam0000000082010834
#undef uRam0000000082010838
#undef uRam0000000082010924
#undef uRam00000000820109fc
#undef uStack_310
#undef uStack_30c
#undef uStack_2e4
#undef puStack_2d8
#undef uStack_2d0
#undef uStack_2c8
#undef cStack_2c1
#undef uStack_2c0
#undef uStack_2b8
#undef uStack_2b0
#undef uStack_2a8
#undef uStack_2a0
#undef acStack_280
#undef uStack_258
#undef acStack_240
#undef uStack_bc
#undef bStack_9d
#undef acStack_7d

#undef DAT_1000cbe5
#define DAT_1000cbe5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba1U)))
#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef _DAT_82010828
#define _DAT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004058
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004058(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10005374(param_1);
  bVar1 = recovered_1000532c(0x28);
  if ((bVar1) && (_DAT_82010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100053a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010828)(&DAT_1000cbe5);
    return;
  }
  return;
}

#undef DAT_1000cbe5
#undef DAT_82010828
#undef _DAT_82010828

#undef DAT_82010830
#define DAT_82010830 (*(uint8_t *)(0x82010830U))
#undef _DAT_82010830
#define _DAT_82010830 (*(uint *)(0x82010830U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004074
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004074(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_1000532c(0x30);
  if ((bVar1) && (_DAT_82010830 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000409c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010830)();
    return;
  }
  return;
}

#undef DAT_82010830
#undef _DAT_82010830

#undef DAT_10014910
#define DAT_10014910 (*(uint *)(((uintptr_t)pf_module_state + 0x88ccU)))
#undef DAT_10014918
#define DAT_10014918 (*(int *)(((uintptr_t)pf_module_state + 0x88d4U)))
#undef DAT_10014920
#define DAT_10014920 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a8
 */

ulong recovered_100040a8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  iVar2 = recovered_10005408();
  DAT_10014920 = DAT_10014920 + (ulong)(uint)(iVar2 - DAT_10014918);
  DAT_10014918 = iVar2;
  uVar1 = 0;
  if ((ulong)DAT_10014910 != 0) {
    uVar1 = (ulong)(DAT_10014920 * 1000) / (ulong)DAT_10014910;
  }
  return uVar1;
}

#undef DAT_10014910
#undef DAT_10014918
#undef DAT_10014920

/* Recovered variadic console formatting; Pooka's Free Software License. */
void recovered_100040ec(char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_100023c0(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_10004058(text);
}


#undef DAT_1000c0c8
#define DAT_1000c0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1000c6e8
#define DAT_1000c6e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a4U)))
#undef DAT_10013858
#define DAT_10013858 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_1001385f
#define DAT_1001385f (*(char *)(((uintptr_t)pf_module_state + 0x781bU)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013864
#define DAT_10013864 (*(uint *)(((uintptr_t)pf_module_state + 0x7820U)))
#undef DAT_10013868
#define DAT_10013868 (*(uint *)(((uintptr_t)pf_module_state + 0x7824U)))
#undef DAT_100138d4
#define DAT_100138d4 (*(int *)(((uintptr_t)pf_module_state + 0x7890U)))
#undef DAT_100138d8
#define DAT_100138d8 (*(uint *)(((uintptr_t)pf_module_state + 0x7894U)))
#undef DAT_100138dc
#define DAT_100138dc (*(uint *)(((uintptr_t)pf_module_state + 0x7898U)))
#undef DAT_100138e0
#define DAT_100138e0 (*(uint *)(((uintptr_t)pf_module_state + 0x789cU)))
#undef DAT_100138e4
#define DAT_100138e4 (*(uint *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_100138e8
#define DAT_100138e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a4U)))
#undef DAT_100138f0
#define DAT_100138f0 (*(uint *)(((uintptr_t)pf_module_state + 0x78acU)))
#undef DAT_100138f4
#define DAT_100138f4 (*(uint *)(((uintptr_t)pf_module_state + 0x78b0U)))
#undef DAT_100138f8
#define DAT_100138f8 (*(int *)(((uintptr_t)pf_module_state + 0x78b4U)))
#undef DAT_100138fc
#define DAT_100138fc (*(int *)(((uintptr_t)pf_module_state + 0x78b8U)))
#undef DAT_10013904
#define DAT_10013904 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78c0U)))
#undef DAT_1001390a
#define DAT_1001390a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78c6U)))
#undef DAT_10013910
#define DAT_10013910 (*(ushort *)(((uintptr_t)pf_module_state + 0x78ccU)))
#undef DAT_10013912
#define DAT_10013912 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x78ceU)))
#undef DAT_10013914
#define DAT_10013914 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x78d0U)))
#undef DAT_10013916
#define DAT_10013916 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78d2U)))
#undef DAT_10013917
#define DAT_10013917 (*(char *)(((uintptr_t)pf_module_state + 0x78d3U)))
#undef DAT_10013918
#define DAT_10013918 (*(ushort *)(((uintptr_t)pf_module_state + 0x78d4U)))
#undef DAT_1001391a
#define DAT_1001391a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78d6U)))
#undef DAT_1001391b
#define DAT_1001391b (*(char *)(((uintptr_t)pf_module_state + 0x78d7U)))
#undef DAT_1001391e
#define DAT_1001391e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78daU)))
#undef DAT_10013920
#define DAT_10013920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78dcU)))
#undef DAT_10013922
#define DAT_10013922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78deU)))
#undef DAT_1001392a
#define DAT_1001392a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78e6U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_10014ae0
#define DAT_10014ae0 (*(ushort *)(((uintptr_t)pf_module_state + 0x8a9cU)))
#undef DAT_100152d8
#define DAT_100152d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9294U)))
#undef DAT_100152dc
#define DAT_100152dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9298U)))
#undef DAT_100152e0
#define DAT_100152e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x929cU)))
#undef DAT_100152e8
#define DAT_100152e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92a4U)))
#undef DAT_100152f0
#define DAT_100152f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92acU)))
#undef DAT_100152f4
#define DAT_100152f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92b0U)))
#undef DAT_10015308
#define DAT_10015308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92c4U)))
#undef DAT_1001530c
#define DAT_1001530c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92c8U)))
#undef DAT_10015310
#define DAT_10015310 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92ccU)))
#undef DAT_10015314
#define DAT_10015314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92d0U)))
#undef DAT_10015316
#define DAT_10015316 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92d2U)))
#undef DAT_10015318
#define DAT_10015318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92d4U)))
#undef DAT_10015319
#define DAT_10015319 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92d5U)))
#undef DAT_1001531a
#define DAT_1001531a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92d6U)))
#undef DAT_1001531c
#define DAT_1001531c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92d8U)))
#undef DAT_10015320
#define DAT_10015320 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92dcU)))
#undef DAT_10015324
#define DAT_10015324 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92e0U)))
#undef DAT_10015328
#define DAT_10015328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92e4U)))
#undef DAT_1001532c
#define DAT_1001532c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x92e8U)))
#undef DAT_82010928
#define DAT_82010928 (*(uint8_t *)(0x82010928U))
#undef _DAT_100138e8
#define _DAT_100138e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a4U)))
#undef _DAT_82010928
#define _DAT_82010928 (*(uint *)(0x82010928U))
#undef str_1000cfcb
#define str_1000cfcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf87U)))
#define local_7c (*(uint *)(pf_stack_frame + 36))
#define uStack_90 (*(uint *)(pf_stack_frame + 16))
#define auStack_76 (*(undefined1 (*)[118])(pf_stack_frame + 42))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004118
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10004118(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ulong uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 extraout_x1 = 0;
  ulong uVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  char cVar31;

  uVar13 = DAT_1000c0c8;
  uVar29 = 0;
  do {
    if ((int)uVar29 == (int)param_1) {
      return param_1;
    }
    local_7c = 0;
    bVar14 = recovered_1000532c(0x128);
    if (!bVar14) {
      return uVar29;
    }
    if (_DAT_82010928 == 0) {
      return uVar29;
    }
    iVar15 = (*(code *)(ulong)_DAT_82010928)(&DAT_10013904,0x800,&local_7c);
    if (iVar15 == 0 || local_7c < 0xe) {
      return uVar29;
    }
    DAT_100138fc = DAT_100138fc + 1;
    uVar16 = recovered_10005408();
    recovered_100053e4(CONCAT44(uVar16,local_7c));
    iVar15 = recovered_1000155c(&DAT_10013904,&DAT_10013858,6);
    if ((iVar15 == 0) || (iVar15 = recovered_1000155c(&DAT_10013904,&DAT_1000c6e8,6), iVar15 == 0))
    {
      uVar11 = DAT_10013918;
      uVar10 = DAT_10013910 >> 8 | DAT_10013910 << 8;
      if (uVar10 == 0x800) {
        if (0x21 < local_7c) {
          if (((byte)DAT_10013912 & 0xf0) == 0x40) {
            uVar12 = (ulong)(byte)DAT_10013912 & 0xf;
            lVar30 = uVar12 * 4;
            uVar17 = (uint)(DAT_10013914 >> 8) | (DAT_10013914 & 0xff00ff) << 8;
            uVar18 = (uint)lVar30;
            if ((((0x13 < uVar18 && uVar18 <= uVar17) && uVar17 + 0xe <= local_7c) &&
                (uVar19 = recovered_1000719c(((uintptr_t)pf_module_state + 0x78ceU),uVar18), uVar19 == 0)) &&
               (PF_PART1(DAT_10013918, 1) == '\0' && (DAT_10013918 & 0x3f) == 0)) {
              uVar19 = recovered_10005760((uint *)&DAT_10013922);
              if (DAT_1001391b == '\x11') {
                if (7 < uVar17 - uVar18) {
                  uVar19 = (uint)(*(ushort *)(&DAT_10013916 + lVar30) >> 8) |
                           (*(ushort *)(&DAT_10013916 + lVar30) & 0xff00ff) << 8;
                  if (((((7 < uVar19 && uVar19 <= uVar17 - uVar18) &&
                        ((ushort)((&DAT_10013914)[uVar12 * 2] >> 8 |
                                 (&DAT_10013914)[uVar12 * 2] << 8) == 0x44)) &&
                       ((DAT_100138d4 != 0 && ((DAT_100138d4 != 3 && (0xf3 < uVar19 - 8)))))) &&
                      ((&DAT_1001391a)[lVar30] == '\x02')) &&
                     (((uVar17 = recovered_10005760((uint *)(&DAT_1001391e + lVar30)),
                       uVar17 == DAT_100138d8 &&
                       (iVar15 = recovered_1000155c((byte *)(lVar30 + ((uintptr_t)pf_module_state + 0x78f2U)),&DAT_10013858,6),
                       iVar15 == 0)) &&
                      (uVar17 = recovered_10005760((uint *)(lVar30 + ((uintptr_t)pf_module_state + 0x79c2U))),
                      uVar17 == 0x63825363)))) {
                    uVar20 = recovered_10005760((uint *)(&DAT_1001392a + lVar30));
                    uVar23 = 0;
                    uStack_90 = 0;
                    uVar18 = 0;
                    uVar22 = 0;
                    cVar31 = '\0';
                    uVar17 = 0;
                    lVar2 = lVar30 + ((uintptr_t)pf_module_state + 0x79c6U);
                    uVar19 = uVar19 - 0xf8;
                    while (uVar17 < uVar19) {
                      pcVar1 = (char *)(lVar2 + (ulong)uVar17);
                      cVar8 = *pcVar1;
                      if (cVar8 == '\0') {
                        uVar17 = uVar17 + 1;
                      }
                      else {
                        lVar3 = (ulong)uVar17 + 1;
                        if (cVar8 == -1 || uVar19 <= (uint)lVar3) break;
                        bVar9 = *(byte *)(lVar2 + lVar3);
                        lVar3 = (ulong)uVar17 + 2;
                        uVar17 = (int)lVar3 + (uint)bVar9;
                        if (uVar19 < uVar17) break;
                        if (cVar8 == '6') {
                          if (bVar9 == 4) {
                            uVar23 = recovered_10005760((uint *)(pcVar1 + 2));
                          }
                        }
                        else if (cVar8 == '\x03') {
                          if (3 < bVar9) {
                            uVar18 = recovered_10005760((uint *)(pcVar1 + 2));
                          }
                        }
                        else if (cVar8 == '3') {
                          if (bVar9 == 4) {
                            uVar22 = recovered_10005760((uint *)(pcVar1 + 2));
                          }
                        }
                        else if (cVar8 == '5') {
                          if (bVar9 == 1) {
                            cVar31 = *(char *)(lVar2 + lVar3);
                          }
                        }
                        else if (cVar8 == '\x01' && bVar9 == 4) {
                          uStack_90 = recovered_10005760((uint *)(pcVar1 + 2));
                        }
                      }
                    }
                    recovered_10005438(&DAT_1001391a + lVar30,(ulong)uVar19);
                    if ((DAT_100138d4 == 1 && cVar31 == '\x02') && uVar20 != 0) {
                      DAT_100138d4 = 2;
                      _DAT_100138e8 = uVar13;
                      DAT_100138dc = uVar23;
                      DAT_100138e0 = uVar20;
                      DAT_100138e4 = param_2;
                      recovered_10006d08(3,0);
                    }
                    else if (((DAT_100138d4 == 4 || DAT_100138d4 == 2) && cVar31 == '\x05') &&
                             uVar20 != 0) {
                      DAT_100138f0 = 0xf9fffc18;
                      if (0xffc00000 < uVar22 - 0x400000) {
                        DAT_100138f0 = uVar22 * 1000;
                      }
                      DAT_100138f8 = param_2 + (DAT_100138f0 >> 1);
                      if (uVar23 != 0) {
                        DAT_100138dc = uVar23;
                      }
                      uVar17 = 0xffffff00;
                      if (uStack_90 != 0) {
                        uVar17 = uStack_90;
                      }
                      DAT_100138d4 = 3;
                      DAT_100138f4 = param_2;
                      if (((DAT_1001385f != '\x01' || DAT_10013860 != uVar20) ||
                          DAT_10013864 != uVar17) || DAT_10013868 != uVar18) {
                        recovered_10006c44((ulong)uVar20,(ulong)uVar17,(ulong)uVar18);
                      }
                    }
                    else if (cVar31 == '\x06') {
                      recovered_10004058(str_1000cfcb);
                      if (DAT_100138d4 == 4) {
                        DAT_1001385f = '\0';
                      }
                      recovered_10006bf0(param_2);
                    }
                  }
                }
              }
              else if (DAT_1001385f == '\x01' && uVar19 == DAT_10013860) {
                if (DAT_1001391b == '\x01') {
                  uVar17 = uVar17 - uVar18;
                  if (((7 < uVar17) && (*(char *)(&DAT_10013912 + uVar12 * 2) == '\b')) &&
                     ((*(char *)((long)&DAT_10013912 + lVar30 + 1) == '\0' &&
                      ((uVar17 + 0x22 < 0x801 &&
                       (uVar18 = recovered_1000719c((long)(&DAT_10013912 + uVar12 * 2),uVar17),
                       uVar18 == 0)))))) {
                    recovered_10006f78(&DAT_1001390a,0x800);
                    uVar18 = DAT_10013860;
                    uVar19 = recovered_10005760((uint *)&DAT_1001391e);
                    recovered_10006fb8((ulong)(uVar17 + 0x14 & 0xffff),1,(ulong)uVar18,(ulong)uVar19
                                      );
                    recovered_100012ac(&DAT_10014126,(undefined1 *)(&DAT_10013912 + uVar12 * 2),
                                       (ulong)uVar17);
                    DAT_10014126 = 0;
                    DAT_10014128 = 0;
                    uVar18 = recovered_1000719c(((uintptr_t)pf_module_state + 0x80e2U),uVar17);
                    DAT_10014128 = (ushort)(uVar18 >> 8) & 0xff | (ushort)((uVar18 & 0xff00ff) << 8)
                    ;
                    recovered_1000710c((ulong)(uVar17 + 0x22));
                  }
                }
                else if (DAT_1001391b == '\x06') {
                  uVar17 = uVar17 - uVar18;
                  uVar18 = recovered_10005760((uint *)&DAT_1001391e);
                  if (0x13 < uVar17) {
                    puVar4 = &DAT_10013912 + uVar12 * 2;
                    uVar24 = (ulong)((byte)(&DAT_1001391e)[lVar30] >> 2) & 0x3c;
                    uVar22 = (uint)uVar24;
                    if ((0x4f < (byte)(&DAT_1001391e)[lVar30] && uVar22 <= uVar17) &&
                       (uVar19 = recovered_1000707c((ulong)uVar18,(ulong)uVar19,6,(long)puVar4,
                                                    uVar17 & 0xffff), uVar19 == 0)) {
                      uVar10 = *puVar4;
                      uVar11 = (&DAT_10013914)[uVar12 * 2] >> 8 | (&DAT_10013914)[uVar12 * 2] << 8;
                      uVar23 = recovered_10005760((uint *)(&DAT_10013916 + lVar30));
                      uVar21 = recovered_10005760((uint *)(&DAT_1001391a + lVar30));
                      bVar9 = *(byte *)(lVar30 + ((uintptr_t)pf_module_state + 0x78dbU));
                      uVar19 = (uint)(*(ushort *)(&DAT_10013920 + lVar30) >> 8) |
                               (*(ushort *)(&DAT_10013920 + lVar30) & 0xff00ff) << 8;
                      uVar20 = uVar17 - uVar22;
                      lVar30 = -0x5a0;
                      do {
                        if ((((*(int *)(lVar30 + ((uintptr_t)pf_module_state + 0x927cU)) != 0) &&
                             (*(uint *)(lVar30 + ((uintptr_t)pf_module_state + 0x928cU)) == uVar18)) &&
                            (*(ushort *)(lVar30 + ((uintptr_t)pf_module_state + 0x9290U)) == (ushort)(uVar10 >> 8 | uVar10 << 8)
                            )) && (*(ushort *)(lVar30 + ((uintptr_t)pf_module_state + 0x9292U)) == uVar11)) {
                          puVar5 = (uint *)(lVar30 + ((uintptr_t)pf_module_state + 0x927cU));
                          if ((*(int *)(lVar30 + ((uintptr_t)pf_module_state + 0x927cU)) == 8 && (bVar9 & 0x16) == 2) &&
                             ((int)(*(int *)(&DAT_100152d8 + lVar30) - uVar23) < 0)) {
                            *puVar5 = 0;
                            *(undefined4 *)(&DAT_100152f4 + lVar30) = 0;
                            *(undefined4 *)(&DAT_1001530c + lVar30) = 0;
                            (&DAT_10015324)[lVar30] = 0;
                            bVar14 = true;
                            goto LAB_100046ac;
                          }
                          *(uint *)(lVar30 + ((uintptr_t)pf_module_state + 0x92ecU)) = param_2;
                          recovered_100053e4(CONCAT44(uVar23,param_2));
                          if ((bVar9 >> 2 & 1) != 0) {
                            if (((int)(*(int *)(&DAT_100152d8 + lVar30) - uVar23) < 1) &&
                               ((int)((uVar23 - *(int *)(&DAT_100152d8 + lVar30)) + -0x4001) < 0)) {
                              *(bool *)(lVar30 + ((uintptr_t)pf_module_state + 0x92d7U)) = *puVar5 != 1 && *puVar5 != 8;
                              *puVar5 = 0;
                              *(undefined4 *)(&DAT_100152f4 + lVar30) = 0;
                              *(undefined4 *)(&DAT_1001530c + lVar30) = 0;
                              (&DAT_10015324)[lVar30] = 0;
                            }
                            goto switchD_10004be0_caseD_0;
                          }
                          uVar18 = *puVar5;
                          if (uVar18 == 8) {
                            (&DAT_1001531a)[lVar30] = 1;
                            uVar17 = *(int *)(&DAT_10015310 + lVar30) +
                                     *(int *)(&DAT_100152dc + lVar30) +
                                     (uint)(byte)(&DAT_10015314)[lVar30] +
                                     (uint)(byte)(&DAT_10015316)[lVar30];
                            uVar18 = 0x10;
LAB_10004cf4:
                            recovered_100076b0((long)puVar5,uVar18,(ulong)uVar17,0,0);
                            goto switchD_10004be0_caseD_0;
                          }
                          if (uVar18 == 1) {
                            if ((bVar9 >> 1 & 1) != 0) {
                              if (((bVar9 >> 4 & 1) != 0) ||
                                 (uVar23 + 1 == *(int *)(&DAT_100152d8 + lVar30))) {
                                uVar17 = *(uint *)(&DAT_100152dc + lVar30);
                                uVar18 = 0x12;
                                goto LAB_10004cf4;
                              }
                              *puVar5 = 0;
                              *(undefined4 *)(&DAT_100152f4 + lVar30) = 0;
                              *(undefined4 *)(&DAT_1001530c + lVar30) = 0;
                              (&DAT_10015324)[lVar30] = 0;
                              recovered_10007344(puVar4,uVar22,param_2);
                              goto switchD_10004be0_caseD_0;
                            }
                            if (((bVar9 >> 4 & 1) == 0) ||
                               (uVar21 != *(int *)(&DAT_100152dc + lVar30) + 1U))
                            goto switchD_10004be0_caseD_0;
                            uVar27 = 0;
                            (&DAT_10015314)[lVar30] = 0;
                            *(uint *)(&DAT_100152dc + lVar30) = uVar21;
                            *(uint *)(&DAT_100152e0 + lVar30) = uVar19;
                            (&DAT_10015324)[lVar30] = 0;
                            *(undefined4 *)(&DAT_10015328 + lVar30) = 0;
                            *(undefined4 *)(&DAT_1001531c + lVar30) = 400;
                            uVar18 = 2;
                            *puVar5 = 2;
                            *(uint *)(&DAT_1001532c + lVar30) = param_2;
                            uVar28 = uVar21;
                          }
                          else {
                            if ((bVar9 >> 1 & 1) != 0) {
                              recovered_10005270(puVar5,extraout_x1);
                              goto switchD_10004be0_caseD_0;
                            }
                            if ((bVar9 >> 4 & 1) == 0) goto switchD_10004be0_caseD_0;
                            uVar28 = *(uint *)(&DAT_100152dc + lVar30);
                            uVar27 = (uint)(byte)(&DAT_10015314)[lVar30];
                          }
                          uVar7 = *(uint *)(&DAT_10015310 + lVar30);
                          bVar25 = (&DAT_10015316)[lVar30];
                          uVar6 = uVar7 + uVar28 + uVar27 + bVar25;
                          if ((int)(uVar6 - uVar21) < 0) {
                            (&DAT_1001531a)[lVar30] = 1;
LAB_10004d20:
                            if (uVar18 == 0) goto switchD_10004be0_caseD_0;
                          }
                          else {
                            if ((int)(uVar28 - uVar21) < 0) {
                              uVar28 = uVar21 - uVar28;
                              if ((uVar27 & 1) != 0) {
                                (&DAT_10015314)[lVar30] = 0;
                                uVar28 = uVar28 - 1;
                              }
                              if (uVar7 < uVar28) {
                                if ((uVar6 == uVar21) && (bVar25 != 0)) {
                                  bVar25 = 0;
                                  (&DAT_10015316)[lVar30] = 0;
                                  (&DAT_10015318)[lVar30] = 1;
                                }
                                uVar28 = uVar7;
                              }
                              *(uint *)(&DAT_10015308 + lVar30) =
                                   *(int *)(&DAT_10015308 + lVar30) + uVar28 & 0x7fff;
                              *(uint *)(&DAT_1001530c + lVar30) =
                                   *(int *)(&DAT_1001530c + lVar30) - uVar28;
                              *(uint *)(&DAT_100152dc + lVar30) = uVar21;
                              *(undefined4 *)(&DAT_10015328 + lVar30) = 0;
                              *(undefined4 *)(&DAT_1001531c + lVar30) = 400;
                              *(uint *)(&DAT_10015310 + lVar30) = uVar7 - uVar28;
                              if ((uVar7 - uVar28 != 0) || (uVar26 = 0, bVar25 != 0)) {
                                *(uint *)(&DAT_10015320 + lVar30) = param_2 + 400;
                                uVar26 = 1;
                              }
                              (&DAT_10015324)[lVar30] = uVar26;
                              *(uint *)(lVar30 + ((uintptr_t)pf_module_state + 0x92ecU)) = param_2;
                            }
                            *(uint *)(&DAT_100152e0 + lVar30) = uVar19;
                            if ((&DAT_10015318)[lVar30] != '\x01') goto LAB_10004d20;
                            uVar19 = 8;
                            switch((uintptr_t)(uVar18)) {
                            case 0:
                              goto switchD_10004be0_caseD_0;
                            default:
                              break;
                            case 4:
                              *puVar5 = 0;
                              *(undefined4 *)(&DAT_100152f4 + lVar30) = 0;
                              *(undefined4 *)(&DAT_1001530c + lVar30) = 0;
                              (&DAT_10015324)[lVar30] = 0;
                              goto switchD_10004be0_caseD_0;
                            case 5:
                              uVar19 = 8;
                              if ((&DAT_10015319)[lVar30] == '\0') {
                                uVar19 = 6;
                              }
                            case 7:
                              *puVar5 = uVar19;
                              *(uint *)(&DAT_1001532c + lVar30) = param_2;
                            }
                          }
                          iVar15 = *(int *)(&DAT_100152d8 + lVar30);
                          uVar23 = iVar15 - uVar23;
                          if ((int)uVar23 < 0) {
LAB_10004db0:
                            if ((uVar17 != uVar22) || ((bVar9 & 1) != 0)) {
                              (&DAT_1001531a)[lVar30] = 1;
                            }
                          }
                          else {
                            uVar18 = uVar20 - uVar23;
                            if (uVar20 < uVar23) goto LAB_10004db0;
                            if (uVar18 == 0) {
                              if ((bVar9 & 1) != 0) goto LAB_10004e8c;
                            }
                            else {
                              uVar19 = 0x4000 - *(int *)(&DAT_100152f4 + lVar30);
                              uVar17 = uVar18;
                              if (uVar19 <= uVar18) {
                                uVar17 = uVar19;
                              }
                              if ((uVar17 != 0) && (((&DAT_10015319)[lVar30] & 1) == 0)) {
                                recovered_10007858(*(undefined1 **)(&DAT_100152e8 + lVar30),0x4000,
                                                   *(int *)(&DAT_100152f0 + lVar30) +
                                                   *(int *)(&DAT_100152f4 + lVar30) & 0x3fff,
                                                   (undefined1 *)((long)puVar4 + uVar23 + uVar24),
                                                   uVar17);
                                *(uint *)(&DAT_100152f4 + lVar30) =
                                     *(int *)(&DAT_100152f4 + lVar30) + uVar17;
                                iVar15 = *(int *)(&DAT_100152d8 + lVar30) + uVar17;
                                *(int *)(&DAT_100152d8 + lVar30) = iVar15;
                              }
                              (&DAT_1001531a)[lVar30] = 1;
                              if (((bVar9 & 1) != 0) && (uVar18 <= uVar19)) {
LAB_10004e8c:
                                if (((&DAT_10015319)[lVar30] & 1) == 0) {
                                  *(int *)(&DAT_100152d8 + lVar30) = iVar15 + 1;
                                  (&DAT_10015319)[lVar30] = 1;
                                  (&DAT_1001531a)[lVar30] = 1;
                                  uVar17 = *puVar5;
                                  if (uVar17 == 6) {
                                    uVar17 = 8;
LAB_10004ee0:
                                    *puVar5 = uVar17;
                                  }
                                  else {
                                    if (uVar17 != 5) {
                                      if (uVar17 != 2) goto LAB_10004ddc;
                                      uVar17 = 3;
                                      goto LAB_10004ee0;
                                    }
                                    uVar17 = 7;
                                    if ((&DAT_10015318)[lVar30] != '\0') {
                                      uVar17 = 8;
                                    }
                                    *puVar5 = uVar17;
                                  }
                                  *(uint *)(&DAT_1001532c + lVar30) = param_2;
                                }
                              }
                            }
                          }
LAB_10004ddc:
                          recovered_100078b8(puVar5,(ulong)param_2);
                          goto switchD_10004be0_caseD_0;
                        }
                        lVar30 = lVar30 + 0x78;
                      } while (lVar30 != 0);
                      bVar14 = (bVar9 & 0x16) == 2;
LAB_100046ac:
                      if (bVar14 && uVar11 == DAT_10014ae0) {
                        recovered_10007344(puVar4,uVar22,param_2);
                      }
                      else {
                        recovered_10007574(puVar4,uVar20);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ((((uVar10 == 0x806) && (0x29 < local_7c)) &&
               ((ushort)(DAT_10013912 >> 8 | DAT_10013912 << 8) == 1)) &&
              (((ushort)(DAT_10013914 >> 8 | DAT_10013914 << 8) == 0x800 && DAT_10013916 == '\x06')
               && DAT_10013917 == '\x04')) {
        uVar17 = recovered_10005760((uint *)&DAT_10013920);
        uVar18 = recovered_10005760((uint *)&DAT_1001392a);
        if (uVar17 != 0) {
          recovered_100072ac(uVar17,&DAT_1001391a);
        }
        if (((ushort)(uVar11 >> 8 | uVar11 << 8) == 1) &&
           (DAT_1001385f == '\x01' && uVar18 == DAT_10013860)) {
          recovered_100012ac(auStack_76,&DAT_1001391a,6);
          recovered_10007214(2,auStack_76,uVar17,auStack_76);
        }
      }
    }
switchD_10004be0_caseD_0:
    uVar29 = (ulong)((int)uVar29 + 1);
  } while( true );
}

#undef DAT_1000c0c8
#undef DAT_1000c6e8
#undef DAT_10013858
#undef DAT_1001385f
#undef DAT_10013860
#undef DAT_10013864
#undef DAT_10013868
#undef DAT_100138d4
#undef DAT_100138d8
#undef DAT_100138dc
#undef DAT_100138e0
#undef DAT_100138e4
#undef DAT_100138e8
#undef DAT_100138f0
#undef DAT_100138f4
#undef DAT_100138f8
#undef DAT_100138fc
#undef DAT_10013904
#undef DAT_1001390a
#undef DAT_10013910
#undef DAT_10013912
#undef DAT_10013914
#undef DAT_10013916
#undef DAT_10013917
#undef DAT_10013918
#undef DAT_1001391a
#undef DAT_1001391b
#undef DAT_1001391e
#undef DAT_10013920
#undef DAT_10013922
#undef DAT_1001392a
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_10014ae0
#undef DAT_100152d8
#undef DAT_100152dc
#undef DAT_100152e0
#undef DAT_100152e8
#undef DAT_100152f0
#undef DAT_100152f4
#undef DAT_10015308
#undef DAT_1001530c
#undef DAT_10015310
#undef DAT_10015314
#undef DAT_10015316
#undef DAT_10015318
#undef DAT_10015319
#undef DAT_1001531a
#undef DAT_1001531c
#undef DAT_10015320
#undef DAT_10015324
#undef DAT_10015328
#undef DAT_1001532c
#undef DAT_82010928
#undef _DAT_100138e8
#undef _DAT_82010928
#undef str_1000cfcb
#undef local_7c
#undef uStack_90
#undef auStack_76

#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014134
#define UNK_10014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef UNK_10014135
#define UNK_10014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014134
#define uRam0000000010014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef uRam0000000010014135
#define uRam0000000010014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f54
 */

/* WARNING: Removing unreachable block (ram,0x100077dc) */
/* WARNING: Removing unreachable block (ram,0x100076d8) */
/* WARNING: Removing unreachable block (ram,0x100077f4) */
/* WARNING: Removing unreachable block (ram,0x100076ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint128 recovered_10004f54(uint *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint128 auVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong extraout_x1;
  uint uVar7;
  uint uVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;

  PF_PART8(auVar11, 8) = param_2;
  PF_PART8(auVar11, 0) = param_1;
  PF_PART8(auVar9, 8) = param_2;
  PF_PART8(auVar9, 0) = param_1;
  uVar8 = *param_1;
  if (uVar8 == 0) {
    return auVar11;
  }
  uVar5 = (uint)param_2;
  if (uVar8 == 1) {
    if (0x752 < uVar5 - param_1[0x1b] >> 4) goto LAB_1000527c;
  }
  else {
    if (uVar8 == 8) {
      if (uVar5 - param_1[0x1b] < 1000) {
        return auVar11;
      }
      *param_1 = 0;
      param_1[0xd] = 0;
      param_1[0x13] = 0;
      goto LAB_10004f94;
    }
    if (((uVar8 & 0xfffffffc) == 4) && (0x270 < uVar5 - param_1[0x1b] >> 3)) goto LAB_1000527c;
  }
  if (((char)param_1[0x19] != '\x01') || (auVar9 = auVar11, (int)(uVar5 - param_1[0x18]) < 0))
  goto LAB_1000507c;
  if (7 < param_1[0x1a]) {
LAB_1000527c:
    if ((*param_1 | 8) != 8) {
      auVar11 = recovered_100076b0((long)param_1,0x14,
                                   (ulong)(param_1[0x14] + param_1[7] +
                                          (uint)(byte)param_1[0x15] +
                                          (uint)*(byte *)((long)param_1 + 0x56)),0,0);
    }
    *(undefined1 *)((long)param_1 + 0x5b) = 1;
    *param_1 = 0;
    param_1[0xd] = 0;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    return auVar11;
  }
  param_1[0x1a] = param_1[0x1a] + 1;
  if (uVar8 == 1) {
    uVar2 = param_1[7];
    uVar6 = 0x12;
LAB_10005024:
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = param_1[0x14];
    if (uVar8 == 0) {
      if (*(char *)((long)param_1 + 0x56) != '\x01') {
LAB_10004f94:
        *(undefined1 *)(param_1 + 0x19) = 0;
        return auVar11;
      }
      uVar2 = param_1[7];
      uVar6 = 0x11;
      goto LAB_10005024;
    }
    if (param_1[9] <= uVar8) {
      uVar8 = param_1[9];
    }
    uVar2 = param_1[7];
    uVar7 = param_1[0x12];
    uVar6 = 0x18;
  }
  auVar9 = recovered_100076b0((long)param_1,uVar6,(ulong)uVar2,uVar7,uVar8);
  uVar8 = param_1[0x17] << 1;
  if (7999 < uVar8) {
    uVar8 = 8000;
  }
  param_1[0x17] = uVar8;
  param_1[0x18] = uVar8 + uVar5;
  *(undefined1 *)(param_1 + 0x19) = 1;
LAB_1000507c:
  if (*(char *)((long)param_1 + 0x5a) != '\x01') {
    return auVar9;
  }
  uVar8 = *param_1;
  if (uVar8 < 9 && (1 << (ulong)(uVar8 & 0x1f) & 0x103U) != 0) {
    if ((uVar8 == 1) && ((*(byte *)((long)param_1 + 0x5a) & 1) != 0)) {
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x57) & 1) == 0) {
      bVar4 = false;
      uVar8 = param_1[0x14];
      while( true ) {
        uVar2 = 0;
        if (uVar8 <= param_1[8]) {
          uVar2 = param_1[8] - uVar8;
        }
        uVar6 = 0;
        if (uVar8 < 0x2da1) {
          uVar6 = 0x2da0 - uVar8;
        }
        if (uVar2 <= 0x2da0 - uVar8) {
          uVar6 = uVar2;
        }
        uVar2 = param_1[0x13] - uVar8;
        if (uVar6 <= param_1[0x13] - uVar8) {
          uVar2 = uVar6;
        }
        if (param_1[9] <= uVar2) {
          uVar2 = param_1[9];
        }
        if ((uVar2 == 0) ||
           (auVar11 = recovered_100076b0((long)param_1,0x18,(ulong)(param_1[7] + uVar8),
                                         param_1[0x12] + uVar8 & 0x7fff,uVar2), PF_PART4(auVar11, 0) == 0))
        break;
        uVar8 = param_1[0x14] + uVar2;
        param_1[0x14] = uVar8;
        bVar4 = true;
        if ((param_1[0x19] & 1) == 0) {
          param_1[0x18] = param_1[0x17] + uVar5;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
      }
      if ((*(char *)((long)param_1 + 0x55) == '\x01') && (param_1[0x13] == param_1[0x14])) {
        *(undefined2 *)((long)param_1 + 0x56) = 0x101;
        auVar9 = recovered_100076b0((long)param_1,0x11,(ulong)(param_1[7] + param_1[0x13]),0,0);
        if ((param_1[0x19] & 1) == 0) {
          param_1[0x18] = param_1[0x17] + uVar5;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
        if (*param_1 == 3) {
          uVar8 = 4;
        }
        else {
          if (*param_1 != 2) {
            return auVar9;
          }
          uVar8 = 5;
        }
        *param_1 = uVar8;
        param_1[0x1b] = uVar5;
        return auVar9;
      }
    }
    else {
      bVar4 = false;
    }
    if ((!bVar4) && ((*(byte *)((long)param_1 + 0x5a) & 1) != 0)) {
      iVar1 = param_1[0x14] + param_1[7] +
              (uint)(byte)param_1[0x15] + (uint)*(byte *)((long)param_1 + 0x56);
      uVar8 = 0x4000 - param_1[0xd];
      if (0xfffe < uVar8) {
        uVar8 = 0xffff;
      }
      recovered_10006f78((undefined1 *)(param_1 + 2),0x800);
      recovered_10006fb8(0x28,6,(ulong)DAT_10013860,(ulong)param_1[4]);
      recovered_10001498((ulong *)&DAT_10014126,0,0x14);
      _DAT_10014126 =
           *(ushort *)((long)param_1 + 0x16) >> 8 | *(ushort *)((long)param_1 + 0x16) << 8;
      PF_PART1(DAT_10014128, 0) = (undefined1)(param_1[5] >> 8);
      PF_PART1(DAT_10014128, 1) = (undefined1)param_1[5];
      uRam000000001001412a = (undefined1)((uint)iVar1 >> 0x18);
      uRam000000001001412b = (undefined1)((uint)iVar1 >> 0x10);
      uRam000000001001412c = (undefined1)((uint)iVar1 >> 8);
      uRam000000001001412d = (undefined1)iVar1;
      uVar5 = param_1[6];
      uRam000000001001412e = (undefined1)(uVar5 >> 0x18);
      uRam000000001001412f = (undefined1)(uVar5 >> 0x10);
      uRam0000000010014130 = (undefined1)(uVar5 >> 8);
      uRam0000000010014131 = (undefined1)uVar5;
      uRam0000000010014132 = 0x50;
      uRam0000000010014133 = 0x10;
      uRam0000000010014134 = (undefined1)(uVar8 >> 8);
      uRam0000000010014135 = (undefined1)uVar8;
      uVar5 = recovered_1000707c((ulong)DAT_10013860,(ulong)param_1[4],6,((uintptr_t)pf_module_state + 0x80e2U),0x14);
      uRam0000000010014136 = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
      param_1[0xe] = uVar8;
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
      recovered_10001498((ulong *)&DAT_1001413a,0,6);
      bVar4 = recovered_1000532c(300);
      PF_PART7(auVar10, 1) = 0;
      ((uint8_t *)(void *)&auVar10)[0] = bVar4;
      PF_PART8(auVar10, 8) = extraout_x1;
      if (bVar4) {
        if (_DAT_8201092c == 0) {
          PF_PART8(auVar3, 8) = 0;
          PF_PART8(auVar3, 0) = extraout_x1;
          auVar10 = auVar3 << 0x40;
        }
        else {
          auVar10 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c);
          if (PF_PART4(auVar10, 0) != 0) {
            DAT_10013900 = DAT_10013900 + 1;
            PF_PART8(auVar10, 8) = PF_PART8(auVar10, 8);
            PF_PART8(auVar10, 0) = 1;
          }
        }
      }
      return auVar10;
    }
  }
  return auVar11;
}

#undef DAT_10013860
#undef DAT_10013900
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014134
#undef UNK_10014135
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014134
#undef uRam0000000010014135
#undef uRam0000000010014136

#undef str_1000d5ce
#define str_1000d5ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050c0
 */

int recovered_100050c0(undefined8 param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = (uint)param_1;
  iVar2 = recovered_10002a8c((char *)param_2,0x14,str_1000d5ce,(uint)((ulong)param_1 >> 0x18) & 0xff
                             ,uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar1 & 0xff);
  return iVar2;
}

#undef str_1000d5ce

#undef DAT_8201089c
#define DAT_8201089c (*(uint8_t *)(0x8201089cU))
#undef _DAT_8201089c
#define _DAT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005104
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005104(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_1000532c(0x9c);
  if ((bVar1) && (_DAT_8201089c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000512c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_8201089c)();
    return;
  }
  return;
}

#undef DAT_8201089c
#undef _DAT_8201089c

#undef DAT_82010974
#define DAT_82010974 (*(uint8_t *)(0x82010974U))
#undef _DAT_82010974
#define _DAT_82010974 (*(uint *)(0x82010974U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005138
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005138(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_1000532c(0x174);
  if ((bVar1) && (_DAT_82010974 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010974)(param_1);
    return;
  }
  return;
}

#undef DAT_82010974
#undef _DAT_82010974

#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef DAT_1000ca82
#define DAT_1000ca82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3eU)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014134
#define UNK_10014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef UNK_10014135
#define UNK_10014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef str_1000d5da
#define str_1000d5da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1596U)))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014134
#define uRam0000000010014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef uRam0000000010014135
#define uRam0000000010014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
#define alStack_460 (*(long (*)[140])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000517c
 */

/* WARNING: Removing unreachable block (ram,0x100077dc) */
/* WARNING: Removing unreachable block (ram,0x100076d8) */
/* WARNING: Removing unreachable block (ram,0x100077f4) */
/* WARNING: Removing unreachable block (ram,0x100076ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000517c(void *session,uint reason,char *description)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint128 auVar11;

  if ((*(byte *)((long)session + 0xdec) & 1) == 0) {
    recovered_1000a7c8(session,str_1000d5da);
  }
  bVar4 = recovered_10009c24((long)session);
  uVar3 = DAT_1000c0d0;
  if ((bVar4) && ((*(byte *)((long)session + 0xdec) & 1) == 0)) {
    puVar10 = *(undefined1 **)((long)session + 0x150);
    recovered_10009970(alStack_460 + 0x83,1);
    recovered_10006968(alStack_460 + 0x83,reason);
    recovered_100060c8(alStack_460 + 0x83,description);
    recovered_100060c8(alStack_460 + 0x83,&DAT_1000ca82);
    recovered_10009994((long)session,puVar10,(uint)((ulong)uVar3 >> 0x20));
  }
  *(undefined1 *)((long)session + 0xdec) = 1;
  uVar8 = recovered_100040a8();
  uVar5 = (uint)uVar8;
  *(uint *)((long)session + 0xdf0) = uVar5;
  puVar9 = *(uint **)((long)session + 8);
  if ((puVar9 == (uint *)0x0) || (puVar9[1] != *(uint *)((long)session + 0x10))) {
    return;
  }
  if (1 < *puVar9 - 2) {
    if (*puVar9 != 1) {
      return;
    }
    if ((*puVar9 | 8) != 8) {
      recovered_100076b0((long)puVar9,0x14,
                         (ulong)(puVar9[0x14] + puVar9[7] +
                                (uint)(byte)puVar9[0x15] + (uint)*(byte *)((long)puVar9 + 0x56)),0,0
                        );
    }
    *(undefined1 *)((long)puVar9 + 0x5b) = 1;
    *puVar9 = 0;
    puVar9[0xd] = 0;
    puVar9[0x13] = 0;
    *(undefined1 *)(puVar9 + 0x19) = 0;
    return;
  }
  *(undefined1 *)((long)puVar9 + 0x55) = 1;
  uVar7 = *puVar9;
  if (uVar7 < 9 && (1 << (ulong)(uVar7 & 0x1f) & 0x103U) != 0) {
    if ((uVar7 == 1) && ((*(byte *)((long)puVar9 + 0x5a) & 1) != 0)) {
      *(undefined1 *)((long)puVar9 + 0x5a) = 0;
    }
  }
  else {
    if ((*(byte *)((long)puVar9 + 0x57) & 1) == 0) {
      bVar4 = false;
      uVar7 = puVar9[0x14];
      while( true ) {
        uVar2 = 0;
        if (uVar7 <= puVar9[8]) {
          uVar2 = puVar9[8] - uVar7;
        }
        uVar1 = 0;
        if (uVar7 < 0x2da1) {
          uVar1 = 0x2da0 - uVar7;
        }
        if (uVar2 <= 0x2da0 - uVar7) {
          uVar1 = uVar2;
        }
        uVar2 = puVar9[0x13] - uVar7;
        if (uVar1 <= puVar9[0x13] - uVar7) {
          uVar2 = uVar1;
        }
        if (puVar9[9] <= uVar2) {
          uVar2 = puVar9[9];
        }
        if ((uVar2 == 0) ||
           (auVar11 = recovered_100076b0((long)puVar9,0x18,(ulong)(puVar9[7] + uVar7),
                                         puVar9[0x12] + uVar7 & 0x7fff,uVar2), PF_PART4(auVar11, 0) == 0))
        break;
        uVar7 = puVar9[0x14] + uVar2;
        puVar9[0x14] = uVar7;
        bVar4 = true;
        if ((puVar9[0x19] & 1) == 0) {
          puVar9[0x18] = puVar9[0x17] + uVar5;
          *(undefined1 *)(puVar9 + 0x19) = 1;
        }
      }
      if ((*(char *)((long)puVar9 + 0x55) == '\x01') && (puVar9[0x13] == puVar9[0x14])) {
        *(undefined2 *)((long)puVar9 + 0x56) = 0x101;
        recovered_100076b0((long)puVar9,0x11,(ulong)(puVar9[7] + puVar9[0x13]),0,0);
        if ((puVar9[0x19] & 1) == 0) {
          puVar9[0x18] = puVar9[0x17] + uVar5;
          *(undefined1 *)(puVar9 + 0x19) = 1;
        }
        if (*puVar9 == 3) {
          uVar7 = 4;
        }
        else {
          if (*puVar9 != 2) {
            return;
          }
          uVar7 = 5;
        }
        *puVar9 = uVar7;
        puVar9[0x1b] = uVar5;
        return;
      }
    }
    else {
      bVar4 = false;
    }
    if ((!bVar4) && ((*(byte *)((long)puVar9 + 0x5a) & 1) != 0)) {
      iVar6 = puVar9[0x14] + puVar9[7] +
              (uint)(byte)puVar9[0x15] + (uint)*(byte *)((long)puVar9 + 0x56);
      uVar5 = 0x4000 - puVar9[0xd];
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      recovered_10006f78((undefined1 *)(puVar9 + 2),0x800);
      recovered_10006fb8(0x28,6,(ulong)DAT_10013860,(ulong)puVar9[4]);
      recovered_10001498((ulong *)&DAT_10014126,0,0x14);
      _DAT_10014126 = *(ushort *)((long)puVar9 + 0x16) >> 8 | *(ushort *)((long)puVar9 + 0x16) << 8;
      PF_PART1(DAT_10014128, 0) = (undefined1)(puVar9[5] >> 8);
      PF_PART1(DAT_10014128, 1) = (undefined1)puVar9[5];
      uRam000000001001412a = (undefined1)((uint)iVar6 >> 0x18);
      uRam000000001001412b = (undefined1)((uint)iVar6 >> 0x10);
      uRam000000001001412c = (undefined1)((uint)iVar6 >> 8);
      uRam000000001001412d = (undefined1)iVar6;
      uVar7 = puVar9[6];
      uRam000000001001412e = (undefined1)(uVar7 >> 0x18);
      uRam000000001001412f = (undefined1)(uVar7 >> 0x10);
      uRam0000000010014130 = (undefined1)(uVar7 >> 8);
      uRam0000000010014131 = (undefined1)uVar7;
      uRam0000000010014132 = 0x50;
      uRam0000000010014133 = 0x10;
      uRam0000000010014134 = (undefined1)(uVar5 >> 8);
      uRam0000000010014135 = (undefined1)uVar5;
      uVar7 = recovered_1000707c((ulong)DAT_10013860,(ulong)puVar9[4],6,((uintptr_t)pf_module_state + 0x80e2U),0x14);
      uRam0000000010014136 = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
      puVar9[0xe] = uVar5;
      *(undefined1 *)((long)puVar9 + 0x5a) = 0;
      recovered_10001498((ulong *)&DAT_1001413a,0,6);
      bVar4 = recovered_1000532c(300);
      if (((bVar4) && (_DAT_8201092c != 0)) &&
         (iVar6 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c), iVar6 != 0)) {
        DAT_10013900 = DAT_10013900 + 1;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c0d0
#undef DAT_1000ca82
#undef DAT_10013860
#undef DAT_10013900
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014134
#undef UNK_10014135
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef str_1000d5da
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014134
#undef uRam0000000010014135
#undef uRam0000000010014136
#undef alStack_460

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005270
 */

uint128 recovered_10005270(uint *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = param_2;
  PF_PART8(auVar1, 0) = param_1;
  if ((*param_1 | 8) != 8) {
    auVar1 = recovered_100076b0((long)param_1,0x14,
                                (ulong)(param_1[0x14] + param_1[7] +
                                       (uint)(byte)param_1[0x15] +
                                       (uint)*(byte *)((long)param_1 + 0x56)),0,0);
  }
  *(undefined1 *)((long)param_1 + 0x5b) = 1;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052b0
 */

void recovered_100052b0(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  puVar1 = *(uint **)(param_1 + 8);
  if (((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(param_1 + 0x10))) && (*puVar1 - 1 < 3)) {
    recovered_10005270(puVar1,param_2);
  }
  recovered_10005318(param_1 + 0x160,0x19c);
  recovered_10005318(param_1 + 0x2fc,0x19c);
  recovered_10005318(param_1 + 0x4dc,0x19c);
  recovered_10005318(param_1 + 0x678,0x19c);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005318
 */

void recovered_10005318(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


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
 * Address: 0x1000532c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000532c(int param_1)

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

#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef _DAT_82010828
#define _DAT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005374
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005374(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_1000532c(0x28);
  if ((bVar1) && (_DAT_82010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100053a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010828)(param_1);
    return;
  }
  return;
}

#undef DAT_82010828
#undef _DAT_82010828

#define auStack_38 (*(ulong (*)[7])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053b4
 */

void recovered_100053b4(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};


  recovered_10001498(auStack_38,0,0x18);
  PF_PART4(auStack_38[0], 0) = 0x18;
  recovered_100054c0(auStack_38);
  recovered_10005438((undefined1 *)auStack_38,0x18);
  return;
}

#undef auStack_38

#define local_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053e4
 */

void recovered_100053e4(undefined8 param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_18 = param_1;
  recovered_10005438((undefined1 *)&local_18,8);
  return;
}

#undef local_18

#define uStack_28 (*(undefined4 *)(pf_stack_frame + 40))
#define auStack_38 (*(ulong (*)[7])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005408
 */

undefined4 recovered_10005408(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;

  recovered_10001498(auStack_38,0,0x18);
  PF_PART4(auStack_38[0], 0) = 0x18;
  uVar2 = recovered_100054c0(auStack_38);
  uVar1 = 0;
  if ((int)uVar2 != 0) {
    uVar1 = uStack_28;
  }
  return uVar1;
}

#undef uStack_28
#undef auStack_38

#undef DAT_100149e0
#define DAT_100149e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x899cU)))
#undef DAT_10014ad8
#define DAT_10014ad8 (*(int *)(((uintptr_t)pf_module_state + 0x8a94U)))
#undef DAT_10014adc
#define DAT_10014adc (*(byte *)(((uintptr_t)pf_module_state + 0x8a98U)))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005438
 */

void recovered_10005438(undefined1 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};


  uStack_28 = pf_read_cntvct_el0();
  if (((DAT_10014adc & 1) == 0) && (DAT_10014ad8 == 0)) {
    recovered_10005504((undefined8 *)&DAT_100149e0);
  }
  recovered_10005538((ulong *)&DAT_100149e0,(undefined1 *)&uStack_28,8);
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    recovered_10005538((ulong *)&DAT_100149e0,param_1,param_2);
  }
  DAT_10014ad8 = DAT_10014ad8 + 1;
  return;
}

#undef DAT_100149e0
#undef DAT_10014ad8
#undef DAT_10014adc
#undef uStack_28

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100054c0(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_1000532c(0x168);
  if ((bVar1) && (_DAT_82010968 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100054f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010968)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010968
#undef _DAT_82010968

#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef DAT_1000c150
#define DAT_1000c150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000c170
#define DAT_1000c170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef UNK_1000c148
#define UNK_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef UNK_1000c158
#define UNK_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_1000c150
#define _DAT_1000c150 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_1000c160
#define _DAT_1000c160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_1000c170
#define _DAT_1000c170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef uRam000000001000c148
#define uRam000000001000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef uRam000000001000c158
#define uRam000000001000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005504
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005504(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar3 = uRam000000001000c158;
  uVar2 = _DAT_1000c150;
  uVar1 = _DAT_1000c140;
  param_1[1] = uRam000000001000c148;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = uRam000000001000c178;
  uVar2 = _DAT_1000c170;
  uVar1 = _DAT_1000c160;
  param_1[5] = uRam000000001000c168;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}

#undef DAT_1000c140
#undef DAT_1000c150
#undef DAT_1000c160
#undef DAT_1000c170
#undef UNK_1000c148
#undef UNK_1000c158
#undef UNK_1000c168
#undef UNK_1000c178
#undef _DAT_1000c140
#undef _DAT_1000c150
#undef _DAT_1000c160
#undef _DAT_1000c170
#undef uRam000000001000c148
#undef uRam000000001000c158
#undef uRam000000001000c168
#undef uRam000000001000c178

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005538
 */

void recovered_10005538(ulong *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;

  param_1[8] = param_1[8] + param_3;
  while (param_3 != 0) {
    uVar3 = (ulong)(0x80 - (uint)param_1[0x19]);
    uVar2 = param_3;
    if (uVar3 <= param_3) {
      uVar2 = uVar3;
    }
    recovered_100012ac((undefined1 *)((long)(param_1 + 9) + (ulong)(uint)param_1[0x19]),param_2,
                       uVar2);
    iVar1 = (int)param_1[0x19] + (int)uVar2;
    *(int *)(param_1 + 0x19) = iVar1;
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    if (iVar1 == 0x80) {
      recovered_100055a8(param_1,(uint *)(param_1 + 9));
      *(undefined4 *)(param_1 + 0x19) = 0;
    }
  }
  return;
}


#undef DAT_1000c1d0
#define DAT_1000c1d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#define alStack_350 (*(long (*)[106])(pf_stack_frame + 16))
#define alStack_308 (*(long (*)[97])(pf_stack_frame + 88))
#define auStack_2e0 (*(ulong (*)[92])(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055a8
 */

void recovered_100055a8(ulong *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[896] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;

  for (lVar14 = 0; lVar14 != 0x10; lVar14 = lVar14 + 1) {
    uVar3 = recovered_10005760(param_2);
    uVar4 = recovered_10005760(param_2 + 1);
    auStack_2e0[lVar14 + 2] = CONCAT44(uVar3,uVar4);
    param_2 = param_2 + 2;
  }
  for (lVar14 = 0x80; lVar14 != 0x280; lVar14 = lVar14 + 8) {
    uVar2 = *(ulong *)((long)alStack_350 + lVar14 + 8);
    uVar10 = *(ulong *)((long)auStack_2e0 + lVar14);
    *(ulong *)((long)auStack_2e0 + lVar14 + 0x10) =
         ((uVar2 >> 1 | uVar2 << 0x3f) ^ (uVar2 >> 8 | uVar2 << 0x38) ^ uVar2 >> 7) +
         *(long *)((long)alStack_350 + lVar14) + *(long *)((long)alStack_308 + lVar14) +
         ((uVar10 >> 0x13 | uVar10 << 0x2d) ^ (uVar10 >> 0x3d | uVar10 << 3) ^ uVar10 >> 6);
  }
  uVar10 = param_1[3];
  uVar5 = param_1[7];
  uVar2 = param_1[4];
  uVar8 = param_1[2];
  uVar9 = param_1[1];
  uVar11 = param_1[6];
  uVar12 = param_1[5];
  uVar13 = *param_1;
  for (lVar14 = 0; uVar7 = uVar2, lVar14 != 0x280; lVar14 = lVar14 + 8) {
    lVar1 = (uVar7 & uVar12 | uVar11 & (uVar7 ^ 0xffffffffffffffff)) + uVar5 +
            ((uVar7 >> 0xe | uVar7 << 0x32) ^ (uVar7 >> 0x12 | uVar7 << 0x2e) ^
            (uVar7 >> 0x29 | uVar7 << 0x17)) +
            *(long *)((long)&DAT_1000c1d0 + lVar14) + *(long *)((long)auStack_2e0 + lVar14 + 0x10);
    uVar6 = uVar9 ^ uVar8;
    uVar15 = uVar9 & uVar8;
    uVar2 = lVar1 + uVar10;
    uVar10 = uVar8;
    uVar5 = uVar11;
    uVar8 = uVar9;
    uVar9 = uVar13;
    uVar11 = uVar12;
    uVar12 = uVar7;
    uVar13 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 << 0x1e) ^
             (uVar13 >> 0x27 | uVar13 << 0x19)) + (uVar13 & uVar6 ^ uVar15) + lVar1;
  }
  *param_1 = uVar13 + *param_1;
  param_1[1] = uVar9 + param_1[1];
  param_1[2] = uVar8 + param_1[2];
  param_1[3] = uVar10 + param_1[3];
  param_1[4] = uVar7 + param_1[4];
  param_1[5] = uVar12 + param_1[5];
  param_1[6] = uVar11 + param_1[6];
  param_1[7] = uVar5 + param_1[7];
  return;
}

#undef DAT_1000c1d0
#undef alStack_350
#undef alStack_308
#undef auStack_2e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

uint recovered_10005760(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


#define fStack_40 (*(float *)(pf_stack_frame + 32))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000576c
 */

ulong recovered_1000576c(undefined8 param_1,ulong param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uStack_48 = 0;
  fStack_40 = 0.0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = recovered_10005bd8(param_1,&uStack_48);
  if ((int)uVar1 != 0) {
    if ((int)uStack_48 == 5) {
      param_2 = (ulong)(PF_PART4(uStack_48, 4) != 0);
    }
    else if ((int)uStack_48 == 2) {
      param_2 = (ulong)(uint)(int)fStack_40;
    }
    else if ((int)uStack_48 == 1) {
      param_2 = (ulong)PF_PART4(uStack_48, 4);
    }
  }
  return param_2;
}

#undef fStack_40
#undef uStack_38
#undef uStack_30
#undef uStack_28
#undef uStack_48

#undef DAT_1000ca82
#define DAT_1000ca82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3eU)))
#undef DAT_1000cd9b
#define DAT_1000cd9b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd57U)))
#undef str_1000cda0
#define str_1000cda0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5cU)))
#define local_64 (*(byte (*)[100])(pf_stack_frame + 28))
#define local_58 (*(undefined8 *)(pf_stack_frame + 40))
#define local_50 (*(undefined4 *)(pf_stack_frame + 48))
#define local_48 (*(long *)(pf_stack_frame + 56))
#define local_38 (*(undefined4 *)(pf_stack_frame + 72))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057c8
 */

void recovered_100057c8(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;

  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_2 != (undefined1 *)0x0) {
    uVar6 = recovered_10005bd8(param_1,&local_58);
    iVar5 = (int)uVar6;
    if ((iVar5 == 0) || ((int)local_58 != 3 || local_48 == 0)) {
      if ((iVar5 == 0) || ((int)local_58 != 1)) {
        if ((iVar5 == 0) || ((int)local_58 != 5)) {
          lVar8 = 0;
          puVar2 = &DAT_1000ca82;
          if (param_4 != (undefined1 *)0x0) {
            puVar2 = param_4;
          }
          for (; ((int)lVar8 + 1U < param_3 && (puVar2[lVar8] != '\0')); lVar8 = lVar8 + 1) {
            param_2[lVar8] = puVar2[lVar8];
          }
        }
        else {
          lVar8 = 0;
          pcVar1 = str_1000cda0;
          if (PF_PART4(local_58, 4) != 0) {
            pcVar1 = &DAT_1000cd9b;
          }
          for (; ((int)lVar8 + 1U < param_3 && (pcVar1[lVar8] != '\0')); lVar8 = lVar8 + 1) {
            param_2[lVar8] = pcVar1[lVar8];
          }
        }
        param_2[lVar8] = 0;
      }
      else {
        uVar10 = -PF_PART4(local_58, 4);
        if (-1 < local_58) {
          uVar10 = PF_PART4(local_58, 4);
        }
        uVar11 = 0;
        do {
          uVar7 = uVar11;
          local_64[uVar7] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
          bVar3 = 8 < uVar10;
          bVar4 = uVar10 != 9;
          uVar11 = uVar7 + 1;
          uVar10 = uVar10 / 10;
        } while ((10 >= uVar7 && bVar3) && (10 < uVar7 || bVar4));
        if (local_58 < 0) {
          *param_2 = 0x2d;
        }
        uVar11 = (ulong)(local_58 < 0);
        pbVar9 = param_2 + uVar11;
        for (; uVar11 = uVar11 + 1, uVar7 != 0xffffffffffffffff && uVar11 < param_3;
            uVar7 = uVar7 - 1) {
          *pbVar9 = local_64[uVar7];
          pbVar9 = pbVar9 + 1;
        }
        *pbVar9 = 0;
      }
    }
    else {
      for (lVar8 = 0; ((int)lVar8 + 1U < param_3 && (*(char *)(local_48 + lVar8) != '\0'));
          lVar8 = lVar8 + 1) {
        param_2[lVar8] = *(char *)(local_48 + lVar8);
      }
      param_2[lVar8] = 0;
    }
  }
  return;
}

#undef DAT_1000ca82
#undef DAT_1000cd9b
#undef str_1000cda0
#undef local_64
#undef local_58
#undef local_50
#undef local_48
#undef local_38
#undef uStack_40

#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define pbStack_38 (*(byte * *)(pf_stack_frame + 40))
#define uStack_30 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005980
 */

ulong recovered_10005980(undefined8 param_1,ulong param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  uStack_48 = 0;
  uStack_40 = 0;
  pbStack_38 = (byte *)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar2 = recovered_10005bd8(param_1,&uStack_48);
  if ((int)uVar2 != 0) {
    if (((uint)uStack_48 & 0xfffffffb) == 1) {
      param_2 = (ulong)(PF_PART4(uStack_48, 4) != 0);
    }
    else if ((uint)uStack_48 == 3 && pbStack_38 != (byte *)0x0) {
      param_2 = 1;
      uVar1 = *pbStack_38 - 0x54;
      if ((0x25 < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x2100000021U) == 0) &&
         (*pbStack_38 != 0x31)) {
        param_2 = 0;
      }
    }
  }
  return param_2;
}

#undef uStack_48
#undef uStack_40
#undef pbStack_38
#undef uStack_30
#undef uStack_28

#undef DAT_1000ca82
#define DAT_1000ca82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3eU)))
#define local_120 (*(byte (*)[288])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a0c
 */

void recovered_10005a0c(undefined8 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;

  pbVar4 = local_120;
  recovered_100057c8(param_1,local_120,0x100,&DAT_1000ca82);
  if (local_120[0] != 0) {
    uVar2 = 0;
    for (iVar3 = 0; iVar3 != 4; iVar3 = iVar3 + 1) {
      iVar6 = 0;
      uVar5 = 0;
      while( true ) {
        uVar1 = *pbVar4 - 0x30U;
        if (9 < uVar1) break;
        uVar5 = uVar5 * 10 + (uVar1 & 0xff);
        if (0xff < uVar5) {
          return;
        }
        pbVar4 = pbVar4 + 1;
        iVar6 = iVar6 + -1;
      }
      if (iVar6 == 0) {
        return;
      }
      if (iVar3 != 3) {
        if (*pbVar4 != 0x2e) {
          return;
        }
        pbVar4 = pbVar4 + 1;
      }
      uVar2 = uVar5 | uVar2 << 8;
    }
    if (*pbVar4 == 0) {
      *param_2 = uVar2;
    }
  }
  return;
}

#undef DAT_1000ca82
#undef local_120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac8
 */

uint recovered_10005ac8(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;

  lVar3 = 0;
  pcVar4 = (char *)(param_1 + 1);
  do {
    if (lVar3 == 0x20) {
      uVar1 = 0;
      if (*(byte *)(param_1 + 0x40) < 0x21) {
        uVar1 = (uint)(0x100002601 >> ((ulong)*(byte *)(param_1 + 0x40) & 0x3f));
      }
LAB_10005b40:
      return uVar1 & 1;
    }
    uVar1 = recovered_10005c1c((uint)(byte)pcVar4[-1]);
    if (((int)uVar1 < 0) || (uVar2 = recovered_10005c1c((int)*pcVar4), (int)uVar2 < 0)) {
      uVar1 = 0;
      goto LAB_10005b40;
    }
    *(byte *)(param_2 + lVar3) = (byte)uVar2 | (byte)(uVar1 << 4);
    lVar3 = lVar3 + 1;
    pcVar4 = pcVar4 + 2;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b58
 */

void recovered_10005b58(undefined1 *param_1,ulong param_2,undefined1 *param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 <= param_4) {
    param_4 = param_2 - 1;
  }
  recovered_100012ac(param_1,param_3,param_4);
  param_1[param_4] = 0;
  return;
}


#undef DAT_82010898
#define DAT_82010898 (*(uint8_t *)(0x82010898U))
#undef _DAT_82010898
#define _DAT_82010898 (*(uint *)(0x82010898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_1000532c(0x98);
  if ((bVar1) && (_DAT_82010898 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010898)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010898
#undef _DAT_82010898

#undef DAT_82010a04
#define DAT_82010a04 (*(uint8_t *)(0x82010a04U))
#undef _DAT_82010a04
#define _DAT_82010a04 (*(uint *)(0x82010a04U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10005bd8(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_1000532c(0x204);
  if ((bVar1) && (_DAT_82010a04 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010a04)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010a04
#undef _DAT_82010a04

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c1c
 */

uint recovered_10005c1c(int param_1)

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


#undef DAT_100149e0
#define DAT_100149e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x899cU)))
#undef DAT_10014ab0
#define DAT_10014ab0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6cU)))
#undef DAT_10014ad0
#define DAT_10014ad0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8a8cU)))
#undef DAT_10014ad8
#define DAT_10014ad8 (*(uint *)(((uintptr_t)pf_module_state + 0x8a94U)))
#undef DAT_10014adc
#define DAT_10014adc (*(char *)(((uintptr_t)pf_module_state + 0x8a98U)))
#undef str_1000c44e
#define str_1000c44e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#define auStack_80 (*(ulong (*)[16])(pf_stack_frame + 16))
#define auStack_60 (*(undefined1 (*)[96])(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c4c
 */

void recovered_10005c4c(undefined1 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined1 uVar3;

  if ((DAT_10014adc != '\x01') || (lVar2 = DAT_10014ad0, uVar3 = 1, 0x3f < DAT_10014ad8)) {
    recovered_10005538((ulong *)&DAT_100149e0,&DAT_10014ab0,0x20);
    recovered_10006004((ulong *)&DAT_100149e0,auStack_80);
    recovered_100012ac(&DAT_10014ab0,(undefined1 *)auStack_80,0x20);
    recovered_10005504((undefined8 *)&DAT_100149e0);
    recovered_10005538((ulong *)&DAT_100149e0,auStack_60,0x20);
    DAT_10014ad0 = 0;
    DAT_10014adc = 1;
    recovered_10005318((undefined1 *)auStack_80,0x40);
    DAT_10014ad8 = 0;
    lVar2 = DAT_10014ad0;
    uVar3 = DAT_10014adc;
  }
  for (; DAT_10014adc = uVar3, param_2 != 0; param_2 = param_2 - uVar1) {
    uVar1 = param_2;
    if (0x3f < param_2) {
      uVar1 = 0x40;
    }
    DAT_10014ad0 = lVar2 + 1;
    recovered_10005d84((uint *)&DAT_10014ab0,lVar2,
                       (undefined8 *)(str_1000c44e + 2),(long)auStack_80);
    recovered_100012ac(param_1,(undefined1 *)auStack_80,uVar1);
    param_1 = param_1 + uVar1;
    lVar2 = DAT_10014ad0;
    uVar3 = DAT_10014adc;
  }
  DAT_10014ad0 = lVar2 + 1;
  recovered_10005d84((uint *)&DAT_10014ab0,lVar2,
                     (undefined8 *)(str_1000c44e + 2),(long)auStack_80);
  recovered_100012ac(&DAT_10014ab0,(undefined1 *)auStack_80,0x20);
  recovered_10005318((undefined1 *)auStack_80,0x40);
  return;
}

#undef DAT_100149e0
#undef DAT_10014ab0
#undef DAT_10014ad0
#undef DAT_10014ad8
#undef DAT_10014adc
#undef str_1000c44e
#undef auStack_80
#undef auStack_60

#undef DAT_1000c180
#define DAT_1000c180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef UNK_1000c188
#define UNK_1000c188 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef _DAT_1000c180
#define _DAT_1000c180 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef uRam000000001000c188
#define uRam000000001000c188 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#define local_c0 (*(uint (*)[48])(pf_stack_frame + 16))
#define local_80 (*(undefined8 *)(pf_stack_frame + 80))
#define local_50 (*(undefined8 *)(pf_stack_frame + 128))
#define local_48 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 88))
#define auStack_70 (*(uint (*)[28])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005d84(uint *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;

  uStack_78 = uRam000000001000c188;
  local_80 = _DAT_1000c180;
  for (lVar14 = 4; lVar14 != 0xc; lVar14 = lVar14 + 1) {
    local_c0[lVar14 + 0x10] = *param_1;
    param_1 = param_1 + 1;
  }
  local_48 = *param_3;
  local_50 = param_2;
  recovered_100012ac((undefined1 *)local_c0,(undefined1 *)&local_80,0x40);
  iVar13 = 10;
  do {
    local_c0[0xc] = local_c0[0xc] ^ local_c0[0] + local_c0[4];
    local_c0[8] = local_c0[8] + (local_c0[0xc] >> 0x10 | local_c0[0xc] << 0x10);
    uVar2 = local_c0[8] ^ local_c0[4];
    local_c0[0xd] = local_c0[0xd] ^ local_c0[1] + local_c0[5];
    local_c0[9] = local_c0[9] + (local_c0[0xd] >> 0x10 | local_c0[0xd] << 0x10);
    uVar3 = local_c0[9] ^ local_c0[5];
    local_c0[1] = (uVar3 >> 0x14 | uVar3 << 0xc) + local_c0[1] + local_c0[5];
    uVar4 = local_c0[1] ^ (local_c0[0xd] >> 0x10 | local_c0[0xd] << 0x10);
    local_c0[9] = (uVar4 >> 0x18 | uVar4 << 8) + local_c0[9];
    uVar5 = local_c0[9] ^ (uVar3 >> 0x14 | uVar3 << 0xc);
    uVar3 = (uVar2 >> 0x14 | uVar2 << 0xc) + local_c0[0] + local_c0[4];
    local_c0[0] = (uVar5 >> 0x19 | uVar5 << 7) + uVar3;
    uVar3 = uVar3 ^ (local_c0[0xc] >> 0x10 | local_c0[0xc] << 0x10);
    local_c0[0xe] = local_c0[0xe] ^ local_c0[2] + local_c0[6];
    local_c0[10] = local_c0[10] + (local_c0[0xe] >> 0x10 | local_c0[0xe] << 0x10);
    uVar6 = local_c0[10] ^ local_c0[6];
    local_c0[2] = (uVar6 >> 0x14 | uVar6 << 0xc) + local_c0[2] + local_c0[6];
    uVar7 = local_c0[2] ^ (local_c0[0xe] >> 0x10 | local_c0[0xe] << 0x10);
    local_c0[0xf] = local_c0[0xf] ^ local_c0[3] + local_c0[7];
    local_c0[0xb] = local_c0[0xb] + (local_c0[0xf] >> 0x10 | local_c0[0xf] << 0x10);
    uVar8 = local_c0[0xb] ^ local_c0[7];
    local_c0[3] = (uVar8 >> 0x14 | uVar8 << 0xc) + local_c0[3] + local_c0[7];
    uVar9 = local_c0[3] ^ (local_c0[0xf] >> 0x10 | local_c0[0xf] << 0x10);
    uVar10 = local_c0[0] ^ (uVar9 >> 0x18 | uVar9 << 8);
    local_c0[10] = (uVar7 >> 0x18 | uVar7 << 8) + local_c0[10];
    uVar1 = (uVar10 >> 0x10 | uVar10 << 0x10) + local_c0[10];
    uVar11 = local_c0[10] ^ (uVar6 >> 0x14 | uVar6 << 0xc);
    local_c0[1] = (uVar11 >> 0x19 | uVar11 << 7) + local_c0[1];
    uVar12 = local_c0[1] ^ (uVar3 >> 0x18 | uVar3 << 8);
    local_c0[0xb] = (uVar9 >> 0x18 | uVar9 << 8) + local_c0[0xb];
    uVar6 = local_c0[0xb] + (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar8 = local_c0[0xb] ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    local_c0[2] = (uVar8 >> 0x19 | uVar8 << 7) + local_c0[2];
    uVar4 = local_c0[2] ^ (uVar4 >> 0x18 | uVar4 << 8);
    local_c0[8] = (uVar3 >> 0x18 | uVar3 << 8) + local_c0[8];
    uVar3 = (uVar4 >> 0x10 | uVar4 << 0x10) + local_c0[8];
    uVar2 = local_c0[8] ^ (uVar2 >> 0x14 | uVar2 << 0xc);
    uVar5 = uVar1 ^ (uVar5 >> 0x19 | uVar5 << 7);
    local_c0[0] = (uVar5 >> 0x14 | uVar5 << 0xc) + local_c0[0];
    uVar9 = local_c0[0] ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    local_c0[0xf] = uVar9 >> 0x18 | uVar9 << 8;
    local_c0[10] = local_c0[0xf] + uVar1;
    uVar1 = local_c0[10] ^ (uVar5 >> 0x14 | uVar5 << 0xc);
    local_c0[5] = uVar1 >> 0x19 | uVar1 << 7;
    uVar1 = uVar6 ^ (uVar11 >> 0x19 | uVar11 << 7);
    local_c0[1] = (uVar1 >> 0x14 | uVar1 << 0xc) + local_c0[1];
    uVar5 = local_c0[1] ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    local_c0[0xc] = uVar5 >> 0x18 | uVar5 << 8;
    local_c0[0xb] = local_c0[0xc] + uVar6;
    uVar1 = local_c0[0xb] ^ (uVar1 >> 0x14 | uVar1 << 0xc);
    local_c0[6] = uVar1 >> 0x19 | uVar1 << 7;
    uVar1 = uVar3 ^ (uVar8 >> 0x19 | uVar8 << 7);
    local_c0[2] = (uVar1 >> 0x14 | uVar1 << 0xc) + local_c0[2];
    uVar6 = local_c0[2] ^ (uVar4 >> 0x10 | uVar4 << 0x10);
    local_c0[0xd] = uVar6 >> 0x18 | uVar6 << 8;
    local_c0[8] = local_c0[0xd] + uVar3;
    uVar3 = local_c0[8] ^ (uVar1 >> 0x14 | uVar1 << 0xc);
    local_c0[7] = uVar3 >> 0x19 | uVar3 << 7;
    local_c0[3] = local_c0[3] + (uVar2 >> 0x19 | uVar2 << 7);
    uVar3 = local_c0[3] ^ (uVar7 >> 0x18 | uVar7 << 8);
    local_c0[9] = (uVar3 >> 0x10 | uVar3 << 0x10) + local_c0[9];
    uVar1 = local_c0[9] ^ (uVar2 >> 0x19 | uVar2 << 7);
    local_c0[3] = (uVar1 >> 0x14 | uVar1 << 0xc) + local_c0[3];
    uVar3 = local_c0[3] ^ (uVar3 >> 0x10 | uVar3 << 0x10);
    local_c0[0xe] = uVar3 >> 0x18 | uVar3 << 8;
    local_c0[9] = local_c0[0xe] + local_c0[9];
    uVar3 = local_c0[9] ^ (uVar1 >> 0x14 | uVar1 << 0xc);
    local_c0[4] = uVar3 >> 0x19 | uVar3 << 7;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  lVar14 = param_4 + 3;
  for (lVar15 = 0; lVar15 != 0x10; lVar15 = lVar15 + 1) {
    *(uint *)(lVar14 + -3) = local_c0[lVar15 + 0x10] + local_c0[lVar15];
    lVar14 = lVar14 + 4;
  }
  return;
}

#undef DAT_1000c180
#undef UNK_1000c188
#undef _DAT_1000c180
#undef uRam000000001000c188
#undef local_c0
#undef local_80
#undef local_50
#undef local_48
#undef uStack_78
#undef auStack_70

#define uStack_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006004
 */

void recovered_10006004(ulong *param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  uVar1 = param_1[8];
  uStack_31 = 0x80;
  recovered_10005538(param_1,&uStack_31,1);
  uStack_31 = 0;
  while ((int)param_1[0x19] != 0x70) {
    recovered_10005538(param_1,&uStack_31,1);
  }
  recovered_10001498(param_1 + 0x17,0,8);
  recovered_100060bc(param_1 + 0x18,uVar1 << 3);
  recovered_100055a8(param_1,(uint *)(param_1 + 9));
  for (lVar2 = 0; lVar2 != 8; lVar2 = lVar2 + 1) {
    recovered_100060bc(param_2,param_1[lVar2]);
    param_2 = param_2 + 1;
  }
  recovered_10005318((undefined1 *)param_1,0xd0);
  return;
}

#undef uStack_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060bc
 */

void recovered_100060bc(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  *param_1 = uVar1 >> 0x20 | uVar1 << 0x20;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060c8
 */

void recovered_100060c8(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_10001788((long)param_2);
  uVar2 = (uint)uVar1;
  recovered_10006968(param_1,uVar2);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
    if (uVar2 <= (int)param_1[1] - uVar3) {
      if (uVar2 != 0) {
        recovered_100012ac((undefined1 *)(*param_1 + (ulong)uVar3),param_2,uVar1 & 0xffffffff);
        uVar3 = *(uint *)((long)param_1 + 0xc);
      }
      *(uint *)((long)param_1 + 0xc) = uVar3 + uVar2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060e8
 */

void recovered_100060e8(long *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_10006968(param_1,param_3);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (param_3 <= (int)param_1[1] - uVar1) {
      if (param_3 != 0) {
        recovered_100012ac((undefined1 *)(*param_1 + (ulong)uVar1),param_2,(ulong)param_3);
        uVar1 = *(uint *)((long)param_1 + 0xc);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1 + param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000611c
 */

void recovered_1000611c(uint *param_1,undefined1 *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;

  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  while (param_3 != 0) {
    uVar3 = (ulong)(0x40 - param_1[0x1a]);
    uVar2 = param_3;
    if (uVar3 <= param_3) {
      uVar2 = uVar3;
    }
    recovered_100012ac((undefined1 *)((long)(param_1 + 10) + (ulong)param_1[0x1a]),param_2,uVar2);
    uVar1 = param_1[0x1a] + (int)uVar2;
    param_1[0x1a] = uVar1;
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    if (uVar1 == 0x40) {
      recovered_100069ec(param_1,param_1 + 10);
      param_1[0x1a] = 0;
    }
  }
  return;
}


#define uStack_39 (*(ulong *)(pf_stack_frame + 23))
#define uStack_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000618c
 */

void recovered_1000618c(uint *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  lVar4 = *(long *)(param_1 + 8);
  uStack_31 = 0x80;
  recovered_1000611c(param_1,&uStack_31,1);
  uStack_31 = 0;
  while (param_1[0x1a] != 0x38) {
    recovered_1000611c(param_1,&uStack_31,1);
  }
  uVar2 = (lVar4 << 3 & 0xff00ff00ff00ff00U) >> 8 | (lVar4 << 3 & 0xff00ff00ff00ffU) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uStack_39 = uVar2 >> 0x20 | uVar2 << 0x20;
  recovered_100012ac((undefined1 *)(param_1 + 0x18),(undefined1 *)&uStack_39,8);
  recovered_100069ec(param_1,param_1 + 10);
  param_1[0x1a] = 0;
  lVar4 = param_2 + 3;
  for (lVar3 = 0; lVar3 != 8; lVar3 = lVar3 + 1) {
    uVar1 = (param_1[lVar3] & 0xff00ff00) >> 8 | (param_1[lVar3] & 0xff00ff) << 8;
    *(uint *)(lVar4 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
    lVar4 = lVar4 + 4;
  }
  recovered_10005318((undefined1 *)param_1,0x70);
  return;
}

#undef uStack_39
#undef uStack_31

#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef DAT_1000c150
#define DAT_1000c150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000c170
#define DAT_1000c170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef UNK_1000c148
#define UNK_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef UNK_1000c158
#define UNK_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_1000c150
#define _DAT_1000c150 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_1000c160
#define _DAT_1000c160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_1000c170
#define _DAT_1000c170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef uRam000000001000c148
#define uRam000000001000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef uRam000000001000c158
#define uRam000000001000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#define local_f0 (*(ulong *)(pf_stack_frame + 16))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_28 (*(undefined4 *)(pf_stack_frame + 216))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_d8 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_b8 (*(undefined8 *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006240(undefined1 *param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};


  uStack_e8 = uRam000000001000c148;
  local_f0 = _DAT_1000c140;
  uStack_d8 = uRam000000001000c158;
  uStack_e0 = _DAT_1000c150;
  uStack_c8 = uRam000000001000c168;
  local_d0 = _DAT_1000c160;
  uStack_b8 = uRam000000001000c178;
  uStack_c0 = _DAT_1000c170;
  local_b0 = 0;
  local_28 = 0;
  recovered_10005538(&local_f0,param_1,param_2);
  recovered_10006004(&local_f0,param_3);
  return;
}

#undef DAT_1000c140
#undef DAT_1000c150
#undef DAT_1000c160
#undef DAT_1000c170
#undef UNK_1000c148
#undef UNK_1000c158
#undef UNK_1000c168
#undef UNK_1000c178
#undef _DAT_1000c140
#undef _DAT_1000c150
#undef _DAT_1000c160
#undef _DAT_1000c170
#undef uRam000000001000c148
#undef uRam000000001000c158
#undef uRam000000001000c168
#undef uRam000000001000c178
#undef local_f0
#undef local_d0
#undef local_b0
#undef local_28
#undef uStack_e8
#undef uStack_e0
#undef uStack_d8
#undef uStack_c8
#undef uStack_c0
#undef uStack_b8

#undef DAT_1000c468
#define DAT_1000c468 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_1000c4e8
#define DAT_1000c4e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4a4U)))
#define auStack_240 (*(undefined8 (*)[72])(pf_stack_frame + 16))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 400))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b0
 */

void recovered_100062b0(long param_1,long param_2)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 8) {
    *(undefined8 *)((long)auStack_240 + lVar3) = *(undefined8 *)((long)&DAT_1000c468 + lVar3);
    *(undefined8 *)((long)auStack_240 + lVar3 + 0x80) = *(undefined8 *)((long)&DAT_1000c4e8 + lVar3)
    ;
    *(undefined8 *)((long)auStack_240 + lVar3 + 0x100) = 0;
  }
  auStack_240[0x20] = 1;
  recovered_10006440((long)auStack_c0,((uintptr_t)pf_module_state + 0x424U),((uintptr_t)pf_module_state + 0x4a4U));
  for (lVar3 = 0x80; lVar3 != 0x100; lVar3 = lVar3 + 8) {
    puVar1 = (undefined8 *)(param_1 + lVar3);
    puVar1[-0x10] = 0;
    *puVar1 = 0;
    puVar1[0x10] = 0;
    puVar1[0x20] = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 1;
  *(undefined8 *)(param_1 + 0x100) = 1;
  uVar5 = 0xff;
  do {
    uVar4 = (ulong)(*(byte *)(param_2 + (uVar5 >> 3)) >> (ulong)((uint)uVar5 & 7) & 1);
    recovered_10006570(param_1,(long)auStack_240,uVar4);
    recovered_100065bc((long)auStack_240,param_1);
    recovered_100065bc(param_1,param_1);
    recovered_10006570(param_1,(long)auStack_240,uVar4);
    uVar2 = (uint)uVar5 - 1;
    uVar5 = (ulong)uVar2;
  } while (-1 < (int)uVar2);
  return;
}

#undef DAT_1000c468
#undef DAT_1000c4e8
#undef auStack_240
#undef auStack_c0

#define auStack_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 16))
#define auStack_150 (*(undefined1 (*)[336])(pf_stack_frame + 144))
#define auStack_d0 (*(undefined1 (*)[208])(pf_stack_frame + 272))
#define acStack_50 (*(char (*)[80])(pf_stack_frame + 400))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c4
 */

void recovered_100063c4(long param_1,long param_2)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};


  recovered_10006790((long)auStack_1d0,param_2 + 0x100);
  recovered_10006440((long)auStack_d0,param_2,(long)auStack_1d0);
  recovered_10006440((long)auStack_150,param_2 + 0x80,(long)auStack_1d0);
  recovered_1000682c(param_1,(long)auStack_150);
  recovered_1000682c((long)acStack_50,(long)auStack_d0);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ acStack_50[0] << 7;
  return;
}

#undef auStack_1d0
#undef auStack_150
#undef auStack_d0
#undef acStack_50

#define alStack_118 (*(long (*)[35])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006440
 */

void recovered_10006440(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;

  for (lVar3 = 0; lVar3 != 0xf8; lVar3 = lVar3 + 8) {
    *(undefined8 *)((long)alStack_118 + lVar3) = 0;
  }
  plVar4 = alStack_118;
  for (lVar3 = 0; lVar3 != 0x10; lVar3 = lVar3 + 1) {
    lVar6 = *(long *)(param_2 + lVar3 * 8);
    for (lVar5 = 0; lVar5 != 0x80; lVar5 = lVar5 + 8) {
      *(long *)((long)plVar4 + lVar5) =
           *(long *)((long)plVar4 + lVar5) + *(long *)(param_3 + lVar5) * lVar6;
    }
    plVar4 = plVar4 + 1;
  }
  for (lVar3 = 0; lVar3 != 0x78; lVar3 = lVar3 + 8) {
    *(long *)((long)alStack_118 + lVar3) =
         *(long *)((long)alStack_118 + lVar3) + *(long *)((long)alStack_118 + lVar3 + 0x80) * 0x26;
  }
  for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 8) {
    *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)((long)alStack_118 + lVar3);
  }
  recovered_10006510(param_1);
  for (lVar3 = 0; lVar3 != 0x10; lVar3 = lVar3 + 1) {
    uVar1 = *(long *)(param_1 + lVar3 * 8) + 0x10000;
    *(ulong *)(param_1 + lVar3 * 8) = uVar1;
    lVar6 = ((long)uVar1 >> 0x10) + -1;
    lVar5 = lVar6 * 0x25;
    if (lVar3 != 0xf) {
      lVar5 = 0;
    }
    lVar2 = 0;
    if (lVar3 != 0xf) {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + lVar2 * 8) = lVar6 + *(long *)(param_1 + lVar2 * 8) + lVar5;
    *(ulong *)(param_1 + lVar3 * 8) = *(long *)(param_1 + lVar3 * 8) - (uVar1 & 0xffffffffffff0000);
  }
  return;
}

#undef alStack_118

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006510
 */

void recovered_10006510(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;

  for (lVar3 = 0; lVar3 != 0x10; lVar3 = lVar3 + 1) {
    uVar1 = *(long *)(param_1 + lVar3 * 8) + 0x10000;
    *(ulong *)(param_1 + lVar3 * 8) = uVar1;
    lVar4 = ((long)uVar1 >> 0x10) + -1;
    lVar5 = lVar4 * 0x25;
    if (lVar3 != 0xf) {
      lVar5 = 0;
    }
    lVar2 = 0;
    if (lVar3 != 0xf) {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + lVar2 * 8) = lVar4 + *(long *)(param_1 + lVar2 * 8) + lVar5;
    *(ulong *)(param_1 + lVar3 * 8) = *(long *)(param_1 + lVar3 * 8) - (uVar1 & 0xffffffffffff0000);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006570
 */

void recovered_10006570(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 4;
  do {
    recovered_10006700(param_1,param_2,param_3);
    lVar1 = lVar1 + -1;
    param_2 = param_2 + 0x80;
    param_1 = param_1 + 0x80;
  } while (lVar1 != 0);
  return;
}


#define auStack_4b0 (*(undefined1 (*)[1200])(pf_stack_frame + 16))
#define auStack_430 (*(undefined1 (*)[1072])(pf_stack_frame + 144))
#define auStack_3b0 (*(undefined1 (*)[944])(pf_stack_frame + 272))
#define auStack_330 (*(undefined1 (*)[816])(pf_stack_frame + 400))
#define auStack_2b0 (*(undefined1 (*)[688])(pf_stack_frame + 528))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 656))
#define auStack_1b0 (*(undefined1 (*)[432])(pf_stack_frame + 784))
#define auStack_130 (*(undefined1 (*)[304])(pf_stack_frame + 912))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 1040))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065bc
 */

void recovered_100065bc(long param_1,long param_2)

{
  unsigned char pf_stack_frame[1248] __attribute__((aligned(16))) = {0};


  recovered_10006740((long)auStack_b0,param_1 + 0x80,param_1);
  recovered_10006740((long)auStack_2b0,param_2 + 0x80,param_2);
  recovered_10006440((long)auStack_b0,(long)auStack_b0,(long)auStack_2b0);
  recovered_10006768((long)auStack_130,param_1,param_1 + 0x80);
  recovered_10006768((long)auStack_2b0,param_2,param_2 + 0x80);
  recovered_10006440((long)auStack_130,(long)auStack_130,(long)auStack_2b0);
  recovered_10006440((long)auStack_1b0,param_1 + 0x180,param_2 + 0x180);
  recovered_10006440((long)auStack_1b0,(long)auStack_1b0,((uintptr_t)pf_module_state + 0x524U));
  recovered_10006440((long)auStack_230,param_1 + 0x100,param_2 + 0x100);
  recovered_10006768((long)auStack_230,(long)auStack_230,(long)auStack_230);
  recovered_10006740((long)auStack_330,(long)auStack_130,(long)auStack_b0);
  recovered_10006740((long)auStack_3b0,(long)auStack_230,(long)auStack_1b0);
  recovered_10006768((long)auStack_430,(long)auStack_230,(long)auStack_1b0);
  recovered_10006768((long)auStack_4b0,(long)auStack_130,(long)auStack_b0);
  recovered_10006440(param_1,(long)auStack_330,(long)auStack_3b0);
  recovered_10006440(param_1 + 0x80,(long)auStack_4b0,(long)auStack_430);
  recovered_10006440(param_1 + 0x100,(long)auStack_430,(long)auStack_3b0);
  recovered_10006440(param_1 + 0x180,(long)auStack_330,(long)auStack_4b0);
  return;
}

#undef auStack_4b0
#undef auStack_430
#undef auStack_3b0
#undef auStack_330
#undef auStack_2b0
#undef auStack_230
#undef auStack_1b0
#undef auStack_130
#undef auStack_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

void recovered_10006700(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 8) {
    uVar2 = (*(ulong *)(param_2 + lVar1) ^ *(ulong *)(param_1 + lVar1)) & -param_3;
    *(ulong *)(param_1 + lVar1) = uVar2 ^ *(ulong *)(param_1 + lVar1);
    *(ulong *)(param_2 + lVar1) = *(ulong *)(param_2 + lVar1) ^ uVar2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

void recovered_10006740(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 8) {
    *(long *)(param_1 + lVar1) = *(long *)(param_2 + lVar1) - *(long *)(param_3 + lVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006768
 */

void recovered_10006768(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 8) {
    *(long *)(param_1 + lVar1) = *(long *)(param_3 + lVar1) + *(long *)(param_2 + lVar1);
  }
  return;
}


#define auStack_b0 (*(undefined8 (*)[22])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006790
 */

void recovered_10006790(long param_1,long param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;

  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 8) {
    *(undefined8 *)((long)auStack_b0 + lVar1) = *(undefined8 *)(param_2 + lVar1);
  }
  iVar2 = 0xfd;
  do {
    recovered_10006960((long)auStack_b0,(long)auStack_b0);
    if (iVar2 != 2 && iVar2 != 4) {
      recovered_10006440((long)auStack_b0,(long)auStack_b0,param_2);
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 8) {
    *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)((long)auStack_b0 + lVar1);
  }
  return;
}

#undef auStack_b0

#define alStack_160 (*(long (*)[44])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000682c
 */

void recovered_1000682c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;

  for (lVar2 = 0; lVar2 != 0x80; lVar2 = lVar2 + 8) {
    *(undefined8 *)((long)alStack_160 + lVar2) = *(undefined8 *)(param_2 + lVar2);
  }
  recovered_10006510((long)alStack_160);
  recovered_10006510((long)alStack_160);
  recovered_10006510((long)alStack_160);
  for (iVar5 = 0; iVar5 != 2; iVar5 = iVar5 + 1) {
    uVar3 = alStack_160[0] - 0xffed;
    alStack_160[0x10] = uVar3;
    for (lVar2 = 0; lVar2 != 0x70; lVar2 = lVar2 + 8) {
      uVar4 = uVar3 & 0xffff;
      uVar3 = (*(long *)((long)alStack_160 + lVar2 + 8) + ((long)(uVar3 << 0x2f) >> 0x3f)) - 0xffff;
      *(ulong *)((long)alStack_160 + lVar2 + 0x80) = uVar4;
      *(ulong *)((long)alStack_160 + lVar2 + 0x88) = uVar3;
    }
    alStack_160[0x1f] = alStack_160[0xf] + ((alStack_160[0x1e] << 0x2f) >> 0x3f) + -0x7fff;
    alStack_160[0x1e] = alStack_160[0x1e] & 0xffff;
    recovered_10006700((long)alStack_160,(long)(alStack_160 + 0x10),
                       (ulong)((uint)alStack_160[0x1f] >> 0x10 ^ 0xffffffff) & 1);
  }
  lVar2 = param_1 + 1;
  for (lVar1 = 0; lVar1 != 0x80; lVar1 = lVar1 + 8) {
    *(short *)(lVar2 + -1) = (short)*(undefined8 *)((long)alStack_160 + lVar1);
    lVar2 = lVar2 + 2;
  }
  return;
}

#undef alStack_160

#define alStack_118 (*(long (*)[35])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006960
 */

void recovered_10006960(long param_1,long param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;

  for (lVar3 = 0; lVar3 != 0xf8; lVar3 = lVar3 + 8) {
    *(undefined8 *)((long)alStack_118 + lVar3) = 0;
  }
  plVar4 = alStack_118;
  for (lVar3 = 0; lVar3 != 0x10; lVar3 = lVar3 + 1) {
    lVar6 = *(long *)(param_2 + lVar3 * 8);
    for (lVar5 = 0; lVar5 != 0x80; lVar5 = lVar5 + 8) {
      *(long *)((long)plVar4 + lVar5) =
           *(long *)((long)plVar4 + lVar5) + *(long *)(param_2 + lVar5) * lVar6;
    }
    plVar4 = plVar4 + 1;
  }
  for (lVar3 = 0; lVar3 != 0x78; lVar3 = lVar3 + 8) {
    *(long *)((long)alStack_118 + lVar3) =
         *(long *)((long)alStack_118 + lVar3) + *(long *)((long)alStack_118 + lVar3 + 0x80) * 0x26;
  }
  for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 8) {
    *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)((long)alStack_118 + lVar3);
  }
  recovered_10006510(param_1);
  for (lVar3 = 0; lVar3 != 0x10; lVar3 = lVar3 + 1) {
    uVar1 = *(long *)(param_1 + lVar3 * 8) + 0x10000;
    *(ulong *)(param_1 + lVar3 * 8) = uVar1;
    lVar6 = ((long)uVar1 >> 0x10) + -1;
    lVar5 = lVar6 * 0x25;
    if (lVar3 != 0xf) {
      lVar5 = 0;
    }
    lVar2 = 0;
    if (lVar3 != 0xf) {
      lVar2 = lVar3 + 1;
    }
    *(long *)(param_1 + lVar2 * 8) = lVar6 + *(long *)(param_1 + lVar2 * 8) + lVar5;
    *(ulong *)(param_1 + lVar3 * 8) = *(long *)(param_1 + lVar3 * 8) - (uVar1 & 0xffffffffffff0000);
  }
  return;
}

#undef alStack_118

#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006968
 */

void recovered_10006968(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_10006990(param_1,(undefined1 *)&local_14,4);
  return;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006990
 */

void recovered_10006990(long *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (param_3 <= (int)param_1[1] - uVar1) {
      if (param_3 != 0) {
        recovered_100012ac((undefined1 *)(*param_1 + (ulong)uVar1),param_2,(ulong)param_3);
        uVar1 = *(uint *)((long)param_1 + 0xc);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1 + param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


#undef DAT_1000c5e8
#define DAT_1000c5e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a4U)))
#define aiStack_190 (*(int (*)[100])(pf_stack_frame + 16))
#define aiStack_16c (*(int (*)[91])(pf_stack_frame + 52))
#define auStack_158 (*(uint (*)[86])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069ec
 */

void recovered_100069ec(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[448] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;

  for (lVar12 = 0; lVar12 != 0x10; lVar12 = lVar12 + 1) {
    uVar3 = recovered_10005760(param_2);
    auStack_158[lVar12 + 2] = uVar3;
    param_2 = param_2 + 1;
  }
  for (lVar12 = 0x40; lVar12 != 0x100; lVar12 = lVar12 + 4) {
    uVar3 = *(uint *)((long)aiStack_190 + lVar12 + 4);
    uVar2 = *(uint *)((long)auStack_158 + lVar12);
    *(uint *)((long)auStack_158 + lVar12 + 8) =
         ((uVar3 >> 7 | uVar3 << 0x19) ^ (uVar3 >> 0x12 | uVar3 << 0xe) ^ uVar3 >> 3) +
         *(int *)((long)aiStack_190 + lVar12) + *(int *)((long)aiStack_16c + lVar12) +
         ((uVar2 >> 0x11 | uVar2 << 0xf) ^ (uVar2 >> 0x13 | uVar2 << 0xd) ^ uVar2 >> 10);
  }
  uVar2 = *param_1;
  uVar11 = param_1[1];
  uVar8 = param_1[2];
  uVar4 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  uVar10 = param_1[6];
  uVar5 = param_1[7];
  for (lVar12 = 0; uVar9 = uVar10, uVar10 = uVar6, uVar6 = uVar3, uVar7 = uVar8, uVar8 = uVar11,
      uVar11 = uVar2, lVar12 != 0x100; lVar12 = lVar12 + 4) {
    iVar1 = (uVar6 & uVar10 | uVar9 & (uVar6 ^ 0xffffffff)) + uVar5 +
            ((uVar6 >> 6 | uVar6 << 0x1a) ^ (uVar6 >> 0xb | uVar6 << 0x15) ^
            (uVar6 >> 0x19 | uVar6 << 7)) +
            *(int *)((long)&DAT_1000c5e8 + lVar12) + *(int *)((long)auStack_158 + lVar12 + 8);
    uVar3 = iVar1 + uVar4;
    uVar2 = ((uVar11 >> 2 | uVar11 << 0x1e) ^ (uVar11 >> 0xd | uVar11 << 0x13) ^
            (uVar11 >> 0x16 | uVar11 << 10)) + (uVar11 & (uVar8 ^ uVar7) ^ uVar8 & uVar7) + iVar1;
    uVar4 = uVar7;
    uVar5 = uVar9;
  }
  *param_1 = uVar11 + *param_1;
  param_1[1] = uVar8 + param_1[1];
  param_1[2] = uVar7 + param_1[2];
  param_1[3] = uVar4 + param_1[3];
  param_1[4] = uVar6 + param_1[4];
  param_1[5] = uVar10 + param_1[5];
  param_1[6] = uVar9 + param_1[6];
  param_1[7] = uVar5 + param_1[7];
  return;
}

#undef DAT_1000c5e8
#undef aiStack_190
#undef aiStack_16c
#undef auStack_158

#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * recovered_10006b90(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong *puVar2;

  bVar1 = recovered_1000532c(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
    puVar2 = (ulong *)(*(code *)(ulong)_DAT_8201084c)(param_1);
    if (puVar2 != (ulong *)0x0) {
      recovered_10001498(puVar2,0,param_1);
    }
  }
  else {
    puVar2 = (ulong *)0x0;
  }
  return puVar2;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_1000c0c8
#define DAT_1000c0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_100138d4
#define DAT_100138d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7890U)))
#undef DAT_100138d8
#define DAT_100138d8 (*(uint *)(((uintptr_t)pf_module_state + 0x7894U)))
#undef DAT_100138e4
#define DAT_100138e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_100138e8
#define DAT_100138e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a4U)))
#undef _DAT_100138e8
#define _DAT_100138e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a4U)))
#define uStack_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006bf0(undefined4 param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_10005c4c((undefined1 *)&uStack_24,4);
  uVar1 = (uStack_24 & 0xff00ff00) >> 8 | (uStack_24 & 0xff00ff) << 8;
  DAT_100138d8 = uVar1 >> 0x10 | uVar1 << 0x10;
  DAT_100138d4 = 1;
  _DAT_100138e8 = DAT_1000c0c8;
  DAT_100138e4 = param_1;
  recovered_10006d08(1,0);
  return;
}

#undef DAT_1000c0c8
#undef DAT_100138d4
#undef DAT_100138d8
#undef DAT_100138e4
#undef DAT_100138e8
#undef _DAT_100138e8
#undef uStack_24

#undef DAT_1000c6e8
#define DAT_1000c6e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a4U)))
#undef DAT_1000c6ee
#define DAT_1000c6ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aaU)))
#undef DAT_1001385f
#define DAT_1001385f (*(char *)(((uintptr_t)pf_module_state + 0x781bU)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013864
#define DAT_10013864 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7820U)))
#undef DAT_10013868
#define DAT_10013868 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7824U)))
#undef str_1000cfa5
#define str_1000cfa5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf61U)))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 20))
#define abStack_68 (*(byte (*)[104])(pf_stack_frame + 40))
#define abStack_54 (*(byte (*)[84])(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c44
 */

void recovered_10006c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};


  DAT_10013860 = (uint)param_1;
  DAT_10013864 = (undefined4)param_2;
  DAT_10013868 = (undefined4)param_3;
  DAT_1001385f = DAT_10013860 != 0;
  recovered_100050c0(param_1,abStack_54);
  recovered_100050c0(param_2,abStack_68);
  recovered_100050c0(param_3,abStack_7c);
  recovered_100040ec(str_1000cfa5,abStack_54,abStack_68,abStack_7c);
  if (DAT_1001385f == '\x01') {
    recovered_10007214(1,&DAT_1000c6e8,DAT_10013860,&DAT_1000c6ee);
  }
  return;
}

#undef DAT_1000c6e8
#undef DAT_1000c6ee
#undef DAT_1001385f
#undef DAT_10013860
#undef DAT_10013864
#undef DAT_10013868
#undef str_1000cfa5
#undef abStack_7c
#undef abStack_68
#undef abStack_54

#undef DAT_1000c0d8
#define DAT_1000c0d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef DAT_1000c6e8
#define DAT_1000c6e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a4U)))
#undef DAT_10013858
#define DAT_10013858 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_100138d8
#define DAT_100138d8 (*(uint *)(((uintptr_t)pf_module_state + 0x7894U)))
#undef DAT_100138dc
#define DAT_100138dc (*(uint *)(((uintptr_t)pf_module_state + 0x7898U)))
#undef DAT_100138e0
#define DAT_100138e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x789cU)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014cb0
#define DAT_10014cb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8c6cU)))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(ushort *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#define uStack_1d5 (*(undefined1 *)(pf_stack_frame + 27))
#define auStack_1c4 (*(undefined1 (*)[452])(pf_stack_frame + 44))
#define uStack_f4 (*(undefined4 *)(pf_stack_frame + 252))
#define auStack_f0 (*(undefined1 (*)[240])(pf_stack_frame + 256))
#define uStack_ec (*(undefined2 *)(pf_stack_frame + 260))
#define auStack_ea (*(undefined1 (*)[234])(pf_stack_frame + 262))
#define uStack_e4 (*(undefined2 *)(pf_stack_frame + 268))
#define uStack_e2 (*(undefined1 *)(pf_stack_frame + 270))
#define uStack_e1 (*(undefined1 *)(pf_stack_frame + 271))
#define uStack_e0 (*(undefined1 *)(pf_stack_frame + 272))
#define uStack_df (*(undefined1 *)(pf_stack_frame + 273))
#define uStack_de (*(undefined2 *)(pf_stack_frame + 274))
#define uStack_dc (*(uint *)(pf_stack_frame + 276))
#define local_1e0 (*(undefined2 *)(pf_stack_frame + 16))
#define local_1de (*(undefined1 *)(pf_stack_frame + 18))
#define local_1dc (*(uint *)(pf_stack_frame + 20))
#define local_1d6 (*(undefined1 *)(pf_stack_frame + 26))
#define local_1d4 (*(undefined1 *)(pf_stack_frame + 28))
#define local_1d3 (*(undefined1 *)(pf_stack_frame + 29))
#define local_1d2 (*(undefined1 *)(pf_stack_frame + 30))
#define local_1d1 (*(undefined1 (*)[465])(pf_stack_frame + 31))
#define stack0xffffffffffffff13 (*(uint16_t *)(pf_stack_frame + 259))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006d08(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[528] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;

  recovered_10001498((ulong *)&local_1e0,0,400);
  local_1e0 = 0x101;
  local_1de = 6;
  uVar3 = (DAT_100138d8 & 0xff00ff00) >> 8 | (DAT_100138d8 & 0xff00ff) << 8;
  local_1dc = uVar3 >> 0x10 | uVar3 << 0x10;
  if (param_2 == 0) {
    uVar3 = 0;
    puVar5 = &uStack_1d5;
    local_1d6 = 0x80;
  }
  else {
    puVar5 = local_1d1;
    local_1d4 = (undefined1)(DAT_10013860 >> 0x18);
    local_1d3 = (undefined1)(DAT_10013860 >> 0x10);
    local_1d2 = (undefined1)(DAT_10013860 >> 8);
    uVar3 = DAT_10013860;
  }
  *puVar5 = (char)uVar3;
  recovered_100012ac(auStack_1c4,&DAT_10013858,6);
  uStack_f4 = (undefined4)DAT_1000c0d8;
  PF_PART2(auStack_f0, 0) = 0x135;
  auStack_f0[2] = (undefined1)param_1;
  stack0xffffffffffffff13 = 0x73d;
  PF_PART1(uStack_ec, 1) = 1;
  recovered_100012ac(auStack_ea,&DAT_10013858,6);
  lVar6 = 0xc;
  if ((param_1 == 3) && ((param_2 & 1) == 0)) {
    uStack_e4 = 0x432;
    uStack_e2 = (undefined1)((uint)DAT_100138e0 >> 0x18);
    uStack_e1 = (undefined1)((uint)DAT_100138e0 >> 0x10);
    uStack_e0 = (undefined1)((uint)DAT_100138e0 >> 8);
    uStack_df = (undefined1)DAT_100138e0;
    uStack_de = 0x436;
    uVar3 = (DAT_100138dc & 0xff00ff00) >> 8 | (DAT_100138dc & 0xff00ff) << 8;
    uStack_dc = uVar3 >> 0x10 | uVar3 << 0x10;
    lVar6 = 0x18;
  }
  *(int *)(auStack_f0 + lVar6) = (int)DAT_1000c0e0;
  *(undefined2 *)(auStack_f0 + lVar6 + 4) = 0x3633;
  uVar7 = lVar6 + 6;
  uVar4 = recovered_10001788(((uintptr_t)pf_module_state + 0x8c6cU));
  if (uVar4 - 1 < 0x3f) {
    auStack_ea[lVar6] = 0xc;
    uVar3 = (int)lVar6 + 8;
    auStack_ea[lVar6 + 1] = (char)uVar4;
    recovered_100012ac(auStack_f0 + uVar3,&DAT_10014cb0,uVar4);
    uVar7 = (ulong)(uVar3 + (int)uVar4);
  }
  auStack_f0[uVar7] = 0xff;
  uVar3 = DAT_10013860;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  uVar2 = 300;
  if (0x3a < (uint)uVar7) {
    uVar2 = (uint)uVar7 + 0xf1;
  }
  uVar1 = uVar2 + 8;
  recovered_10006f78(&DAT_1000c6e8,0x800);
  recovered_10006fb8((ulong)(uVar2 + 0x1c & 0xffff),0x11,(ulong)uVar3,0xffffffff);
  _DAT_10014126 = (undefined4)DAT_1000c0e8;
  uRam000000001001412a = (undefined1)(uVar1 >> 8);
  uRam000000001001412b = (undefined1)uVar1;
  uRam000000001001412c = 0;
  recovered_100012ac((undefined1 *)((uintptr_t)pf_module_state + 0x80eaU),(undefined1 *)&local_1e0,(ulong)uVar2 & 0xffff);
  uVar3 = recovered_1000707c((ulong)uVar3,0xffffffff,0x11,((uintptr_t)pf_module_state + 0x80e2U),uVar1 & 0xffff);
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
  }
  uRam000000001001412c = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  recovered_1000710c((ulong)((uVar2 & 0xffff) + 0x2a));
  return;
}

#undef DAT_1000c0d8
#undef DAT_1000c0e0
#undef DAT_1000c0e8
#undef DAT_1000c6e8
#undef DAT_10013858
#undef DAT_10013860
#undef DAT_100138d8
#undef DAT_100138dc
#undef DAT_100138e0
#undef DAT_10014126
#undef DAT_10014cb0
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef _DAT_10014126
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uStack_1d5
#undef auStack_1c4
#undef uStack_f4
#undef auStack_f0
#undef uStack_ec
#undef auStack_ea
#undef uStack_e4
#undef uStack_e2
#undef uStack_e1
#undef uStack_e0
#undef uStack_df
#undef uStack_de
#undef uStack_dc
#undef local_1e0
#undef local_1de
#undef local_1dc
#undef local_1d6
#undef local_1d4
#undef local_1d3
#undef local_1d2
#undef local_1d1
#undef stack0xffffffffffffff13

#undef DAT_10013858
#define DAT_10013858 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef UNK_10014110
#define UNK_10014110 (*(ushort *)(((uintptr_t)pf_module_state + 0x80ccU)))
#undef uRam0000000010014110
#define uRam0000000010014110 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f78
 */

void recovered_10006f78(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100012ac(&DAT_10014104,param_1,6);
  recovered_100012ac((undefined1 *)((uintptr_t)pf_module_state + 0x80c6U),&DAT_10013858,6);
  uRam0000000010014110 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  return;
}

#undef DAT_10013858
#undef DAT_10014104
#undef UNK_10014110
#undef uRam0000000010014110

#undef DAT_10014112
#define DAT_10014112 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80ceU)))
#undef DAT_10014116
#define DAT_10014116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d2U)))
#undef DAT_10014118
#define DAT_10014118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d4U)))
#undef DAT_1001411a
#define DAT_1001411a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d6U)))
#undef UNK_1001386c
#define UNK_1001386c (*(ushort *)(((uintptr_t)pf_module_state + 0x7828U)))
#undef UNK_1001411b
#define UNK_1001411b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d7U)))
#undef UNK_1001411c
#define UNK_1001411c (*(ushort *)(((uintptr_t)pf_module_state + 0x80d8U)))
#undef UNK_1001411e
#define UNK_1001411e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80daU)))
#undef UNK_1001411f
#define UNK_1001411f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80dbU)))
#undef UNK_10014120
#define UNK_10014120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80dcU)))
#undef UNK_10014121
#define UNK_10014121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ddU)))
#undef UNK_10014122
#define UNK_10014122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80deU)))
#undef UNK_10014123
#define UNK_10014123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80dfU)))
#undef UNK_10014124
#define UNK_10014124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e0U)))
#undef UNK_10014125
#define UNK_10014125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e1U)))
#undef _DAT_10014118
#define _DAT_10014118 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80d4U)))
#undef uRam000000001001386c
#define uRam000000001001386c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7828U)))
#undef uRam000000001001411b
#define uRam000000001001411b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d7U)))
#undef uRam000000001001411c
#define uRam000000001001411c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80d8U)))
#undef uRam000000001001411e
#define uRam000000001001411e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80daU)))
#undef uRam000000001001411f
#define uRam000000001001411f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80dbU)))
#undef uRam0000000010014120
#define uRam0000000010014120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80dcU)))
#undef uRam0000000010014121
#define uRam0000000010014121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ddU)))
#undef uRam0000000010014122
#define uRam0000000010014122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80deU)))
#undef uRam0000000010014123
#define uRam0000000010014123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80dfU)))
#undef uRam0000000010014124
#define uRam0000000010014124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e0U)))
#undef uRam0000000010014125
#define uRam0000000010014125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fb8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006fb8(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  recovered_10001498((ulong *)&DAT_10014112,0,0x14);
  PF_PART1(DAT_10014112, 0) = 0x45;
  PF_PART1(DAT_10014112, 2) = (undefined1)((ulong)param_1 >> 8);
  PF_PART1(DAT_10014112, 3) = (undefined1)param_1;
  iVar1 = uRam000000001001386c + 1;
  uRam000000001001386c = (ushort)iVar1;
  PF_PART1(DAT_10014116, 0) = (undefined1)((uint)iVar1 >> 8);
  PF_PART1(DAT_10014116, 1) = (undefined1)iVar1;
  _DAT_10014118 = 0x40;
  DAT_1001411a = 0x40;
  uRam000000001001411e = (undefined1)((ulong)param_3 >> 0x18);
  uRam000000001001411f = (undefined1)((ulong)param_3 >> 0x10);
  uRam0000000010014120 = (undefined1)((ulong)param_3 >> 8);
  uRam0000000010014121 = (undefined1)param_3;
  uRam0000000010014122 = (undefined1)((ulong)param_4 >> 0x18);
  uRam0000000010014123 = (undefined1)((ulong)param_4 >> 0x10);
  uRam0000000010014124 = (undefined1)((ulong)param_4 >> 8);
  uRam0000000010014125 = (undefined1)param_4;
  uRam000000001001411b = param_2;
  uVar2 = recovered_1000719c(((uintptr_t)pf_module_state + 0x80ceU),0x14);
  uRam000000001001411c = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
  return;
}

#undef DAT_10014112
#undef DAT_10014116
#undef DAT_10014118
#undef DAT_1001411a
#undef UNK_1001386c
#undef UNK_1001411b
#undef UNK_1001411c
#undef UNK_1001411e
#undef UNK_1001411f
#undef UNK_10014120
#undef UNK_10014121
#undef UNK_10014122
#undef UNK_10014123
#undef UNK_10014124
#undef UNK_10014125
#undef _DAT_10014118
#undef uRam000000001001386c
#undef uRam000000001001411b
#undef uRam000000001001411c
#undef uRam000000001001411e
#undef uRam000000001001411f
#undef uRam0000000010014120
#undef uRam0000000010014121
#undef uRam0000000010014122
#undef uRam0000000010014123
#undef uRam0000000010014124
#undef uRam0000000010014125

#define local_2c (*(undefined1 *)(pf_stack_frame + 20))
#define local_2b (*(undefined1 *)(pf_stack_frame + 21))
#define local_2a (*(undefined1 *)(pf_stack_frame + 22))
#define local_29 (*(undefined1 *)(pf_stack_frame + 23))
#define local_28 (*(undefined1 *)(pf_stack_frame + 24))
#define local_27 (*(undefined1 *)(pf_stack_frame + 25))
#define local_26 (*(undefined1 *)(pf_stack_frame + 26))
#define local_25 (*(undefined1 *)(pf_stack_frame + 27))
#define local_24 (*(undefined1 *)(pf_stack_frame + 28))
#define local_23 (*(undefined1 *)(pf_stack_frame + 29))
#define local_22 (*(undefined1 *)(pf_stack_frame + 30))
#define local_21 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000707c
 */

uint recovered_1000707c(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4,
                       uint param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_2c = (undefined1)((ulong)param_1 >> 0x18);
  local_2b = (undefined1)((ulong)param_1 >> 0x10);
  local_2a = (undefined1)((ulong)param_1 >> 8);
  local_29 = (undefined1)param_1;
  local_28 = (undefined1)((ulong)param_2 >> 0x18);
  local_27 = (undefined1)((ulong)param_2 >> 0x10);
  local_26 = (undefined1)((ulong)param_2 >> 8);
  local_25 = (undefined1)param_2;
  local_24 = 0;
  local_22 = (undefined1)(param_5 >> 8);
  local_21 = (undefined1)param_5;
  local_23 = param_3;
  uVar2 = recovered_100071dc(0,(long)&local_2c,0xc);
  uVar2 = recovered_100071dc(uVar2,param_4,param_5);
  while (uVar1 = (uint)uVar2, 0xffff < uVar1) {
    uVar2 = (ulong)((uVar1 >> 0x10) + (uVar1 & 0xffff));
  }
  return (uVar1 ^ 0xffffffff) & 0xffff;
}

#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22
#undef local_21

#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000710c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_1000710c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((uint)param_1 < 0x3c) {
    recovered_10001498((ulong *)(&DAT_10014104 + (param_1 & 0xffffffff)),0,
                       (ulong)(0x3c - (uint)param_1));
    param_1 = 0x3c;
  }
  bVar1 = recovered_1000532c(300);
  uVar2 = (ulong)bVar1;
  if (bVar1) {
    if (_DAT_8201092c == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,param_1);
      if ((int)uVar2 != 0) {
        DAT_10013900 = DAT_10013900 + 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef DAT_10013900
#undef DAT_10014104
#undef DAT_8201092c
#undef _DAT_8201092c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000719c
 */

uint recovered_1000719c(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = recovered_100071dc(0,param_1,param_2);
  while (uVar1 = (uint)uVar2, 0xffff < uVar1) {
    uVar2 = (ulong)((uVar1 >> 0x10) + (uVar1 & 0xffff));
  }
  return (uVar1 ^ 0xffffffff) & 0xffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071bc
 */

uint recovered_100071bc(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; 0xffff < param_1; param_1 = (param_1 >> 0x10) + (param_1 & 0xffff)) {
  }
  return (param_1 ^ 0xffffffff) & 0xffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071dc
 */

ulong recovered_100071dc(ulong param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 + 1 < param_3; uVar1 = uVar1 + 2) {
    param_1 = (ulong)((int)param_1 +
                     ((uint)(*(ushort *)(param_2 + (ulong)uVar1) >> 8) |
                     (*(ushort *)(param_2 + (ulong)uVar1) & 0xff00ff) << 8));
  }
  if (uVar1 < param_3) {
    param_1 = (ulong)((int)param_1 + (uint)*(byte *)(param_2 + (ulong)uVar1) * 0x100);
  }
  return param_1;
}


#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xacU)))
#undef DAT_10013858
#define DAT_10013858 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7814U)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014112
#define DAT_10014112 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80ceU)))
#undef DAT_10014116
#define DAT_10014116 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80d2U)))
#undef DAT_10014118
#define DAT_10014118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d4U)))
#undef DAT_10014119
#define DAT_10014119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d5U)))
#undef DAT_1001411a
#define DAT_1001411a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80d6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_10014120
#define UNK_10014120 (*(uint *)(((uintptr_t)pf_module_state + 0x80dcU)))
#undef UNK_1001412a
#define UNK_1001412a (*(uint *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam0000000010014120
#define uRam0000000010014120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80dcU)))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007214
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10007214(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  recovered_10006f78(param_2,0x806);
  DAT_10014112 = (undefined4)DAT_1000c0f0;
  DAT_10014116 = 0x406;
  DAT_10014118 = (undefined1)((ulong)param_1 >> 8);
  DAT_10014119 = (undefined1)param_1;
  recovered_100012ac(&DAT_1001411a,&DAT_10013858,6);
  uVar1 = (DAT_10013860 & 0xff00ff00) >> 8 | (DAT_10013860 & 0xff00ff) << 8;
  uRam0000000010014120 = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_100012ac((undefined1 *)((uintptr_t)pf_module_state + 0x80e0U),param_4,6);
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uRam000000001001412a = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_10001498((ulong *)((uintptr_t)pf_module_state + 0x80eaU),0,0x12);
  bVar2 = recovered_1000532c(300);
  uVar3 = (ulong)bVar2;
  if (bVar2) {
    if (_DAT_8201092c == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c);
      if ((int)uVar3 != 0) {
        DAT_10013900 = DAT_10013900 + 1;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef DAT_1000c0f0
#undef DAT_10013858
#undef DAT_10013860
#undef DAT_10013900
#undef DAT_10014104
#undef DAT_10014112
#undef DAT_10014116
#undef DAT_10014118
#undef DAT_10014119
#undef DAT_1001411a
#undef DAT_8201092c
#undef UNK_10014120
#undef UNK_1001412a
#undef _DAT_8201092c
#undef uRam0000000010014120
#undef uRam000000001001412a

#undef DAT_10013870
#define DAT_10013870 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x782cU)))
#undef DAT_1001387a
#define DAT_1001387a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7836U)))
#undef DAT_100138d0
#define DAT_100138d0 (*(uint *)(((uintptr_t)pf_module_state + 0x788cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072ac
 */

/* WARNING: Removing unreachable block (ram,0x100012b4) */
/* WARNING: Removing unreachable block (ram,0x100012c8) */
/* WARNING: Removing unreachable block (ram,0x100012cc) */
/* WARNING: Removing unreachable block (ram,0x100012d4) */
/* WARNING: Removing unreachable block (ram,0x100012dc) */
/* WARNING: Removing unreachable block (ram,0x100012ec) */
/* WARNING: Removing unreachable block (ram,0x100012f4) */
/* WARNING: Removing unreachable block (ram,0x10001300) */
/* WARNING: Removing unreachable block (ram,0x10001334) */
/* WARNING: Removing unreachable block (ram,0x10001338) */
/* WARNING: Removing unreachable block (ram,0x10001344) */
/* WARNING: Removing unreachable block (ram,0x1000135c) */

void recovered_100072ac(int param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  long lVar3;

  lVar3 = 8;
  pcVar2 = &DAT_1001387a;
  while ((*pcVar2 != '\x01' || (*(int *)(pcVar2 + -10) != param_1))) {
    lVar3 = lVar3 + -1;
    pcVar2 = pcVar2 + 0xc;
    if (lVar3 == 0) {
      uVar1 = (ulong)DAT_100138d0;
      (&DAT_10013870)[uVar1 * 3] = param_1;
      recovered_100012ac((undefined1 *)(uVar1 * 0xc + ((uintptr_t)pf_module_state + 0x7830U)),param_2,6);
      (&DAT_1001387a)[(ulong)DAT_100138d0 * 0xc] = 1;
      DAT_100138d0 = DAT_100138d0 + 1 & 7;
      return;
    }
  }
  pcVar2 = pcVar2 + -6;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar2 = *param_2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return;
}

#undef DAT_10013870
#undef DAT_1001387a
#undef DAT_100138d0

#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_10010058
#define DAT_10010058 (*(int *)(((uintptr_t)pf_module_state + 0x4014U)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_1001390a
#define DAT_1001390a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78c6U)))
#undef DAT_1001391e
#define DAT_1001391e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78daU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_10014d20
#define DAT_10014d20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cdcU)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007344
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * recovered_10007344(ushort *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *extraout_x0 = 0;
  int *piVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  undefined1 uVar13;
  int iVar14;

  piVar11 = (int *)0x0;
  lVar9 = 0xc;
  piVar8 = &DAT_10014d20;
  do {
    if ((*(long *)(piVar8 + 10) != 0) && (*(long *)(piVar8 + 0x10) != 0)) {
      if (*piVar8 - 4U < 5) {
        if ((piVar11 == (int *)0x0) || (piVar8[0x1b] - piVar11[0x1b] < 0)) {
          piVar11 = piVar8;
        }
      }
      else if (*piVar8 == 0) goto LAB_100073d0;
    }
    lVar9 = lVar9 + -1;
    piVar8 = piVar8 + 0x1e;
  } while (lVar9 != 0);
  if (piVar11 == (int *)0x0) {
    bVar2 = *(byte *)((long)param_1 + 0xd);
    if ((bVar2 >> 2 & 1) != 0) {
      return param_1;
    }
    if ((bVar2 >> 4 & 1) == 0) {
      uVar6 = recovered_10005760((uint *)(param_1 + 2));
      uVar5 = 0;
      iVar14 = (bVar2 & 1) + (bVar2 >> 1 & 1) + uVar6;
      uVar13 = 0x14;
    }
    else {
      uVar5 = recovered_10005760((uint *)(param_1 + 4));
      iVar14 = 0;
      uVar13 = 4;
    }
    recovered_10006f78(&DAT_1001390a,0x800);
    uVar12 = (ulong)DAT_10013860;
    uVar6 = recovered_10005760((uint *)&DAT_1001391e);
    recovered_10006fb8(0x28,6,uVar12,(ulong)uVar6);
    recovered_10001498((ulong *)&DAT_10014126,0,0x14);
    _DAT_10014126 = param_1[1];
    DAT_10014128 = *param_1;
    uRam000000001001412a = (undefined1)(uVar5 >> 0x18);
    uRam000000001001412b = (undefined1)(uVar5 >> 0x10);
    uRam000000001001412c = (undefined1)(uVar5 >> 8);
    uRam000000001001412d = (undefined1)uVar5;
    uRam000000001001412e = (undefined1)((uint)iVar14 >> 0x18);
    uRam000000001001412f = (undefined1)((uint)iVar14 >> 0x10);
    uRam0000000010014130 = (undefined1)((uint)iVar14 >> 8);
    uRam0000000010014131 = (undefined1)iVar14;
    uRam0000000010014132 = 0x50;
    uVar12 = (ulong)DAT_10013860;
    uRam0000000010014133 = uVar13;
    uVar5 = recovered_10005760((uint *)&DAT_1001391e);
    uVar5 = recovered_1000707c(uVar12,(ulong)uVar5,6,((uintptr_t)pf_module_state + 0x80e2U),0x14);
    uRam0000000010014136 = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
    recovered_10001498((ulong *)&DAT_1001413a,0,6);
    bVar4 = recovered_1000532c(300);
    puVar7 = (ushort *)(ulong)bVar4;
    if (bVar4) {
      if (_DAT_8201092c == 0) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c);
        if ((int)puVar7 != 0) {
          DAT_10013900 = DAT_10013900 + 1;
          puVar7 = (ushort *)0x1;
        }
      }
    }
    return puVar7;
  }
  *piVar11 = 0;
  piVar11[0xd] = 0;
  piVar11[0x13] = 0;
  *(undefined1 *)(piVar11 + 0x19) = 0;
  piVar8 = piVar11;
LAB_100073d0:
  uVar6 = 0x218;
  for (uVar5 = 0x14; uVar5 < param_2; uVar5 = uVar5 + uVar10) {
    cVar1 = *(char *)((long)param_1 + (ulong)uVar5);
    if (cVar1 == '\x01') {
      uVar10 = 1;
    }
    else {
      if (cVar1 == '\0' || param_2 <= (uint)((ulong)uVar5 + 1)) break;
      bVar2 = *(byte *)((long)param_1 + (ulong)uVar5 + 1);
      uVar10 = (uint)bVar2;
      if (bVar2 < 2) break;
      if ((cVar1 == '\x02' && bVar2 == 4) && uVar5 + 4 <= param_2) {
        uVar3 = *(ushort *)((char *)((long)param_1 + (ulong)uVar5) + 2);
        uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      }
    }
  }
  if (0x5b3 < uVar6) {
    uVar6 = 0x5b4;
  }
  if (uVar6 < 0x101) {
    uVar6 = 0x100;
  }
  recovered_10001498((ulong *)(piVar8 + 2),0,6);
  recovered_100012ac((undefined1 *)(piVar8 + 2),&DAT_1001390a,6);
  iVar14 = DAT_10010058 + 1;
  piVar8[1] = DAT_10010058;
  DAT_10010058 = iVar14;
  uVar5 = recovered_10005760((uint *)&DAT_1001391e);
  piVar8[4] = uVar5;
  *(ushort *)(piVar8 + 5) = *param_1 >> 8 | *param_1 << 8;
  *(ushort *)((long)piVar8 + 0x16) = param_1[1] >> 8 | param_1[1] << 8;
  uVar5 = recovered_10005760((uint *)(param_1 + 2));
  piVar8[6] = uVar5 + 1;
  recovered_10005c4c((undefined1 *)&uStack_44,4);
  uVar5 = (uStack_44 & 0xff00ff00) >> 8 | (uStack_44 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  piVar8[7] = uVar5;
  piVar8[8] = (uint)(param_1[7] >> 8) | (param_1[7] & 0xff00ff) << 8;
  piVar8[9] = uVar6;
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0x14] = 0;
  *(undefined8 *)(piVar8 + 0x15) = DAT_1000c0f8;
  piVar8[0x17] = 800;
  piVar8[0x1b] = param_3;
  piVar8[0x1c] = param_3;
  *piVar8 = 1;
  piVar8[0x1a] = 0;
  recovered_100076b0((long)piVar8,0x12,(ulong)uVar5,0,0);
  piVar8[0x18] = piVar8[0x17] + param_3;
  *(undefined1 *)(piVar8 + 0x19) = 1;
  recovered_100072ac(piVar8[4],(char *)(piVar8 + 2));
  return extraout_x0;
}

#undef DAT_1000c0f8
#undef DAT_10010058
#undef DAT_10013860
#undef DAT_10013900
#undef DAT_1001390a
#undef DAT_1001391e
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_10014d20
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014136
#undef uStack_44

#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_1001390a
#define DAT_1001390a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78c6U)))
#undef DAT_1001391e
#define DAT_1001391e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78daU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007574
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * recovered_10007574(undefined2 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;

  bVar1 = *(byte *)((long)param_1 + 0xd);
  if ((bVar1 >> 2 & 1) != 0) {
    return param_1;
  }
  if ((bVar1 >> 4 & 1) == 0) {
    uVar3 = recovered_10005760((uint *)(param_1 + 2));
    uVar4 = 0;
    iVar8 = (bVar1 & 1) + param_2 + (bVar1 >> 1 & 1) + uVar3;
    uVar7 = 0x14;
  }
  else {
    uVar4 = recovered_10005760((uint *)(param_1 + 4));
    iVar8 = 0;
    uVar7 = 4;
  }
  recovered_10006f78(&DAT_1001390a,0x800);
  uVar6 = (ulong)DAT_10013860;
  uVar3 = recovered_10005760((uint *)&DAT_1001391e);
  recovered_10006fb8(0x28,6,uVar6,(ulong)uVar3);
  recovered_10001498((ulong *)&DAT_10014126,0,0x14);
  _DAT_10014126 = param_1[1];
  DAT_10014128 = *param_1;
  uRam000000001001412a = (undefined1)(uVar4 >> 0x18);
  uRam000000001001412b = (undefined1)(uVar4 >> 0x10);
  uRam000000001001412c = (undefined1)(uVar4 >> 8);
  uRam000000001001412d = (undefined1)uVar4;
  uRam000000001001412e = (undefined1)((uint)iVar8 >> 0x18);
  uRam000000001001412f = (undefined1)((uint)iVar8 >> 0x10);
  uRam0000000010014130 = (undefined1)((uint)iVar8 >> 8);
  uRam0000000010014131 = (undefined1)iVar8;
  uRam0000000010014132 = 0x50;
  uVar6 = (ulong)DAT_10013860;
  uRam0000000010014133 = uVar7;
  uVar4 = recovered_10005760((uint *)&DAT_1001391e);
  uVar4 = recovered_1000707c(uVar6,(ulong)uVar4,6,((uintptr_t)pf_module_state + 0x80e2U),0x14);
  uRam0000000010014136 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
  recovered_10001498((ulong *)&DAT_1001413a,0,6);
  bVar2 = recovered_1000532c(300);
  puVar5 = (undefined2 *)(ulong)bVar2;
  if (bVar2) {
    if (_DAT_8201092c == 0) {
      puVar5 = (undefined2 *)0x0;
    }
    else {
      puVar5 = (undefined2 *)(*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c);
      if ((int)puVar5 != 0) {
        DAT_10013900 = DAT_10013900 + 1;
        puVar5 = (undefined2 *)0x1;
      }
    }
  }
  return puVar5;
}

#undef DAT_10013860
#undef DAT_10013900
#undef DAT_1001390a
#undef DAT_1001391e
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014136

#undef DAT_1000c100
#define DAT_1000c100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014134
#define UNK_10014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef UNK_10014135
#define UNK_10014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014134
#define uRam0000000010014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef uRam0000000010014135
#define uRam0000000010014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint128 recovered_100076b0(long param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint128 auVar4;
  uint128 auVar5;
  bool bVar6;
  uint uVar7;
  ulong extraout_x1;
  uint uVar8;
  ulong uVar9;
  ulong unaff_x30;
  uint128 auVar10;

  uVar7 = 0x14;
  if ((param_2 & 2) != 0) {
    uVar7 = 0x18;
  }
  uVar2 = uVar7 + param_5;
  uVar1 = uVar2 + 0x22;
  uVar9 = (ulong)uVar1;
  if (0x800 < uVar1) {
    PF_PART8(auVar4, 8) = 0;
    PF_PART8(auVar4, 0) = unaff_x30;
    return auVar4 << 0x40;
  }
  uVar8 = 0x4000 - *(int *)(param_1 + 0x34);
  if (0xfffe < uVar8) {
    uVar8 = 0xffff;
  }
  recovered_10006f78((undefined1 *)(param_1 + 8),0x800);
  recovered_10006fb8((ulong)(uVar2 + 0x14 & 0xffff),6,(ulong)DAT_10013860,
                     (ulong)*(uint *)(param_1 + 0x10));
  recovered_10001498((ulong *)&DAT_10014126,0,(ulong)uVar7);
  _DAT_10014126 = *(ushort *)(param_1 + 0x16) >> 8 | *(ushort *)(param_1 + 0x16) << 8;
  PF_PART1(DAT_10014128, 0) = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x14) >> 8);
  PF_PART1(DAT_10014128, 1) = (undefined1)*(undefined2 *)(param_1 + 0x14);
  uRam000000001001412a = (undefined1)((ulong)param_3 >> 0x18);
  uRam000000001001412b = (undefined1)((ulong)param_3 >> 0x10);
  uRam000000001001412c = (undefined1)((ulong)param_3 >> 8);
  uRam000000001001412d = (undefined1)param_3;
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uRam000000001001412e = (undefined1)((uint)uVar3 >> 0x18);
  uRam000000001001412f = (undefined1)((uint)uVar3 >> 0x10);
  uRam0000000010014130 = (undefined1)((uint)uVar3 >> 8);
  uRam0000000010014131 = (undefined1)uVar3;
  uRam0000000010014132 = (undefined1)(uVar7 << 2);
  uRam0000000010014133 = (undefined1)param_2;
  uRam0000000010014134 = (undefined1)(uVar8 >> 8);
  uRam0000000010014135 = (undefined1)uVar8;
  if ((param_2 >> 1 & 1) != 0) {
    DAT_1001413a = (undefined4)DAT_1000c100;
  }
  if (param_5 != 0) {
    recovered_10007a64(*(undefined1 **)(param_1 + 0x40),0x8000,param_4,&DAT_10014126 + uVar7,param_5
                      );
  }
  uVar7 = recovered_1000707c((ulong)DAT_10013860,(ulong)*(uint *)(param_1 + 0x10),6,((uintptr_t)pf_module_state + 0x80e2U),
                             uVar2 & 0xffff);
  uRam0000000010014136 = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
  *(uint *)(param_1 + 0x38) = uVar8;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  if (uVar1 < 0x3c) {
    recovered_10001498((ulong *)(&DAT_10014104 + uVar9),0,(ulong)(0x3c - uVar1));
    uVar9 = 0x3c;
  }
  bVar6 = recovered_1000532c(300);
  PF_PART7(auVar10, 1) = 0;
  ((uint8_t *)(void *)&auVar10)[0] = bVar6;
  PF_PART8(auVar10, 8) = extraout_x1;
  if (bVar6) {
    if (_DAT_8201092c == 0) {
      PF_PART8(auVar5, 8) = 0;
      PF_PART8(auVar5, 0) = extraout_x1;
      auVar10 = auVar5 << 0x40;
    }
    else {
      auVar10 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,uVar9);
      if (PF_PART4(auVar10, 0) != 0) {
        DAT_10013900 = DAT_10013900 + 1;
        PF_PART8(auVar10, 8) = PF_PART8(auVar10, 8);
        PF_PART8(auVar10, 0) = 1;
      }
    }
  }
  return auVar10;
}

#undef DAT_1000c100
#undef DAT_10013860
#undef DAT_10013900
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014134
#undef UNK_10014135
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014134
#undef uRam0000000010014135
#undef uRam0000000010014136

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007858
 */

void recovered_10007858(undefined1 *param_1,int param_2,uint param_3,undefined1 *param_4,
                       uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;

  uVar4 = param_2 - param_3;
  uVar3 = uVar4;
  if (param_5 <= uVar4) {
    uVar3 = param_5;
  }
  recovered_100012ac(param_1 + param_3,param_4,(ulong)uVar3);
  if (param_5 <= uVar4) {
    return;
  }
  uVar6 = (ulong)(param_5 - uVar3);
  puVar5 = param_4 + uVar3;
  if ((uVar6 < 0x10) || ((((uint)puVar5 ^ (uint)param_1) & 7) != 0)) {
  }
  else {
    for (; (uVar6 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = param_1 + 1) {
      *param_1 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    }
    lVar8 = 0;
    for (lVar7 = 0; 0x1f < uVar6 + lVar7; lVar7 = lVar7 + -0x20) {
      puVar1 = (undefined8 *)(param_1 + lVar8);
      puVar2 = (undefined8 *)(puVar5 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar8 = lVar8 + 0x20;
    }
    lVar9 = 0;
    uVar6 = uVar6 + lVar7;
    while (7 < uVar6) {
      *(undefined8 *)(param_1 + lVar8 + lVar9) = *(undefined8 *)(puVar5 + lVar8 + lVar9);
      lVar9 = lVar9 + 8;
      uVar6 = uVar6 - 8;
    }
    param_1 = param_1 + (lVar9 - lVar7);
    puVar5 = puVar5 + (lVar9 - lVar7);
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014134
#define UNK_10014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef UNK_10014135
#define UNK_10014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014134
#define uRam0000000010014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef uRam0000000010014135
#define uRam0000000010014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b8
 */

/* WARNING: Removing unreachable block (ram,0x100077dc) */
/* WARNING: Removing unreachable block (ram,0x100076d8) */
/* WARNING: Removing unreachable block (ram,0x100077f4) */
/* WARNING: Removing unreachable block (ram,0x100076ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint128 recovered_100078b8(uint *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  bool bVar3;
  uint uVar4;
  ulong extraout_x1;
  uint uVar5;
  uint uVar6;
  uint128 auVar7;
  uint128 auVar8;

  PF_PART8(auVar8, 8) = param_2;
  PF_PART8(auVar8, 0) = param_1;
  uVar5 = *param_1;
  if (uVar5 < 9 && (1 << (ulong)(uVar5 & 0x1f) & 0x103U) != 0) {
    if ((uVar5 == 1) && ((*(byte *)((long)param_1 + 0x5a) & 1) != 0)) {
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x57) & 1) == 0) {
      bVar3 = false;
      uVar5 = param_1[0x14];
      while( true ) {
        uVar4 = 0;
        if (uVar5 <= param_1[8]) {
          uVar4 = param_1[8] - uVar5;
        }
        uVar6 = 0;
        if (uVar5 < 0x2da1) {
          uVar6 = 0x2da0 - uVar5;
        }
        if (uVar4 <= 0x2da0 - uVar5) {
          uVar6 = uVar4;
        }
        uVar4 = param_1[0x13] - uVar5;
        if (uVar6 <= param_1[0x13] - uVar5) {
          uVar4 = uVar6;
        }
        if (param_1[9] <= uVar4) {
          uVar4 = param_1[9];
        }
        uVar6 = (uint)param_2;
        if ((uVar4 == 0) ||
           (auVar8 = recovered_100076b0((long)param_1,0x18,(ulong)(param_1[7] + uVar5),
                                        param_1[0x12] + uVar5 & 0x7fff,uVar4), PF_PART4(auVar8, 0) == 0))
        break;
        uVar5 = param_1[0x14] + uVar4;
        param_1[0x14] = uVar5;
        bVar3 = true;
        if ((param_1[0x19] & 1) == 0) {
          param_1[0x18] = param_1[0x17] + uVar6;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
      }
      if ((*(char *)((long)param_1 + 0x55) == '\x01') && (param_1[0x13] == param_1[0x14])) {
        *(undefined2 *)((long)param_1 + 0x56) = 0x101;
        auVar8 = recovered_100076b0((long)param_1,0x11,(ulong)(param_1[7] + param_1[0x13]),0,0);
        if ((param_1[0x19] & 1) == 0) {
          param_1[0x18] = param_1[0x17] + uVar6;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
        if (*param_1 == 3) {
          uVar5 = 4;
        }
        else {
          if (*param_1 != 2) {
            return auVar8;
          }
          uVar5 = 5;
        }
        *param_1 = uVar5;
        param_1[0x1b] = uVar6;
        return auVar8;
      }
    }
    else {
      bVar3 = false;
    }
    if ((!bVar3) && ((*(byte *)((long)param_1 + 0x5a) & 1) != 0)) {
      iVar1 = param_1[0x14] + param_1[7] +
              (uint)(byte)param_1[0x15] + (uint)*(byte *)((long)param_1 + 0x56);
      uVar5 = 0x4000 - param_1[0xd];
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      recovered_10006f78((undefined1 *)(param_1 + 2),0x800);
      recovered_10006fb8(0x28,6,(ulong)DAT_10013860,(ulong)param_1[4]);
      recovered_10001498((ulong *)&DAT_10014126,0,0x14);
      _DAT_10014126 =
           *(ushort *)((long)param_1 + 0x16) >> 8 | *(ushort *)((long)param_1 + 0x16) << 8;
      PF_PART1(DAT_10014128, 0) = (undefined1)(param_1[5] >> 8);
      PF_PART1(DAT_10014128, 1) = (undefined1)param_1[5];
      uRam000000001001412a = (undefined1)((uint)iVar1 >> 0x18);
      uRam000000001001412b = (undefined1)((uint)iVar1 >> 0x10);
      uRam000000001001412c = (undefined1)((uint)iVar1 >> 8);
      uRam000000001001412d = (undefined1)iVar1;
      uVar4 = param_1[6];
      uRam000000001001412e = (undefined1)(uVar4 >> 0x18);
      uRam000000001001412f = (undefined1)(uVar4 >> 0x10);
      uRam0000000010014130 = (undefined1)(uVar4 >> 8);
      uRam0000000010014131 = (undefined1)uVar4;
      uRam0000000010014132 = 0x50;
      uRam0000000010014133 = 0x10;
      uRam0000000010014134 = (undefined1)(uVar5 >> 8);
      uRam0000000010014135 = (undefined1)uVar5;
      uVar4 = recovered_1000707c((ulong)DAT_10013860,(ulong)param_1[4],6,((uintptr_t)pf_module_state + 0x80e2U),0x14);
      uRam0000000010014136 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
      param_1[0xe] = uVar5;
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
      recovered_10001498((ulong *)&DAT_1001413a,0,6);
      bVar3 = recovered_1000532c(300);
      PF_PART7(auVar7, 1) = 0;
      ((uint8_t *)(void *)&auVar7)[0] = bVar3;
      PF_PART8(auVar7, 8) = extraout_x1;
      if (bVar3) {
        if (_DAT_8201092c == 0) {
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = extraout_x1;
          auVar7 = auVar2 << 0x40;
        }
        else {
          auVar7 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c);
          if (PF_PART4(auVar7, 0) != 0) {
            DAT_10013900 = DAT_10013900 + 1;
            PF_PART8(auVar7, 8) = PF_PART8(auVar7, 8);
            PF_PART8(auVar7, 0) = 1;
          }
        }
      }
      return auVar7;
    }
  }
  return auVar8;
}

#undef DAT_10013860
#undef DAT_10013900
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014134
#undef UNK_10014135
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014134
#undef uRam0000000010014135
#undef uRam0000000010014136

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a64
 */

void recovered_10007a64(undefined1 *param_1,int param_2,uint param_3,undefined1 *param_4,
                       uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;

  uVar4 = param_2 - param_3;
  uVar3 = uVar4;
  if (param_5 <= uVar4) {
    uVar3 = param_5;
  }
  recovered_100012ac(param_4,param_1 + param_3,(ulong)uVar3);
  if (param_5 <= uVar4) {
    return;
  }
  uVar5 = (ulong)(param_5 - uVar3);
  puVar6 = param_4 + uVar3;
  if ((uVar5 < 0x10) || ((((uint)param_1 ^ (uint)puVar6) & 7) != 0)) {
  }
  else {
    for (; (uVar5 != 0 && (((ulong)puVar6 & 7) != 0)); puVar6 = puVar6 + 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      uVar5 = uVar5 - 1;
    }
    lVar8 = 0;
    for (lVar7 = 0; 0x1f < uVar5 + lVar7; lVar7 = lVar7 + -0x20) {
      puVar1 = (undefined8 *)(puVar6 + lVar8);
      puVar2 = (undefined8 *)(param_1 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar8 = lVar8 + 0x20;
    }
    lVar9 = 0;
    uVar5 = uVar5 + lVar7;
    while (7 < uVar5) {
      *(undefined8 *)(puVar6 + lVar8 + lVar9) = *(undefined8 *)(param_1 + lVar8 + lVar9);
      lVar9 = lVar9 + 8;
      uVar5 = uVar5 - 8;
    }
    puVar6 = puVar6 + (lVar9 - lVar7);
    param_1 = param_1 + (lVar9 - lVar7);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}


#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(byte * *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef DAT_1000c108
#define DAT_1000c108 (*(byte * *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_1000c110
#define DAT_1000c110 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef DAT_1000c150
#define DAT_1000c150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000c170
#define DAT_1000c170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_1000c898
#define DAT_1000c898 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x854U)))
#undef DAT_1000c89d
#define DAT_1000c89d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x859U)))
#undef DAT_1000ca82
#define DAT_1000ca82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3eU)))
#undef DAT_1000cb44
#define DAT_1000cb44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_1000cbe5
#define DAT_1000cbe5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba1U)))
#undef DAT_1000d0c9
#define DAT_1000d0c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1085U)))
#undef DAT_1000d4f5
#define DAT_1000d4f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14b1U)))
#undef DAT_1000d511
#define DAT_1000d511 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cdU)))
#undef DAT_1000d522
#define DAT_1000d522 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14deU)))
#undef DAT_10014928
#define DAT_10014928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88e4U)))
#undef DAT_10014968
#define DAT_10014968 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8924U)))
#undef DAT_1001499c
#define DAT_1001499c (*(uint *)(((uintptr_t)pf_module_state + 0x8958U)))
#undef DAT_10014b22
#define DAT_10014b22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8adeU)))
#undef DAT_10014bb0
#define DAT_10014bb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8b6cU)))
#undef DAT_10014cb0
#define DAT_10014cb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8c6cU)))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef UNK_1000c148
#define UNK_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef UNK_1000c158
#define UNK_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef _DAT_1000c120
#define _DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef _DAT_1000c130
#define _DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_1000c150
#define _DAT_1000c150 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_1000c160
#define _DAT_1000c160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_1000c170
#define _DAT_1000c170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef str_1000c44e
#define str_1000c44e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#undef str_1000cc51
#define str_1000cc51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0dU)))
#undef str_1000d078
#define str_1000d078 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1034U)))
#undef str_1000d08f
#define str_1000d08f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x104bU)))
#undef str_1000d09d
#define str_1000d09d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1059U)))
#undef str_1000d0ac
#define str_1000d0ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1068U)))
#undef str_1000d0ce
#define str_1000d0ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108aU)))
#undef str_1000d0d7
#define str_1000d0d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1093U)))
#undef str_1000d0e0
#define str_1000d0e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x109cU)))
#undef str_1000d0fd
#define str_1000d0fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10b9U)))
#undef str_1000d107
#define str_1000d107 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10c3U)))
#undef str_1000d119
#define str_1000d119 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d5U)))
#undef str_1000d132
#define str_1000d132 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10eeU)))
#undef str_1000d14f
#define str_1000d14f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110bU)))
#undef str_1000d15b
#define str_1000d15b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1117U)))
#undef str_1000d173
#define str_1000d173 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112fU)))
#undef str_1000d197
#define str_1000d197 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1153U)))
#undef str_1000d1a4
#define str_1000d1a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1160U)))
#undef str_1000d1b4
#define str_1000d1b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1170U)))
#undef str_1000d1d7
#define str_1000d1d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1193U)))
#undef str_1000d1fa
#define str_1000d1fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b6U)))
#undef str_1000d20c
#define str_1000d20c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c8U)))
#undef str_1000d21e
#define str_1000d21e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11daU)))
#undef str_1000d230
#define str_1000d230 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11ecU)))
#undef str_1000d24d
#define str_1000d24d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1209U)))
#undef str_1000d27d
#define str_1000d27d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1239U)))
#undef str_1000d2aa
#define str_1000d2aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1266U)))
#undef str_1000d2bd
#define str_1000d2bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1279U)))
#undef str_1000d2cd
#define str_1000d2cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1289U)))
#undef str_1000d339
#define str_1000d339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12f5U)))
#undef str_1000d34c
#define str_1000d34c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1308U)))
#undef str_1000d36f
#define str_1000d36f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132bU)))
#undef str_1000d388
#define str_1000d388 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1344U)))
#undef str_1000d3a1
#define str_1000d3a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x135dU)))
#undef str_1000d3c4
#define str_1000d3c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1380U)))
#undef str_1000d3dd
#define str_1000d3dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1399U)))
#undef str_1000d3f4
#define str_1000d3f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13b0U)))
#undef str_1000d403
#define str_1000d403 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bfU)))
#undef str_1000d426
#define str_1000d426 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13e2U)))
#undef str_1000d43e
#define str_1000d43e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13faU)))
#undef str_1000d45d
#define str_1000d45d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1419U)))
#undef str_1000d47e
#define str_1000d47e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143aU)))
#undef str_1000d495
#define str_1000d495 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1451U)))
#undef str_1000d49d
#define str_1000d49d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1459U)))
#undef str_1000d4c3
#define str_1000d4c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x147fU)))
#undef str_1000d4e7
#define str_1000d4e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14a3U)))
#undef str_1000d4ef
#define str_1000d4ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14abU)))
#undef str_1000d4fa
#define str_1000d4fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14b6U)))
#undef str_1000d503
#define str_1000d503 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bfU)))
#undef str_1000d515
#define str_1000d515 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14d1U)))
#undef str_1000d51c
#define str_1000d51c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14d8U)))
#undef str_1000d527
#define str_1000d527 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14e3U)))
#undef str_1000d55b
#define str_1000d55b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1517U)))
#undef str_1000d58f
#define str_1000d58f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x154bU)))
#undef str_1000d59b
#define str_1000d59b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1557U)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef uRam000000001000c148
#define uRam000000001000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef uRam000000001000c158
#define uRam000000001000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#define uStack_7ac (*(undefined4 *)(pf_stack_frame + 20))
#define uStack_7a8 (*(undefined1 *)(pf_stack_frame + 24))
#define uStack_7a7 (*(undefined1 *)(pf_stack_frame + 25))
#define uStack_7a6 (*(undefined1 *)(pf_stack_frame + 26))
#define uStack_7a5 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_7a4 (*(uint *)(pf_stack_frame + 28))
#define uStack_7a0 (*(ulong *)(pf_stack_frame + 32))
#define uStack_798 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_790 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_788 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_780 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_738 (*(undefined4 *)(pf_stack_frame + 136))
#define auStack_724 (*(undefined1 (*)[1828])(pf_stack_frame + 156))
#define auStack_704 (*(undefined1 (*)[1796])(pf_stack_frame + 188))
#define auStack_6e4 (*(undefined1 (*)[1764])(pf_stack_frame + 220))
#define appppppbStack_6c4 (*(byte ****** (*)[216])(pf_stack_frame + 252))
#define abStack_69c (*(byte (*)[1692])(pf_stack_frame + 292))
#define auStack_65c (*(undefined1 (*)[1628])(pf_stack_frame + 356))
#define uStack_63c (*(uint *)(pf_stack_frame + 388))
#define pppppppbStack_638 (*(byte ******* *)(pf_stack_frame + 392))
#define uStack_630 (*(uint *)(pf_stack_frame + 400))
#define uStack_62c (*(undefined4 *)(pf_stack_frame + 404))
#define bStack_628 (*(byte *)(pf_stack_frame + 408))
#define uStack_620 (*(undefined8 *)(pf_stack_frame + 416))
#define uStack_618 (*(undefined8 *)(pf_stack_frame + 424))
#define uStack_610 (*(ulong *)(pf_stack_frame + 432))
#define uStack_608 (*(undefined8 *)(pf_stack_frame + 440))
#define uStack_600 (*(undefined8 *)(pf_stack_frame + 448))
#define uStack_5f8 (*(undefined8 *)(pf_stack_frame + 456))
#define uStack_5f0 (*(undefined8 *)(pf_stack_frame + 464))
#define uStack_5e8 (*(undefined8 *)(pf_stack_frame + 472))
#define uStack_5e0 (*(undefined8 *)(pf_stack_frame + 480))
#define uStack_558 (*(undefined4 *)(pf_stack_frame + 616))
#define uStack_550 (*(undefined8 *)(pf_stack_frame + 624))
#define uStack_548 (*(undefined8 *)(pf_stack_frame + 632))
#define uStack_540 (*(uint *)(pf_stack_frame + 640))
#define uStack_53c (*(uint *)(pf_stack_frame + 644))
#define uStack_538 (*(uint *)(pf_stack_frame + 648))
#define uStack_534 (*(uint *)(pf_stack_frame + 652))
#define auStack_350 (*(ulong (*)[106])(pf_stack_frame + 1136))
#define auStack_310 (*(ulong (*)[98])(pf_stack_frame + 1200))
#define auStack_2d0 (*(ulong (*)[90])(pf_stack_frame + 1264))
#define bStack_2b1 (*(byte *)(pf_stack_frame + 1295))
#define auStack_2b0 (*(undefined1 (*)[688])(pf_stack_frame + 1296))
#define pppppppbStack_290 (*(byte ******* *)(pf_stack_frame + 1328))
#define uStack_288 (*(undefined8 *)(pf_stack_frame + 1336))
#define bStack_280 (*(byte *)(pf_stack_frame + 1344))
#define uStack_27f (*(undefined7 *)(pf_stack_frame + 1345))
#define lStack_278 (*(long *)(pf_stack_frame + 1352))
#define lStack_270 (*(long *)(pf_stack_frame + 1360))
#define lStack_268 (*(long *)(pf_stack_frame + 1368))
#define lStack_260 (*(long *)(pf_stack_frame + 1376))
#define lStack_258 (*(long *)(pf_stack_frame + 1384))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ac4
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007ac4(undefined1 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[2016] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined1 uVar31;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  char *pcVar32;
  char cVar33;
  char cVar34;
  ulong uVar35;
  byte bVar36;
  long lVar37;
  uint *puVar38;
  char *pcVar39;
  char *pcVar40;
  uint uVar41;
  ulong uVar42;
  uint *puVar43;
  byte *******pppppppbVar44;
  ulong uVar45;
  ulong uVar46;

  uVar16 = uRam000000001000c178;
  uVar15 = _DAT_1000c170;
  uVar14 = uRam000000001000c168;
  uVar13 = _DAT_1000c160;
  uVar12 = uRam000000001000c158;
  uVar11 = _DAT_1000c150;
  uVar10 = uRam000000001000c148;
  uVar9 = _DAT_1000c140;
  uVar8 = uRam000000001000c138;
  uVar7 = _DAT_1000c130;
  uVar6 = uRam000000001000c128;
  uVar5 = _DAT_1000c120;
  uVar30 = DAT_1000c110;
  pbVar4 = DAT_1000c108;
  pbVar3 = DAT_1000c0d0;
  puVar38 = *(uint **)(param_1 + 8);
  if (((puVar38 == (uint *)0x0) || (puVar38[1] != *(uint *)(param_1 + 0x10))) || (*puVar38 == 0)) {
    if (((param_1[0xdec] & 1) == 0) && ((param_1[0xde4] & 1) == 0)) {
      recovered_100097c0();
      param_2 = extraout_x1_09;
    }
    if (param_1[0xbb9] == '\x01') {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    puVar38 = *(uint **)(param_1 + 8);
    if (((puVar38 != (uint *)0x0) && (puVar38[1] == *(uint *)(param_1 + 0x10))) &&
       (*puVar38 - 1 < 3)) {
      recovered_10005270(puVar38,param_2);
    }
    recovered_10005318(param_1 + 0x160,0x19c);
    recovered_10005318(param_1 + 0x2fc,0x19c);
    recovered_10005318(param_1 + 0x4dc,0x19c);
    recovered_10005318(param_1 + 0x678,0x19c);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  puVar1 = param_1 + 0x20;
  uVar46 = param_2;
  do {
    uVar21 = puVar38[0xd];
    iVar20 = (int)uVar46;
    if (uVar21 == 0) break;
    uVar23 = *(uint *)(param_1 + 0x140);
    if ((0x89cb < uVar23) || ((param_1[0xdec] & 1) != 0)) break;
    if (0x89cc - uVar23 <= uVar21) {
      uVar21 = 0x89cc - uVar23;
    }
    recovered_10007a64(*(undefined1 **)(puVar38 + 10),0x4000,puVar38[0xc],
                       (undefined1 *)(*(long *)(param_1 + 0x138) + (ulong)uVar23),uVar21);
    uVar23 = puVar38[0xd];
    puVar38[0xc] = puVar38[0xc] + uVar21 & 0x3fff;
    puVar38[0xd] = uVar23 - uVar21;
    if ((puVar38[0xe] < puVar38[9]) && (puVar38[9] << 1 <= 0x4000 - (uVar23 - uVar21))) {
      *(undefined1 *)((long)puVar38 + 0x5a) = 1;
    }
    uVar21 = *(int *)(param_1 + 0x140) + uVar21;
    *(uint *)(param_1 + 0x140) = uVar21;
    *(int *)(param_1 + 0x1c) = iVar20;
    param_2 = extraout_x1;
    if (*(int *)(param_1 + 0x14) != 0) goto LAB_10007d5c;
    while (uVar21 != 0) {
      uVar42 = 0;
      pbVar25 = *(byte **)(param_1 + 0x138);
      while( true ) {
        if (uVar21 == uVar42) goto LAB_10007d3c;
        if (pbVar25[uVar42] == 10) break;
        uVar42 = uVar42 + 1;
      }
      uVar23 = (uint)uVar42;
      if (uVar21 == uVar23) {
LAB_10007d3c:
        pcVar32 = str_1000d0ac;
        if (0xfe < uVar21) {
LAB_10007d4c:
          recovered_1000517c(param_1,2,pcVar32);
          param_2 = extraout_x1_01;
        }
        break;
      }
      for (; uVar42 != 0; uVar42 = uVar42 - 1) {
        if (pbVar25[uVar42 - 1] != 0xd && pbVar25[uVar42 - 1] != 10) {
          if ((3 < uVar42) && (iVar20 = recovered_1000155c(pbVar25,&DAT_1000d0c9,4), iVar20 == 0)) {
            if ((7 < uVar42) &&
               (iVar20 = recovered_1000155c(*(byte **)(param_1 + 0x138),(byte *)str_1000d0ce,8),
               iVar20 != 0)) {
              iVar20 = recovered_1000155c(*(byte **)(param_1 + 0x138),(byte *)str_1000d0d7,8);
              pcVar32 = str_1000d0e0;
              if (iVar20 != 0) goto LAB_10007d4c;
            }
            recovered_10005b58(puVar1,0x100,*(undefined1 **)(param_1 + 0x138),uVar42 & 0xffffffff);
            recovered_1000a784((long)param_1,uVar23 + 1);
            recovered_10005438(puVar1,uVar42 & 0xffffffff);
            recovered_1000a7c8(param_1,str_1000d0fd);
            *(undefined4 *)(param_1 + 0x14) = 1;
            param_2 = extraout_x1_00;
            goto LAB_10007d5c;
          }
          break;
        }
      }
      recovered_1000a784((long)param_1,uVar23 + 1);
      param_2 = extraout_x1_11;
      uVar21 = *(uint *)(param_1 + 0x140);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
LAB_10007d5c:
      do {
        if ((*(uint *)(param_1 + 0x140) < 4) || ((param_1[0xdec] & 1) != 0)) break;
        puVar43 = *(uint **)(param_1 + 0x138);
        if (*(int *)(param_1 + 0x160) - 2U < 2) {
          if (*(uint *)(param_1 + 0x140) < 0x10) break;
          recovered_100012ac((undefined1 *)&pppppppbStack_290,param_1 + 0x2a0,0x10);
          recovered_1000a320((long)(param_1 + 0x1ac),(undefined1 *)&pppppppbStack_290,(long)puVar43,
                             (long)&uStack_550,0x10);
          uVar21 = ((uint)uStack_550 & 0xff00ff00) >> 8 | ((uint)uStack_550 & 0xff00ff) << 8;
          uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
          recovered_10005318((undefined1 *)&uStack_550,0x10);
          recovered_10005318((undefined1 *)&pppppppbStack_290,0x10);
          param_2 = extraout_x1_12;
        }
        else if (*(int *)(param_1 + 0x160) == 1) {
          uVar22 = *(undefined4 *)(param_1 + 0x158);
          uStack_7ac = 0;
          uStack_7a8 = (undefined1)((uint)uVar22 >> 0x18);
          uStack_7a7 = (undefined1)((uint)uVar22 >> 0x10);
          uStack_7a6 = (undefined1)((uint)uVar22 >> 8);
          uStack_7a5 = (undefined1)uVar22;
          recovered_10009c54((uint *)(param_1 + 0x189),0,(undefined8 *)&uStack_7ac,(long)puVar43,
                             (long)&pppppppbStack_290,4);
          uVar21 = ((uint)pppppppbStack_290 & 0xff00ff00) >> 8 |
                   ((uint)pppppppbStack_290 & 0xff00ff) << 8;
          uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
          param_2 = extraout_x1_02;
        }
        else {
          uVar21 = recovered_10005760(puVar43);
          param_2 = extraout_x1_03;
        }
        if (uVar21 - 0x88b9 < 0xffff774c) {
          recovered_1000517c(param_1,2,str_1000d107);
          param_2 = extraout_x1_05;
          break;
        }
        uVar23 = *(uint *)(param_1 + 0x160);
        if (((uVar23 & 0xfffffffe) == 2) && ((uVar21 + 4 & 0xf) != 0)) {
          recovered_1000517c(param_1,2,str_1000d119);
          param_2 = extraout_x1_08;
          break;
        }
        if (uVar23 - 2 < 2) {
          uVar41 = uVar21 + *(int *)(param_1 + 0x2f4) + 4;
        }
        else if (uVar23 == 1) {
          uVar41 = uVar21 + 0x14;
        }
        else {
          uVar41 = uVar21 + 4;
        }
        if (*(uint *)(param_1 + 0x140) < uVar41) break;
        if (uVar23 - 2 < 2) {
          uVar42 = (ulong)(uVar21 + 4);
          recovered_1000a320((long)(param_1 + 0x1ac),param_1 + 0x2a0,(long)puVar43,(long)puVar43,
                             uVar42);
          uVar23 = (*(uint *)(param_1 + 0x158) & 0xff00ff00) >> 8 |
                   (*(uint *)(param_1 + 0x158) & 0xff00ff) << 8;
          uStack_550 = (byte *******)CONCAT44(PF_PART4(uStack_550, 4),uVar23 >> 0x10 | uVar23 << 0x10);
          if (*(int *)(param_1 + 0x164) == 2) {
            recovered_1000a014((ulong *)(param_1 + 0x2b0),*(uint *)(param_1 + 0x2f0),
                               (undefined1 *)&uStack_550,(undefined1 *)puVar43,uVar42,
                               (ulong *)&pppppppbStack_290);
          }
          else {
            recovered_1000a1a0(param_1 + 0x2b0,*(uint *)(param_1 + 0x2f0),(undefined1 *)&uStack_550,
                               (undefined1 *)puVar43,uVar42,(long)&pppppppbStack_290);
          }
          bVar18 = recovered_1000a7fc((byte *)&pppppppbStack_290,
                                      (byte *)((long)puVar43 + (ulong)uVar21 + 4),
                                      (ulong)*(uint *)(param_1 + 0x2f4));
          recovered_10005318((undefined1 *)&pppppppbStack_290,0x40);
          if (!bVar18) {
LAB_100092ac:
            recovered_1000517c(param_1,5,str_1000d132);
            param_2 = extraout_x1_07;
            break;
          }
        }
        else if (uVar23 == 1) {
          recovered_10005d84((uint *)(param_1 + 0x169),0,(undefined8 *)&uStack_7ac,(long)&uStack_550
                            );
          recovered_10009d18((uint *)&pppppppbStack_290,(uint *)&uStack_550);
          recovered_10009da8((uint *)&pppppppbStack_290,puVar43,(ulong)(uVar21 + 4));
          recovered_10009e6c((uint *)&pppppppbStack_290,(undefined1 *)&uStack_620);
          recovered_10005318((undefined1 *)&uStack_550,0x40);
          puVar2 = puVar43 + 1;
          bVar18 = recovered_1000a7fc((byte *)&uStack_620,(byte *)((long)puVar2 + (ulong)uVar21),
                                      0x10);
          if (!bVar18) goto LAB_100092ac;
          recovered_10009c54((uint *)(param_1 + 0x169),1,(undefined8 *)&uStack_7ac,(long)puVar2,
                             (long)puVar2,(ulong)uVar21);
        }
        uVar24 = puVar43[1];
        uVar23 = *(uint *)(param_1 + 0x158);
        *(uint *)(param_1 + 0x158) = uVar23 + 1;
        if (uVar21 <= (byte)uVar24) {
          recovered_1000517c(param_1,2,str_1000d14f);
          param_2 = extraout_x1_06;
          break;
        }
        uVar21 = uVar21 + ~(uint)(byte)uVar24;
        if (uVar21 == 0) goto switchD_10008000_caseD_2;
        pppppppbVar44 = (byte *******)((long)puVar43 + 5);
        cVar33 = *(char *)pppppppbVar44;
        if (param_1[0x4bc] == '\x01' && cVar33 == '\x1e') {
          param_1[0x4bc] = 0;
          goto switchD_10008000_caseD_2;
        }
        switch((uintptr_t)(cVar33)) {
        case 'P':
          uStack_288 = (byte *)(ulong)uVar21;
          bStack_280 = 0;
          pppppppbStack_290 = pppppppbVar44;
          recovered_1000a828((long *)&pppppppbStack_290);
          recovered_1000a900((long *)&pppppppbStack_290,(uint *)0x0);
          if (((bStack_280 & 1) == 0) &&
             (bVar18 = recovered_1000a9a8((long *)&pppppppbStack_290), bVar18)) {
            uStack_550 = (byte *******)CONCAT71(PF_PART7(uStack_550, 1),0x52);
LAB_100080a4:
            pppppppbVar44 = (byte *******)&uStack_550;
            uVar21 = 1;
            goto LAB_10008128;
          }
          break;
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case '[':
        case '\\':
switchD_10008000_caseD_6:
          pppppppbStack_290 = *(byte ********)(param_1 + 0x150);
          uStack_288 = pbVar3;
          bStack_280 = 0;
          recovered_10009970((long *)&pppppppbStack_290,3);
          recovered_10006968((long *)&pppppppbStack_290,uVar23);
          pppppppbVar44 = pppppppbStack_290;
          uVar21 = PF_PART4(uStack_288, 4);
LAB_10008128:
          recovered_10009994((long)param_1,(undefined1 *)pppppppbVar44,uVar21);
          break;
        case 'Z':
          if ((param_1[0x82a] & 1) == 0) {
            uVar21 = 2;
            pcVar32 = str_1000d1d7;
            goto LAB_100084bc;
          }
          uStack_620 = (byte *******)((ulong)PF_PART4(uStack_620, 4) << 0x20);
          uStack_288 = (byte *)(ulong)uVar21;
          bStack_280 = 0;
          pppppppbStack_290 = pppppppbVar44;
          recovered_1000a828((long *)&pppppppbStack_290);
          pbVar25 = (byte *)recovered_1000a900((long *)&pppppppbStack_290,(uint *)&uStack_620);
          uVar21 = recovered_1000a854((long *)&pppppppbStack_290);
          uVar23 = recovered_1000a854((long *)&pppppppbStack_290);
          uVar24 = recovered_1000a854((long *)&pppppppbStack_290);
          if (bStack_280 == 1) {
            pcVar32 = str_1000d47e;
LAB_10008780:
            recovered_1000517c(param_1,2,pcVar32);
          }
          else {
            uStack_550 = *(byte ********)(param_1 + 0x150);
            uStack_548 = pbVar3;
            uStack_540 = uStack_540 & 0xffffff00;
            bVar18 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,(byte *)str_1000d495)
            ;
            if ((!bVar18) || (param_1[0x870] == '\x01')) {
              recovered_10009970(&uStack_550,0x5c);
              recovered_10006968(&uStack_550,uVar21);
              uVar21 = 4;
              if (param_1[0x870] == '\0') {
                uVar21 = 1;
              }
              recovered_10006968(&uStack_550,uVar21);
              pcVar32 = str_1000d49d;
              if (param_1[0x870] == '\0') {
                pcVar32 = str_1000d4c3;
              }
              recovered_100060c8(&uStack_550,pcVar32);
              recovered_100060c8(&uStack_550,&DAT_1000ca82);
            }
            else {
              param_1[0x870] = 1;
              *(uint *)(param_1 + 0x878) = uVar21;
              *(uint *)(param_1 + 0x87c) = uVar23;
              uVar23 = 0x1000;
              if (uVar24 != 0) {
                uVar23 = uVar24;
              }
              *(uint *)(param_1 + 0x880) = uVar23;
              *(undefined4 *)(param_1 + 0x884) = 0x20000;
              recovered_10009970(&uStack_550,0x5b);
              recovered_10006968(&uStack_550,uVar21);
              recovered_10006968(&uStack_550,0);
              recovered_10006968(&uStack_550,0x20000);
              recovered_10006968(&uStack_550,0x8000);
            }
            recovered_10009994((long)param_1,(undefined1 *)uStack_550,PF_PART4(uStack_548, 4));
          }
          uVar46 = uVar46 & 0xffffffff;
          break;
        case ']':
          uStack_288 = (byte *)(ulong)uVar21;
          bStack_280 = 0;
          pppppppbStack_290 = pppppppbVar44;
          recovered_1000a828((long *)&pppppppbStack_290);
          uVar21 = recovered_1000a854((long *)&pppppppbStack_290);
          uVar23 = recovered_1000a854((long *)&pppppppbStack_290);
          if ((((bStack_280 & 1) == 0) && (param_1[0x870] == '\x01')) && (uVar21 == 0)) {
            *(uint *)(param_1 + 0x87c) = *(int *)(param_1 + 0x87c) + uVar23;
          }
          break;
        case '^':
          if (param_1[0x82a] == '\x01') {
            uStack_620 = (byte *******)((ulong)PF_PART4(uStack_620, 4) << 0x20);
            uStack_288 = (byte *)(ulong)uVar21;
            bStack_280 = 0;
            pppppppbStack_290 = pppppppbVar44;
            recovered_1000a828((long *)&pppppppbStack_290);
            uVar21 = recovered_1000a854((long *)&pppppppbStack_290);
            pbVar25 = (byte *)recovered_1000a900((long *)&pppppppbStack_290,(uint *)&uStack_620);
            if ((((bStack_280 & 1) == 0) && (param_1[0x870] == '\x01')) && (uVar21 == 0)) {
              uVar42 = (ulong)uStack_620 & 0xffffffff;
              if (*(uint *)(param_1 + 0x884) < (uint)uStack_620) {
                uVar21 = 2;
                pcVar32 = str_1000d55b;
                goto LAB_100084bc;
              }
              uVar21 = *(uint *)(param_1 + 0x884) - (uint)uStack_620;
              *(uint *)(param_1 + 0x884) = uVar21;
              if ((*(int *)(param_1 + 0x894) == 1) && ((param_1[0xde3] & 1) == 0)) {
                for (; uVar42 != 0; uVar42 = uVar42 - 1) {
                  if ((((param_1[3000] & 1) == 0) && ((param_1[0xbb9] & 1) == 0)) &&
                     (param_1[0xde0] != '\x01')) {
                    recovered_1000b6b4((long)param_1,(uint)*pbVar25);
                    if ((param_1[0xde3] & 1) != 0) break;
                  }
                  else {
                    uVar21 = *(uint *)(param_1 + 0xba0);
                    if (uVar21 < 0x100) {
                      bVar17 = *pbVar25;
                      *(uint *)(param_1 + 0xba0) = uVar21 + 1;
                      (param_1 + 0xa9e)[uVar21] = bVar17;
                    }
                  }
                  pbVar25 = pbVar25 + 1;
                }
                uVar21 = *(uint *)(param_1 + 0x884);
              }
              if (uVar21 >> 0x10 == 0) {
                uStack_550 = *(byte ********)(param_1 + 0x150);
                uStack_548 = pbVar3;
                uStack_540 = uStack_540 & 0xffffff00;
                recovered_10009970(&uStack_550,0x5d);
                recovered_10006968(&uStack_550,*(uint *)(param_1 + 0x878));
                recovered_10006968(&uStack_550,0x20000 - *(int *)(param_1 + 0x884));
                uVar29 = recovered_10009994((long)param_1,(undefined1 *)uStack_550,PF_PART4(uStack_548, 4))
                ;
                if ((int)uVar29 != 0) {
                  *(undefined4 *)(param_1 + 0x884) = 0x20000;
                }
              }
            }
          }
          break;
        case '_':
          break;
        case '`':
          if (((param_1[0x870] == '\x01') && (param_1[0x874] = 1, *(int *)(param_1 + 0x894) == 1))
             && ((param_1[0xde3] & 1) == 0)) {
            param_1[0xde3] = 1;
            *(undefined4 *)(param_1 + 0xde8) = 0;
          }
          break;
        case 'a':
          if (param_1[0x870] == '\x01') {
            param_1[0x873] = 1;
            if ((param_1[0x872] & 1) == 0) {
              recovered_1000a9c4((long)param_1,0x61);
              param_1[0x872] = 1;
            }
            if ((param_1[0xde3] & 1) == 0) {
              param_1[0xde3] = 1;
            }
          }
          break;
        case 'b':
          if (param_1[0x82a] == '\x01') {
            uStack_620 = (byte *******)((ulong)PF_PART4(uStack_620, 4) << 0x20);
            uStack_548 = (byte *)(ulong)uVar21;
            uStack_540 = (uint)PF_PART3(uStack_540, 1) << 8;
            uStack_550 = pppppppbVar44;
            recovered_1000a828(&uStack_550);
            uVar21 = recovered_1000a854(&uStack_550);
            pbVar25 = (byte *)recovered_1000a900(&uStack_550,(uint *)&uStack_620);
            bVar18 = recovered_1000a9a8(&uStack_550);
            if ((uStack_540 & 1) == 0) {
              if ((param_1[0x870] == 1) && (uVar21 == 0)) {
                bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                            (byte *)str_1000d4e7);
                if (bVar19) {
                  recovered_1000a884(&uStack_550,(undefined1 *)&pppppppbStack_290,0x20);
                  uVar21 = recovered_1000a854(&uStack_550);
                  *(uint *)(param_1 + 0x88c) = uVar21;
                  uVar21 = recovered_1000a854(&uStack_550);
                  *(uint *)(param_1 + 0x890) = uVar21;
                  uVar21 = uStack_540 & 0xff ^ 1;
                  param_1[0x888] = (char)uVar21;
                }
                else {
                  bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                              (byte *)str_1000d4ef);
                  if (bVar19) {
                    if (*(int *)(param_1 + 0x894) != 0) {
LAB_10008cfc:
                      uVar21 = 0;
                      goto LAB_1000914c;
                    }
                    *(undefined4 *)(param_1 + 0x894) = 1;
                    *(undefined4 *)(param_1 + 0xa98) = 0;
                    recovered_1000b5f0((long)param_1,&DAT_1000cbe5,2);
                    if (DAT_10014bb0 == '\0') {
                      recovered_10002a8c((char *)&pppppppbStack_290,0x100,str_1000d527,&DAT_10014cb0
                                        );
                      recovered_1000b640((long)param_1,(undefined1 *)&pppppppbStack_290);
                    }
                    else {
                      pcVar39 = &DAT_10014bb0;
                      pcVar32 = &DAT_10014bb0;
                      cVar33 = DAT_10014bb0;
                      if (DAT_10014bb0 != '\0') goto LAB_100088d8;
                      cVar34 = '\0';
                      pcVar40 = pcVar39;
LAB_1000891c:
                      if (pcVar32 < pcVar40) {
                        recovered_1000b5f0((long)param_1,pcVar32,(int)pcVar40 - (int)pcVar32);
                        cVar34 = *pcVar40;
                      }
                      if (cVar34 != '\0') {
                        recovered_1000b5f0((long)param_1,&DAT_1000cbe5,2);
                        do {
                          pcVar32 = pcVar40 + 1;
                          pcVar39 = pcVar40;
                          while( true ) {
                            pcVar39 = pcVar39 + 1;
                            cVar33 = *pcVar39;
                            cVar34 = '\0';
                            pcVar40 = pcVar39;
                            if (cVar33 == '\0') goto LAB_1000891c;
LAB_100088d8:
                            if (cVar33 == '\r') break;
                            if (cVar33 == '\n') {
                              cVar34 = '\n';
                              pcVar40 = pcVar39;
                              goto LAB_1000891c;
                            }
                          }
                          if (pcVar32 < pcVar39) {
                            recovered_1000b5f0((long)param_1,pcVar32,(int)pcVar39 - (int)pcVar32);
                          }
                          recovered_1000b5f0((long)param_1,&DAT_1000cbe5,2);
                          pcVar40 = pcVar39 + 1;
                          if (pcVar39[1] != '\n') {
                            pcVar40 = pcVar39;
                          }
                        } while( true );
                      }
                      recovered_1000b5f0((long)param_1,&DAT_1000d522,4);
                    }
                    recovered_1000a738((long)param_1);
                    recovered_100097c0();
                  }
                  else {
                    bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,&DAT_1000d4f5
                                               );
                    if (bVar19) {
                      if ((*(int *)(param_1 + 0x894) != 0) ||
                         (bVar19 = recovered_1000a884(&uStack_550,(undefined1 *)&pppppppbStack_290,
                                                      0x200), !bVar19)) goto LAB_10008cfc;
                      *(undefined4 *)(param_1 + 0x894) = 2;
                      recovered_1000a7c8(param_1,str_1000d4fa);
                      bVar19 = recovered_1000b56c((byte *)&pppppppbStack_290);
                      if (bVar19) {
                        uVar21 = 1;
                        if ((param_1[0xde3] & 1) == 0) {
                          param_1[0xde3] = 1;
                          *(undefined4 *)(param_1 + 0xde8) = 0;
                        }
                        goto LAB_1000914c;
                      }
                      recovered_1000b5c0((long)param_1,(undefined1 *)&pppppppbStack_290);
                    }
                    else {
                      bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                                  (byte *)str_1000d503);
                      if (bVar19) {
                        uVar21 = recovered_1000a854(&uStack_550);
                        *(uint *)(param_1 + 0x88c) = uVar21;
                        uVar21 = recovered_1000a854(&uStack_550);
                        *(uint *)(param_1 + 0x890) = uVar21;
                      }
                      else {
                        bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                                    &DAT_1000d511);
                        if (((!bVar19) &&
                            (bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                                         (byte *)str_1000d515), !bVar19)) &&
                           (bVar19 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                                        (byte *)str_1000d51c), !bVar19))
                        goto LAB_10008cfc;
                      }
                    }
                  }
                  uVar21 = 1;
                }
LAB_1000914c:
                if (bVar18) {
                  uVar31 = 99;
                  if ((uVar21 & 1) == 0) {
                    uVar31 = 100;
                  }
                  goto LAB_10009160;
                }
              }
              else if ((bVar18 & param_1[0x870]) == 1) {
                uVar31 = 100;
LAB_10009160:
                recovered_1000a9c4((long)param_1,uVar31);
              }
            }
          }
          break;
        default:
          switch((uintptr_t)(cVar33)) {
          case '\x01':
            uStack_548 = (byte *)(ulong)uVar21;
            uStack_540 = (uint)PF_PART3(uStack_540, 1) << 8;
            uStack_550 = pppppppbVar44;
            recovered_1000a828(&uStack_550);
            recovered_1000a854(&uStack_550);
            recovered_1000a884(&uStack_550,(undefined1 *)&pppppppbStack_290,0x100);
            recovered_1000a7c8(param_1,str_1000d15b);
            param_1[0xdec] = 1;
            uVar42 = recovered_100040a8();
            *(int *)(param_1 + 0xdf0) = (int)uVar42;
            if (*(uint **)(param_1 + 8) != (uint *)0x0) {
              recovered_1000a70c(*(uint **)(param_1 + 8),uVar42);
            }
            break;
          case '\x02':
          case '\x03':
          case '\x04':
          case '\a':
            break;
          case '\x05':
            uStack_620 = (byte *******)((ulong)PF_PART4(uStack_620, 4) << 0x20);
            uStack_288 = (byte *)(ulong)uVar21;
            bStack_280 = 0;
            pppppppbStack_290 = pppppppbVar44;
            recovered_1000a828((long *)&pppppppbStack_290);
            pbVar25 = (byte *)recovered_1000a900((long *)&pppppppbStack_290,(uint *)&uStack_620);
            if ((*(uint *)(param_1 + 0x14) < 2) || (param_1[0x4b9] == '\x01')) {
              uVar21 = 2;
              pcVar32 = str_1000d173;
            }
            else {
              bVar18 = recovered_1000a968(pbVar25,(ulong)uStack_620 & 0xffffffff,
                                          (byte *)str_1000d197);
              if (bVar18) {
                uStack_550 = *(byte ********)(param_1 + 0x150);
                uStack_548 = pbVar3;
                uStack_540 = uStack_540 & 0xffffff00;
                recovered_10009970(&uStack_550,6);
                recovered_100060c8(&uStack_550,str_1000d197);
                pppppppbVar44 = uStack_550;
                uVar21 = PF_PART4(uStack_548, 4);
                goto LAB_10008128;
              }
              uVar21 = 7;
              pcVar32 = str_1000d1a4;
            }
            goto LAB_100084bc;
          case '\x06':
            goto switchD_10008000_caseD_6;
          default:
            if (cVar33 == '\x14') {
              if (uVar21 < 0x2001) {
                uStack_618 = (ulong)uVar21;
                uStack_610 = (ulong)PF_PART7(uStack_610, 1) << 8;
                uStack_620 = pppppppbVar44;
                recovered_1000a828(&uStack_620);
                if ((uStack_610 & 1) == 0) {
                  if ((int)uStack_618 - PF_PART4(uStack_618, 4) < 0x10) goto LAB_100084f4;
                  uStack_618 = CONCAT44(PF_PART4(uStack_618, 4) + 0x10,(int)uStack_618);
                }
                else {
LAB_100084f4:
                  uStack_610 = CONCAT71(PF_PART7(uStack_610, 1),1);
                }
                puVar43 = (uint *)&uStack_550;
                for (lVar28 = 0; lVar28 != 0x50; lVar28 = lVar28 + 8) {
                  lVar37 = recovered_1000a900(&uStack_620,puVar43);
                  *(long *)(auStack_2b0 + lVar28 + 0x20) = lVar37;
                  puVar43 = puVar43 + 1;
                }
                bVar18 = recovered_1000a9a8(&uStack_620);
                recovered_1000a854(&uStack_620);
                if ((uStack_610 & 1) != 0) {
                  pcVar32 = str_1000d20c;
                  goto LAB_10008780;
                }
                recovered_10005438((undefined1 *)pppppppbVar44,(ulong)uVar21);
                recovered_100012ac(*(undefined1 **)(param_1 + 0x4c0),(undefined1 *)pppppppbVar44,
                                   (ulong)uVar21);
                *(uint *)(param_1 + 0x4c8) = uVar21;
                param_1[0x4bb] = 1;
                uVar46 = uVar46 & 0xffffffff;
                if ((param_1[0x4ba] & 1) == 0) {
                  recovered_10009868((long)param_1);
                }
                pppppppbVar44 = pppppppbStack_290;
                uVar42 = recovered_1000aa84((long)pppppppbStack_290,(uint)uStack_550,
                                            (byte *)str_1000d21e);
                if ((uVar42 & 1) == 0) {
                  uVar42 = recovered_1000aa84((long)pppppppbVar44,(uint)uStack_550,
                                              (byte *)str_1000d230);
                  if ((uVar42 & 1) == 0) {
                    uVar21 = 3;
                    pcVar32 = str_1000d24d;
                    goto LAB_100084bc;
                  }
                }
                pbVar25 = uStack_288;
                uVar42 = recovered_1000aa84((long)uStack_288,PF_PART4(uStack_550, 4),
                                            (byte *)(str_1000c44e + 10));
                if ((uVar42 & 1) == 0) {
                  uVar21 = 3;
                  pcVar32 = str_1000d27d;
                }
                else {
                  uVar22 = recovered_1000ab4c(CONCAT71(uStack_27f,bStack_280),(uint)uStack_548);
                  *(undefined4 *)(param_1 + 0x818) = uVar22;
                  iVar20 = recovered_1000ab4c(lStack_278,PF_PART4(uStack_548, 4));
                  *(int *)(param_1 + 0x81c) = iVar20;
                  if ((iVar20 == 0) || (*(int *)(param_1 + 0x818) == 0)) {
                    uVar21 = 3;
                    pcVar32 = str_1000d2aa;
                  }
                  else {
                    if (*(int *)(param_1 + 0x818) == 1) {
                      uVar22 = 0;
                    }
                    else {
                      uVar22 = recovered_1000ac50(lStack_270,uStack_540);
                      iVar20 = *(int *)(param_1 + 0x81c);
                    }
                    *(undefined4 *)(param_1 + 0x820) = uVar22;
                    if (iVar20 == 1) {
                      iVar20 = 0;
                    }
                    else {
                      iVar20 = recovered_1000ac50(lStack_268,uStack_53c);
                    }
                    *(int *)(param_1 + 0x824) = iVar20;
                    if (((*(int *)(param_1 + 0x818) == 1) || (*(int *)(param_1 + 0x820) != 0)) &&
                       ((iVar20 != 0 || (*(int *)(param_1 + 0x81c) == 1)))) {
                      uVar29 = recovered_1000aa84(lStack_260,uStack_538,&DAT_1000c898);
                      if (((int)uVar29 != 0) &&
                         (uVar42 = recovered_1000aa84(lStack_258,uStack_534,&DAT_1000c898),
                         (uVar42 & 1) != 0)) {
                        if (bVar18) {
                          bVar18 = recovered_1000ad34((byte *)pppppppbVar44,
                                                      (ulong)uStack_550 & 0xffffffff,
                                                      (byte *)str_1000d21e);
                          if (bVar18) {
                            bVar18 = true;
                          }
                          else {
                            bVar18 = recovered_1000ad34((byte *)pppppppbVar44,
                                                        (ulong)uStack_550 & 0xffffffff,
                                                        (byte *)str_1000d230);
                          }
                          bVar19 = recovered_1000ad34(pbVar25,(ulong)uStack_550 >> 0x20,
                                                      (byte *)(str_1000c44e + 10
                                                              ));
                          param_1[0x4bc] = bVar18 & bVar19 ^ 1;
                        }
                        break;
                      }
                      uVar21 = 3;
                      pcVar32 = str_1000d2cd;
                    }
                    else {
                      uVar21 = 3;
                      pcVar32 = str_1000d2bd;
                    }
                  }
                }
              }
              else {
                uVar21 = 3;
                pcVar32 = str_1000d1fa;
              }
            }
            else if (cVar33 == '\x15') {
              if ((param_1[0x4b9] == '\x01') && ((param_1[0x814] & 1) != 0)) {
                recovered_100012ac(param_1 + 0x160,param_1 + 0x4dc,0x19c);
                param_1[0x829] = 1;
                recovered_10005318(param_1 + 0x4dc,0x19c);
                recovered_10005318(param_1 + 0x678,0x19c);
                param_1[0x814] = 0;
                if (param_1[0x828] == '\x01') {
                  *(undefined2 *)(param_1 + 0x4b9) = 0;
                  param_1[0x4bb] = 0;
                  if (*(int *)(param_1 + 0x14) == 1) {
                    *(undefined4 *)(param_1 + 0x14) = 2;
                  }
                }
                break;
              }
              uVar21 = 2;
              pcVar32 = str_1000d339;
            }
            else if (cVar33 == '\x1e') {
              uStack_63c = 0;
              if (((param_1[0x4b9] == '\x01') && (param_1[0x4bb] == '\x01')) &&
                 ((param_1[0x4ba] & 1) != 0)) {
                uStack_62c = 0;
                bStack_628 = 0;
                pppppppbStack_638 = pppppppbVar44;
                uStack_630 = uVar21;
                recovered_1000a828((long *)&pppppppbStack_638);
                puVar26 = (undefined1 *)recovered_1000a900((long *)&pppppppbStack_638,&uStack_63c);
                if (((bStack_628 & 1) == 0) && (uStack_63c == 0x20)) {
                  recovered_10005438(puVar26,0x20);
                  recovered_100053b4();
                  recovered_10005c4c(auStack_65c,0x20);
                  recovered_1000ad98((long)(abStack_69c + 0x20),(long)auStack_65c,((uintptr_t)pf_module_state + 0x879U));
                  recovered_1000ad98((long)abStack_69c,(long)auStack_65c,(long)puVar26);
                  bVar18 = recovered_1000a7fc(abStack_69c,&DAT_1000c89d,0x20);
                  if (bVar18) {
                    recovered_10005318(auStack_65c,0x20);
                    uVar21 = 3;
                    pcVar32 = str_1000d388;
                  }
                  else {
                    pppppppbStack_290 = appppppbStack_6c4;
                    uStack_288 = pbVar4;
                    bStack_280 = 0;
                    for (lVar28 = 0; lVar28 != 0x20; lVar28 = lVar28 + 1) {
                      if (abStack_69c[lVar28] != 0) {
                        iVar20 = (int)lVar28;
                        if ((char)abStack_69c[lVar28] < '\0') {
                          recovered_10006968((long *)&pppppppbStack_290,0x21 - iVar20);
                          recovered_10009970((long *)&pppppppbStack_290,0);
                          uVar21 = 0x20 - iVar20;
                        }
                        else {
                          uVar21 = 0x20 - iVar20;
                          recovered_10006968((long *)&pppppppbStack_290,uVar21);
                        }
                        recovered_10006990((long *)&pppppppbStack_290,abStack_69c + lVar28,uVar21);
                        goto LAB_10008d34;
                      }
                    }
                    recovered_10006968((long *)&pppppppbStack_290,0);
LAB_10008d34:
                    uVar42 = (ulong)uStack_288 >> 0x20;
                    uStack_798 = uVar6;
                    uStack_7a0 = uVar5;
                    uStack_788 = uVar8;
                    uStack_790 = uVar7;
                    uStack_780 = 0;
                    uStack_738 = 0;
                    lVar28 = recovered_10001788((long)puVar1);
                    uVar21 = ((uint)lVar28 & 0xff00ff00) >> 8 | ((uint)lVar28 & 0xff00ff) << 8;
                    uStack_7a4 = uVar21 >> 0x10 | uVar21 << 0x10;
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    uVar45 = recovered_10001788((long)puVar1);
                    recovered_1000611c((uint *)&uStack_7a0,puVar1,uVar45);
                    lVar28 = recovered_10001788(((uintptr_t)pf_module_state + 0x135dU));
                    uVar21 = ((uint)lVar28 & 0xff00ff00) >> 8 | ((uint)lVar28 & 0xff00ff) << 8;
                    uStack_7a4 = uVar21 >> 0x10 | uVar21 << 0x10;
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    uVar45 = recovered_10001788(((uintptr_t)pf_module_state + 0x135dU));
                    recovered_1000611c((uint *)&uStack_7a0,
                                       str_1000d3a1,uVar45);
                    uVar21 = (*(uint *)(param_1 + 0x4c8) & 0xff00ff00) >> 8 |
                             (*(uint *)(param_1 + 0x4c8) & 0xff00ff) << 8;
                    uStack_7a4 = uVar21 >> 0x10 | uVar21 << 0x10;
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    recovered_1000611c((uint *)&uStack_7a0,*(undefined1 **)(param_1 + 0x4c0),
                                       (ulong)*(uint *)(param_1 + 0x4c8));
                    uVar21 = (*(uint *)(param_1 + 0x4d8) & 0xff00ff00) >> 8 |
                             (*(uint *)(param_1 + 0x4d8) & 0xff00ff) << 8;
                    uStack_7a4 = uVar21 >> 0x10 | uVar21 << 0x10;
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    recovered_1000611c((uint *)&uStack_7a0,*(undefined1 **)(param_1 + 0x4d0),
                                       (ulong)*(uint *)(param_1 + 0x4d8));
                    uVar21 = (DAT_1001499c & 0xff00ff00) >> 8 | (DAT_1001499c & 0xff00ff) << 8;
                    uStack_7a4 = uVar21 >> 0x10 | uVar21 << 0x10;
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    recovered_1000611c((uint *)&uStack_7a0,&DAT_10014968,(ulong)DAT_1001499c);
                    uStack_7a4 = 0x20000000;
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    recovered_1000611c((uint *)&uStack_7a0,puVar26,0x20);
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)&uStack_7a4,4);
                    recovered_1000611c((uint *)&uStack_7a0,abStack_69c + 0x20,0x20);
                    recovered_1000611c((uint *)&uStack_7a0,(undefined1 *)appppppbStack_6c4,uVar42);
                    recovered_1000618c((uint *)&uStack_7a0,(long)auStack_6e4);
                    if ((param_1[0x4b8] & 1) == 0) {
                      recovered_100012ac(param_1 + 0x498,auStack_6e4,0x20);
                      param_1[0x4b8] = 1;
                    }
                    recovered_10006240(&DAT_10014928,0x20,auStack_2d0);
                    PF_PART4(auStack_2d0[0], 0) = (uint)auStack_2d0[0] & 0xfffffff8;
                    bStack_2b1 = bStack_2b1 & 0x3f | 0x40;
                    uStack_618 = uVar10;
                    uStack_620 = (byte *******)uVar9;
                    uStack_608 = uVar12;
                    uStack_610 = uVar11;
                    uStack_5f8 = uVar14;
                    uStack_600 = uVar13;
                    uStack_5e8 = uVar16;
                    uStack_5f0 = uVar15;
                    uStack_5e0 = 0;
                    uStack_558 = 0;
                    recovered_10005538(&uStack_620,auStack_2b0,0x20);
                    recovered_10005538(&uStack_620,auStack_6e4,0x20);
                    recovered_10006004(&uStack_620,auStack_310);
                    recovered_1000b2bc((undefined1 *)auStack_310);
                    recovered_100062b0((long)&uStack_550,(long)auStack_310);
                    recovered_100063c4((long)auStack_724,(long)&uStack_550);
                    uStack_618 = uVar10;
                    uStack_620 = (byte *******)uVar9;
                    uStack_608 = uVar12;
                    uStack_610 = uVar11;
                    uStack_5f8 = uVar14;
                    uStack_600 = uVar13;
                    uStack_5e8 = uVar16;
                    uStack_5f0 = uVar15;
                    uStack_5e0 = 0;
                    uStack_558 = 0;
                    recovered_10005538(&uStack_620,auStack_724,0x20);
                    recovered_10005538(&uStack_620,(undefined1 *)((uintptr_t)pf_module_state + 0x8904U),0x20);
                    recovered_10005538(&uStack_620,auStack_6e4,0x20);
                    recovered_10006004(&uStack_620,auStack_350);
                    recovered_1000b2bc((undefined1 *)auStack_350);
                    for (lVar28 = 0; lVar28 != 0x200; lVar28 = lVar28 + 8) {
                      *(undefined8 *)(auStack_2b0 + lVar28 + 0x20) = 0;
                    }
                    for (lVar28 = 0; lVar28 != 0x20; lVar28 = lVar28 + 1) {
                      *(ulong *)(auStack_2b0 + lVar28 * 8 + 0x20) =
                           (ulong)*(byte *)((long)auStack_310 + lVar28);
                    }
                    pppppppbVar44 = (byte *******)&pppppppbStack_290;
                    for (lVar28 = 0; lVar28 != 0x20; lVar28 = lVar28 + 1) {
                      bVar17 = *(byte *)((long)auStack_350 + lVar28);
                      for (lVar37 = 0; lVar37 != 0x20; lVar37 = lVar37 + 1) {
                        pppppppbVar44[lVar37] =
                             (byte ******)
                             ((long)pppppppbVar44[lVar37] +
                             (ulong)*(byte *)((long)auStack_2d0 + lVar37) * (ulong)bVar17);
                      }
                      pppppppbVar44 = pppppppbVar44 + 1;
                    }
                    recovered_1000b318(auStack_704,(long *)&pppppppbStack_290);
                    recovered_10005318((undefined1 *)auStack_2d0,0x40);
                    recovered_10005318((undefined1 *)auStack_310,0x40);
                    recovered_10005318((undefined1 *)&pppppppbStack_290,0x200);
                    uStack_550 = *(byte ********)(param_1 + 0x150);
                    uStack_548 = pbVar3;
                    uStack_540 = uStack_540 & 0xffffff00;
                    recovered_10009970(&uStack_550,0x1f);
                    recovered_100060e8(&uStack_550,&DAT_10014968,DAT_1001499c);
                    recovered_100060e8(&uStack_550,abStack_69c + 0x20,0x20);
                    uStack_620 = (byte *******)&pppppppbStack_290;
                    uStack_618 = uVar30;
                    uStack_610 = uStack_610 & 0xffffffffffffff00;
                    recovered_100060c8(&uStack_620,str_1000c44e + 10);
                    recovered_100060e8(&uStack_620,auStack_724,0x40);
                    recovered_100060e8(&uStack_550,(undefined1 *)&pppppppbStack_290,PF_PART4(uStack_618, 4)
                                      );
                    recovered_1000b048((ulong *)(param_1 + 0x4dc),*(int *)(param_1 + 0x818),
                                       *(int *)(param_1 + 0x820),(long)param_1,
                                       (undefined1 *)appppppbStack_6c4,uVar42,auStack_6e4,0);
                    recovered_1000b048((ulong *)(param_1 + 0x678),*(int *)(param_1 + 0x81c),
                                       *(int *)(param_1 + 0x824),(long)param_1,
                                       (undefined1 *)appppppbStack_6c4,uVar42,auStack_6e4,1);
                    param_1[0x814] = 1;
                    recovered_10005318(auStack_65c,0x20);
                    recovered_10005318(abStack_69c,0x20);
                    recovered_10005318((undefined1 *)appppppbStack_6c4,0x28);
                    uVar42 = recovered_10009994((long)param_1,(undefined1 *)uStack_550,
                                                PF_PART4(uStack_548, 4));
                    if ((uVar42 & 1) == 0) {
                      uVar21 = 2;
                      pcVar32 = str_1000d3c4;
                    }
                    else {
                      pppppppbStack_290 = (byte *******)CONCAT71(PF_PART7(pppppppbStack_290, 1),0x15);
                      uVar42 = recovered_10009994((long)param_1,(undefined1 *)&pppppppbStack_290,1);
                      if ((uVar42 & 1) != 0) {
                        recovered_100012ac(param_1 + 0x2fc,param_1 + 0x678,0x19c);
                        param_1[0x828] = 1;
                        if (param_1[0x829] == '\x01') {
                          *(undefined2 *)(param_1 + 0x4b9) = 0;
                          param_1[0x4bb] = 0;
                        }
                        break;
                      }
                      uVar21 = 2;
                      pcVar32 = str_1000d3dd;
                    }
                  }
                }
                else {
                  uVar21 = 3;
                  pcVar32 = str_1000d36f;
                }
              }
              else {
                uVar21 = 2;
                pcVar32 = str_1000d34c;
              }
            }
            else {
              if (cVar33 != '2') goto switchD_10008000_caseD_6;
              if ((*(uint *)(param_1 + 0x14) < 2) || (param_1[0x4b9] == '\x01')) {
                uVar21 = 2;
                pcVar32 = str_1000d1b4;
              }
              else {
                uStack_7a0 = uStack_7a0 & 0xffffffff00000000;
                PF_PART4(auStack_2d0[0], 0) = 0;
                if ((param_1[0x82a] & 1) != 0) break;
                uStack_618 = (ulong)uVar21;
                uStack_610 = (ulong)PF_PART7(uStack_610, 1) << 8;
                uStack_620 = pppppppbVar44;
                recovered_1000a828(&uStack_620);
                recovered_1000a884(&uStack_620,(undefined1 *)&pppppppbStack_290,0x40);
                pbVar25 = (byte *)recovered_1000a900(&uStack_620,(uint *)&uStack_7a0);
                pbVar27 = (byte *)recovered_1000a900(&uStack_620,(uint *)auStack_2d0);
                if (((uStack_610 & 1) != 0) ||
                   (bVar18 = recovered_1000a968(pbVar25,uStack_7a0 & 0xffffffff,(byte *)str_1000d3f4
                                               ), !bVar18)) {
                  uVar21 = 7;
                  pcVar32 = str_1000d403;
                }
                else {
                  bVar18 = recovered_1000a968(pbVar27,(ulong)(uint)auStack_2d0[0],
                                              (byte *)str_1000cc51);
                  if (bVar18) {
                    uStack_550 = (byte *******)((ulong)uStack_550 & 0xffffffff00000000);
                    recovered_1000a9a8(&uStack_620);
                    lVar28 = recovered_1000a900(&uStack_620,(uint *)&uStack_550);
                    if ((((uStack_610 & 1) == 0) && (lVar28 != 0)) &&
                       (bVar18 = recovered_1000b520((byte *)&pppppppbStack_290), bVar18)) {
                      uVar45 = (ulong)uStack_550 & 0xffffffff;
                      uVar42 = recovered_10001788(((uintptr_t)pf_module_state + 0x8adeU));
                      iVar20 = recovered_100017ac(&DAT_10014b22,&DAT_1000cb44);
                      if (iVar20 == 0) {
                        uVar46 = uVar46 & 0xffffffff;
                      }
                      else {
                        bVar17 = uVar42 != uVar45;
                        for (uVar35 = 0; uVar42 != uVar35; uVar35 = uVar35 + 1) {
                          if (uVar35 < uVar45) {
                            bVar36 = *(byte *)(lVar28 + uVar35);
                          }
                          else {
                            bVar36 = 0;
                          }
                          bVar17 = (&DAT_10014b22)[uVar35] ^ bVar36 | bVar17;
                        }
                        uVar46 = uVar46 & 0xffffffff;
                        if (bVar17 != 0) goto LAB_10009174;
                      }
LAB_10009204:
                      uStack_550 = (byte *******)CONCAT71(PF_PART7(uStack_550, 1),0x34);
                      uVar42 = recovered_10001788((long)&pppppppbStack_290);
                      recovered_10005b58(param_1 + 0x830,0x40,(undefined1 *)&pppppppbStack_290,
                                         uVar42);
                      param_1[0x82a] = 1;
                      *(undefined4 *)(param_1 + 0x14) = 3;
                      recovered_1000a7c8(param_1,str_1000d426);
                      goto LAB_100080a4;
                    }
                  }
                  else {
                    bVar18 = recovered_1000a968(pbVar27,(ulong)(uint)auStack_2d0[0],&DAT_1000c898);
                    if (((bVar18) &&
                        (bVar18 = recovered_1000b520((byte *)&pppppppbStack_290), bVar18)) &&
                       (iVar20 = recovered_100017ac(&DAT_10014b22,&DAT_1000cb44), iVar20 == 0))
                    goto LAB_10009204;
                  }
LAB_10009174:
                  bVar18 = recovered_1000a968(pbVar27,(ulong)(uint)auStack_2d0[0],&DAT_1000c898);
                  if (!bVar18) {
                    recovered_1000a7c8(param_1,str_1000d43e);
                  }
                  uStack_550 = *(byte ********)(param_1 + 0x150);
                  uStack_548 = pbVar3;
                  uStack_540 = uStack_540 & 0xffffff00;
                  recovered_10009970(&uStack_550,0x33);
                  recovered_100060c8(&uStack_550,str_1000cc51);
                  recovered_10009970(&uStack_550,0);
                  recovered_10009994((long)param_1,(undefined1 *)uStack_550,PF_PART4(uStack_548, 4));
                  iVar20 = *(int *)(param_1 + 0x82c);
                  *(uint *)(param_1 + 0x82c) = iVar20 + 1U;
                  if (iVar20 + 1U < 6) break;
                  uVar21 = 0xe;
                  pcVar32 = str_1000d45d;
                }
              }
            }
LAB_100084bc:
            recovered_1000517c(param_1,uVar21,pcVar32);
          }
        }
switchD_10008000_caseD_2:
        recovered_1000a784((long)param_1,uVar41);
        param_2 = extraout_x1_04;
      } while( true );
    }
  } while( true );
  if ((*(int *)(param_1 + 0x14) == 0) && (0x89cb < *(uint *)(param_1 + 0x140))) {
    recovered_1000517c(param_1,2,str_1000d078);
    param_2 = extraout_x1_10;
  }
  if (param_1[0xdec] == '\x01') {
    if (((2999 < (uint)(iVar20 - *(int *)(param_1 + 0xdf0))) || (*puVar38 == 3)) &&
       ((param_1[0xbb9] & 1) == 0)) {
      recovered_100052b0(param_1,param_2);
      return;
    }
    goto LAB_100096f0;
  }
  if ((*puVar38 == 3) && ((param_1[0xde3] & 1) == 0)) {
    param_1[0xde3] = 1;
    param_1[0xdec] = 1;
    *(int *)(param_1 + 0xdf0) = iVar20;
    recovered_1000a70c(puVar38,uVar46);
    return;
  }
  if ((*(int *)(param_1 + 0x14) != 3) && (89999 < (uint)(iVar20 - *(int *)(param_1 + 0x18)))) {
    recovered_1000517c(param_1,0xb,str_1000d08f);
    return;
  }
  if ((((*(int *)(param_1 + 0x894) == 1) && (param_1[0xde2] == '\x01')) &&
      ((param_1[0xde0] & 1) == 0)) && (*(int *)(param_1 + 0xbb4) - 0x8001U < 0xffffffc0)) {
    param_1[0xde2] = 0;
    recovered_1000a738((long)param_1);
    while (((*(int *)(param_1 + 0xba0) != 0 && ((param_1[3000] & 1) == 0)) &&
           (((param_1[0xbb9] & 1) == 0 &&
            (((param_1[0xde0] & 1) == 0 && ((param_1[0xde3] & 1) == 0))))))) {
      bVar17 = param_1[0xa9e];
      recovered_10001384(param_1 + 0xa9e,param_1 + 0xa9f,(ulong)(*(int *)(param_1 + 0xba0) - 1));
      *(int *)(param_1 + 0xba0) = *(int *)(param_1 + 0xba0) + -1;
      recovered_1000b6b4((long)param_1,(uint)bVar17);
    }
  }
  recovered_1000b940((long)param_1);
  while (((((param_1[0x870] == '\x01' && ((param_1[0x871] & 1) == 0)) && ((param_1[0x4b9] & 1) == 0)
           ) && ((uVar21 = *(uint *)(param_1 + 0xbb4), uVar21 != 0 &&
                 (uVar23 = *(uint *)(param_1 + 0x87c), uVar23 != 0)))) &&
         ((bVar18 = recovered_10009c24((long)param_1), bVar18 &&
          (0x40 < *(int *)(*(long *)(param_1 + 8) + 0x4c) - 0x6fc1U >> 6))))) {
    if (uVar23 <= uVar21) {
      uVar21 = uVar23;
    }
    if (*(uint *)(param_1 + 0x880) <= uVar21) {
      uVar21 = *(uint *)(param_1 + 0x880);
    }
    uVar23 = 0x6fc0 - *(int *)(*(long *)(param_1 + 8) + 0x4c);
    pppppppbStack_290 = *(byte ********)(param_1 + 0x150);
    if (uVar23 <= uVar21) {
      uVar21 = uVar23;
    }
    if (0xfff < uVar21) {
      uVar21 = 0x1000;
    }
    uStack_288 = pbVar3;
    bStack_280 = 0;
    recovered_10009970((long *)&pppppppbStack_290,0x5e);
    recovered_10006968((long *)&pppppppbStack_290,*(uint *)(param_1 + 0x878));
    recovered_10006968((long *)&pppppppbStack_290,uVar21);
    pppppppbVar44 = pppppppbStack_290;
    uVar23 = PF_PART4(uStack_288, 4);
    recovered_10007a64(*(undefined1 **)(param_1 + 0xba8),0x8000,*(uint *)(param_1 + 0xbb0),
                       (char *)((long)pppppppbStack_290 + (ulong)PF_PART4(uStack_288, 4)),uVar21);
    uVar30 = recovered_10009994((long)param_1,(undefined1 *)pppppppbVar44,uVar23 + uVar21);
    if ((uVar30 & 1) == 0) break;
    *(uint *)(param_1 + 0xbb0) = *(int *)(param_1 + 0xbb0) + uVar21 & 0x7fff;
    *(uint *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) - uVar21;
    *(uint *)(param_1 + 0x87c) = *(int *)(param_1 + 0x87c) - uVar21;
    recovered_1000b940((long)param_1);
  }
  if ((((param_1[0xde3] == '\x01') && ((param_1[0xde4] & 1) == 0)) && ((param_1[0x4b9] & 1) == 0))
     && ((((((param_1[3000] & 1) == 0 && ((param_1[0xbb9] & 1) == 0)) && ((param_1[0xde0] & 1) == 0)
           ) && (*(int *)(param_1 + 0xbb4) == 0)) || (param_1[0x873] == '\x01')))) {
    if (((param_1[0x870] == '\x01') && ((param_1[0x873] & 1) == 0)) &&
       (bVar18 = recovered_10009c24((long)param_1), bVar18)) {
      if (*(int *)(*(long *)(param_1 + 8) + 0x4c) - 0x7f01U < 0x100) goto LAB_100096b8;
      pppppppbStack_290 = *(byte ********)(param_1 + 0x150);
      uStack_288 = pbVar3;
      bStack_280 = 0;
      recovered_10009970((long *)&pppppppbStack_290,0x62);
      recovered_10006968((long *)&pppppppbStack_290,*(uint *)(param_1 + 0x878));
      recovered_100060c8((long *)&pppppppbStack_290,str_1000d58f);
      recovered_10009970((long *)&pppppppbStack_290,0);
      recovered_10006968((long *)&pppppppbStack_290,*(uint *)(param_1 + 0xde8));
      recovered_10009994((long)param_1,(undefined1 *)pppppppbStack_290,PF_PART4(uStack_288, 4));
      if ((param_1[0x871] & 1) == 0) {
        recovered_1000a9c4((long)param_1,0x60);
        param_1[0x871] = 1;
      }
      if ((param_1[0x872] & 1) == 0) {
        recovered_1000a9c4((long)param_1,0x61);
        param_1[0x872] = 1;
      }
    }
    param_1[0xde4] = 1;
    *(int *)(param_1 + 0xdf0) = iVar20;
    recovered_1000a7c8(param_1,str_1000d59b);
  }
LAB_100096b8:
  if (((param_1[0xde4] == '\x01') && ((param_1[0xdec] & 1) == 0)) &&
     (((param_1[0x873] & 1) != 0 || (2999 < (uint)(iVar20 - *(int *)(param_1 + 0xdf0)))))) {
    recovered_1000517c(param_1,0xb,str_1000d09d);
  }
LAB_100096f0:
  recovered_100078b8(puVar38,uVar46);
  return;
}

#undef DAT_1000c0d0
#undef DAT_1000c108
#undef DAT_1000c110
#undef DAT_1000c120
#undef DAT_1000c130
#undef DAT_1000c140
#undef DAT_1000c150
#undef DAT_1000c160
#undef DAT_1000c170
#undef DAT_1000c898
#undef DAT_1000c89d
#undef DAT_1000ca82
#undef DAT_1000cb44
#undef DAT_1000cbe5
#undef DAT_1000d0c9
#undef DAT_1000d4f5
#undef DAT_1000d511
#undef DAT_1000d522
#undef DAT_10014928
#undef DAT_10014968
#undef DAT_1001499c
#undef DAT_10014b22
#undef DAT_10014bb0
#undef DAT_10014cb0
#undef UNK_1000c128
#undef UNK_1000c138
#undef UNK_1000c148
#undef UNK_1000c158
#undef UNK_1000c168
#undef UNK_1000c178
#undef _DAT_1000c120
#undef _DAT_1000c130
#undef _DAT_1000c140
#undef _DAT_1000c150
#undef _DAT_1000c160
#undef _DAT_1000c170
#undef str_1000c44e
#undef str_1000cc51
#undef str_1000d078
#undef str_1000d08f
#undef str_1000d09d
#undef str_1000d0ac
#undef str_1000d0ce
#undef str_1000d0d7
#undef str_1000d0e0
#undef str_1000d0fd
#undef str_1000d107
#undef str_1000d119
#undef str_1000d132
#undef str_1000d14f
#undef str_1000d15b
#undef str_1000d173
#undef str_1000d197
#undef str_1000d1a4
#undef str_1000d1b4
#undef str_1000d1d7
#undef str_1000d1fa
#undef str_1000d20c
#undef str_1000d21e
#undef str_1000d230
#undef str_1000d24d
#undef str_1000d27d
#undef str_1000d2aa
#undef str_1000d2bd
#undef str_1000d2cd
#undef str_1000d339
#undef str_1000d34c
#undef str_1000d36f
#undef str_1000d388
#undef str_1000d3a1
#undef str_1000d3c4
#undef str_1000d3dd
#undef str_1000d3f4
#undef str_1000d403
#undef str_1000d426
#undef str_1000d43e
#undef str_1000d45d
#undef str_1000d47e
#undef str_1000d495
#undef str_1000d49d
#undef str_1000d4c3
#undef str_1000d4e7
#undef str_1000d4ef
#undef str_1000d4fa
#undef str_1000d503
#undef str_1000d515
#undef str_1000d51c
#undef str_1000d527
#undef str_1000d55b
#undef str_1000d58f
#undef str_1000d59b
#undef uRam000000001000c128
#undef uRam000000001000c138
#undef uRam000000001000c148
#undef uRam000000001000c158
#undef uRam000000001000c168
#undef uRam000000001000c178
#undef uStack_7ac
#undef uStack_7a8
#undef uStack_7a7
#undef uStack_7a6
#undef uStack_7a5
#undef uStack_7a4
#undef uStack_7a0
#undef uStack_798
#undef uStack_790
#undef uStack_788
#undef uStack_780
#undef uStack_738
#undef auStack_724
#undef auStack_704
#undef auStack_6e4
#undef appppppbStack_6c4
#undef abStack_69c
#undef auStack_65c
#undef uStack_63c
#undef pppppppbStack_638
#undef uStack_630
#undef uStack_62c
#undef bStack_628
#undef uStack_620
#undef uStack_618
#undef uStack_610
#undef uStack_608
#undef uStack_600
#undef uStack_5f8
#undef uStack_5f0
#undef uStack_5e8
#undef uStack_5e0
#undef uStack_558
#undef uStack_550
#undef uStack_548
#undef uStack_540
#undef uStack_53c
#undef uStack_538
#undef uStack_534
#undef auStack_350
#undef auStack_310
#undef auStack_2d0
#undef bStack_2b1
#undef auStack_2b0
#undef pppppppbStack_290
#undef uStack_288
#undef bStack_280
#undef uStack_27f
#undef lStack_278
#undef lStack_270
#undef lStack_268
#undef lStack_260
#undef lStack_258

#undef DAT_10014908
#define DAT_10014908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009744
 */

void recovered_10009744(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DataMemoryBarrier(2,3);
  *(undefined1 *)(param_1 + 0xbb9) = 0;
  DAT_10014908 = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xdc0) + 0xffff) = 0;
  *(char **)(param_1 + 0xdd8) = *(char **)(param_1 + 0xdc0);
  *(undefined2 *)(param_1 + 0xde0) = 1;
  if (*(int *)(param_1 + 0x894) == 2) {
    if ((*(byte *)(param_1 + 0xde3) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xde3) = 1;
      *(uint *)(param_1 + 0xde8) = (uint)(*(int *)(param_1 + 0xdcc) == 0);
    }
  }
  else if (*(int *)(param_1 + 0x894) == 1) {
    *(undefined1 *)(param_1 + 0xde2) = 1;
  }
  if (**(char **)(param_1 + 0xdc0) == '\0') {
    *(undefined1 *)(param_1 + 0xde0) = 0;
    return;
  }
  return;
}

#undef DAT_10014908

#undef str_1000d042
#define str_1000d042 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097c0
 */

void recovered_100097c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long in_x0;
  void *in_x1;

  recovered_100040ec(str_1000d042,*(uint *)(in_x0 + 4),(void *)(in_x0 + 0x120),in_x1);
  return;
}

#undef str_1000d042

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097f4
 */

undefined8 recovered_100097f4(uint *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((*param_1 & 0xfffffffe) != 2) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x55) & 1) == 0) && (param_3 <= 0x8000 - param_1[0x13])) {
    recovered_10007858(*(undefined1 **)(param_1 + 0x10),0x8000,
                       param_1[0x12] + param_1[0x13] & 0x7fff,param_2,param_3);
    param_1[0x13] = param_1[0x13] + param_3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef DAT_1000c898
#define DAT_1000c898 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x854U)))
#undef DAT_1000ca82
#define DAT_1000ca82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3eU)))
#undef str_1000c44e
#define str_1000c44e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40aU)))
#undef str_1000c719
#define str_1000c719 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d5U)))
#undef str_1000c748
#define str_1000c748 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x704U)))
#undef str_1000c77c
#define str_1000c77c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x738U)))
#undef str_1000d051
#define str_1000d051 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100dU)))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 40))
#define local_30 (*(undefined8 *)(pf_stack_frame + 48))
#define local_28 (*(undefined1 *)(pf_stack_frame + 56))
#define auStack_48 (*(undefined1 (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009868
 */

ulong recovered_10009868(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ulong extraout_x0;
  ulong uVar1;

  local_38 = *(undefined1 **)(param_1 + 0x4d0);
  local_30 = DAT_1000c0d0;
  local_28 = 0;
  recovered_10005c4c(auStack_48,0x10);
  recovered_10009970((long *)&local_38,0x14);
  recovered_10006990((long *)&local_38,auStack_48,0x10);
  recovered_100060c8((long *)&local_38,str_1000c719);
  recovered_100060c8((long *)&local_38,str_1000c44e + 10);
  recovered_100060c8((long *)&local_38,str_1000c748);
  recovered_100060c8((long *)&local_38,str_1000c748);
  recovered_100060c8((long *)&local_38,str_1000c77c);
  recovered_100060c8((long *)&local_38,str_1000c77c);
  recovered_100060c8((long *)&local_38,&DAT_1000c898);
  recovered_100060c8((long *)&local_38,&DAT_1000c898);
  recovered_100060c8((long *)&local_38,&DAT_1000ca82);
  recovered_100060c8((long *)&local_38,&DAT_1000ca82);
  recovered_10009970((long *)&local_38,0);
  recovered_10006968((long *)&local_38,0);
  *(uint *)(param_1 + 0x4d8) = PF_PART4(local_30, 4);
  *(undefined2 *)(param_1 + 0x4b9) = 0x101;
  *(undefined2 *)(param_1 + 0x828) = 0;
  *(undefined1 *)(param_1 + 0x814) = 0;
  uVar1 = recovered_10009994(param_1,local_38,PF_PART4(local_30, 4));
  if ((uVar1 & 1) == 0) {
    recovered_1000517c((void *)param_1,2,str_1000d051);
    uVar1 = extraout_x0;
  }
  return uVar1;
}

#undef DAT_1000c0d0
#undef DAT_1000c898
#undef DAT_1000ca82
#undef str_1000c44e
#undef str_1000c719
#undef str_1000c748
#undef str_1000c77c
#undef str_1000d051
#undef local_38
#undef local_30
#undef local_28
#undef auStack_48

#define local_11 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009970
 */

void recovered_10009970(long *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_11 = param_2;
  recovered_10006990(param_1,&local_11,1);
  return;
}

#undef local_11

#define auStack_fc (*(ulong (*)[31])(pf_stack_frame + 20))
#define local_b0 (*(uint (*)[44])(pf_stack_frame + 96))
#define local_70 (*(undefined4 *)(pf_stack_frame + 160))
#define local_6c (*(undefined1 *)(pf_stack_frame + 164))
#define local_6b (*(undefined1 *)(pf_stack_frame + 165))
#define local_6a (*(undefined1 *)(pf_stack_frame + 166))
#define local_69 (*(undefined1 *)(pf_stack_frame + 167))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009994
 */

undefined8 recovered_10009994(long param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;

  puVar11 = *(uint **)(param_1 + 0x148);
  bVar4 = recovered_10009c24(param_1);
  if (0x8898 < param_3) {
    return 0;
  }
  if (!bVar4) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x2fc);
  if (iVar2 - 2U < 2) {
    uVar10 = *(uint *)(param_1 + 0x490);
    uVar7 = 0x10;
    uVar8 = 0xf;
    iVar9 = 5;
  }
  else {
    iVar9 = 1;
    if (iVar2 != 1) {
      iVar9 = 5;
    }
    uVar8 = 7;
    uVar7 = 8;
    uVar10 = 0x10;
    if (iVar2 != 1) {
      uVar10 = 0;
    }
  }
  uVar8 = uVar7 - (iVar9 + param_3 & uVar8);
  if (3 < uVar8) {
    uVar7 = 0;
  }
  uVar7 = uVar7 | uVar8;
  uVar8 = param_3 + uVar7 + 5;
  uVar12 = (ulong)uVar8;
  uVar8 = uVar8 + uVar10;
  if (0x8000U - *(int *)(*(long *)(param_1 + 8) + 0x4c) < uVar8) {
    return 0;
  }
  uVar1 = param_3 + uVar7 + 1;
  *(undefined1 *)puVar11 = 0;
  *(char *)((long)puVar11 + 1) = (char)(uVar1 >> 0x10);
  *(char *)((long)puVar11 + 2) = (char)(uVar1 >> 8);
  *(char *)((long)puVar11 + 3) = (char)uVar1;
  puVar13 = puVar11 + 1;
  *(char *)puVar13 = (char)uVar7;
  recovered_100012ac((undefined1 *)((long)puVar11 + 5),param_2,(ulong)param_3);
  recovered_10005c4c((undefined1 *)((long)puVar11 + 5) + param_3,(ulong)uVar7);
  if (*(int *)(param_1 + 0x2fc) - 2U < 2) {
    uVar7 = (*(uint *)(param_1 + 0x15c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x15c) & 0xff00ff) << 8;
    local_b0[0] = uVar7 >> 0x10 | uVar7 << 0x10;
    if (*(int *)(param_1 + 0x300) == 2) {
      recovered_1000a014((ulong *)(param_1 + 0x44c),*(uint *)(param_1 + 0x48c),
                         (undefined1 *)local_b0,(undefined1 *)puVar11,uVar12,auStack_fc);
    }
    else {
      recovered_1000a1a0((undefined1 *)(param_1 + 0x44c),*(uint *)(param_1 + 0x48c),
                         (undefined1 *)local_b0,(undefined1 *)puVar11,uVar12,(long)auStack_fc);
    }
    recovered_1000a320(param_1 + 0x348,(undefined1 *)(param_1 + 0x43c),(long)puVar11,(long)puVar11,
                       uVar12);
    recovered_100012ac((undefined1 *)((long)puVar13 + (ulong)uVar1),(undefined1 *)auStack_fc,
                       (ulong)uVar10);
    puVar5 = auStack_fc;
  }
  else {
    if (*(int *)(param_1 + 0x2fc) != 1) goto LAB_10009be0;
    uVar3 = *(undefined4 *)(param_1 + 0x15c);
    local_70 = 0;
    local_6c = (undefined1)((uint)uVar3 >> 0x18);
    local_6b = (undefined1)((uint)uVar3 >> 0x10);
    local_6a = (undefined1)((uint)uVar3 >> 8);
    local_69 = (undefined1)uVar3;
    recovered_10005d84((uint *)(param_1 + 0x305),0,(undefined8 *)&local_70,(long)local_b0);
    recovered_10009c54((uint *)(param_1 + 0x325),0,(undefined8 *)&local_70,(long)puVar11,
                       (long)puVar11,4);
    recovered_10009c54((uint *)(param_1 + 0x305),1,(undefined8 *)&local_70,(long)puVar13,
                       (long)puVar13,(ulong)uVar1);
    recovered_10009d18((uint *)auStack_fc,local_b0);
    recovered_10009da8((uint *)auStack_fc,puVar11,uVar12);
    recovered_10009e6c((uint *)auStack_fc,(undefined1 *)((long)puVar13 + (ulong)uVar1));
    puVar5 = (ulong *)local_b0;
  }
  recovered_10005318((undefined1 *)puVar5,0x40);
LAB_10009be0:
  uVar6 = recovered_100097f4(*(uint **)(param_1 + 8),(undefined1 *)puVar11,uVar8);
  if ((int)uVar6 != 0) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    uVar6 = 1;
  }
  return uVar6;
}

#undef auStack_fc
#undef local_b0
#undef local_70
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c24
 */

bool recovered_10009c24(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  puVar1 = *(uint **)(param_1 + 8);
  if ((puVar1 == (uint *)0x0) || (puVar1[1] != *(uint *)(param_1 + 0x10))) {
    return false;
  }
  return (*puVar1 & 0xfffffffe) == 2;
}


#define abStack_a0 (*(byte (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c54
 */

void recovered_10009c54(uint *param_1,long param_2,undefined8 *param_3,long param_4,long param_5,
                       ulong param_6)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;

  for (uVar6 = 0; uVar1 = param_6 - uVar6, uVar6 <= param_6 && uVar1 != 0; uVar6 = uVar1 + uVar6) {
    if (0x3f < uVar1) {
      uVar1 = 0x40;
    }
    recovered_10005d84(param_1,param_2,param_3,(long)abStack_a0);
    pbVar2 = (byte *)(param_5 + uVar6);
    pbVar3 = (byte *)(param_4 + uVar6);
    pbVar4 = abStack_a0;
    for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar2 = *pbVar4 ^ *pbVar3;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    }
    param_2 = param_2 + 1;
  }
  recovered_10005318(abStack_a0,0x40);
  return;
}

#undef abStack_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d18
 */

void recovered_10009d18(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2 & 0x3ffffff;
  param_1[1] = *(uint *)((long)param_2 + 3) >> 2 & 0x3ffff03;
  param_1[2] = *(uint *)((long)param_2 + 6) >> 4 & 0x3ffc0ff;
  param_1[3] = *(uint *)((long)param_2 + 9) >> 6 & 0xfff03fff;
  param_1[4] = param_2[3] >> 8 & 0xfffff;
  recovered_10001498((ulong *)(param_1 + 5),0,0x14);
  param_1[10] = param_2[4];
  param_1[0xb] = param_2[5];
  param_1[0xc] = param_2[6];
  param_1[0xd] = param_2[7];
  param_1[0x12] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009da8
 */

void recovered_10009da8(uint *param_1,uint *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  uVar2 = param_1[0x12];
  if (uVar2 != 0) {
    uVar1 = (ulong)(0x10 - uVar2);
    if (param_3 <= 0x10 - uVar2) {
      uVar1 = param_3;
    }
    recovered_100012ac((undefined1 *)((long)(param_1 + 0xe) + (ulong)uVar2),(undefined1 *)param_2,
                       uVar1);
    uVar2 = param_1[0x12] + (int)uVar1;
    param_1[0x12] = uVar2;
    if (uVar2 < 0x10) {
      return;
    }
    param_3 = param_3 - uVar1;
    param_2 = (uint *)((long)param_2 + uVar1);
    recovered_1000a5d4(param_1,param_1 + 0xe,0x10,0x1000000);
    param_1[0x12] = 0;
  }
  if (0xf < param_3) {
    recovered_1000a5d4(param_1,param_2,param_3 & 0xfffffffffffffff0,0x1000000);
    param_2 = (uint *)((long)param_2 + (param_3 & 0xfffffffffffffff0));
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    recovered_100012ac((undefined1 *)(param_1 + 0xe),(undefined1 *)param_2,param_3);
    param_1[0x12] = (uint)param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e6c
 */

void recovered_10009e6c(uint *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  undefined1 uVar16;
  ulong uVar17;

  uVar15 = param_1[0x12];
  if (uVar15 != 0) {
    uVar16 = 1;
    do {
      *(undefined1 *)((long)(param_1 + 0xe) + (ulong)uVar15) = uVar16;
      uVar16 = 0;
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x10);
    recovered_1000a5d4(param_1,param_1 + 0xe,0x10,0);
  }
  uVar15 = param_1[7] + (param_1[6] >> 0x1a);
  uVar9 = uVar15 & 0x3ffffff;
  uVar15 = param_1[8] + (uVar15 >> 0x1a);
  uVar10 = uVar15 & 0x3ffffff;
  uVar1 = param_1[9] + (uVar15 >> 0x1a);
  uVar15 = (uVar1 >> 0x1a) * 4 + (uVar1 >> 0x1a) + param_1[5];
  uVar11 = uVar15 & 0x3ffffff;
  uVar2 = (param_1[6] & 0x3ffffff) + (uVar15 >> 0x1a);
  uVar15 = uVar11 + 5;
  uVar3 = uVar2 + (uVar15 >> 0x1a);
  uVar4 = uVar9 + (uVar3 >> 0x1a);
  uVar5 = uVar10 + (uVar4 >> 0x1a);
  uVar6 = (uVar1 & 0x3ffffff) + (uVar5 >> 0x1a);
  uVar13 = (int)(uVar6 + 0xfc000000) >> 0x1f;
  uVar12 = 0xffffffff - uVar13 & 0x3ffffff;
  uVar2 = uVar2 & uVar13 | uVar12 & uVar3;
  uVar3 = uVar9 & uVar13 | uVar12 & uVar4;
  uVar4 = uVar10 & uVar13 | uVar12 & uVar5;
  uVar5 = uVar12 & uVar15 | uVar11 & uVar13 | uVar2 << 0x1a;
  iVar7 = uVar5 + param_1[10];
  uVar15 = param_1[0xc];
  uVar17 = (ulong)(uVar2 >> 6 | uVar3 << 0x14) + (ulong)param_1[0xb] +
           (ulong)CARRY4(uVar5,param_1[10]);
  uVar2 = param_1[0xd];
  *param_2 = (char)iVar7;
  param_2[1] = (char)((uint)iVar7 >> 8);
  param_2[2] = (char)((uint)iVar7 >> 0x10);
  param_2[3] = (char)((uint)iVar7 >> 0x18);
  param_2[4] = (char)uVar17;
  param_2[5] = (char)(uVar17 >> 8);
  uVar8 = (ulong)(uVar3 >> 0xc | uVar4 << 0xe) + (ulong)uVar15 + (uVar17 >> 0x20);
  param_2[6] = (char)(uVar17 >> 0x10);
  param_2[7] = (char)(uVar17 >> 0x18);
  param_2[8] = (char)uVar8;
  param_2[9] = (char)(uVar8 >> 8);
  param_2[10] = (char)(uVar8 >> 0x10);
  param_2[0xb] = (char)(uVar8 >> 0x18);
  lVar14 = (ulong)(uVar4 >> 0x12 | (0xffffffff - uVar13 & uVar6 | uVar1 & uVar13) << 8) +
           (ulong)uVar2 + (uVar8 >> 0x20);
  param_2[0xc] = (char)lVar14;
  param_2[0xd] = (char)((ulong)lVar14 >> 8);
  param_2[0xe] = (char)((ulong)lVar14 >> 0x10);
  param_2[0xf] = (char)((ulong)lVar14 >> 0x18);
  lVar14 = 0x4c;
  do {
    lVar14 = lVar14 + -1;
    *(undefined1 *)param_1 = 0;
    param_1 = (uint *)((long)param_1 + 1);
  } while (lVar14 != 0);
  return;
}


#undef DAT_1000c140
#define DAT_1000c140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef DAT_1000c150
#define DAT_1000c150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef DAT_1000c160
#define DAT_1000c160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef DAT_1000c170
#define DAT_1000c170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef UNK_1000c148
#define UNK_1000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef UNK_1000c158
#define UNK_1000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef UNK_1000c168
#define UNK_1000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef UNK_1000c178
#define UNK_1000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef _DAT_1000c140
#define _DAT_1000c140 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xfcU)))
#undef _DAT_1000c150
#define _DAT_1000c150 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef _DAT_1000c160
#define _DAT_1000c160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef _DAT_1000c170
#define _DAT_1000c170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef uRam000000001000c148
#define uRam000000001000c148 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef uRam000000001000c158
#define uRam000000001000c158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef uRam000000001000c168
#define uRam000000001000c168 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef uRam000000001000c178
#define uRam000000001000c178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x134U)))
#define auStack_220 (*(ulong (*)[68])(pf_stack_frame + 16))
#define auStack_1e0 (*(ulong (*)[60])(pf_stack_frame + 80))
#define abStack_1a0 (*(byte (*)[416])(pf_stack_frame + 144))
#define uStack_120 (*(ulong *)(pf_stack_frame + 272))
#define uStack_118 (*(undefined8 *)(pf_stack_frame + 280))
#define uStack_110 (*(undefined8 *)(pf_stack_frame + 288))
#define uStack_108 (*(undefined8 *)(pf_stack_frame + 296))
#define uStack_100 (*(undefined8 *)(pf_stack_frame + 304))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 312))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 320))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 328))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 336))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 472))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a014
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a014(ulong *param_1,uint param_2,undefined1 *param_3,undefined1 *param_4,
                       ulong param_5,ulong *param_6)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;

  if (0x80 < param_2) {
    recovered_10006240((undefined1 *)param_1,(ulong)param_2,auStack_220);
    param_2 = 0x40;
    param_1 = auStack_220;
  }
  uVar8 = uRam000000001000c178;
  uVar7 = _DAT_1000c170;
  uVar6 = uRam000000001000c168;
  uVar5 = _DAT_1000c160;
  uVar4 = uRam000000001000c158;
  uVar3 = _DAT_1000c150;
  uVar2 = uRam000000001000c148;
  uVar1 = _DAT_1000c140;
  for (uVar9 = 0; uVar9 != 0x80; uVar9 = uVar9 + 1) {
    if (uVar9 < param_2) {
      bVar10 = *(byte *)((long)param_1 + uVar9) ^ 0x36;
    }
    else {
      bVar10 = 0x36;
    }
    abStack_1a0[uVar9] = bVar10;
  }
  uStack_118 = uRam000000001000c148;
  uStack_120 = _DAT_1000c140;
  uStack_108 = uRam000000001000c158;
  uStack_110 = _DAT_1000c150;
  uStack_f8 = uRam000000001000c168;
  uStack_100 = _DAT_1000c160;
  uStack_e8 = uRam000000001000c178;
  uStack_f0 = _DAT_1000c170;
  uStack_e0 = 0;
  uStack_58 = 0;
  recovered_10005538(&uStack_120,abStack_1a0,0x80);
  recovered_10005538(&uStack_120,param_3,4);
  recovered_10005538(&uStack_120,param_4,param_5 & 0xffffffff);
  recovered_10006004(&uStack_120,auStack_1e0);
  for (uVar9 = 0; uVar9 != 0x80; uVar9 = uVar9 + 1) {
    if (uVar9 < param_2) {
      bVar10 = *(byte *)((long)param_1 + uVar9) ^ 0x5c;
    }
    else {
      bVar10 = 0x5c;
    }
    abStack_1a0[uVar9] = bVar10;
  }
  uStack_118 = uVar2;
  uStack_120 = uVar1;
  uStack_108 = uVar4;
  uStack_110 = uVar3;
  uStack_f8 = uVar6;
  uStack_100 = uVar5;
  uStack_e8 = uVar8;
  uStack_f0 = uVar7;
  uStack_e0 = 0;
  uStack_58 = 0;
  recovered_10005538(&uStack_120,abStack_1a0,0x80);
  recovered_10005538(&uStack_120,(undefined1 *)auStack_1e0,0x40);
  recovered_10006004(&uStack_120,param_6);
  recovered_10005318(abStack_1a0,0x80);
  recovered_10005318((undefined1 *)auStack_1e0,0x40);
  recovered_10005318((undefined1 *)auStack_220,0x40);
  return;
}

#undef DAT_1000c140
#undef DAT_1000c150
#undef DAT_1000c160
#undef DAT_1000c170
#undef UNK_1000c148
#undef UNK_1000c158
#undef UNK_1000c168
#undef UNK_1000c178
#undef _DAT_1000c140
#undef _DAT_1000c150
#undef _DAT_1000c160
#undef _DAT_1000c170
#undef uRam000000001000c148
#undef uRam000000001000c158
#undef uRam000000001000c168
#undef uRam000000001000c178
#undef auStack_220
#undef auStack_1e0
#undef abStack_1a0
#undef uStack_120
#undef uStack_118
#undef uStack_110
#undef uStack_108
#undef uStack_100
#undef uStack_f8
#undef uStack_f0
#undef uStack_e8
#undef uStack_e0
#undef uStack_58

#undef DAT_1000c120
#define DAT_1000c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_1000c120
#define _DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef _DAT_1000c130
#define _DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#define auStack_150 (*(undefined1 (*)[336])(pf_stack_frame + 16))
#define auStack_130 (*(undefined1 (*)[304])(pf_stack_frame + 48))
#define abStack_110 (*(byte (*)[272])(pf_stack_frame + 80))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 144))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 160))
#define uStack_b8 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 176))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a1a0(undefined1 *param_1,uint param_2,undefined1 *param_3,undefined1 *param_4,
                       ulong param_5,long param_6)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;

  if (0x40 < param_2) {
    uStack_c8 = uRam000000001000c128;
    uStack_d0 = _DAT_1000c120;
    uStack_b8 = uRam000000001000c138;
    uStack_c0 = _DAT_1000c130;
    uStack_b0 = 0;
    uStack_68 = 0;
    recovered_1000611c((uint *)&uStack_d0,param_1,(ulong)param_2);
    param_1 = auStack_150;
    recovered_1000618c((uint *)&uStack_d0,(long)auStack_150);
    param_2 = 0x20;
  }
  uVar4 = uRam000000001000c138;
  uVar3 = _DAT_1000c130;
  uVar2 = uRam000000001000c128;
  uVar1 = _DAT_1000c120;
  for (uVar5 = 0; uVar5 != 0x40; uVar5 = uVar5 + 1) {
    if (uVar5 < param_2) {
      bVar6 = param_1[uVar5] ^ 0x36;
    }
    else {
      bVar6 = 0x36;
    }
    abStack_110[uVar5] = bVar6;
  }
  uStack_c8 = uRam000000001000c128;
  uStack_d0 = _DAT_1000c120;
  uStack_b8 = uRam000000001000c138;
  uStack_c0 = _DAT_1000c130;
  uStack_b0 = 0;
  uStack_68 = 0;
  recovered_1000611c((uint *)&uStack_d0,abStack_110,0x40);
  recovered_1000611c((uint *)&uStack_d0,param_3,4);
  recovered_1000611c((uint *)&uStack_d0,param_4,param_5 & 0xffffffff);
  recovered_1000618c((uint *)&uStack_d0,(long)auStack_130);
  for (uVar5 = 0; uVar5 != 0x40; uVar5 = uVar5 + 1) {
    if (uVar5 < param_2) {
      bVar6 = param_1[uVar5] ^ 0x5c;
    }
    else {
      bVar6 = 0x5c;
    }
    abStack_110[uVar5] = bVar6;
  }
  uStack_c8 = uVar2;
  uStack_d0 = uVar1;
  uStack_b8 = uVar4;
  uStack_c0 = uVar3;
  uStack_b0 = 0;
  uStack_68 = 0;
  recovered_1000611c((uint *)&uStack_d0,abStack_110,0x40);
  recovered_1000611c((uint *)&uStack_d0,auStack_130,0x20);
  recovered_1000618c((uint *)&uStack_d0,param_6);
  recovered_10005318(abStack_110,0x40);
  recovered_10005318(auStack_130,0x20);
  recovered_10005318(auStack_150,0x20);
  return;
}

#undef DAT_1000c120
#undef DAT_1000c130
#undef UNK_1000c128
#undef UNK_1000c138
#undef _DAT_1000c120
#undef _DAT_1000c130
#undef uRam000000001000c128
#undef uRam000000001000c138
#undef auStack_150
#undef auStack_130
#undef abStack_110
#undef uStack_d0
#undef uStack_c8
#undef uStack_c0
#undef uStack_b8
#undef uStack_b0
#undef uStack_68

#undef DAT_1000c798
#define DAT_1000c798 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x754U)))
#define abStack_80 (*(byte (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a320
 */

void recovered_1000a320(long param_1,undefined1 *param_2,long param_3,long param_4,ulong param_5)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;

  uVar15 = 0;
  do {
    uVar6 = param_5 - uVar15;
    if (param_5 < uVar15 || uVar6 == 0) {
      recovered_10005318(abStack_80,0x10);
      return;
    }
    recovered_100012ac(abStack_80,param_2,0x10);
    for (lVar11 = 0; lVar11 != 0x10; lVar11 = lVar11 + 1) {
      abStack_80[lVar11] = abStack_80[lVar11] ^ *(byte *)(param_1 + lVar11);
    }
    uVar1 = *(uint *)(param_1 + 0xf0);
    uVar13 = 0x10;
    for (uVar12 = 1; uVar12 <= uVar1; uVar12 = uVar12 + 1) {
      abStack_80[0x10] = (&DAT_1000c798)[abStack_80[0]];
      abStack_80[0x11] = (&DAT_1000c798)[abStack_80[5]];
      abStack_80[0x12] = (&DAT_1000c798)[abStack_80[10]];
      abStack_80[0x13] = (&DAT_1000c798)[abStack_80[0xf]];
      abStack_80[0x14] = (&DAT_1000c798)[abStack_80[4]];
      abStack_80[0x15] = (&DAT_1000c798)[abStack_80[9]];
      abStack_80[0x16] = (&DAT_1000c798)[abStack_80[0xe]];
      abStack_80[0x17] = (&DAT_1000c798)[abStack_80[3]];
      abStack_80[0x18] = (&DAT_1000c798)[abStack_80[8]];
      abStack_80[0x19] = (&DAT_1000c798)[abStack_80[0xd]];
      abStack_80[0x1a] = (&DAT_1000c798)[abStack_80[2]];
      abStack_80[0x1b] = (&DAT_1000c798)[abStack_80[7]];
      abStack_80[0x1c] = (&DAT_1000c798)[abStack_80[0xc]];
      abStack_80[0x1d] = (&DAT_1000c798)[abStack_80[1]];
      abStack_80[0x1e] = (&DAT_1000c798)[abStack_80[6]];
      abStack_80[0x1f] = (&DAT_1000c798)[abStack_80[0xb]];
      if (uVar12 != uVar1) {
        lVar11 = 4;
        pbVar14 = abStack_80 + 0x13;
        do {
          bVar3 = pbVar14[-3];
          bVar4 = pbVar14[-2];
          bVar5 = pbVar14[-1];
          bVar7 = bVar4 ^ bVar3;
          bVar2 = *pbVar14;
          bVar8 = bVar5 ^ bVar7 ^ bVar2;
          pbVar14[-3] = (byte)((uint)(int)(char)bVar7 >> 7) & 0x1b ^ bVar7 << 1 ^ bVar3 ^ bVar8;
          pbVar14[-2] = (byte)((uint)(int)(char)(bVar5 ^ bVar4) >> 7) & 0x1b ^ (bVar5 ^ bVar4) << 1
                        ^ bVar4 ^ bVar8;
          pbVar14[-1] = (byte)((uint)(int)(char)(bVar2 ^ bVar5) >> 7) & 0x1b ^ (bVar2 ^ bVar5) << 1
                        ^ bVar7 ^ bVar2;
          *pbVar14 = (byte)((uint)(int)(char)(bVar2 ^ bVar3) >> 7) & 0x1b ^ (bVar2 ^ bVar3) << 1 ^
                     bVar5 ^ bVar7;
          lVar11 = lVar11 + -1;
          pbVar14 = pbVar14 + 4;
        } while (lVar11 != 0);
      }
      for (lVar11 = 0; lVar11 != 0x10; lVar11 = lVar11 + 1) {
        abStack_80[lVar11] = *(byte *)(param_1 + uVar13 + lVar11) ^ abStack_80[lVar11 + 0x10];
      }
      uVar13 = (ulong)((int)uVar13 + 0x10);
    }
    if (0xf < uVar6) {
      uVar6 = 0x10;
    }
    pbVar14 = (byte *)(param_4 + uVar15);
    pbVar9 = (byte *)(param_3 + uVar15);
    pbVar10 = abStack_80;
    for (uVar13 = uVar6; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pbVar14 = *pbVar10 ^ *pbVar9;
      pbVar14 = pbVar14 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    }
    uVar12 = 0xf;
    do {
      if ((int)uVar12 < 0) break;
      bVar2 = param_2[uVar12];
      param_2[uVar12] = (char)(bVar2 + 1);
      uVar12 = uVar12 - 1;
    } while (bVar2 + 1 >> 8 != 0);
    uVar15 = uVar6 + uVar15;
  } while( true );
}

#undef DAT_1000c798
#undef abStack_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5d4
 */

void recovered_1000a5d4(uint *param_1,uint *param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;

  uVar5 = *param_1;
  uVar7 = param_1[1];
  uVar6 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = uVar8 * 5;
  uVar14 = param_1[5];
  uVar10 = param_1[4] * 5;
  uVar15 = param_1[6];
  uVar16 = param_1[7];
  uVar12 = param_1[8];
  uVar13 = param_1[9];
  while (bVar11 = 0xf < param_3, param_3 = param_3 - 0x10, bVar11) {
    uVar14 = (*param_2 & 0x3ffffff) + uVar14;
    uVar15 = (*(uint *)((long)param_2 + 3) >> 2 & 0x3ffffff) + uVar15;
    uVar3 = (*(uint *)((long)param_2 + 6) >> 4 & 0x3ffffff) + uVar16;
    uVar4 = uVar12 + (*(uint *)((long)param_2 + 9) >> 6);
    uVar13 = (param_4 | param_2[3] >> 8) + uVar13;
    uVar17 = (ulong)uVar5 * (ulong)uVar14 + (ulong)uVar10 * (ulong)uVar15 +
             (ulong)uVar9 * (ulong)uVar3 + (ulong)(uVar6 * 5) * (ulong)uVar4 +
             (ulong)(uVar7 * 5) * (ulong)uVar13;
    uVar1 = (ulong)uVar7 * (ulong)uVar14 + (ulong)uVar5 * (ulong)uVar15 +
            (ulong)uVar10 * (ulong)uVar3 + (ulong)uVar9 * (ulong)uVar4 +
            (ulong)(uVar6 * 5) * (ulong)uVar13 + (uVar17 >> 0x1a & 0xffffffff);
    uVar2 = (ulong)uVar6 * (ulong)uVar14 + (ulong)uVar7 * (ulong)uVar15 +
            (ulong)uVar5 * (ulong)uVar3 + (ulong)uVar10 * (ulong)uVar4 +
            (ulong)uVar9 * (ulong)uVar13 + (uVar1 >> 0x1a & 0xffffffff);
    uVar16 = (uint)uVar2 & 0x3ffffff;
    uVar2 = (ulong)uVar8 * (ulong)uVar14 + (ulong)uVar6 * (ulong)uVar15 +
            (ulong)uVar7 * (ulong)uVar3 + (ulong)uVar5 * (ulong)uVar4 +
            (ulong)uVar10 * (ulong)uVar13 + (uVar2 >> 0x1a & 0xffffffff);
    uVar12 = (uint)uVar2 & 0x3ffffff;
    uVar2 = (ulong)param_1[4] * (ulong)uVar14 + (ulong)uVar8 * (ulong)uVar15 +
            (ulong)uVar6 * (ulong)uVar3 + (ulong)uVar7 * (ulong)uVar4 + (ulong)uVar5 * (ulong)uVar13
            + (uVar2 >> 0x1a & 0xffffffff);
    uVar13 = (uint)uVar2 & 0x3ffffff;
    uVar15 = (int)(uVar2 >> 0x1a) * 5 + ((uint)uVar17 & 0x3ffffff);
    uVar14 = uVar15 & 0x3ffffff;
    uVar15 = ((uint)uVar1 & 0x3ffffff) + (uVar15 >> 0x1a);
    param_2 = param_2 + 4;
  }
  param_1[5] = uVar14;
  param_1[6] = uVar15;
  param_1[7] = uVar16;
  param_1[8] = uVar12;
  param_1[9] = uVar13;
  return;
}


#undef DAT_10013860
#define DAT_10013860 (*(uint *)(((uintptr_t)pf_module_state + 0x781cU)))
#undef DAT_10013900
#define DAT_10013900 (*(int *)(((uintptr_t)pf_module_state + 0x78bcU)))
#undef DAT_10014104
#define DAT_10014104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80c0U)))
#undef DAT_10014126
#define DAT_10014126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef DAT_10014128
#define DAT_10014128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e4U)))
#undef DAT_1001413a
#define DAT_1001413a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80f6U)))
#undef DAT_8201092c
#define DAT_8201092c (*(uint8_t *)(0x8201092cU))
#undef UNK_1001412a
#define UNK_1001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef UNK_1001412b
#define UNK_1001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef UNK_1001412c
#define UNK_1001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef UNK_1001412d
#define UNK_1001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef UNK_1001412e
#define UNK_1001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef UNK_1001412f
#define UNK_1001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef UNK_10014130
#define UNK_10014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef UNK_10014131
#define UNK_10014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef UNK_10014132
#define UNK_10014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef UNK_10014133
#define UNK_10014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef UNK_10014134
#define UNK_10014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef UNK_10014135
#define UNK_10014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef UNK_10014136
#define UNK_10014136 (*(ushort *)(((uintptr_t)pf_module_state + 0x80f2U)))
#undef _DAT_10014126
#define _DAT_10014126 (*(ushort *)(((uintptr_t)pf_module_state + 0x80e2U)))
#undef _DAT_8201092c
#define _DAT_8201092c (*(uint *)(0x8201092cU))
#undef uRam000000001001412a
#define uRam000000001001412a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e6U)))
#undef uRam000000001001412b
#define uRam000000001001412b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e7U)))
#undef uRam000000001001412c
#define uRam000000001001412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e8U)))
#undef uRam000000001001412d
#define uRam000000001001412d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80e9U)))
#undef uRam000000001001412e
#define uRam000000001001412e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eaU)))
#undef uRam000000001001412f
#define uRam000000001001412f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ebU)))
#undef uRam0000000010014130
#define uRam0000000010014130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80ecU)))
#undef uRam0000000010014131
#define uRam0000000010014131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80edU)))
#undef uRam0000000010014132
#define uRam0000000010014132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eeU)))
#undef uRam0000000010014133
#define uRam0000000010014133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80efU)))
#undef uRam0000000010014134
#define uRam0000000010014134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f0U)))
#undef uRam0000000010014135
#define uRam0000000010014135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80f1U)))
#undef uRam0000000010014136
#define uRam0000000010014136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x80f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a70c
 */

/* WARNING: Removing unreachable block (ram,0x100077dc) */
/* WARNING: Removing unreachable block (ram,0x100076d8) */
/* WARNING: Removing unreachable block (ram,0x100077f4) */
/* WARNING: Removing unreachable block (ram,0x100076ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint128 recovered_1000a70c(uint *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  bool bVar3;
  uint uVar4;
  ulong extraout_x1;
  uint uVar5;
  uint uVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;

  PF_PART8(auVar8, 8) = param_2;
  PF_PART8(auVar8, 0) = param_1;
  if (1 < *param_1 - 2) {
    if (*param_1 != 1) {
      PF_PART8(auVar9, 8) = param_2;
      PF_PART8(auVar9, 0) = param_1;
      return auVar9;
    }
    if ((*param_1 | 8) != 8) {
      auVar8 = recovered_100076b0((long)param_1,0x14,
                                  (ulong)(param_1[0x14] + param_1[7] +
                                         (uint)(byte)param_1[0x15] +
                                         (uint)*(byte *)((long)param_1 + 0x56)),0,0);
    }
    *(undefined1 *)((long)param_1 + 0x5b) = 1;
    *param_1 = 0;
    param_1[0xd] = 0;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    return auVar8;
  }
  *(undefined1 *)((long)param_1 + 0x55) = 1;
  uVar5 = *param_1;
  if (uVar5 < 9 && (1 << (ulong)(uVar5 & 0x1f) & 0x103U) != 0) {
    if ((uVar5 == 1) && ((*(byte *)((long)param_1 + 0x5a) & 1) != 0)) {
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x57) & 1) == 0) {
      bVar3 = false;
      uVar5 = param_1[0x14];
      while( true ) {
        uVar4 = 0;
        if (uVar5 <= param_1[8]) {
          uVar4 = param_1[8] - uVar5;
        }
        uVar6 = 0;
        if (uVar5 < 0x2da1) {
          uVar6 = 0x2da0 - uVar5;
        }
        if (uVar4 <= 0x2da0 - uVar5) {
          uVar6 = uVar4;
        }
        uVar4 = param_1[0x13] - uVar5;
        if (uVar6 <= param_1[0x13] - uVar5) {
          uVar4 = uVar6;
        }
        if (param_1[9] <= uVar4) {
          uVar4 = param_1[9];
        }
        uVar6 = (uint)param_2;
        if ((uVar4 == 0) ||
           (auVar8 = recovered_100076b0((long)param_1,0x18,(ulong)(param_1[7] + uVar5),
                                        param_1[0x12] + uVar5 & 0x7fff,uVar4), PF_PART4(auVar8, 0) == 0))
        break;
        uVar5 = param_1[0x14] + uVar4;
        param_1[0x14] = uVar5;
        bVar3 = true;
        if ((param_1[0x19] & 1) == 0) {
          param_1[0x18] = param_1[0x17] + uVar6;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
      }
      if ((*(char *)((long)param_1 + 0x55) == '\x01') && (param_1[0x13] == param_1[0x14])) {
        *(undefined2 *)((long)param_1 + 0x56) = 0x101;
        auVar8 = recovered_100076b0((long)param_1,0x11,(ulong)(param_1[7] + param_1[0x13]),0,0);
        if ((param_1[0x19] & 1) == 0) {
          param_1[0x18] = param_1[0x17] + uVar6;
          *(undefined1 *)(param_1 + 0x19) = 1;
        }
        if (*param_1 == 3) {
          uVar5 = 4;
        }
        else {
          if (*param_1 != 2) {
            return auVar8;
          }
          uVar5 = 5;
        }
        *param_1 = uVar5;
        param_1[0x1b] = uVar6;
        return auVar8;
      }
    }
    else {
      bVar3 = false;
    }
    if ((!bVar3) && ((*(byte *)((long)param_1 + 0x5a) & 1) != 0)) {
      iVar1 = param_1[0x14] + param_1[7] +
              (uint)(byte)param_1[0x15] + (uint)*(byte *)((long)param_1 + 0x56);
      uVar5 = 0x4000 - param_1[0xd];
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      recovered_10006f78((undefined1 *)(param_1 + 2),0x800);
      recovered_10006fb8(0x28,6,(ulong)DAT_10013860,(ulong)param_1[4]);
      recovered_10001498((ulong *)&DAT_10014126,0,0x14);
      _DAT_10014126 =
           *(ushort *)((long)param_1 + 0x16) >> 8 | *(ushort *)((long)param_1 + 0x16) << 8;
      PF_PART1(DAT_10014128, 0) = (undefined1)(param_1[5] >> 8);
      PF_PART1(DAT_10014128, 1) = (undefined1)param_1[5];
      uRam000000001001412a = (undefined1)((uint)iVar1 >> 0x18);
      uRam000000001001412b = (undefined1)((uint)iVar1 >> 0x10);
      uRam000000001001412c = (undefined1)((uint)iVar1 >> 8);
      uRam000000001001412d = (undefined1)iVar1;
      uVar4 = param_1[6];
      uRam000000001001412e = (undefined1)(uVar4 >> 0x18);
      uRam000000001001412f = (undefined1)(uVar4 >> 0x10);
      uRam0000000010014130 = (undefined1)(uVar4 >> 8);
      uRam0000000010014131 = (undefined1)uVar4;
      uRam0000000010014132 = 0x50;
      uRam0000000010014133 = 0x10;
      uRam0000000010014134 = (undefined1)(uVar5 >> 8);
      uRam0000000010014135 = (undefined1)uVar5;
      uVar4 = recovered_1000707c((ulong)DAT_10013860,(ulong)param_1[4],6,((uintptr_t)pf_module_state + 0x80e2U),0x14);
      uRam0000000010014136 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
      param_1[0xe] = uVar5;
      *(undefined1 *)((long)param_1 + 0x5a) = 0;
      recovered_10001498((ulong *)&DAT_1001413a,0,6);
      bVar3 = recovered_1000532c(300);
      PF_PART7(auVar7, 1) = 0;
      ((uint8_t *)(void *)&auVar7)[0] = bVar3;
      PF_PART8(auVar7, 8) = extraout_x1;
      if (bVar3) {
        if (_DAT_8201092c == 0) {
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = extraout_x1;
          auVar7 = auVar2 << 0x40;
        }
        else {
          auVar7 = (*(code *)(ulong)_DAT_8201092c)(&DAT_10014104,0x3c);
          if (PF_PART4(auVar7, 0) != 0) {
            DAT_10013900 = DAT_10013900 + 1;
            PF_PART8(auVar7, 8) = PF_PART8(auVar7, 8);
            PF_PART8(auVar7, 0) = 1;
          }
        }
      }
      return auVar7;
    }
  }
  return auVar8;
}

#undef DAT_10013860
#undef DAT_10013900
#undef DAT_10014104
#undef DAT_10014126
#undef DAT_10014128
#undef DAT_1001413a
#undef DAT_8201092c
#undef UNK_1001412a
#undef UNK_1001412b
#undef UNK_1001412c
#undef UNK_1001412d
#undef UNK_1001412e
#undef UNK_1001412f
#undef UNK_10014130
#undef UNK_10014131
#undef UNK_10014132
#undef UNK_10014133
#undef UNK_10014134
#undef UNK_10014135
#undef UNK_10014136
#undef _DAT_10014126
#undef _DAT_8201092c
#undef uRam000000001001412a
#undef uRam000000001001412b
#undef uRam000000001001412c
#undef uRam000000001001412d
#undef uRam000000001001412e
#undef uRam000000001001412f
#undef uRam0000000010014130
#undef uRam0000000010014131
#undef uRam0000000010014132
#undef uRam0000000010014133
#undef uRam0000000010014134
#undef uRam0000000010014135
#undef uRam0000000010014136

#undef DAT_1000ca6b
#define DAT_1000ca6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa27U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a738
 */

void recovered_1000a738(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (*(char *)(param_1 + 0x888) == '\x01') {
    recovered_1000b640(param_1,&DAT_1000ca6b);
    uVar1 = *(uint *)(param_1 + 0xa98);
    if (uVar1 != 0) {
      if (uVar1 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
        recovered_10007858(*(undefined1 **)(param_1 + 0xba8),0x8000,
                           *(int *)(param_1 + 0xbb0) + *(int *)(param_1 + 0xbb4) & 0x7fff,
                           (undefined1 *)(param_1 + 0x898),uVar1);
        *(uint *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar1;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000ca6b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a784
 */

void recovered_1000a784(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(param_1 + 0x140) - param_2;
  if (*(uint *)(param_1 + 0x140) < param_2 || uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    recovered_10001384(*(undefined1 **)(param_1 + 0x138),*(undefined1 **)(param_1 + 0x138) + param_2
                       ,(ulong)uVar1);
    iVar2 = *(int *)(param_1 + 0x140) - param_2;
  }
  *(int *)(param_1 + 0x140) = iVar2;
  return;
}


/* Recovered variadic session logging; Pooka's Free Software License. */
void recovered_1000a7c8(void *session,char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_100023c0(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_100040ec("ssh[%u %s]: %s",*(uint32_t *)((char *)session+4),(char *)session+0x120,text);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7fc
 */

bool recovered_1000a7fc(byte *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2 ^ *param_1 | bVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return bVar1 == 0;
}


#define local_11 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a828
 */

undefined1 recovered_1000a828(long *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_11 = 0;
  recovered_1000aa20(param_1,&local_11,1);
  return local_11;
}

#undef local_11

#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a854
 */

uint recovered_1000a854(long *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_14 = 0;
  recovered_1000aa20(param_1,(undefined1 *)&local_14,4);
  uVar1 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}

#undef local_14

#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a884
 */

bool recovered_1000a884(long *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  local_34 = 0;
  puVar1 = (undefined1 *)recovered_1000a900(param_1,&local_34);
  if (puVar1 != (undefined1 *)0x0) {
    if (param_3 <= local_34) {
      local_34 = param_3 - 1;
    }
    recovered_100012ac(param_2,puVar1,(ulong)local_34);
    param_2 = param_2 + local_34;
  }
  *param_2 = 0;
  return puVar1 != (undefined1 *)0x0;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a900
 */

long recovered_1000a900(long *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  long lVar3;

  uVar2 = recovered_1000a854(param_1);
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (uVar2 <= (int)param_1[1] - uVar1) {
      lVar3 = *param_1;
      *(uint *)((long)param_1 + 0xc) = uVar1 + uVar2;
      if (param_2 == (uint *)0x0) {
        return lVar3 + (ulong)uVar1;
      }
      *param_2 = uVar2;
      return lVar3 + (ulong)uVar1;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a968
 */

bool recovered_1000a968(byte *param_1,ulong param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong uVar3;

  uVar3 = recovered_10001788((long)param_3);
  bVar1 = false;
  if ((param_1 != (byte *)0x0) && (uVar3 == (param_2 & 0xffffffff))) {
    iVar2 = recovered_1000155c(param_1,param_3,uVar3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9a8
 */

bool recovered_1000a9a8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = recovered_1000a828(param_1);
  return cVar1 != '\0';
}


#undef DAT_1000c0d0
#define DAT_1000c0d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#define uStack_6a (*(undefined1 *)(pf_stack_frame + 166))
#define uStack_69 (*(undefined1 *)(pf_stack_frame + 167))
#define uStack_68 (*(ulong *)(pf_stack_frame + 168))
#define auStack_fc (*(ulong (*)[31])(pf_stack_frame + 20))
#define auStack_b0 (*(uint (*)[44])(pf_stack_frame + 96))
#define uStack_70 (*(undefined4 *)(pf_stack_frame + 160))
#define uStack_6c (*(undefined1 *)(pf_stack_frame + 164))
#define uStack_6b (*(undefined1 *)(pf_stack_frame + 165))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9c4
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_1000a9c4(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;

  uVar6 = DAT_1000c0d0;
  puVar8 = *(undefined1 **)(param_1 + 0x150);
  recovered_10009970((long *)((long)auStack_b0 + 0x78),param_2);
  recovered_10006968((long *)((long)auStack_b0 + 0x78),*(uint *)(param_1 + 0x878));
  uVar15 = (uint)((ulong)uVar6 >> 0x20);
  puVar12 = *(uint **)(param_1 + 0x148);
  bVar4 = recovered_10009c24(param_1);
  if (0x8898 < uVar15) {
    return 0;
  }
  if (!bVar4) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x2fc);
  if (iVar2 - 2U < 2) {
    uVar11 = *(uint *)(param_1 + 0x490);
    uVar7 = 0x10;
    uVar9 = 0xf;
    iVar10 = 5;
  }
  else {
    iVar10 = 1;
    if (iVar2 != 1) {
      iVar10 = 5;
    }
    uVar9 = 7;
    uVar7 = 8;
    uVar11 = 0x10;
    if (iVar2 != 1) {
      uVar11 = 0;
    }
  }
  uVar9 = uVar7 - (iVar10 + uVar15 & uVar9);
  if (3 < uVar9) {
    uVar7 = 0;
  }
  uVar7 = uVar7 | uVar9;
  uVar9 = uVar15 + uVar7 + 5;
  uVar13 = (ulong)uVar9;
  uVar9 = uVar9 + uVar11;
  if (0x8000U - *(int *)(*(long *)(param_1 + 8) + 0x4c) < uVar9) {
    return 0;
  }
  uVar1 = uVar15 + uVar7 + 1;
  *(undefined1 *)puVar12 = 0;
  *(char *)((long)puVar12 + 1) = (char)(uVar1 >> 0x10);
  *(char *)((long)puVar12 + 2) = (char)(uVar1 >> 8);
  *(char *)((long)puVar12 + 3) = (char)uVar1;
  puVar14 = puVar12 + 1;
  *(char *)puVar14 = (char)uVar7;
  recovered_100012ac((undefined1 *)((long)puVar12 + 5),puVar8,(ulong)uVar15);
  recovered_10005c4c((undefined1 *)((long)puVar12 + 5) + uVar15,(ulong)uVar7);
  if (*(int *)(param_1 + 0x2fc) - 2U < 2) {
    uVar15 = (*(uint *)(param_1 + 0x15c) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x15c) & 0xff00ff) << 8;
    auStack_b0[0] = uVar15 >> 0x10 | uVar15 << 0x10;
    if (*(int *)(param_1 + 0x300) == 2) {
      recovered_1000a014((ulong *)(param_1 + 0x44c),*(uint *)(param_1 + 0x48c),
                         (undefined1 *)auStack_b0,(undefined1 *)puVar12,uVar13,auStack_fc);
    }
    else {
      recovered_1000a1a0((undefined1 *)(param_1 + 0x44c),*(uint *)(param_1 + 0x48c),
                         (undefined1 *)auStack_b0,(undefined1 *)puVar12,uVar13,(long)auStack_fc);
    }
    recovered_1000a320(param_1 + 0x348,(undefined1 *)(param_1 + 0x43c),(long)puVar12,(long)puVar12,
                       uVar13);
    recovered_100012ac((undefined1 *)((long)puVar14 + (ulong)uVar1),(undefined1 *)auStack_fc,
                       (ulong)uVar11);
    puVar5 = auStack_fc;
  }
  else {
    if (*(int *)(param_1 + 0x2fc) != 1) goto LAB_10009be0;
    uVar3 = *(undefined4 *)(param_1 + 0x15c);
    uStack_70 = 0;
    uStack_6c = (undefined1)((uint)uVar3 >> 0x18);
    uStack_6b = (undefined1)((uint)uVar3 >> 0x10);
    uStack_6a = (undefined1)((uint)uVar3 >> 8);
    uStack_69 = (undefined1)uVar3;
    recovered_10005d84((uint *)(param_1 + 0x305),0,(undefined8 *)&uStack_70,(long)auStack_b0);
    recovered_10009c54((uint *)(param_1 + 0x325),0,(undefined8 *)&uStack_70,(long)puVar12,
                       (long)puVar12,4);
    recovered_10009c54((uint *)(param_1 + 0x305),1,(undefined8 *)&uStack_70,(long)puVar14,
                       (long)puVar14,(ulong)uVar1);
    recovered_10009d18((uint *)auStack_fc,auStack_b0);
    recovered_10009da8((uint *)auStack_fc,puVar12,uVar13);
    recovered_10009e6c((uint *)auStack_fc,(undefined1 *)((long)puVar14 + (ulong)uVar1));
    puVar5 = (ulong *)auStack_b0;
  }
  recovered_10005318((undefined1 *)puVar5,0x40);
LAB_10009be0:
  uVar6 = recovered_100097f4(*(uint **)(param_1 + 8),(undefined1 *)puVar12,uVar9);
  if ((int)uVar6 != 0) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    uVar6 = 1;
  }
  return uVar6;
}

#undef DAT_1000c0d0
#undef uStack_6a
#undef uStack_69
#undef uStack_68
#undef auStack_fc
#undef auStack_b0
#undef uStack_70
#undef uStack_6c
#undef uStack_6b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa20
 */

void recovered_1000aa20(long *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (param_3 <= (int)param_1[1] - uVar1) {
      if (param_2 != (undefined1 *)0x0) {
        recovered_100012ac(param_2,(undefined1 *)(*param_1 + (ulong)uVar1),(ulong)param_3);
        uVar1 = *(uint *)((long)param_1 + 0xc);
      }
      *(uint *)((long)param_1 + 0xc) = uVar1 + param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa84
 */

undefined8 recovered_1000aa84(long param_1,uint param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  uVar3 = recovered_10001788((long)param_3);
  if (param_1 != 0) {
    uVar4 = 0;
    uVar5 = (ulong)param_2;
    do {
      if (param_2 < uVar4) {
        return 0;
      }
      for (uVar6 = (ulong)uVar4; uVar5 != uVar6; uVar6 = uVar6 + 1) {
        if (*(char *)(param_1 + uVar6) == ',') {
          bVar1 = uVar6 < uVar5;
          goto LAB_1000ab00;
        }
      }
      bVar1 = false;
      uVar6 = uVar5;
LAB_1000ab00:
      if ((uVar3 == (int)uVar6 - uVar4) &&
         (iVar2 = recovered_1000155c((byte *)(param_1 + (ulong)uVar4),param_3,uVar3), iVar2 == 0)) {
        return 1;
      }
      uVar4 = (int)uVar6 + 1;
    } while (bVar1);
  }
  return 0;
}


#undef str_1000d2e9
#define str_1000d2e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12a5U)))
#undef str_1000d312
#define str_1000d312 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab4c
 */

undefined4 recovered_1000ab4c(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar5 = 0;
    uVar6 = (ulong)param_2;
    do {
      if (param_2 < uVar5) {
        return 0;
      }
      uVar7 = (ulong)uVar5;
      for (uVar8 = uVar7; uVar6 != uVar8; uVar8 = uVar8 + 1) {
        if (*(char *)(param_1 + uVar8) == ',') {
          bVar1 = uVar6 <= uVar8;
          goto LAB_1000abcc;
        }
      }
      bVar1 = true;
      uVar8 = uVar6;
LAB_1000abcc:
      uVar4 = (ulong)((int)uVar8 - uVar5);
      bVar2 = recovered_1000a968((byte *)(param_1 + uVar7),uVar4,(byte *)str_1000d2e9);
      if (bVar2) {
        return 1;
      }
      bVar2 = recovered_1000a968((byte *)(param_1 + uVar7),uVar4,(byte *)((uintptr_t)pf_module_state + 0x12c3U));
      if (bVar2) {
        return 3;
      }
      bVar2 = recovered_1000a968((byte *)(param_1 + uVar7),uVar4,(byte *)str_1000d312);
      if (!bVar1) {
        uVar5 = (int)uVar8 + 1;
      }
    } while (!bVar1 && !bVar2);
    uVar3 = 2;
    if (!bVar2) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef str_1000d2e9
#undef str_1000d312

#undef str_1000d31d
#define str_1000d31d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12d9U)))
#undef str_1000d32b
#define str_1000d32b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac50
 */

undefined4 recovered_1000ac50(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar5 = 0;
    uVar6 = (ulong)param_2;
    do {
      if (param_2 < uVar5) {
        return 0;
      }
      uVar7 = (ulong)uVar5;
      for (uVar8 = uVar7; uVar6 != uVar8; uVar8 = uVar8 + 1) {
        if (*(char *)(param_1 + uVar8) == ',') {
          bVar1 = uVar6 <= uVar8;
          goto LAB_1000acd0;
        }
      }
      bVar1 = true;
      uVar8 = uVar6;
LAB_1000acd0:
      uVar4 = (ulong)((int)uVar8 - uVar5);
      bVar2 = recovered_1000a968((byte *)(param_1 + uVar7),uVar4,(byte *)str_1000d31d);
      if (bVar2) {
        return 1;
      }
      bVar2 = recovered_1000a968((byte *)(param_1 + uVar7),uVar4,(byte *)str_1000d32b);
      if (!bVar1) {
        uVar5 = (int)uVar8 + 1;
      }
    } while (!bVar1 && !bVar2);
    uVar3 = 2;
    if (!bVar2) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef str_1000d31d
#undef str_1000d32b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad34
 */

bool recovered_1000ad34(byte *param_1,ulong param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  uVar3 = recovered_10001788((long)param_3);
  uVar5 = 0;
  do {
    uVar4 = param_2 & 0xffffffff;
    if ((param_2 & 0xffffffff) == uVar5) {
LAB_1000ad70:
      if (uVar3 == uVar4) {
        iVar2 = recovered_1000155c(param_1,param_3,uVar3);
        bVar1 = iVar2 == 0;
      }
      else {
        bVar1 = false;
      }
      return bVar1;
    }
    if (param_1[uVar5] == 0x2c) {
      uVar4 = uVar5;
      goto LAB_1000ad70;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


#define local_60 (*(byte (*)[96])(pf_stack_frame + 1424))
#define auStack_5e0 (*(undefined1 (*)[1504])(pf_stack_frame + 16))
#define auStack_560 (*(undefined1 (*)[1376])(pf_stack_frame + 144))
#define local_4e0 (*(ulong (*)[156])(pf_stack_frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad98
 */

void recovered_1000ad98(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[1552] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  for (lVar2 = 0; lVar2 != 0x1f; lVar2 = lVar2 + 1) {
    local_60[lVar2] = *(byte *)(param_2 + lVar2);
  }
  local_60[0x1f] = *(byte *)(param_2 + 0x1f) & 0x3f | 0x40;
  local_60[0] = local_60[0] & 0xf8;
  lVar2 = param_3 + 1;
  for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 8) {
    *(ulong *)((long)local_4e0 + lVar3 + 0x200) = (ulong)*(ushort *)(lVar2 + -1);
    lVar2 = lVar2 + 2;
  }
  local_4e0[0x4f] = local_4e0[0x4f] & 0x7fff;
  for (lVar2 = 0; lVar2 != 0x80; lVar2 = lVar2 + 8) {
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x100) =
         *(undefined8 *)((long)local_4e0 + lVar2 + 0x200);
    *(undefined8 *)((long)local_4e0 + lVar2) = 0;
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x180) = 0;
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x80) = 0;
  }
  local_4e0[0x30] = 1;
  local_4e0[0] = 1;
  uVar5 = 0xfe;
  do {
    uVar4 = (ulong)(local_60[uVar5 >> 3] >> (ulong)((uint)uVar5 & 7) & 1);
    recovered_10006700((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x20),uVar4);
    recovered_10006700((long)(local_4e0 + 0x10),(long)local_4e0,uVar4);
    recovered_10006768((long)auStack_560,(long)(local_4e0 + 0x30),(long)(local_4e0 + 0x10));
    recovered_10006740((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x30),(long)(local_4e0 + 0x10));
    recovered_10006768((long)(local_4e0 + 0x10),(long)(local_4e0 + 0x20),(long)local_4e0);
    recovered_10006740((long)(local_4e0 + 0x20),(long)(local_4e0 + 0x20),(long)local_4e0);
    recovered_10006960((long)local_4e0,(long)auStack_560);
    recovered_10006960((long)auStack_5e0,(long)(local_4e0 + 0x30));
    recovered_10006440((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x10),(long)(local_4e0 + 0x30));
    recovered_10006440((long)(local_4e0 + 0x10),(long)(local_4e0 + 0x20),(long)auStack_560);
    recovered_10006768((long)auStack_560,(long)(local_4e0 + 0x30),(long)(local_4e0 + 0x10));
    recovered_10006740((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x30),(long)(local_4e0 + 0x10));
    recovered_10006960((long)(local_4e0 + 0x20),(long)(local_4e0 + 0x30));
    recovered_10006740((long)(local_4e0 + 0x10),(long)local_4e0,(long)auStack_5e0);
    recovered_10006440((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x10),((uintptr_t)pf_module_state + 0x89cU));
    recovered_10006768((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x30),(long)local_4e0);
    recovered_10006440((long)(local_4e0 + 0x10),(long)(local_4e0 + 0x10),(long)(local_4e0 + 0x30));
    recovered_10006440((long)(local_4e0 + 0x30),(long)local_4e0,(long)auStack_5e0);
    recovered_10006440((long)local_4e0,(long)(local_4e0 + 0x20),(long)(local_4e0 + 0x40));
    recovered_10006960((long)(local_4e0 + 0x20),(long)auStack_560);
    recovered_10006700((long)(local_4e0 + 0x30),(long)(local_4e0 + 0x20),uVar4);
    recovered_10006700((long)(local_4e0 + 0x10),(long)local_4e0,uVar4);
    uVar1 = (uint)uVar5 - 1;
    uVar5 = (ulong)uVar1;
  } while (-1 < (int)uVar1);
  for (lVar2 = 0; lVar2 != 0x80; lVar2 = lVar2 + 8) {
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x280) =
         *(undefined8 *)((long)local_4e0 + lVar2 + 0x180);
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x300) =
         *(undefined8 *)((long)local_4e0 + lVar2 + 0x80);
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x380) =
         *(undefined8 *)((long)local_4e0 + lVar2 + 0x100);
    *(undefined8 *)((long)local_4e0 + lVar2 + 0x400) = *(undefined8 *)((long)local_4e0 + lVar2);
  }
  recovered_10006790((long)(local_4e0 + 0x60),(long)(local_4e0 + 0x60));
  recovered_10006440((long)(local_4e0 + 0x50),(long)(local_4e0 + 0x50),(long)(local_4e0 + 0x60));
  recovered_1000682c(param_1,(long)(local_4e0 + 0x50));
  recovered_10005318(local_60,0x20);
  recovered_10005318((undefined1 *)(local_4e0 + 0x40),0x280);
  return;
}

#undef local_60
#undef auStack_5e0
#undef auStack_560
#undef local_4e0

#undef DAT_1000c798
#define DAT_1000c798 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x754U)))
#undef DAT_1000ca60
#define DAT_1000ca60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1cU)))
#define auStack_128 (*(undefined1 (*)[296])(pf_stack_frame + 24))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 88))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b048
 */

void recovered_1000b048(ulong *param_1,int param_2,int param_3,long param_4,undefined1 *param_5,
                       ulong param_6,undefined1 *param_7,int param_8)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  byte bVar19;
  byte bVar20;
  ulong uVar21;

  uVar9 = 0x43;
  if (param_8 != 0) {
    uVar9 = 0x44;
  }
  recovered_10001498(param_1,0,0x19c);
  *(int *)param_1 = param_2;
  *(int *)((long)param_1 + 4) = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_2 == 1) {
    recovered_1000b420(param_4,param_5,param_6,param_7,uVar9,(undefined1 *)((long)param_1 + 9));
    *(undefined8 *)((long)param_1 + 0x194) = 0x800000010;
  }
  else {
    uVar12 = 0x20;
    if (param_2 != 3) {
      uVar12 = 0x10;
    }
    uVar10 = 0x41;
    if (param_8 != 0) {
      uVar10 = 0x42;
    }
    uVar11 = 0x45;
    if (param_8 != 0) {
      uVar11 = 0x46;
    }
    recovered_1000b420(param_4,param_5,param_6,param_7,uVar10,auStack_a8);
    recovered_1000b420(param_4,param_5,param_6,param_7,uVar9,auStack_e8);
    recovered_1000b420(param_4,param_5,param_6,param_7,uVar11,auStack_128);
    puVar1 = (undefined1 *)((long)param_1 + 0x4c);
    uVar4 = uVar12 >> 2;
    *(uint *)((long)param_1 + 0x13c) = uVar4 + 6;
    recovered_100012ac(puVar1,auStack_e8,(ulong)uVar12);
    uVar13 = (ulong)(uVar12 >> 2);
    lVar15 = uVar13 * 4;
    iVar16 = uVar4 * -4;
    iVar17 = -4;
    puVar18 = puVar1;
    for (; uVar13 < uVar12 + 0x1c; uVar13 = uVar13 + 1) {
      iVar14 = (int)lVar15;
      bVar7 = puVar1[(uint)(iVar14 + iVar17)];
      uVar8 = (ulong)bVar7;
      uVar2 = iVar14 + iVar17 + 1;
      bVar5 = puVar1[uVar2];
      bVar19 = puVar1[uVar2 + 1];
      bVar20 = puVar1[uVar2 + 2];
      uVar21 = (ulong)bVar20;
      uVar2 = uVar4 - 1 & (uint)uVar13;
      if (uVar2 == 0) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = (uint)uVar13 / uVar4;
        }
        bVar7 = (&DAT_1000ca60)[uVar2] ^ (&DAT_1000c798)[bVar5];
        uVar6 = (ulong)bVar19;
LAB_1000b1e4:
        bVar5 = (&DAT_1000c798)[uVar6];
        bVar20 = (&DAT_1000c798)[uVar8];
        bVar19 = (&DAT_1000c798)[uVar21];
      }
      else if (param_2 == 3 && uVar2 == 4) {
        bVar7 = (&DAT_1000c798)[uVar8];
        uVar6 = (ulong)bVar5;
        uVar8 = uVar21;
        uVar21 = (ulong)bVar19;
        goto LAB_1000b1e4;
      }
      uVar2 = iVar14 + iVar16;
      pbVar3 = puVar18 + lVar15;
      *pbVar3 = puVar1[uVar2] ^ bVar7;
      pbVar3[1] = puVar1[uVar2 + 1] ^ bVar5;
      pbVar3[2] = puVar1[uVar2 + 2] ^ bVar19;
      pbVar3[3] = puVar1[uVar2 + 3] ^ bVar20;
      iVar16 = iVar16 + 4;
      iVar17 = iVar17 + 4;
      puVar18 = puVar18 + 4;
    }
    recovered_100012ac((undefined1 *)(param_1 + 0x28),auStack_a8,0x10);
    uVar12 = 0x40;
    if (param_3 != 2) {
      uVar12 = 0x20;
    }
    *(uint *)(param_1 + 0x32) = uVar12;
    recovered_100012ac((undefined1 *)(param_1 + 0x2a),auStack_128,(ulong)uVar12);
    *(int *)((long)param_1 + 0x194) = (int)param_1[0x32];
    *(undefined4 *)(param_1 + 0x33) = 0x10;
    recovered_10005318(auStack_a8,0x40);
    recovered_10005318(auStack_e8,0x40);
    recovered_10005318(auStack_128,0x40);
  }
  return;
}

#undef DAT_1000c798
#undef DAT_1000ca60
#undef auStack_128
#undef auStack_e8
#undef auStack_a8

#define auStack_220 (*(ulong (*)[68])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2bc
 */

void recovered_1000b2bc(undefined1 *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 1) {
    auStack_220[lVar1] = (ulong)(byte)param_1[lVar1];
  }
  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 1) {
    param_1[lVar1] = 0;
  }
  recovered_1000b318(param_1,(long *)auStack_220);
  return;
}

#undef auStack_220

#undef DAT_1000c960
#define DAT_1000c960 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x91cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b318
 */

void recovered_1000b318(undefined1 *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  plVar3 = param_2 + 0x1f;
  uVar4 = 0x33;
  for (uVar5 = 0x3f; 0x1f < uVar5; uVar5 = uVar5 - 1) {
    lVar7 = 0;
    for (lVar6 = 0; lVar6 != 0xa0; lVar6 = lVar6 + 8) {
      lVar2 = lVar7 + param_2[uVar5] * *(long *)((long)&DAT_1000c960 + lVar6) * -0x10 +
              *(long *)((long)plVar3 + lVar6);
      uVar1 = lVar2 + 0x80;
      lVar7 = (long)uVar1 >> 8;
      *(ulong *)((long)plVar3 + lVar6) = lVar2 - (uVar1 & 0xffffffffffffff00);
    }
    param_2[uVar4 & 0xffffffff] = param_2[uVar4 & 0xffffffff] + lVar7;
    uVar4 = uVar4 - 1;
    param_2[uVar5] = 0;
    plVar3 = plVar3 + -1;
  }
  lVar7 = 0;
  for (lVar6 = 0; lVar6 != 0x100; lVar6 = lVar6 + 8) {
    uVar4 = (lVar7 - (param_2[0x1f] >> 4) * *(long *)((long)&DAT_1000c960 + lVar6)) +
            *(long *)((long)param_2 + lVar6);
    lVar7 = (long)uVar4 >> 8;
    *(ulong *)((long)param_2 + lVar6) = uVar4 & 0xff;
  }
  for (lVar6 = 0; lVar6 != 0x100; lVar6 = lVar6 + 8) {
    *(long *)((long)param_2 + lVar6) =
         *(long *)((long)param_2 + lVar6) - *(long *)((long)&DAT_1000c960 + lVar6) * lVar7;
  }
  lVar6 = 0x20;
  do {
    plVar3 = param_2 + 1;
    *plVar3 = *plVar3 + (*param_2 >> 8);
    *param_1 = (char)*param_2;
    lVar6 = lVar6 + -1;
    param_1 = param_1 + 1;
    param_2 = plVar3;
  } while (lVar6 != 0);
  return;
}

#undef DAT_1000c960

#undef DAT_1000c120
#define DAT_1000c120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef UNK_1000c128
#define UNK_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef UNK_1000c138
#define UNK_1000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_1000c120
#define _DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef _DAT_1000c130
#define _DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef uRam000000001000c128
#define uRam000000001000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef uRam000000001000c138
#define uRam000000001000c138 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_58 (*(undefined4 *)(pf_stack_frame + 152))
#define local_41 (*(undefined1 *)(pf_stack_frame + 175))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define uStack_b8 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_b0 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_a8 (*(undefined8 *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b420(long param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                       undefined1 param_5,undefined1 *param_6)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  uVar4 = uRam000000001000c138;
  uVar3 = _DAT_1000c130;
  uVar2 = uRam000000001000c128;
  uVar1 = _DAT_1000c120;
  uStack_b8 = uRam000000001000c128;
  local_c0 = _DAT_1000c120;
  uStack_a8 = uRam000000001000c138;
  uStack_b0 = _DAT_1000c130;
  local_a0 = 0;
  local_58 = 0;
  local_41 = param_5;
  recovered_1000611c((uint *)&local_c0,param_2,param_3 & 0xffffffff);
  recovered_1000611c((uint *)&local_c0,param_4,0x20);
  recovered_1000611c((uint *)&local_c0,&local_41,1);
  recovered_1000611c((uint *)&local_c0,(undefined1 *)(param_1 + 0x498),0x20);
  recovered_1000618c((uint *)&local_c0,(long)auStack_e0);
  uStack_b8 = uVar2;
  local_c0 = uVar1;
  uStack_a8 = uVar4;
  uStack_b0 = uVar3;
  local_a0 = 0;
  local_58 = 0;
  recovered_1000611c((uint *)&local_c0,param_2,param_3 & 0xffffffff);
  recovered_1000611c((uint *)&local_c0,param_4,0x20);
  recovered_1000611c((uint *)&local_c0,auStack_e0,0x20);
  recovered_1000618c((uint *)&local_c0,(long)(param_6 + 0x20));
  recovered_100012ac(param_6,auStack_e0,0x20);
  recovered_10005318(auStack_e0,0x20);
  return;
}

#undef DAT_1000c120
#undef DAT_1000c130
#undef UNK_1000c128
#undef UNK_1000c138
#undef _DAT_1000c120
#undef _DAT_1000c130
#undef uRam000000001000c128
#undef uRam000000001000c138
#undef local_c0
#undef local_a0
#undef local_58
#undef local_41
#undef auStack_e0
#undef uStack_b8
#undef uStack_b0
#undef uStack_a8

#undef DAT_1000cb44
#define DAT_1000cb44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_10014ae2
#define DAT_10014ae2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a9eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b520
 */

bool recovered_1000b520(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  iVar2 = recovered_100017ac(&DAT_10014ae2,&DAT_1000cb44);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = recovered_100017ac(&DAT_10014ae2,param_1);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

#undef DAT_1000cb44
#undef DAT_10014ae2

#undef DAT_1000d54a
#define DAT_1000d54a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1506U)))
#undef DAT_1000d556
#define DAT_1000d556 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1512U)))
#undef str_1000d54f
#define str_1000d54f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b56c
 */

bool recovered_1000b56c(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;

  bVar4 = recovered_1000b660(param_1,&DAT_1000d54a);
  if ((bVar4) || (bVar4 = recovered_1000b660(param_1,(byte *)str_1000d54f), bVar4)) {
    return true;
  }
  pbVar5 = &DAT_1000d556;
  do {
    bVar2 = *param_1;
    bVar3 = *pbVar5;
    if ((bVar2 == 0) || (bVar3 == 0)) {
      return bVar2 == 0 && bVar3 == 0;
    }
    bVar1 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41U) {
      bVar1 = bVar2;
    }
    bVar2 = bVar3 | 0x20;
    if (0x19 < bVar3 - 0x41U) {
      bVar2 = bVar3;
    }
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 == bVar2);
  return false;
}

#undef DAT_1000d54a
#undef DAT_1000d556
#undef str_1000d54f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5c0
 */

void recovered_1000b5c0(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001788((long)param_2);
  recovered_10005b58((undefined1 *)(param_1 + 0xbba),0x200,param_2,uVar1);
  *(undefined1 *)(param_1 + 3000) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5f0
 */

void recovered_1000b5f0(long param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
    recovered_10007858(*(undefined1 **)(param_1 + 0xba8),0x8000,
                       *(int *)(param_1 + 0xbb0) + *(int *)(param_1 + 0xbb4) & 0x7fff,param_2,
                       param_3);
    *(uint *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b640
 */

void recovered_1000b640(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;

  lVar1 = recovered_10001788((long)param_2);
  uVar2 = (uint)lVar1;
  if (uVar2 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
    recovered_10007858(*(undefined1 **)(param_1 + 0xba8),0x8000,
                       *(int *)(param_1 + 0xbb0) + *(int *)(param_1 + 0xbb4) & 0x7fff,param_2,uVar2)
    ;
    *(uint *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b660
 */

bool recovered_1000b660(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;

  do {
    bVar2 = *param_1;
    bVar3 = *param_2;
    if ((bVar2 == 0) || (bVar3 == 0)) {
      return bVar2 == 0 && bVar3 == 0;
    }
    bVar1 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41U) {
      bVar1 = bVar2;
    }
    bVar2 = bVar3 | 0x20;
    if (0x19 < bVar3 - 0x41U) {
      bVar2 = bVar3;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar1 == bVar2);
  return false;
}


#undef DAT_1000ca6b
#define DAT_1000ca6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa27U)))
#undef DAT_1000cbe5
#define DAT_1000cbe5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba1U)))
#undef DAT_1000d573
#define DAT_1000d573 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152fU)))
#undef DAT_1000d577
#define DAT_1000d577 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1533U)))
#undef DAT_1000d585
#define DAT_1000d585 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1541U)))
#undef str_1000d57c
#define str_1000d57c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1538U)))
#define abStack_230 (*(byte (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6b4
 */

void recovered_1000b6b4(long param_1,int param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 uVar7;

  bVar2 = *(byte *)(param_1 + 0xa9d);
  *(bool *)(param_1 + 0xa9d) = param_2 == 0xd;
  cVar3 = *(char *)(param_1 + 0xa9c);
  if (cVar3 == '\x03') {
LAB_1000b71c:
    *(undefined1 *)(param_1 + 0xa9c) = 0;
    return;
  }
  if (cVar3 == '\x02') {
    if (0x3e < param_2 - 0x40U) {
      return;
    }
    goto LAB_1000b71c;
  }
  if (cVar3 == '\x01') {
    if (param_2 == 0x4f) {
      uVar7 = 3;
    }
    else {
      if (param_2 != 0x5b) goto LAB_1000b71c;
      uVar7 = 2;
    }
LAB_1000b760:
    *(undefined1 *)(param_1 + 0xa9c) = uVar7;
    return;
  }
  switch((uintptr_t)(param_2)) {
  case 3:
    recovered_1000b640(param_1,&DAT_1000d577);
    *(undefined4 *)(param_1 + 0xa98) = 0;
    break;
  case 4:
    if (*(int *)(param_1 + 0xa98) != 0) {
      return;
    }
    recovered_1000b640(param_1,str_1000d57c);
    if ((*(byte *)(param_1 + 0xde3) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xde3) = 1;
      *(undefined4 *)(param_1 + 0xde8) = 0;
      return;
    }
    return;
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
switchD_1000b744_caseD_5:
    if (0x5e < param_2 - 0x20U) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xa98);
    uVar6 = uVar1 + 1;
    if (0x1ff < uVar6) {
      return;
    }
    *(uint *)(param_1 + 0xa98) = uVar6;
    *(char *)(param_1 + (ulong)uVar1 + 0x898) = (char)param_2;
    if (*(char *)(param_1 + 0x888) == '\x01') {
      recovered_1000b5f0(param_1,abStack_230 + 0x20f,1);
      return;
    }
    return;
  case 8:
    goto switchD_1000b744_caseD_8;
  case 9:
    return;
  case 10:
    if ((bVar2 & 1) != 0) {
      return;
    }
  case 0xd:
    if (*(char *)(param_1 + 0x888) == '\x01') {
      recovered_1000b5f0(param_1,&DAT_1000cbe5,2);
    }
    if (*(uint *)(param_1 + 0xa98) != 0) {
      recovered_100012ac(abStack_230,(undefined1 *)(param_1 + 0x898),
                         (ulong)*(uint *)(param_1 + 0xa98));
      abStack_230[*(uint *)(param_1 + 0xa98)] = 0;
      *(undefined4 *)(param_1 + 0xa98) = 0;
      bVar4 = recovered_1000b56c(abStack_230);
      if (bVar4) {
        recovered_1000b640(param_1,str_1000d57c);
        if ((*(byte *)(param_1 + 0xde3) & 1) == 0) {
          *(undefined1 *)(param_1 + 0xde3) = 1;
          *(undefined4 *)(param_1 + 0xde8) = 0;
        }
      }
      else {
        recovered_1000b5c0(param_1,abStack_230);
      }
      return;
    }
    break;
  case 0xc:
    recovered_1000b640(param_1,&DAT_1000d585);
    break;
  case 0x15:
    while (*(int *)(param_1 + 0xa98) != 0) {
      *(int *)(param_1 + 0xa98) = *(int *)(param_1 + 0xa98) + -1;
      if (*(char *)(param_1 + 0x888) == '\x01') {
        recovered_1000b5f0(param_1,&DAT_1000d573,3);
      }
    }
    return;
  default:
    if (param_2 == 0x1b) {
      uVar7 = 1;
      goto LAB_1000b760;
    }
    if (param_2 != 0x7f) goto switchD_1000b744_caseD_5;
    goto switchD_1000b744_caseD_8;
  }
  if (*(char *)(param_1 + 0x888) == '\x01') {
    recovered_1000b640(param_1,&DAT_1000ca6b);
    uVar6 = *(uint *)(param_1 + 0xa98);
    if (uVar6 != 0) {
      puVar5 = (undefined1 *)(param_1 + 0x898);
code_r0x1000b5f0:
      if (uVar6 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
        recovered_10007858(*(undefined1 **)(param_1 + 0xba8),0x8000,
                           *(int *)(param_1 + 0xbb0) + *(int *)(param_1 + 0xbb4) & 0x7fff,puVar5,
                           uVar6);
        *(uint *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar6;
      }
      return;
    }
  }
  return;
switchD_1000b744_caseD_8:
  if (*(int *)(param_1 + 0xa98) == 0) {
    return;
  }
  *(int *)(param_1 + 0xa98) = *(int *)(param_1 + 0xa98) + -1;
  if (*(char *)(param_1 + 0x888) != '\x01') {
    return;
  }
  puVar5 = &DAT_1000d573;
  uVar6 = 3;
  goto code_r0x1000b5f0;
}

#undef DAT_1000ca6b
#undef DAT_1000cbe5
#undef DAT_1000d573
#undef DAT_1000d577
#undef DAT_1000d585
#undef str_1000d57c
#undef abStack_230

#undef DAT_1000ca6b
#define DAT_1000ca6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa27U)))
#undef DAT_1000cbe5
#define DAT_1000cbe5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba1U)))
#undef str_1000d57c
#define str_1000d57c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1538U)))
#define abStack_230 (*(byte (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b888
 */

void recovered_1000b888(long param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  if (*(char *)(param_1 + 0x888) == '\x01') {
    recovered_1000b5f0(param_1,&DAT_1000cbe5,2);
  }
  if (*(uint *)(param_1 + 0xa98) != 0) {
    recovered_100012ac(abStack_230,(undefined1 *)(param_1 + 0x898),(ulong)*(uint *)(param_1 + 0xa98)
                      );
    abStack_230[*(uint *)(param_1 + 0xa98)] = 0;
    *(undefined4 *)(param_1 + 0xa98) = 0;
    bVar2 = recovered_1000b56c(abStack_230);
    if (bVar2) {
      recovered_1000b640(param_1,str_1000d57c);
      if ((*(byte *)(param_1 + 0xde3) & 1) == 0) {
        *(undefined1 *)(param_1 + 0xde3) = 1;
        *(undefined4 *)(param_1 + 0xde8) = 0;
      }
    }
    else {
      recovered_1000b5c0(param_1,abStack_230);
    }
    return;
  }
  if (*(char *)(param_1 + 0x888) == '\x01') {
    recovered_1000b640(param_1,&DAT_1000ca6b);
    uVar1 = *(uint *)(param_1 + 0xa98);
    if (uVar1 != 0) {
      if (uVar1 <= 0x8000U - *(int *)(param_1 + 0xbb4)) {
        recovered_10007858(*(undefined1 **)(param_1 + 0xba8),0x8000,
                           *(int *)(param_1 + 0xbb0) + *(int *)(param_1 + 0xbb4) & 0x7fff,
                           (undefined1 *)(param_1 + 0x898),uVar1);
        *(uint *)(param_1 + 0xbb4) = *(int *)(param_1 + 0xbb4) + uVar1;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000ca6b
#undef DAT_1000cbe5
#undef str_1000d57c
#undef abStack_230

#undef DAT_1000cbe5
#define DAT_1000cbe5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba1U)))
#undef DAT_1000d58d
#define DAT_1000d58d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1549U)))
#define local_31 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b940
 */

void recovered_1000b940(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;

  do {
    if (*(char *)(param_1 + 0xde0) != '\x01') {
      return;
    }
    if (0xfffffffd < *(int *)(param_1 + 0xbb4) - 0x8001U) {
      return;
    }
    local_31 = **(char **)(param_1 + 0xdd8);
    if (local_31 == '\n') {
      if ((*(char *)(param_1 + 0xde1) == '\r') || (*(char *)(param_1 + 0x888) != '\x01'))
      goto LAB_1000b9c4;
      pcVar3 = &DAT_1000cbe5;
      uVar4 = 2;
    }
    else {
      if (local_31 == '\0') {
        if ((*(char *)(param_1 + 0xde1) != '\0') && (*(char *)(param_1 + 0xde1) != '\n')) {
          bVar2 = *(char *)(param_1 + 0x888) == '\0';
          puVar1 = &DAT_1000cbe5;
          if (bVar2) {
            puVar1 = &DAT_1000d58d;
          }
          uVar4 = 1;
          if (!bVar2) {
            uVar4 = 2;
          }
          recovered_1000b5f0(param_1,puVar1,uVar4);
        }
        *(undefined1 *)(param_1 + 0xde0) = 0;
        *(undefined8 *)(param_1 + 0xdd8) = 0;
        return;
      }
LAB_1000b9c4:
      pcVar3 = &local_31;
      uVar4 = 1;
    }
    recovered_1000b5f0(param_1,pcVar3,uVar4);
    *(char *)(param_1 + 0xde1) = local_31;
    *(long *)(param_1 + 0xdd8) = *(long *)(param_1 + 0xdd8) + 1;
  } while( true );
}

#undef DAT_1000cbe5
#undef DAT_1000d58d
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba2c
 */

bool recovered_1000ba2c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  **(undefined1 **)(param_1 + 0xdc0) = 0;
  uVar1 = recovered_10005b84(param_1 + 0xbba,*(undefined8 *)(param_1 + 0xdc0),0x10000);
  *(int *)(param_1 + 0xdcc) = (int)uVar1;
  DataMemoryBarrier(2,3);
  *(undefined4 *)(param_1 + 0xdc8) = 1;
  return *(int *)(param_1 + 0xdcc) == 0;
}

