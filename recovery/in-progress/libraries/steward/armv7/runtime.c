/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003038
 */

uint recovered_10003038(uint param_1,uint param_2)

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
 * Address: 0x10003088
 */

uint recovered_10003088(uint param_1,uint param_2)

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
 * Address: 0x100030c0
 */

uint recovered_100030c0(uint param_1,uint param_2)

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
 * Address: 0x10003130
 */

uint recovered_10003130(uint param_1,uint param_2)

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
 * Address: 0x1000319c
 */

undefined8 recovered_1000319c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10006940(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031ac
 */

undefined8 recovered_100031ac(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10006880(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031bc
 */

float recovered_100031bc(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100069c8(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d8
 */

float recovered_100031d8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006a10(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000c078
#define DAT_1000c078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

void recovered_100031f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_1000c078 = 0;
  recovered_10003284();
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return;
}

#undef DAT_1000c078
#undef DAT_1000c080

#undef DAT_1000c078
#define DAT_1000c078 (*(char *)(((uintptr_t)pf_module_state + 0x224U)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(int *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(int *)(((uintptr_t)pf_module_state + 0x230U)))
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
 * Address: 0x10003284
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003284(void)

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
  if (DAT_1000c078 != '\0') {
    return;
  }
  DAT_1000c07c = 0;
  DAT_1000c084 = 0;
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
        if (iVar11 == 0) goto LAB_10003484;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_100083b0((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_1000c07c != 0) goto LAB_100034b4;
    }
  }
LAB_10003484:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_100083b0((int *)0x300000,piVar4,&local_24);
LAB_100034b4:
  if (DAT_1000c084 == 0) {
    DAT_1000c084 = DAT_1000c07c;
  }
  DAT_1000c078 = 1;
  return;
}

#undef DAT_1000c078
#undef DAT_1000c07c
#undef DAT_1000c084
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003504
 */

bool recovered_10003504(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10003580(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return bVar1;
}

#undef DAT_1000c080

#undef DAT_1000c07c
#define DAT_1000c07c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(int * *)(((uintptr_t)pf_module_state + 0x230U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003580
 */

bool recovered_10003580(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10003284();
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
        piVar1 = DAT_1000c07c;
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
      piVar3 = (int *)&DAT_1000c07c;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_100083b0((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_1000c084 == (int *)0x0) {
        DAT_1000c084 = DAT_1000c07c;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_1000c07c
#undef DAT_1000c084
#undef DAT_68000000
#undef local_24

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c8
 */

bool recovered_100037c8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  bVar1 = recovered_10003580(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return bVar1;
}

#undef DAT_1000c080
#undef local_10
#undef local_14

#undef DAT_1000c07c
#define DAT_1000c07c (*(uint * *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003860
 */

int recovered_10003860(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003284();
  iVar1 = 0;
  puVar3 = DAT_1000c07c;
  while (puVar3 != (uint *)0x0) {
    uVar4 = (uint)(byte)puVar3[3];
    bVar5 = uVar4 == 1;
    if (bVar5) {
      uVar4 = *puVar3;
    }
    puVar3 = (uint *)puVar3[1];
    if (bVar5) {
      iVar1 = uVar4 + iVar1;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return iVar1;
}

#undef DAT_1000c07c
#undef DAT_1000c080

#undef DAT_1000c07c
#define DAT_1000c07c (*(int *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003910
 */

void recovered_10003910(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003284();
  for (iVar1 = DAT_1000c07c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c080

#undef DAT_1000c07c
#define DAT_1000c07c (*(int * *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039cc
 */

int recovered_100039cc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003284();
  iVar1 = 0;
  for (piVar3 = DAT_1000c07c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return iVar1;
}

#undef DAT_1000c07c
#undef DAT_1000c080

#undef DAT_1000c07c
#define DAT_1000c07c (*(int *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a74
 */

void recovered_10003a74(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003284();
  for (iVar1 = DAT_1000c07c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b24
 */

void recovered_10003b24(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003ba8(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return;
}

#undef DAT_1000c080

#undef DAT_1000c07c
#define DAT_1000c07c (*(uint * *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint * *)(((uintptr_t)pf_module_state + 0x230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba8
 */

uint * recovered_10003ba8(int param_1,uint *param_2,uint *param_3)

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
    recovered_10003284();
    puVar4 = DAT_1000c07c;
    puVar5 = DAT_1000c084;
    if (DAT_1000c084 == (uint *)0x0) {
      puVar5 = DAT_1000c07c;
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
              if (uVar7 < uVar8) goto joined_r0x10003c88;
            }
          }
          else {
joined_r0x10003c88:
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
LAB_10003d80:
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
                    DAT_1000c084 = DAT_1000c07c;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_1000c084 = puVar4;
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
                      puVar2 = recovered_100085b0(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10003d80;
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

#undef DAT_1000c07c
#undef DAT_1000c084

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e00
 */

void recovered_10003e00(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003ba8(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return;
}

#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e88
 */

uint * recovered_10003e88(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10003ba8(param_1,param_2,param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return puVar2;
}

#undef DAT_1000c080

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f18
 */

void recovered_10003f18(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f94(param_1);
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return;
}

#undef DAT_1000c080

#undef DAT_1000c084
#define DAT_1000c084 (*(uint * *)(((uintptr_t)pf_module_state + 0x230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f94
 */

void recovered_10003f94(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10003284();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_1000c084 == puVar1) {
        DAT_1000c084 = puVar4;
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
          if (DAT_1000c084 == puVar4) {
            DAT_1000c084 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_1000c084 = puVar4;
  return;
}

#undef DAT_1000c084

#undef DAT_1000c080
#define DAT_1000c080 (*(int *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint * *)(((uintptr_t)pf_module_state + 0x230U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004100
 */

uint * recovered_10004100(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_1000c080 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x22cU));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x22cU),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (uint *)0x0) {
    puVar3 = recovered_10003ba8(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_10004334;
  }
  if (param_2 == 0) {
    recovered_10003f94((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_10004334;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_10004334;
  recovered_10003284();
  puVar12 = (uint *)(param_2 + 0xf & 0xfffffff0);
  puVar6 = param_1 + -4;
  puVar7 = (uint *)*puVar6;
  if (puVar12 <= puVar7) {
    puVar3 = (uint *)0x0;
    if ((uint *)((int)puVar12 + -1) < puVar7) {
      bVar15 = (uint *)0xffffffdf < puVar12;
      if (-(uint)(puVar7 < puVar12) == 0 &&
          (uint)(0x1f < (uint)((int)puVar7 - (int)puVar12)) <= -(uint)(puVar7 < puVar12)) {
        bVar15 = (uint *)0xffffffef < puVar7;
      }
      if (!bVar15) {
        if ((uint)((int)puVar7 - (int)puVar12) < 0x20) {
          puVar3 = param_1;
        }
        else {
          DAT_1000c084 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_1000c084 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = param_1[-3];
          *(undefined1 *)(DAT_1000c084 + 3) = 1;
          DAT_1000c084[2] = (uint)puVar6;
          DAT_1000c084[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_1000c084;
          }
          param_1[-3] = (uint)DAT_1000c084;
          param_1[-4] = (uint)puVar12;
          puVar3 = param_1;
        }
      }
    }
    goto LAB_10004334;
  }
  puVar3 = puVar6;
  puVar2 = puVar7;
  puVar5 = puVar7;
  do {
    puVar9 = (uint *)puVar3[1];
    if ((((puVar9 == (uint *)0x0) || ((char)puVar9[3] != '\x01')) || ((uint *)0xffffffef < puVar5))
       || (((uint *)((undefined1 *)((int)puVar3 + (int)puVar2) + 0x10) != puVar9 ||
           (puVar2 = (uint *)*puVar9, (uint *)(-0x11 - (int)puVar5) < puVar2)))) break;
    puVar5 = (uint *)((undefined1 *)((int)puVar5 + (int)puVar2) + 0x10);
    puVar3 = puVar9;
  } while (puVar5 < puVar12);
  if ((uint *)((int)puVar12 + -1) < puVar5) {
    bVar15 = (uint *)0xffffffdf < puVar12;
    if (-(uint)(puVar5 < puVar12) == 0 &&
        (uint)(0x1f < (uint)((int)puVar5 - (int)puVar12)) <= -(uint)(puVar5 < puVar12)) {
      bVar15 = (uint *)0xffffffef < puVar5;
    }
    if (!bVar15) {
      puVar2 = (uint *)param_1[-3];
      puVar3 = DAT_1000c084;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_1000c084 = puVar6;
        }
        puVar7 = (uint *)((int)puVar7 + uVar1 + 0x10);
        param_1[-4] = (uint)puVar7;
        if (puVar2 != (uint *)0x0) {
          puVar2[2] = (uint)puVar6;
        }
        param_1[-3] = (uint)puVar2;
      } while (puVar7 < puVar12);
      puVar3 = (uint *)0x0;
      if (puVar12 <= puVar7) {
        iVar4 = recovered_10008634(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_1000c084 = (uint *)param_1[-3];
        }
        *(undefined1 *)(param_1 + -1) = 0;
        puVar3 = param_1;
      }
      goto LAB_10004334;
    }
  }
  puVar7 = recovered_10003ba8((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_10004334;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = param_1;
  if (puVar12 < &SupervisorCall) {
LAB_10004404:
    if (puVar12 != (uint *)0x0) goto LAB_1000440c;
  }
  else {
    puVar6 = (uint *)((uint)puVar7 ^ (uint)param_1);
    if (((uint)puVar6 & 3) == 0) {
      if (((uint)puVar7 & 3) == 0) {
        puVar3 = param_1;
        puVar5 = puVar7;
        puVar9 = puVar12;
      }
      else {
        *(char *)puVar7 = (char)*param_1;
        if ((uint *)((int)puVar12 + -1) == (uint *)0x0 || ((uint)((int)puVar7 + 1) & 3) == 0) {
          puVar3 = (uint *)((int)param_1 + 1);
          puVar5 = (uint *)((int)puVar7 + 1);
          puVar9 = (uint *)((int)puVar12 + -1);
        }
        else {
          *(undefined1 *)((int)puVar7 + 1) = *(undefined1 *)((int)param_1 + 1);
          puVar3 = (uint *)((int)param_1 + 2);
          puVar5 = (uint *)((int)puVar7 + 2);
          puVar9 = (uint *)((int)puVar12 + -2);
          if ((uint *)((int)puVar12 + -2) != (uint *)0x0 && ((uint)((int)puVar7 + 2) & 3) != 0) {
            puVar9 = (uint *)((int)puVar12 + -3);
            *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)param_1 + 2);
            puVar3 = (uint *)((int)param_1 + 3);
            puVar5 = (uint *)((int)puVar7 + 3);
            if ((puVar9 != (uint *)0x0) && (((uint)puVar5 & 3) != 0)) {
              puVar9 = puVar12 + -1;
              *(undefined1 *)((int)puVar7 + 3) = *(undefined1 *)((int)param_1 + 3);
              puVar5 = puVar7 + 1;
              puVar3 = param_1 + 1;
            }
          }
        }
      }
      puVar10 = puVar5;
      if (puVar9 < &DataAbort) {
        puVar6 = puVar5;
        puVar2 = puVar3;
        puVar12 = puVar9;
      }
      else {
        if ((uint *)0x2f < puVar9 + -4) {
          puVar6 = (uint *)((uint)puVar9 & 0xfffffff0);
          bVar15 = puVar5 < (uint *)((int)puVar3 + (int)puVar6);
          if (bVar15) {
            puVar6 = (uint *)((int)puVar5 + (int)puVar6);
          }
          if (!(bVar15 && puVar3 < puVar6)) {
            uVar14 = ((uint)(puVar9 + -4) >> 4) + 1;
            uVar11 = uVar14 & 0xfffffffc;
            puVar12 = puVar9 + uVar11 * -4;
            puVar6 = puVar5 + uVar11 * 4;
            puVar2 = puVar3 + uVar11 * 4;
            uVar1 = uVar11;
            do {
              uVar16 = *(undefined8 *)(puVar3 + 2);
              puVar10 = puVar5 + 0x10;
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
              puVar5 = puVar10;
            } while (uVar1 != 0);
            puVar5 = puVar6;
            puVar3 = puVar2;
            puVar9 = puVar12;
            if (uVar14 == uVar11) goto LAB_100045ec;
          }
        }
        do {
          puVar9 = puVar9 + -4;
          *puVar5 = *puVar3;
          puVar5[1] = puVar3[1];
          puVar5[2] = puVar3[2];
          puVar6 = puVar3 + 3;
          puVar3 = puVar3 + 4;
          puVar5[3] = *puVar6;
          puVar5 = puVar5 + 4;
          puVar6 = puVar5;
          puVar2 = puVar3;
          puVar12 = puVar9;
        } while ((uint *)0xf < puVar9);
      }
LAB_100045ec:
      if (puVar12 < &UndefinedInstruction) {
        puVar3 = puVar6;
      }
      else {
        puVar3 = puVar12 + -1;
        bVar15 = puVar3 == (uint *)&PrefetchAbort;
        if ((uint *)0xb < puVar3) {
          puVar10 = (uint *)((int)puVar6 - (int)puVar2);
          bVar15 = puVar10 == (uint *)0xf;
        }
        if (((uint *)0xb < puVar3 && (uint *)0xe < puVar10) && !bVar15) {
          uVar14 = ((uint)puVar3 >> 2) + 1;
          uVar11 = uVar14 & 0xfffffffc;
          puVar12 = puVar12 + -uVar11;
          puVar5 = puVar6 + uVar11;
          puVar9 = puVar2 + uVar11;
          uVar1 = uVar11;
          do {
            uVar16 = *(undefined8 *)puVar2;
            uVar17 = *(undefined8 *)(puVar2 + 2);
            puVar2 = puVar2 + 4;
            uVar1 = uVar1 - 4;
            *(undefined8 *)puVar6 = uVar16;
            *(undefined8 *)(puVar6 + 2) = uVar17;
            puVar6 = puVar6 + 4;
          } while (uVar1 != 0);
          puVar3 = puVar5;
          puVar2 = puVar9;
          if (uVar14 == uVar11) goto LAB_10004404;
        }
        else {
          puVar5 = puVar6;
          puVar9 = puVar2;
        }
        do {
          puVar2 = puVar9 + 1;
          puVar6 = (uint *)*puVar9;
          puVar12 = puVar12 + -1;
          puVar3 = puVar5 + 1;
          *puVar5 = (uint)puVar6;
          puVar5 = puVar3;
          puVar9 = puVar2;
        } while ((uint *)0x3 < puVar12);
      }
      goto LAB_10004404;
    }
LAB_1000440c:
    if ((uint *)0xf < puVar12) {
      puVar6 = (uint *)((int)puVar3 - (int)puVar2);
    }
    if ((uint *)0xf < puVar12 && (uint *)0xf < puVar6) {
      puVar13 = (uint *)((uint)puVar12 & 0xfffffff0);
      puVar6 = (uint *)((uint)puVar12 & 0xf);
      puVar10 = (uint *)((int)puVar2 + (int)puVar13);
      puVar5 = (uint *)((int)puVar3 + (int)puVar13);
      puVar9 = puVar13;
      do {
        uVar16 = *(undefined8 *)puVar2;
        uVar17 = *(undefined8 *)(puVar2 + 2);
        puVar2 = puVar2 + 4;
        puVar9 = puVar9 + -4;
        *(undefined8 *)puVar3 = uVar16;
        *(undefined8 *)(puVar3 + 2) = uVar17;
        puVar3 = puVar3 + 4;
      } while (puVar9 != (uint *)0x0);
      if (puVar12 == puVar13) goto LAB_10004468;
    }
    else {
      puVar6 = puVar12;
      puVar5 = puVar3;
      puVar10 = puVar2;
    }
    do {
      puVar6 = (uint *)((int)puVar6 + -1);
      *(char *)puVar5 = (char)*puVar10;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
    } while (puVar6 != (uint *)0x0);
  }
LAB_10004468:
  recovered_10003f94((int)param_1);
  puVar3 = puVar7;
LAB_10004334:
  DataMemoryBarrier(0xb);
  DAT_1000c080 = 0;
  return puVar3;
}

#undef DAT_1000c080
#undef DAT_1000c084
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046a0
 */

longlong recovered_100046a0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100046f4
 */

ulonglong recovered_100046f4(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10004748
 */

undefined8 recovered_10004748(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10004794
 */

undefined8 recovered_10004794(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004878
 */

undefined8 recovered_10004878(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100048f8
 */

undefined8 recovered_100048f8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004a10
 */

undefined8 recovered_10004a10(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004acc
 */

void recovered_10004acc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ad4
 */

int recovered_10004ad4(int param_1)

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
 * Address: 0x10004ae0
 */

undefined4 recovered_10004ae0(ulong in_r0)

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
                    /* WARNING: Could not recover jumptable at 0x10004b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*UNRECOVERED_JUMPTABLE)(in_r0);
      return pvVar3;
    }
  }
  return 0;
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
 * Address: 0x10004b34
 */

void recovered_10004b34(void *in_r0)

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
                    /* WARNING: Could not recover jumptable at 0x10004b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(in_r0);
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
 * Address: 0x10004b84
 */

undefined4 recovered_10004b84(void *in_r0,ulong in_r1)

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
                    /* WARNING: Could not recover jumptable at 0x10004bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*UNRECOVERED_JUMPTABLE)(in_r0,in_r1);
      return pvVar3;
    }
  }
  return 0;
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
 * Address: 0x10004bd8
 */

void recovered_10004bd8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10004c14;
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
          if (uVar9 == uVar7) goto LAB_10004da8;
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
LAB_10004da8:
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
        if (uVar7 == uVar9) goto LAB_10004c0c;
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
LAB_10004c0c:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_10004c14:
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
 * Address: 0x10004e5c
 */

void recovered_10004e5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    goto LAB_10004ea4;
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
          if (puVar7 == param_3) goto LAB_10005130;
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
LAB_10005130:
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
        if (param_3 == puVar7) goto LAB_100051ac;
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
LAB_100051ac:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_10004ea4:
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
    goto LAB_10004f20;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_100051bc:
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
          goto LAB_100051bc;
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
        if (uVar8 == uVar10) goto LAB_10005298;
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
LAB_10005298:
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
      if (uVar10 == uVar8) goto LAB_10005354;
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
LAB_10005354:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10004f20:
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
 * Address: 0x10005368
 */

void recovered_10005368(byte *param_1,byte param_2,uint param_3)

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
  if (param_3 < 8) goto joined_r0x100054f0;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10005408:
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
        if (uVar5 == uVar6) goto joined_r0x10005494;
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
      goto joined_r0x10005408;
    }
  }
joined_r0x10005494:
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
      if (uVar6 == uVar5) goto joined_r0x100054f0;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x100054f0:
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
 * Address: 0x10005568
 */

void recovered_10005568(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100056e8;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10005604:
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
        if (uVar7 == uVar8) goto joined_r0x10005688;
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
      goto joined_r0x10005604;
    }
  }
joined_r0x10005688:
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
      if (uVar7 == uVar8) goto joined_r0x100056e8;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100056e8:
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
 * Address: 0x10005764
 */

void recovered_10005764(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100058e4;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10005800:
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
        if (uVar7 == uVar8) goto joined_r0x10005884;
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
      goto joined_r0x10005800;
    }
  }
joined_r0x10005884:
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
      if (uVar7 == uVar8) goto joined_r0x100058e4;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100058e4:
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
 * Address: 0x10005960
 */

char * recovered_10005960(char *param_1,char param_2,int param_3)

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
 * Address: 0x10005994
 */

int recovered_10005994(uint *param_1,uint *param_2,uint param_3)

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
LAB_10005a8c:
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
      if (uVar5 != uVar6) goto LAB_10005b84;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10005b84;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10005b84;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10005b84;
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
LAB_10005abc:
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
      if (uVar5 != uVar6) goto LAB_10005abc;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_10005b8c((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_10005a8c;
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
LAB_10005b84:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b8c
 */

int recovered_10005b8c(byte *param_1,byte *param_2)

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
 * Address: 0x10005bdc
 */

bool recovered_10005bdc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bf0
 */

bool recovered_10005bf0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c04
 */

bool recovered_10005c04(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c1c
 */

bool recovered_10005c1c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c48
 */

bool recovered_10005c48(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c68
 */

bool recovered_10005c68(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c7c
 */

int recovered_10005c7c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c8c
 */

int recovered_10005c8c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c9c
 */

int recovered_10005c9c(int param_1)

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
 * Address: 0x10005cc4
 */

int recovered_10005cc4(byte *param_1,byte *param_2)

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
LAB_10005cfc:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10005cfc;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d08
 */

int recovered_10005d08(byte *param_1,byte *param_2)

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
LAB_10005d40:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10005d40;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d4c
 */

void recovered_10005d4c(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + iVar2);
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return;
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
 * Address: 0x10005d68
 */

undefined8 * recovered_10005d68(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *extraout_r1 = 0;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar12 = 0xfffffffc;
  do {
    uVar6 = uVar12;
    uVar12 = uVar6 + 1;
  } while (*(char *)((int)param_1 + uVar6 + 4) != '\0');
  iVar2 = Ram40010800;
  if (iVar2 != 0x50414d57) {
    return (undefined8 *)0x0;
  }
  iVar2 = Ram40010804;
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  uVar12 = Ram40010808;
  bVar14 = 0xb < uVar12;
  if (bVar14) {
    uVar12 = Ram40010808;
  }
  if (!bVar14 || uVar12 < 0x50) {
    return (undefined8 *)0x0;
  }
  pcVar3 = (code *)UINT_4001084c;
  if (pcVar3 == (code *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar12 = uVar6 + 5;
  puVar4 = (*pcVar3)(uVar12);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar8 = puVar4;
  if (uVar12 < 8) {
    puVar5 = extraout_r1;
  }
  else {
    puVar5 = (undefined8 *)((uint)puVar4 ^ (uint)param_1);
    if (((uint)puVar5 & 3) != 0) goto LAB_10005e30;
    if (((uint)puVar4 & 3) == 0) {
      puVar10 = param_1;
    }
    else {
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      if (uVar6 == 0xfffffffc || ((uint)((int)puVar4 + 1) & 3) == 0) {
        puVar8 = (undefined8 *)((int)puVar4 + 1);
        puVar10 = (undefined8 *)((int)param_1 + 1);
        uVar12 = uVar6 + 4;
      }
      else {
        *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)param_1 + 1);
        puVar8 = (undefined8 *)((int)puVar4 + 2);
        puVar10 = (undefined8 *)((int)param_1 + 2);
        uVar12 = uVar6 + 3;
        if (uVar6 != 0xfffffffd && ((uint)((int)puVar4 + 2) & 3) != 0) {
          puVar10 = (undefined8 *)((int)param_1 + 3);
          puVar8 = (undefined8 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)param_1 + 2);
          uVar12 = uVar6 + 2;
          if ((uVar6 != 0xfffffffe) && (((uint)puVar8 & 3) != 0)) {
            puVar8 = (undefined8 *)((int)puVar4 + 4);
            *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)param_1 + 3);
            puVar10 = (undefined8 *)((int)param_1 + 4);
            uVar12 = uVar6 + 1;
          }
        }
      }
    }
    if (uVar12 < 0x10) {
      puVar5 = puVar8;
      puVar7 = puVar10;
    }
    else {
      if (0x2f < uVar12 - 0x10) {
        puVar5 = (undefined8 *)(uVar12 & 0xfffffff0);
        param_1 = (undefined8 *)((int)puVar10 + (int)puVar5);
        if (puVar8 < param_1) {
          puVar5 = (undefined8 *)((int)puVar8 + (int)puVar5);
        }
        if (!(puVar8 < param_1 && puVar10 < puVar5)) {
          uVar9 = (uVar12 - 0x10 >> 4) + 1;
          uVar13 = uVar9 & 0xfffffffc;
          uVar12 = uVar12 + uVar13 * -0x10;
          puVar5 = puVar8 + uVar13 * 2;
          puVar7 = puVar10 + uVar13 * 2;
          uVar6 = uVar13;
          do {
            uVar15 = puVar10[1];
            param_1 = puVar8 + 8;
            uVar6 = uVar6 - 4;
            uVar16 = puVar10[2];
            uVar17 = puVar10[3];
            uVar18 = puVar10[4];
            uVar19 = puVar10[5];
            uVar20 = puVar10[6];
            uVar21 = puVar10[7];
            *puVar8 = *puVar10;
            puVar8[1] = uVar15;
            puVar8[2] = uVar16;
            puVar8[3] = uVar17;
            puVar8[4] = uVar18;
            puVar8[5] = uVar19;
            puVar8[6] = uVar20;
            puVar8[7] = uVar21;
            puVar8 = param_1;
            puVar10 = puVar10 + 8;
          } while (uVar6 != 0);
          puVar8 = puVar5;
          puVar10 = puVar7;
          if (uVar9 == uVar13) goto LAB_10005fc4;
        }
      }
      do {
        uVar12 = uVar12 - 0x10;
        *(undefined4 *)puVar8 = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar8 + 4) = *(undefined4 *)((int)puVar10 + 4);
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar10 + 1);
        puVar1 = (undefined4 *)((int)puVar10 + 0xc);
        puVar10 = puVar10 + 2;
        *(undefined4 *)((int)puVar8 + 0xc) = *puVar1;
        puVar8 = puVar8 + 2;
        puVar5 = puVar8;
        puVar7 = puVar10;
      } while (0xf < uVar12);
    }
LAB_10005fc4:
    if (uVar12 < 4) {
      puVar8 = puVar5;
      param_1 = puVar7;
    }
    else {
      uVar6 = uVar12 - 4;
      bVar14 = uVar6 == 0xc;
      if (0xb < uVar6) {
        param_1 = (undefined8 *)((int)puVar5 - (int)puVar7);
        bVar14 = param_1 == (undefined8 *)0xf;
      }
      if ((0xb < uVar6 && (undefined8 *)0xe < param_1) && !bVar14) {
        uVar13 = (uVar6 >> 2) + 1;
        uVar9 = uVar13 & 0xfffffffc;
        uVar12 = uVar12 + uVar9 * -4;
        puVar10 = (undefined8 *)((int)puVar5 + uVar9 * 4);
        puVar11 = (undefined8 *)((int)puVar7 + uVar9 * 4);
        uVar6 = uVar9;
        do {
          uVar15 = *puVar7;
          uVar16 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar6 = uVar6 - 4;
          *puVar5 = uVar15;
          puVar5[1] = uVar16;
          puVar5 = puVar5 + 2;
        } while (uVar6 != 0);
        puVar8 = puVar10;
        param_1 = puVar11;
        if (uVar13 == uVar9) goto LAB_10005e28;
      }
      else {
        puVar10 = puVar5;
        puVar11 = puVar7;
      }
      do {
        param_1 = (undefined8 *)((int)puVar11 + 4);
        puVar5 = *(undefined8 **)puVar11;
        uVar12 = uVar12 - 4;
        puVar8 = (undefined8 *)((int)puVar10 + 4);
        *(undefined8 **)puVar10 = puVar5;
        puVar10 = puVar8;
        puVar11 = param_1;
      } while (3 < uVar12);
    }
  }
LAB_10005e28:
  if (uVar12 == 0) {
    return puVar4;
  }
LAB_10005e30:
  if (0xf < uVar12) {
    puVar5 = (undefined8 *)((int)puVar8 - (int)param_1);
  }
  if (0xf < uVar12 && (undefined8 *)0xf < puVar5) {
    uVar13 = uVar12 & 0xfffffff0;
    uVar6 = uVar12 & 0xf;
    puVar10 = (undefined8 *)((int)param_1 + uVar13);
    puVar5 = (undefined8 *)((int)puVar8 + uVar13);
    uVar9 = uVar13;
    do {
      uVar15 = *param_1;
      uVar16 = param_1[1];
      param_1 = param_1 + 2;
      uVar9 = uVar9 - 0x10;
      *puVar8 = uVar15;
      puVar8[1] = uVar16;
      puVar8 = puVar8 + 2;
    } while (uVar9 != 0);
    if (uVar12 == uVar13) {
      return puVar4;
    }
  }
  else {
    uVar6 = uVar12;
    puVar5 = puVar8;
    puVar10 = param_1;
  }
  do {
    uVar6 = uVar6 - 1;
    *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
    puVar5 = (undefined8 *)((int)puVar5 + 1);
    puVar10 = (undefined8 *)((int)puVar10 + 1);
  } while (uVar6 != 0);
  return puVar4;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000607c
 */

char * recovered_1000607c(char *param_1,char param_2)

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
 * Address: 0x100060b0
 */

int recovered_100060b0(char *param_1,char *param_2)

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
 * Address: 0x10006114
 */

int recovered_10006114(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  char cVar4;

  cVar4 = *param_1;
  if (cVar4 == '\0') {
    return 0;
  }
  iVar3 = 0;
  do {
    if (*param_2 != '\0') {
      pcVar1 = param_2;
      cVar2 = *param_2;
      do {
        pcVar1 = pcVar1 + 1;
        if (cVar4 == cVar2) {
          return iVar3;
        }
        cVar2 = *pcVar1;
      } while (cVar2 != '\0');
    }
    iVar3 = iVar3 + 1;
    cVar4 = param_1[iVar3];
  } while (cVar4 != '\0');
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000617c
 */

char * recovered_1000617c(char *param_1,char *param_2)

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
 * Address: 0x100061dc
 */

char * recovered_100061dc(char *param_1,char *param_2)

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


#undef DAT_1000be78
#define DAT_1000be78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006240
 */

undefined * recovered_10006240(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000be78;
}

#undef DAT_1000be78

#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006250
 */

undefined ** recovered_10006250(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c008;
}

#undef PTR_DAT_1000c008

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
#undef UINT_40010968
#define UINT_40010968 (*(uint *)(0x40010968U))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_14 (*(undefined4 *)(pf_stack_frame + 44))
#define local_10 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006260
 */

undefined4 recovered_10006260(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;

  uStack_20 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_1c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uStack_18 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_10 = 0;
  local_24 = 0;
  local_14 = 0;
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if (((bVar4 && 0x16b < uVar3) && (pcVar2 = (code *)UINT_40010968, pcVar2 != (code *)0x0)) &&
       (uVar3 = (*pcVar2)(&local_24), uVar3 != 0)) goto LAB_100062c8;
  }
  local_1c = 0x574d4236;
LAB_100062c8:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_1c;
  }
  return local_1c;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010968
#undef uStack_18
#undef local_24
#undef local_1c
#undef local_14
#undef local_10
#undef uStack_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006310
 */

double recovered_10006310(undefined4 param_1,undefined4 param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  if ((int)param_3 < 1) {
    if (0x7fffffff < param_3) {
      do {
        dVar3 = dVar3 * 0.5;
        bVar2 = param_3 != 0xffffffff;
        param_3 = param_3 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = param_3 + 1;
    do {
      dVar3 = dVar3 + dVar3;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006354
 */

double recovered_10006354(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x1000640c
 */

double recovered_1000640c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_4,param_3));
  if (dVar2 == 0.0) {
    return 0.0;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(param_2,param_1)) / dVar2,3);
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44(param_2,param_1)) - dVar3 * dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006444
 */

double recovered_10006444(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100064c4
 */

double recovered_100064c4(undefined4 param_1,undefined4 param_2)

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
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064f4
 */

double recovered_100064f4(undefined4 param_1,undefined4 param_2)

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
  if (dVar5 < dVar4) {
    dVar5 = dVar5 + 1.0;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006538
 */

double recovered_10006538(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100066b0
#define DAT_100066b0 (*(double *)(0x100066b0U))
#undef DAT_100066b8
#define DAT_100066b8 (*(double *)(0x100066b8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006580
 */

double recovered_10006580(undefined4 param_1,undefined4 param_2)

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
    return DAT_100066b0;
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
  return dVar4 + dVar4 + dVar5 * DAT_100066b8;
}

#undef DAT_100066b0
#undef DAT_100066b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066c0
 */

undefined8 recovered_100066c0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10006880(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_10006780
#define DAT_10006780 (*(double *)(0x10006780U))
#undef DAT_10006788
#define DAT_10006788 (*(double *)(0x10006788U))
#undef DAT_10006790
#define DAT_10006790 (*(double *)(0x10006790U))
#undef DAT_10006798
#define DAT_10006798 (*(double *)(0x10006798U))
#undef DAT_100067a0
#define DAT_100067a0 (*(double *)(0x100067a0U))
#undef DAT_100067a8
#define DAT_100067a8 (*(double *)(0x100067a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f0
 */

double recovered_100066f0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10006780 < dVar1; dVar1 = dVar1 + DAT_10006788
      ) {
  }
  for (; dVar1 < DAT_10006790; dVar1 = dVar1 + DAT_10006798) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100067a0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100067a8);
}

#undef DAT_10006780
#undef DAT_10006788
#undef DAT_10006790
#undef DAT_10006798
#undef DAT_100067a0
#undef DAT_100067a8

#undef DAT_10006838
#define DAT_10006838 (*(double *)(0x10006838U))
#undef DAT_10006840
#define DAT_10006840 (*(double *)(0x10006840U))
#undef DAT_10006848
#define DAT_10006848 (*(double *)(0x10006848U))
#undef DAT_10006850
#define DAT_10006850 (*(double *)(0x10006850U))
#undef DAT_10006858
#define DAT_10006858 (*(double *)(0x10006858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b0
 */

double recovered_100067b0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10006838 < dVar1; dVar1 = dVar1 + DAT_10006840
      ) {
  }
  for (; dVar1 < DAT_10006848; dVar1 = dVar1 + DAT_10006850) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10006858;
}

#undef DAT_10006838
#undef DAT_10006840
#undef DAT_10006848
#undef DAT_10006850
#undef DAT_10006858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006860
 */

double recovered_10006860(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10006938
#define DAT_10006938 (*(double *)(0x10006938U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

undefined8 recovered_10006880(undefined4 param_1,undefined4 param_2)

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
  dVar8 = DAT_10006938;
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

#undef DAT_10006938

#undef DAT_100069c0
#define DAT_100069c0 (*(double *)(0x100069c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006940
 */

undefined8 recovered_10006940(undefined4 param_1,undefined4 param_2)

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
  dVar8 = DAT_100069c0;
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

#undef DAT_100069c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c8
 */

double recovered_100069c8(uint param_1,uint param_2)

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
 * Address: 0x10006a10
 */

double recovered_10006a10(uint param_1,uint param_2)

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


#undef DAT_10006ae0
#define DAT_10006ae0 (*(float *)(0x10006ae0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa0
 */

float recovered_10006aa0(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_10006ae0;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_10006ae0

#undef DAT_10006b9c
#define DAT_10006b9c (*(float *)(0x10006b9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ae4
 */

float recovered_10006ae4(float param_1,float *param_2)

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
    return DAT_10006b9c;
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

#undef DAT_10006b9c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

float recovered_10006ba0(float param_1,uint param_2)

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


#undef DAT_10006c70
#define DAT_10006c70 (*(float *)(0x10006c70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bec
 */

float recovered_10006bec(float param_1,float param_2)

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
    return DAT_10006c70;
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

#undef DAT_10006c70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c74
 */

float recovered_10006c74(float param_1)

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
 * Address: 0x10006cac
 */

float recovered_10006cac(float param_1)

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
 * Address: 0x10006cf8
 */

double recovered_10006cf8(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10006d4c
 */

float recovered_10006d4c(float param_1)

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


#undef DAT_10006dfc
#define DAT_10006dfc (*(float *)(0x10006dfcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da8
 */

float recovered_10006da8(float param_1)

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
  return DAT_10006dfc;
}

#undef DAT_10006dfc

#undef DAT_10006f38
#define DAT_10006f38 (*(double *)(0x10006f38U))
#undef DAT_10006f40
#define DAT_10006f40 (*(float *)(0x10006f40U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

float recovered_10006e00(float param_1)

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
    return DAT_10006f40;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10006f38);
}

#undef DAT_10006f38
#undef DAT_10006f40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f44
 */

undefined8 recovered_10006f44(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10006880(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_10007010
#define DAT_10007010 (*(double *)(0x10007010U))
#undef DAT_10007018
#define DAT_10007018 (*(double *)(0x10007018U))
#undef DAT_10007020
#define DAT_10007020 (*(double *)(0x10007020U))
#undef DAT_10007028
#define DAT_10007028 (*(double *)(0x10007028U))
#undef DAT_10007030
#define DAT_10007030 (*(double *)(0x10007030U))
#undef DAT_10007038
#define DAT_10007038 (*(double *)(0x10007038U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f78
 */

float recovered_10006f78(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10007010 < dVar1; dVar1 = dVar1 + DAT_10007018) {
  }
  for (; dVar1 < DAT_10007020; dVar1 = dVar1 + DAT_10007028) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10007030 +
                         (dVar2 * dVar2 * dVar2) / DAT_10007038));
}

#undef DAT_10007010
#undef DAT_10007018
#undef DAT_10007020
#undef DAT_10007028
#undef DAT_10007030
#undef DAT_10007038

#undef DAT_100070d0
#define DAT_100070d0 (*(double *)(0x100070d0U))
#undef DAT_100070d8
#define DAT_100070d8 (*(double *)(0x100070d8U))
#undef DAT_100070e0
#define DAT_100070e0 (*(double *)(0x100070e0U))
#undef DAT_100070e8
#define DAT_100070e8 (*(double *)(0x100070e8U))
#undef DAT_100070f0
#define DAT_100070f0 (*(double *)(0x100070f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

float recovered_10007040(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_100070d0 < dVar1; dVar1 = dVar1 + DAT_100070d8) {
  }
  for (; dVar1 < DAT_100070e0; dVar1 = dVar1 + DAT_100070e8) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_100070f0);
}

#undef DAT_100070d0
#undef DAT_100070d8
#undef DAT_100070e0
#undef DAT_100070e8
#undef DAT_100070f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f8
 */

float recovered_100070f8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007114
 */

int recovered_10007114(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10007268
 */

int recovered_10007268(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x100072e4;
  }
  bVar2 = false;
joined_r0x100072e4:
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
 * Address: 0x100073c8
 */

double recovered_100073c8(byte *param_1,undefined4 *param_2)

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
      goto LAB_100074b4;
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
LAB_100074b4:
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
 * Address: 0x1000759c
 */

float recovered_1000759c(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100073c8(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000be7a
#define DAT_1000be7a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_1000be84
#define str_1000be84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000be95
#define str_1000be95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b8
 */

int recovered_100075b8(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10007638:
  while( true ) {
    pcVar6 = str_1000be95;
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
LAB_10007658:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10007678;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_100076e4;
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
LAB_100076e4:
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
      goto LAB_10007710;
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
LAB_10007710:
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
switchD_100078e4_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10008198;
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
      goto LAB_10007bb4;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_10007bb4:
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
      local_60[-iVar7] = str_1000be95[uVar11 + uVar12 * -10];
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
      goto LAB_10008198;
    }
    break;
  default:
    goto switchD_100078e4_caseD_4a;
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
      pcVar6 = str_1000be84;
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
    goto LAB_10008198;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10007658;
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
                      goto LAB_1000808c;
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
LAB_1000808c:
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
        local_60[-iVar7] = str_1000be95[uVar10 + uVar12 * -10];
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
LAB_10008054:
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
                    goto LAB_10008054;
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
    goto LAB_10007638;
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
      local_60[iVar7] = str_1000be95[uVar10 & 0xf];
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
    goto LAB_10007638;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10007638;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000be7a;
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
      goto LAB_100080b0;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_100080b0;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_100080b0:
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
      local_60[-iVar7] = str_1000be95[uVar11 + uVar12 * -10];
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
LAB_10008198:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10007638;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10007638;
code_r0x10007678:
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
  goto LAB_10007638;
}

#undef DAT_1000be7a
#undef str_1000be84
#undef str_1000be95
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008380
 */

void recovered_10008380(byte *param_1,uint param_2,byte *param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_4 = param_4;
  recovered_100075b8(param_1,param_2,param_3,(double *)&local_4);
  return;
}

#undef local_4

#undef DAT_1000c07c
#define DAT_1000c07c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x228U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(int * *)(((uintptr_t)pf_module_state + 0x230U)))
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
 * Address: 0x100083b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100083b0(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_1000c07c != 0;
          puVar4 = &DAT_1000c07c;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_1000c084;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_1000c084 = piVar3;
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
      puVar4 = &DAT_1000c07c;
      if (DAT_1000c07c != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_1000c084;
      goto LAB_10008594;
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
      bVar7 = DAT_1000c07c != 0;
      puVar4 = &DAT_1000c07c;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_1000c084;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_10008594:
      if (piVar5 == (int *)0x0) {
        DAT_1000c084 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c084
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085b0
 */

uint * recovered_100085b0(uint *param_1,uint *param_2)

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
 * Address: 0x10008634
 */

undefined4 recovered_10008634(uint *param_1,int param_2)

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


#undef DAT_1000c088
#define DAT_1000c088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
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
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x40010840U))
#define local_224 (*(char (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008694
 */

void recovered_10008694(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *puVar5;
  bool bVar6;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == '\b') {
        if (DAT_1000c088 != (undefined8 *)0x0) {
          DAT_1000c088 = (undefined8 *)((int)DAT_1000c088 + -1);
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1000c088 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)0x0;
          }
          else {
            recovered_10004bd8((undefined8 *)local_224,(undefined8 *)&DAT_1000c08c,DAT_1000c088);
            puVar5 = DAT_1000c088;
          }
          local_224[(int)puVar5] = '\0';
          iVar3 = Ram40010800;
          if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
            uVar2 = Ram40010808;
            bVar6 = 0xb < uVar2;
            if (bVar6) {
              uVar2 = Ram40010808;
            }
            if ((bVar6 && 0x43 < uVar2) && (pcVar4 = (code *)UINT_40010840, pcVar4 != (code *)0x0))
            {
              (*pcVar4)(local_224);
            }
          }
          DAT_1000c088 = (undefined8 *)0x0;
        }
        else {
          if ((int)DAT_1000c088 - 0x1ffU < 0xfffffe00) {
            recovered_10004bd8((undefined8 *)local_224,(undefined8 *)&DAT_1000c08c,DAT_1000c088);
            local_224[(int)DAT_1000c088] = '\0';
            iVar3 = Ram40010800;
            if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
              uVar2 = Ram40010808;
              bVar6 = 0xb < uVar2;
              if (bVar6) {
                uVar2 = Ram40010808;
              }
              if ((bVar6 && 0x43 < uVar2) && (pcVar4 = (code *)UINT_40010840, pcVar4 != (code *)0x0)
                 ) {
                (*pcVar4)(local_224);
              }
            }
            DAT_1000c088 = (undefined8 *)0x0;
          }
          *(char *)((int)DAT_1000c088 + ((uintptr_t)pf_module_state+0x238U)) = cVar1;
          DAT_1000c088 = (undefined8 *)((int)DAT_1000c088 + 1);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010840
#undef local_224

#undef DAT_1000c088
#define DAT_1000c088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
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
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x40010840U))
#define local_210 (*(char (*)[528])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008878
 */

void recovered_10008878(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  bool bVar5;

  puVar4 = (undefined8 *)0x0;
  if (DAT_1000c088 != (undefined8 *)0x0) {
    recovered_10004bd8((undefined8 *)local_210,(undefined8 *)&DAT_1000c08c,DAT_1000c088);
    puVar4 = DAT_1000c088;
  }
  local_210[(int)puVar4] = '\0';
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar5 = 0xb < uVar1;
    if (bVar5) {
      uVar1 = Ram40010808;
    }
    if ((bVar5 && 0x43 < uVar1) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
      (*pcVar3)(local_210);
    }
  }
  DAT_1000c088 = (undefined8 *)0x0;
  return;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010840
#undef local_210

#undef DAT_1000c088
#define DAT_1000c088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
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
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x40010840U))
#define acStack_214 (*(char (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008938
 */

void recovered_10008938(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;

  if (DAT_1000c088 == (undefined8 *)0x0) {
    return;
  }
  recovered_10004bd8((undefined8 *)acStack_214,(undefined8 *)&DAT_1000c08c,DAT_1000c088);
  acStack_214[(int)DAT_1000c088] = '\0';
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar1 = Ram40010808;
    bVar4 = 0xb < uVar1;
    if (bVar4) {
      uVar1 = Ram40010808;
    }
    if ((bVar4 && 0x43 < uVar1) && (pcVar3 = (code *)UINT_40010840, pcVar3 != (code *)0x0)) {
      (*pcVar3)(acStack_214);
    }
  }
  DAT_1000c088 = (undefined8 *)0x0;
  return;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010840
#undef acStack_214

#undef DAT_1000be83
#define DAT_1000be83 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000bea6
#define DAT_1000bea6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define abStack_14c (*(byte (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089f4
 */

void recovered_100089f4(byte *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  byte *pbVar1;
  undefined *puVar2;

  pbVar1 = &DAT_1000bea6;
  if (param_1 != (byte *)0x0) {
    pbVar1 = param_1;
  }
  puVar2 = &DAT_1000be83;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  recovered_10008380(abStack_14c,0x140,pbVar1,puVar2);
  if (0 < extraout_r0) {
    recovered_10008694((char *)abStack_14c,extraout_r0);
  }
  return;
}

#undef DAT_1000be83
#undef DAT_1000bea6
#undef abStack_14c

#undef DAT_1000bec4
#define DAT_1000bec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000bea9
#define str_1000bea9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a4c
 */

void recovered_10008a4c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10005c9c(((uintptr_t)pf_module_state+0x55U));
  recovered_10008694(str_1000bea9,iVar1);
  iVar1 = recovered_10005c9c(((uintptr_t)pf_module_state+0x70U));
  recovered_10008694(&DAT_1000bec4,iVar1);
  return;
}

#undef DAT_1000bec4
#undef str_1000bea9

#undef DAT_1000bec4
#define DAT_1000bec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000bec7
#define str_1000bec7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a98
 */

void recovered_10008a98(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10005c9c(((uintptr_t)pf_module_state+0x73U));
  recovered_10008694(str_1000bec7,iVar1);
  iVar1 = recovered_10005c9c(((uintptr_t)pf_module_state+0x70U));
  recovered_10008694(&DAT_1000bec4,iVar1);
  return;
}

#undef DAT_1000bec4
#undef str_1000bec7

#undef DAT_1000c088
#define DAT_1000c088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
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
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x40010840U))
#undef UINT_40010844
#define UINT_40010844 (*(uint *)(0x40010844U))
#define acStack_224 (*(char (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ae4
 */

bool recovered_10008ae4(int param_1,int param_2,char *param_3,uint param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1000c088 != (undefined8 *)0x0) {
    recovered_10004bd8((undefined8 *)acStack_224,(undefined8 *)&DAT_1000c08c,DAT_1000c088);
    acStack_224[(int)DAT_1000c088] = '\0';
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if ((bVar4 && 0x43 < uVar3) && (pcVar2 = (code *)UINT_40010840, pcVar2 != (code *)0x0)) {
        (*pcVar2)(acStack_224);
      }
    }
    DAT_1000c088 = (undefined8 *)0x0;
  }
  bVar4 = false;
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((bVar5 && 0x47 < uVar3) && (pcVar2 = (code *)UINT_40010844, pcVar2 != (code *)0x0)) {
      uVar3 = (*pcVar2)((char *)param_1,param_2,param_3,param_4);
      bVar4 = uVar3 != 0;
    }
  }
  return bVar4;
}

#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010840
#undef UINT_40010844
#undef acStack_224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c38
 */

undefined4 recovered_10008c38(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c40
 */

void recovered_10008c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c44
 */

undefined4 recovered_10008c44(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000bea6
#define DAT_1000bea6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
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
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef str_1000bf48
#define str_1000bf48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_1000bf55
#define str_1000bf55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_1000bf63
#define str_1000bf63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_20 (*(undefined8 * *)(pf_stack_frame + 32))
#define local_24 (*(undefined8 * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c4c
 */

byte * recovered_10008c4c(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *in_r1;
  undefined4 uVar9;
  byte bVar10;
  char *unaff_r8;
  bool bVar11;

  if (param_1 != (byte *)0x0) {
    unaff_r8 = param_2;
  }
  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    uVar9 = 0x16;
    goto LAB_10008ec0;
  }
  iVar3 = recovered_10005cc4(param_1,(byte *)str_1000bf48);
  if (iVar3 == 0) {
    uVar9 = 1;
LAB_10008e4c:
    pbVar5 = (byte *)recovered_10004ae0(800);
    if (pbVar5 != (byte *)0x0) {
      recovered_10005368(pbVar5,0,800);
      pbVar5[0x10c] = 0xff;
      pbVar5[0x10d] = 0xff;
      pbVar5[0x10e] = 0xff;
      pbVar5[0x10f] = 0xff;
      pbVar5[0x110] = iVar3 == 0;
      *(undefined4 *)pbVar5 = uVar9;
      pbVar5[0x111] = iVar3 != 0;
      recovered_10008380(pbVar5 + 4,0xf1,&DAT_1000bea6,param_1);
      return pbVar5;
    }
  }
  else {
    iVar4 = recovered_10005cc4(param_1,(byte *)str_1000bf55);
    if (iVar4 == 0) {
      uVar9 = 2;
      goto LAB_10008e4c;
    }
    iVar4 = recovered_10005cc4(param_1,(byte *)str_1000bf63);
    if (iVar4 == 0) {
      uVar9 = 3;
      goto LAB_10008e4c;
    }
    pbVar5 = (byte *)recovered_10004ae0(800);
    if (pbVar5 != (byte *)0x0) {
      recovered_10005368(pbVar5,0,800);
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pcVar6 = recovered_1000607c(unaff_r8,'r');
      bVar10 = 1;
      bVar2 = 1;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = recovered_1000607c(unaff_r8,'+');
        bVar2 = 1;
        if (pcVar6 == (char *)0x0) {
          pcVar6 = recovered_1000607c(unaff_r8,'a');
          bVar2 = 0;
          if (pcVar6 != (char *)0x0) {
            bVar2 = 1;
          }
        }
      }
      pbVar5[0x110] = bVar2;
      pcVar6 = recovered_1000607c(unaff_r8,'w');
      if ((pcVar6 == (char *)0x0) &&
         (pcVar6 = recovered_1000607c(unaff_r8,'a'), pcVar6 == (char *)0x0)) {
        pcVar6 = recovered_1000607c(unaff_r8,'+');
        bVar10 = 0;
        if (pcVar6 != (char *)0x0) {
          bVar10 = 1;
        }
      }
      pbVar5[0x111] = bVar10;
      pcVar6 = recovered_1000607c(unaff_r8,'a');
      pbVar5[0x112] = pcVar6 != (char *)0x0;
      pbVar5[0x10c] = 0xff;
      pbVar5[0x10d] = 0xff;
      pbVar5[0x10e] = 0xff;
      pbVar5[0x10f] = 0xff;
      recovered_10008380(pbVar5 + 4,0xf1,&DAT_1000bea6,param_1);
      recovered_10005368((byte *)&local_24,0,0xc);
      iVar3 = Ram40010800;
      if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
        uVar7 = Ram40010808;
        bVar11 = 0xb < uVar7;
        if (bVar11) {
          uVar7 = Ram40010808;
        }
        if (((bVar11 && 0x37 < uVar7) && (pcVar1 = (code *)UINT_40010834, pcVar1 != (code *)0x0)) &&
           (uVar7 = (*pcVar1)((char *)param_1,&local_24), uVar7 != 0)) {
          pcVar6 = recovered_1000607c(unaff_r8,'w');
          if ((pcVar6 == (char *)0x0) && (local_20 != (undefined8 *)0x0)) {
            if (pbVar5[0x111] == 1) {
              puVar8 = *(undefined8 **)(pbVar5 + 0x104);
              if (puVar8 < local_20) {
                if (puVar8 == (undefined8 *)0x0) {
                  puVar8 = (undefined8 *)0x100;
                }
                do {
                  in_r1 = puVar8;
                  puVar8 = (undefined8 *)((int)in_r1 << 1);
                } while (in_r1 < local_20);
                puVar8 = (undefined8 *)recovered_10004b84(*(void **)(pbVar5 + 0xfc),(ulong)in_r1);
                if (puVar8 == (undefined8 *)0x0) {
                  pbVar5[0x115] = 1;
                  uVar9 = 0xc;
                  goto LAB_10008ee8;
                }
                *(undefined8 **)(pbVar5 + 0x104) = in_r1;
                *(undefined8 **)(pbVar5 + 0xfc) = puVar8;
                *(undefined8 **)(pbVar5 + 0xf8) = puVar8;
              }
              else {
                puVar8 = *(undefined8 **)(pbVar5 + 0xfc);
              }
              recovered_10004bd8(puVar8,local_24,local_20);
            }
            else {
              *(undefined8 **)(pbVar5 + 0xf8) = local_24;
            }
            *(undefined8 **)(pbVar5 + 0x100) = local_20;
          }
          goto LAB_10008e24;
        }
      }
      if (pbVar5[0x111] == 0) {
        uVar9 = 2;
LAB_10008ee8:
        *DAT_10010004 = uVar9;
        recovered_10004b34(pbVar5);
        return (byte *)0x0;
      }
LAB_10008e24:
      if (pbVar5[0x112] == 1) {
        *(undefined4 *)(pbVar5 + 0x108) = *(undefined4 *)(pbVar5 + 0x100);
        return pbVar5;
      }
      return pbVar5;
    }
  }
  uVar9 = 0xc;
LAB_10008ec0:
  *DAT_10010004 = uVar9;
  return (byte *)0x0;
}

#undef DAT_1000bea6
#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef str_1000bf48
#undef str_1000bf55
#undef str_1000bf63
#undef local_20
#undef local_24

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
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
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fd0
 */

void recovered_10008fd0(byte *param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;

  if (param_3 == (uint *)0x0) goto LAB_10009024;
  uVar3 = *param_3;
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (uint)*(byte *)((int)param_3 + 0x113);
  }
  if (bVar4 && uVar3 == 1) {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if (((bVar4 && 0x3b < uVar3) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) &&
         (uVar3 = (*pcVar2)((char *)(param_3 + 1),(void *)param_3[0x3e],param_3[0x40]), uVar3 != 0))
      {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10008ff8;
      }
    }
    *(undefined1 *)((int)param_3 + 0x115) = 1;
    *DAT_10010004 = 5;
  }
LAB_10008ff8:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10004b34((void *)param_3[0x3f]);
  }
  recovered_10004b34(param_3);
LAB_10009024:
  recovered_10008c4c(param_1,param_2);
  return;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
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
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090d0
 */

undefined4 recovered_100090d0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *param_1;
  uVar4 = 0;
  bVar5 = uVar3 == 0;
  if (bVar5) {
    uVar3 = (uint)*(byte *)((int)param_1 + 0x113);
  }
  if (bVar5 && uVar3 == 1) {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar5 = 0xb < uVar3;
      if (bVar5) {
        uVar3 = Ram40010808;
      }
      if (((bVar5 && 0x3b < uVar3) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) &&
         (uVar3 = (*pcVar2)((char *)(param_1 + 1),(void *)param_1[0x3e],param_1[0x40]), uVar3 != 0))
      {
        uVar4 = 0;
        *(undefined1 *)((int)param_1 + 0x113) = 0;
        goto LAB_100090f8;
      }
    }
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar4 = 0xffffffff;
    *DAT_10010004 = 5;
  }
LAB_100090f8:
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10004b34((void *)param_1[0x3f]);
  }
  recovered_10004b34(param_1);
  return uVar4;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091c8
 */

uint recovered_100091c8(undefined8 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_10004bd8(param_1,(undefined8 *)(unaff_r4[0x3e] + uVar6),puVar4);
          unaff_r4[0x42] = unaff_r4[0x42] + (int)puVar4;
          if (puVar7 < puVar5) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10003038((uint)puVar4,param_2);
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
            uVar1 = recovered_100092f4(unaff_r4);
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


#undef DAT_1000be83
#define DAT_1000be83 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x234U)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
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
#undef UINT_40010840
#define UINT_40010840 (*(uint *)(0x40010840U))
#undef UINT_40010844
#define UINT_40010844 (*(uint *)(0x40010844U))
#define acStack_220 (*(char (*)[544])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092f4
 */

uint recovered_100092f4(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *buffer;
  bool bVar5;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar4 = param_1[0x43];
  if (uVar4 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar4;
  }
  if (*param_1 == 1) {
    uVar4 = param_1[199];
    if (uVar4 < (uint)param_1[0xc6]) {
LAB_10009350:
      param_1[199] = uVar4 + 1;
      return (uint)*(byte *)((int)param_1 + uVar4 + 0x116);
    }
    if (DAT_1000c088 != (undefined8 *)0x0) {
      recovered_10004bd8((undefined8 *)acStack_220,(undefined8 *)&DAT_1000c08c,DAT_1000c088);
      acStack_220[(int)DAT_1000c088] = '\0';
      iVar3 = Ram40010800;
      if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
        uVar4 = Ram40010808;
        bVar5 = 0xb < uVar4;
        if (bVar5) {
          uVar4 = Ram40010808;
        }
        if ((bVar5 && 0x43 < uVar4) && (pcVar1 = (code *)UINT_40010840, pcVar1 != (code *)0x0)) {
          (*pcVar1)(acStack_220);
        }
      }
      DAT_1000c088 = (undefined8 *)0x0;
    }
    iVar3 = Ram40010800;
    if ((iVar3 == 0x50414d57) && (iVar3 = Ram40010804, iVar3 != 0)) {
      uVar4 = Ram40010808;
      bVar5 = 0xb < uVar4;
      if (bVar5) {
        uVar4 = Ram40010808;
      }
      if ((bVar5 && 0x47 < uVar4) && (pcVar1 = (code *)UINT_40010844, pcVar1 != (code *)0x0)) {
        buffer = (char *)((int)param_1 + 0x116);
        uVar4 = 0;
        uVar2 = (*pcVar1)(buffer,0x1fe,&DAT_1000be83,0);
        if (uVar2 != 0) {
          iVar3 = recovered_10005c9c((int)buffer);
          param_1[0xc6] = iVar3 + 1;
          buffer[iVar3] = '\n';
          buffer[param_1[0xc6]] = '\0';
          goto LAB_10009350;
        }
      }
    }
  }
  else {
    uVar4 = param_1[0x42];
    if (uVar4 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar4 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  return 0xffffffff;
}

#undef DAT_1000be83
#undef DAT_1000c088
#undef DAT_1000c08c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010840
#undef UINT_40010844
#undef acStack_220

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094f4
 */

int recovered_100094f4(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint in_r1;
  undefined8 *puVar3;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
    param_3 = 0;
  }
  else {
    puVar3 = (undefined8 *)(param_3 * param_2);
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10008694(param_1,(int)puVar3);
      param_4[0x42] = param_4[0x42] + (int)puVar3;
    }
    else {
      uVar2 = param_4[0x41];
      if (*(char *)((int)param_4 + 0x112) == '\0') {
        uVar1 = param_4[0x42];
      }
      else {
        uVar1 = param_4[0x40];
        param_4[0x42] = uVar1;
      }
      if (uVar2 < uVar1 + (int)puVar3) {
        if (uVar2 == 0) {
          uVar2 = 0x100;
        }
        do {
          in_r1 = uVar2;
          uVar2 = in_r1 << 1;
        } while (in_r1 < uVar1 + (int)puVar3);
        uVar2 = recovered_10004b84((void *)param_4[0x3f],in_r1);
        if (uVar2 == 0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_10010004 = 0xc;
          return 0;
        }
        uVar1 = param_4[0x42];
        param_4[0x3f] = uVar2;
        param_4[0x3e] = uVar2;
        param_4[0x41] = in_r1;
      }
      uVar2 = param_4[0x40];
      if (uVar2 < uVar1) {
        recovered_10005368((byte *)(param_4[0x3f] + uVar2),0,uVar1 - uVar2);
        uVar1 = param_4[0x42];
      }
      recovered_10004bd8((undefined8 *)(param_4[0x3f] + uVar1),(undefined8 *)param_1,puVar3);
      uVar2 = param_4[0x42] + (int)puVar3;
      param_4[0x42] = uVar2;
      if (param_4[0x40] < uVar2) {
        param_4[0x40] = uVar2;
      }
      *(undefined2 *)((int)param_4 + 0x113) = 1;
    }
  }
  return param_3;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000966c
 */

undefined4 recovered_1000966c(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10009680;
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
LAB_10009680:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10010004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000971c
 */

undefined4 recovered_1000971c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
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
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009744
 */

undefined4 recovered_10009744(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *param_1;
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (uint)*(byte *)((int)param_1 + 0x113);
  }
  if (bVar4 && uVar3 == 1) {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar4 = 0xb < uVar3;
      if (bVar4) {
        uVar3 = Ram40010808;
      }
      if (((bVar4 && 0x3b < uVar3) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) &&
         (uVar3 = (*pcVar2)((char *)(param_1 + 1),(void *)param_1[0x3e],param_1[0x40]), uVar3 != 0))
      {
        *(undefined1 *)((int)param_1 + 0x113) = 0;
        return 0;
      }
    }
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    *DAT_10010004 = 5;
    return 0xffffffff;
  }
  return 0;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000981c
 */

undefined1 recovered_1000981c(int param_1)

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
 * Address: 0x1000982c
 */

undefined1 recovered_1000982c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000983c
 */

void recovered_1000983c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009858
 */

void recovered_10009858(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
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
#undef UINT_4001083c
#define UINT_4001083c (*(uint *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000987c
 */

undefined4 recovered_1000987c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;

  if (param_1 == 0) {
    uVar4 = 0x16;
  }
  else {
    uVar4 = 5;
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar5 = 0xb < uVar3;
      if (bVar5) {
        uVar3 = Ram40010808;
      }
      if (((bVar5 && 0x3f < uVar3) && (pcVar2 = (code *)UINT_4001083c, pcVar2 != (code *)0x0)) &&
         (uVar3 = (*pcVar2)((char *)param_1), uVar3 != 0)) {
        return 0;
      }
    }
  }
  *DAT_10010004 = uVar4;
  return 0xffffffff;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_4001083c

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b0U)))
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
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
#undef UINT_4001083c
#define UINT_4001083c (*(uint *)(0x4001083cU))
#define uStack_24 (*(uint *)(pf_stack_frame + 28))
#define local_28 (*(void * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000990c
 */

