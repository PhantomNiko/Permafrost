/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d40
 */

uint recovered_10003d40(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

uint recovered_10003d90(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc8
 */

uint recovered_10003dc8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e38
 */

uint recovered_10003e38(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea4
 */

undefined8 recovered_10003ea4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10007648(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003eb4
 */

undefined8 recovered_10003eb4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10007588(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec4
 */

float recovered_10003ec4(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100076d0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ee0
 */

float recovered_10003ee0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007718(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10010080
#define DAT_10010080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f00
 */

void recovered_10003f00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_10010080 = 0;
  recovered_10003f8c();
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return;
}

#undef DAT_10010080
#undef DAT_10010088

#undef DAT_10010080
#define DAT_10010080 (*(char *)(((uintptr_t)pf_module_state + 0x348U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_1001008c
#define DAT_1001008c (*(int *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x40010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x4001008cU))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x40010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x4001008cU))
#define local_ac (*(uint (*)[43])(pf_stack_frame + 20))
#define local_24 (*(int *)(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003f8c(void)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;

  local_24 = 0;
  if (DAT_10010080 != '\0') {
    return;
  }
  DAT_10010084 = 0;
  DAT_1001008c = 0;
  uVar2 = _DAT_4001008c;
  if (0xf < _DAT_4001008c) {
    uVar2 = 0x10;
  }
  if (_DAT_4001008c != 0) {
    uVar10 = 0;
    uVar6 = 0;
    do {
      uVar1 = *(uint *)(uVar6 * 8 + 0x40010090);
      uVar7 = *(uint *)(uVar6 * 8 + 0x40010094);
      bVar12 = CARRY4(uVar7,uVar1);
      uVar5 = uVar7 + uVar1;
      if ((uVar7 != 0) && (bVar12 || bVar12 < (0x300000 < uVar5))) {
        if (uVar1 < 0x300001) {
          uVar1 = 0x300000;
        }
        if (((uVar10 < 0x10) && (!bVar12)) && (uVar1 <= uVar5)) {
          uVar7 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar10;
            puVar9 = local_ac + uVar10 * 2 + 2;
            do {
              uVar7 = uVar8;
              if (puVar9[-2] <= uVar1) break;
              uVar8 = uVar7 - 1;
              puVar9[1] = puVar9[-1];
              *puVar9 = puVar9[-2];
              uVar7 = 0;
              puVar9 = puVar9 + -2;
            } while (uVar8 != 0);
          }
          local_ac[uVar7 * 2 + 2] = uVar1;
          uVar10 = uVar10 + 1;
          local_ac[uVar7 * 2 + 3] = uVar5 - uVar1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
    if (uVar10 != 0) {
      iVar11 = 1;
      if (uVar10 != 1) {
        iVar3 = uVar10 - 1;
        puVar9 = local_ac + 5;
        iVar11 = 1;
        do {
          uVar2 = puVar9[-1];
          uVar6 = local_ac[iVar11 * 2 + 1] + local_ac[iVar11 * 2];
          if (uVar6 < uVar2) {
            uVar2 = puVar9[-1];
            local_ac[iVar11 * 2 + 3] = *puVar9;
            local_ac[iVar11 * 2 + 2] = uVar2;
            iVar11 = iVar11 + 1;
          }
          else {
            uVar2 = *puVar9 + uVar2;
            if (uVar6 < uVar2) {
              local_ac[iVar11 * 2 + 1] = uVar2 - local_ac[iVar11 * 2];
            }
          }
          puVar9 = puVar9 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar11 == 0) goto LAB_1000418c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_100090b8((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_10010084 != 0) goto LAB_100041bc;
    }
  }
LAB_1000418c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_100090b8((int *)0x300000,piVar4,&local_24);
LAB_100041bc:
  if (DAT_1001008c == 0) {
    DAT_1001008c = DAT_10010084;
  }
  DAT_10010080 = 1;
  return;
}

#undef DAT_10010080
#undef DAT_10010084
#undef DAT_1001008c
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000420c
 */

bool recovered_1000420c(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10004288(addresses,sizes,count);
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return bVar1;
}

#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_1001008c
#define DAT_1001008c (*(int * *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004288
 */

bool recovered_10004288(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int unaff_r6;
  int *piVar9;
  bool bVar10;

  bVar10 = false;
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      unaff_r6 = param_3;
    }
    if (param_2 != (undefined4 *)0x0 && param_3 != 0) {
      recovered_10003f8c();
      iVar6 = 0;
      do {
        piVar3 = (int *)param_1[iVar6];
        uVar2 = param_2[iVar6];
        piVar7 = (int *)((int)piVar3 + uVar2);
        if (CARRY4((uint)piVar3,uVar2)) {
          piVar7 = (int *)0xffffffff;
        }
        if ((~(uint)piVar3 < uVar2) || (piVar7 <= piVar3)) {
          return false;
        }
        if ((piVar3 < (int *)0x68000000) && ((int *)0x60000000 < piVar7)) {
          bVar10 = false;
          if (piVar3 < (int *)0x60000000) {
            uVar2 = 0x60000000 - (int)piVar3;
            if (~(uint)piVar3 < uVar2) {
              return false;
            }
            uVar4 = ((uint)((int)piVar3 + 0xf) & 0x7ffffff0) - (int)piVar3;
            if ((uVar4 < uVar2) && (0x20 < (uVar2 - uVar4 & 0xfffffff0))) {
              bVar10 = true;
            }
          }
          if ((piVar7 <= &DAT_68000000 || 0xffffffde < ((uint)piVar7 & 0xfffffff0) + 0x97ffffdf) &&
             (!bVar10)) {
            return false;
          }
        }
        else {
          if ((int *)0xfffffff0 < piVar3) {
            return false;
          }
          uVar4 = ((uint)((int)piVar3 + 0xf) & 0xfffffff0) - (int)piVar3;
          if (uVar2 <= uVar4) {
            return false;
          }
          if ((uVar2 - uVar4 & 0xfffffff0) < 0x21) {
            return false;
          }
        }
        piVar1 = DAT_10010084;
        if (iVar6 != 0) {
          iVar5 = 0;
          do {
            piVar9 = (int *)param_1[iVar5];
            piVar8 = (int *)((int)piVar9 + param_2[iVar5]);
            if (CARRY4((uint)piVar9,param_2[iVar5])) {
              piVar8 = (int *)0xffffffff;
            }
            if (piVar9 < piVar7 && piVar3 < piVar8) {
              return false;
            }
            iVar5 = iVar5 + 1;
          } while (iVar6 != iVar5);
        }
        for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
          piVar8 = (int *)((int)piVar1 + *piVar1 + 0x10U);
          if (CARRY4((uint)piVar1,*piVar1 + 0x10U)) {
            piVar8 = (int *)0xffffffff;
          }
          if ((piVar1 < piVar7) && (piVar3 < piVar8)) {
            return false;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != unaff_r6);
      piVar3 = (int *)&DAT_10010084;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_100090b8((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_1001008c == (int *)0x0) {
        DAT_1001008c = DAT_10010084;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_10010084
#undef DAT_1001008c
#undef DAT_68000000
#undef local_24

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
#define local_14 (*(ulong *)(pf_stack_frame + 28))
#define local_10 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044d0
 */

bool recovered_100044d0(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = size;
  local_10 = address;
  bVar1 = recovered_10004288(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return bVar1;
}

#undef DAT_10010088
#undef local_14
#undef local_10

#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004568
 */

uint recovered_10004568(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f8c();
  uVar2 = 0;
  puVar4 = DAT_10010084;
  while (puVar4 != (uint *)0x0) {
    uVar5 = (uint)(byte)puVar4[3];
    bVar6 = uVar5 == 1;
    if (bVar6) {
      uVar5 = *puVar4;
    }
    puVar4 = (uint *)puVar4[1];
    if (bVar6) {
      uVar2 = uVar5 + uVar2;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return uVar2;
}

#undef DAT_10010084
#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004618
 */

ulonglong recovered_10004618(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f8c();
  uVar2 = 0;
  iVar1 = 0;
  for (puVar4 = DAT_10010084; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
    if ((char)puVar4[3] == '\x01') {
      bVar5 = CARRY4(uVar2,*puVar4);
      uVar2 = uVar2 + *puVar4;
      iVar1 = iVar1 + (uint)bVar5;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return CONCAT44(iVar1,uVar2);
}

#undef DAT_10010084
#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(int * *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d4
 */

uint recovered_100046d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f8c();
  uVar2 = 0;
  for (piVar4 = DAT_10010084; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    uVar2 = *piVar4 + uVar2;
  }
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return uVar2;
}

#undef DAT_10010084
#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000477c
 */

ulonglong recovered_1000477c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f8c();
  uVar2 = 0;
  iVar1 = 0;
  for (puVar4 = DAT_10010084; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
    bVar5 = CARRY4(uVar2,*puVar4);
    uVar2 = uVar2 + *puVar4;
    iVar1 = iVar1 + (uint)bVar5;
  }
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return CONCAT44(iVar1,uVar2);
}

#undef DAT_10010084
#undef DAT_10010088

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000482c
 */

void * recovered_1000482c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_100048b0(size,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return puVar1;
}

#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint * *)(((uintptr_t)pf_module_state + 0x354U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048b0
 */

uint * recovered_100048b0(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;

  if (0xf < param_1 + 0xfU) {
    recovered_10003f8c();
    puVar4 = DAT_10010084;
    puVar5 = DAT_1001008c;
    if (DAT_1001008c == (uint *)0x0) {
      puVar5 = DAT_10010084;
    }
    if (puVar5 != (uint *)0x0) {
      uVar9 = param_1 + 0xfU & 0xfffffff0;
      puVar1 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
      puVar2 = puVar5;
      do {
        if (((char)puVar2[3] == '\x01') && (uVar8 = *puVar2, uVar9 <= uVar8)) {
          puVar6 = puVar2 + 4;
          uVar7 = 0;
          puVar3 = puVar6;
          if (puVar6 < param_2) {
            bVar11 = (uint *)0xffffffef < param_2;
            bVar10 = param_2 == (uint *)0xfffffff0;
            if (param_2 < (uint *)0xfffffff1) {
              bVar11 = (uint *)0xffffffde < puVar6;
              bVar10 = puVar2 == (uint *)0xffffffcf;
            }
            if (!bVar11 || bVar10) {
              puVar3 = puVar2 + 0xc;
              if (puVar2 + 0xc < puVar1) {
                puVar3 = puVar1;
              }
              uVar7 = (int)puVar3 - (int)puVar6;
              if (uVar7 < uVar8) goto joined_r0x10004990;
            }
          }
          else {
joined_r0x10004990:
            if ((((puVar3 <= param_3) && (uVar9 - 1 <= (uint)((int)param_3 - (int)puVar3))) &&
                (uVar7 <= uVar8)) && (uVar9 <= uVar8 - uVar7)) {
              if (uVar9 - 1 < uVar8) {
                bVar10 = 0xffffffdf < uVar9;
                if (-(uint)(uVar8 < uVar9) == 0 &&
                    (uint)(0x1f < uVar8 - uVar9) <= -(uint)(uVar8 < uVar9)) {
                  bVar10 = 0xffffffef < uVar8;
                }
                if (!bVar10) {
                  if (uVar7 == 0) {
LAB_10004a88:
                    uVar7 = uVar8 - uVar9;
                    bVar10 = uVar7 == 0;
                    if (uVar9 <= uVar8) {
                      bVar10 = uVar7 == 0x1f;
                    }
                    if ((uVar9 <= uVar8 && 0x1e < uVar7) && !bVar10) {
                      uVar8 = puVar2[1];
                      puVar4 = (uint *)((int)puVar2 + uVar9 + 0x10);
                      *puVar4 = uVar7 - 0x10;
                      *puVar2 = uVar9;
                      *(uint *)((int)puVar2 + uVar9 + 0x14) = uVar8;
                      *(uint **)((int)puVar2 + uVar9 + 0x18) = puVar2;
                      *(undefined1 *)((int)puVar2 + uVar9 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = puVar4;
                      }
                      puVar2[1] = (uint)puVar4;
                    }
                    else {
                      puVar4 = (uint *)puVar2[1];
                    }
                    DAT_1001008c = DAT_10010084;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_1001008c = puVar4;
                    }
                    return puVar2 + 4;
                  }
                  uVar7 = uVar7 + uVar9;
                  if (uVar7 - 1 < uVar8) {
                    bVar10 = 0xffffffdf < uVar7;
                    if (-(uint)(uVar8 < uVar7) == 0 &&
                        (uint)(0x1f < uVar8 - uVar7) <= -(uint)(uVar8 < uVar7)) {
                      bVar10 = 0xffffffef < uVar8;
                    }
                    if (!bVar10) {
                      puVar2 = recovered_100092b8(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10004a88;
                    }
                  }
                }
              }
              *(undefined1 *)(puVar2 + 3) = 0;
            }
          }
        }
        puVar3 = puVar2 + 1;
        puVar2 = (uint *)*puVar3;
        if ((uint *)*puVar3 == (uint *)0x0) {
          puVar2 = puVar4;
        }
        if (puVar2 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (puVar2 == puVar5) {
          return (uint *)0x0;
        }
      } while( true );
    }
  }
  return (uint *)0x0;
}

#undef DAT_10010084
#undef DAT_1001008c

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b08
 */

void * recovered_10004b08(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_100048b0(size,(uint *)0x0,(uint *)limit);
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return puVar1;
}

#undef DAT_10010088

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b90
 */

void * recovered_10004b90(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (first <= last) {
    puVar2 = recovered_100048b0(size,(uint *)first,(uint *)last);
  }
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return puVar2;
}

#undef DAT_10010088

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c20
 */

void recovered_10004c20(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10004c9c((int)pointer);
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return;
}

#undef DAT_10010088

#undef DAT_1001008c
#define DAT_1001008c (*(uint * *)(((uintptr_t)pf_module_state + 0x354U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c9c
 */

void recovered_10004c9c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10003f8c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_1001008c == puVar1) {
        DAT_1001008c = puVar4;
      }
      *(uint *)(param_1 + -0x10) = uVar3;
      *(uint **)(param_1 + -0xc) = puVar2;
      if ((puVar2 == (uint *)0x0) ||
         (puVar2[2] = (uint)puVar4, puVar1 = puVar2, (char)puVar2[3] == '\0')) break;
    }
  }
  puVar1 = *(uint **)(param_1 + -8);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar1;
    if ((uint *)((int)puVar1 + uVar3 + 0x10) == puVar4) {
      puVar4 = (uint *)puVar1[1];
      if ((puVar4 != (uint *)0x0) && ((char)puVar4[3] == '\x01')) {
        do {
          if ((0xffffffef < uVar3) ||
             (((uint *)((int)puVar1 + uVar3 + 0x10) != puVar4 || (-uVar3 - 0x11 < *puVar4)))) break;
          puVar2 = (uint *)puVar4[1];
          uVar3 = uVar3 + *puVar4 + 0x10;
          *puVar1 = uVar3;
          puVar1[1] = (uint)puVar2;
          if (puVar2 == (uint *)0x0) break;
          if (DAT_1001008c == puVar4) {
            DAT_1001008c = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_1001008c = puVar4;
  return;
}

#undef DAT_1001008c

#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0x350U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint * *)(((uintptr_t)pf_module_state + 0x354U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e08
 */

void * recovered_10004e08(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;

  do {
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
    iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
  } while (iVar7 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10010088 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x350U));
      iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0x350U),1);
    } while (iVar7 != 0);
    DataMemoryBarrier(0xb);
  }
  if (pointer == (void *)0x0) {
    puVar3 = recovered_100048b0(size,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_1000503c;
  }
  if (size == 0) {
    recovered_10004c9c((int)pointer);
    puVar3 = (uint *)0x0;
    goto LAB_1000503c;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < size) goto LAB_1000503c;
  recovered_10003f8c();
  puVar12 = (uint *)(size + 0xf & 0xfffffff0);
  puVar10 = (uint *)((int)pointer + -0x10);
  puVar6 = (uint *)*puVar10;
  if (puVar12 <= puVar6) {
    puVar3 = (uint *)0x0;
    if ((uint *)((int)puVar12 + -1) < puVar6) {
      bVar15 = (uint *)0xffffffdf < puVar12;
      if (-(uint)(puVar6 < puVar12) == 0 &&
          (uint)(0x1f < (uint)((int)puVar6 - (int)puVar12)) <= -(uint)(puVar6 < puVar12)) {
        bVar15 = (uint *)0xffffffef < puVar6;
      }
      if (!bVar15) {
        if ((uint)((int)puVar6 - (int)puVar12) < 0x20) {
          puVar3 = pointer;
        }
        else {
          DAT_1001008c = (uint *)((int)pointer + (int)puVar12);
          *DAT_1001008c = ((int)puVar6 - (int)puVar12) - 0x10;
          uVar1 = *(uint *)((int)pointer + -0xc);
          *(undefined1 *)(DAT_1001008c + 3) = 1;
          DAT_1001008c[2] = (uint)puVar10;
          DAT_1001008c[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_1001008c;
          }
          *(uint **)((int)pointer + -0xc) = DAT_1001008c;
          *(uint **)((int)pointer + -0x10) = puVar12;
          puVar3 = pointer;
        }
      }
    }
    goto LAB_1000503c;
  }
  puVar3 = puVar10;
  puVar2 = puVar6;
  puVar5 = puVar6;
  do {
    puVar8 = (uint *)puVar3[1];
    if ((((puVar8 == (uint *)0x0) || ((char)puVar8[3] != '\x01')) || ((uint *)0xffffffef < puVar5))
       || (((uint *)((undefined1 *)((int)puVar3 + (int)puVar2) + 0x10) != puVar8 ||
           (puVar2 = (uint *)*puVar8, (uint *)(-0x11 - (int)puVar5) < puVar2)))) break;
    puVar5 = (uint *)((undefined1 *)((int)puVar5 + (int)puVar2) + 0x10);
    puVar3 = puVar8;
  } while (puVar5 < puVar12);
  if ((uint *)((int)puVar12 + -1) < puVar5) {
    bVar15 = (uint *)0xffffffdf < puVar12;
    if (-(uint)(puVar5 < puVar12) == 0 &&
        (uint)(0x1f < (uint)((int)puVar5 - (int)puVar12)) <= -(uint)(puVar5 < puVar12)) {
      bVar15 = (uint *)0xffffffef < puVar5;
    }
    if (!bVar15) {
      puVar2 = *(uint **)((int)pointer + -0xc);
      puVar3 = DAT_1001008c;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar6 ||
            (((uint *)((int)pointer + (int)puVar6) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar6 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar10;
          DAT_1001008c = puVar10;
        }
        puVar6 = (uint *)((int)puVar6 + uVar1 + 0x10);
        *(uint **)((int)pointer + -0x10) = puVar6;
        if (puVar2 != (uint *)0x0) {
          puVar2[2] = (uint)puVar10;
        }
        *(uint **)((int)pointer + -0xc) = puVar2;
      } while (puVar6 < puVar12);
      puVar3 = (uint *)0x0;
      if (puVar12 <= puVar6) {
        iVar4 = recovered_1000933c(puVar10,(int)puVar12);
        if (iVar4 != 0) {
          DAT_1001008c = *(uint **)((int)pointer + -0xc);
        }
        *(undefined1 *)((int)pointer + -4) = 0;
        puVar3 = pointer;
      }
      goto LAB_1000503c;
    }
  }
  puVar6 = recovered_100048b0((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar6 == (uint *)0x0) goto LAB_1000503c;
  puVar10 = (uint *)*puVar10;
  if (puVar10 < puVar12) {
    puVar12 = puVar10;
  }
  puVar3 = puVar6;
  puVar2 = pointer;
  if (puVar12 < &SupervisorCall) {
LAB_1000510c:
    if (puVar12 != (uint *)0x0) goto LAB_10005114;
  }
  else {
    puVar10 = (uint *)((uint)puVar6 ^ (uint)pointer);
    if (((uint)puVar10 & 3) == 0) {
      if (((uint)puVar6 & 3) == 0) {
        puVar3 = pointer;
        puVar5 = puVar6;
        puVar8 = puVar12;
      }
      else {
        *(undefined1 *)puVar6 = *(undefined1 *)pointer;
        if ((uint *)((int)puVar12 + -1) == (uint *)0x0 || ((uint)((int)puVar6 + 1) & 3) == 0) {
          puVar3 = (uint *)((int)pointer + 1);
          puVar5 = (uint *)((int)puVar6 + 1);
          puVar8 = (uint *)((int)puVar12 + -1);
        }
        else {
          *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)((int)pointer + 1);
          puVar3 = (uint *)((int)pointer + 2);
          puVar5 = (uint *)((int)puVar6 + 2);
          puVar8 = (uint *)((int)puVar12 + -2);
          if ((uint *)((int)puVar12 + -2) != (uint *)0x0 && ((uint)((int)puVar6 + 2) & 3) != 0) {
            puVar8 = (uint *)((int)puVar12 + -3);
            *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)pointer + 2);
            puVar3 = (uint *)((int)pointer + 3);
            puVar5 = (uint *)((int)puVar6 + 3);
            if ((puVar8 != (uint *)0x0) && (((uint)puVar5 & 3) != 0)) {
              puVar8 = puVar12 + -1;
              *(undefined1 *)((int)puVar6 + 3) = *(undefined1 *)((int)pointer + 3);
              puVar5 = puVar6 + 1;
              puVar3 = (uint *)((int)pointer + 4);
            }
          }
        }
      }
      puVar9 = puVar5;
      if (puVar8 < &DataAbort) {
        puVar10 = puVar5;
        puVar2 = puVar3;
        puVar12 = puVar8;
      }
      else {
        if ((uint *)0x2f < puVar8 + -4) {
          puVar10 = (uint *)((uint)puVar8 & 0xfffffff0);
          bVar15 = puVar5 < (uint *)((int)puVar3 + (int)puVar10);
          if (bVar15) {
            puVar10 = (uint *)((int)puVar5 + (int)puVar10);
          }
          if (!(bVar15 && puVar3 < puVar10)) {
            uVar14 = ((uint)(puVar8 + -4) >> 4) + 1;
            uVar11 = uVar14 & 0xfffffffc;
            puVar12 = puVar8 + uVar11 * -4;
            puVar10 = puVar5 + uVar11 * 4;
            puVar2 = puVar3 + uVar11 * 4;
            uVar1 = uVar11;
            do {
              uVar16 = *(undefined8 *)(puVar3 + 2);
              puVar9 = puVar5 + 0x10;
              uVar1 = uVar1 - 4;
              uVar17 = *(undefined8 *)(puVar3 + 4);
              uVar18 = *(undefined8 *)(puVar3 + 6);
              uVar19 = *(undefined8 *)(puVar3 + 8);
              uVar20 = *(undefined8 *)(puVar3 + 10);
              uVar21 = *(undefined8 *)(puVar3 + 0xc);
              uVar22 = *(undefined8 *)(puVar3 + 0xe);
              *(undefined8 *)puVar5 = *(undefined8 *)puVar3;
              *(undefined8 *)(puVar5 + 2) = uVar16;
              *(undefined8 *)(puVar5 + 4) = uVar17;
              *(undefined8 *)(puVar5 + 6) = uVar18;
              *(undefined8 *)(puVar5 + 8) = uVar19;
              *(undefined8 *)(puVar5 + 10) = uVar20;
              *(undefined8 *)(puVar5 + 0xc) = uVar21;
              *(undefined8 *)(puVar5 + 0xe) = uVar22;
              puVar3 = puVar3 + 0x10;
              puVar5 = puVar9;
            } while (uVar1 != 0);
            puVar5 = puVar10;
            puVar3 = puVar2;
            puVar8 = puVar12;
            if (uVar14 == uVar11) goto LAB_100052f4;
          }
        }
        do {
          puVar8 = puVar8 + -4;
          *puVar5 = *puVar3;
          puVar5[1] = puVar3[1];
          puVar5[2] = puVar3[2];
          puVar10 = puVar3 + 3;
          puVar3 = puVar3 + 4;
          puVar5[3] = *puVar10;
          puVar5 = puVar5 + 4;
          puVar10 = puVar5;
          puVar2 = puVar3;
          puVar12 = puVar8;
        } while ((uint *)0xf < puVar8);
      }
LAB_100052f4:
      if (puVar12 < &UndefinedInstruction) {
        puVar3 = puVar10;
      }
      else {
        puVar3 = puVar12 + -1;
        bVar15 = puVar3 == (uint *)&PrefetchAbort;
        if ((uint *)0xb < puVar3) {
          puVar9 = (uint *)((int)puVar10 - (int)puVar2);
          bVar15 = puVar9 == (uint *)0xf;
        }
        if (((uint *)0xb < puVar3 && (uint *)0xe < puVar9) && !bVar15) {
          uVar14 = ((uint)puVar3 >> 2) + 1;
          uVar11 = uVar14 & 0xfffffffc;
          puVar12 = puVar12 + -uVar11;
          puVar5 = puVar10 + uVar11;
          puVar8 = puVar2 + uVar11;
          uVar1 = uVar11;
          do {
            uVar16 = *(undefined8 *)puVar2;
            uVar17 = *(undefined8 *)(puVar2 + 2);
            puVar2 = puVar2 + 4;
            uVar1 = uVar1 - 4;
            *(undefined8 *)puVar10 = uVar16;
            *(undefined8 *)(puVar10 + 2) = uVar17;
            puVar10 = puVar10 + 4;
          } while (uVar1 != 0);
          puVar3 = puVar5;
          puVar2 = puVar8;
          if (uVar14 == uVar11) goto LAB_1000510c;
        }
        else {
          puVar5 = puVar10;
          puVar8 = puVar2;
        }
        do {
          puVar2 = puVar8 + 1;
          puVar10 = (uint *)*puVar8;
          puVar12 = puVar12 + -1;
          puVar3 = puVar5 + 1;
          *puVar5 = (uint)puVar10;
          puVar5 = puVar3;
          puVar8 = puVar2;
        } while ((uint *)0x3 < puVar12);
      }
      goto LAB_1000510c;
    }
LAB_10005114:
    if ((uint *)0xf < puVar12) {
      puVar10 = (uint *)((int)puVar3 - (int)puVar2);
    }
    if ((uint *)0xf < puVar12 && (uint *)0xf < puVar10) {
      puVar13 = (uint *)((uint)puVar12 & 0xfffffff0);
      puVar10 = (uint *)((uint)puVar12 & 0xf);
      puVar9 = (uint *)((int)puVar2 + (int)puVar13);
      puVar5 = (uint *)((int)puVar3 + (int)puVar13);
      puVar8 = puVar13;
      do {
        uVar16 = *(undefined8 *)puVar2;
        uVar17 = *(undefined8 *)(puVar2 + 2);
        puVar2 = puVar2 + 4;
        puVar8 = puVar8 + -4;
        *(undefined8 *)puVar3 = uVar16;
        *(undefined8 *)(puVar3 + 2) = uVar17;
        puVar3 = puVar3 + 4;
      } while (puVar8 != (uint *)0x0);
      if (puVar12 == puVar13) goto LAB_10005170;
    }
    else {
      puVar10 = puVar12;
      puVar5 = puVar3;
      puVar9 = puVar2;
    }
    do {
      puVar10 = (uint *)((int)puVar10 + -1);
      *(char *)puVar5 = (char)*puVar9;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    } while (puVar10 != (uint *)0x0);
  }
LAB_10005170:
  recovered_10004c9c((int)pointer);
  puVar3 = puVar6;
LAB_1000503c:
  DataMemoryBarrier(0xb);
  DAT_10010088 = 0;
  return puVar3;
}

#undef DAT_10010088
#undef DAT_1001008c
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053a8
 */

longlong recovered_100053a8(uint param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = 0;
  uVar2 = 0;
  if (param_3 < 0x40) {
    if (0x1f < param_3) {
      return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
    }
    uVar2 = param_2 << (param_3 & 0x1f) | (param_1 >> 1) >> (~param_3 & 0x1f);
    iVar1 = param_1 << (param_3 & 0xff);
  }
  return CONCAT44(uVar2,iVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053fc
 */

ulonglong recovered_100053fc(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = 0;
  uVar2 = 0;
  if (param_3 < 0x40) {
    if (0x1f < param_3) {
      return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
    }
    uVar1 = (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f);
    uVar2 = param_2 >> (param_3 & 0xff);
  }
  return CONCAT44(uVar2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005450
 */

undefined8 recovered_10005450(uint param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_3) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 - 0x20 & 0xff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000549c
 */

undefined8 recovered_1000549c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005580
 */

undefined8 recovered_10005580(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005600
 */

undefined8 recovered_10005600(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
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
  uint uVar13;
  bool bVar14;

  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = (int)param_4 >> 0x1f;
    uVar5 = (param_3 ^ uVar3) - uVar3;
    uVar6 = (param_4 ^ uVar3) - (uVar3 + ((param_3 ^ uVar3) < uVar3));
    uVar3 = (int)param_2 >> 0x1f;
    uVar7 = (param_2 ^ uVar3) - (uVar3 + ((param_1 ^ uVar3) < uVar3));
    uVar4 = 0;
    uVar2 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = 0x3f;
    do {
      uVar8 = uVar2 << 1 | uVar4 >> 0x1f;
      uVar12 = uVar11 - 0x20;
      uVar2 = (param_1 ^ uVar3) - uVar3 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar2 = uVar7 >> (uVar12 & 0xff);
      }
      uVar13 = uVar2 & 1 | uVar4 << 1;
      bVar14 = uVar8 <= uVar6;
      bVar1 = (uint)(uVar5 <= uVar13) <= uVar8 - uVar6;
      uVar4 = uVar13 - uVar5;
      uVar2 = uVar8 - (uVar6 + (uVar5 > uVar13));
      if (bVar14 && bVar1) {
        uVar4 = uVar13;
        uVar2 = uVar8;
      }
      uVar8 = 1 >> (0x20 - uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar8 = 1 << (uVar12 & 0xff);
      }
      if (!bVar14 || !bVar1) {
        uVar9 = uVar9 | uVar8;
      }
      uVar8 = 1 << (uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar8 = 0;
      }
      if (!bVar14 || !bVar1) {
        uVar10 = uVar10 | uVar8;
      }
      bVar14 = uVar11 != 0;
      uVar11 = uVar11 - 1;
    } while (bVar14);
    uVar3 = -uVar10;
    uVar2 = -(uVar9 + (uVar10 != 0));
    if (param_2 >> 0x1f == param_4 >> 0x1f) {
      uVar3 = uVar10;
      uVar2 = uVar9;
    }
  }
  return CONCAT44(uVar2,uVar3);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005718
 */

undefined8 recovered_10005718(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar4 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar4) - uVar4;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar4) - (uVar4 + ((param_3 ^ uVar4) < uVar4));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0x3f;
  do {
    uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
    uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
    if (-1 < (int)(uVar2 - 0x20)) {
      uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
    }
    uVar6 = uVar4 & 1 | uVar3 << 1;
    uVar3 = uVar6 - uVar8;
    uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
    if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
      uVar3 = uVar6;
      uVar4 = uVar5;
    }
    bVar10 = uVar2 != 0;
    uVar2 = uVar2 - 1;
  } while (bVar10);
  uVar2 = -(uVar4 + (uVar3 != 0));
  uVar1 = -uVar3;
  if (-1 < (int)param_2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  return CONCAT44(uVar2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057d4
 */

void recovered_100057d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057dc
 */

int recovered_100057dc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e8
 */

void * recovered_100057e8(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar3;
  bool bVar4;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x4f < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_4001084c, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10005838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*UNRECOVERED_JUMPTABLE)(size);
      return pvVar3;
    }
  }
  return (void *)0x0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000583c
 */

void recovered_1000583c(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;

  iVar2 = Ram40010800;
  if (iVar2 != 0x50414d57) {
    return;
  }
  iVar2 = Ram40010804;
  if (iVar2 != 0) {
    uVar1 = Ram40010808;
    bVar3 = 0xb < uVar1;
    if (bVar3) {
      uVar1 = Ram40010808;
    }
    if ((bVar3 && 0x53 < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010850, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10005888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pointer);
      return;
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef UINT_40010854
#define UINT_40010854 (*(uint *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000588c
 */

void * recovered_1000588c(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar3;
  bool bVar4;

  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x57 < uVar1) &&
       (UNRECOVERED_JUMPTABLE = (code *)UINT_40010854, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100058dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*UNRECOVERED_JUMPTABLE)(pointer,size);
      return pvVar3;
    }
  }
  return (void *)0x0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010854

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058e0
 */

void recovered_100058e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;

  puVar10 = param_3;
  if (param_3 < &SupervisorCall) {
  }
  else {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000591c;
    if (((uint)param_1 & 3) == 0) {
      puVar3 = param_2;
      puVar4 = param_1;
    }
    else {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      if ((undefined8 *)((int)param_3 + -1) == (undefined8 *)0x0 ||
          ((uint)((int)param_1 + 1) & 3) == 0) {
        puVar3 = (undefined8 *)((int)param_2 + 1);
        puVar10 = (undefined8 *)((int)param_3 + -1);
        puVar4 = (undefined8 *)((int)param_1 + 1);
      }
      else {
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        puVar3 = (undefined8 *)((int)param_2 + 2);
        puVar10 = (undefined8 *)((int)param_3 + -2);
        puVar4 = (undefined8 *)((int)param_1 + 2);
        if ((undefined8 *)((int)param_3 + -2) != (undefined8 *)0x0 &&
            ((uint)((int)param_1 + 2) & 3) != 0) {
          puVar10 = (undefined8 *)((int)param_3 + -3);
          *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
          puVar3 = (undefined8 *)((int)param_2 + 3);
          puVar4 = (undefined8 *)((int)param_1 + 3);
          if ((puVar10 != (undefined8 *)0x0) && (((uint)puVar4 & 3) != 0)) {
            puVar10 = (undefined8 *)((int)param_3 + -4);
            *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
            puVar4 = (undefined8 *)((int)param_1 + 4);
            puVar3 = (undefined8 *)((int)param_2 + 4);
          }
        }
      }
    }
    puVar5 = puVar3;
    if (puVar10 < &DataAbort) {
      param_2 = puVar3;
      param_1 = puVar4;
    }
    else {
      if ((undefined8 *)0x2f < puVar10 + -2) {
        puVar11 = (undefined8 *)((uint)puVar10 & 0xfffffff0);
        bVar12 = puVar4 < (undefined8 *)((int)puVar3 + (int)puVar11);
        if (bVar12) {
          puVar11 = (undefined8 *)((int)puVar4 + (int)puVar11);
        }
        if (!(bVar12 && puVar3 < puVar11)) {
          uVar9 = ((uint)(puVar10 + -2) >> 4) + 1;
          uVar7 = uVar9 & 0xfffffffc;
          puVar10 = puVar10 + uVar7 * -2;
          param_1 = puVar4 + uVar7 * 2;
          param_2 = puVar3 + uVar7 * 2;
          uVar8 = uVar7;
          do {
            puVar5 = puVar3 + 8;
            uVar13 = puVar3[1];
            uVar8 = uVar8 - 4;
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            uVar16 = puVar3[4];
            uVar17 = puVar3[5];
            uVar18 = puVar3[6];
            uVar19 = puVar3[7];
            *puVar4 = *puVar3;
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            puVar4[4] = uVar16;
            puVar4[5] = uVar17;
            puVar4[6] = uVar18;
            puVar4[7] = uVar19;
            puVar3 = puVar5;
            puVar4 = puVar4 + 8;
          } while (uVar8 != 0);
          puVar3 = param_2;
          puVar4 = param_1;
          if (uVar9 == uVar7) goto LAB_10005ab0;
        }
      }
      do {
        puVar10 = puVar10 + -2;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar3 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        puVar1 = (undefined4 *)((int)puVar3 + 0xc);
        puVar3 = puVar3 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        param_2 = puVar3;
        param_1 = puVar4;
      } while ((undefined8 *)0xf < puVar10);
    }
LAB_10005ab0:
    param_3 = param_2;
    if (puVar10 < &UndefinedInstruction) {
    }
    else {
      puVar2 = (undefined1 *)((int)puVar10 + -4);
      bVar12 = puVar2 == (undefined1 *)0xc;
      if ((undefined1 *)0xb < puVar2) {
        puVar5 = (undefined8 *)((int)param_1 - (int)param_2);
        bVar12 = puVar5 == (undefined8 *)0xf;
      }
      if (((undefined1 *)0xb < puVar2 && (undefined8 *)0xe < puVar5) && !bVar12) {
        uVar7 = ((uint)puVar2 >> 2) + 1;
        uVar9 = uVar7 & 0xfffffffc;
        puVar10 = (undefined8 *)((int)puVar10 + uVar9 * -4);
        puVar4 = (undefined8 *)((int)param_1 + uVar9 * 4);
        puVar3 = (undefined8 *)((int)param_2 + uVar9 * 4);
        uVar8 = uVar9;
        do {
          uVar13 = *param_3;
          uVar14 = param_3[1];
          param_3 = param_3 + 2;
          uVar8 = uVar8 - 4;
          *param_1 = uVar13;
          param_1[1] = uVar14;
          param_1 = param_1 + 2;
        } while (uVar8 != 0);
        param_2 = puVar3;
        param_1 = puVar4;
        if (uVar7 == uVar9) goto LAB_10005914;
      }
      else {
        puVar3 = param_2;
        puVar4 = param_1;
      }
      do {
        param_2 = (undefined8 *)((int)puVar3 + 4);
        param_3 = *(undefined8 **)puVar3;
        puVar10 = (undefined8 *)((int)puVar10 + -4);
        param_1 = (undefined8 *)((int)puVar4 + 4);
        *(undefined8 **)puVar4 = param_3;
        puVar3 = param_2;
        puVar4 = param_1;
      } while ((undefined8 *)0x3 < puVar10);
    }
  }
LAB_10005914:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_1000591c:
  if ((undefined8 *)0xf < puVar10) {
    param_3 = (undefined8 *)((int)param_1 - (int)param_2);
  }
  if ((undefined8 *)0xf < puVar10 && (undefined8 *)0xf < param_3) {
    puVar6 = (undefined8 *)((uint)puVar10 & 0xfffffff0);
    puVar11 = (undefined8 *)((uint)puVar10 & 0xf);
    puVar3 = (undefined8 *)((int)param_2 + (int)puVar6);
    puVar4 = (undefined8 *)((int)param_1 + (int)puVar6);
    puVar5 = puVar6;
    do {
      uVar13 = *param_2;
      uVar14 = param_2[1];
      param_2 = param_2 + 2;
      puVar5 = puVar5 + -2;
      *param_1 = uVar13;
      param_1[1] = uVar14;
      param_1 = param_1 + 2;
    } while (puVar5 != (undefined8 *)0x0);
    if (puVar10 == puVar6) {
      return;
    }
  }
  else {
    puVar3 = param_2;
    puVar4 = param_1;
    puVar11 = puVar10;
  }
  do {
    puVar11 = (undefined8 *)((int)puVar11 + -1);
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 1);
    puVar4 = (undefined8 *)((int)puVar4 + 1);
  } while (puVar11 != (undefined8 *)0x0);
  return;
}

#undef EXT_00000004
#undef EXT_00000008
#undef EXT_00000010

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b64
 */

void recovered_10005b64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_r5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *in_r12;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;

  if (param_1 == param_2 || param_3 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2;
  if (param_2 <= param_1) {
    puVar9 = (undefined8 *)((int)param_2 + (int)param_3);
    in_r12 = puVar9;
  }
  if ((param_2 > param_1 || in_r12 < param_1) || param_1 == puVar9) {
    puVar9 = param_3;
    if ((param_3 < &SupervisorCall) || ((((uint)param_2 ^ (uint)param_1) & 3) != 0))
    goto LAB_10005bac;
    if (((uint)param_1 & 3) == 0) {
      puVar3 = param_2;
      puVar4 = param_1;
    }
    else {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      if ((undefined8 *)((int)param_3 + -1) == (undefined8 *)0x0 ||
          ((uint)((int)param_1 + 1) & 3) == 0) {
        puVar3 = (undefined8 *)((int)param_2 + 1);
        puVar9 = (undefined8 *)((int)param_3 + -1);
        puVar4 = (undefined8 *)((int)param_1 + 1);
      }
      else {
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        puVar3 = (undefined8 *)((int)param_2 + 2);
        puVar9 = (undefined8 *)((int)param_3 + -2);
        puVar4 = (undefined8 *)((int)param_1 + 2);
        if ((undefined8 *)((int)param_3 + -2) != (undefined8 *)0x0 &&
            ((uint)((int)param_1 + 2) & 3) != 0) {
          puVar9 = (undefined8 *)((int)param_3 + -3);
          puVar3 = (undefined8 *)((int)param_2 + 3);
          puVar4 = (undefined8 *)((int)param_1 + 3);
          *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
          if ((puVar9 != (undefined8 *)0x0) && (((uint)puVar4 & 3) != 0)) {
            puVar9 = (undefined8 *)((int)param_3 + -4);
            *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
            puVar4 = (undefined8 *)((int)param_1 + 4);
            puVar3 = (undefined8 *)((int)param_2 + 4);
          }
        }
      }
    }
    if (puVar9 < &DataAbort) {
      param_2 = puVar3;
      param_1 = puVar4;
    }
    else {
      if ((undefined8 *)0x2f < puVar9 + -2) {
        param_3 = (undefined8 *)((uint)puVar9 & 0xfffffff0);
        bVar12 = puVar4 < (undefined8 *)((int)puVar3 + (int)param_3);
        if (bVar12) {
          param_3 = (undefined8 *)((int)puVar4 + (int)param_3);
        }
        if (!(bVar12 && puVar3 < param_3)) {
          puVar7 = (undefined8 *)(((uint)(puVar9 + -2) >> 4) + 1);
          param_3 = (undefined8 *)((uint)puVar7 & 0xfffffffc);
          puVar9 = puVar9 + (int)param_3 * -2;
          param_1 = puVar4 + (int)(uintptr_t)param_3 * 2;
          param_2 = puVar3 + (int)(uintptr_t)param_3 * 2;
          puVar5 = param_3;
          do {
            uVar13 = puVar3[1];
            puVar5 = (undefined8 *)((int)puVar5 + -4);
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            uVar16 = puVar3[4];
            uVar17 = puVar3[5];
            uVar18 = puVar3[6];
            uVar19 = puVar3[7];
            *puVar4 = *puVar3;
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            puVar4[4] = uVar16;
            puVar4[5] = uVar17;
            puVar4[6] = uVar18;
            puVar4[7] = uVar19;
            puVar3 = puVar3 + 8;
            puVar4 = puVar4 + 8;
          } while (puVar5 != (undefined8 *)0x0);
          puVar3 = param_2;
          puVar4 = param_1;
          if (puVar7 == param_3) goto LAB_10005e38;
        }
      }
      do {
        puVar9 = puVar9 + -2;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar3 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        puVar1 = (undefined4 *)((int)puVar3 + 0xc);
        puVar3 = puVar3 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        param_2 = puVar3;
        param_1 = puVar4;
      } while ((undefined8 *)0xf < puVar9);
    }
LAB_10005e38:
    if (&UndefinedInstruction <= puVar9) {
      puVar2 = (undefined1 *)((int)puVar9 + -4);
      bVar12 = puVar2 == (undefined1 *)0xc;
      if ((undefined1 *)0xb < puVar2) {
        param_3 = (undefined8 *)((int)param_1 - (int)param_2);
        bVar12 = param_3 == (undefined8 *)0xf;
      }
      if (((undefined1 *)0xb < puVar2 && (undefined8 *)0xe < param_3) && !bVar12) {
        param_3 = (undefined8 *)(((uint)puVar2 >> 2) + 1);
        puVar7 = (undefined8 *)((uint)param_3 & 0xfffffffc);
        puVar9 = (undefined8 *)((int)puVar9 + (int)puVar7 * -4);
        puVar5 = (undefined8 *)((int)param_1 + (int)(uintptr_t)puVar7 * 4);
        puVar3 = (undefined8 *)((int)param_2 + (int)(uintptr_t)puVar7 * 4);
        puVar4 = puVar7;
        do {
          uVar13 = *param_2;
          uVar14 = param_2[1];
          param_2 = param_2 + 2;
          puVar4 = (undefined8 *)((int)puVar4 + -4);
          *param_1 = uVar13;
          param_1[1] = uVar14;
          param_1 = param_1 + 2;
        } while (puVar4 != (undefined8 *)0x0);
        param_2 = puVar3;
        param_1 = puVar5;
        if (param_3 == puVar7) goto LAB_10005eb4;
      }
      else {
        puVar3 = param_2;
        puVar5 = param_1;
      }
      do {
        param_3 = *(undefined8 **)puVar3;
        puVar9 = (undefined8 *)((int)puVar9 + -4);
        *(undefined8 **)puVar5 = param_3;
        param_2 = (undefined8 *)((int)puVar3 + 4);
        puVar3 = (undefined8 *)((int)puVar3 + 4);
        param_1 = (undefined8 *)((int)puVar5 + 4);
        puVar5 = (undefined8 *)((int)puVar5 + 4);
      } while ((undefined8 *)0x3 < puVar9);
    }
LAB_10005eb4:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_10005bac:
    if ((undefined8 *)0xf < puVar9) {
      param_3 = (undefined8 *)((int)param_1 - (int)param_2);
    }
    if ((undefined8 *)0xf < puVar9 && (undefined8 *)0xf < param_3) {
      puVar6 = (undefined8 *)((uint)puVar9 & 0xfffffff0);
      puVar4 = (undefined8 *)((uint)puVar9 & 0xf);
      puVar5 = (undefined8 *)((int)param_2 + (int)puVar6);
      puVar3 = (undefined8 *)((int)param_1 + (int)puVar6);
      puVar7 = puVar6;
      do {
        uVar13 = *param_2;
        uVar14 = param_2[1];
        param_2 = param_2 + 2;
        puVar7 = puVar7 + -2;
        *param_1 = uVar13;
        param_1[1] = uVar14;
        param_1 = param_1 + 2;
      } while (puVar7 != (undefined8 *)0x0);
      if (puVar9 == puVar6) {
        return;
      }
    }
    else {
      puVar3 = param_1;
      puVar4 = puVar9;
      puVar5 = param_2;
    }
    do {
      puVar4 = (undefined8 *)((int)puVar4 + -1);
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar3 = (undefined8 *)((int)puVar3 + 1);
      puVar5 = (undefined8 *)((int)puVar5 + 1);
    } while (puVar4 != (undefined8 *)0x0);
    return;
  }
  puVar9 = (undefined8 *)((int)param_1 + (int)param_3);
  if ((param_3 < &SupervisorCall) || ((((uint)in_r12 ^ (uint)puVar9) & 3) != 0)) {
    puVar3 = param_3;
    goto LAB_10005c28;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_10005ec4:
    puVar3 = param_3;
    puVar5 = in_r12;
  }
  else {
    puVar4 = (undefined8 *)((int)puVar9 + -1);
    *(undefined1 *)puVar4 = *(undefined1 *)((int)in_r12 + -1);
    puVar3 = (undefined8 *)((int)param_3 + -1);
    puVar5 = (undefined8 *)((int)in_r12 + -1);
    if ((undefined8 *)((int)param_3 + -1) != (undefined8 *)0x0 && ((uint)puVar4 & 3) != 0) {
      puVar4 = (undefined8 *)((int)puVar9 + -2);
      *(undefined1 *)puVar4 = *(undefined1 *)((int)in_r12 + -2);
      puVar3 = (undefined8 *)((int)param_3 + -2);
      puVar5 = (undefined8 *)((int)in_r12 + -2);
      if ((undefined8 *)((int)param_3 + -2) != (undefined8 *)0x0 && ((uint)puVar4 & 3) != 0) {
        puVar4 = (undefined8 *)((int)puVar9 + -3);
        *(undefined1 *)puVar4 = *(undefined1 *)((int)in_r12 + -3);
        puVar3 = (undefined8 *)((int)param_3 + -3);
        puVar5 = (undefined8 *)((int)in_r12 + -3);
        if ((undefined8 *)((int)param_3 + -3) != (undefined8 *)0x0 && ((uint)puVar4 & 3) != 0) {
          in_r12 = (undefined8 *)((int)in_r12 + -4);
          *(undefined1 *)((int)puVar9 + -4) = *(undefined1 *)in_r12;
          param_3 = (undefined8 *)((int)param_3 + -4);
          puVar4 = (undefined8 *)((int)puVar9 + -4);
          goto LAB_10005ec4;
        }
      }
    }
  }
  in_r12 = puVar5;
  if (puVar3 < &DataAbort) {
    param_3 = puVar4;
  }
  else {
    if ((undefined8 *)0x2f < puVar3 + -2) {
      puVar9 = (undefined8 *)((uint)puVar3 & 0xfffffff0);
      bVar12 = (undefined8 *)((int)puVar4 - (int)puVar9) < in_r12;
      if (bVar12) {
        puVar9 = (undefined8 *)((int)in_r12 - (int)puVar9);
      }
      if (!(bVar12 && puVar9 < puVar4)) {
        uVar8 = ((uint)(puVar3 + -2) >> 4) + 1;
        uVar10 = uVar8 & 0xfffffffc;
        puVar9 = in_r12 + -8;
        param_3 = puVar4 + uVar10 * -2;
        in_r12 = in_r12 + uVar10 * -2;
        puVar3 = puVar3 + uVar10 * -2;
        uVar11 = uVar10;
        do {
          unaff_r5 = puVar9 + -8;
          uVar13 = puVar9[1];
          uVar11 = uVar11 - 4;
          uVar14 = puVar9[2];
          uVar15 = puVar9[3];
          uVar16 = puVar9[4];
          uVar17 = puVar9[5];
          uVar18 = puVar9[6];
          uVar19 = puVar9[7];
          puVar4[-8] = *puVar9;
          puVar4[-7] = uVar13;
          puVar4[-6] = uVar14;
          puVar4[-5] = uVar15;
          puVar4[-4] = uVar16;
          puVar4[-3] = uVar17;
          puVar4[-2] = uVar18;
          puVar4[-1] = uVar19;
          puVar9 = unaff_r5;
          puVar4 = puVar4 + -8;
        } while (uVar11 != 0);
        puVar4 = param_3;
        if (uVar8 == uVar10) goto LAB_10005fa0;
      }
    }
    do {
      puVar3 = puVar3 + -2;
      *(undefined4 *)((int)puVar4 + -4) = *(undefined4 *)((int)in_r12 + -4);
      *(undefined4 *)(puVar4 + -1) = *(undefined4 *)(in_r12 + -1);
      *(undefined4 *)((int)puVar4 + -0xc) = *(undefined4 *)((int)in_r12 + -0xc);
      in_r12 = in_r12 + -2;
      puVar4 = puVar4 + -2;
      *(undefined4 *)puVar4 = *(undefined4 *)in_r12;
      param_3 = puVar4;
    } while ((undefined8 *)0xf < puVar3);
  }
LAB_10005fa0:
  puVar9 = param_3;
  if (&UndefinedInstruction <= puVar3) {
    puVar2 = (undefined1 *)((int)puVar3 + -4);
    bVar12 = puVar2 == (undefined1 *)0xc;
    if ((undefined1 *)0xb < puVar2) {
      unaff_r5 = (undefined8 *)((int)in_r12 - (int)param_3);
      bVar12 = unaff_r5 == (undefined8 *)0xf;
    }
    if (((undefined1 *)0xb < puVar2 && (undefined8 *)0xe < unaff_r5) && !bVar12) {
      uVar10 = ((uint)puVar2 >> 2) + 1;
      uVar8 = uVar10 & 0xfffffffc;
      puVar9 = (undefined8 *)((int)param_3 + uVar8 * -4);
      puVar4 = (undefined8 *)((int)in_r12 + uVar8 * -4);
      puVar3 = (undefined8 *)((int)puVar3 + uVar8 * -4);
      param_3 = param_3 + -2;
      uVar11 = uVar8;
      do {
        uVar13 = in_r12[-1];
        uVar11 = uVar11 - 4;
        *param_3 = in_r12[-2];
        param_3[1] = uVar13;
        param_3 = param_3 + -2;
        in_r12 = in_r12 + -2;
      } while (uVar11 != 0);
      in_r12 = puVar4;
      if (uVar10 == uVar8) goto LAB_1000605c;
    }
    else {
      puVar4 = in_r12;
    }
    do {
      puVar4 = (undefined8 *)((int)puVar4 + -4);
      param_3 = *(undefined8 **)puVar4;
      puVar3 = (undefined8 *)((int)puVar3 + -4);
      puVar9 = (undefined8 *)((int)puVar9 + -4);
      *(undefined8 **)puVar9 = param_3;
      in_r12 = puVar4;
    } while ((undefined8 *)0x3 < puVar3);
  }
LAB_1000605c:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10005c28:
  if ((undefined8 *)0xf < puVar3) {
    param_3 = (undefined8 *)((int)in_r12 - (int)puVar9);
  }
  if ((undefined8 *)0xf < puVar3 && (undefined8 *)0xf < param_3) {
    puVar6 = (undefined8 *)((uint)puVar3 & 0xfffffff0);
    puVar7 = puVar6;
    puVar4 = puVar9;
    puVar5 = in_r12;
    do {
      uVar13 = puVar5[-1];
      puVar7 = puVar7 + -2;
      puVar4[-2] = puVar5[-2];
      puVar4[-1] = uVar13;
      puVar4 = puVar4 + -2;
      puVar5 = puVar5 + -2;
    } while (puVar7 != (undefined8 *)0x0);
    bVar12 = puVar3 == puVar6;
    puVar3 = (undefined8 *)((uint)puVar3 & 0xf);
    puVar9 = (undefined8 *)((int)puVar9 - (int)puVar6);
    in_r12 = (undefined8 *)((int)in_r12 - (int)puVar6);
    if (bVar12) {
      return;
    }
  }
  do {
    puVar3 = (undefined8 *)((int)puVar3 + -1);
    *(undefined1 *)((int)puVar9 + -1) = *(undefined1 *)((int)in_r12 + -1);
    puVar9 = (undefined8 *)((int)puVar9 + -1);
    in_r12 = (undefined8 *)((int)in_r12 + -1);
  } while (puVar3 != (undefined8 *)0x0);
  return;
}

#undef EXT_00000004
#undef EXT_00000008
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006070
 */

void recovered_10006070(byte *param_1,byte param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;

  uVar8 = param_3;
  if (param_3 < 8) goto joined_r0x100061f8;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10006110:
    if (0xf < uVar8) {
      if (uVar8 - 0x10 < 0x30) {
        pbVar3 = pbVar9;
      }
      else {
        uVar5 = (uVar8 - 0x10 >> 4) + 1;
        uVar6 = uVar5 & 0xfffffffc;
        uVar1 = CONCAT44(iVar7,iVar7);
        uVar8 = uVar8 + uVar6 * -0x10;
        pbVar3 = pbVar9 + uVar6 * 0x10;
        uVar4 = uVar6;
        do {
          *(undefined8 *)pbVar9 = uVar1;
          *(undefined8 *)(pbVar9 + 8) = uVar1;
          uVar4 = uVar4 - 4;
          *(undefined8 *)(pbVar9 + 0x10) = uVar1;
          *(undefined8 *)(pbVar9 + 0x18) = uVar1;
          *(undefined8 *)(pbVar9 + 0x20) = uVar1;
          *(undefined8 *)(pbVar9 + 0x28) = uVar1;
          *(undefined8 *)(pbVar9 + 0x30) = uVar1;
          *(undefined8 *)(pbVar9 + 0x38) = uVar1;
          pbVar9 = pbVar9 + 0x40;
        } while (uVar4 != 0);
        pbVar9 = pbVar3;
        if (uVar5 == uVar6) goto joined_r0x1000619c;
      }
      do {
        uVar8 = uVar8 - 0x10;
        *(int *)(pbVar3 + 0xc) = iVar7;
        *(int *)(pbVar3 + 8) = iVar7;
        *(int *)(pbVar3 + 4) = iVar7;
        pbVar9 = pbVar3 + 0x10;
        *(int *)pbVar3 = iVar7;
        pbVar3 = pbVar9;
      } while (0xf < uVar8);
    }
  }
  else {
    pbVar9 = param_1 + 1;
    uVar8 = param_3 - 1;
    *param_1 = param_2;
    if (uVar8 != 0) {
      if (((uint)pbVar9 & 3) != 0) {
        uVar8 = param_3 - 2;
        pbVar9 = param_1 + 2;
        param_1[1] = param_2;
        if (uVar8 != 0 && ((uint)pbVar9 & 3) != 0) {
          uVar8 = param_3 - 3;
          pbVar9 = param_1 + 3;
          param_1[2] = param_2;
          if ((uVar8 != 0) && (((uint)pbVar9 & 3) != 0)) {
            param_1[3] = param_2;
            uVar8 = param_3 - 4;
            pbVar9 = param_1 + 4;
          }
        }
      }
      goto joined_r0x10006110;
    }
  }
joined_r0x1000619c:
  param_1 = pbVar9;
  if (3 < uVar8) {
    if (uVar8 - 4 < 0xc) {
    }
    else {
      uVar6 = (uVar8 - 4 >> 2) + 1;
      uVar5 = uVar6 & 0xfffffffc;
      uVar8 = uVar8 + uVar5 * -4;
      param_1 = pbVar9 + uVar5 * 4;
      uVar4 = uVar5;
      do {
        *(ulonglong *)pbVar9 = CONCAT44(iVar7,iVar7);
        *(ulonglong *)(pbVar9 + 8) = CONCAT44(iVar7,iVar7);
        pbVar9 = pbVar9 + 0x10;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      if (uVar6 == uVar5) goto joined_r0x100061f8;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x100061f8:
  if (uVar8 != 0) {
    if (uVar8 < 0x10) {
      uVar4 = uVar8;
      pbVar9 = param_1;
    }
    else {
      uVar5 = uVar8 & 0xfffffff0;
      uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar1 = CONCAT44(uVar2,uVar2);
      pbVar9 = param_1 + uVar5;
      uVar4 = uVar8 & 0xf;
      uVar6 = uVar5;
      do {
        *(undefined8 *)param_1 = uVar1;
        *(undefined8 *)(param_1 + 8) = uVar1;
        param_1 = param_1 + 0x10;
        uVar6 = uVar6 - 0x10;
      } while (uVar6 != 0);
      if (uVar8 == uVar5) {
        return;
      }
    }
    do {
      *pbVar9 = param_2;
      uVar4 = uVar4 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar4 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006270
 */

void recovered_10006270(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  puVar6 = param_1;
  uVar9 = param_2;
  if (param_2 < 8) goto joined_r0x100063f0;
  if (((uint)param_1 & 3) == 0) {
joined_r0x1000630c:
    if (0xf < uVar9) {
      if (uVar9 - 0x10 < 0x30) {
        puVar5 = puVar6;
      }
      else {
        uVar7 = (uVar9 - 0x10 >> 4) + 1;
        uVar8 = uVar7 & 0xfffffffc;
        uVar1 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        uVar2 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        uVar3 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar9 = uVar9 + uVar8 * -0x10;
        puVar5 = puVar6 + uVar8 * 4;
        uVar4 = uVar8;
        do {
          *puVar6 = 0;
          puVar6[1] = uVar1;
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          uVar4 = uVar4 - 4;
          puVar6[4] = 0;
          puVar6[5] = uVar1;
          puVar6[6] = uVar2;
          puVar6[7] = uVar3;
          puVar6[8] = 0;
          puVar6[9] = uVar1;
          puVar6[10] = uVar2;
          puVar6[0xb] = uVar3;
          puVar6[0xc] = 0;
          puVar6[0xd] = uVar1;
          puVar6[0xe] = uVar2;
          puVar6[0xf] = uVar3;
          puVar6 = puVar6 + 0x10;
        } while (uVar4 != 0);
        puVar6 = puVar5;
        if (uVar7 == uVar8) goto joined_r0x10006390;
      }
      do {
        uVar9 = uVar9 - 0x10;
        *puVar5 = 0;
        puVar5[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar5[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar5[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar5 = puVar5 + 4;
        puVar6 = puVar5;
      } while (0xf < uVar9);
    }
  }
  else {
    puVar6 = (undefined4 *)((int)param_1 + 1);
    uVar9 = param_2 - 1;
    *(undefined1 *)param_1 = 0;
    if (uVar9 != 0) {
      if (((uint)puVar6 & 3) != 0) {
        uVar9 = param_2 - 2;
        puVar6 = (undefined4 *)((int)param_1 + 2);
        *(undefined1 *)((int)param_1 + 1) = 0;
        if (uVar9 != 0 && ((uint)puVar6 & 3) != 0) {
          uVar9 = param_2 - 3;
          puVar6 = (undefined4 *)((int)param_1 + 3);
          *(undefined1 *)((int)param_1 + 2) = 0;
          if ((uVar9 != 0) && (((uint)puVar6 & 3) != 0)) {
            uVar9 = param_2 - 4;
            *(undefined1 *)((int)param_1 + 3) = 0;
            puVar6 = param_1 + 1;
          }
        }
      }
      goto joined_r0x1000630c;
    }
  }
joined_r0x10006390:
  if (3 < uVar9) {
    if (0xb < uVar9 - 4) {
      uVar7 = (uVar9 - 4 >> 2) + 1;
      uVar8 = uVar7 & 0xfffffffc;
      uVar9 = uVar9 + uVar8 * -4;
      puVar5 = puVar6 + uVar8;
      uVar4 = uVar8;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      puVar6 = puVar5;
      if (uVar7 == uVar8) goto joined_r0x100063f0;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100063f0:
  if (uVar9 != 0) {
    if (0xf < uVar9) {
      uVar7 = uVar9 & 0xfffffff0;
      puVar5 = (undefined4 *)((int)puVar6 + uVar7);
      uVar4 = uVar7;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 0x10;
      } while (uVar4 != 0);
      bVar10 = uVar9 == uVar7;
      uVar9 = uVar9 & 0xf;
      puVar6 = puVar5;
      if (bVar10) {
        return;
      }
    }
    do {
      *(undefined1 *)puVar6 = 0;
      uVar9 = uVar9 - 1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (uVar9 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000646c
 */

void recovered_1000646c(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  puVar6 = param_1;
  uVar9 = param_2;
  if (param_2 < 8) goto joined_r0x100065ec;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10006508:
    if (0xf < uVar9) {
      if (uVar9 - 0x10 < 0x30) {
        puVar5 = puVar6;
      }
      else {
        uVar7 = (uVar9 - 0x10 >> 4) + 1;
        uVar8 = uVar7 & 0xfffffffc;
        uVar1 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        uVar2 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        uVar3 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar9 = uVar9 + uVar8 * -0x10;
        puVar5 = puVar6 + uVar8 * 4;
        uVar4 = uVar8;
        do {
          *puVar6 = 0;
          puVar6[1] = uVar1;
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          uVar4 = uVar4 - 4;
          puVar6[4] = 0;
          puVar6[5] = uVar1;
          puVar6[6] = uVar2;
          puVar6[7] = uVar3;
          puVar6[8] = 0;
          puVar6[9] = uVar1;
          puVar6[10] = uVar2;
          puVar6[0xb] = uVar3;
          puVar6[0xc] = 0;
          puVar6[0xd] = uVar1;
          puVar6[0xe] = uVar2;
          puVar6[0xf] = uVar3;
          puVar6 = puVar6 + 0x10;
        } while (uVar4 != 0);
        puVar6 = puVar5;
        if (uVar7 == uVar8) goto joined_r0x1000658c;
      }
      do {
        uVar9 = uVar9 - 0x10;
        *puVar5 = 0;
        puVar5[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar5[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar5[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar5 = puVar5 + 4;
        puVar6 = puVar5;
      } while (0xf < uVar9);
    }
  }
  else {
    puVar6 = (undefined4 *)((int)param_1 + 1);
    uVar9 = param_2 - 1;
    *(undefined1 *)param_1 = 0;
    if (uVar9 != 0) {
      if (((uint)puVar6 & 3) != 0) {
        uVar9 = param_2 - 2;
        puVar6 = (undefined4 *)((int)param_1 + 2);
        *(undefined1 *)((int)param_1 + 1) = 0;
        if (uVar9 != 0 && ((uint)puVar6 & 3) != 0) {
          uVar9 = param_2 - 3;
          puVar6 = (undefined4 *)((int)param_1 + 3);
          *(undefined1 *)((int)param_1 + 2) = 0;
          if ((uVar9 != 0) && (((uint)puVar6 & 3) != 0)) {
            uVar9 = param_2 - 4;
            *(undefined1 *)((int)param_1 + 3) = 0;
            puVar6 = param_1 + 1;
          }
        }
      }
      goto joined_r0x10006508;
    }
  }
joined_r0x1000658c:
  if (3 < uVar9) {
    if (0xb < uVar9 - 4) {
      uVar7 = (uVar9 - 4 >> 2) + 1;
      uVar8 = uVar7 & 0xfffffffc;
      uVar9 = uVar9 + uVar8 * -4;
      puVar5 = puVar6 + uVar8;
      uVar4 = uVar8;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      puVar6 = puVar5;
      if (uVar7 == uVar8) goto joined_r0x100065ec;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100065ec:
  if (uVar9 != 0) {
    if (0xf < uVar9) {
      uVar7 = uVar9 & 0xfffffff0;
      puVar5 = (undefined4 *)((int)puVar6 + uVar7);
      uVar4 = uVar7;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 0x10;
      } while (uVar4 != 0);
      bVar10 = uVar9 == uVar7;
      uVar9 = uVar9 & 0xf;
      puVar6 = puVar5;
      if (bVar10) {
        return;
      }
    }
    do {
      *(undefined1 *)puVar6 = 0;
      uVar9 = uVar9 - 1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (uVar9 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006668
 */

char * recovered_10006668(char *param_1,char param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 == 0) {
    return (char *)0x0;
  }
  do {
    if (*param_1 == param_2) {
      return param_1;
    }
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000669c
 */

int recovered_1000669c(uint *param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;

  if (param_3 < 8) {
LAB_10006794:
    if (param_3 == 0) {
      return 0;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 3) == 0) {
    uVar5 = param_3;
    puVar1 = param_2;
    puVar7 = param_1;
    if (((uint)param_1 & 3) != 0) {
      uVar6 = (uint)(byte)*param_2;
      uVar5 = (uint)(byte)*param_1;
      if (uVar5 != uVar6) goto LAB_1000688c;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_1000688c;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_1000688c;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_1000688c;
            uVar5 = param_3 - 4;
            puVar1 = param_2 + 1;
            puVar7 = param_1 + 1;
          }
        }
      }
    }
    while (param_1 = puVar7, param_2 = puVar1, param_3 = uVar5, 0xf < param_3) {
      uVar6 = *param_2;
      uVar5 = *param_1;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        uVar6 = param_2[1];
        uVar5 = param_1[1];
      }
      bVar9 = bVar8 && uVar5 == uVar6;
      if (bVar8 && uVar5 == uVar6) {
        uVar6 = param_2[2];
        uVar5 = param_1[2];
        bVar9 = uVar5 == uVar6;
      }
      if (!bVar9) {
LAB_100067c4:
        if ((uVar5 & 0xff) == (uVar6 & 0xff)) {
          if ((uVar5 & 0xffff) >> 8 == (uVar6 & 0xffff) >> 8) {
            uVar3 = uVar5 >> 0x10;
            uVar4 = uVar6 >> 0x10;
            if ((uVar5 >> 0x10 & 0xff) == (uVar6 >> 0x10 & 0xff)) {
              uVar3 = uVar5 >> 0x18;
              uVar4 = uVar6 >> 0x18;
              if (uVar5 >> 0x18 == uVar6 >> 0x18) {
                return 0;
              }
            }
          }
          else {
            uVar3 = uVar5 >> 8;
            uVar4 = uVar6 >> 8;
          }
        }
        else {
          uVar3 = uVar5;
          uVar4 = uVar6;
        }
        return (uVar3 & 0xff) - (uVar4 & 0xff);
      }
      uVar6 = param_2[3];
      uVar5 = param_1[3];
      if (uVar5 != uVar6) goto LAB_100067c4;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_10006894((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_10006794;
  }
  while( true ) {
    uVar6 = (uint)(byte)*param_2;
    uVar5 = (uint)(byte)*param_1;
    if (uVar5 != uVar6) break;
    param_3 = param_3 - 1;
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = (uint *)((int)param_1 + 1);
    if (param_3 == 0) {
      return 0;
    }
  }
LAB_1000688c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006894
 */

int recovered_10006894(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = (uint)*param_2;
  uVar3 = (uint)*param_1;
  if (uVar3 == uVar2) {
    uVar2 = (uint)param_2[1];
    uVar3 = (uint)param_1[1];
    if (uVar3 == uVar2) {
      uVar2 = (uint)param_2[2];
      uVar3 = (uint)param_1[2];
      if (uVar3 == uVar2) {
        iVar1 = 0;
        if ((uint)param_1[3] != (uint)param_2[3]) {
          iVar1 = (uint)param_1[3] - (uint)param_2[3];
        }
        return iVar1;
      }
    }
  }
  return uVar3 - uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e4
 */

bool recovered_100068e4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f8
 */

bool recovered_100068f8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000690c
 */

bool recovered_1000690c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006924
 */

bool recovered_10006924(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006950
 */

bool recovered_10006950(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006970
 */

bool recovered_10006970(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006984
 */

int recovered_10006984(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006994
 */

void * recovered_10006994(void *out,void *data,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < (int)out - 0x7bU) {
    out = (void *)((int)out + -0x20);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069a4
 */

int recovered_100069a4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069cc
 */

int recovered_100069cc(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *param_1;
  do {
    uVar2 = (uint)bVar1;
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_10006a04:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10006a04;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a10
 */

int recovered_10006a10(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *param_1;
  do {
    uVar2 = (uint)bVar1;
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_10006a48:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10006a48;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a54
 */

void * recovered_10006a54(void *out,int value,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = *(char *)(value + iVar2);
    *(char *)((int)out + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return out;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10006a70(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar10 = 0xfffffffc;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)param_1 + uVar4 + 4) != '\0');
  if (_DAT_40010800 != 0x50414d57) {
    return (undefined8 *)0x0;
  }
  if (_DAT_40010804 == 0) {
    return (undefined8 *)0x0;
  }
  if (_DAT_40010808 < 0x50) {
    return (undefined8 *)0x0;
  }
  if (_DAT_4001084c == (code *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar10 = uVar4 + 5;
  uVar20 = (*_DAT_4001084c)(uVar10);
  puVar3 = (undefined8 *)uVar20;
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (7 < uVar10) {
    uVar2 = CONCAT44((uint)puVar3 ^ (uint)param_1,puVar3);
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10006b38;
    if ((uVar20 & 3) == 0) {
      puVar7 = puVar3;
      puVar5 = param_1;
    }
    else {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      if (uVar4 == 0xfffffffc || ((uint)((int)puVar3 + 1) & 3) == 0) {
        puVar7 = (undefined8 *)((int)puVar3 + 1);
        puVar5 = (undefined8 *)((int)param_1 + 1);
        uVar10 = uVar4 + 4;
      }
      else {
        *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_1 + 1);
        puVar7 = (undefined8 *)((int)puVar3 + 2);
        puVar5 = (undefined8 *)((int)param_1 + 2);
        uVar10 = uVar4 + 3;
        if (uVar4 != 0xfffffffd && ((uint)((int)puVar3 + 2) & 3) != 0) {
          puVar5 = (undefined8 *)((int)param_1 + 3);
          puVar7 = (undefined8 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_1 + 2);
          uVar10 = uVar4 + 2;
          if ((uVar4 != 0xfffffffe) && (((uint)puVar7 & 3) != 0)) {
            puVar7 = (undefined8 *)((int)puVar3 + 4);
            *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)param_1 + 3);
            puVar5 = (undefined8 *)((int)param_1 + 4);
            uVar10 = uVar4 + 1;
          }
        }
      }
    }
    if (uVar10 < 0x10) {
      puVar9 = puVar7;
      puVar6 = puVar5;
    }
    else {
      if (0x2f < uVar10 - 0x10) {
        puVar9 = (undefined8 *)(uVar10 & 0xfffffff0);
        param_1 = (undefined8 *)((int)puVar5 + (int)puVar9);
        if (puVar7 < param_1) {
          puVar9 = (undefined8 *)((int)puVar7 + (int)puVar9);
        }
        if (!(puVar7 < param_1 && puVar5 < puVar9)) {
          uVar8 = (uVar10 - 0x10 >> 4) + 1;
          uVar11 = uVar8 & 0xfffffffc;
          uVar10 = uVar10 + uVar11 * -0x10;
          puVar9 = puVar7 + uVar11 * 2;
          puVar6 = puVar5 + uVar11 * 2;
          uVar4 = uVar11;
          do {
            uVar13 = puVar5[1];
            param_1 = puVar7 + 8;
            uVar4 = uVar4 - 4;
            uVar14 = puVar5[2];
            uVar15 = puVar5[3];
            uVar16 = puVar5[4];
            uVar17 = puVar5[5];
            uVar18 = puVar5[6];
            uVar19 = puVar5[7];
            *puVar7 = *puVar5;
            puVar7[1] = uVar13;
            puVar7[2] = uVar14;
            puVar7[3] = uVar15;
            puVar7[4] = uVar16;
            puVar7[5] = uVar17;
            puVar7[6] = uVar18;
            puVar7[7] = uVar19;
            puVar7 = param_1;
            puVar5 = puVar5 + 8;
          } while (uVar4 != 0);
          puVar7 = puVar9;
          puVar5 = puVar6;
          if (uVar8 == uVar11) goto LAB_10006ccc;
        }
      }
      do {
        uVar10 = uVar10 - 0x10;
        *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
        *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)((int)puVar5 + 4);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
        puVar1 = (undefined4 *)((int)puVar5 + 0xc);
        puVar5 = puVar5 + 2;
        *(undefined4 *)((int)puVar7 + 0xc) = *puVar1;
        puVar7 = puVar7 + 2;
        puVar9 = puVar7;
        puVar6 = puVar5;
      } while (0xf < uVar10);
    }
LAB_10006ccc:
    uVar20 = CONCAT44(puVar9,puVar9);
    if (uVar10 < 4) {
      param_1 = puVar6;
    }
    else {
      uVar4 = uVar10 - 4;
      bVar12 = uVar4 == 0xc;
      if (0xb < uVar4) {
        param_1 = (undefined8 *)((int)puVar9 - (int)puVar6);
        bVar12 = param_1 == (undefined8 *)0xf;
      }
      if ((0xb < uVar4 && (undefined8 *)0xe < param_1) && !bVar12) {
        uVar11 = (uVar4 >> 2) + 1;
        uVar8 = uVar11 & 0xfffffffc;
        uVar10 = uVar10 + uVar8 * -4;
        puVar7 = (undefined8 *)((int)puVar9 + uVar8 * 4);
        puVar5 = (undefined8 *)((int)puVar6 + uVar8 * 4);
        uVar4 = uVar8;
        do {
          uVar13 = *puVar6;
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar4 = uVar4 - 4;
          *puVar9 = uVar13;
          puVar9[1] = uVar14;
          puVar9 = puVar9 + 2;
          uVar20 = CONCAT44(puVar9,puVar7);
        } while (uVar4 != 0);
        param_1 = puVar5;
        if (uVar11 == uVar8) goto LAB_10006b30;
      }
      else {
        puVar7 = puVar9;
        puVar5 = puVar6;
      }
      do {
        param_1 = (undefined8 *)((int)puVar5 + 4);
        uVar10 = uVar10 - 4;
        uVar20 = CONCAT44(*(undefined4 *)puVar5,(undefined8 *)((int)puVar7 + 4));
        *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
        puVar7 = (undefined8 *)((int)puVar7 + 4);
        puVar5 = param_1;
      } while (3 < uVar10);
    }
  }
LAB_10006b30:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10006b38:
  uVar4 = (uint)(uVar2 >> 0x20);
  puVar7 = (undefined8 *)uVar2;
  if (0xf < uVar10) {
    uVar4 = (int)puVar7 - (int)param_1;
  }
  if (0xf < uVar10 && 0xf < uVar4) {
    uVar11 = uVar10 & 0xfffffff0;
    uVar4 = uVar10 & 0xf;
    puVar9 = (undefined8 *)((int)param_1 + uVar11);
    puVar5 = (undefined8 *)((int)puVar7 + uVar11);
    uVar8 = uVar11;
    do {
      uVar13 = *param_1;
      uVar14 = param_1[1];
      param_1 = param_1 + 2;
      uVar8 = uVar8 - 0x10;
      *puVar7 = uVar13;
      puVar7[1] = uVar14;
      puVar7 = puVar7 + 2;
    } while (uVar8 != 0);
    if (uVar10 == uVar11) {
      return puVar3;
    }
  }
  else {
    uVar4 = uVar10;
    puVar5 = puVar7;
    puVar9 = param_1;
  }
  do {
    uVar4 = uVar4 - 1;
    *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
    puVar5 = (undefined8 *)((int)puVar5 + 1);
    puVar9 = (undefined8 *)((int)puVar9 + 1);
  } while (uVar4 != 0);
  return puVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d84
 */

char * recovered_10006d84(char *param_1,char param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == cVar1) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db8
 */

int recovered_10006db8(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  char cVar4;

  cVar4 = *param_1;
  if (cVar4 != '\0') {
    iVar3 = 0;
    while (*param_2 != '\0') {
      pcVar1 = param_2;
      cVar2 = *param_2;
      while (pcVar1 = pcVar1 + 1, cVar4 != cVar2) {
        cVar2 = *pcVar1;
        if (cVar2 == '\0') {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      cVar4 = param_1[iVar3];
      if (cVar4 == '\0') {
        return iVar3;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e1c
 */

ulong recovered_10006e1c(char *text,char *reject)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char cVar4;

  cVar4 = *text;
  if (cVar4 == '\0') {
    return 0;
  }
  uVar3 = 0;
  do {
    if (*reject != '\0') {
      pcVar1 = reject;
      cVar2 = *reject;
      do {
        pcVar1 = pcVar1 + 1;
        if (cVar4 == cVar2) {
          return uVar3;
        }
        cVar2 = *pcVar1;
      } while (cVar2 != '\0');
    }
    uVar3 = uVar3 + 1;
    cVar4 = text[uVar3];
  } while (cVar4 != '\0');
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e84
 */

char * recovered_10006e84(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char cVar3;

  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return (char *)0x0;
  }
  do {
    if (*param_2 != '\0') {
      pcVar1 = param_2;
      cVar2 = *param_2;
      do {
        pcVar1 = pcVar1 + 1;
        if (cVar3 == cVar2) {
          return param_1;
        }
        cVar2 = *pcVar1;
      } while (cVar2 != '\0');
    }
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  } while (cVar3 != '\0');
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ee4
 */

char * recovered_10006ee4(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;

  if (*param_2 == '\0') {
    return param_1;
  }
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    iVar1 = 0;
    cVar2 = *param_2;
    while (param_1[iVar1] == cVar2) {
      cVar2 = param_2[iVar1 + 1];
      iVar1 = iVar1 + 1;
      if (cVar2 == '\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  } while( true );
}


#undef DAT_1000fd68
#define DAT_1000fd68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f48
 */

undefined * recovered_10006f48(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fd68;
}

#undef DAT_1000fd68

#undef PTR_DAT_10010010
#define PTR_DAT_10010010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f58
 */

undefined ** recovered_10006f58(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010010;
}

#undef PTR_DAT_10010010

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_14 (*(undefined4 *)(pf_stack_frame + 44))
#define local_10 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_20 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006f68(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  uStack_20 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_1c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uStack_18 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_10 = 0;
  local_24 = 0;
  local_14 = 0;
  if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x16c)) ||
     ((_DAT_40010968 == (code *)0x0 || (iVar1 = (*_DAT_40010968)(&local_24), iVar1 == 0)))) {
    local_1c = 0x574d4236;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_1c;
  }
  return local_1c;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef local_24
#undef local_1c
#undef local_14
#undef local_10
#undef uStack_20
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007018
 */

int recovered_10007018(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_r2;
  bool bVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(right,left));
  if ((int)in_r2 < 1) {
    if (0x7fffffff < in_r2) {
      do {
        dVar3 = dVar3 * 0.5;
        bVar2 = in_r2 != 0xffffffff;
        in_r2 = in_r2 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = in_r2 + 1;
    do {
      dVar3 = dVar3 + dVar3;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return SUB84(dVar3,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000705c
 */

double recovered_1000705c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (dVar2 == 0.0) {
    return 0.0;
  }
  iVar1 = 0;
  dVar3 = dVar2;
  if (dVar2 < 0.0) {
    dVar3 = -dVar2;
  }
  for (; 1.0 <= dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; (0.0 < dVar3 && (dVar3 < 0.5)); dVar3 = dVar3 + dVar3) {
    iVar1 = iVar1 + -1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  if (dVar2 < 0.0) {
    dVar3 = -dVar3;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007114
 */

char * recovered_10007114(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r2;
  undefined4 in_r3;
  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(in_r3,in_r2));
  if (dVar2 == 0.0) {
    return (char *)0x0;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(param_2,param_1)) / dVar2,3);
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return SUB84(pf_bits_double(CONCAT44(param_2,param_1)) - dVar3 * dVar2,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000714c
 */

double recovered_1000714c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  uVar2 = VectorFloatToSigned(CONCAT44(param_4,param_3),3);
  dVar5 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar5 != pf_bits_double(CONCAT44(param_4,param_3))) {
    return 0.0;
  }
  if (uVar2 == 0) {
    return 1.0;
  }
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
  }
  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  dVar5 = 1.0;
  do {
    dVar3 = dVar4 * dVar5;
    dVar4 = dVar4 * dVar4;
    if ((uVar1 & 1) == 0) {
      dVar3 = dVar5;
    }
    uVar1 = uVar1 >> 1;
    dVar5 = dVar3;
  } while (uVar1 != 0);
  if ((int)uVar2 < 0) {
    dVar3 = 1.0 / dVar3;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071cc
 */

double recovered_100071cc(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = value;
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071fc
 */

double recovered_100071fc(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = value;
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  if (dVar5 < dVar4) {
    dVar5 = dVar5 + 1.0;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007240
 */

double recovered_10007240(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  dVar2 = 0.0;
  if (0.0 < dVar3) {
    iVar1 = 0x18;
    dVar2 = 1.0;
    if (1.0 <= dVar3) {
      dVar2 = dVar3;
    }
    do {
      iVar1 = iVar1 + -1;
      dVar2 = (dVar2 + dVar3 / dVar2) * 0.5;
    } while (iVar1 != 0);
  }
  return dVar2;
}


static const unsigned char pf_literal_10007288_DAT_100073b8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff};
#undef DAT_100073b8
#define DAT_100073b8 (*(double *)((uintptr_t)pf_literal_10007288_DAT_100073b8))
static const unsigned char pf_literal_10007288_DAT_100073c0[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_100073c0
#define DAT_100073c0 (*(double *)((uintptr_t)pf_literal_10007288_DAT_100073c0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007288
 */

double recovered_10007288(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar4 < 0.0) {
    return DAT_100073b8;
  }
  iVar2 = 0;
  uVar3 = in_fpscr & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4)) {
    do {
      dVar4 = (uintptr_t)(uintptr_t)dVar4 * 0.5;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
      bVar1 = (byte)(uVar3 >> 0x18);
    } while (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4));
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar2 = iVar2 + -1;
  }
  dVar4 = (dVar4 + -1.0) / (dVar4 + 1.0);
  dVar5 = dVar4 * dVar4;
  dVar7 = dVar5 * dVar5 * dVar4;
  dVar9 = dVar5 * dVar7;
  dVar12 = dVar5 * dVar9;
  dVar11 = dVar5 * dVar12;
  dVar6 = dVar5 * dVar11;
  dVar8 = dVar5 * dVar6;
  dVar10 = dVar5 * dVar8;
  dVar4 = dVar4 + 0.0 + (dVar5 * dVar4) / 3.0 + dVar7 / 5.0 + dVar9 / 7.0 + dVar12 / 9.0 +
          dVar11 / 11.0 + dVar6 / 13.0 + dVar8 / 15.0 + dVar10 / 17.0 + (dVar5 * dVar10) / 19.0;
  dVar5 = (double)VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
  return dVar4 + dVar4 + dVar5 * DAT_100073c0;
}

#undef DAT_100073b8
#undef DAT_100073c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073c8
 */

longlong recovered_100073c8(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  longlong lVar3;

  dVar2 = value;
  dVar1 = -0.5;
  if (0.0 <= dVar2) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + dVar2;
  lVar3 = recovered_10007588(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return lVar3;
}


static const unsigned char pf_literal_100073f8_DAT_10007488[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10007488
#define DAT_10007488 (*(double *)((uintptr_t)pf_literal_100073f8_DAT_10007488))
static const unsigned char pf_literal_100073f8_DAT_10007490[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10007490
#define DAT_10007490 (*(double *)((uintptr_t)pf_literal_100073f8_DAT_10007490))
static const unsigned char pf_literal_100073f8_DAT_10007498[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10007498
#define DAT_10007498 (*(double *)((uintptr_t)pf_literal_100073f8_DAT_10007498))
static const unsigned char pf_literal_100073f8_DAT_100074a0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_100074a0
#define DAT_100074a0 (*(double *)((uintptr_t)pf_literal_100073f8_DAT_100074a0))
static const unsigned char pf_literal_100073f8_DAT_100074a8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_100074a8
#define DAT_100074a8 (*(double *)((uintptr_t)pf_literal_100073f8_DAT_100074a8))
static const unsigned char pf_literal_100073f8_DAT_100074b0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_100074b0
#define DAT_100074b0 (*(double *)((uintptr_t)pf_literal_100073f8_DAT_100074b0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f8
 */

double recovered_100073f8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10007488 < dVar1; dVar1 = dVar1 + DAT_10007490
      ) {
  }
  for (; dVar1 < DAT_10007498; dVar1 = dVar1 + DAT_100074a0) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100074a8 +
                 (dVar2 * dVar2 * dVar2) / DAT_100074b0);
}

#undef DAT_10007488
#undef DAT_10007490
#undef DAT_10007498
#undef DAT_100074a0
#undef DAT_100074a8
#undef DAT_100074b0

static const unsigned char pf_literal_100074b8_DAT_10007540[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10007540
#define DAT_10007540 (*(double *)((uintptr_t)pf_literal_100074b8_DAT_10007540))
static const unsigned char pf_literal_100074b8_DAT_10007548[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10007548
#define DAT_10007548 (*(double *)((uintptr_t)pf_literal_100074b8_DAT_10007548))
static const unsigned char pf_literal_100074b8_DAT_10007550[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10007550
#define DAT_10007550 (*(double *)((uintptr_t)pf_literal_100074b8_DAT_10007550))
static const unsigned char pf_literal_100074b8_DAT_10007558[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10007558
#define DAT_10007558 (*(double *)((uintptr_t)pf_literal_100074b8_DAT_10007558))
static const unsigned char pf_literal_100074b8_DAT_10007560[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_10007560
#define DAT_10007560 (*(double *)((uintptr_t)pf_literal_100074b8_DAT_10007560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b8
 */

double recovered_100074b8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10007540 < dVar1; dVar1 = dVar1 + DAT_10007548
      ) {
  }
  for (; dVar1 < DAT_10007550; dVar1 = dVar1 + DAT_10007558) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10007560;
}

#undef DAT_10007540
#undef DAT_10007548
#undef DAT_10007550
#undef DAT_10007558
#undef DAT_10007560

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007568
 */

double recovered_10007568(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


static const unsigned char pf_literal_10007588_DAT_10007640[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_10007640
#define DAT_10007640 (*(double *)((uintptr_t)pf_literal_10007588_DAT_10007640))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007588
 */

undefined8 recovered_10007588(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar7 == 0.0) {
    return 0;
  }
  uVar5 = 0;
  uVar1 = 0x3f;
  uVar4 = 0;
  dVar8 = DAT_10007640;
  dVar9 = dVar7;
  if (dVar7 < 0.0) {
    dVar9 = -dVar7;
  }
  do {
    uVar2 = 1 << (uVar1 & 0xff);
    uVar3 = uVar1 - 0x20;
    if (-1 < (int)uVar3) {
      uVar2 = 0;
    }
    if (dVar8 <= dVar9) {
      uVar5 = uVar5 | uVar2;
    }
    uVar2 = 1 >> (0x20 - uVar1 & 0xff);
    if (-1 < (int)uVar3) {
      uVar2 = 1 << (uVar3 & 0xff);
    }
    if (dVar8 <= dVar9) {
      uVar4 = uVar4 | uVar2;
      dVar9 = dVar9 - dVar8;
    }
    bVar6 = uVar1 != 0;
    uVar1 = uVar1 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  uVar2 = -(uVar4 + (uVar5 != 0));
  uVar1 = -uVar5;
  if (0.0 <= dVar7) {
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10007640

static const unsigned char pf_literal_10007648_DAT_100076c8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_100076c8
#define DAT_100076c8 (*(double *)((uintptr_t)pf_literal_10007648_DAT_100076c8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007648
 */

undefined8 recovered_10007648(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = DAT_100076c8;
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_100076c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076d0
 */

double recovered_100076d0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007718
 */

double recovered_10007718(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if ((int)param_2 < 0) {
    dVar5 = 1.0;
    uVar2 = -param_1;
    uVar3 = -(param_2 + (param_1 != 0));
    dVar4 = 0.0;
    do {
      dVar6 = dVar5 + dVar4;
      dVar5 = dVar5 + dVar5;
      if ((uVar2 & 1) == 0) {
        dVar6 = dVar4;
      }
      dVar4 = dVar6;
      bVar1 = (byte)uVar3;
      uVar3 = uVar3 >> 1;
      uVar2 = (uint)(bVar1 & 1) << 0x1f | uVar2 >> 1;
    } while (uVar2 != 0 || uVar3 != 0);
    return -dVar4;
  }
  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar4 = 1.0;
  dVar5 = 0.0;
  do {
    dVar6 = dVar4 + dVar5;
    dVar4 = dVar4 + dVar4;
    if ((param_1 & 1) == 0) {
      dVar6 = dVar5;
    }
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
    dVar5 = dVar6;
  } while (param_1 != 0 || param_2 != 0);
  return dVar6;
}


static const unsigned char pf_literal_100077a8_DAT_100077e8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_100077e8
#define DAT_100077e8 (*(float *)((uintptr_t)pf_literal_100077a8_DAT_100077e8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a8
 */

float recovered_100077a8(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_100077e8;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_100077e8

static const unsigned char pf_literal_100077ec_DAT_100078a4[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_100078a4
#define DAT_100078a4 (*(float *)((uintptr_t)pf_literal_100077ec_DAT_100078a4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077ec
 */

float recovered_100077ec(float param_1,float *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = param_1;
  if (param_2 != (float *)0x0) {
    fVar1 = 0.0;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar1;
  }
  if (param_1 == 0.0) {
    return DAT_100078a4;
  }
  fVar2 = 0.0;
  fVar1 = param_1;
  if (param_1 < 0.0) {
    fVar1 = -param_1;
  }
  for (; 1.0 <= fVar1; fVar1 = fVar1 * 0.5) {
    fVar2 = (float)((int)fVar2 + 1);
  }
  for (; (0.0 < fVar1 && (fVar1 < 0.5)); fVar1 = fVar1 + fVar1) {
    fVar2 = (float)((int)fVar2 + -1);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar2;
  }
  if (param_1 < 0.0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

#undef DAT_100078a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a8
 */

float recovered_100078a8(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  if ((int)param_2 < 1) {
    if (0x7fffffff < param_2) {
      do {
        param_1 = param_1 * 0.5;
        bVar2 = param_2 != 0xffffffff;
        param_2 = param_2 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      param_1 = param_1 + param_1;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return param_1;
}


static const unsigned char pf_literal_100078f4_DAT_10007978[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10007978
#define DAT_10007978 (*(float *)((uintptr_t)pf_literal_100078f4_DAT_10007978))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078f4
 */

float recovered_100078f4(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  uint uVar3;
  uint in_fpscr;
  uint uVar4;
  double dVar5;

  uVar4 = (uint)param_2;
  dVar5 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar5 != (double)param_2) {
    return DAT_10007978;
  }
  if (uVar4 == 0) {
    return 1.0;
  }
  uVar3 = uVar4;
  if ((int)uVar4 < 0) {
    uVar3 = -uVar4;
  }
  fVar2 = 1.0;
  do {
    fVar1 = fVar2 * param_1;
    param_1 = param_1 * param_1;
    if ((uVar3 & 1) == 0) {
      fVar1 = fVar2;
    }
    uVar3 = uVar3 >> 1;
    fVar2 = fVar1;
  } while (uVar3 != 0);
  if ((int)uVar4 < 0) {
    fVar1 = 1.0 / fVar1;
  }
  return fVar1;
}

#undef DAT_10007978

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000797c
 */

float recovered_1000797c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)param_1;
  dVar3 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079b4
 */

float recovered_100079b4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)param_1;
  dVar3 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  if (dVar3 < dVar5) {
    dVar3 = dVar3 + 1.0;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

double recovered_10007a00(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  dVar6 = dVar5;
  if (dVar5 < dVar4) {
    dVar6 = dVar5 + 1.0;
  }
  if (dVar4 < 0.0) {
    dVar5 = dVar6;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a54
 */

float recovered_10007a54(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)param_1;
  dVar3 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  dVar4 = dVar3;
  if (dVar3 < dVar5) {
    dVar4 = dVar3 + 1.0;
  }
  if (param_1 < 0.0) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


static const unsigned char pf_literal_10007ab0_DAT_10007b04[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10007b04
#define DAT_10007b04 (*(float *)((uintptr_t)pf_literal_10007ab0_DAT_10007b04))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ab0
 */

float recovered_10007ab0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  int iVar2;

  if (0.0 < param_1) {
    iVar2 = 0x18;
    fVar1 = 1.0;
    if (1.0 <= param_1) {
      fVar1 = param_1;
    }
    do {
      iVar2 = iVar2 + -1;
      fVar1 = (fVar1 + param_1 / fVar1) * 0.5;
    } while (iVar2 != 0);
    return fVar1;
  }
  return DAT_10007b04;
}

#undef DAT_10007b04

static const unsigned char pf_literal_10007b08_DAT_10007c40[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_10007c40
#define DAT_10007c40 (*(double *)((uintptr_t)pf_literal_10007b08_DAT_10007c40))
static const unsigned char pf_literal_10007b08_DAT_10007c48[] __attribute__((aligned(16)))={0x00,0x00,0x80,0xff};
#undef DAT_10007c48
#define DAT_10007c48 (*(float *)((uintptr_t)pf_literal_10007b08_DAT_10007c48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b08
 */

float recovered_10007b08(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;

  if (param_1 < 0.0) {
    return DAT_10007c48;
  }
  iVar2 = 0;
  dVar4 = (double)param_1;
  uVar3 = in_fpscr & 0xfffffff | (uint)(param_1 < 1.5) << 0x1f | (uint)(param_1 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(param_1)) {
    do {
      dVar4 = (uintptr_t)(uintptr_t)dVar4 * 0.5;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
      bVar1 = (byte)(uVar3 >> 0x18);
    } while (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4));
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar2 = iVar2 + -1;
  }
  dVar4 = (dVar4 + -1.0) / (dVar4 + 1.0);
  dVar5 = dVar4 * dVar4;
  dVar7 = dVar5 * dVar4 * dVar5;
  dVar9 = dVar5 * dVar7;
  dVar12 = dVar5 * dVar9;
  dVar11 = dVar5 * dVar12;
  dVar6 = dVar5 * dVar11;
  dVar8 = dVar5 * dVar6;
  dVar10 = dVar5 * dVar8;
  dVar4 = dVar4 + 0.0 + (dVar4 * dVar5) / 3.0 + dVar7 / 5.0 + dVar9 / 7.0 + dVar12 / 9.0 +
          dVar11 / 11.0 + dVar6 / 13.0 + dVar8 / 15.0 + dVar10 / 17.0 + (dVar5 * dVar10) / 19.0;
  dVar5 = (double)VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10007c40);
}

#undef DAT_10007c40
#undef DAT_10007c48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c4c
 */

long recovered_10007c4c(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  undefined8 uVar3;

  dVar2 = value;
  dVar1 = -0.5;
  if (0.0 <= dVar2) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + dVar2;
  uVar3 = recovered_10007588(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return (long)uVar3;
}


static const unsigned char pf_literal_10007c80_DAT_10007d18[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10007d18
#define DAT_10007d18 (*(double *)((uintptr_t)pf_literal_10007c80_DAT_10007d18))
static const unsigned char pf_literal_10007c80_DAT_10007d20[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10007d20
#define DAT_10007d20 (*(double *)((uintptr_t)pf_literal_10007c80_DAT_10007d20))
static const unsigned char pf_literal_10007c80_DAT_10007d28[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10007d28
#define DAT_10007d28 (*(double *)((uintptr_t)pf_literal_10007c80_DAT_10007d28))
static const unsigned char pf_literal_10007c80_DAT_10007d30[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10007d30
#define DAT_10007d30 (*(double *)((uintptr_t)pf_literal_10007c80_DAT_10007d30))
static const unsigned char pf_literal_10007c80_DAT_10007d38[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_10007d38
#define DAT_10007d38 (*(double *)((uintptr_t)pf_literal_10007c80_DAT_10007d38))
static const unsigned char pf_literal_10007c80_DAT_10007d40[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_10007d40
#define DAT_10007d40 (*(double *)((uintptr_t)pf_literal_10007c80_DAT_10007d40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c80
 */

float recovered_10007c80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10007d18 < dVar1; dVar1 = dVar1 + DAT_10007d20) {
  }
  for (; dVar1 < DAT_10007d28; dVar1 = dVar1 + DAT_10007d30) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10007d38 +
                         (dVar2 * dVar2 * dVar2) / DAT_10007d40));
}

#undef DAT_10007d18
#undef DAT_10007d20
#undef DAT_10007d28
#undef DAT_10007d30
#undef DAT_10007d38
#undef DAT_10007d40

static const unsigned char pf_literal_10007d48_DAT_10007dd8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10007dd8
#define DAT_10007dd8 (*(double *)((uintptr_t)pf_literal_10007d48_DAT_10007dd8))
static const unsigned char pf_literal_10007d48_DAT_10007de0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10007de0
#define DAT_10007de0 (*(double *)((uintptr_t)pf_literal_10007d48_DAT_10007de0))
static const unsigned char pf_literal_10007d48_DAT_10007de8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10007de8
#define DAT_10007de8 (*(double *)((uintptr_t)pf_literal_10007d48_DAT_10007de8))
static const unsigned char pf_literal_10007d48_DAT_10007df0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10007df0
#define DAT_10007df0 (*(double *)((uintptr_t)pf_literal_10007d48_DAT_10007df0))
static const unsigned char pf_literal_10007d48_DAT_10007df8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_10007df8
#define DAT_10007df8 (*(double *)((uintptr_t)pf_literal_10007d48_DAT_10007df8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d48
 */

float recovered_10007d48(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_10007dd8 < dVar1; dVar1 = dVar1 + DAT_10007de0) {
  }
  for (; dVar1 < DAT_10007de8; dVar1 = dVar1 + DAT_10007df0) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_10007df8);
}

#undef DAT_10007dd8
#undef DAT_10007de0
#undef DAT_10007de8
#undef DAT_10007df0
#undef DAT_10007df8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e00
 */

float recovered_10007e00(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e1c
 */

int recovered_10007e1c(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  for (pbVar2 = param_1; (uVar7 = (uint)*pbVar2, uVar7 - 9 < 5 || (uVar7 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  uVar3 = (uint)((uVar7 - 0x2b & 0xfffffffd) == 0);
  pbVar5 = pbVar2 + uVar3;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar2[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar2 + uVar3 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar2[uVar3 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar2 + uVar3 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar6 = 0;
  while( true ) {
    bVar1 = *pbVar5;
    iVar4 = (int)(char)bVar1;
    uVar3 = iVar4 - 0x30;
    if (9 < (uVar3 & 0xff)) {
      if ((byte)(bVar1 + 0x9f) < 0x1a) {
        uVar3 = iVar4 - 0x57;
      }
      else {
        uVar3 = 0xffffffff;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          uVar3 = iVar4 - 0x37;
        }
      }
    }
    if (param_3 <= uVar3) break;
    iVar6 = iVar6 * param_3 + uVar3;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (uVar7 == 0x2d) {
    iVar6 = -iVar6;
  }
  return iVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f70
 */

int recovered_10007f70(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;

  for (pbVar5 = param_1; (uVar3 = (uint)*pbVar5, uVar3 - 9 < 5 || (uVar3 == 0x20));
      pbVar5 = pbVar5 + 1) {
  }
  if (uVar3 == 0x2b) {
    pbVar5 = pbVar5 + 1;
  }
  else if (uVar3 == 0x2d) {
    pbVar5 = pbVar5 + 1;
    bVar2 = true;
    goto joined_r0x10007fec;
  }
  bVar2 = false;
joined_r0x10007fec:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar5[1] | 0x20) == 0x78)) {
      pbVar5 = pbVar5 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar5[1] | 0x20) == 0x78) {
        pbVar5 = pbVar5 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar6 = 0;
  while( true ) {
    bVar1 = *pbVar5;
    iVar4 = (int)(char)bVar1;
    uVar3 = iVar4 - 0x30;
    if (9 < (uVar3 & 0xff)) {
      if ((byte)(bVar1 + 0x9f) < 0x1a) {
        uVar3 = iVar4 - 0x57;
      }
      else {
        uVar3 = 0xffffffff;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          uVar3 = iVar4 - 0x37;
        }
      }
    }
    if (param_3 <= uVar3) break;
    iVar6 = iVar6 * param_3 + uVar3;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (bVar2) {
    iVar6 = -iVar6;
  }
  return iVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080d0
 */

double recovered_100080d0(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;

  for (pbVar2 = param_1; (uVar1 = (uint)*pbVar2, uVar1 - 9 < 5 || (uVar1 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  dVar9 = 0.0;
  pbVar2 = pbVar2 + ((uVar1 - 0x2b & 0xfffffffd) == 0);
  uVar6 = (uint)*pbVar2;
  uVar7 = uVar6 - 0x30;
  if (uVar7 < 10) {
    dVar9 = 0.0;
    do {
      iVar4 = uVar6 - 0x30;
      pbVar2 = pbVar2 + 1;
      uVar6 = (uint)*pbVar2;
      dVar10 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = dVar10 + dVar9 * 10.0;
    } while (uVar6 - 0x30 < 10);
  }
  if (uVar6 == 0x2e) {
    uVar6 = (uint)pbVar2[1];
    pbVar5 = pbVar2 + 1;
    if (uVar6 - 0x30 < 10) {
      dVar11 = 1.0;
      dVar10 = 0.0;
      pbVar2 = pbVar2 + 2;
      do {
        pbVar5 = pbVar2;
        iVar4 = uVar6 - 0x30;
        dVar11 = dVar11 * 10.0;
        uVar6 = (uint)*pbVar5;
        dVar12 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = dVar12 + dVar10 * 10.0;
        pbVar2 = pbVar5 + 1;
      } while (uVar6 - 0x30 < 10);
      dVar10 = dVar10 / dVar11;
      goto LAB_100081bc;
    }
  }
  else {
    pbVar5 = pbVar2;
  }
  dVar10 = 0.0;
  if (9 < uVar7) {
    if (param_2 == (undefined4 *)0x0) {
      return 0.0;
    }
    *param_2 = param_1;
    return 0.0;
  }
LAB_100081bc:
  dVar9 = dVar9 + dVar10;
  if ((uVar6 | 0x20) == 0x65) {
    iVar4 = 1;
    pbVar2 = pbVar5 + 1;
    if (*pbVar2 == 0x2b) {
      pbVar2 = pbVar5 + 2;
    }
    else if (*pbVar2 == 0x2d) {
      pbVar2 = pbVar5 + 2;
      iVar4 = -1;
    }
    uVar6 = *pbVar2 - 0x30U;
    if (uVar6 < 10) {
      iVar3 = 0;
      uVar7 = (uint)*pbVar2;
      do {
        pbVar2 = pbVar2 + 1;
        iVar3 = uVar7 + iVar3 * 10 + -0x30;
        uVar7 = (uint)*pbVar2;
      } while (*pbVar2 - 0x30U < 10);
      if (uVar6 < 10) {
        uVar6 = iVar3 * iVar4;
        if ((int)uVar6 < 1) {
          if (0x7fffffff < uVar6) {
            do {
              dVar9 = dVar9 * 0.5;
              bVar8 = uVar6 != 0xffffffff;
              uVar6 = uVar6 + 1;
            } while (bVar8);
          }
        }
        else {
          uVar6 = uVar6 + 1;
          do {
            dVar9 = dVar9 + dVar9;
            uVar6 = uVar6 - 1;
          } while (1 < uVar6);
        }
        pbVar5 = pbVar2;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar5;
  }
  if (uVar1 == 0x2d) {
    dVar9 = -dVar9;
  }
  return dVar9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082a4
 */

float recovered_100082a4(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100080d0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000fd6a
#define DAT_1000fd6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef str_1000fd74
#define str_1000fd74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cU)))
#undef str_1000fd85
#define str_1000fd85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dU)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082c0
 */

int recovered_100082c0(byte *param_1,uint param_2,byte *param_3,double *param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  double *pdVar19;
  int iVar20;
  bool bVar21;
  uint in_fpscr;
  double dVar22;
  double dVar23;

  if (param_2 != 0) {
    *param_1 = 0;
  }
  local_6c = 0;
  local_68 = param_2;
  local_70 = param_4;
LAB_10008340:
  while( true ) {
    pcVar6 = str_1000fd85;
    bVar13 = *param_3;
    pbVar9 = param_1;
    if (bVar13 == 0x25) break;
    if (bVar13 == 0) {
      if (param_2 != 0) {
        *param_1 = 0;
      }
      return local_6c;
    }
    pdVar19 = local_70;
    if (1 < local_68) {
      *param_1 = bVar13;
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
    }
LAB_10008360:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10008380;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_100083ec;
      }
      break;
    }
    param_3 = param_3 + 1;
    uVar10 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  }
  do {
    param_3 = param_3 + 1;
    bVar13 = *param_3;
  } while ((byte)(bVar13 - 0x30U) < 10);
LAB_100083ec:
  iVar20 = -1;
  pbVar8 = param_3;
  pdVar19 = local_70;
  if (bVar13 == 0x2e) {
    pbVar8 = param_3 + 1;
    bVar13 = *pbVar8;
    if (bVar13 == 0x2a) {
      pbVar8 = param_3 + 2;
      bVar13 = *pbVar8;
      pdVar19 = (double *)((int)local_70 + 4);
      iVar20 = *(int *)local_70;
      goto LAB_10008418;
    }
    iVar20 = 0;
    if ((byte)(bVar13 - 0x30U) < 10) {
      iVar20 = 0;
      pbVar2 = param_3 + 2;
      do {
        pbVar8 = pbVar2;
        bVar3 = bVar13 - 0x30U;
        bVar13 = *pbVar8;
        bVar21 = (int)((bVar3 ^ 0x7ffffffe) / 10) < iVar20;
        iVar20 = iVar20 * 10 + (uint)bVar3;
        if (bVar21) {
          iVar20 = 0x7fffffff;
        }
        pbVar2 = pbVar8 + 1;
      } while ((byte)(bVar13 - 0x30U) < 10);
    }
  }
  else {
LAB_10008418:
    local_70 = pdVar19;
  }
  uVar14 = 0;
  bVar21 = false;
  param_3 = pbVar8;
  switch((uintptr_t)(bVar13)) {
  case 0x4c:
    param_3 = pbVar8 + 1;
    uVar14 = 8;
    bVar21 = true;
    break;
  case 0x68:
    param_3 = pbVar8 + 1;
    uVar14 = 2;
    if (*param_3 == 0x68) {
      uVar14 = 1;
      param_3 = pbVar8 + 2;
    }
    break;
  case 0x6a:
    param_3 = pbVar8 + 1;
    uVar14 = 7;
    break;
  case 0x6c:
    param_3 = pbVar8 + 1;
    uVar14 = 3;
    if (*param_3 == 0x6c) {
      uVar14 = 4;
      param_3 = pbVar8 + 2;
    }
    break;
  case 0x74:
    param_3 = pbVar8 + 1;
    uVar14 = 6;
    break;
  case 0x7a:
    param_3 = pbVar8 + 1;
    uVar14 = 5;
  }
  uVar10 = (uint)*param_3;
  if (0x2f < uVar10 - 0x49) {
switchD_100085ec_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10008ea0;
  }
  pdVar19 = (double *)((int)local_70 + 4);
  local_64 = param_1;
  switch((uintptr_t)(uVar10)) {
  case 0x49:
  case 100:
  case 0x69:
    switch((uintptr_t)(uVar14)) {
    case 1:
      uVar11 = (uint)(char)*(byte *)local_70;
      break;
    case 2:
      uVar11 = (uint)(short)*(ushort *)local_70;
      break;
    default:
      uVar11 = *(uint *)local_70;
      break;
    case 4:
    case 7:
      uVar11 = *(uint *)local_70;
      pdVar19 = local_70 + 1;
      uVar10 = *(uint *)((int)local_70 + 4);
      goto LAB_100088bc;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_100088bc:
    if (0x7fffffff < uVar10) {
      if (1 < local_68) {
        local_68 = local_68 - 1;
        local_64 = param_1 + 1;
        *param_1 = 0x2d;
      }
      bVar21 = uVar11 != 0;
      uVar11 = -uVar11;
      uVar10 = -(uVar10 + bVar21);
      local_6c = local_6c + 1;
    }
    iVar7 = 0;
    iVar20 = -1;
    do {
      iVar17 = iVar20;
      uVar4 = uVar11 >> 1 | uVar10 << 0x1f;
      uVar16 = uVar4 + (uVar10 >> 1) + (uint)CARRY4(uVar4,uVar10 >> 1);
      uVar16 = uVar16 - (((uint)((ulonglong)uVar16 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar16 / 5)
      ;
      uVar5 = uVar4 - uVar16;
      lVar1 = (ulonglong)uVar5 * 0xcccccccd;
      uVar12 = (uint)lVar1;
      local_60[-iVar7] = str_1000fd85[uVar11 + uVar12 * -10];
      bVar21 = uVar11 < 10;
      iVar7 = iVar7 + -1;
      uVar15 = -uVar10;
      iVar20 = iVar17 + -1;
      uVar10 = ((uVar10 >> 1) - (uint)(uVar4 < uVar16)) * -0x33333333 +
               uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      uVar11 = uVar12;
    } while (bVar21 <= uVar15);
    local_70 = pdVar19;
    if (iVar7 != 0) {
      local_6c = local_6c - iVar7;
      do {
        pbVar9 = local_64;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          pbVar9 = local_64 + 1;
          *local_64 = local_60[-1 - iVar17];
        }
        bVar21 = iVar17 != -1;
        iVar17 = iVar17 + 1;
        local_64 = pbVar9;
      } while (bVar21);
      goto LAB_10008ea0;
    }
    break;
  default:
    goto switchD_100085ec_caseD_4a;
  case 0x58:
  case 0x78:
    switch((uintptr_t)(uVar14)) {
    case 1:
      uVar15 = (uint)*(byte *)local_70;
      uVar11 = 0;
      local_70 = pdVar19;
      break;
    case 2:
      uVar15 = (uint)*(ushort *)local_70;
      uVar11 = 0;
      local_70 = pdVar19;
      break;
    case 3:
    case 5:
      uVar15 = *(uint *)local_70;
      uVar11 = 0;
      local_70 = pdVar19;
      break;
    case 4:
    case 7:
      uVar15 = *(uint *)local_70;
      uVar11 = *(uint *)((int)local_70 + 4);
      local_70 = local_70 + 1;
      break;
    case 6:
      uVar15 = *(uint *)local_70;
      uVar11 = (int)uVar15 >> 0x1f;
      local_70 = pdVar19;
      break;
    default:
      uVar15 = *(uint *)local_70;
      uVar11 = 0;
      local_70 = pdVar19;
    }
    iVar20 = 0;
    if (uVar10 == 0x58) {
      pcVar6 = str_1000fd74;
    }
    do {
      iVar7 = iVar20;
      local_60[iVar7] = pcVar6[uVar15 & 0xf];
      uVar15 = uVar15 >> 4 | uVar11 << 0x1c;
      uVar10 = uVar11 >> 4;
      uVar11 = uVar11 >> 4;
      iVar20 = iVar7 + 1;
    } while (uVar15 != 0 || uVar10 != 0);
    local_6c = local_6c + iVar7 + 1;
    iVar7 = -iVar7;
    do {
      pbVar9 = param_1;
      if (1 < local_68) {
        local_68 = local_68 - 1;
        pbVar9 = param_1 + 1;
        *param_1 = local_60[-iVar7];
      }
      iVar7 = iVar7 + 1;
      param_1 = pbVar9;
    } while (iVar7 != 1);
    goto LAB_10008ea0;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10008360;
  case 0x66:
    if (bVar21) {
      if (local_68 < 2) {
      }
      else {
        pbVar9 = param_1 + 1;
        *param_1 = 0x30;
        if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
          uVar10 = local_68 & 0xfffffffe;
          param_1[1] = 0x2e;
          if (uVar10 == 2) {
            pbVar9 = param_1 + 2;
          }
          else {
            param_1[2] = 0x30;
            if (local_68 - 5 < 0xfffffffd || local_68 == 2) {
              param_1[3] = 0x30;
              if (uVar10 == 4) {
                pbVar9 = param_1 + 4;
              }
              else {
                param_1[4] = 0x30;
                if (local_68 - 7 < 0xfffffffd || local_68 == 4) {
                  param_1[5] = 0x30;
                  if (uVar10 == 6) {
                    pbVar9 = param_1 + 6;
                  }
                  else {
                    param_1[6] = 0x30;
                    if (local_68 - 9 < 0xfffffffd || local_68 == 6) {
                      param_1[7] = 0x30;
                      local_68 = local_68 - 8;
                      pbVar9 = param_1 + 8;
                      goto LAB_10008d94;
                    }
                    pbVar9 = param_1 + 7;
                  }
                }
                else {
                  pbVar9 = param_1 + 5;
                }
              }
            }
            else {
              pbVar9 = param_1 + 3;
            }
          }
        }
        local_68 = 1;
      }
LAB_10008d94:
      local_6c = local_6c + 8;
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      local_70 = local_70 + 1;
    }
    else {
      dVar22 = *local_70;
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar22 < 0.0) {
        if (1 < local_68) {
          local_68 = local_68 - 1;
          local_64 = param_1 + 1;
          *param_1 = 0x2d;
        }
        dVar22 = -dVar22;
        local_6c = local_6c + 1;
      }
      uVar15 = VectorFloatToSigned(dVar22,3);
      iVar7 = 0;
      uVar10 = uVar15;
      iVar20 = -1;
      uVar11 = 0;
      do {
        iVar17 = iVar20;
        uVar18 = uVar10 >> 1 | uVar11 << 0x1f;
        uVar5 = uVar18 + (uVar11 >> 1) + (uint)CARRY4(uVar18,uVar11 >> 1);
        uVar5 = uVar5 - (((uint)((ulonglong)uVar5 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar5 / 5);
        uVar16 = uVar18 - uVar5;
        lVar1 = (ulonglong)uVar16 * 0xcccccccd;
        uVar12 = (uint)lVar1;
        bVar21 = uVar10 < 10;
        uVar4 = -uVar11;
        local_60[-iVar7] = str_1000fd85[uVar10 + uVar12 * -10];
        iVar7 = iVar7 + -1;
        uVar10 = uVar12;
        iVar20 = iVar17 + -1;
        uVar11 = ((uVar11 >> 1) - (uint)(uVar18 < uVar5)) * -0x33333333 +
                 uVar16 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      } while (bVar21 <= uVar4);
      if (iVar7 != 0) {
        local_6c = local_6c - iVar7;
        pbVar9 = local_64;
        do {
          local_64 = pbVar9;
          if (1 < local_68) {
            local_68 = local_68 - 1;
            local_64 = pbVar9 + 1;
            *pbVar9 = local_60[-1 - iVar17];
          }
          bVar21 = iVar17 != -1;
          iVar17 = iVar17 + 1;
          pbVar9 = local_64;
        } while (bVar21);
      }
      if (local_68 < 2) {
        uVar10 = local_68;
LAB_10008d5c:
        param_1 = local_64;
      }
      else {
        *local_64 = 0x2e;
        uVar10 = local_68 - 1;
        param_1 = local_64 + 1;
        if (1 < uVar10) {
          dVar23 = (double)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
          uVar11 = local_68 & 0xfffffffe;
          uVar10 = 1;
          dVar22 = (dVar22 - dVar23) * 10.0;
          uVar14 = VectorFloatToSigned(dVar22,3);
          local_64[1] = (char)uVar14 + 0x30;
          if (uVar11 == 2) {
            param_1 = local_64 + 2;
          }
          else {
            dVar23 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
            dVar22 = (dVar22 - dVar23) * 10.0;
            uVar14 = VectorFloatToSigned(dVar22,3);
            local_64[2] = (char)uVar14 + 0x30;
            if (local_68 - 5 < 0xfffffffd || local_68 == 2) {
              dVar23 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
              dVar22 = (dVar22 - dVar23) * 10.0;
              uVar14 = VectorFloatToSigned(dVar22,3);
              local_64[3] = (char)uVar14 + 0x30;
              if (uVar11 == 4) {
                param_1 = local_64 + 4;
              }
              else {
                dVar23 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
                dVar22 = (dVar22 - dVar23) * 10.0;
                uVar14 = VectorFloatToSigned(dVar22,3);
                local_64[4] = (char)uVar14 + 0x30;
                if (local_68 - 7 < 0xfffffffd || local_68 == 4) {
                  dVar23 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
                  dVar22 = (dVar22 - dVar23) * 10.0;
                  uVar14 = VectorFloatToSigned(dVar22,3);
                  local_64[5] = (char)uVar14 + 0x30;
                  if (uVar11 != 6) {
                    dVar23 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
                    uVar14 = VectorFloatToSigned((dVar22 - dVar23) * 10.0,3);
                    local_64[6] = (char)uVar14 + 0x30;
                    local_64 = local_64 + 7;
                    uVar10 = local_68 - 7;
                    goto LAB_10008d5c;
                  }
                  param_1 = local_64 + 6;
                }
                else {
                  param_1 = local_64 + 5;
                }
              }
            }
            else {
              param_1 = local_64 + 3;
            }
          }
        }
      }
      local_6c = local_6c + 7;
      param_3 = param_3 + 1;
      local_68 = uVar10;
      local_70 = local_70 + 1;
    }
    goto LAB_10008340;
  case 0x70:
    uVar10 = *(uint *)local_70;
    if (local_68 < 2) {
      uVar11 = local_68;
    }
    else {
      pbVar9 = param_1 + 1;
      *param_1 = 0x30;
      uVar11 = 1;
      if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
        uVar11 = local_68 - 2;
        pbVar9 = param_1 + 2;
        param_1[1] = 0x78;
      }
    }
    iVar20 = 0;
    do {
      iVar7 = iVar20;
      local_60[iVar7] = str_1000fd85[uVar10 & 0xf];
      uVar10 = uVar10 >> 4;
      iVar20 = iVar7 + 1;
    } while (uVar10 != 0);
    iVar20 = -iVar7;
    local_6c = local_6c + iVar7 + 1 + 2;
    do {
      param_1 = pbVar9;
      if (1 < uVar11) {
        uVar11 = uVar11 - 1;
        param_1 = pbVar9 + 1;
        *pbVar9 = local_60[-iVar20];
      }
      iVar20 = iVar20 + 1;
      pbVar9 = param_1;
    } while (iVar20 != 1);
    param_3 = param_3 + 1;
    local_68 = uVar11;
    local_70 = pdVar19;
    goto LAB_10008340;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10008340;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000fd6a;
    }
    do {
      bVar13 = *pbVar9;
      local_70 = pdVar19;
      if (bVar13 == 0) break;
      pbVar9 = pbVar9 + 1;
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *local_64 = bVar13;
        local_64 = local_64 + 1;
      }
      local_6c = local_6c + 1;
      if (0 < iVar20) {
        iVar20 = iVar20 + -1;
      }
    } while (iVar20 != 0);
    break;
  case 0x75:
    switch((uintptr_t)(uVar14)) {
    case 1:
      uVar11 = (uint)*(byte *)local_70;
      break;
    case 2:
      uVar11 = (uint)*(ushort *)local_70;
      break;
    default:
      uVar11 = *(uint *)local_70;
      break;
    case 4:
    case 7:
      uVar11 = *(uint *)local_70;
      uVar10 = *(uint *)((int)local_70 + 4);
      local_70 = local_70 + 1;
      goto LAB_10008db8;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10008db8;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10008db8:
    iVar7 = 0;
    iVar20 = -1;
    do {
      iVar17 = iVar20;
      uVar4 = uVar11 >> 1 | uVar10 << 0x1f;
      uVar16 = uVar4 + (uVar10 >> 1) + (uint)CARRY4(uVar4,uVar10 >> 1);
      uVar16 = uVar16 - (((uint)((ulonglong)uVar16 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar16 / 5)
      ;
      uVar5 = uVar4 - uVar16;
      lVar1 = (ulonglong)uVar5 * 0xcccccccd;
      uVar12 = (uint)lVar1;
      local_60[-iVar7] = str_1000fd85[uVar11 + uVar12 * -10];
      bVar21 = uVar11 < 10;
      iVar7 = iVar7 + -1;
      uVar15 = -uVar10;
      iVar20 = iVar17 + -1;
      uVar10 = ((uVar10 >> 1) - (uint)(uVar4 < uVar16)) * -0x33333333 +
               uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      uVar11 = uVar12;
    } while (bVar21 <= uVar15);
    if (iVar7 != 0) {
      local_6c = local_6c - iVar7;
      do {
        pbVar9 = param_1;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          pbVar9 = param_1 + 1;
          *param_1 = local_60[-1 - iVar17];
        }
        bVar21 = iVar17 != -1;
        iVar17 = iVar17 + 1;
        param_1 = pbVar9;
      } while (bVar21);
LAB_10008ea0:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10008340;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10008340;
code_r0x10008380:
  if (local_68 < 2) {
  }
  else {
    local_68 = local_68 - 1;
    pbVar9 = param_1 + 1;
    *param_1 = 0x25;
  }
  local_6c = local_6c + 1;
  param_3 = param_3 + 2;
  param_1 = pbVar9;
  goto LAB_10008340;
}

#undef DAT_1000fd6a
#undef str_1000fd74
#undef str_1000fd85
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_10009088(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_100082c0(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10010084
#define DAT_10010084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_1001008c
#define DAT_1001008c (*(int * *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#undef DAT_68000004
#define DAT_68000004 (*(uint8_t *)(0x68000004U))
#undef DAT_68000008
#define DAT_68000008 (*(uint8_t *)(0x68000008U))
#undef DAT_6800000c
#define DAT_6800000c (*(uint8_t *)(0x6800000cU))
#undef _DAT_68000000
#define _DAT_68000000 (*(int *)(0x68000000U))
#undef _DAT_68000004
#define _DAT_68000004 (*(uint32_t *)(0x68000004U))
#undef _DAT_68000008
#define _DAT_68000008 (*(int *)(0x68000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100090b8(int *param_1,int *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;

  piVar3 = (int *)((int)param_1 + (int)param_2);
  piVar5 = piVar3;
  if (CARRY4((uint)param_1,(uint)param_2)) {
    piVar5 = (int *)0xffffffff;
  }
  if (param_1 < &DAT_68000000) {
    bVar8 = param_1 <= piVar5;
    bVar7 = piVar5 == param_1;
    if (bVar8 && !bVar7) {
      bVar8 = (int *)0x5fffffff < piVar5;
      bVar7 = piVar5 == (int *)0x60000000;
    }
    if (bVar8 && !bVar7) {
      if (param_1 < (int *)0x60000000) {
        if (param_3 == (int *)0x0) {
          return;
        }
        piVar3 = (int *)((int)param_1 + 0xfU & 0x7ffffff0);
        if (((uint)((int)piVar3 - (int)param_1) < 0x60000000U - (int)param_1) &&
           (uVar2 = (0x60000000U - (int)param_1) - ((int)piVar3 - (int)param_1) & 0xfffffff0,
           0x20 < uVar2)) {
          piVar3[1] = 0;
          iVar6 = *param_3;
          bVar7 = DAT_10010084 != 0;
          puVar4 = &DAT_10010084;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_1001008c;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_1001008c = piVar3;
          }
        }
      }
      if (piVar5 <= &DAT_68000000) {
        return;
      }
      if (param_3 == (int *)0x0) {
        return;
      }
      if (((uint)piVar5 & 0xfffffff0) + 0x98000000 < 0x21) {
        return;
      }
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)piVar5 & 0xfffffff0) + 0x97fffff0;
      _DAT_68000008 = *param_3;
      puVar4 = &DAT_10010084;
      if (DAT_10010084 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_1001008c;
      goto LAB_1000929c;
    }
  }
  if ((param_1 <= piVar3) && (param_1 < (int *)0xfffffff1)) {
    bVar7 = param_3 == (int *)0x0;
    if (!bVar7) {
      piVar3 = (int *)((int)param_1 + 0xfU & 0xfffffff0);
      param_1 = (int *)((int)piVar3 - (int)param_1);
    }
    if (((bVar7 || param_1 <= param_2) && (!bVar7 && param_2 != param_1)) &&
       (uVar2 = (int)param_2 - (int)param_1 & 0xfffffff0, 0x20 < uVar2)) {
      piVar3[1] = 0;
      iVar6 = *param_3;
      bVar7 = DAT_10010084 != 0;
      puVar4 = &DAT_10010084;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_1001008c;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_1000929c:
      if (piVar5 == (int *)0x0) {
        DAT_1001008c = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010084
#undef DAT_1001008c
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092b8
 */

uint * recovered_100092b8(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint unaff_r9;
  uint uVar3;

  if ((((param_1 != (uint *)0x0) && (((uint)param_2 & 0xf) == 0)) && ((param_1[3] & 1) != 0)) &&
     (param_1 + 4 < param_2)) {
    uVar2 = (int)param_2 - (int)(param_1 + 4);
    if (0x1f < uVar2) {
      unaff_r9 = *param_1;
    }
    if (0x1f < uVar2 && uVar2 <= unaff_r9) {
      puVar1 = param_2 + -4;
      *puVar1 = unaff_r9 - uVar2;
      uVar3 = param_1[1];
      *(undefined1 *)(param_2 + -1) = 1;
      param_2[-3] = uVar3;
      param_2[-2] = (uint)param_1;
      if (uVar3 != 0) {
        *(uint **)(uVar3 + 8) = puVar1;
      }
      param_1[1] = (uint)puVar1;
      *param_1 = uVar2 - 0x10;
      return puVar1;
    }
  }
  return (uint *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000933c
 */

undefined4 recovered_1000933c(uint *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar4 = param_2 + 0xfU & 0xfffffff0;
  uVar1 = *param_1 - uVar4;
  if (*param_1 < uVar4 || uVar1 < 0x20) {
    return 0;
  }
  uVar3 = param_1[1];
  piVar2 = (int *)((int)param_1 + uVar4 + 0x10);
  *piVar2 = uVar1 - 0x10;
  *param_1 = uVar4;
  *(uint *)((int)param_1 + uVar4 + 0x14) = uVar3;
  *(uint **)((int)param_1 + uVar4 + 0x18) = param_1;
  *(undefined1 *)((int)param_1 + uVar4 + 0x1c) = 1;
  if (uVar3 != 0) {
    *(int **)(uVar3 + 8) = piVar2;
  }
  param_1[1] = (uint)piVar2;
  return 1;
}


#undef DAT_10010090
#define DAT_10010090 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#define local_224 (*(undefined8 (*)[68])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000939c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000939c(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 *puVar2;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == '\b') {
        if (DAT_10010090 != (undefined8 *)0x0) {
          DAT_10010090 = (undefined8 *)((int)DAT_10010090 + -1);
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_10010090 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          else {
            recovered_100058e0(local_224,(undefined8 *)&DAT_10010094,DAT_10010090);
            puVar2 = DAT_10010090;
          }
          *(undefined1 *)((int)local_224 + (int)puVar2) = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_10010090 = (undefined8 *)0x0;
        }
        else {
          if ((int)DAT_10010090 - 0x1ffU < 0xfffffe00) {
            recovered_100058e0(local_224,(undefined8 *)&DAT_10010094,DAT_10010090);
            *(undefined1 *)((int)local_224 + (int)DAT_10010090) = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_10010090 = (undefined8 *)0x0;
          }
          *(char *)((int)DAT_10010090 + ((uintptr_t)pf_module_state+0x35cU)) = cVar1;
          DAT_10010090 = (undefined8 *)((int)DAT_10010090 + 1);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_10010090
#undef DAT_10010094
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_10010090
#define DAT_10010090 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#define local_210 (*(undefined8 (*)[66])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009580(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)0x0;
  if (DAT_10010090 != (undefined8 *)0x0) {
    recovered_100058e0(local_210,(undefined8 *)&DAT_10010094,DAT_10010090);
    puVar1 = DAT_10010090;
  }
  *(undefined1 *)((int)local_210 + (int)puVar1) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_10010090 = (undefined8 *)0x0;
  return;
}

#undef DAT_10010090
#undef DAT_10010094
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_10010090
#define DAT_10010090 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#define auStack_214 (*(undefined8 (*)[66])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009640(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_10010090 == (undefined8 *)0x0) {
    return;
  }
  recovered_100058e0(auStack_214,(undefined8 *)&DAT_10010094,DAT_10010090);
  *(undefined1 *)((int)auStack_214 + (int)DAT_10010090) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_10010090 = (undefined8 *)0x0;
  return;
}

#undef DAT_10010090
#undef DAT_10010094
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000fd73
#define DAT_1000fd73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000fd96
#define DAT_1000fd96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096fc
 */

void recovered_100096fc(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined1 *puVar2;

  format = &DAT_1000fd96;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000fd73;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10009088(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_1000939c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000fd73
#undef DAT_1000fd96
#undef acStack_14c

#undef DAT_1000fdb4
#define DAT_1000fdb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000fd99
#define str_1000fd99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009754
 */

void recovered_10009754(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100069a4(((uintptr_t)pf_module_state+0x61U));
  recovered_1000939c(str_1000fd99,iVar1);
  iVar1 = recovered_100069a4(((uintptr_t)pf_module_state+0x7cU));
  recovered_1000939c(&DAT_1000fdb4,iVar1);
  return;
}

#undef DAT_1000fdb4
#undef str_1000fd99

#undef DAT_1000fdb4
#define DAT_1000fdb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000fdb7
#define str_1000fdb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097a0
 */

void recovered_100097a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100069a4(((uintptr_t)pf_module_state+0x7fU));
  recovered_1000939c(str_1000fdb7,iVar1);
  iVar1 = recovered_100069a4(((uintptr_t)pf_module_state+0x7cU));
  recovered_1000939c(&DAT_1000fdb4,iVar1);
  return;
}

#undef DAT_1000fdb4
#undef str_1000fdb7

#undef DAT_10010090
#define DAT_10010090 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#undef _DAT_40010844
#define _DAT_40010844 (*(code * *)(0x40010844U))
#define auStack_224 (*(undefined8 (*)[68])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100097ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_10010090 != (undefined8 *)0x0) {
    recovered_100058e0(auStack_224,(undefined8 *)&DAT_10010094,DAT_10010090);
    *(undefined1 *)((int)auStack_224 + (int)DAT_10010090) = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_10010090 = (undefined8 *)0x0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10010090
#undef DAT_10010094
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef DAT_40010844
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef _DAT_40010844
#undef auStack_224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009940
 */

undefined4 recovered_10009940(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009948
 */

void recovered_10009948(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000994c
 */

undefined4 recovered_1000994c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000fd96
#define DAT_1000fd96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram40010834
#define Ram40010834 (*(uint32_t *)(0x40010834U))
#undef str_1000fe38
#define str_1000fe38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_1000fe45
#define str_1000fe45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dU)))
#undef str_1000fe53
#define str_1000fe53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11bU)))
#define local_24 (*(undefined8 * *)(pf_stack_frame + 28))
#define local_20 (*(undefined8 * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009954
 */

byte * recovered_10009954(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *size;
  undefined4 uVar9;
  byte bVar10;
  char *unaff_r8;
  bool bVar11;

  if (param_1 != (byte *)0x0) {
    unaff_r8 = param_2;
  }
  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    uVar9 = 0x16;
    goto LAB_10009bc8;
  }
  iVar4 = recovered_100069cc(param_1,(byte *)str_1000fe38);
  if (iVar4 == 0) {
    uVar9 = 1;
LAB_10009b54:
    pbVar6 = recovered_100057e8(800);
    if (pbVar6 != (byte *)0x0) {
      recovered_10006070(pbVar6,0,800);
      pbVar6[0x10c] = 0xff;
      pbVar6[0x10d] = 0xff;
      pbVar6[0x10e] = 0xff;
      pbVar6[0x10f] = 0xff;
      pbVar6[0x110] = iVar4 == 0;
      *(undefined4 *)pbVar6 = uVar9;
      pbVar6[0x111] = iVar4 != 0;
      recovered_10009088((char *)(pbVar6 + 4),0xf1,&DAT_1000fd96,param_1);
      return pbVar6;
    }
  }
  else {
    iVar5 = recovered_100069cc(param_1,(byte *)str_1000fe45);
    if (iVar5 == 0) {
      uVar9 = 2;
      goto LAB_10009b54;
    }
    iVar5 = recovered_100069cc(param_1,(byte *)str_1000fe53);
    if (iVar5 == 0) {
      uVar9 = 3;
      goto LAB_10009b54;
    }
    pbVar6 = recovered_100057e8(800);
    if (pbVar6 != (byte *)0x0) {
      recovered_10006070(pbVar6,0,800);
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pcVar7 = recovered_10006d84(unaff_r8,'r');
      bVar10 = 1;
      bVar3 = 1;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = recovered_10006d84(unaff_r8,'+');
        bVar3 = 1;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = recovered_10006d84(unaff_r8,'a');
          bVar3 = 0;
          if (pcVar7 != (char *)0x0) {
            bVar3 = 1;
          }
        }
      }
      pbVar6[0x110] = bVar3;
      pcVar7 = recovered_10006d84(unaff_r8,'w');
      if ((pcVar7 == (char *)0x0) &&
         (pcVar7 = recovered_10006d84(unaff_r8,'a'), pcVar7 == (char *)0x0)) {
        pcVar7 = recovered_10006d84(unaff_r8,'+');
        bVar10 = 0;
        if (pcVar7 != (char *)0x0) {
          bVar10 = 1;
        }
      }
      pbVar6[0x111] = bVar10;
      pcVar7 = recovered_10006d84(unaff_r8,'a');
      pbVar6[0x112] = pcVar7 != (char *)0x0;
      pbVar6[0x10c] = 0xff;
      pbVar6[0x10d] = 0xff;
      pbVar6[0x10e] = 0xff;
      pbVar6[0x10f] = 0xff;
      recovered_10009088((char *)(pbVar6 + 4),0xf1,&DAT_1000fd96,param_1);
      recovered_10006070((byte *)&local_24,0,0xc);
      iVar4 = Ram40010800;
      if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
        uVar1 = Ram40010808;
        bVar11 = 0xb < uVar1;
        if (bVar11) {
          uVar1 = Ram40010808;
        }
        if (((bVar11 && 0x37 < uVar1) && (pcVar2 = (code *)Ram40010834, pcVar2 != (code *)0x0)) &&
           (iVar4 = (*pcVar2)(param_1,&local_24), iVar4 != 0)) {
          pcVar7 = recovered_10006d84(unaff_r8,'w');
          if ((pcVar7 == (char *)0x0) && (local_20 != (undefined8 *)0x0)) {
            if (pbVar6[0x111] == 1) {
              puVar8 = *(undefined8 **)(pbVar6 + 0x104);
              if (puVar8 < local_20) {
                if (puVar8 == (undefined8 *)0x0) {
                  puVar8 = (undefined8 *)0x100;
                }
                do {
                  size = puVar8;
                  puVar8 = (undefined8 *)((int)size << 1);
                } while (size < local_20);
                puVar8 = recovered_1000588c(*(void **)(pbVar6 + 0xfc),(ulong)size);
                if (puVar8 == (undefined8 *)0x0) {
                  pbVar6[0x115] = 1;
                  uVar9 = 0xc;
                  goto LAB_10009bf0;
                }
                *(undefined8 **)(pbVar6 + 0x104) = size;
                *(undefined8 **)(pbVar6 + 0xfc) = puVar8;
                *(undefined8 **)(pbVar6 + 0xf8) = puVar8;
              }
              else {
                puVar8 = *(undefined8 **)(pbVar6 + 0xfc);
              }
              recovered_100058e0(puVar8,local_24,local_20);
            }
            else {
              *(undefined8 **)(pbVar6 + 0xf8) = local_24;
            }
            *(undefined8 **)(pbVar6 + 0x100) = local_20;
          }
          goto LAB_10009b2c;
        }
      }
      if (pbVar6[0x111] == 0) {
        uVar9 = 2;
LAB_10009bf0:
        *DAT_10014004 = uVar9;
        recovered_1000583c(pbVar6);
        return (byte *)0x0;
      }
LAB_10009b2c:
      if (pbVar6[0x112] == 1) {
        *(undefined4 *)(pbVar6 + 0x108) = *(undefined4 *)(pbVar6 + 0x100);
        return pbVar6;
      }
      return pbVar6;
    }
  }
  uVar9 = 0xc;
LAB_10009bc8:
  *DAT_10014004 = uVar9;
  return (byte *)0x0;
}

#undef DAT_1000fd96
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010834
#undef str_1000fe38
#undef str_1000fe45
#undef str_1000fe53
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cd8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009cd8(byte *param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  if (param_3 != (uint *)0x0) {
    uVar2 = *param_3;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)((int)param_3 + 0x113);
    }
    if (bVar3 && uVar2 == 1) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
         ((_DAT_40010838 != (code *)0x0 &&
          (iVar1 = (*_DAT_40010838)(param_3 + 1,param_3[0x3e],param_3[0x40]), iVar1 != 0)))) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
      }
      else {
        *(undefined1 *)((int)param_3 + 0x115) = 1;
        *DAT_10014004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_1000583c((void *)param_3[0x3f]);
    }
    recovered_1000583c(param_3);
  }
  recovered_10009954(param_1,param_2);
  return;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dd8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009dd8(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  uVar3 = 0;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x113);
  }
  if (bVar4 && uVar2 == 1) {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
       ((_DAT_40010838 != (code *)0x0 &&
        (iVar1 = (*_DAT_40010838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
      uVar3 = 0;
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar3 = 0xffffffff;
      *DAT_10014004 = 5;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_1000583c((void *)param_1[0x3f]);
  }
  recovered_1000583c(param_1);
  return uVar3;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ed0
 */

uint recovered_10009ed0(undefined8 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;

  uVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined8 *)0x0) {
      unaff_r4 = param_4;
    }
    if ((param_1 != (undefined8 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r4[0x44] == '\x01'))
    {
      iVar2 = *unaff_r4;
      bVar8 = iVar2 == 0;
      if (bVar8) {
        iVar2 = unaff_r4[0x43];
      }
      if (bVar8 && iVar2 == -1) {
        uVar6 = unaff_r4[0x42];
        if (uVar6 < (uint)unaff_r4[0x40]) {
          puVar5 = (undefined8 *)((ulonglong)param_3 * (ulonglong)param_2);
          puVar7 = (undefined8 *)(unaff_r4[0x40] - uVar6);
          if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) != 0) {
            puVar5 = (undefined8 *)0xffffffff;
          }
          puVar4 = puVar5;
          if (puVar7 < puVar5) {
            puVar4 = puVar7;
          }
          recovered_100058e0(param_1,(undefined8 *)(unaff_r4[0x3e] + uVar6),puVar4);
          unaff_r4[0x42] = unaff_r4[0x42] + (int)puVar4;
          if (puVar7 < puVar5) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10003d40((uint)puVar4,param_2);
        }
        else {
          *(undefined1 *)(unaff_r4 + 0x45) = 1;
        }
      }
      else {
        do {
          puVar5 = param_1;
          uVar6 = param_2;
          do {
            uVar1 = recovered_10009ffc(unaff_r4);
            if (uVar1 == 0xffffffff) {
              return uVar3;
            }
            *(char *)puVar5 = (char)uVar1;
            uVar6 = uVar6 - 1;
            puVar5 = (undefined8 *)((int)puVar5 + 1);
          } while (uVar6 != 0);
          uVar3 = uVar3 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_2);
        } while (uVar3 != param_3);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


#undef DAT_1000fd73
#define DAT_1000fd73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10010090
#define DAT_10010090 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#undef _DAT_40010844
#define _DAT_40010844 (*(code * *)(0x40010844U))
#define auStack_220 (*(undefined8 (*)[68])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ffc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10009ffc(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar2 = param_1[0x43];
  if (uVar2 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar2;
  }
  if (*param_1 == 1) {
    uVar2 = param_1[199];
    if (uVar2 < (uint)param_1[0xc6]) {
LAB_1000a058:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_10010090 != (undefined8 *)0x0) {
      recovered_100058e0(auStack_220,(undefined8 *)&DAT_10010094,DAT_10010090);
      *(undefined1 *)((int)auStack_220 + (int)DAT_10010090) = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_10010090 = (undefined8 *)0x0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      iVar3 = (int)param_1 + 0x116;
      uVar2 = 0;
      iVar1 = (*_DAT_40010844)(iVar3,0x1fe,&DAT_1000fd73,0);
      if (iVar1 != 0) {
        iVar1 = recovered_100069a4(iVar3);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)(iVar3 + iVar1) = 10;
        *(undefined1 *)(iVar3 + param_1[0xc6]) = 0;
        goto LAB_1000a058;
      }
    }
  }
  else {
    uVar2 = param_1[0x42];
    if (uVar2 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar2 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  return 0xffffffff;
}

#undef DAT_1000fd73
#undef DAT_10010090
#undef DAT_10010094
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef DAT_40010844
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef _DAT_40010844
#undef auStack_220

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1fc
 */

int recovered_1000a1fc(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint size;
  undefined8 *puVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
    param_3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_3 * param_2);
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_1000939c(param_1,(int)puVar4);
      param_4[0x42] = param_4[0x42] + (int)puVar4;
    }
    else {
      uVar3 = param_4[0x41];
      if (*(char *)((int)param_4 + 0x112) == '\0') {
        uVar2 = param_4[0x42];
      }
      else {
        uVar2 = param_4[0x40];
        param_4[0x42] = uVar2;
      }
      if (uVar3 < uVar2 + (int)puVar4) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size = uVar3;
          uVar3 = size << 1;
        } while (size < uVar2 + (int)puVar4);
        pvVar1 = recovered_1000588c((void *)param_4[0x3f],size);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_10014004 = 0xc;
          return 0;
        }
        uVar2 = param_4[0x42];
        param_4[0x3f] = (uint)pvVar1;
        param_4[0x3e] = (uint)pvVar1;
        param_4[0x41] = size;
      }
      uVar3 = param_4[0x40];
      if (uVar3 < uVar2) {
        recovered_10006070((byte *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_100058e0((undefined8 *)(param_4[0x3f] + uVar2),(undefined8 *)param_1,puVar4);
      uVar3 = param_4[0x42] + (int)puVar4;
      param_4[0x42] = uVar3;
      if (param_4[0x40] < uVar3) {
        param_4[0x40] = uVar3;
      }
      *(undefined2 *)((int)param_4 + 0x113) = 1;
    }
  }
  return param_3;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a374
 */

undefined4 recovered_1000a374(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000a388;
        iVar1 = 0x100;
      }
      param_2 = *(int *)((int)param_1 + iVar1) + param_2;
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      param_1[0x43] = -1;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      return 0;
    }
  }
LAB_1000a388:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a424
 */

undefined4 recovered_1000a424(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a44c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a44c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;

  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1;
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x113);
    }
    if (bVar4 && uVar3 == 1) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
         ((_DAT_40010838 != (code *)0x0 &&
          (iVar1 = (*_DAT_40010838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
        uVar2 = 0;
        *(undefined1 *)((int)param_1 + 0x113) = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *DAT_10014004 = 5;
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a524
 */

undefined1 recovered_1000a524(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a534
 */

void recovered_1000a534(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a544
 */

void recovered_1000a544(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a560
 */

void recovered_1000a560(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a584
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a584(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 5;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3f < _DAT_40010808)) &&
       ((_DAT_4001083c != (code *)0x0 && (iVar1 = (*_DAT_4001083c)(), iVar1 != 0)))) {
      return 0;
    }
  }
  *DAT_10014004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x42ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a614
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a614(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_10006070((byte *)&local_28,0,0xc);
  uVar2 = 2;
  if (((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
      (((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_28), iVar1 != 0))
       && ((uVar2 = 5, _DAT_40010800 == 0x50414d57 &&
           ((_DAT_40010804 != 0 && (0x3b < _DAT_40010808)))))))) &&
     ((_DAT_40010838 != (code *)0x0 &&
      (((((iVar1 = (*_DAT_40010838)(param_2,local_28,uStack_24), iVar1 != 0 &&
          (_DAT_40010800 == 0x50414d57)) && (_DAT_40010804 != 0)) &&
        ((0x3f < _DAT_40010808 && (_DAT_4001083c != (code *)0x0)))) &&
       (iVar1 = (*_DAT_4001083c)(param_1), iVar1 != 0)))))) {
    return 0;
  }
  *DAT_10014004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_40010838
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_40010838
#undef _DAT_4001083c
#undef local_28
#undef uStack_24

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#define local_24 (*(undefined8 * *)(pf_stack_frame + 28))
#define local_20 (*(undefined8 * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a788
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a788(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (undefined4 *)0x0)) &&
      (recovered_10006070((byte *)&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    puVar2 = local_20;
    if (local_20 < (undefined8 *)0x2) {
      puVar2 = (undefined8 *)0x1;
    }
    puVar2 = recovered_100057e8((ulong)puVar2);
    if (puVar2 != (undefined8 *)0x0) {
      if (local_20 == (undefined8 *)0x0) {
        local_20 = (undefined8 *)0x0;
      }
      else {
        recovered_100058e0(puVar2,local_24,local_20);
      }
      uVar3 = 1;
      *param_3 = local_20;
      *param_2 = puVar2;
    }
  }
  return uVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef local_24
#undef local_20

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a888
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000a888(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 == 0) || (((param_2 == 0 && (param_3 != 0)) || (_DAT_40010800 != 0x50414d57)))) ||
     ((_DAT_40010804 == 0 || (_DAT_40010808 < 0x3c)))) {
    return false;
  }
  if (_DAT_40010838 == (code *)0x0) {
    return false;
  }
  iVar1 = (*_DAT_40010838)(param_1);
  return iVar1 != 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a910
 */

undefined4 recovered_1000a910(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a918
 */

void recovered_1000a918(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a91c
 */

undefined4 recovered_1000a91c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a924
 */

void recovered_1000a924(int param_1,char param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a92c
 */

undefined4 recovered_1000a92c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a934
 */

int recovered_1000a934(byte *param_1,byte *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    param_3 = param_3 + -1;
    uVar1 = (uint)*param_1;
    if (uVar1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - *param_2;
}


#undef DAT_1000fdc7
#define DAT_1000fdc7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef str_1000fdca
#define str_1000fdca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92U)))
#undef str_1000fdd7
#define str_1000fdd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9fU)))
#undef str_1000fde1
#define str_1000fde1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_1000fdf5
#define str_1000fdf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#undef str_1000fe03
#define str_1000fe03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbU)))
#undef str_1000fe15
#define str_1000fe15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000fe21
#define str_1000fe21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9U)))
#undef str_1000fe32
#define str_1000fe32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a978
 */

char * recovered_1000a978(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000fdc7;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_1000a998_caseD_0;
  default:
    pcVar1 = str_1000fe32;
switchD_1000a998_caseD_0:
    return pcVar1;
  case 2:
    return str_1000fdca;
  case 5:
    return str_1000fdd7;
  case 9:
    return str_1000fde1;
  case 0xc:
    return str_1000fdf5;
  case 0xd:
    return str_1000fe03;
  case 0x11:
    return str_1000fe15;
  case 0x16:
    return str_1000fe21;
  }
}

#undef DAT_1000fdc7
#undef str_1000fdca
#undef str_1000fdd7
#undef str_1000fde1
#undef str_1000fdf5
#undef str_1000fe03
#undef str_1000fe15
#undef str_1000fe21
#undef str_1000fe32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa78
 */

void recovered_1000aa78(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa80
 */

undefined4 recovered_1000aa80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10010294
#define DAT_10010294 (*(int *)(((uintptr_t)pf_module_state + 0x55cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa88
 */

void recovered_1000aa88(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010294 = DAT_10010294 + 1;
  return;
}

#undef DAT_10010294

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1000aab0(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_1000aac0(void *context){__asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr\ntrap ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1000ab10(void *context,int value){__asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr\ntrap ");}


static const unsigned char pf_literal_1000ab68_DAT_1000abec[] __attribute__((aligned(16)))={0x0c,0x53,0x00,0x00};
#undef DAT_1000abec
#define DAT_1000abec (*(int *)((uintptr_t)pf_literal_1000ab68_DAT_1000abec))
static const unsigned char pf_literal_1000ab68_DAT_1000abf0[] __attribute__((aligned(16)))={0x1c,0x00,0x00,0x00};
#undef DAT_1000abf0
#define DAT_1000abf0 (*(int *)((uintptr_t)pf_literal_1000ab68_DAT_1000abf0))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab68
 */

void recovered_1000ab68(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_1000abf4;
  local_20 = DAT_1000abec + 0x1000ab90;
  local_18 = DAT_1000abf0 + 0x1000aba0;
  local_38 = 1;
  recovered_1000b338(&uStack_3c);
  recovered_100057d4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1000abc8);
  (*pcVar1)();
}

#undef DAT_1000abec
#undef DAT_1000abf0
#undef uStack_3c
#undef local_38
#undef local_24
#undef auStack_10
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abf4
 */

undefined4 recovered_1000abf4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10010298
#define DAT_10010298 (*(int *)(((uintptr_t)pf_module_state + 0x560U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abfc
 */

int recovered_1000abfc(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_1000b150(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_1000ab68();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_10010298;
  DAT_10010298 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_10010298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac3c
 */

void * recovered_1000ac3c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100057e8(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100057d4();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac68
 */

void * recovered_1000ac68(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100057e8(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100057d4();
    return (void *)0x0;
  }
  return pvVar1;
}


static const unsigned char pf_literal_1000ac94_DAT_1000ad54[] __attribute__((aligned(16)))={0xd4,0x51,0x00,0x00};
#undef DAT_1000ad54
#define DAT_1000ad54 (*(int *)((uintptr_t)pf_literal_1000ac94_DAT_1000ad54))
static const unsigned char pf_literal_1000ac94_DAT_1000ad58[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_1000ad58
#define DAT_1000ad58 (*(int *)((uintptr_t)pf_literal_1000ac94_DAT_1000ad58))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac94
 */

void recovered_1000ac94(void *pointer)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000abf4;
  local_78 = DAT_1000ad54 + 0x1000acd8;
  local_70 = DAT_1000ad58 + 0x1000ace8;
  local_90 = 1;
  recovered_1000b338(&uStack_94);
  recovered_1000583c(pointer);
  recovered_1000b35c(&uStack_94);
  return;
}

#undef DAT_1000ad54
#undef DAT_1000ad58
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68

static const unsigned char pf_literal_1000ad5c_DAT_1000ae1c[] __attribute__((aligned(16)))={0x1c,0x51,0x00,0x00};
#undef DAT_1000ae1c
#define DAT_1000ae1c (*(int *)((uintptr_t)pf_literal_1000ad5c_DAT_1000ae1c))
static const unsigned char pf_literal_1000ad5c_DAT_1000ae20[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_1000ae20
#define DAT_1000ae20 (*(int *)((uintptr_t)pf_literal_1000ad5c_DAT_1000ae20))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad5c
 */

void recovered_1000ad5c(void *pointer)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000abf4;
  local_78 = DAT_1000ae1c + 0x1000ada0;
  local_70 = DAT_1000ae20 + 0x1000adb0;
  local_90 = 1;
  recovered_1000b338(&uStack_94);
  recovered_1000583c(pointer);
  recovered_1000b35c(&uStack_94);
  return;
}

#undef DAT_1000ae1c
#undef DAT_1000ae20
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

static const unsigned char pf_literal_1000ae24_DAT_1000aee4[] __attribute__((aligned(16)))={0x64,0x50,0x00,0x00};
#undef DAT_1000aee4
#define DAT_1000aee4 (*(int *)((uintptr_t)pf_literal_1000ae24_DAT_1000aee4))
static const unsigned char pf_literal_1000ae24_DAT_1000aee8[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_1000aee8
#define DAT_1000aee8 (*(int *)((uintptr_t)pf_literal_1000ae24_DAT_1000aee8))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae24
 */

void recovered_1000ae24(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000abf4;
  local_78 = DAT_1000aee4 + 0x1000ae68;
  local_70 = DAT_1000aee8 + 0x1000ae78;
  local_90 = 1;
  recovered_1000b338(&uStack_94);
  recovered_1000583c(param_1);
  recovered_1000b35c(&uStack_94);
  return;
}

#undef DAT_1000aee4
#undef DAT_1000aee8
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

static const unsigned char pf_literal_1000aeec_DAT_1000afac[] __attribute__((aligned(16)))={0xac,0x4f,0x00,0x00};
#undef DAT_1000afac
#define DAT_1000afac (*(int *)((uintptr_t)pf_literal_1000aeec_DAT_1000afac))
static const unsigned char pf_literal_1000aeec_DAT_1000afb0[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_1000afb0
#define DAT_1000afb0 (*(int *)((uintptr_t)pf_literal_1000aeec_DAT_1000afb0))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aeec
 */

void recovered_1000aeec(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000abf4;
  local_78 = DAT_1000afac + 0x1000af30;
  local_70 = DAT_1000afb0 + 0x1000af40;
  local_90 = 1;
  recovered_1000b338(&uStack_94);
  recovered_1000583c(param_1);
  recovered_1000b35c(&uStack_94);
  return;
}

#undef DAT_1000afac
#undef DAT_1000afb0
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef auStack_68
#undef local_7c
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afb4
 */

undefined4 recovered_1000afb4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afbc
 */

void recovered_1000afbc(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afcc
 */

void recovered_1000afcc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *in_r0;

  *in_r0 = *in_r0 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afdc
 */

void recovered_1000afdc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100102a0
#define DAT_100102a0 (*(uint *)(((uintptr_t)pf_module_state + 0x568U)))
#undef DAT_100102a4
#define DAT_100102a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afe0
 */

undefined4 * recovered_1000afe0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint size;
  uint uVar6;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x24;
  puVar1 = recovered_100057e8(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_1000ab68();
  }
  if (size != 0) {
    uVar6 = 0;
    if (0xf < size) {
      uVar6 = size & 0xfffffff0;
      puVar2 = puVar1;
      uVar4 = uVar6;
      do {
        *puVar2 = 0;
        puVar2[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar2[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar2[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar2 = puVar2 + 4;
        uVar4 = uVar4 - 0x10;
      } while (uVar4 != 0);
      if (size == uVar6) goto LAB_1000b05c;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_1000b05c:
  DAT_100102a0 = DAT_100102a0 + 1;
  if (DAT_100102a0 < 2) {
    DAT_100102a0 = 1;
  }
  if (DAT_100102a4 == (undefined4 *)0x0) {
LAB_1000b0b8:
    puVar1[7] = DAT_100102a0;
    puVar1[3] = DAT_100102a4;
    DAT_100102a4 = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_100102a4;
    while (*(uint *)(iVar3 + 0x1c) != DAT_100102a0) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000b0b8;
    }
    DAT_100102a0 = DAT_100102a0 + 1;
    if (DAT_100102a0 < 2) {
      DAT_100102a0 = 1;
    }
  } while( true );
}

#undef DAT_100102a0
#undef DAT_100102a4

#undef DAT_100102a4
#define DAT_100102a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0ec
 */

int recovered_1000b0ec(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int extraout_r0 = 0;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;

  if (param_1 == 0) {
    return 0;
  }
  pointer = (void *)(param_1 + -0x24);
  pvVar1 = DAT_100102a4;
  if (DAT_100102a4 == pointer) {
    puVar3 = &DAT_100102a4;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_1000b148;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_1000b148:
  recovered_1000583c(pointer);
  return extraout_r0;
}

#undef DAT_100102a4

#undef DAT_100102a4
#define DAT_100102a4 (*(int *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b150
 */

void recovered_1000b150(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_100102a4;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 != param_1) {
      param_3 = *(int *)(iVar1 + 0x1c);
    }
    if (iVar1 == param_1 || param_3 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return;
}

#undef DAT_100102a4

#undef DAT_10010298
#define DAT_10010298 (*(void * *)(((uintptr_t)pf_module_state + 0x560U)))
#undef DAT_100102a4
#define DAT_100102a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b18c
 */

void recovered_1000b18c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_10010298;
  if (DAT_10010298 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_10010298 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_10010298 + 8);
  *(undefined4 *)((int)DAT_10010298 + 8) = 0;
  DAT_10010298 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_100102a4;
  if (DAT_100102a4 == pointer) {
    puVar3 = &DAT_100102a4;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_1000b238;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_1000b238:
  recovered_1000583c(pointer);
  return;
}

#undef DAT_10010298
#undef DAT_100102a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b244
 */

void recovered_1000b244(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_1000b26c((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_10010298
#define DAT_10010298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x560U)))
#undef DAT_1001029c
#define DAT_1001029c (*(int * *)(((uintptr_t)pf_module_state + 0x564U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b26c
 */

void recovered_1000b26c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_1001029c != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_1001029c;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_1000bbc0((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_1000b42c(param_1);
        puVar3 = DAT_10010298;
                    /* WARNING: Subroutine does not return */
        if (DAT_10010298 == (undefined4 *)0x0) {
          recovered_1000ab68();
        }
        DAT_10010298[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
        recovered_1000b26c(puVar3);
        *extraout_r0 = (int)DAT_1001029c;
        DAT_1001029c = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_1000ab68();
}

#undef DAT_10010298
#undef DAT_1001029c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10010298
#define DAT_10010298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x560U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b300
 */

void recovered_1000b300(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_10010298;
                    /* WARNING: Subroutine does not return */
  if (DAT_10010298 == (undefined4 *)0x0) {
    recovered_1000ab68();
  }
  DAT_10010298[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_1000b26c(puVar1);
  *extraout_r0 = DAT_1001029c;
  DAT_1001029c = extraout_r0;
  return;
}

#undef DAT_10010298
#undef DAT_1001029c

#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b338
 */

void recovered_1000b338(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1001029c;
  DAT_1001029c = param_1;
  return;
}

#undef DAT_1001029c

#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x564U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b35c
 */

void recovered_1000b35c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1001029c;
  if (DAT_1001029c == param_1) {
    puVar2 = &DAT_1001029c;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_1001029c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3a4
 */

void recovered_1000b3a4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000b26c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_1000ab68();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3b0
 */

void recovered_1000b3b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000ab68();
}


#undef DAT_1001029c
#define DAT_1001029c (*(int * *)(((uintptr_t)pf_module_state + 0x564U)))
#undef DAT_100102a4
#define DAT_100102a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x56cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3bc
 */

void recovered_1000b3bc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_100102a4; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_1000b400;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_1000ab68();
  }
LAB_1000b400:
  if (DAT_1001029c != (int *)0x0) {
    DAT_1001029c = (int *)*DAT_1001029c;
  }
  recovered_1000b42c(puVar1);
  return;
}

#undef DAT_1001029c
#undef DAT_100102a4

#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x564U)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b42c
 */

void recovered_1000b42c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;

  if (DAT_1001029c != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)param_1[4];
    do {
      puVar1 = DAT_1001029c;
      if (DAT_1001029c == puVar5) {
        uVar4 = param_1[6];
        uVar3 = param_1[5];
        DAT_1001029c[2] = param_1;
        puVar1[3] = uVar4;
LAB_1000b4e0:
        puVar1[1] = uVar3;
        puVar5 = (undefined4 *)(recovered_1000aab0(puVar1), (uintptr_t)0);
                    /* WARNING: Subroutine does not return */
        recovered_1000b3bc(puVar5);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_1000bbc0((int)DAT_1001029c,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        puVar1[3] = 0;
        puVar1[2] = param_1;
        uVar3 = local_2c;
        goto LAB_1000b4e0;
      }
      DAT_1001029c = (undefined4 *)*puVar1;
    } while (DAT_1001029c != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_1000ab68();
}

#undef DAT_1001029c
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4ec
 */

void recovered_1000b4ec(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000b3bc(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4f8
 */

undefined4 recovered_1000b4f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b500
 */

void recovered_1000b500(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000ab68();
}


#undef DAT_10010068
#define DAT_10010068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b50c
 */

int recovered_1000b50c(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;

  iVar3 = 0;
  if (param_1 == (int *)0x0 || param_3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(*param_1 + -4);
  iVar8 = *(int *)(*param_1 + -8);
  if (puVar4 != param_3 && puVar4 != (undefined4 *)0x0) {
    pcVar7 = (char *)param_3[1];
    do {
      pcVar5 = (char *)puVar4[1];
      if (pcVar7 == (char *)0x0 || pcVar5 == (char *)0x0) {
        if (pcVar5 == pcVar7) {
LAB_1000b5f8:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_1000b5f8;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_10010068) {
        return 0;
      }
      puVar4 = (undefined4 *)puVar4[2];
    } while (puVar4 != param_3 && puVar4 != (undefined4 *)0x0);
  }
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = (int)param_1 + iVar8;
  }
  return iVar3;
}

#undef DAT_10010068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b600
 */

void recovered_1000b600(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b604
 */

undefined4 recovered_1000b604(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b60c
 */

bool recovered_1000b60c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b620
 */

bool recovered_1000b620(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b660
 */

bool recovered_1000b660(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b68c
 */

int recovered_1000b68c(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(((uint)(pf_double_bits(value) >> 0x20) & 0x7fffffff) < 0x7ff00000);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6a8
 */

bool recovered_1000b6a8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6c4
 */

bool recovered_1000b6c4(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6e0
 */

int recovered_1000b6e0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(((uint)(pf_double_bits(value) >> 0x20) & 0x7fffffff) < 0x7ff00000);
}


static const unsigned char pf_literal_1000b700_DAT_1000b7d0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_1000b7d0
#define DAT_1000b7d0 (*(double *)((uintptr_t)pf_literal_1000b700_DAT_1000b7d0))
static const unsigned char pf_literal_1000b700_DAT_1000b7d8[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_1000b7d8
#define DAT_1000b7d8 (*(double *)((uintptr_t)pf_literal_1000b700_DAT_1000b7d8))
static const unsigned char pf_literal_1000b700_DAT_1000b7e0[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_1000b7e0
#define DAT_1000b7e0 (*(double *)((uintptr_t)pf_literal_1000b700_DAT_1000b7e0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b700
 */

double recovered_1000b700(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar3)) {
    return pf_bits_double(CONCAT44(param_2,param_1));
  }
  if (dVar3 <= DAT_1000b7d8) {
    dVar4 = 0.0;
    if (DAT_1000b7e0 <= dVar3) {
      iVar1 = 0;
      for (; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        iVar2 = iVar2 + -1;
        dVar6 = dVar6 * (dVar3 / dVar5);
        dVar5 = dVar5 + 1.0;
        dVar4 = dVar4 + dVar6;
      } while (iVar2 != 0);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
    return dVar4;
  }
  return DAT_1000b7d0;
}

#undef DAT_1000b7d0
#undef DAT_1000b7d8
#undef DAT_1000b7e0

static const unsigned char pf_literal_1000b7e8_DAT_1000b8d0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_1000b8d0
#define DAT_1000b8d0 (*(double *)((uintptr_t)pf_literal_1000b7e8_DAT_1000b8d0))
static const unsigned char pf_literal_1000b7e8_DAT_1000b8d8[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_1000b8d8
#define DAT_1000b8d8 (*(double *)((uintptr_t)pf_literal_1000b7e8_DAT_1000b8d8))
static const unsigned char pf_literal_1000b7e8_DAT_1000b8e0[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_1000b8e0
#define DAT_1000b8e0 (*(double *)((uintptr_t)pf_literal_1000b7e8_DAT_1000b8e0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7e8
 */

float recovered_1000b7e8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = (double)param_1;
  if (NAN(param_1)) {
    dVar4 = dVar3;
  }
  else if (dVar3 <= DAT_1000b8d8) {
    dVar4 = 0.0;
    if (DAT_1000b8e0 <= dVar3) {
      iVar1 = 0;
      if (0.5 < param_1) {
        do {
          dVar3 = dVar3 * 0.5;
          iVar1 = iVar1 + 1;
        } while (0.5 < dVar3);
      }
      for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        iVar2 = iVar2 + -1;
        dVar6 = dVar6 * (dVar3 / dVar5);
        dVar5 = dVar5 + 1.0;
        dVar4 = dVar4 + dVar6;
      } while (iVar2 != 0);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = DAT_1000b8d0;
  }
  return (float)dVar4;
}

#undef DAT_1000b8d0
#undef DAT_1000b8d8
#undef DAT_1000b8e0

static const unsigned char pf_literal_1000b8e8_DAT_1000b9b8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_1000b9b8
#define DAT_1000b9b8 (*(double *)((uintptr_t)pf_literal_1000b8e8_DAT_1000b9b8))
static const unsigned char pf_literal_1000b8e8_DAT_1000b9c0[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_1000b9c0
#define DAT_1000b9c0 (*(double *)((uintptr_t)pf_literal_1000b8e8_DAT_1000b9c0))
static const unsigned char pf_literal_1000b8e8_DAT_1000b9c8[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_1000b9c8
#define DAT_1000b9c8 (*(double *)((uintptr_t)pf_literal_1000b8e8_DAT_1000b9c8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8e8
 */

double recovered_1000b8e8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar3)) {
    return pf_bits_double(CONCAT44(param_2,param_1));
  }
  if (dVar3 <= DAT_1000b9c0) {
    dVar4 = 0.0;
    if (DAT_1000b9c8 <= dVar3) {
      iVar1 = 0;
      for (; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        iVar2 = iVar2 + -1;
        dVar6 = dVar6 * (dVar3 / dVar5);
        dVar5 = dVar5 + 1.0;
        dVar4 = dVar4 + dVar6;
      } while (iVar2 != 0);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
    return dVar4;
  }
  return DAT_1000b9b8;
}

#undef DAT_1000b9b8
#undef DAT_1000b9c0
#undef DAT_1000b9c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9d0
 */

double recovered_1000b9d0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  double dVar1;
  double dVar2;

  dVar1 = (double)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return dVar2 - dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9ec
 */

double recovered_1000b9ec(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  dVar2 = recovered_100071cc(pf_bits_double(CONCAT44(param_2,param_1)));
  dVar2 = pf_bits_double(((pf_double_bits(dVar2) & 0xffffffff00000000) + (pf_double_bits(dVar2) & 0xffffffff)));
  if (0.5 <= dVar1 - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if (-0.5 < dVar1 - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar2 + dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba44
 */

ulonglong recovered_1000ba44(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  if (param_1 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = param_1; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x1000bab0;
    }
  }
  bVar1 = false;
joined_r0x1000bab0:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar4 = pbVar4 + -1;
  iVar8 = 1;
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    iVar5 = (int)(uVar2 >> 0x20);
    uVar7 = (uint)pbVar4[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar4 = pbVar4 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar3 = (ulonglong)param_3 * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar4 = param_1;
    }
    *param_2 = pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbbc
 */

ulonglong recovered_1000bbbc(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  if (param_1 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = param_1; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x1000bab0;
    }
  }
  bVar1 = false;
joined_r0x1000bab0:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar4 = pbVar4 + -1;
  iVar8 = 1;
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    iVar5 = (int)(uVar2 >> 0x20);
    uVar7 = (uint)pbVar4[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar4 = pbVar4 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar3 = (ulonglong)param_3 * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar4 = param_1;
    }
    *param_2 = pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


#undef DAT_1000ffbc
#define DAT_1000ffbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_10010068
#define DAT_10010068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x330U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbc0
 */

undefined4 recovered_1000bbc0(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  bool bVar23;

  pbVar10 = *(byte **)(param_1 + 0x1c);
  if (pbVar10 != (byte *)0x0) {
    local_28 = pbVar10 + 1;
    if (*pbVar10 != 0xff) {
      recovered_1000bf74((uint)*pbVar10,&local_28);
    }
    uVar8 = 0;
    uVar13 = (uint)*local_28;
    pbVar10 = (byte *)0x0;
    if (uVar13 != 0xff) {
      uVar11 = 0;
      pbVar21 = local_28 + 1;
      do {
        local_28 = pbVar21;
        pbVar10 = (byte *)((uint)pbVar10 | ((int)(char)*local_28 & 0x7fU) << (uVar11 & 0xff));
        uVar11 = uVar11 + 7;
        pbVar21 = local_28 + 1;
      } while ((char)*local_28 < 0);
      pbVar10 = local_28 + 1 + (int)pbVar10;
    }
    local_28 = local_28 + 2;
    uVar11 = 0;
    pbVar21 = local_28;
    do {
      pbVar5 = pbVar21 + 1;
      bVar3 = *pbVar21;
      uVar11 = uVar11 | ((int)(char)bVar3 & 0x7fU) << (uVar8 & 0xff);
      uVar8 = uVar8 + 7;
      pbVar21 = pbVar5;
    } while ((char)bVar3 < 0);
    uVar14 = *(uint *)(param_1 + 4);
    uVar8 = uVar14;
    if (0 < (int)uVar14) {
      uVar8 = uVar11;
    }
    if (0 < (int)uVar8) {
      pbVar21 = pbVar5 + uVar11;
      iVar15 = 0;
      do {
        uVar11 = 0;
        uVar8 = 0;
        do {
          pbVar6 = pbVar5 + 1;
          bVar3 = *pbVar5;
          uVar8 = uVar8 | ((int)(char)bVar3 & 0x7fU) << (uVar11 & 0xff);
          uVar11 = uVar11 + 7;
          pbVar5 = pbVar6;
        } while ((char)bVar3 < 0);
        uVar20 = 0;
        uVar11 = 0;
        do {
          pbVar5 = pbVar6 + 1;
          bVar3 = *pbVar6;
          uVar11 = uVar11 | ((int)(char)bVar3 & 0x7fU) << (uVar20 & 0xff);
          uVar20 = uVar20 + 7;
          pbVar6 = pbVar5;
        } while ((char)bVar3 < 0);
        if (iVar15 == uVar14 - 1) {
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 2) = uVar8;
          *(undefined1 *)(param_3 + 1) = 0;
          *param_3 = 1;
          if (uVar11 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          uVar14 = uVar13 & 0xf;
          pbVar21 = pbVar21 + (uVar11 - 1);
          uVar8 = 0;
          goto LAB_1000bd98;
        }
        iVar15 = iVar15 + 1;
      } while (pbVar5 < pbVar21);
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *param_3 = 0;
  return 0;
LAB_1000bd98:
  uVar11 = 0;
  uVar20 = 0;
  do {
    pbVar5 = pbVar21 + 1;
    bVar3 = *pbVar21;
    uVar11 = uVar11 | ((int)(char)bVar3 & 0x7fU) << (uVar20 & 0xff);
    uVar20 = uVar20 + 7;
    pbVar21 = pbVar5;
  } while ((char)bVar3 < 0);
  uVar19 = 0;
  uVar17 = 0;
  do {
    bVar4 = *pbVar21;
    uVar19 = uVar19 | ((int)(char)bVar4 & 0x7fU) << (uVar17 & 0xff);
    uVar17 = uVar17 + 7;
    pbVar21 = pbVar21 + 1;
  } while ((char)bVar4 < 0);
  uVar22 = uVar19;
  if (0x3f < bVar4) {
    uVar22 = uVar19 | -1 << (uVar17 & 0xff);
  }
  if (0x1f < uVar17) {
    uVar22 = uVar19;
  }
  uVar17 = uVar11;
  if (0x3f < bVar3) {
    uVar17 = uVar11 | -1 << (uVar20 & 0xff);
  }
  if (0x1f < uVar20) {
    uVar17 = uVar11;
  }
  if (uVar17 == 0) {
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else if (0 < (int)uVar17) {
    uVar11 = 0;
    if (uVar14 < 0xd && pbVar10 != (byte *)0x0) {
      uVar11 = 0x1c1d >> uVar14;
    }
    if ((uVar14 >= 0xd || pbVar10 == (byte *)0x0) || (uVar11 & 1) == 0) {
LAB_1000bf54:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000ffbc + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000bf74(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000bf54;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000bf54;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000bf54;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010068) goto LAB_1000bf28;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000bf54;
  }
LAB_1000bf28:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_1000bd98;
}

#undef DAT_1000ffbc
#undef DAT_10010068
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf74
 */

undefined4 * recovered_1000bf74(uint param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 *unaff_lr;

  puVar5 = (undefined4 *)0x0;
  if ((param_1 != 0xff) && ((param_1 & 0xf) < 0xd)) {
    puVar7 = (ushort *)*param_2;
    puVar5 = (undefined4 *)0x0;
    switch((uintptr_t)(param_1 & 0xf)) {
    case 0:
    case 3:
    case 0xb:
      unaff_lr = *(undefined4 **)puVar7;
      *param_2 = puVar7 + 2;
      break;
    case 1:
      uVar6 = 0;
      unaff_lr = (undefined4 *)0x0;
      puVar3 = puVar7;
      do {
        *param_2 = (ushort *)((int)puVar3 + 1);
        uVar4 = *puVar3;
        unaff_lr = (undefined4 *)((uint)unaff_lr | ((int)(char)uVar4 & 0x7fU) << (uVar6 & 0xff));
        uVar6 = uVar6 + 7;
        puVar3 = (ushort *)((int)puVar3 + 1);
      } while ((char)uVar4 < 0);
      break;
    case 2:
      unaff_lr = (undefined4 *)(uint)*puVar7;
      *param_2 = puVar7 + 1;
      break;
    case 4:
    case 0xc:
      *param_2 = puVar7 + 4;
      break;
    default:
      goto switchD_1000bfa4_caseD_5;
    case 9:
      puVar5 = (undefined4 *)0x0;
      uVar6 = 0;
      puVar3 = puVar7;
      do {
        *param_2 = (ushort *)((int)puVar3 + 1);
        bVar1 = (byte)*puVar3;
        puVar5 = (undefined4 *)((uint)puVar5 | ((int)(char)bVar1 & 0x7fU) << (uVar6 & 0xff));
        uVar6 = uVar6 + 7;
        puVar3 = (ushort *)((int)puVar3 + 1);
      } while ((char)bVar1 < 0);
      unaff_lr = puVar5;
      if (0x3f < bVar1) {
        unaff_lr = (undefined4 *)((uint)puVar5 | -1 << (uVar6 & 0xff));
      }
      if (0x1f < uVar6) {
        unaff_lr = puVar5;
      }
      break;
    case 10:
      cVar2 = *(char *)((int)puVar7 + 1);
      uVar4 = *puVar7;
      *param_2 = puVar7 + 1;
      unaff_lr = (undefined4 *)(uVar4 | 0xffff0000);
      if ((uint)(int)cVar2 < 0x80000000) {
        unaff_lr = (undefined4 *)(uint)uVar4;
      }
    }
    if ((param_1 & 0x70) != 0) {
      if ((param_1 & 0x70) != 0x10) {
        return (undefined4 *)0x0;
      }
      unaff_lr = (undefined4 *)((int)unaff_lr + (int)puVar7);
    }
    if (((uint)(int)(char)param_1 < 0x80000000) || (unaff_lr == (undefined4 *)0x0)) {
      return unaff_lr;
    }
    puVar5 = (undefined4 *)*unaff_lr;
  }
switchD_1000bfa4_caseD_5:
  return puVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c108
 */

void recovered_1000c108(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c118
 */

undefined4 * recovered_1000c118(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return (undefined4 *)param_1;
}


static const unsigned char pf_literal_1000c128_DAT_1000c338[] __attribute__((aligned(16)))={0x68,0x3d,0x00,0x00};
#undef DAT_1000c338
#define DAT_1000c338 (*(int *)((uintptr_t)pf_literal_1000c128_DAT_1000c338))
static const unsigned char pf_literal_1000c128_DAT_1000c33c[] __attribute__((aligned(16)))={0x34,0x01,0x00,0x00};
#undef DAT_1000c33c
#define DAT_1000c33c (*(int *)((uintptr_t)pf_literal_1000c128_DAT_1000c33c))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define local_b6 (*(undefined2 *)(pf_stack_frame + 26))
#define local_b4 (*(void * *)(pf_stack_frame + 28))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_ac (*(undefined4 *)(pf_stack_frame + 36))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_a8 (*(int *)(pf_stack_frame + 40))
#define local_a4 (*(short *)(pf_stack_frame + 44))
#define local_a0 (*(uint * *)(pf_stack_frame + 48))
#define local_9c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_98 (*(undefined4 *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c128
 */

undefined4 * recovered_1000c128(byte *param_1)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  undefined4 *puVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  puVar3 = (undefined4 *)0x0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = (void *)0x0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000c338 + 0x1000c184;
  local_70 = DAT_1000c33c + 0x1000c194;
  recovered_1000b338(&uStack_94);
  if (param_1 != (byte *)0x0) {
    local_b6 = 2;
    local_90 = 1;
    local_98 = 0;
    local_9c = (undefined1 *)0x0;
    local_a0 = (uint *)0x0;
    piVar1 = recovered_1000db58(param_1,(int *)&local_a0);
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      local_90 = 2;
      iVar2 = recovered_1000df28(local_a0,local_9c,&local_b4,(uint *)&local_b6);
    }
    puVar3 = (undefined4 *)0x0;
    local_9c = (undefined1 *)0x0;
    recovered_1000ac94(local_a0);
    if (((iVar2 != 0) && (local_a4 == 2)) && (local_a8 != 0)) {
      local_90 = 3;
      puVar3 = recovered_1000ac3c(0x18);
      puVar3[4] = 0;
      recovered_1000ac94((void *)0x0);
      puVar3[5] = 0;
      *puVar3 = local_b4;
      puVar3[1] = local_b0;
      puVar3[2] = local_ac;
      puVar3[3] = local_a8;
      *(short *)(puVar3 + 4) = local_a4;
      local_ac = 0;
      local_b4 = (void *)0x0;
    }
  }
  local_b0 = 0;
  recovered_1000ac94(local_b4);
  recovered_1000b35c(&uStack_94);
  return puVar3;
}

#undef DAT_1000c338
#undef DAT_1000c33c
#undef DAT_10014008
#undef auStack_c0
#undef uStack_94
#undef local_b6
#undef local_b4
#undef local_b0
#undef local_ac
#undef auStack_68
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

static const unsigned char pf_literal_1000c340_DAT_1000cad0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x80,0x88,0xe5,0x40};
#undef DAT_1000cad0
#define DAT_1000cad0 (*(double *)((uintptr_t)pf_literal_1000c340_DAT_1000cad0))
static const unsigned char pf_literal_1000c340_DAT_1000cad8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x40,0x8f,0x40};
#undef DAT_1000cad8
#define DAT_1000cad8 (*(double *)((uintptr_t)pf_literal_1000c340_DAT_1000cad8))
static const unsigned char pf_literal_1000c340_DAT_1000cae0[] __attribute__((aligned(16)))={0x00,0x00,0xc0,0xff,0xff,0xff,0xdf,0x41};
#undef DAT_1000cae0
#define DAT_1000cae0 (*(double *)((uintptr_t)pf_literal_1000c340_DAT_1000cae0))
static const unsigned char pf_literal_1000c340_DAT_1000cae8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_1000cae8
#define DAT_1000cae8 (*(double *)((uintptr_t)pf_literal_1000c340_DAT_1000cae8))
static const unsigned char pf_literal_1000c340_DAT_1000caf0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0xc0,0xff,0xdf,0x40};
#undef DAT_1000caf0
#define DAT_1000caf0 (*(double *)((uintptr_t)pf_literal_1000c340_DAT_1000caf0))
static const unsigned char pf_literal_1000c340_DAT_1000caf8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xc0};
#undef DAT_1000caf8
#define DAT_1000caf8 (*(double *)((uintptr_t)pf_literal_1000c340_DAT_1000caf8))
static const unsigned char pf_literal_1000c340_DAT_1000cb00[] __attribute__((aligned(16)))={0x68,0x3b,0x00,0x00};
#undef DAT_1000cb00
#define DAT_1000cb00 (*(int *)((uintptr_t)pf_literal_1000c340_DAT_1000cb00))
static const unsigned char pf_literal_1000c340_DAT_1000cb04[] __attribute__((aligned(16)))={0xc0,0x06,0x00,0x00};
#undef DAT_1000cb04
#define DAT_1000cb04 (*(int *)((uintptr_t)pf_literal_1000c340_DAT_1000cb04))
#undef DAT_1000fd73
#define DAT_1000fd73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_bc (*(int *)(pf_stack_frame + 20))
#define local_b8 (*(int *)(pf_stack_frame + 24))
#define local_b4 (*(char * *)(pf_stack_frame + 28))
#define local_b0 (*(int *)(pf_stack_frame + 32))
#define local_ac (*(char * *)(pf_stack_frame + 36))
#define local_a8 (*(int *)(pf_stack_frame + 40))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_a0 (*(char * *)(pf_stack_frame + 48))
#define local_9c (*(int *)(pf_stack_frame + 52))
#define local_98 (*(undefined4 *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 16))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c340
 */

void * recovered_1000c340(int frequency,int duration,char *wave,char *side)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint in_fpscr;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000cb00 + 0x1000c390;
  local_70 = DAT_1000cb04 + 0x1000c3a0;
  local_b4 = side;
  recovered_1000b338(&uStack_94);
  if ((duration | frequency) < 0) {
    puVar2 = (undefined4 *)0x0;
    goto LAB_1000ca3c;
  }
  local_bc = frequency;
  local_b8 = duration;
  if (wave == (char *)0x0) {
    local_9c = 0;
    local_a0 = (char *)0x0;
    local_98 = 0;
  }
  else {
    local_98 = 0;
    local_9c = 0;
    local_a0 = (char *)0x0;
    uVar14 = 0;
    do {
      uVar12 = uVar14;
      uVar14 = uVar12 + 1;
    } while (wave[uVar12] != '\0');
    local_90 = 0xffffffff;
    recovered_1000ec60((int *)&local_a0,(int)wave,uVar12);
  }
  local_a4 = 0;
  local_a8 = 0;
  local_ac = (char *)0x0;
  local_90 = 1;
  recovered_1000ec60((int *)&local_ac,((uintptr_t)pf_module_state+0x143U),6);
  pcVar9 = local_ac;
  if (local_ac == (char *)0x0) {
    pcVar9 = &DAT_1000fd73;
  }
  pcVar6 = local_a0;
  if (local_a0 == (char *)0x0) {
    pcVar6 = &DAT_1000fd73;
  }
  iVar3 = local_9c;
  if (local_9c != local_a8) {
LAB_1000c4a4:
    recovered_1000ac94(local_ac);
    local_90 = 2;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = (char *)0x0;
    recovered_1000ec60((int *)&local_ac,((uintptr_t)pf_module_state+0x14aU),4);
    pcVar9 = local_ac;
    if (local_ac == (char *)0x0) {
      pcVar9 = &DAT_1000fd73;
    }
    pcVar6 = local_a0;
    if (local_a0 == (char *)0x0) {
      pcVar6 = &DAT_1000fd73;
    }
    iVar3 = local_9c;
    if (local_9c == local_a8) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*pcVar6 != *pcVar9) goto LAB_1000c53c;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
      recovered_1000ac94(local_ac);
      local_b0 = 1;
      goto LAB_1000c5d0;
    }
LAB_1000c53c:
    recovered_1000ac94(local_ac);
    local_90 = 3;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = (char *)0x0;
    recovered_1000ec60((int *)&local_ac,((uintptr_t)pf_module_state+0x14fU),3);
    pcVar9 = local_ac;
    if (local_ac == (char *)0x0) {
      pcVar9 = &DAT_1000fd73;
    }
    pcVar6 = local_a0;
    if (local_a0 == (char *)0x0) {
      pcVar6 = &DAT_1000fd73;
    }
    iVar3 = local_9c;
    if (local_9c == local_a8) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*pcVar6 != *pcVar9) goto LAB_1000c88c;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
      recovered_1000ac94(local_ac);
      local_b0 = 2;
      goto LAB_1000c5d0;
    }
LAB_1000c88c:
    recovered_1000ac94(local_ac);
    recovered_1000ac94(local_a0);
    puVar2 = (undefined4 *)0x0;
    goto LAB_1000ca3c;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*pcVar6 != *pcVar9) goto LAB_1000c4a4;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  recovered_1000ac94(local_ac);
  local_b0 = 0;
LAB_1000c5d0:
  recovered_1000ac94(local_a0);
  if (local_b4 == (char *)0x0) {
    local_9c = 0;
    local_a0 = (char *)0x0;
    local_98 = 0;
  }
  else {
    local_98 = 0;
    local_9c = 0;
    local_a0 = (char *)0x0;
    uVar14 = 0;
    do {
      uVar12 = uVar14;
      uVar14 = uVar12 + 1;
    } while (local_b4[uVar12] != '\0');
    local_90 = 0xffffffff;
    recovered_1000ec60((int *)&local_a0,(int)local_b4,uVar12);
  }
  local_a4 = 0;
  local_a8 = 0;
  local_ac = (char *)0x0;
  local_90 = 4;
  recovered_1000ec60((int *)&local_ac,((uintptr_t)pf_module_state+0x153U),4);
  pcVar9 = local_ac;
  if (local_ac == (char *)0x0) {
    pcVar9 = &DAT_1000fd73;
  }
  pcVar6 = local_a0;
  if (local_a0 == (char *)0x0) {
    pcVar6 = &DAT_1000fd73;
  }
  iVar3 = local_9c;
  if (local_9c == local_a8) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*pcVar6 != *pcVar9) goto LAB_1000c6c0;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    recovered_1000ac94(local_ac);
    local_b4 = (char *)0x0;
  }
  else {
LAB_1000c6c0:
    recovered_1000ac94(local_ac);
    local_90 = 5;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = (char *)0x0;
    recovered_1000ec60((int *)&local_ac,((uintptr_t)pf_module_state+0x158U),5);
    pcVar9 = local_ac;
    if (local_ac == (char *)0x0) {
      pcVar9 = &DAT_1000fd73;
    }
    pcVar6 = local_a0;
    if (local_a0 == (char *)0x0) {
      pcVar6 = &DAT_1000fd73;
    }
    iVar3 = local_9c;
    if (local_9c == local_a8) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*pcVar6 != *pcVar9) goto LAB_1000c758;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
      recovered_1000ac94(local_ac);
      local_b4 = (char *)0x1;
    }
    else {
LAB_1000c758:
      recovered_1000ac94(local_ac);
      local_90 = 6;
      local_a4 = 0;
      local_a8 = 0;
      local_ac = (char *)0x0;
      recovered_1000ec60((int *)&local_ac,((uintptr_t)pf_module_state+0x15eU),4);
      pcVar9 = local_ac;
      if (local_ac == (char *)0x0) {
        pcVar9 = &DAT_1000fd73;
      }
      pcVar6 = local_a0;
      if (local_a0 == (char *)0x0) {
        pcVar6 = &DAT_1000fd73;
      }
      iVar3 = local_9c;
      if (local_9c != local_a8) goto LAB_1000c88c;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*pcVar6 != *pcVar9) goto LAB_1000c88c;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
      recovered_1000ac94(local_ac);
      local_b4 = (char *)0x2;
    }
  }
  recovered_1000ac94(local_a0);
  local_90 = 0xffffffff;
  puVar2 = recovered_1000ac3c(0x18);
  puVar2[5] = 0;
  *puVar2 = 0;
  puVar2[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  puVar2[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  puVar2[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  puVar2[3] = 0xac44;
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 4) = 2;
  dVar15 = DAT_1000cad0;
  if (local_b8 != 0) {
    dVar21 = (double)VectorUnsignedToFloat(local_b8,(byte)(in_fpscr >> 0x16) & 3);
    dVar21 = (dVar21 * DAT_1000cad0) / DAT_1000cad8;
    uVar12 = in_fpscr & 0xfffffff | (uint)(dVar21 < DAT_1000cae0) << 0x1f;
    uVar14 = uVar12 | (uint)(NAN(dVar21) || NAN(DAT_1000cae0)) << 0x1c;
    if ((byte)(uVar12 >> 0x1f) == ((byte)(uVar14 >> 0x1c) & 1)) {
      iVar3 = 0x7fffffff;
      uVar12 = 0xfffffffe;
LAB_1000c8a8:
      local_90 = 0xffffffff;
      puVar10 = recovered_1000ac3c(iVar3 << 2);
      recovered_1000ac94((void *)0x0);
      uVar4 = 0;
      puVar2[2] = uVar12;
      *puVar2 = puVar10;
      if (uVar12 < 8) {
LAB_1000c900:
        iVar11 = uVar12 - uVar4;
        puVar13 = (undefined2 *)((int)puVar10 + uVar4 * 2);
        do {
          *puVar13 = 0;
          iVar11 = iVar11 + -1;
          puVar13 = puVar13 + 1;
        } while (iVar11 != 0);
      }
      else {
        uVar4 = uVar12 & 0xfffffff8;
        uVar7 = uVar4;
        puVar8 = puVar10;
        do {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = puVar8 + 2;
          uVar7 = uVar7 - 8;
        } while (uVar7 != 0);
        if (uVar12 != uVar4) goto LAB_1000c900;
      }
      puVar2[1] = uVar12;
    }
    else {
      local_90 = 0xffffffff;
      iVar3 = recovered_1000fd5c(SUB84(dVar21,0),(int)(pf_double_bits(dVar21) >> 0x20));
      puVar10 = (undefined8 *)0x0;
      uVar12 = iVar3 << 1;
      puVar2[1] = 0;
      if (uVar12 != 0) goto LAB_1000c8a8;
    }
    if ((0 < local_bc) && (iVar3 != 0)) {
      dVar17 = -1.0;
      puVar13 = (undefined2 *)((int)puVar10 + 2);
      iVar11 = 0;
      dVar18 = 0.75;
      pcVar9 = local_b4 + -1;
      dVar16 = (double)VectorUnsignedToFloat(local_bc,(byte)(uVar14 >> 0x16) & 3);
      dVar20 = 1.0;
      dVar21 = DAT_1000caf0;
      dVar19 = DAT_1000caf8;
      do {
        local_90 = 0xffffffff;
        dVar22 = (double)VectorUnsignedToFloat(iVar11,(byte)(uVar14 >> 0x16) & 3);
        dVar22 = (dVar16 * dVar22) / dVar15;
        dVar23 = recovered_100071cc(dVar22);
        dVar23 = dVar22 - pf_bits_double(((pf_double_bits(dVar23) & 0xffffffff00000000) +
                                  (pf_double_bits(dVar23) & 0xffffffff)));
        if (local_b0 == 2) {
          dVar22 = dVar23 + dVar23 + dVar17;
        }
        else if (local_b0 == 1) {
          local_90 = 0xffffffff;
          dVar22 = recovered_100073f8(SUB84(dVar22 * DAT_1000cae8,0),
                                      (int)(pf_double_bits(dVar22 * DAT_1000cae8) >> 0x20));
          dVar22 = pf_bits_double(((pf_double_bits(dVar22) & 0xffffffff00000000) +
                           (pf_double_bits(dVar22) & 0xffffffff)));
        }
        else {
          uVar14 = uVar14 & 0xfffffff;
          dVar22 = dVar17;
          if (dVar23 < 0.5) {
            dVar22 = dVar20;
          }
        }
        uVar1 = 0x8000;
        dVar22 = dVar22 * dVar18 * dVar21;
        uVar12 = uVar14 & 0xfffffff;
        uVar4 = uVar12 | (uint)(dVar22 == dVar19) << 0x1e;
        uVar14 = uVar4 | (uint)(dVar19 <= dVar22) << 0x1d;
        if ((bool)((byte)(uVar14 >> 0x1d) & 1) && !SUB41(uVar4 >> 0x1e,0)) {
          uVar12 = uVar12 | (uint)(dVar22 < dVar21) << 0x1f;
          uVar14 = uVar12 | (uint)(NAN(dVar22) || NAN(dVar21)) << 0x1c;
          uVar1 = 0x7fff;
          if ((byte)(uVar12 >> 0x1f) != ((byte)(uVar14 >> 0x1c) & 1)) {
            local_90 = 0xffffffff;
            lVar5 = recovered_10007c4c(dVar22);
            uVar1 = (undefined2)lVar5;
          }
        }
        iVar11 = iVar11 + 1;
        if (((uint)local_b4 & 1) == 0) {
          puVar13[-1] = uVar1;
        }
        if (pcVar9 < (char *)0x2) {
          *puVar13 = uVar1;
        }
        puVar13 = puVar13 + 2;
      } while (iVar3 != iVar11);
    }
  }
  puVar2[5] = 0;
LAB_1000ca3c:
  recovered_1000b35c(&uStack_94);
  return puVar2;
}

#undef DAT_1000cad0
#undef DAT_1000cad8
#undef DAT_1000cae0
#undef DAT_1000cae8
#undef DAT_1000caf0
#undef DAT_1000caf8
#undef DAT_1000cb00
#undef DAT_1000cb04
#undef DAT_1000fd73
#undef DAT_10014008
#undef uStack_94
#undef auStack_68
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef auStack_c0
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb08
 */

int recovered_1000cb08(void *track,void *view)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  int in_r12;

  if (view == (void *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)view + 8) = 0;
  *(undefined2 *)((int)view + 0x10) = 0;
  *(undefined4 *)((int)view + 0xc) = 0;
  *(undefined4 *)view = 0;
  *(int *)((int)view + 4) = 0;
  if (track == (void *)0x0) {
    return 0;
  }
  iVar2 = *(int *)((int)track + 4);
  if (iVar2 != 0) {
    in_r12 = *(int *)((int)track + 0xc);
  }
  if (iVar2 != 0 && in_r12 != 0) {
    sVar1 = *(short *)((int)track + 0x10);
    if (sVar1 == 0) {
      return 0;
    }
    *(int *)((int)view + 4) = iVar2;
    *(undefined4 *)((int)view + 8) = 0;
    *(undefined4 *)view = *(undefined4 *)track;
    *(short *)((int)view + 0x10) = sVar1;
    *(int *)((int)view + 0xc) = in_r12;
    return 1;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb90
 */

void recovered_1000cb90(ushort *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0 || param_2 == (byte *)0x0) {
    return;
  }
  recovered_1000cbb0(param_2,param_1);
  return;
}


static const unsigned char pf_literal_1000cbb0_DAT_1000ce28[] __attribute__((aligned(16)))={0x10,0x33,0x00,0x00};
#undef DAT_1000ce28
#define DAT_1000ce28 (*(int *)((uintptr_t)pf_literal_1000cbb0_DAT_1000ce28))
static const unsigned char pf_literal_1000cbb0_DAT_1000ce2c[] __attribute__((aligned(16)))={0x94,0x01,0x00,0x00};
#undef DAT_1000ce2c
#define DAT_1000ce2c (*(int *)((uintptr_t)pf_literal_1000cbb0_DAT_1000ce2c))
#undef DAT_1000fe61
#define DAT_1000fe61 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x129U)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define local_d4 (*(byte * *)(pf_stack_frame + 28))
#define local_d0 (*(uint *)(pf_stack_frame + 32))
#define local_cc (*(uint * *)(pf_stack_frame + 36))
#define local_c8 (*(bool *)(pf_stack_frame + 40))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_bc (*(uint * *)(pf_stack_frame + 52))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 56))
#define local_b4 (*(undefined1 *)(pf_stack_frame + 60))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_ac (*(undefined1 *)(pf_stack_frame + 68))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 72))
#define local_a4 (*(undefined1 *)(pf_stack_frame + 76))
#define local_a0 (*(char * *)(pf_stack_frame + 80))
#define local_9c (*(byte * *)(pf_stack_frame + 84))
#define local_98 (*(undefined4 *)(pf_stack_frame + 88))
#define local_90 (*(undefined4 *)(pf_stack_frame + 96))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 92))
#define local_7c (*(undefined4 *)(pf_stack_frame + 116))
#define local_78 (*(int *)(pf_stack_frame + 120))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 124))
#define local_70 (*(int *)(pf_stack_frame + 128))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 132))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbb0
 */

uint recovered_1000cbb0(byte *param_1,ushort *param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte *pbVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000ce28 + 0x1000cbf8;
  local_70 = DAT_1000ce2c + 0x1000cc08;
  recovered_1000b338(&uStack_94);
  if (param_1 == (byte *)0x0) {
    uVar2 = 0;
    goto LAB_1000cd78;
  }
  local_d0 = 0;
  local_98 = 0;
  local_9c = (byte *)0x0;
  local_a0 = (char *)0x0;
  local_90 = 1;
  local_d4 = param_1;
  iVar1 = recovered_1000ee24(param_2,(undefined8 **)&local_a0);
  if (iVar1 != 0) {
    local_a4 = 0x20;
    local_c0 = 0;
    local_c4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_b8 = 0;
    local_bc = (uint *)0x0;
    local_cc = (uint *)0x0;
    local_c8 = false;
    local_b0 = 10;
    local_90 = 2;
    local_cc = (uint *)recovered_10009954(local_d4,&DAT_1000fe61);
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = local_cc != (uint *)0x0;
    local_b8 = 0;
    local_bc = local_cc;
    if (local_cc == (uint *)0x0) {
      local_d0 = 0;
      local_c8 = false;
    }
    else {
      if ((local_a0 == (char *)0x0) && (local_9c != (byte *)0x0)) {
        uVar2 = 0;
        local_c8 = false;
      }
      else {
        local_d0 = 0;
        local_90 = 3;
        local_d4 = local_9c;
        pbVar3 = (byte *)recovered_1000a1fc(local_a0,1,(int)local_9c,local_cc);
        local_c8 = pbVar3 == local_d4;
        uVar2 = (uint)local_c8;
        if (local_cc == (uint *)0x0) goto LAB_1000cd64;
      }
      local_90 = 4;
      local_d0 = uVar2;
      recovered_10009dd8(local_cc);
    }
  }
LAB_1000cd64:
  local_9c = (byte *)0x0;
  recovered_1000ac94(local_a0);
  uVar2 = local_d0;
LAB_1000cd78:
  recovered_1000b35c(&uStack_94);
  return uVar2;
}

#undef DAT_1000ce28
#undef DAT_1000ce2c
#undef DAT_1000fe61
#undef DAT_10014008
#undef auStack_e0
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

static const unsigned char pf_literal_1000ce30_DAT_1000d270[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x40,0x8f,0x40};
#undef DAT_1000d270
#define DAT_1000d270 (*(double *)((uintptr_t)pf_literal_1000ce30_DAT_1000d270))
static const unsigned char pf_literal_1000ce30_DAT_1000d278[] __attribute__((aligned(16)))={0x00,0x00,0xc0,0xff,0xff,0xff,0xdf,0x41};
#undef DAT_1000d278
#define DAT_1000d278 (*(double *)((uintptr_t)pf_literal_1000ce30_DAT_1000d278))
static const unsigned char pf_literal_1000ce30_DAT_1000d280[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xc0};
#undef DAT_1000d280
#define DAT_1000d280 (*(double *)((uintptr_t)pf_literal_1000ce30_DAT_1000d280))
static const unsigned char pf_literal_1000ce30_DAT_1000d288[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0xc0,0xff,0xdf,0x40};
#undef DAT_1000d288
#define DAT_1000d288 (*(double *)((uintptr_t)pf_literal_1000ce30_DAT_1000d288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce30
 */

undefined4 recovered_1000ce30(int *param_1,int *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint unaff_r8;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;

  uVar2 = 0;
  if (param_1 == (int *)0x0 || param_2 == (int *)0x0) {
    return 0;
  }
  if ((int)param_4 < 0) {
    return 0;
  }
  uVar10 = (uint)*(ushort *)(param_1 + 4);
  bVar13 = uVar10 == 2;
  if (bVar13) {
    uVar10 = (uint)*(ushort *)(param_2 + 4);
  }
  if (bVar13 && uVar10 == 2) {
    iVar8 = param_1[3];
    if (iVar8 != 0) {
      uVar10 = param_2[3];
    }
    if (iVar8 != 0 && uVar10 != 0) {
      uVar10 = param_1[1];
      uVar2 = 1;
      if (1 < uVar10) {
        unaff_r8 = param_2[1];
      }
      if (1 < uVar10 && 1 < unaff_r8) {
        if (param_3 == 0 && param_4 == 0) {
          uVar3 = 0;
        }
        else {
          dVar23 = recovered_100076d0(param_3,param_4);
          dVar19 = (double)VectorUnsignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
          dVar19 = (pf_bits_double(((pf_double_bits(dVar23) & 0xffffffff00000000) +
                            (pf_double_bits(dVar23) & 0xffffffff))) * dVar19) / DAT_1000d270;
          uVar3 = in_fpscr & 0xfffffff | (uint)(dVar19 < DAT_1000d278) << 0x1f;
          in_fpscr = uVar3 | (uint)(NAN(dVar19) || NAN(DAT_1000d278)) << 0x1c;
          if ((byte)(uVar3 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            return 1;
          }
          uVar3 = recovered_1000fd5c(SUB84(dVar19,0),(int)(pf_double_bits(dVar19) >> 0x20));
        }
        uVar2 = 1;
        if (uVar3 < uVar10 >> 1) {
          dVar23 = (double)VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
          dVar19 = (double)VectorUnsignedToFloat(param_2[3],(byte)(in_fpscr >> 0x16) & 3);
          dVar19 = dVar19 / dVar23;
          dVar23 = (double)VectorUnsignedToFloat(unaff_r8 >> 1,(byte)(in_fpscr >> 0x16) & 3);
          dVar23 = recovered_100071fc(dVar23 / dVar19);
          uVar10 = (uVar10 >> 1) - uVar3;
          uVar14 = VectorFloatToUnsigned
                             ((pf_double_bits(dVar23) & 0xffffffff00000000) +
                              (pf_double_bits(dVar23) & 0xffffffff),3);
          if (uVar14 < uVar10) {
            uVar10 = uVar14;
          }
          if (uVar10 != 0) {
            dVar17 = 1.0;
            iVar11 = *param_1;
            iVar8 = uVar3 << 2;
            uVar3 = 0;
            dVar15 = 0.0;
            dVar23 = DAT_1000d280;
            dVar16 = DAT_1000d288;
            do {
              dVar18 = dVar19 * dVar15;
              uVar14 = (uint)*(ushort *)(param_2 + 4);
              sVar1 = *(short *)(iVar11 + iVar8);
              dVar20 = 0.0;
              if (((uVar14 != 0) && (in_fpscr = in_fpscr & 0xfffffff, 0.0 <= dVar18)) &&
                 (uVar12 = param_2[1], uVar12 != 0)) {
                uVar4 = recovered_10003d40(uVar12,uVar14);
                dVar20 = 0.0;
                if (uVar14 <= uVar12) {
                  dVar20 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
                  uVar14 = in_fpscr & 0xfffffff | (uint)(dVar18 < dVar20) << 0x1f;
                  in_fpscr = uVar14 | (uint)(NAN(dVar18) || NAN(dVar20)) << 0x1c;
                  dVar20 = 0.0;
                  if ((byte)(uVar14 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                    dVar20 = recovered_100071cc(dVar18);
                    iVar11 = VectorFloatToUnsigned
                                       ((pf_double_bits(dVar20) & 0xffffffff00000000) +
                                        (pf_double_bits(dVar20) & 0xffffffff),3);
                    dVar21 = (double)VectorUnsignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
                    uVar14 = iVar11 + 1U;
                    if (uVar4 - 1 < iVar11 + 1U) {
                      uVar14 = uVar4 - 1;
                    }
                    dVar20 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                        (uint)*(ushort *)
                                                                               (param_2 + 4) *
                                                                        iVar11 * 2),
                                                         (byte)(in_fpscr >> 0x16) & 3);
                    dVar22 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                        uVar14 * *(ushort *)
                                                                                  (param_2 + 4) * 2)
                                                         ,(byte)(in_fpscr >> 0x16) & 3);
                    dVar20 = dVar20 + (dVar22 - dVar20) * (dVar18 - dVar21);
                  }
                }
              }
              uVar7 = 0x8000;
              dVar21 = (double)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
              dVar20 = dVar20 + dVar21;
              uVar12 = in_fpscr & 0xfffffff | (uint)(dVar20 == dVar23) << 0x1e;
              uVar14 = uVar12 | (uint)(dVar23 <= dVar20) << 0x1d;
              if ((bool)((byte)(uVar14 >> 0x1d) & 1) && !SUB41(uVar12 >> 0x1e,0)) {
                uVar12 = in_fpscr & 0xfffffff | (uint)(dVar20 < dVar16) << 0x1f;
                uVar14 = uVar12 | (uint)(NAN(dVar20) || NAN(dVar16)) << 0x1c;
                uVar7 = 0x7fff;
                if ((byte)(uVar12 >> 0x1f) != ((byte)(uVar14 >> 0x1c) & 1)) {
                  lVar5 = recovered_10007c4c(dVar20);
                  uVar7 = (undefined2)lVar5;
                }
              }
              iVar11 = *param_1;
              dVar20 = 0.0;
              *(undefined2 *)(iVar11 + iVar8) = uVar7;
              uVar12 = (uint)*(ushort *)(param_2 + 4);
              sVar1 = ((undefined2 *)(iVar11 + iVar8))[1];
              if (((uVar12 != 0) && (uVar4 = param_2[1], uVar4 != 0 && uVar12 != 1)) &&
                 ((uVar14 = uVar14 & 0xfffffff, 0.0 <= dVar18 &&
                  (uVar6 = recovered_10003d40(uVar4,uVar12), uVar12 <= uVar4)))) {
                dVar21 = (double)VectorUnsignedToFloat(uVar6,(byte)(uVar14 >> 0x16) & 3);
                uVar12 = uVar14 & 0xfffffff | (uint)(dVar18 < dVar21) << 0x1f;
                uVar14 = uVar12 | (uint)(NAN(dVar18) || NAN(dVar21)) << 0x1c;
                if ((byte)(uVar12 >> 0x1f) != ((byte)(uVar14 >> 0x1c) & 1)) {
                  dVar20 = recovered_100071cc(dVar18);
                  iVar11 = VectorFloatToUnsigned
                                     ((pf_double_bits(dVar20) & 0xffffffff00000000) +
                                      (pf_double_bits(dVar20) & 0xffffffff),3);
                  dVar21 = (double)VectorUnsignedToFloat(iVar11,(byte)(uVar14 >> 0x16) & 3);
                  uVar12 = iVar11 + 1U;
                  if (uVar6 - 1 < iVar11 + 1U) {
                    uVar12 = uVar6 - 1;
                  }
                  dVar20 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                       (uint)*(ushort *)
                                                                              (param_2 + 4) * iVar11
                                                                       * 2 + 2),
                                                       (byte)(uVar14 >> 0x16) & 3);
                  dVar22 = (double)VectorSignedToFloat((int)*(short *)(*param_2 +
                                                                       uVar12 * *(ushort *)
                                                                                 (param_2 + 4) * 2 +
                                                                      2),(byte)(uVar14 >> 0x16) & 3)
                  ;
                  dVar20 = dVar20 + (dVar22 - dVar20) * (dVar18 - dVar21);
                }
              }
              uVar7 = 0x8000;
              dVar18 = (double)VectorSignedToFloat((int)sVar1,(byte)(uVar14 >> 0x16) & 3);
              dVar20 = dVar20 + dVar18;
              uVar12 = uVar14 & 0xfffffff | (uint)(dVar20 == dVar23) << 0x1e;
              in_fpscr = uVar12 | (uint)(dVar23 <= dVar20) << 0x1d;
              if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar12 >> 0x1e,0)) {
                uVar14 = uVar14 & 0xfffffff | (uint)(dVar20 < dVar16) << 0x1f;
                in_fpscr = uVar14 | (uint)(NAN(dVar20) || NAN(dVar16)) << 0x1c;
                uVar7 = 0x7fff;
                if ((byte)(uVar14 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                  lVar5 = recovered_10007c4c(dVar20);
                  uVar7 = (undefined2)lVar5;
                }
              }
              dVar15 = dVar15 + dVar17;
              iVar11 = *param_1;
              uVar3 = uVar3 + 1;
              iVar9 = iVar11 + iVar8;
              iVar8 = iVar8 + 4;
              *(undefined2 *)(iVar9 + 2) = uVar7;
            } while (uVar3 < uVar10);
          }
          uVar2 = 1;
          param_1[5] = 0;
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_1000d270
#undef DAT_1000d278
#undef DAT_1000d280
#undef DAT_1000d288

static const unsigned char pf_literal_1000d290_DAT_1000d540[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x40,0x8f,0x40};
#undef DAT_1000d540
#define DAT_1000d540 (*(double *)((uintptr_t)pf_literal_1000d290_DAT_1000d540))
static const unsigned char pf_literal_1000d290_DAT_1000d548[] __attribute__((aligned(16)))={0x00,0x00,0xc0,0xff,0xff,0xff,0xdf,0x41};
#undef DAT_1000d548
#define DAT_1000d548 (*(double *)((uintptr_t)pf_literal_1000d290_DAT_1000d548))
static const unsigned char pf_literal_1000d290_DAT_1000d550[] __attribute__((aligned(16)))={0x3c,0x2c,0x00,0x00};
#undef DAT_1000d550
#define DAT_1000d550 (*(int *)((uintptr_t)pf_literal_1000d290_DAT_1000d550))
static const unsigned char pf_literal_1000d290_DAT_1000d554[] __attribute__((aligned(16)))={0x04,0x02,0x00,0x00};
#undef DAT_1000d554
#define DAT_1000d554 (*(int *)((uintptr_t)pf_literal_1000d290_DAT_1000d554))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define local_a8 (*(void * *)(pf_stack_frame + 24))
#define local_a4 (*(void ** *)(pf_stack_frame + 28))
#define local_a0 (*(void * *)(pf_stack_frame + 32))
#define local_9c (*(void * *)(pf_stack_frame + 36))
#define local_98 (*(void * *)(pf_stack_frame + 40))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d290
 */

undefined4 recovered_1000d290(void **param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void **ppvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000d550 + 0x1000d2e0;
  local_70 = DAT_1000d554 + 0x1000d2f0;
  recovered_1000b338(&uStack_94);
  uVar6 = 0;
  if ((((int)(param_5 - (param_3 + (param_4 < param_2))) < 0 ==
        (SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2)))) &&
      (param_1 != (void **)0x0)) && (pvVar3 = (void *)(param_5 | param_3), -1 < (int)pvVar3)) {
    uVar5 = (uint)*(ushort *)(param_1 + 4);
    if (uVar5 != 0) {
      pvVar3 = param_1[3];
      local_a8 = pvVar3;
    }
    if (uVar5 != 0 && pvVar3 != (void *)0x0) {
      local_a4 = param_1;
      uVar4 = recovered_10003d40((uint)param_1[1],uVar5);
      uVar5 = 0;
      if ((int)param_3 < (int)(uint)(param_2 == 0)) {
        uVar7 = 0;
        pvVar3 = local_a8;
      }
      else {
        dVar9 = recovered_100076d0(param_2,param_3);
        uVar7 = 0x7fffffff;
        dVar8 = (double)VectorUnsignedToFloat(local_a8,(byte)(in_fpscr >> 0x16) & 3);
        dVar8 = (pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)))
                * dVar8) / DAT_1000d540;
        uVar1 = in_fpscr & 0xfffffff | (uint)(dVar8 < DAT_1000d548) << 0x1f;
        in_fpscr = uVar1 | (uint)(NAN(dVar8) || NAN(DAT_1000d548)) << 0x1c;
        pvVar3 = local_a8;
        if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
          local_90 = 0xffffffff;
          uVar7 = recovered_1000fd5c(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20));
          pvVar3 = local_a4[3];
        }
      }
      if (((int)(uint)(param_4 == 0) <= (int)param_5) && (pvVar3 != (void *)0x0)) {
        dVar9 = recovered_100076d0(param_4,param_5);
        uVar5 = 0x7fffffff;
        dVar8 = (double)VectorUnsignedToFloat(pvVar3,(byte)(in_fpscr >> 0x16) & 3);
        dVar8 = (pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)))
                * dVar8) / DAT_1000d540;
        if (dVar8 < DAT_1000d548) {
          local_90 = 0xffffffff;
          uVar5 = recovered_1000fd5c(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20));
        }
      }
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      local_90 = 1;
      local_98 = (void *)0x0;
      local_a0 = (void *)0x0;
      local_9c = (void *)0x0;
      recovered_1000faa8(&local_a0,0,
                         (undefined8 *)((int)*local_a4 + uVar7 * *(ushort *)(local_a4 + 4) * 2),
                         (undefined8 *)((int)*local_a4 + uVar5 * *(ushort *)(local_a4 + 4) * 2));
      ppvVar2 = local_a4;
      if (&local_a0 != local_a4) {
        local_a4[1] = (void *)0x0;
        recovered_1000ac94(*local_a4);
        *ppvVar2 = local_a0;
        ppvVar2[1] = local_9c;
        ppvVar2[2] = local_98;
        local_98 = (void *)0x0;
        local_a0 = (void *)0x0;
      }
      ppvVar2[5] = (void *)0x0;
      local_9c = (void *)0x0;
      recovered_1000ac94(local_a0);
      uVar6 = 1;
    }
  }
  recovered_1000b35c(&uStack_94);
  return uVar6;
}

#undef DAT_1000d540
#undef DAT_1000d548
#undef DAT_1000d550
#undef DAT_1000d554
#undef DAT_10014008
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef auStack_b0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#define uStack_30 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_24 (*(undefined2 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d558
 */

int recovered_1000d558(void *track,double factor)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  int iVar3;
  double dVar4;

  iVar3 = 0;
  if (track != (void *)0x0) {
    dVar4 = factor;
    iVar1 = recovered_1000b6e0(factor);
    if ((0.0 < dVar4) && (iVar1 != 0)) {
      iVar3 = 1;
      uVar2 = extraout_r1;
      if (dVar4 != 1.0) {
        uVar2 = (uint)*(ushort *)((int)track + 0x10);
      }
      if ((dVar4 != 1.0 && uVar2 != 0) && (uVar2 <= *(uint *)((int)track + 4))) {
        uVar2 = recovered_10003d40(*(uint *)((int)track + 4),uVar2);
        recovered_1000d630(SUB84(dVar4,0),(int)(pf_double_bits(dVar4) >> 0x20),&local_34,track,uVar2);
        *(undefined4 *)((int)track + 4) = 0;
        recovered_1000ac94(*(void **)track);
        *(undefined4 *)track = local_34;
        *(undefined4 *)((int)track + 4) = uStack_30;
        *(undefined4 *)((int)track + 8) = uStack_2c;
        *(undefined4 *)((int)track + 0xc) = uStack_28;
        *(undefined2 *)((int)track + 0x10) = local_24;
        recovered_1000ac94((void *)0x0);
        *(undefined4 *)((int)track + 0x14) = 0;
      }
    }
  }
  return iVar3;
}

#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef local_34
#undef local_24

static const unsigned char pf_literal_1000d630_DAT_1000d9e8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xc0};
#undef DAT_1000d9e8
#define DAT_1000d9e8 (*(double *)((uintptr_t)pf_literal_1000d630_DAT_1000d9e8))
static const unsigned char pf_literal_1000d630_DAT_1000d9f0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0xc0,0xff,0xdf,0x40};
#undef DAT_1000d9f0
#define DAT_1000d9f0 (*(double *)((uintptr_t)pf_literal_1000d630_DAT_1000d9f0))
static const unsigned char pf_literal_1000d630_DAT_1000d9f8[] __attribute__((aligned(16)))={0x88,0x28,0x00,0x00};
#undef DAT_1000d9f8
#define DAT_1000d9f8 (*(int *)((uintptr_t)pf_literal_1000d630_DAT_1000d9f8))
static const unsigned char pf_literal_1000d630_DAT_1000d9fc[] __attribute__((aligned(16)))={0xb8,0x02,0x00,0x00};
#undef DAT_1000d9fc
#define DAT_1000d9fc (*(int *)((uintptr_t)pf_literal_1000d630_DAT_1000d9fc))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define local_a0 (*(uint *)(pf_stack_frame + 48))
#define local_9c (*(undefined4 * *)(pf_stack_frame + 52))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define local_c0 (*(int *)(pf_stack_frame + 16))
#define local_bc (*(int *)(pf_stack_frame + 20))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 24))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_b0 (*(uint *)(pf_stack_frame + 32))
#define local_ac (*(int *)(pf_stack_frame + 36))
#define local_a8 (*(uint *)(pf_stack_frame + 40))
#define local_a4 (*(int * *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d630
 */

void recovered_1000d630(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4,
                       int param_5)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint in_fpscr;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  puVar8 = (undefined8 *)0x0;
  dVar12 = pf_bits_double(CONCAT44(param_2,param_1));
  *param_3 = 0;
  param_3[1] = 0;
  local_7c = DAT_10014008;
  iVar11 = param_4[3];
  uVar1 = *(ushort *)(param_4 + 4);
  uVar10 = (uint)uVar1;
  local_78 = DAT_1000d9f8 + 0x1000d69c;
  param_3[2] = 0;
  param_3[3] = iVar11;
  *(ushort *)(param_3 + 4) = uVar1;
  local_70 = DAT_1000d9fc + 0x1000d6c4;
  local_a4 = param_4;
  local_9c = param_3;
  recovered_1000b338(&uStack_94);
  uVar5 = uVar10 * param_5;
  local_c0 = param_5;
  local_a8 = uVar10;
  if (uVar5 == 0) goto LAB_1000d778;
  local_90 = 1;
  local_a0 = uVar5;
  puVar8 = recovered_1000ac3c(uVar5 * 2);
  recovered_1000ac94((void *)0x0);
  *local_9c = puVar8;
  local_9c[2] = local_a0;
  uVar10 = 0;
  if (local_a0 < 8) {
LAB_1000d750:
    iVar11 = local_a0 - uVar10;
    puVar6 = (undefined2 *)((int)puVar8 + uVar10 * 2);
    do {
      *puVar6 = 0;
      iVar11 = iVar11 + -1;
      puVar6 = puVar6 + 1;
    } while (iVar11 != 0);
  }
  else {
    uVar10 = local_a0 & 0xfffffff8;
    uVar5 = uVar10;
    puVar7 = puVar8;
    do {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      uVar5 = uVar5 - 8;
    } while (uVar5 != 0);
    if (local_a0 != uVar10) goto LAB_1000d750;
  }
  local_9c[1] = local_a0;
  iVar11 = local_a4[3];
  uVar10 = (uint)*(ushort *)(local_a4 + 4);
LAB_1000d778:
  uVar9 = in_fpscr & 0xfffffff | (uint)(dVar12 == 0.0) << 0x1e;
  uVar5 = uVar9 | (uint)(0.0 <= dVar12) << 0x1d;
  local_98 = puVar8;
  if (((bool)((byte)(uVar5 >> 0x1d) & 1) && !SUB41(uVar9 >> 0x1e,0)) && (uVar10 != 0 && iVar11 != 0)
     ) {
    iVar11 = 0;
    if (local_a4[1] != 0) {
      iVar11 = local_c0;
    }
    if (local_a4[1] != 0 && iVar11 != 0) {
      local_bc = 0;
      dVar13 = DAT_1000d9e8;
      dVar14 = DAT_1000d9f0;
      do {
        if (local_a8 != 0) {
          uVar10 = 0;
          dVar16 = (double)VectorUnsignedToFloat(local_bc,(byte)(uVar5 >> 0x16) & 3);
          local_ac = (int)local_98 + local_bc * (uintptr_t)local_a8 * 2;
          dVar16 = dVar16 * dVar12;
          dVar17 = dVar16;
          do {
            local_b8 = (undefined4)(pf_double_bits(dVar17) >> 0x20);
            local_b4 = SUB84(dVar17,0);
            dVar15 = 0.0;
            uVar9 = (uint)*(ushort *)(local_a4 + 4);
            local_a0 = uVar10;
            if ((((uVar9 == 0) || (uVar9 <= uVar10)) || (uVar5 = uVar5 & 0xfffffff, dVar16 < 0.0))
               || (uVar10 = local_a4[1], uVar10 == 0)) {
LAB_1000d964:
              local_b8 = (undefined4)(pf_double_bits(dVar17) >> 0x20);
              local_b4 = SUB84(dVar17,0);
              local_90 = 3;
              lVar4 = recovered_10007c4c(dVar15);
              uVar2 = (undefined2)lVar4;
            }
            else {
              uVar3 = recovered_10003d40(uVar10,uVar9);
              dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
              if (uVar10 < uVar9) goto LAB_1000d964;
              dVar17 = (double)VectorUnsignedToFloat(uVar3,(byte)(uVar5 >> 0x16) & 3);
              uVar10 = uVar5 & 0xfffffff | (uint)(dVar16 < dVar17) << 0x1f;
              uVar5 = uVar10 | (uint)(NAN(dVar16) || NAN(dVar17)) << 0x1c;
              dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
              if ((byte)(uVar10 >> 0x1f) == ((byte)(uVar5 >> 0x1c) & 1)) goto LAB_1000d964;
              local_90 = 2;
              local_b0 = uVar3;
              dVar15 = recovered_100071cc(pf_bits_double(CONCAT44(local_b8,local_b4)));
              dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
              iVar11 = VectorFloatToUnsigned
                                 ((pf_double_bits(dVar15) & 0xffffffff00000000) +
                                  (pf_double_bits(dVar15) & 0xffffffff),3);
              dVar18 = (double)VectorUnsignedToFloat(iVar11,(byte)(uVar5 >> 0x16) & 3);
              uVar10 = iVar11 + 1U;
              if (local_b0 - 1 < iVar11 + 1U) {
                uVar10 = local_b0 - 1;
              }
              dVar15 = (double)VectorSignedToFloat((int)*(short *)(*local_a4 +
                                                                   (uint)*(ushort *)(local_a4 + 4) *
                                                                   iVar11 * 2 + local_a0 * 2),
                                                   (byte)(uVar5 >> 0x16) & 3);
              uVar2 = 0x8000;
              dVar19 = (double)VectorSignedToFloat((int)*(short *)(*local_a4 +
                                                                   uVar10 * *(ushort *)
                                                                             (local_a4 + 4) * 2 +
                                                                  local_a0 * 2),
                                                   (byte)(uVar5 >> 0x16) & 3);
              dVar15 = dVar15 + (dVar19 - dVar15) * (dVar16 - dVar18);
              uVar10 = uVar5 & 0xfffffff;
              uVar9 = uVar10 | (uint)(dVar15 == dVar13) << 0x1e;
              uVar5 = uVar9 | (uint)(dVar13 <= dVar15) << 0x1d;
              if ((bool)((byte)(uVar5 >> 0x1d) & 1) && !SUB41(uVar9 >> 0x1e,0)) {
                uVar10 = uVar10 | (uint)(dVar15 < dVar14) << 0x1f;
                uVar5 = uVar10 | (uint)(NAN(dVar15) || NAN(dVar14)) << 0x1c;
                uVar2 = 0x7fff;
                if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar5 >> 0x1c) & 1)) goto LAB_1000d964;
              }
            }
            dVar17 = pf_bits_double(CONCAT44(local_b8,local_b4));
            uVar10 = local_a0 + 1;
            *(undefined2 *)(local_ac + local_a0 * 2) = uVar2;
          } while (uVar10 != local_a8);
        }
        local_bc = local_bc + 1;
      } while (local_bc != local_c0);
    }
  }
  recovered_1000b35c(&uStack_94);
  return;
}

#undef DAT_1000d9e8
#undef DAT_1000d9f0
#undef DAT_1000d9f8
#undef DAT_1000d9fc
#undef DAT_10014008
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef local_c0
#undef local_bc
#undef auStack_68
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4

#define uStack_30 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_24 (*(undefined2 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da00
 */

int recovered_1000da00(void *track,double factor)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  double dVar4;
  double dVar5;
  longlong lVar6;

  iVar3 = 0;
  if (track != (void *)0x0) {
    dVar4 = factor;
    iVar1 = recovered_1000b6e0(factor);
    in_fpscr = in_fpscr & 0xfffffff;
    if ((0.0 < dVar4) && (iVar1 != 0)) {
      iVar3 = 1;
      uVar2 = extraout_r1;
      if (dVar4 != 1.0) {
        uVar2 = (uint)*(ushort *)((int)track + 0x10);
      }
      if ((dVar4 != 1.0 && uVar2 != 0) && (uVar2 <= *(uint *)((int)track + 4))) {
        uVar2 = recovered_10003d40(*(uint *)((int)track + 4),uVar2);
        iVar1 = 0;
        dVar5 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        if (0.0 < dVar5 / dVar4) {
          lVar6 = recovered_100073c8(dVar5 / dVar4);
          iVar1 = (int)lVar6;
        }
        recovered_1000d630(SUB84(dVar4,0),(int)(pf_double_bits(dVar4) >> 0x20),&local_34,track,iVar1);
        *(undefined4 *)((int)track + 4) = 0;
        recovered_1000ac94(*(void **)track);
        *(undefined4 *)track = local_34;
        *(undefined4 *)((int)track + 4) = uStack_30;
        *(undefined4 *)((int)track + 8) = uStack_2c;
        *(undefined4 *)((int)track + 0xc) = uStack_28;
        *(undefined2 *)((int)track + 0x10) = local_24;
        recovered_1000ac94((void *)0x0);
        *(undefined4 *)((int)track + 0x14) = 0;
      }
    }
  }
  return iVar3;
}

#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef local_34
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dafc
 */

undefined4 recovered_1000dafc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db04
 */

undefined8 recovered_1000db04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db10
 */

undefined8 recovered_1000db10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db1c
 */

void recovered_1000db1c(void *track)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (track == (void *)0x0) {
    return;
  }
  *(undefined4 *)((int)track + 4) = 0;
  *(undefined4 *)((int)track + 0x14) = 0;
  recovered_1000ac94(*(void **)track);
  recovered_1000ac94(track);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db54
 */

void recovered_1000db54(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000db58_DAT_1000df20[] __attribute__((aligned(16)))={0x90,0x23,0x00,0x00};
#undef DAT_1000df20
#define DAT_1000df20 (*(int *)((uintptr_t)pf_literal_1000db58_DAT_1000df20))
static const unsigned char pf_literal_1000db58_DAT_1000df24[] __attribute__((aligned(16)))={0xf0,0x02,0x00,0x00};
#undef DAT_1000df24
#define DAT_1000df24 (*(int *)((uintptr_t)pf_literal_1000db58_DAT_1000df24))
#undef DAT_1000fe64
#define DAT_1000fe64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define local_70 (*(int *)(pf_stack_frame + 112))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 116))
#define auStack_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 76))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 120))
#define local_c4 (*(uint *)(pf_stack_frame + 28))
#define local_c0 (*(uint * *)(pf_stack_frame + 32))
#define local_bc (*(int * *)(pf_stack_frame + 36))
#define local_b8 (*(uint * *)(pf_stack_frame + 40))
#define local_b4 (*(undefined1 *)(pf_stack_frame + 44))
#define local_b0 (*(uint (*)[44])(pf_stack_frame + 48))
#define local_a8 (*(uint * *)(pf_stack_frame + 56))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_9c (*(undefined4 *)(pf_stack_frame + 68))
#define local_98 (*(undefined4 *)(pf_stack_frame + 72))
#define local_90 (*(undefined4 *)(pf_stack_frame + 80))
#define local_7c (*(undefined4 *)(pf_stack_frame + 100))
#define local_78 (*(int *)(pf_stack_frame + 104))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db58
 */

int * recovered_1000db58(byte *param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *pointer;
  int *piVar4;
  uint uVar5;
  uint extraout_r3 = 0;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000df20 + 0x1000dba0;
  local_70 = DAT_1000df24 + 0x1000dbb0;
  recovered_1000b338(&uStack_94);
  piVar8 = (int *)0x0;
  if (param_1 == (byte *)0x0 || param_2 == (int *)0x0) goto LAB_1000dbd0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  local_b4 = 0;
  local_90 = 1;
  local_bc = param_2;
  local_b8 = (uint *)recovered_10009954(param_1,&DAT_1000fe64);
  local_c0 = local_b0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  local_b4 = local_b8 != (uint *)0x0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  piVar8 = (int *)0x0;
  local_a8 = local_b8;
  if (local_b8 == (uint *)0x0) goto LAB_1000dbd0;
  local_90 = 2;
  iVar1 = recovered_1000a374((int *)local_b8,0,2);
  local_b4 = iVar1 == 0;
  piVar8 = (int *)0x0;
  if (local_b8 == (uint *)0x0) goto LAB_1000dbd0;
  local_90 = 3;
  uVar2 = recovered_1000a424((int)local_b8);
  if ((int)uVar2 < 0) {
    local_b4 = 0;
LAB_1000dd1c:
    piVar4 = (int *)0x0;
    piVar8 = piVar4;
    if (local_b8 == (uint *)0x0) goto LAB_1000dbd0;
  }
  else {
    local_b4 = 1;
    if (uVar2 == 0) goto LAB_1000dd1c;
    local_c4 = uVar2;
    if (local_b8 == (uint *)0x0) {
      local_b4 = false;
    }
    else {
      local_90 = 4;
      iVar1 = recovered_1000a374((int *)local_b8,0,0);
      local_b4 = iVar1 == 0;
    }
    uVar2 = local_bc[1];
    uVar12 = local_c4;
    piVar8 = local_bc;
    if (local_c4 < uVar2) {
      local_bc[1] = local_c4;
    }
    else if (uVar2 < local_c4) {
      if ((uint)local_bc[2] < local_c4) {
        local_90 = 5;
        puVar3 = recovered_1000ac3c(local_c4);
        piVar8 = local_bc;
        uVar12 = local_c4;
        uVar2 = local_bc[1];
        pointer = (undefined8 *)*local_bc;
        if (uVar2 != 0) {
          bVar13 = uVar2 == 0x10;
          uVar5 = 0;
          uVar6 = extraout_r3;
          if (0xf < uVar2) {
            uVar6 = (int)puVar3 - (int)pointer;
            bVar13 = uVar6 == 0xf;
          }
          if ((0xf < uVar2 && 0xe < uVar6) && !bVar13) {
            uVar5 = uVar2 & 0xfffffff0;
            uVar6 = uVar5;
            puVar9 = pointer;
            puVar11 = puVar3;
            do {
              uVar14 = *puVar9;
              uVar15 = puVar9[1];
              puVar9 = puVar9 + 2;
              uVar6 = uVar6 - 0x10;
              *puVar11 = uVar14;
              puVar11[1] = uVar15;
              puVar11 = puVar11 + 2;
            } while (uVar6 != 0);
            if (uVar2 == uVar5) goto LAB_1000dde0;
          }
          iVar1 = uVar2 - uVar5;
          puVar7 = (undefined1 *)((int)puVar3 + uVar5);
          puVar10 = (undefined1 *)((int)pointer + uVar5);
          do {
            iVar1 = iVar1 + -1;
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar1 != 0);
        }
LAB_1000dde0:
        recovered_1000ac94(pointer);
        uVar2 = piVar8[1];
        piVar8[2] = uVar12;
        *piVar8 = (int)puVar3;
      }
      while (uVar2 < uVar12) {
        *(undefined1 *)(*piVar8 + uVar2) = 0;
        uVar2 = piVar8[1] + 1;
        piVar8[1] = uVar2;
      }
    }
    if ((undefined8 *)*piVar8 == (undefined8 *)0x0 || local_b8 == (uint *)0x0) {
      piVar4 = (int *)0x0;
      uVar2 = 0;
    }
    else {
      local_90 = 6;
      uVar2 = recovered_10009ed0((undefined8 *)*piVar8,1,uVar12,(int *)local_b8);
      piVar4 = (int *)(uint)(uVar2 == local_c4);
    }
    local_b4 = SUB41(piVar4,0);
    *local_c0 = uVar2;
    local_c0[1] = 0;
    piVar8 = (int *)0x0;
    if (local_b8 == (uint *)0x0) goto LAB_1000dbd0;
  }
  local_90 = 7;
  local_bc = piVar4;
  recovered_10009dd8(local_b8);
  piVar8 = local_bc;
LAB_1000dbd0:
  recovered_1000b35c(&uStack_94);
  return piVar8;
}

#undef DAT_1000df20
#undef DAT_1000df24
#undef DAT_1000fe64
#undef DAT_10014008
#undef local_70
#undef local_6c
#undef auStack_d0
#undef uStack_94
#undef auStack_68
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74

static const unsigned char pf_literal_1000df28_DAT_1000e6f8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0xc0,0xff,0xdf,0x40};
#undef DAT_1000e6f8
#define DAT_1000e6f8 (*(uint64_t *)((uintptr_t)pf_literal_1000df28_DAT_1000e6f8))
static const unsigned char pf_literal_1000df28_DAT_1000e700[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x40};
#undef DAT_1000e700
#define DAT_1000e700 (*(uint64_t *)((uintptr_t)pf_literal_1000df28_DAT_1000e700))
static const unsigned char pf_literal_1000df28_DAT_1000e708[] __attribute__((aligned(16)))={0xd4,0x1f,0x00,0x00};
#undef DAT_1000e708
#define DAT_1000e708 (*(int *)((uintptr_t)pf_literal_1000df28_DAT_1000e708))
static const unsigned char pf_literal_1000df28_DAT_1000e70c[] __attribute__((aligned(16)))={0xec,0x06,0x00,0x00};
#undef DAT_1000e70c
#define DAT_1000e70c (*(int *)((uintptr_t)pf_literal_1000df28_DAT_1000e70c))
#undef DAT_1000fe67
#define DAT_1000fe67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_1000fe6c
#define DAT_1000fe6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1000fe71
#define DAT_1000fe71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef DAT_1000fe76
#define DAT_1000fe76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
#define local_f8 (*(uint * *)(pf_stack_frame + 24))
#define local_f4 (*(void ** *)(pf_stack_frame + 28))
#define local_f0 (*(uint *)(pf_stack_frame + 32))
#define local_ec (*(int *)(pf_stack_frame + 36))
#define local_e8 (*(uint *)(pf_stack_frame + 40))
#define local_e4 (*(uint * *)(pf_stack_frame + 44))
#define local_e0 (*(uint *)(pf_stack_frame + 48))
#define local_dc (*(uint * *)(pf_stack_frame + 52))
#define local_d8 (*(uint * *)(pf_stack_frame + 56))
#define local_d4 (*(uint *)(pf_stack_frame + 60))
#define local_d0 (*(uint * *)(pf_stack_frame + 64))
#define local_cc (*(uint * *)(pf_stack_frame + 68))
#define local_c8 (*(uint * *)(pf_stack_frame + 72))
#define local_c4 (*(uint *)(pf_stack_frame + 76))
#define local_c0 (*(uint * *)(pf_stack_frame + 80))
#define local_bc (*(uint * *)(pf_stack_frame + 84))
#define local_b8 (*(uint *)(pf_stack_frame + 88))
#define local_b4 (*(uint *)(pf_stack_frame + 92))
#define local_b0 (*(uint *)(pf_stack_frame + 96))
#define local_ac (*(uint * *)(pf_stack_frame + 100))
#define local_a8 (*(void * *)(pf_stack_frame + 104))
#define local_a4 (*(void * *)(pf_stack_frame + 108))
#define local_a0 (*(void * *)(pf_stack_frame + 112))
#define local_9c (*(uint *)(pf_stack_frame + 116))
#define local_98 (*(undefined2 *)(pf_stack_frame + 120))
#define local_90 (*(undefined4 *)(pf_stack_frame + 128))
#define local_7c (*(undefined4 *)(pf_stack_frame + 148))
#define local_78 (*(int *)(pf_stack_frame + 152))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 156))
#define local_70 (*(int *)(pf_stack_frame + 160))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 164))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 124))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df28
 */

undefined4 recovered_1000df28(uint *param_1,undefined1 *param_2,void **param_3,uint *param_4)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  void **ppvVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  double *pdVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  uint in_fpscr;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  local_7c = DAT_10014008;
  local_78 = DAT_1000e708 + 0x1000df78;
  local_70 = DAT_1000e70c + 0x1000df88;
  recovered_1000b338(&uStack_94);
  uVar17 = 0;
  if (((undefined1 *)0xb < param_2) && (param_1 != (uint *)0x0 && param_3 != (void **)0x0)) {
    local_90 = 0xffffffff;
    iVar4 = recovered_1000669c(param_1,(uint *)&DAT_1000fe67,4);
    if (iVar4 == 0) {
      local_90 = 0xffffffff;
      iVar4 = recovered_1000669c(param_1 + 2,(uint *)&DAT_1000fe6c,4);
      if (iVar4 == 0) {
        if (param_2 < (undefined1 *)0x14) {
          uVar5 = 1;
          local_e0 = 0;
          local_d0 = (uint *)0x0;
          local_c4 = 0;
          uVar10 = 0;
          puVar13 = (uint *)0x0;
          uVar15 = 0;
        }
        else {
          puVar6 = &PrefetchAbort;
          puVar14 = &NotUsed;
          local_c4 = 0;
          local_b0 = 0;
          local_b4 = 0;
          local_d0 = (uint *)0x0;
          local_ac = (uint *)0x0;
          local_b8 = 0;
          local_e0 = 0;
          local_f4 = param_3;
          local_bc = param_4;
          do {
            puVar12 = (uint *)((int)param_1 + (int)puVar6);
            puVar13 = (uint *)puVar12[1];
            if (param_2 < (undefined1 *)((int)puVar13 + (int)puVar14)) goto LAB_1000e1c4;
            local_90 = 0xffffffff;
            iVar4 = recovered_1000669c(puVar12,(uint *)&DAT_1000fe71,4);
            if (iVar4 != 0) {
              local_90 = 0xffffffff;
              iVar4 = recovered_1000669c(puVar12,(uint *)&DAT_1000fe76,4);
              if (iVar4 == 0 && local_d0 == (uint *)0x0) {
                local_d0 = (uint *)((int)param_1 + (int)puVar14);
                local_ac = puVar13;
              }
              goto LAB_1000e0a4;
            }
            if (puVar13 < &DataAbort) {
LAB_1000e1c4:
              uVar17 = 0;
              goto LAB_1000dfac;
            }
            puVar9 = (ushort *)((int)param_1 + (int)puVar14);
            uVar2 = *puVar9;
            uVar15 = (uint)puVar9[7];
            uVar10 = *(uint *)(puVar9 + 2);
            local_c4 = (uint)puVar9[1];
            if ((uVar2 == 0xfffe) &&
               (((puVar13 < (uint *)0x28 || (puVar9[8] < 0x16)) ||
                (uVar2 = puVar9[0xc], (uVar2 & 0xfffd) != 1)))) goto LAB_1000e1c4;
            local_b4 = uVar15;
            local_b0 = uVar10;
            if (uVar2 != 1) {
              if (uVar2 == 3) {
                local_b8 = 1;
                local_e0 = 3;
                if ((uVar15 == 0x20) || (uVar15 == 0x40)) goto LAB_1000e0a4;
              }
              goto LAB_1000e1c4;
            }
            local_e0 = 1;
            local_b8 = 1;
            if ((uVar15 - 8 & 0xffe7) != 0) goto LAB_1000e1c4;
LAB_1000e0a4:
            puVar6 = (undefined1 *)((int)puVar13 + (int)puVar14) + ((uint)puVar13 & 1);
            puVar14 = puVar6 + 8;
          } while (puVar14 <= param_2);
          uVar5 = local_b8 ^ 1;
          uVar10 = local_b4;
          puVar13 = local_ac;
          uVar15 = local_b0;
          param_3 = local_f4;
          param_4 = local_bc;
        }
        uVar17 = 0;
        if ((((uVar5 & 1) == 0) && (local_d0 != (uint *)0x0 && puVar13 != (uint *)0x0)) &&
           (((local_c4 & 0xffff) != 0 && uVar15 != 0 && (uVar10 = uVar10 & 0xffff, 7 < uVar10)))) {
          local_b8 = uVar10 >> 3;
          local_cc = (uint *)(local_c4 & 0xffff);
          puVar12 = (uint *)((int)local_cc * local_b8);
          if ((puVar12 != (uint *)0x0) && (puVar12 <= puVar13)) {
            uVar5 = (uint)(ushort)*param_4;
            if ((ushort)*param_4 == 0) {
              uVar5 = local_c4;
            }
            puVar11 = (uint *)(uVar5 & 0xffff);
            local_b4 = uVar10;
            if (puVar11 != (uint *)0x0) {
              local_98 = (undefined2)uVar5;
              local_a0 = (void *)0x0;
              local_a4 = (void *)0x0;
              local_a8 = (void *)0x0;
              local_90 = 1;
              local_f4 = param_3;
              local_e4 = puVar12;
              local_9c = uVar15;
              local_e8 = recovered_10003d40((uint)puVar13,(uint)puVar12);
              local_c8 = puVar11;
              recovered_1000e9b8((int *)&local_a8,local_e8 * (int)puVar11);
              local_f8 = &local_9c;
              dVar19 = -1.0;
              uVar10 = 0;
              puVar13 = (uint *)0x0;
              dVar20 = 1.0;
              local_f0 = 0;
              if ((uint *)0x1 < local_cc) {
                local_f0 = local_b8;
              }
              dVar18 = (double)VectorUnsignedToFloat(local_cc,(byte)(in_fpscr >> 0x16) & 3);
              local_ec = (int)local_c8 << 1;
              puVar12 = local_d0;
              do {
                local_c0 = (uint *)(uVar10 * (int)local_e4 + (int)local_d0);
                local_b0 = local_e0 & 0xffff;
                local_dc = puVar12;
                local_d8 = puVar13;
                local_d4 = uVar10;
                if (local_c8 == (uint *)0x2) {
                  local_90 = 4;
                  dVar21 = recovered_1000eae8(local_c0,local_b0,local_b4);
                  local_bc = (uint *)(pf_double_bits(dVar21) >> 0x20);
                  local_ac = SUB84(dVar21,0);
                  local_90 = 5;
                  dVar21 = recovered_1000eae8((uint *)((int)local_c0 + local_f0),local_b0,local_b4);
                  dVar22 = pf_bits_double(CONCAT44(local_bc,local_ac));
                  uVar3 = 0x8000;
                  if ((dVar19 < dVar22) && (uVar3 = 0x7fff, dVar22 < dVar20)) {
                    pdVar7 = (double *)&DAT_1000e6f8;
                    local_90 = 6;
                    if (dVar22 < 0.0) {
                      pdVar7 = (double *)&DAT_1000e700;
                    }
                    local_b0 = (uint)(pf_double_bits(dVar21) >> 0x20);
                    local_ac = SUB84(dVar21,0);
                    lVar8 = recovered_10007c4c(dVar22 * *pdVar7);
                    uVar3 = (undefined2)lVar8;
                    dVar21 = pf_bits_double(CONCAT44(local_b0,local_ac));
                  }
                  uVar16 = 0x8000;
                  *(undefined2 *)((int)local_a8 + local_d4 * 4) = uVar3;
                  if ((dVar19 < dVar21) && (uVar16 = 0x7fff, dVar21 < dVar20)) {
                    pdVar7 = (double *)&DAT_1000e6f8;
                    local_90 = 7;
                    if (dVar21 < 0.0) {
                      pdVar7 = (double *)&DAT_1000e700;
                    }
                    lVar8 = recovered_10007c4c(dVar21 * *pdVar7);
                    uVar16 = (undefined2)lVar8;
                  }
                  *(undefined2 *)((int)local_a8 + local_d4 * 4 + 2) = uVar16;
                }
                else if (local_c8 == (uint *)0x1) {
                  dVar21 = 0.0;
                  puVar13 = local_cc;
                  do {
                    local_90 = 3;
                    local_bc = puVar12;
                    local_ac = puVar13;
                    dVar22 = recovered_1000eae8(puVar12,local_b0,local_b4);
                    dVar21 = dVar21 + pf_bits_double(((pf_double_bits(dVar22) & 0xffffffff00000000) +
                                              (pf_double_bits(dVar22) & 0xffffffff)));
                    puVar12 = (uint *)((int)local_bc + local_b8);
                    puVar13 = (uint *)((int)local_ac + -1);
                  } while (puVar13 != (uint *)0x0);
                  dVar21 = dVar21 / dVar18;
                  uVar3 = 0x8000;
                  if ((dVar19 < dVar21) && (uVar3 = 0x7fff, dVar21 < dVar20)) {
                    pdVar7 = (double *)&DAT_1000e6f8;
                    local_90 = 2;
                    if (dVar21 < 0.0) {
                      pdVar7 = (double *)&DAT_1000e700;
                    }
                    lVar8 = recovered_10007c4c(dVar21 * *pdVar7);
                    uVar3 = (undefined2)lVar8;
                  }
                  *(undefined2 *)((int)local_a8 + local_d4 * 2) = uVar3;
                }
                else {
                  puVar12 = (uint *)0x0;
                  do {
                    local_90 = 8;
                    puVar11 = puVar12;
                    if (local_cc <= puVar12) {
                      puVar11 = (uint *)(local_c4 - 1);
                    }
                    local_bc = puVar12;
                    local_ac = puVar13;
                    dVar21 = recovered_1000eae8((uint *)(((uint)puVar11 & 0xffff) * local_b8 +
                                                        (int)local_c0),local_b0,local_b4);
                    dVar21 = pf_bits_double(((pf_double_bits(dVar21) & 0xffffffff00000000) +
                                     (pf_double_bits(dVar21) & 0xffffffff)));
                    uVar3 = 0x8000;
                    if ((dVar19 < dVar21) && (uVar3 = 0x7fff, dVar21 < dVar20)) {
                      pdVar7 = (double *)&DAT_1000e6f8;
                      local_90 = 9;
                      if (dVar21 < 0.0) {
                        pdVar7 = (double *)&DAT_1000e700;
                      }
                      lVar8 = recovered_10007c4c(dVar21 * *pdVar7);
                      uVar3 = (undefined2)lVar8;
                    }
                    puVar13 = (uint *)((int)local_ac + 2);
                    *(undefined2 *)((int)local_a8 + (int)local_ac) = uVar3;
                    puVar12 = (uint *)((int)local_bc + 1);
                  } while (local_c8 != puVar12);
                }
                ppvVar1 = local_f4;
                puVar13 = (uint *)((int)local_d8 + local_ec);
                uVar10 = local_d4 + 1;
                puVar12 = (uint *)((int)local_dc + (int)local_e4);
              } while (uVar10 < local_e8);
              if (&local_a8 != local_f4) {
                local_f4[1] = (void *)0x0;
                recovered_1000ac94(*local_f4);
                *ppvVar1 = local_a8;
                ppvVar1[1] = local_a4;
                ppvVar1[2] = local_a0;
                local_a0 = (void *)0x0;
                local_a8 = (void *)0x0;
              }
              uVar10 = local_f8[1];
              ppvVar1[3] = (void *)*local_f8;
              *(short *)(ppvVar1 + 4) = (short)uVar10;
              local_a4 = (void *)0x0;
              recovered_1000ac94(local_a8);
              uVar17 = 1;
            }
          }
        }
      }
    }
  }
LAB_1000dfac:
  recovered_1000b35c(&uStack_94);
  return uVar17;
}

#undef DAT_1000e6f8
#undef DAT_1000e700
#undef DAT_1000e708
#undef DAT_1000e70c
#undef DAT_1000fe67
#undef DAT_1000fe6c
#undef DAT_1000fe71
#undef DAT_1000fe76
#undef DAT_10014008
#undef EXT_0000000c
#undef EXT_00000010
#undef EXT_00000014
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_100
#undef uStack_94
#undef auStack_68

static const unsigned char pf_literal_1000e710_DAT_1000e800[] __attribute__((aligned(16)))={0x0c,0x18,0x00,0x00};
#undef DAT_1000e800
#define DAT_1000e800 (*(int *)((uintptr_t)pf_literal_1000e710_DAT_1000e800))
static const unsigned char pf_literal_1000e710_DAT_1000e804[] __attribute__((aligned(16)))={0x68,0x00,0x00,0x00};
#undef DAT_1000e804
#define DAT_1000e804 (*(int *)((uintptr_t)pf_literal_1000e710_DAT_1000e804))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e710
 */

undefined4 * recovered_1000e710(undefined4 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  puVar1 = (uint *)*param_1;
  local_7c = DAT_10014008;
  local_78 = DAT_1000e800 + 0x1000e758;
  local_70 = DAT_1000e804 + 0x1000e768;
  recovered_1000b338(&uStack_94);
  if (puVar1 != (uint *)0x0) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10009dd8(puVar1);
    *local_98 = 0;
    param_1 = local_98;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  recovered_1000b35c(&uStack_94);
  return param_1;
}

#undef DAT_1000e800
#undef DAT_1000e804
#undef DAT_10014008
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74

static const unsigned char pf_literal_1000e808_DAT_1000e8f8[] __attribute__((aligned(16)))={0x24,0x17,0x00,0x00};
#undef DAT_1000e8f8
#define DAT_1000e8f8 (*(int *)((uintptr_t)pf_literal_1000e808_DAT_1000e8f8))
static const unsigned char pf_literal_1000e808_DAT_1000e8fc[] __attribute__((aligned(16)))={0x68,0x00,0x00,0x00};
#undef DAT_1000e8fc
#define DAT_1000e8fc (*(int *)((uintptr_t)pf_literal_1000e808_DAT_1000e8fc))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e808
 */

undefined4 * recovered_1000e808(undefined4 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  puVar1 = (uint *)*param_1;
  local_7c = DAT_10014008;
  local_78 = DAT_1000e8f8 + 0x1000e850;
  local_70 = DAT_1000e8fc + 0x1000e860;
  recovered_1000b338(&uStack_94);
  if (puVar1 != (uint *)0x0) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10009dd8(puVar1);
    *local_98 = 0;
    param_1 = local_98;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  recovered_1000b35c(&uStack_94);
  return param_1;
}

#undef DAT_1000e8f8
#undef DAT_1000e8fc
#undef DAT_10014008
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e900
 */

void recovered_1000e900(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 in_r1;
  int in_r2;

  recovered_1000abfc(param_1,in_r1,in_r2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1000e90c);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e910
 */

void recovered_1000e910(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *pointer;
  uint uVar2;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;

  if (param_2 <= (uint)param_1[2]) {
    return;
  }
  puVar1 = recovered_1000ac3c(param_2);
  uVar2 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar2 != 0) {
    bVar10 = uVar2 == 0x10;
    uVar9 = 0;
    uVar4 = extraout_r2;
    if (0xf < uVar2) {
      uVar4 = (int)puVar1 - (int)pointer;
      bVar10 = uVar4 == 0xf;
    }
    if ((0xf < uVar2 && 0xe < uVar4) && !bVar10) {
      uVar9 = uVar2 & 0xfffffff0;
      puVar5 = puVar1;
      uVar4 = uVar9;
      puVar7 = pointer;
      do {
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar4 = uVar4 - 0x10;
        *puVar5 = uVar11;
        puVar5[1] = uVar12;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (uVar2 == uVar9) goto LAB_1000e9a4;
    }
    iVar3 = uVar2 - uVar9;
    puVar6 = (undefined1 *)((int)puVar1 + uVar9);
    puVar8 = (undefined1 *)((int)pointer + uVar9);
    do {
      iVar3 = iVar3 + -1;
      *puVar6 = *puVar8;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar3 != 0);
  }
LAB_1000e9a4:
  recovered_1000ac94(pointer);
  param_1[2] = param_2;
  *param_1 = puVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9b8
 */

void recovered_1000e9b8(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *pointer;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint extraout_r3 = 0;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  bool bVar16;

  uVar7 = param_1[1];
  if (param_2 < uVar7) goto LAB_1000e9d0;
  if (param_2 <= uVar7) {
    return;
  }
  if ((uint)param_1[2] < param_2) {
    puVar5 = recovered_1000ac3c(param_2 << 1);
    uVar7 = param_1[1];
    pointer = (undefined4 *)*param_1;
    if (uVar7 != 0) {
      bVar16 = uVar7 == 8;
      uVar8 = 0;
      uVar10 = extraout_r3;
      if (7 < uVar7) {
        uVar10 = (int)puVar5 - (int)pointer;
        bVar16 = uVar10 == 0xf;
      }
      if ((7 < uVar7 && 0xe < uVar10) && !bVar16) {
        uVar8 = uVar7 & 0xfffffff8;
        uVar10 = uVar8;
        puVar13 = puVar5;
        puVar14 = pointer;
        do {
          uVar1 = *puVar14;
          uVar2 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          puVar14 = puVar14 + 4;
          uVar10 = uVar10 - 8;
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
          puVar13[2] = uVar3;
          puVar13[3] = uVar4;
          puVar13 = puVar13 + 4;
        } while (uVar10 != 0);
        if (uVar7 == uVar8) goto LAB_1000ea6c;
      }
      iVar6 = uVar7 - uVar8;
      puVar11 = (undefined2 *)((int)puVar5 + uVar8 * 2);
      puVar15 = (undefined2 *)((int)pointer + uVar8 * 2);
      do {
        iVar6 = iVar6 + -1;
        *puVar11 = *puVar15;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      } while (iVar6 != 0);
    }
LAB_1000ea6c:
    recovered_1000ac94(pointer);
    uVar7 = param_1[1];
    param_1[2] = param_2;
    *param_1 = (int)puVar5;
  }
  if (param_2 <= uVar7) {
    return;
  }
  iVar6 = *param_1;
  uVar10 = param_2 - uVar7;
  if (7 < uVar10) {
    uVar12 = uVar10 & 0xfffffff8;
    puVar5 = (undefined4 *)(iVar6 + uVar7 * 2);
    uVar7 = uVar7 + uVar12;
    uVar8 = uVar12;
    do {
      *puVar5 = 0;
      puVar5[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      puVar5[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      puVar5[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 8;
    } while (uVar8 != 0);
    if (uVar10 == uVar12) goto LAB_1000e9d0;
  }
  iVar9 = param_2 - uVar7;
  puVar11 = (undefined2 *)(iVar6 + uVar7 * 2);
  do {
    *puVar11 = 0;
    iVar9 = iVar9 + -1;
    puVar11 = puVar11 + 1;
  } while (iVar9 != 0);
LAB_1000e9d0:
  param_1[1] = param_2;
  return;
}


static const unsigned char pf_literal_1000eae8_DAT_1000ec40[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3e};
#undef DAT_1000ec40
#define DAT_1000ec40 (*(double *)((uintptr_t)pf_literal_1000eae8_DAT_1000ec40))
static const unsigned char pf_literal_1000eae8_DAT_1000ec48[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3e};
#undef DAT_1000ec48
#define DAT_1000ec48 (*(double *)((uintptr_t)pf_literal_1000eae8_DAT_1000ec48))
static const unsigned char pf_literal_1000eae8_DAT_1000ec50[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f};
#undef DAT_1000ec50
#define DAT_1000ec50 (*(double *)((uintptr_t)pf_literal_1000eae8_DAT_1000ec50))
static const unsigned char pf_literal_1000eae8_DAT_1000ec58[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3f};
#undef DAT_1000ec58
#define DAT_1000ec58 (*(double *)((uintptr_t)pf_literal_1000eae8_DAT_1000ec58))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define uStack_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
#define local_c (*(float *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eae8
 */

double recovered_1000eae8(uint *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;

  dVar3 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      uStack_14 = 0;
      local_18 = 0;
      recovered_100058e0((undefined8 *)&local_18,(undefined8 *)param_1,(undefined8 *)&SupervisorCall
                        );
      dVar3 = pf_bits_double(CONCAT44(uStack_14,local_18));
      bVar1 = dVar3 < -1.0;
      if (1.0 < dVar3) {
        dVar3 = 1.0;
      }
      if (bVar1) {
        dVar3 = -1.0;
      }
    }
    else if (param_3 == 0x20) {
      local_c = 0.0;
      recovered_100058e0((undefined8 *)&local_c,(undefined8 *)param_1,
                         (undefined8 *)&UndefinedInstruction);
      dVar3 = (double)local_c;
      if (1.0 < dVar3) {
        dVar3 = 1.0;
      }
      if (local_c < -1.0) {
        dVar3 = -1.0;
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)(param_3 - 8U >> 3 | param_3 << 0x1d)) {
    case 0:
      uVar2 = (byte)*param_1 - 0x80;
      dVar4 = DAT_1000ec58;
      break;
    case 1:
      uVar2 = (uint)(short)*param_1;
      dVar4 = DAT_1000ec50;
      break;
    case 2:
      uVar2 = (uint)(uint3)*param_1;
      dVar4 = DAT_1000ec48;
      if (*(char *)((int)param_1 + 2) < '\0') {
        uVar2 = uVar2 | 0xff000000;
      }
      break;
    case 3:
      uVar2 = *param_1;
      dVar4 = DAT_1000ec40;
      break;
    default:
      goto switchD_1000eb24_default;
    }
    dVar3 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = dVar3 * dVar4;
  }
switchD_1000eb24_default:
  return dVar3;
}

#undef DAT_1000ec40
#undef DAT_1000ec48
#undef DAT_1000ec50
#undef DAT_1000ec58
#undef EXT_00000004
#undef EXT_00000008
#undef uStack_14
#undef local_18
#undef local_c

#define local_2c (*(void * *)(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec60
 */

void recovered_1000ec60(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  void *pointer_00;
  uint extraout_r1 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  puVar10 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar10 != (undefined1 *)0x0) {
    uVar11 = param_2 - (int)puVar10;
    uVar4 = 0;
    do {
      if (uVar11 == uVar4) {
        uVar4 = param_1[1] - uVar11;
        local_24 = 0;
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_1000ec60((int *)&local_2c,(int)(puVar10 + uVar11),uVar4);
        pointer_00 = (void *)*param_1;
        iVar5 = param_1[1];
        iVar6 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pointer_00;
        local_28 = iVar5;
        local_24 = iVar6;
        recovered_1000ac94(pointer_00);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar10 = recovered_1000ac3c(1);
      *param_1 = (int)puVar10;
      *puVar10 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000ed4c;
  puVar2 = recovered_1000ac3c(uVar1 + 1);
  uVar11 = param_1[1];
  pointer = (undefined8 *)*param_1;
  uVar4 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar11 != 0) {
    bVar12 = uVar11 == 0x10;
    uVar3 = extraout_r1;
    if (0xf < uVar11) {
      uVar3 = (int)puVar2 - (int)pointer;
      bVar12 = uVar3 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar3) && !bVar12) {
      uVar4 = uVar11 & 0xfffffff0;
      uVar3 = uVar4;
      puVar7 = puVar2;
      puVar9 = pointer;
      do {
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar7 = uVar13;
        puVar7[1] = uVar14;
        puVar7 = puVar7 + 2;
      } while (uVar3 != 0);
      if (uVar11 == uVar4) goto LAB_1000ed30;
    }
    iVar5 = uVar11 - uVar4;
    puVar10 = (undefined1 *)((int)puVar2 + uVar4);
    puVar8 = (undefined1 *)((int)pointer + uVar4);
    do {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar8;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_1000ed30:
  *(undefined1 *)((int)puVar2 + uVar11) = 0;
  recovered_1000ac94(pointer);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000ed4c:
  uVar4 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

static const unsigned char pf_literal_1000ee24_DAT_1000f3a4[] __attribute__((aligned(16)))={0x18,0x11,0x00,0x00};
#undef DAT_1000f3a4
#define DAT_1000f3a4 (*(int *)((uintptr_t)pf_literal_1000ee24_DAT_1000f3a4))
static const unsigned char pf_literal_1000ee24_DAT_1000f3a8[] __attribute__((aligned(16)))={0x9c,0x04,0x00,0x00};
#undef DAT_1000f3a8
#define DAT_1000f3a8 (*(int *)((uintptr_t)pf_literal_1000ee24_DAT_1000f3a8))
#undef DAT_1000fe67
#define DAT_1000fe67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_1000fe6b
#define DAT_1000fe6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x133U)))
#undef DAT_1000fe6c
#define DAT_1000fe6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x134U)))
#undef DAT_1000fe70
#define DAT_1000fe70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef DAT_1000fe71
#define DAT_1000fe71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x139U)))
#undef DAT_1000fe75
#define DAT_1000fe75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13dU)))
#undef DAT_1000fe76
#define DAT_1000fe76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13eU)))
#undef DAT_1000fe7a
#define DAT_1000fe7a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x142U)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_b8 (*(uint *)(pf_stack_frame + 24))
#define local_b4 (*(undefined8 * *)(pf_stack_frame + 28))
#define local_b0 (*(ushort * *)(pf_stack_frame + 32))
#define local_ac (*(undefined8 ** *)(pf_stack_frame + 36))
#define local_a8 (*(uint *)(pf_stack_frame + 40))
#define local_a4 (*(ushort * *)(pf_stack_frame + 44))
#define local_a0 (*(undefined8 * *)(pf_stack_frame + 48))
#define local_9c (*(undefined8 * *)(pf_stack_frame + 52))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee24
 */

undefined4 recovered_1000ee24(ushort *param_1,undefined8 **param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  uint unaff_r5;
  uint uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000f3a4 + 0x1000ee6c;
  local_70 = DAT_1000f3a8 + 0x1000ee7c;
  recovered_1000b338(&uStack_94);
  uVar15 = 0;
  if (param_2 != (undefined8 **)0x0) {
    uVar11 = *(uint *)(param_1 + 6);
    if (uVar11 != 0) {
      unaff_r5 = (uint)param_1[8];
    }
    if (uVar11 != 0 && unaff_r5 != 0) {
      uVar16 = *(uint *)(param_1 + 2);
      uVar2 = recovered_10003d90(uVar16,unaff_r5);
      if (uVar2 == 0) {
        lVar1 = ZEXT48((ushort *)(unaff_r5 << 1)) * (ulonglong)uVar11;
        if ((-1 < (short)unaff_r5) && ((int)((ulonglong)lVar1 >> 0x20) == 0)) {
          local_98 = (undefined8 *)0x0;
          local_a8 = uVar16 * 2;
          local_9c = (undefined8 *)0x0;
          local_a0 = (undefined8 *)0x0;
          local_90 = 1;
          local_b8 = uVar16;
          local_b4 = (undefined8 *)lVar1;
          local_b0 = (ushort *)(unaff_r5 << 1);
          local_ac = param_2;
          local_a4 = param_1;
          recovered_1000e910(&local_a0,local_a8 + 0x2c);
          local_90 = 2;
          recovered_1000f944((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000fe67,
                             &DAT_1000fe6b);
          local_90 = 3;
          recovered_1000f4a4((int *)&local_a0,local_b8 * 2 + 0x24);
          local_90 = 4;
          recovered_1000f944((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000fe6c,
                             &DAT_1000fe70);
          local_90 = 5;
          recovered_1000f944((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000fe71,
                             &DAT_1000fe75);
          local_90 = 6;
          recovered_1000f4a4((int *)&local_a0,0x10);
          local_90 = 7;
          recovered_1000f7b0((int *)&local_a0,1);
          local_90 = 8;
          recovered_1000f7b0((int *)&local_a0,(uint)local_a4[8]);
          local_90 = 9;
          recovered_1000f4a4((int *)&local_a0,*(undefined4 *)(local_a4 + 6));
          local_90 = 10;
          recovered_1000f4a4((int *)&local_a0,local_b4);
          local_90 = 0xb;
          recovered_1000f7b0((int *)&local_a0,(uint)local_b0 & 0xffff);
          local_90 = 0xc;
          recovered_1000f7b0((int *)&local_a0,0x10);
          local_90 = 0xd;
          recovered_1000f944((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),&DAT_1000fe76,
                             &DAT_1000fe7a);
          local_90 = 0xe;
          recovered_1000f4a4((int *)&local_a0,local_a8);
          ppuVar9 = local_ac;
          if (*(int *)(local_a4 + 2) != 0) {
            puVar6 = *(ushort **)local_a4;
            puVar12 = puVar6 + *(int *)(local_a4 + 2);
            local_b0 = puVar12;
            do {
              uVar11 = (uint)*puVar6;
              if (local_9c == local_98) {
                puVar3 = (undefined8 *)((int)local_9c << 1);
                if (local_9c == (undefined8 *)0x0) {
                  puVar3 = (undefined8 *)&UndefinedInstruction;
                }
                if (local_9c < puVar3) {
                  local_90 = 0xf;
                  local_b4 = puVar3;
                  local_a8 = uVar11;
                  local_a4 = puVar6;
                  puVar3 = recovered_1000ac3c((ulong)puVar3);
                  if (local_9c != (undefined8 *)0x0) {
                    bVar17 = local_9c == (undefined8 *)&DataAbort;
                    puVar5 = (undefined8 *)0x0;
                    uVar11 = extraout_r3;
                    if ((undefined8 *)0xf < local_9c) {
                      uVar11 = (int)puVar3 - (int)local_a0;
                      bVar17 = uVar11 == 0xf;
                    }
                    if (((undefined8 *)0xf < local_9c && 0xe < uVar11) && !bVar17) {
                      puVar5 = (undefined8 *)((uint)local_9c & 0xfffffff0);
                      puVar7 = puVar5;
                      puVar10 = puVar3;
                      puVar13 = local_a0;
                      do {
                        uVar18 = *puVar13;
                        uVar19 = puVar13[1];
                        puVar13 = puVar13 + 2;
                        puVar7 = puVar7 + -2;
                        *puVar10 = uVar18;
                        puVar10[1] = uVar19;
                        puVar10 = puVar10 + 2;
                      } while (puVar7 != (undefined8 *)0x0);
                      if (local_9c == puVar5) goto LAB_1000f1dc;
                    }
                    iVar4 = (int)local_9c - (int)puVar5;
                    puVar8 = (undefined1 *)((int)puVar3 + (int)puVar5);
                    puVar14 = (undefined1 *)((int)local_a0 + (int)puVar5);
                    do {
                      iVar4 = iVar4 + -1;
                      *puVar8 = *puVar14;
                      puVar8 = puVar8 + 1;
                      puVar14 = puVar14 + 1;
                    } while (iVar4 != 0);
                  }
LAB_1000f1dc:
                  recovered_1000ac94(local_a0);
                  local_98 = local_b4;
                  uVar11 = local_a8;
                  puVar6 = local_a4;
                  ppuVar9 = local_ac;
                  puVar12 = local_b0;
                  local_a0 = puVar3;
                }
              }
              *(char *)((int)local_a0 + (int)local_9c) = (char)uVar11;
              local_9c = (undefined8 *)((int)local_9c + 1);
              if (local_9c == local_98) {
                puVar3 = (undefined8 *)((int)local_9c * 2);
                if (local_9c == (undefined8 *)0x0) {
                  puVar3 = (undefined8 *)&UndefinedInstruction;
                }
                if (local_9c < puVar3) {
                  local_90 = 0x10;
                  local_b4 = puVar3;
                  local_a8 = uVar11;
                  local_a4 = puVar6;
                  puVar3 = recovered_1000ac3c((ulong)puVar3);
                  if (local_9c != (undefined8 *)0x0) {
                    bVar17 = local_9c == (undefined8 *)&DataAbort;
                    puVar5 = (undefined8 *)0x0;
                    uVar11 = extraout_r3_00;
                    if ((undefined8 *)0xf < local_9c) {
                      uVar11 = (int)puVar3 - (int)local_a0;
                      bVar17 = uVar11 == 0xf;
                    }
                    if (((undefined8 *)0xf < local_9c && 0xe < uVar11) && !bVar17) {
                      puVar5 = (undefined8 *)((uint)local_9c & 0xfffffff0);
                      puVar7 = puVar5;
                      puVar10 = puVar3;
                      puVar13 = local_a0;
                      do {
                        uVar18 = *puVar13;
                        uVar19 = puVar13[1];
                        puVar13 = puVar13 + 2;
                        puVar7 = puVar7 + -2;
                        *puVar10 = uVar18;
                        puVar10[1] = uVar19;
                        puVar10 = puVar10 + 2;
                      } while (puVar7 != (undefined8 *)0x0);
                      if (local_9c == puVar5) goto LAB_1000f0e8;
                    }
                    iVar4 = (int)local_9c - (int)puVar5;
                    puVar8 = (undefined1 *)((int)puVar3 + (int)puVar5);
                    puVar14 = (undefined1 *)((int)local_a0 + (int)puVar5);
                    do {
                      iVar4 = iVar4 + -1;
                      *puVar8 = *puVar14;
                      puVar8 = puVar8 + 1;
                      puVar14 = puVar14 + 1;
                    } while (iVar4 != 0);
                  }
LAB_1000f0e8:
                  recovered_1000ac94(local_a0);
                  local_98 = local_b4;
                  uVar11 = local_a8;
                  puVar6 = local_a4;
                  ppuVar9 = local_ac;
                  puVar12 = local_b0;
                  local_a0 = puVar3;
                }
              }
              puVar6 = puVar6 + 1;
              *(char *)((int)local_a0 + (int)local_9c) = (char)(uVar11 >> 8);
              local_9c = (undefined8 *)((int)local_9c + 1);
            } while (puVar6 != puVar12);
          }
          if (&local_a0 != ppuVar9) {
            ppuVar9[1] = (undefined8 *)0x0;
            recovered_1000ac94(*ppuVar9);
            *ppuVar9 = local_a0;
            ppuVar9[1] = local_9c;
            ppuVar9[2] = local_98;
            local_98 = (undefined8 *)0x0;
            local_a0 = (undefined8 *)0x0;
          }
          local_9c = (undefined8 *)0x0;
          recovered_1000ac94(local_a0);
          uVar15 = 1;
        }
      }
    }
  }
  recovered_1000b35c(&uStack_94);
  return uVar15;
}

#undef DAT_1000f3a4
#undef DAT_1000f3a8
#undef DAT_1000fe67
#undef DAT_1000fe6b
#undef DAT_1000fe6c
#undef DAT_1000fe70
#undef DAT_1000fe71
#undef DAT_1000fe75
#undef DAT_1000fe76
#undef DAT_1000fe7a
#undef DAT_10014008
#undef EXT_00000004
#undef EXT_00000010
#undef auStack_68
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_c0
#undef uStack_94

static const unsigned char pf_literal_1000f3ac_DAT_1000f49c[] __attribute__((aligned(16)))={0xb4,0x0b,0x00,0x00};
#undef DAT_1000f49c
#define DAT_1000f49c (*(int *)((uintptr_t)pf_literal_1000f3ac_DAT_1000f49c))
static const unsigned char pf_literal_1000f3ac_DAT_1000f4a0[] __attribute__((aligned(16)))={0x68,0x00,0x00,0x00};
#undef DAT_1000f4a0
#define DAT_1000f4a0 (*(int *)((uintptr_t)pf_literal_1000f3ac_DAT_1000f4a0))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42d0U)))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 24))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f3ac
 */

undefined4 * recovered_1000f3ac(undefined4 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint *puVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  puVar1 = (uint *)*param_1;
  local_7c = DAT_10014008;
  local_78 = DAT_1000f49c + 0x1000f3f4;
  local_70 = DAT_1000f4a0 + 0x1000f404;
  recovered_1000b338(&uStack_94);
  if (puVar1 != (uint *)0x0) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10009dd8(puVar1);
    *local_98 = 0;
    param_1 = local_98;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  recovered_1000b35c(&uStack_94);
  return param_1;
}

#undef DAT_1000f49c
#undef DAT_1000f4a0
#undef DAT_10014008
#undef local_6c
#undef auStack_68
#undef local_98
#undef auStack_a0
#undef local_90
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f4a4
 */

void recovered_1000f4a4(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  undefined8 *puVar5;
  uint extraout_r2 = 0;
  uint uVar6;
  undefined1 *puVar7;
  uint extraout_r2_00 = 0;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_1000ac3c(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar6 = extraout_r2;
        if (0xf < uVar1) {
          uVar6 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar6 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          puVar5 = puVar2;
          uVar6 = uVar11;
          puVar8 = puVar3;
          do {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar6 = uVar6 - 0x10;
            *puVar5 = uVar13;
            puVar5[1] = uVar14;
            puVar5 = puVar5 + 2;
          } while (uVar6 != 0);
          if (uVar1 == uVar11) goto LAB_1000f550;
        }
        iVar4 = uVar1 - uVar11;
        puVar7 = (undefined1 *)((int)puVar2 + uVar11);
        puVar9 = (undefined1 *)((int)puVar3 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar9;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 != 0);
      }
LAB_1000f550:
      recovered_1000ac94(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)param_2;
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 * 2;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_1000ac3c(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar6 = extraout_r1;
        if (0xf < uVar1) {
          uVar6 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar6 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          puVar5 = puVar2;
          uVar6 = uVar11;
          puVar8 = puVar3;
          do {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar6 = uVar6 - 0x10;
            *puVar5 = uVar13;
            puVar5[1] = uVar14;
            puVar5 = puVar5 + 2;
          } while (uVar6 != 0);
          if (uVar1 == uVar11) goto LAB_1000f60c;
        }
        iVar4 = uVar1 - uVar11;
        puVar7 = (undefined1 *)((int)puVar3 + uVar11);
        puVar9 = (undefined1 *)((int)puVar2 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 != 0);
      }
LAB_1000f60c:
      recovered_1000ac94(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 8);
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 * 2;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_1000ac3c(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar6 = extraout_r1_00;
        if (0xf < uVar1) {
          uVar6 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar6 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          puVar5 = puVar2;
          uVar6 = uVar11;
          puVar8 = puVar3;
          do {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            puVar8 = puVar8 + 2;
            uVar6 = uVar6 - 0x10;
            *puVar5 = uVar13;
            puVar5[1] = uVar14;
            puVar5 = puVar5 + 2;
          } while (uVar6 != 0);
          if (uVar1 == uVar11) goto LAB_1000f6c8;
        }
        iVar4 = uVar1 - uVar11;
        puVar7 = (undefined1 *)((int)puVar3 + uVar11);
        puVar9 = (undefined1 *)((int)puVar2 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 != 0);
      }
LAB_1000f6c8:
      recovered_1000ac94(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 0x10);
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 != param_1[2]) goto LAB_1000f790;
  uVar10 = uVar1 * 2;
  if (uVar1 == 0) {
    uVar10 = 4;
  }
  if (uVar10 <= uVar1) goto LAB_1000f790;
  puVar2 = recovered_1000ac3c(uVar10);
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar12 = uVar1 == 0x10;
    uVar11 = 0;
    uVar6 = extraout_r2_00;
    if (0xf < uVar1) {
      uVar6 = (int)puVar2 - (int)puVar3;
      bVar12 = uVar6 == 0xf;
    }
    if ((0xf < uVar1 && 0xe < uVar6) && !bVar12) {
      uVar11 = uVar1 & 0xfffffff0;
      puVar5 = puVar2;
      uVar6 = uVar11;
      puVar8 = puVar3;
      do {
        uVar13 = *puVar8;
        uVar14 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar6 = uVar6 - 0x10;
        *puVar5 = uVar13;
        puVar5[1] = uVar14;
        puVar5 = puVar5 + 2;
      } while (uVar6 != 0);
      if (uVar1 == uVar11) goto LAB_1000f780;
    }
    iVar4 = uVar1 - uVar11;
    puVar7 = (undefined1 *)((int)puVar2 + uVar11);
    puVar9 = (undefined1 *)((int)puVar3 + uVar11);
    do {
      iVar4 = iVar4 + -1;
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_1000f780:
  recovered_1000ac94(puVar3);
  uVar1 = param_1[1];
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_1000f790:
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7b0
 */

void recovered_1000f7b0(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint extraout_r2 = 0;
  uint uVar5;
  uint extraout_r2_00 = 0;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar10 = 4;
    }
    if (uVar1 < uVar10) {
      puVar2 = recovered_1000ac3c(uVar10);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar12 = uVar1 == 0x10;
        uVar11 = 0;
        uVar5 = extraout_r2;
        if (0xf < uVar1) {
          uVar5 = (int)puVar2 - (int)puVar3;
          bVar12 = uVar5 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar5) && !bVar12) {
          uVar11 = uVar1 & 0xfffffff0;
          uVar5 = uVar11;
          puVar7 = puVar3;
          puVar9 = puVar2;
          do {
            uVar13 = *puVar7;
            uVar14 = puVar7[1];
            puVar7 = puVar7 + 2;
            uVar5 = uVar5 - 0x10;
            *puVar9 = uVar13;
            puVar9[1] = uVar14;
            puVar9 = puVar9 + 2;
          } while (uVar5 != 0);
          if (uVar1 == uVar11) goto LAB_1000f85c;
        }
        iVar4 = uVar1 - uVar11;
        puVar6 = (undefined1 *)((int)puVar3 + uVar11);
        puVar8 = (undefined1 *)((int)puVar2 + uVar11);
        do {
          iVar4 = iVar4 + -1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar4 != 0);
      }
LAB_1000f85c:
      recovered_1000ac94(puVar3);
      uVar1 = param_1[1];
      param_1[2] = uVar10;
      *param_1 = (int)puVar2;
    }
  }
  *(char *)(*param_1 + uVar1) = (char)param_2;
  uVar1 = param_1[1] + 1;
  param_1[1] = uVar1;
  if (uVar1 != param_1[2]) goto LAB_1000f924;
  uVar10 = uVar1 * 2;
  if (uVar1 == 0) {
    uVar10 = 4;
  }
  if (uVar10 <= uVar1) goto LAB_1000f924;
  puVar2 = recovered_1000ac3c(uVar10);
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar12 = uVar1 == 0x10;
    uVar11 = 0;
    uVar5 = extraout_r2_00;
    if (0xf < uVar1) {
      uVar5 = (int)puVar2 - (int)puVar3;
      bVar12 = uVar5 == 0xf;
    }
    if ((0xf < uVar1 && 0xe < uVar5) && !bVar12) {
      uVar11 = uVar1 & 0xfffffff0;
      uVar5 = uVar11;
      puVar7 = puVar3;
      puVar9 = puVar2;
      do {
        uVar13 = *puVar7;
        uVar14 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar9 = uVar13;
        puVar9[1] = uVar14;
        puVar9 = puVar9 + 2;
      } while (uVar5 != 0);
      if (uVar1 == uVar11) goto LAB_1000f914;
    }
    iVar4 = uVar1 - uVar11;
    puVar6 = (undefined1 *)((int)puVar3 + uVar11);
    puVar8 = (undefined1 *)((int)puVar2 + uVar11);
    do {
      iVar4 = iVar4 + -1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 != 0);
  }
LAB_1000f914:
  recovered_1000ac94(puVar3);
  uVar1 = param_1[1];
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_1000f924:
  *(char *)(*param_1 + uVar1) = (char)((uint)param_2 >> 8);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f944
 */

int recovered_1000f944(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint size;
  undefined8 *puVar3;
  undefined8 *pointer;
  uint extraout_r1 = 0;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - iVar1;
  }
  if (param_3 == param_4) goto LAB_1000fa88;
  uVar8 = param_1[1];
  iVar11 = (int)param_4 - (int)param_3;
  uVar2 = param_1[2];
  if (uVar2 < uVar8 + iVar11) {
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    do {
      size = uVar2;
      uVar2 = size << 1;
    } while (size < uVar8 + iVar11);
    puVar3 = recovered_1000ac3c(size);
    uVar8 = param_1[1];
    pointer = (undefined8 *)*param_1;
    if (uVar8 != 0) {
      bVar12 = uVar8 == 0x10;
      uVar9 = 0;
      uVar2 = extraout_r1;
      if (0xf < uVar8) {
        uVar2 = (int)puVar3 - (int)pointer;
        bVar12 = uVar2 == 0xf;
      }
      if ((0xf < uVar8 && 0xe < uVar2) && !bVar12) {
        uVar9 = uVar8 & 0xfffffff0;
        puVar4 = puVar3;
        uVar2 = uVar9;
        puVar6 = pointer;
        do {
          uVar13 = *puVar6;
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar2 = uVar2 - 0x10;
          *puVar4 = uVar13;
          puVar4[1] = uVar14;
          puVar4 = puVar4 + 2;
        } while (uVar2 != 0);
        if (uVar8 == uVar9) goto LAB_1000fa1c;
      }
      iVar1 = uVar8 - uVar9;
      puVar5 = (undefined1 *)((int)pointer + uVar9);
      puVar7 = (undefined1 *)((int)puVar3 + uVar9);
      do {
        iVar1 = iVar1 + -1;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar1 != 0);
    }
LAB_1000fa1c:
    recovered_1000ac94(pointer);
    param_1[2] = size;
    uVar8 = param_1[1];
    *param_1 = (int)puVar3;
  }
  while (uVar10 < uVar8) {
    uVar8 = uVar8 - 1;
    ((undefined1 *)(*param_1 + uVar8))[iVar11] = *(undefined1 *)(*param_1 + uVar8);
  }
  uVar8 = uVar10;
  do {
    puVar5 = param_3 + 1;
    *(undefined1 *)(*param_1 + uVar8) = *param_3;
    uVar8 = uVar8 + 1;
    param_3 = puVar5;
  } while (puVar5 != param_4);
  iVar1 = *param_1;
  param_1[1] = param_1[1] + iVar11;
LAB_1000fa88:
  iVar11 = iVar1 + uVar10;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  return iVar11;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000faa8
 */

void * recovered_1000faa8(undefined4 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint extraout_r3 = 0;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;

  puVar15 = (undefined8 *)*param_1;
  if (puVar15 == (undefined8 *)0x0) {
    uVar14 = param_1[1];
  }
  else {
    uVar14 = param_2 - (int)puVar15 >> 1;
  }
  if (param_3 == param_4) goto LAB_1000fd18;
  uVar18 = param_1[1];
  uVar11 = (int)param_4 + (-2 - (int)param_3);
  uVar1 = param_1[2];
  uVar6 = (uVar11 >> 1) + 1;
  if (uVar1 < uVar18 + uVar6) {
    if (uVar1 == 0) {
      uVar1 = 4;
    }
    do {
      uVar3 = uVar1;
      uVar1 = uVar3 << 1;
    } while (uVar3 < uVar18 + uVar6);
    puVar15 = recovered_1000ac3c(uVar3 << 1);
    uVar18 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (uVar18 != 0) {
      bVar19 = uVar18 == 8;
      uVar8 = 0;
      uVar9 = extraout_r3;
      if (7 < uVar18) {
        uVar9 = (int)puVar15 - (int)puVar2;
        bVar19 = uVar9 == 0xf;
      }
      if ((7 < uVar18 && 0xe < uVar9) && !bVar19) {
        uVar8 = uVar18 & 0xfffffff8;
        uVar9 = uVar8;
        puVar4 = puVar2;
        puVar12 = puVar15;
        do {
          uVar20 = *puVar4;
          uVar21 = puVar4[1];
          puVar4 = puVar4 + 2;
          uVar9 = uVar9 - 8;
          *puVar12 = uVar20;
          puVar12[1] = uVar21;
          puVar12 = puVar12 + 2;
        } while (uVar9 != 0);
        if (uVar18 == uVar8) goto LAB_1000fb94;
      }
      iVar7 = uVar18 - uVar8;
      puVar10 = (undefined2 *)((int)puVar15 + uVar8 * 2);
      puVar13 = (undefined2 *)((int)puVar2 + uVar8 * 2);
      do {
        iVar7 = iVar7 + -1;
        *puVar10 = *puVar13;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar7 != 0);
    }
LAB_1000fb94:
    recovered_1000ac94(puVar2);
    uVar18 = param_1[1];
    param_1[2] = uVar3;
    *param_1 = puVar15;
  }
  if (uVar14 < uVar18) {
    uVar9 = uVar18 - uVar14;
    uVar3 = uVar18;
    if (0x37 < uVar9) {
      iVar7 = uVar18 + ~uVar14;
      uVar16 = uVar11 & 0xfffffffe;
      uVar8 = (int)puVar15 + uVar16 + uVar18 * 2;
      if ((((uVar8 + iVar7 * -2 <= uVar8) &&
           (uVar8 = (int)puVar15 + uVar18 * 2 + -2, uVar8 + iVar7 * -2 <= uVar8)) && (-1 < iVar7))
         && (uVar11 < 0xfffffff0)) {
        uVar17 = uVar9 & 0xfffffff8;
        uVar3 = uVar18 - uVar17;
        uVar8 = uVar17;
        puVar2 = (undefined8 *)(uVar18 * 2 + (int)puVar15);
        do {
          puVar4 = puVar2 + -2;
          uVar20 = puVar2[-1];
          uVar8 = uVar8 - 8;
          *(undefined8 *)((int)puVar4 + uVar16 + 2) = *puVar4;
          *(undefined8 *)((int)puVar4 + uVar16 + 10) = uVar20;
          puVar2 = puVar4;
        } while (uVar8 != 0);
        if (uVar9 == uVar17) goto LAB_1000fbf0;
      }
    }
    puVar10 = (undefined2 *)((int)puVar15 + uVar3 * 2);
    do {
      puVar13 = (undefined2 *)((int)puVar10 + (uVar11 & 0xfffffffe));
      puVar10 = puVar10 + -1;
      uVar3 = uVar3 - 1;
      *puVar13 = *puVar10;
    } while (uVar14 < uVar3);
  }
LAB_1000fbf0:
  puVar2 = param_3;
  uVar3 = uVar14;
  if ((uVar11 < 0xe) || ((int)puVar15 + (uVar14 * 2 - (int)param_3) < 0x10)) {
LAB_1000fcfc:
    puVar10 = (undefined2 *)((int)puVar15 + uVar3 * 2);
    do {
      puVar4 = (undefined8 *)((int)puVar2 + 2);
      *puVar10 = *(undefined2 *)puVar2;
      puVar2 = puVar4;
      puVar10 = puVar10 + 1;
    } while (puVar4 != param_4);
  }
  else {
    uVar9 = uVar6 & 0xfffffff8;
    puVar4 = (undefined8 *)((int)puVar15 + uVar14 * 2);
    uVar3 = uVar14 + uVar9;
    puVar2 = (undefined8 *)((int)param_3 + uVar9 * 2);
    uVar11 = uVar9;
    do {
      uVar20 = *param_3;
      uVar21 = param_3[1];
      param_3 = param_3 + 2;
      uVar11 = uVar11 - 8;
      *puVar4 = uVar20;
      puVar4[1] = uVar21;
      puVar4 = puVar4 + 2;
    } while (uVar11 != 0);
    if (uVar6 != uVar9) goto LAB_1000fcfc;
  }
  param_1[1] = uVar18 + uVar6;
LAB_1000fd18:
  pvVar5 = (void *)((int)puVar15 + uVar14 * 2);
  if (puVar15 == (undefined8 *)0x0) {
    pvVar5 = (void *)0x0;
  }
  return pvVar5;
}


/* Recover the imported ARM32 rounding boundary; Pooka's Free Software License. */
longlong recovered_1000fd5c(uint low,uint high){return recovered_100073c8(pf_bits_double(CONCAT44(high,low)));}