undefined4 recovered_1000990c(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  recovered_10005368((byte *)&local_28,0,0xc);
  uVar4 = 2;
  iVar1 = Ram40010800;
  if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if (((bVar5 && 0x37 < uVar3) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) &&
       (uVar3 = (*pcVar2)((char *)param_1,&local_28), uVar3 != 0)) {
      uVar4 = 5;
      iVar1 = Ram40010800;
      if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
        uVar3 = Ram40010808;
        bVar5 = 0xb < uVar3;
        if (bVar5) {
          uVar3 = Ram40010808;
        }
        if (((bVar5 && 0x3b < uVar3) && (pcVar2 = (code *)UINT_40010838, pcVar2 != (code *)0x0)) &&
           ((uVar3 = (*pcVar2)((char *)param_2,local_28,uStack_24), uVar3 != 0 &&
            ((iVar1 = Ram40010800, iVar1 == 0x50414d57 && (iVar1 = Ram40010804, iVar1 != 0)))))) {
          uVar3 = Ram40010808;
          bVar5 = 0xb < uVar3;
          if (bVar5) {
            uVar3 = Ram40010808;
          }
          if (((bVar5 && 0x3f < uVar3) && (pcVar2 = (code *)UINT_4001083c, pcVar2 != (code *)0x0))
             && (uVar3 = (*pcVar2)((char *)param_1), uVar3 != 0)) {
            return 0;
          }
        }
      }
    }
  }
  *DAT_10010004 = uVar4;
  return 0xffffffff;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef UINT_40010838
#undef UINT_4001083c
#undef uStack_24
#undef local_28

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
#undef UINT_40010834
#define UINT_40010834 (*(uint *)(0x40010834U))
#define local_24 (*(undefined8 * *)(pf_stack_frame + 28))
#define local_20 (*(undefined8 * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a80
 */

undefined4 recovered_10009a80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  bool bVar6;

  uVar5 = 0;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (undefined4 *)0x0)) {
    recovered_10005368((byte *)&local_24,0,0xc);
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar3 = Ram40010808;
      bVar6 = 0xb < uVar3;
      if (bVar6) {
        uVar3 = Ram40010808;
      }
      if (((bVar6 && 0x37 < uVar3) && (pcVar2 = (code *)UINT_40010834, pcVar2 != (code *)0x0)) &&
         (uVar3 = (*pcVar2)((char *)param_1,&local_24), uVar3 != 0)) {
        puVar4 = local_20;
        if (local_20 < (undefined8 *)0x2) {
          puVar4 = (undefined8 *)0x1;
        }
        puVar4 = (undefined8 *)recovered_10004ae0((ulong)puVar4);
        if (puVar4 != (undefined8 *)0x0) {
          if (local_20 == (undefined8 *)0x0) {
            local_20 = (undefined8 *)0x0;
          }
          else {
            recovered_10004bd8(puVar4,local_24,local_20);
          }
          uVar5 = 1;
          *param_3 = local_20;
          *param_2 = puVar4;
        }
      }
    }
  }
  return uVar5;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010834
#undef local_24
#undef local_20

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
#undef UINT_40010838
#define UINT_40010838 (*(uint *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b80
 */

bool recovered_10009b80(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;

  if (((param_1 != 0) &&
      (((param_2 != 0 || (param_3 == 0)) && (iVar1 = Ram40010800, iVar1 == 0x50414d57)))) &&
     (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar3 = Ram40010808;
    bVar4 = 0xb < uVar3;
    if (bVar4) {
      uVar3 = Ram40010808;
    }
    if (bVar4 && 0x3b < uVar3) {
      pcVar2 = (code *)UINT_40010838;
      if (pcVar2 == (code *)0x0) {
        return false;
      }
      uVar3 = (*pcVar2)((char *)param_1,(void *)param_2,param_3);
      return uVar3 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c08
 */

undefined4 recovered_10009c08(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c10
 */

void recovered_10009c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c14
 */

undefined4 recovered_10009c14(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c1c
 */

undefined4 recovered_10009c1c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c24
 */

undefined4 recovered_10009c24(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c2c
 */

int recovered_10009c2c(byte *param_1,byte *param_2,int param_3)

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


#undef DAT_1000bed7
#define DAT_1000bed7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_1000beda
#define str_1000beda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000bee7
#define str_1000bee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_1000bef1
#define str_1000bef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_1000bf05
#define str_1000bf05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000bf13
#define str_1000bf13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_1000bf25
#define str_1000bf25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_1000bf31
#define str_1000bf31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000bf42
#define str_1000bf42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c70
 */

char * recovered_10009c70(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000bed7;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10009c90_caseD_0;
  default:
    pcVar1 = str_1000bf42;
switchD_10009c90_caseD_0:
    return pcVar1;
  case 2:
    return str_1000beda;
  case 5:
    return str_1000bee7;
  case 9:
    return str_1000bef1;
  case 0xc:
    return str_1000bf05;
  case 0xd:
    return str_1000bf13;
  case 0x11:
    return str_1000bf25;
  case 0x16:
    return str_1000bf31;
  }
}

#undef DAT_1000bed7
#undef str_1000beda
#undef str_1000bee7
#undef str_1000bef1
#undef str_1000bf05
#undef str_1000bf13
#undef str_1000bf25
#undef str_1000bf31
#undef str_1000bf42

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d70
 */

undefined4 recovered_10009d70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d78
 */

undefined4 recovered_10009d78(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c28c
#define DAT_1000c28c (*(int *)(((uintptr_t)pf_module_state + 0x438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d80
 */

void recovered_10009d80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c28c = DAT_1000c28c + 1;
  return;
}

#undef DAT_1000c28c

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10009da8(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10009db8(void *context){__asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr\ntrap ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10009e08(void *context,int value){__asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr\ntrap ");}


#undef DAT_10009ee4
#define DAT_10009ee4 (*(int *)(0x10009ee4U))
#undef DAT_10009ee8
#define DAT_10009ee8 (*(int *)(0x10009ee8U))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e60
 */

void recovered_10009e60(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10009eec;
  local_20 = DAT_10009ee4 + 0x10009e88;
  local_18 = DAT_10009ee8 + 0x10009e98;
  local_38 = 1;
  recovered_1000a640(&uStack_3c);
  recovered_10004acc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10009ec0);
  (*pcVar1)();
}

#undef DAT_10009ee4
#undef DAT_10009ee8
#undef local_24
#undef local_20
#undef uStack_3c
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_10
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009eec
 */

undefined4 recovered_10009eec(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ef4
 */

void recovered_10009ef4(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009f04(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  recovered_10009e60();
}


#undef DAT_1000c290
#define DAT_1000c290 (*(int *)(((uintptr_t)pf_module_state + 0x43cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f04
 */

int recovered_10009f04(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_1000a458(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_10009e60();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_1000c290;
  DAT_1000c290 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_1000c290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f44
 */

int recovered_10009f44(ulong in_r0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (in_r0 < 2) {
    in_r0 = 1;
  }
  iVar1 = recovered_10004ae0(in_r0);
  if (iVar1 == 0) {
    recovered_10004acc();
    return 0;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f70
 */

int recovered_10009f70(ulong in_r0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (in_r0 < 2) {
    in_r0 = 1;
  }
  iVar1 = recovered_10004ae0(in_r0);
  if (iVar1 == 0) {
    recovered_10004acc();
    return 0;
  }
  return iVar1;
}


#undef DAT_1000a05c
#define DAT_1000a05c (*(int *)(0x1000a05cU))
#undef DAT_1000a060
#define DAT_1000a060 (*(int *)(0x1000a060U))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f9c
 */

void recovered_10009f9c(void *in_r0)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009eec;
  local_78 = DAT_1000a05c + 0x10009fe0;
  local_70 = DAT_1000a060 + 0x10009ff0;
  local_90 = 1;
  recovered_1000a640(&uStack_94);
  recovered_10004b34(in_r0);
  recovered_1000a664(&uStack_94);
  return;
}

#undef DAT_1000a05c
#undef DAT_1000a060
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_1000a124
#define DAT_1000a124 (*(int *)(0x1000a124U))
#undef DAT_1000a128
#define DAT_1000a128 (*(int *)(0x1000a128U))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a064
 */

void recovered_1000a064(void *in_r0)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009eec;
  local_78 = DAT_1000a124 + 0x1000a0a8;
  local_70 = DAT_1000a128 + 0x1000a0b8;
  local_90 = 1;
  recovered_1000a640(&uStack_94);
  recovered_10004b34(in_r0);
  recovered_1000a664(&uStack_94);
  return;
}

#undef DAT_1000a124
#undef DAT_1000a128
#undef auStack_a0
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000a1ec
#define DAT_1000a1ec (*(int *)(0x1000a1ecU))
#undef DAT_1000a1f0
#define DAT_1000a1f0 (*(int *)(0x1000a1f0U))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a12c
 */

void recovered_1000a12c(void *in_r0)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009eec;
  local_78 = DAT_1000a1ec + 0x1000a170;
  local_70 = DAT_1000a1f0 + 0x1000a180;
  local_90 = 1;
  recovered_1000a640(&uStack_94);
  recovered_10004b34(in_r0);
  recovered_1000a664(&uStack_94);
  return;
}

#undef DAT_1000a1ec
#undef DAT_1000a1f0
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000a2b4
#define DAT_1000a2b4 (*(int *)(0x1000a2b4U))
#undef DAT_1000a2b8
#define DAT_1000a2b8 (*(int *)(0x1000a2b8U))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1f4
 */

void recovered_1000a1f4(void *in_r0)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009eec;
  local_78 = DAT_1000a2b4 + 0x1000a238;
  local_70 = DAT_1000a2b8 + 0x1000a248;
  local_90 = 1;
  recovered_1000a640(&uStack_94);
  recovered_10004b34(in_r0);
  recovered_1000a664(&uStack_94);
  return;
}

#undef DAT_1000a2b4
#undef DAT_1000a2b8
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2bc
 */

undefined4 recovered_1000a2bc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2c4
 */

uint recovered_1000a2c4(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2d4
 */

void recovered_1000a2d4(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2e4
 */

void recovered_1000a2e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000c298
#define DAT_1000c298 (*(uint *)(((uintptr_t)pf_module_state + 0x444U)))
#undef DAT_1000c29c
#define DAT_1000c29c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2e8
 */

undefined4 * recovered_1000a2e8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint in_r0;
  uint uVar6;

  if (param_1 < 2) {
    param_1 = 1;
  }
  in_r0 = param_1 + 0x24;
  puVar1 = (undefined4 *)recovered_10004ae0(in_r0);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10009e60();
  }
  if (in_r0 != 0) {
    uVar6 = 0;
    if (0xf < in_r0) {
      uVar6 = in_r0 & 0xfffffff0;
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
      if (in_r0 == uVar6) goto LAB_1000a364;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_1000a364:
  DAT_1000c298 = DAT_1000c298 + 1;
  if (DAT_1000c298 < 2) {
    DAT_1000c298 = 1;
  }
  if (DAT_1000c29c == (undefined4 *)0x0) {
LAB_1000a3c0:
    puVar1[7] = DAT_1000c298;
    puVar1[3] = DAT_1000c29c;
    DAT_1000c29c = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_1000c29c;
    while (*(uint *)(iVar3 + 0x1c) != DAT_1000c298) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000a3c0;
    }
    DAT_1000c298 = DAT_1000c298 + 1;
    if (DAT_1000c298 < 2) {
      DAT_1000c298 = 1;
    }
  } while( true );
}

#undef DAT_1000c298
#undef DAT_1000c29c

#undef DAT_1000c29c
#define DAT_1000c29c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a3f4
 */

void recovered_1000a3f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  void *in_r0;
  void *pvVar2;
  undefined4 *puVar3;

  if (param_1 == 0) {
    return;
  }
  in_r0 = (void *)(param_1 + -0x24);
  pvVar1 = DAT_1000c29c;
  if (DAT_1000c29c == in_r0) {
    puVar3 = &DAT_1000c29c;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_1000a450;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != in_r0);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_1000a450:
  recovered_10004b34(in_r0);
  return;
}

#undef DAT_1000c29c

#undef DAT_1000c29c
#define DAT_1000c29c (*(int *)(((uintptr_t)pf_module_state + 0x448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a458
 */

void recovered_1000a458(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c29c;
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

#undef DAT_1000c29c

#undef DAT_1000c290
#define DAT_1000c290 (*(void * *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_1000c29c
#define DAT_1000c29c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a494
 */

void recovered_1000a494(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *in_r0;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  in_r0 = DAT_1000c290;
  if (DAT_1000c290 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_1000c290 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_1000c290 + 8);
  *(undefined4 *)((int)DAT_1000c290 + 8) = 0;
  DAT_1000c290 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)in_r0 + 4) != (code *)0x0) {
    (**(code **)((int)in_r0 + 4))((int)in_r0 + 0x24);
  }
  pvVar2 = DAT_1000c29c;
  if (DAT_1000c29c == in_r0) {
    puVar3 = &DAT_1000c29c;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_1000a540;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != in_r0);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)in_r0 + 0xc);
  *(undefined4 *)((int)in_r0 + 0xc) = 0;
LAB_1000a540:
  recovered_10004b34(in_r0);
  return;
}

#undef DAT_1000c290
#undef DAT_1000c29c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a54c
 */

void recovered_1000a54c(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_1000a574((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_1000c290
#define DAT_1000c290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_1000c294
#define DAT_1000c294 (*(int * *)(((uintptr_t)pf_module_state + 0x440U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a574
 */

void recovered_1000a574(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_1000c294 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_1000c294;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_1000aec8((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_1000a734(param_1);
        puVar3 = DAT_1000c290;
                    /* WARNING: Subroutine does not return */
        if (DAT_1000c290 == (undefined4 *)0x0) {
          recovered_10009e60();
        }
        DAT_1000c290[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
        recovered_1000a574(puVar3);
        *extraout_r0 = (int)DAT_1000c294;
        DAT_1000c294 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10009e60();
}

#undef DAT_1000c290
#undef DAT_1000c294
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000c290
#define DAT_1000c290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x43cU)))
#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x440U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a608
 */

void recovered_1000a608(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_1000c290;
                    /* WARNING: Subroutine does not return */
  if (DAT_1000c290 == (undefined4 *)0x0) {
    recovered_10009e60();
  }
  DAT_1000c290[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_1000a574(puVar1);
  *extraout_r0 = DAT_1000c294;
  DAT_1000c294 = extraout_r0;
  return;
}

#undef DAT_1000c290
#undef DAT_1000c294

#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x440U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a640
 */

void recovered_1000a640(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c294;
  DAT_1000c294 = param_1;
  return;
}

#undef DAT_1000c294

#undef DAT_1000c294
#define DAT_1000c294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x440U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a664
 */

void recovered_1000a664(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000c294;
  if (DAT_1000c294 == param_1) {
    puVar2 = &DAT_1000c294;
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

#undef DAT_1000c294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6ac
 */

void recovered_1000a6ac(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a574(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10009e60();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b8
 */

void recovered_1000a6b8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10009e60();
}


#undef DAT_1000c294
#define DAT_1000c294 (*(int * *)(((uintptr_t)pf_module_state + 0x440U)))
#undef DAT_1000c29c
#define DAT_1000c29c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6c4
 */

void recovered_1000a6c4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_1000c29c; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_1000a708;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10009e60();
  }
LAB_1000a708:
  if (DAT_1000c294 != (int *)0x0) {
    DAT_1000c294 = (int *)*DAT_1000c294;
  }
  recovered_1000a734(puVar1);
  return;
}

#undef DAT_1000c294
#undef DAT_1000c29c

#undef DAT_1000c294
#define DAT_1000c294 (*(int * *)(((uintptr_t)pf_module_state + 0x440U)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a734
 */

undefined4 recovered_1000a734(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_1000c294 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_1000c294;
      if (DAT_1000c294 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_1000c294[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_1000a7e8:
        piVar1[1] = iVar3;
        recovered_10009da8((int)piVar1);
        recovered_1000a6c4(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_1000aec8((int)DAT_1000c294,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_1000a7e8;
      }
      DAT_1000c294 = (int *)*piVar1;
    } while (DAT_1000c294 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10009e60();
}

#undef DAT_1000c294
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7f4
 */

undefined4 recovered_1000a7f4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a6c4(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a800
 */

undefined4 recovered_1000a800(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a808
 */

void recovered_1000a808(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10009e60();
}


#undef DAT_1000c060
#define DAT_1000c060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a814
 */

int recovered_1000a814(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_1000a900:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_1000a900;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_1000c060) {
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

#undef DAT_1000c060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a908
 */

void recovered_1000a908(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a90c
 */

undefined4 recovered_1000a90c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a914
 */

bool recovered_1000a914(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a928
 */

bool recovered_1000a928(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a968
 */

bool recovered_1000a968(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a994
 */

bool recovered_1000a994(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9b0
 */

bool recovered_1000a9b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9cc
 */

bool recovered_1000a9cc(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9e8
 */

bool recovered_1000a9e8(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_1000aad8
#define DAT_1000aad8 (*(double *)(0x1000aad8U))
#undef DAT_1000aae0
#define DAT_1000aae0 (*(double *)(0x1000aae0U))
#undef DAT_1000aae8
#define DAT_1000aae8 (*(double *)(0x1000aae8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa08
 */

double recovered_1000aa08(undefined4 param_1,undefined4 param_2)

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
  if (dVar3 <= DAT_1000aae0) {
    dVar4 = 0.0;
    if (DAT_1000aae8 <= dVar3) {
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
  return DAT_1000aad8;
}

#undef DAT_1000aad8
#undef DAT_1000aae0
#undef DAT_1000aae8

#undef DAT_1000abd8
#define DAT_1000abd8 (*(double *)(0x1000abd8U))
#undef DAT_1000abe0
#define DAT_1000abe0 (*(double *)(0x1000abe0U))
#undef DAT_1000abe8
#define DAT_1000abe8 (*(double *)(0x1000abe8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aaf0
 */

float recovered_1000aaf0(float param_1)

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
  else if (dVar3 <= DAT_1000abe0) {
    dVar4 = 0.0;
    if (DAT_1000abe8 <= dVar3) {
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
    dVar4 = DAT_1000abd8;
  }
  return (float)dVar4;
}

#undef DAT_1000abd8
#undef DAT_1000abe0
#undef DAT_1000abe8

#undef DAT_1000acc0
#define DAT_1000acc0 (*(double *)(0x1000acc0U))
#undef DAT_1000acc8
#define DAT_1000acc8 (*(double *)(0x1000acc8U))
#undef DAT_1000acd0
#define DAT_1000acd0 (*(double *)(0x1000acd0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000abf0
 */

double recovered_1000abf0(undefined4 param_1,undefined4 param_2)

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
  if (dVar3 <= DAT_1000acc8) {
    dVar4 = 0.0;
    if (DAT_1000acd0 <= dVar3) {
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
  return DAT_1000acc0;
}

#undef DAT_1000acc0
#undef DAT_1000acc8
#undef DAT_1000acd0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000acd8
 */

double recovered_1000acd8(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000acf4
 */

double recovered_1000acf4(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100064c4(param_1,param_2);
  dVar2 = pf_bits_double(((pf_double_bits(dVar2) & 0xffffffff00000000) + (pf_double_bits(dVar2) & 0xffffffff)));
  dVar1 = pf_bits_double(CONCAT44(param_2,param_1)) - dVar2;
  if (0.5 <= dVar1) {
    dVar1 = 1.0;
  }
  else {
    if (-0.5 < dVar1) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar2 + dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad4c
 */

ulonglong recovered_1000ad4c(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000adb8;
    }
  }
  bVar1 = false;
joined_r0x1000adb8:
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
 * Address: 0x1000aec4
 */

ulonglong recovered_1000aec4(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000adb8;
    }
  }
  bVar1 = false;
joined_r0x1000adb8:
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


#undef DAT_1000bfc8
#define DAT_1000bfc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_1000c060
#define DAT_1000c060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aec8
 */

undefined4 recovered_1000aec8(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_1000b27c((uint)*pbVar10,&local_28);
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
          goto LAB_1000b0a0;
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
LAB_1000b0a0:
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
LAB_1000b25c:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000bfc8 + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000b27c(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000b25c;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000b25c;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000b25c;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_1000c060) goto LAB_1000b230;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000b25c;
  }
LAB_1000b230:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_1000b0a0;
}

#undef DAT_1000bfc8
#undef DAT_1000c060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b27c
 */

undefined4 * recovered_1000b27c(uint param_1,undefined4 *param_2)

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
      goto switchD_1000b2ac_caseD_5;
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
switchD_1000b2ac_caseD_5:
  return puVar5;
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
#undef UINT_40010828
#define UINT_40010828 (*(uint *)(0x40010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b40c
 */

undefined4 recovered_1000b40c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  bool bVar3;

  if (param_1 != 0) {
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar2 = Ram40010808;
      bVar3 = 0xb < uVar2;
      if (bVar3) {
        uVar2 = Ram40010808;
      }
      if ((bVar3 && 0x2b < uVar2) &&
         (UNRECOVERED_JUMPTABLE = (code *)UINT_40010828, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        (*UNRECOVERED_JUMPTABLE)((char *)param_1);
      }
    }
    iVar1 = Ram40010800;
    if ((iVar1 == 0x50414d57) && (iVar1 = Ram40010804, iVar1 != 0)) {
      uVar2 = Ram40010808;
      bVar3 = 0xb < uVar2;
      if (bVar3) {
        uVar2 = Ram40010808;
      }
      if ((bVar3 && 0x2b < uVar2) &&
         (UNRECOVERED_JUMPTABLE = (code *)UINT_40010828, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000b4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)((char *)((uintptr_t)pf_module_state+0x11dU));
        return uVar2;
      }
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010828

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
#undef UINT_40010898
#define UINT_40010898 (*(uint *)(0x40010898U))
#define acStack_155 (*(char (*)[341])(pf_stack_frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4c0
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_1000b4c0(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  uVar4 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar11 = (uint)*param_1;
  uVar6 = uVar11 - 0x41;
  if (0x19 < uVar6) {
    bVar12 = 0x5e < uVar11;
    if (uVar11 != 0x5f) {
      uVar6 = uVar11 - 0x61;
      bVar12 = 0x18 < uVar6;
    }
    if (bVar12 && (uVar11 != 0x5f && uVar6 != 0x19)) {
      return 0;
    }
  }
  uVar6 = (uint)param_1[1];
  if (uVar6 != 0) {
    pbVar8 = param_1 + 2;
    do {
      uVar7 = (uVar6 & 0xdf) - 0x41;
      if (0x19 < uVar7) {
        bVar12 = 0x5e < uVar6;
        if (uVar6 != 0x5f) {
          uVar7 = uVar6 - 0x30;
          bVar12 = 8 < uVar7;
        }
        if (bVar12 && (uVar6 != 0x5f && uVar7 != 9)) {
          return 0;
        }
      }
      uVar6 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar6 != 0);
  }
  if (param_2 != (char *)0x0) {
    if (uVar11 == 0) {
      iVar10 = 0;
    }
    else {
      iVar9 = 1;
      do {
        iVar10 = iVar9;
        if (iVar10 == 0x13c) {
          return 0;
        }
        bVar1 = param_1[iVar10];
        acStack_155[iVar10] = (char)uVar11;
        iVar9 = iVar10 + 1;
        uVar11 = (uint)bVar1;
      } while (bVar1 != 0);
    }
    iVar9 = iVar10 + 4;
    builtin_strncpy(acStack_155 + iVar10 + 1," = \"",4);
    cVar5 = *param_2;
    while (cVar5 != '\0') {
      param_2 = param_2 + 1;
      if (4 < iVar9 + 3U >> 6) {
        return 0;
      }
      switch((uintptr_t)(cVar5)) {
      case '\t':
      case '\n':
      case '\r':
      case '\"':
      case '/':
        acStack_155[iVar9 + 1] = '/';
        iVar9 = iVar9 + 1;
        if (cVar5 == '\n') {
          cVar5 = 'n';
        }
        else {
          if (cVar5 != '\r') {
            if (cVar5 == '\t') {
              cVar5 = 't';
            }
            goto switchD_1000b5f4_default;
          }
          cVar5 = 'r';
        }
        break;
      case '\v':
      case '\f':
      case '\x0e':
      case '\x0f':
      case '\x10':
      case '\x11':
      case '\x12':
      case '\x13':
      case '\x14':
      case '\x15':
      case '\x16':
      case '\x17':
      case '\x18':
      case '\x19':
      case '\x1a':
      case '\x1b':
      case '\x1c':
      case '\x1d':
      case '\x1e':
      case '\x1f':
      case ' ':
      case '!':
      case '#':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
        break;
      default:
switchD_1000b5f4_default:
      }
      cVar2 = *param_2;
      acStack_155[iVar9 + 1] = cVar5;
      iVar9 = iVar9 + 1;
      cVar5 = cVar2;
    }
    uVar4 = 0;
    if ((uint)(iVar9 - (iVar10 + 3)) < 0xff) {
      (acStack_155 + iVar9 + 1)[0] = '\"';
      (acStack_155 + iVar9 + 1)[1] = '\0';
      iVar10 = Ram40010800;
      if ((iVar10 == 0x50414d57) && (iVar10 = Ram40010804, iVar10 != 0)) {
        uVar6 = Ram40010808;
        bVar12 = 0xb < uVar6;
        if (bVar12) {
          uVar6 = Ram40010808;
        }
        if ((bVar12 && 0x9b < uVar6) && (pcVar3 = (code *)UINT_40010898, pcVar3 != (code *)0x0)) {
          uVar4 = (*pcVar3)(acStack_155 + 1,(char *)0x0,0);
        }
      }
    }
  }
  return uVar4;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010898
#undef acStack_155

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
#undef UINT_40010a04
#define UINT_40010a04 (*(uint *)(0x40010a04U))
#define local_2c (*(int (*)[11])(pf_stack_frame + 20))
#define local_20 (*(undefined8 * *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b754
 */

undefined4 recovered_1000b754(int param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;

  local_18 = 0;
  local_1c = 0;
  local_20 = (undefined8 *)0x0;
  local_2c[2] = 0;
  local_2c[1] = 0;
  local_2c[0] = 0;
  if (param_2 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      *(undefined1 *)param_2 = 0;
    }
    if (((param_3 != 0 && param_1 != 0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57)) &&
       (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar4 = Ram40010808;
      bVar9 = 0xb < uVar4;
      if (bVar9) {
        uVar4 = Ram40010808;
      }
      if ((bVar9 && 0x207 < uVar4) && (pcVar3 = (code *)UINT_40010a04, pcVar3 != (code *)0x0)) {
        uVar4 = (*pcVar3)((char *)param_1,local_2c);
        if (uVar4 == 0) {
          return 0;
        }
        if ((local_2c[0] == 3) && (local_20 != (undefined8 *)0x0)) {
          uVar4 = 0;
          do {
            pcVar1 = (char *)((int)local_20 + uVar4);
            uVar4 = uVar4 + 1;
            if (*pcVar1 == '\0') {
              bVar9 = uVar4 == 0x10;
              uVar7 = 0;
              uVar5 = 0;
              if (uVar4 >= 0x10) {
                uVar5 = (int)param_2 - (int)local_20;
                bVar9 = uVar5 == 0xf;
              }
              if ((uVar4 < 0x10 || uVar5 < 0xf) || bVar9) goto LAB_1000b890;
              uVar7 = uVar4 & 0xfffffff0;
              uVar5 = uVar7;
              puVar6 = local_20;
              puVar8 = param_2;
              do {
                uVar10 = *puVar6;
                uVar11 = puVar6[1];
                puVar6 = puVar6 + 2;
                uVar5 = uVar5 - 0x10;
                *puVar8 = uVar10;
                puVar8[1] = uVar11;
                puVar8 = puVar8 + 2;
              } while (uVar5 != 0);
              for (; uVar4 != uVar7; uVar7 = uVar7 + 1) {
LAB_1000b890:
                *(undefined1 *)((int)param_2 + uVar7) = *(undefined1 *)((int)local_20 + uVar7);
              }
              return 1;
            }
          } while (param_3 != uVar4);
        }
      }
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010a04
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18

#define local_54 (*(uint *)(pf_stack_frame + 28))
#define local_50 (*(undefined8 *)(pf_stack_frame + 32))
#define pbStack_2c (*(byte * *)(pf_stack_frame + 68))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_40 (*(undefined8 *)(pf_stack_frame + 48))
#define local_38 (*(uint *)(pf_stack_frame + 56))
#define local_30 (*(byte * *)(pf_stack_frame + 64))
#define local_28 (*(uint *)(pf_stack_frame + 72))
#define local_24 (*(char * *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8ac
 */

undefined4 recovered_1000b8ac(char *param_1,byte *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *extraout_r2 = 0;
  char *pcVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;

  uVar4 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_54 = 0;
  if (param_3 != (undefined1 *)0x0) {
    if (param_4 != 0) {
      *param_3 = 0;
    }
    if (param_4 != 0 && param_1 != (char *)0x0) {
      pcVar13 = param_1;
      if (param_2 != (byte *)0x0) {
        pcVar13 = (char *)(uint)*param_2;
      }
      if (param_2 != (byte *)0x0 && pcVar13 != (char *)0x0) {
        uVar15 = 0xffffffff;
        uVar16 = 0xffffffff;
        bVar3 = false;
        if (((uint)(pcVar13 + -0x30) & 0xff) < 10) {
          bVar3 = false;
          uVar12 = 0;
          pbVar5 = param_2;
          do {
            pbVar5 = pbVar5 + 1;
            pcVar9 = pcVar13 + -0x30;
            if (~((uint)pcVar9 & 0xff) / 10 < uVar12) {
              uVar16 = 0xffffffff;
              goto LAB_1000b9bc;
            }
            pcVar13 = (char *)(uint)*pbVar5;
            uVar12 = ((uint)pcVar9 & 0xff) + uVar12 * 10;
          } while (((uint)(pcVar13 + -0x30) & 0xff) < 10);
          uVar16 = uVar12 - 1;
          if (pcVar13 != (char *)0x0) {
            uVar16 = 0xffffffff;
          }
          bVar3 = pcVar13 == (char *)0x0 && uVar12 != 0;
        }
LAB_1000b9bc:
        uVar12 = 0;
        local_24 = param_1;
        do {
          uVar8 = uVar12;
          iVar6 = recovered_1000bba4(&local_24,&local_30,&local_54);
          if (iVar6 == 0) {
            return 0;
          }
          if (uVar15 == 0xffffffff) {
            uVar15 = 0xffffffff;
            pbVar5 = extraout_r2;
            if (local_30 != (byte *)0x0) {
              pbVar5 = pbStack_2c;
            }
            if (local_30 != (byte *)0x0 && pbVar5 != (byte *)0x0) {
              pbVar11 = local_30;
              pbVar14 = param_2;
              while (pbVar11 < pbVar5) {
                pbVar7 = pbVar11 + 1;
                bVar1 = *pbVar11;
                if (((((local_28 & 1) != 0) && (bVar1 == 0x22)) && (pbVar7 < pbVar5)) &&
                   (pbVar11[1] == 0x22)) {
                  pbVar7 = pbVar11 + 2;
                }
                bVar2 = *pbVar14;
                if ((bVar2 == 0) || (pbVar11 = pbVar7, pbVar14 = pbVar14 + 1, bVar1 != bVar2))
                goto LAB_1000b9ec;
              }
              uVar15 = 0xffffffff;
              if (*pbVar14 == 0) {
                uVar15 = uVar8;
              }
            }
          }
LAB_1000b9ec:
          if ((bool)(bVar3 & uVar8 == uVar16)) {
            local_40 = CONCAT44(pbStack_2c,local_30);
            local_38 = local_28;
          }
          uVar12 = uVar8 + 1;
        } while (local_54 == 1);
        if (local_54 == 0) {
          if (!(bool)(bVar3 & uVar16 < uVar8 + 1)) {
            return 0;
          }
          puVar10 = &local_40;
        }
        else {
          if (uVar15 == 0xffffffff) {
            return 0;
          }
          uVar16 = 0;
          do {
            iVar6 = recovered_1000bba4(&local_24,&local_30,&local_54);
            if (iVar6 == 0) {
              return 0;
            }
            if (uVar15 == uVar16) {
              local_50 = CONCAT44(pbStack_2c,local_30);
              local_48 = local_28;
            }
            uVar16 = uVar16 + 1;
          } while (local_54 == 1);
          if (uVar8 + 1 != uVar16) {
            return 0;
          }
          if ((int)local_50 == 0) {
            return 0;
          }
          puVar10 = &local_50;
          if ((local_54 == 2) && (*local_24 != '\0')) {
            return 0;
          }
        }
        uVar4 = recovered_1000bd9c((undefined4 *)puVar10,param_3,param_4);
      }
    }
  }
  return uVar4;
}

#undef local_54
#undef local_50
#undef pbStack_2c
#undef local_48
#undef local_40
#undef local_38
#undef local_30
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bba4
 */

undefined4 recovered_1000bba4(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  byte bVar3;
  byte *in_r12;
  byte *pbVar4;

  if (param_1 != (undefined4 *)0x0 && param_3 != (uint *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      in_r12 = (byte *)*param_1;
    }
    if (param_2 != (undefined4 *)0x0 && in_r12 != (byte *)0x0) {
      param_2[1] = in_r12;
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = in_r12;
      *param_3 = 0;
      bVar3 = *in_r12;
      if (bVar3 != 0x22) {
        do {
          switch((uintptr_t)(bVar3)) {
          case 0:
          case 10:
          case 0xd:
          case 0x2c:
            goto switchD_1000bc4c_caseD_0;
          default:
            in_r12 = in_r12 + 1;
            bVar3 = *in_r12;
            break;
          case 0x22:
            goto LAB_1000bd90;
          }
        } while( true );
      }
      *(undefined1 *)(param_2 + 2) = 1;
      pbVar4 = in_r12 + 1;
      do {
        if (*pbVar4 == 0x22) {
          iVar2 = 2;
          if (pbVar4[1] != 0x22) {
            param_2[1] = pbVar4;
            *param_2 = in_r12 + 1;
            in_r12 = pbVar4 + 1;
            uVar1 = (uint)*in_r12;
            if (((0xd < uVar1) || ((1 << uVar1 & 0x2401U) == 0)) && (uVar1 != 0x2c)) {
              return 0;
            }
            goto LAB_1000bd48;
          }
        }
        else {
          iVar2 = 1;
          if (*pbVar4 == 0) {
LAB_1000bd90:
            return 0;
          }
        }
        pbVar4 = pbVar4 + iVar2;
      } while( true );
    }
  }
  return 0;
switchD_1000bc4c_caseD_0:
  param_2[1] = in_r12;
  uVar1 = (uint)*in_r12;
LAB_1000bd48:
  if (uVar1 == 10) {
    pbVar4 = in_r12 + 1;
  }
  else {
    if (uVar1 != 0xd) {
      pbVar4 = in_r12;
      if (uVar1 == 0x2c) {
        pbVar4 = in_r12 + 1;
      }
      uVar1 = (uint)(uVar1 == 0x2c);
      goto LAB_1000bd84;
    }
    pbVar4 = in_r12 + 1;
    if (*pbVar4 == 10) {
      pbVar4 = in_r12 + 2;
    }
  }
  uVar1 = 2;
LAB_1000bd84:
  *param_3 = uVar1;
  *param_1 = pbVar4;
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd9c
 */

undefined4 recovered_1000bd9c(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *in_r12;
  char *pcVar4;

  uVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    in_r12 = (char *)*param_1;
  }
  if (param_1 == (undefined4 *)0x0 || in_r12 == (char *)0x0) {
    return 0;
  }
  pcVar4 = (char *)param_1[1];
  if (pcVar4 != (char *)0x0) {
    iVar1 = 0;
    if (in_r12 < pcVar4) {
      if (param_3 < 2) {
        param_3 = 1;
      }
      do {
        pcVar2 = in_r12 + 1;
        if (((*(char *)(param_1 + 2) == '\x01' && *in_r12 == '\"') && (pcVar2 < pcVar4)) &&
           (in_r12[1] == '\"')) {
          pcVar2 = in_r12 + 2;
        }
        if (param_3 - 1 == iVar1) {
          uVar3 = 0;
          goto LAB_1000be40;
        }
        param_2[iVar1] = *in_r12;
        iVar1 = iVar1 + 1;
        pcVar4 = (char *)param_1[1];
        in_r12 = pcVar2;
      } while (pcVar2 < pcVar4);
    }
    param_2 = param_2 + iVar1;
    uVar3 = 1;
LAB_1000be40:
    *param_2 = 0;
  }
  return uVar3;
}

