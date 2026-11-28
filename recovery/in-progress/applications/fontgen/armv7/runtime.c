/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f08
 */

uint recovered_10000f08(uint param_1,uint param_2)

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
 * Address: 0x10000f58
 */

uint recovered_10000f58(uint param_1,uint param_2)

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
 * Address: 0x10000f90
 */

uint recovered_10000f90(uint param_1,uint param_2)

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
 * Address: 0x10001000
 */

uint recovered_10001000(uint param_1,uint param_2)

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
 * Address: 0x1000106c
 */

undefined8 recovered_1000106c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10004810(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000107c
 */

undefined8 recovered_1000107c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10004750(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000108c
 */

float recovered_1000108c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004898(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a8
 */

float recovered_100010a8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100048e0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000803c
#define DAT_1000803c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ccU)))
#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c8
 */

void recovered_100010c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_1000803c = 0;
  recovered_10001154();
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_1000803c
#undef DAT_10008044

#undef DAT_1000803c
#define DAT_1000803c (*(char *)(((uintptr_t)pf_module_state + 0x4ccU)))
#undef DAT_10008040
#define DAT_10008040 (*(int *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008048
#define DAT_10008048 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
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
 * Address: 0x10001154
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001154(void)

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
  if (DAT_1000803c != '\0') {
    return;
  }
  DAT_10008040 = 0;
  DAT_10008048 = 0;
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
        if (iVar11 == 0) goto LAB_10001354;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10006280((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_10008040 != 0) goto LAB_10001384;
    }
  }
LAB_10001354:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10006280((int *)0x300000,piVar4,&local_24);
LAB_10001384:
  if (DAT_10008048 == 0) {
    DAT_10008048 = DAT_10008040;
  }
  DAT_1000803c = 1;
  return;
}

#undef DAT_1000803c
#undef DAT_10008040
#undef DAT_10008048
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d4
 */

bool recovered_100013d4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10001450(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return bVar1;
}

#undef DAT_10008044

#undef DAT_10008040
#define DAT_10008040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008048
#define DAT_10008048 (*(int * *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001450
 */

bool recovered_10001450(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10001154();
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
        piVar1 = DAT_10008040;
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
      piVar3 = (int *)&DAT_10008040;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10006280((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_10008048 == (int *)0x0) {
        DAT_10008048 = DAT_10008040;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_10008040
#undef DAT_10008048
#undef DAT_68000000
#undef local_24

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001698
 */

void recovered_10001698(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  recovered_10001450(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_10008044
#undef local_14
#undef local_10

#undef DAT_10008040
#define DAT_10008040 (*(uint * *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001730
 */

int recovered_10001730(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001154();
  iVar1 = 0;
  puVar3 = DAT_10008040;
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
  DAT_10008044 = 0;
  return iVar1;
}

#undef DAT_10008040
#undef DAT_10008044

#undef DAT_10008040
#define DAT_10008040 (*(int *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e0
 */

void recovered_100017e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001154();
  for (iVar1 = DAT_10008040; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_10008040
#undef DAT_10008044

#undef DAT_10008040
#define DAT_10008040 (*(int * *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000189c
 */

int recovered_1000189c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001154();
  iVar1 = 0;
  for (piVar3 = DAT_10008040; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return iVar1;
}

#undef DAT_10008040
#undef DAT_10008044

#undef DAT_10008040
#define DAT_10008040 (*(int *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001944
 */

void recovered_10001944(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001154();
  for (iVar1 = DAT_10008040; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_10008040
#undef DAT_10008044

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f4
 */

void recovered_100019f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001a78(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_10008044

#undef DAT_10008040
#define DAT_10008040 (*(uint * *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008048
#define DAT_10008048 (*(uint * *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a78
 */

uint * recovered_10001a78(int param_1,uint *param_2,uint *param_3)

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
    recovered_10001154();
    puVar4 = DAT_10008040;
    puVar5 = DAT_10008048;
    if (DAT_10008048 == (uint *)0x0) {
      puVar5 = DAT_10008040;
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
              if (uVar7 < uVar8) goto joined_r0x10001b58;
            }
          }
          else {
joined_r0x10001b58:
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
LAB_10001c50:
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
                    DAT_10008048 = DAT_10008040;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_10008048 = puVar4;
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
                      puVar2 = recovered_10006480(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10001c50;
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

#undef DAT_10008040
#undef DAT_10008048

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd0
 */

void recovered_10001cd0(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001a78(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_10008044

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d58
 */

uint * recovered_10001d58(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001a78(param_1,(uint *)param_2,(uint *)param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return puVar2;
}

#undef DAT_10008044

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de8
 */

void recovered_10001de8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001e64(param_1);
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return;
}

#undef DAT_10008044

#undef DAT_10008048
#define DAT_10008048 (*(uint * *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e64
 */

void recovered_10001e64(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10001154();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_10008048 == puVar1) {
        DAT_10008048 = puVar4;
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
          if (DAT_10008048 == puVar4) {
            DAT_10008048 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_10008048 = puVar4;
  return;
}

#undef DAT_10008048

#undef DAT_10008044
#define DAT_10008044 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10008048
#define DAT_10008048 (*(uint * *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd0
 */

undefined8 * recovered_10001fd0(undefined8 *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10008044 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x4d4U));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x4d4U),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = recovered_10001a78(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_10002204;
  }
  if (param_2 == 0) {
    recovered_10001e64((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_10002204;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_10002204;
  recovered_10001154();
  puVar12 = (uint *)(param_2 + 0xf & 0xfffffff0);
  puVar6 = (uint *)(param_1 + -2);
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
          puVar3 = (uint *)param_1;
        }
        else {
          DAT_10008048 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_10008048 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = *(uint *)((int)param_1 + -0xc);
          *(undefined1 *)(DAT_10008048 + 3) = 1;
          DAT_10008048[2] = (uint)puVar6;
          DAT_10008048[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_10008048;
          }
          *(uint **)((int)param_1 + -0xc) = DAT_10008048;
          *(uint **)(param_1 + -2) = puVar12;
          puVar3 = (uint *)param_1;
        }
      }
    }
    goto LAB_10002204;
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
      puVar2 = *(uint **)((int)param_1 + -0xc);
      puVar3 = DAT_10008048;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_10008048 = puVar6;
        }
        puVar7 = (uint *)((int)puVar7 + uVar1 + 0x10);
        *(uint **)(param_1 + -2) = puVar7;
        if (puVar2 != (uint *)0x0) {
          puVar2[2] = (uint)puVar6;
        }
        *(uint **)((int)param_1 + -0xc) = puVar2;
      } while (puVar7 < puVar12);
      puVar3 = (uint *)0x0;
      if (puVar12 <= puVar7) {
        iVar4 = recovered_10006504(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_10008048 = *(uint **)((int)param_1 + -0xc);
        }
        *(undefined1 *)((int)param_1 + -4) = 0;
        puVar3 = (uint *)param_1;
      }
      goto LAB_10002204;
    }
  }
  puVar7 = recovered_10001a78((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_10002204;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = (uint *)param_1;
  if (puVar12 < &SupervisorCall) {
LAB_100022d4:
    if (puVar12 != (uint *)0x0) goto LAB_100022dc;
  }
  else {
    puVar6 = (uint *)((uint)puVar7 ^ (uint)param_1);
    if (((uint)puVar6 & 3) == 0) {
      if (((uint)puVar7 & 3) == 0) {
        puVar3 = (uint *)param_1;
        puVar5 = puVar7;
        puVar9 = puVar12;
      }
      else {
        *(undefined1 *)puVar7 = *(undefined1 *)param_1;
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
              puVar3 = (uint *)((int)param_1 + 4);
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
            if (uVar14 == uVar11) goto LAB_100024bc;
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
LAB_100024bc:
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
          if (uVar14 == uVar11) goto LAB_100022d4;
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
      goto LAB_100022d4;
    }
LAB_100022dc:
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
      if (puVar12 == puVar13) goto LAB_10002338;
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
LAB_10002338:
  recovered_10001e64((int)param_1);
  puVar3 = puVar7;
LAB_10002204:
  DataMemoryBarrier(0xb);
  DAT_10008044 = 0;
  return (undefined8 *)puVar3;
}

#undef DAT_10008044
#undef DAT_10008048
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002570
 */

longlong recovered_10002570(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100025c4
 */

ulonglong recovered_100025c4(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002618
 */

undefined8 recovered_10002618(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10002664
 */

undefined8 recovered_10002664(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002748
 */

undefined8 recovered_10002748(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100027c8
 */

undefined8 recovered_100027c8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100028e0
 */

undefined8 recovered_100028e0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000299c
 */

void recovered_1000299c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a4
 */

int recovered_100029a4(int param_1)

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
 * Address: 0x100029b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100029b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_4001084c)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002a04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_40010850)();
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010854
#define DAT_40010854 (*(uint8_t *)(0x40010854U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010854
#define _DAT_40010854 (*(code * *)(0x40010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a54
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002a54(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x57 < _DAT_40010808)) &&
     (_DAT_40010854 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_40010854)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010854
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010854

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa8
 */

void recovered_10002aa8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10002ae4;
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
          if (uVar9 == uVar7) goto LAB_10002c78;
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
LAB_10002c78:
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
        if (uVar7 == uVar9) goto LAB_10002adc;
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
LAB_10002adc:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_10002ae4:
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
 * Address: 0x10002d2c
 */

void recovered_10002d2c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    goto LAB_10002d74;
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
          if (puVar7 == param_3) goto LAB_10003000;
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
LAB_10003000:
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
        if (param_3 == puVar7) goto LAB_1000307c;
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
LAB_1000307c:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_10002d74:
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
    goto LAB_10002df0;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_1000308c:
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
          goto LAB_1000308c;
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
        if (uVar8 == uVar10) goto LAB_10003168;
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
LAB_10003168:
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
      if (uVar10 == uVar8) goto LAB_10003224;
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
LAB_10003224:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10002df0:
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
 * Address: 0x10003238
 */

void recovered_10003238(byte *param_1,byte param_2,uint param_3)

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
  if (param_3 < 8) goto joined_r0x100033c0;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100032d8:
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
        if (uVar5 == uVar6) goto joined_r0x10003364;
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
      goto joined_r0x100032d8;
    }
  }
joined_r0x10003364:
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
      if (uVar6 == uVar5) goto joined_r0x100033c0;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x100033c0:
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
 * Address: 0x10003438
 */

void recovered_10003438(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100035b8;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100034d4:
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
        if (uVar7 == uVar8) goto joined_r0x10003558;
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
      goto joined_r0x100034d4;
    }
  }
joined_r0x10003558:
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
      if (uVar7 == uVar8) goto joined_r0x100035b8;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100035b8:
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
 * Address: 0x10003634
 */

void recovered_10003634(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100037b4;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100036d0:
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
        if (uVar7 == uVar8) goto joined_r0x10003754;
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
      goto joined_r0x100036d0;
    }
  }
joined_r0x10003754:
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
      if (uVar7 == uVar8) goto joined_r0x100037b4;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100037b4:
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
 * Address: 0x10003830
 */

char * recovered_10003830(char *param_1,char param_2,int param_3)

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
 * Address: 0x10003864
 */

int recovered_10003864(uint *param_1,uint *param_2,uint param_3)

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
LAB_1000395c:
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
      if (uVar5 != uVar6) goto LAB_10003a54;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10003a54;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10003a54;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10003a54;
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
LAB_1000398c:
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
      if (uVar5 != uVar6) goto LAB_1000398c;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_10003a5c((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_1000395c;
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
LAB_10003a54:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a5c
 */

int recovered_10003a5c(byte *param_1,byte *param_2)

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
 * Address: 0x10003aac
 */

bool recovered_10003aac(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ac0
 */

bool recovered_10003ac0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad4
 */

bool recovered_10003ad4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aec
 */

bool recovered_10003aec(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b18
 */

bool recovered_10003b18(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b38
 */

bool recovered_10003b38(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b4c
 */

int recovered_10003b4c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b5c
 */

int recovered_10003b5c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b6c
 */

int recovered_10003b6c(int param_1)

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
 * Address: 0x10003b94
 */

int recovered_10003b94(byte *param_1,byte *param_2)

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
LAB_10003bcc:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003bcc;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bd8
 */

int recovered_10003bd8(byte *param_1,byte *param_2)

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
LAB_10003c10:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003c10;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c1c
 */

void recovered_10003c1c(int param_1,int param_2)

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
 * Address: 0x10003c38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10003c38(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10003d00;
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
          if (uVar8 == uVar11) goto LAB_10003e94;
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
LAB_10003e94:
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
        if (uVar11 == uVar8) goto LAB_10003cf8;
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
LAB_10003cf8:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10003d00:
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
 * Address: 0x10003f4c
 */

char * recovered_10003f4c(char *param_1,char param_2)

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
 * Address: 0x10003f80
 */

int recovered_10003f80(char *param_1,char *param_2)

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
 * Address: 0x10003fe4
 */

int recovered_10003fe4(char *param_1,char *param_2)

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
 * Address: 0x1000404c
 */

char * recovered_1000404c(char *param_1,char *param_2)

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
 * Address: 0x100040ac
 */

char * recovered_100040ac(char *param_1,char *param_2)

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


#undef DAT_10007b94
#define DAT_10007b94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004110
 */

undefined * recovered_10004110(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10007b94;
}

#undef DAT_10007b94

#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x498U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

undefined ** recovered_10004120(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10008008;
}

#undef PTR_DAT_10008008

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
#define uStack_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 40))
#define local_14 (*(undefined4 *)(pf_stack_frame + 44))
#define local_10 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004130(undefined4 *param_1)

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
#undef uStack_20
#undef local_24
#undef local_1c
#undef uStack_18
#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e0
 */

double recovered_100041e0(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10004224
 */

double recovered_10004224(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x100042dc
 */

double recovered_100042dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10004314
 */

double recovered_10004314(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10004394
 */

double recovered_10004394(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x100043c4
 */

double recovered_100043c4(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004408
 */

double recovered_10004408(undefined4 param_1,undefined4 param_2)

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


#undef DAT_10004580
#define DAT_10004580 (*(double *)(0x10004580U))
#undef DAT_10004588
#define DAT_10004588 (*(double *)(0x10004588U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004450
 */

double recovered_10004450(undefined4 param_1,undefined4 param_2)

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
    return pf_bits_double(0xfff0000000000000ULL);
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
  return dVar4 + dVar4 + dVar5 * pf_bits_double(0x3fe62e42fefa39efULL);
}

#undef DAT_10004580
#undef DAT_10004588

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004590
 */

undefined8 recovered_10004590(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10004750(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_10004650
#define DAT_10004650 (*(double *)(0x10004650U))
#undef DAT_10004658
#define DAT_10004658 (*(double *)(0x10004658U))
#undef DAT_10004660
#define DAT_10004660 (*(double *)(0x10004660U))
#undef DAT_10004668
#define DAT_10004668 (*(double *)(0x10004668U))
#undef DAT_10004670
#define DAT_10004670 (*(double *)(0x10004670U))
#undef DAT_10004678
#define DAT_10004678 (*(double *)(0x10004678U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

double recovered_100045c0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)
      ) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / pf_bits_double(0x405e000000000000ULL) +
                 (dVar2 * dVar2 * dVar2) / pf_bits_double(0xc0b3b00000000000ULL));
}

#undef DAT_10004650
#undef DAT_10004658
#undef DAT_10004660
#undef DAT_10004668
#undef DAT_10004670
#undef DAT_10004678

#undef DAT_10004708
#define DAT_10004708 (*(double *)(0x10004708U))
#undef DAT_10004710
#define DAT_10004710 (*(double *)(0x10004710U))
#undef DAT_10004718
#define DAT_10004718 (*(double *)(0x10004718U))
#undef DAT_10004720
#define DAT_10004720 (*(double *)(0x10004720U))
#undef DAT_10004728
#define DAT_10004728 (*(double *)(0x10004728U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004680
 */

double recovered_10004680(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)
      ) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / pf_bits_double(0xc086800000000000ULL);
}

#undef DAT_10004708
#undef DAT_10004710
#undef DAT_10004718
#undef DAT_10004720
#undef DAT_10004728

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004730
 */

double recovered_10004730(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10004808
#define DAT_10004808 (*(double *)(0x10004808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004750
 */

undefined8 recovered_10004750(undefined4 param_1,undefined4 param_2)

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
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
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

#undef DAT_10004808

#undef DAT_10004890
#define DAT_10004890 (*(double *)(0x10004890U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004810
 */

undefined8 recovered_10004810(undefined4 param_1,undefined4 param_2)

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
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
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

#undef DAT_10004890

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004898
 */

double recovered_10004898(uint param_1,uint param_2)

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
 * Address: 0x100048e0
 */

double recovered_100048e0(uint param_1,uint param_2)

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


#undef DAT_100049b0
#define DAT_100049b0 (*(float *)(0x100049b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004970
 */

float recovered_10004970(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return pf_bits_float(0x0U);
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_100049b0

#undef DAT_10004a6c
#define DAT_10004a6c (*(float *)(0x10004a6cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049b4
 */

float recovered_100049b4(float param_1,float *param_2)

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
    return pf_bits_float(0x0U);
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

#undef DAT_10004a6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a70
 */

float recovered_10004a70(float param_1,uint param_2)

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


#undef DAT_10004b40
#define DAT_10004b40 (*(float *)(0x10004b40U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004abc
 */

float recovered_10004abc(float param_1,float param_2)

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
    return pf_bits_float(0x0U);
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

#undef DAT_10004b40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b44
 */

float recovered_10004b44(float param_1)

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
 * Address: 0x10004b7c
 */

float recovered_10004b7c(float param_1)

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
 * Address: 0x10004bc8
 */

double recovered_10004bc8(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004c1c
 */

float recovered_10004c1c(float param_1)

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


#undef DAT_10004ccc
#define DAT_10004ccc (*(float *)(0x10004cccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c78
 */

float recovered_10004c78(float param_1)

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
  return pf_bits_float(0x0U);
}

#undef DAT_10004ccc

#undef DAT_10004e08
#define DAT_10004e08 (*(double *)(0x10004e08U))
#undef DAT_10004e10
#define DAT_10004e10 (*(float *)(0x10004e10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cd0
 */

float recovered_10004cd0(float param_1)

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
    return pf_bits_float(0xff800000U);
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
  return (float)(dVar4 + dVar4 + dVar5 * pf_bits_double(0x3fe62e42fefa39efULL));
}

#undef DAT_10004e08
#undef DAT_10004e10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e14
 */

void recovered_10004e14(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10004750(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_10004ee0
#define DAT_10004ee0 (*(double *)(0x10004ee0U))
#undef DAT_10004ee8
#define DAT_10004ee8 (*(double *)(0x10004ee8U))
#undef DAT_10004ef0
#define DAT_10004ef0 (*(double *)(0x10004ef0U))
#undef DAT_10004ef8
#define DAT_10004ef8 (*(double *)(0x10004ef8U))
#undef DAT_10004f00
#define DAT_10004f00 (*(double *)(0x10004f00U))
#undef DAT_10004f08
#define DAT_10004f08 (*(double *)(0x10004f08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e48
 */

float recovered_10004e48(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / pf_bits_double(0x405e000000000000ULL) +
                         (dVar2 * dVar2 * dVar2) / pf_bits_double(0xc0b3b00000000000ULL)));
}

#undef DAT_10004ee0
#undef DAT_10004ee8
#undef DAT_10004ef0
#undef DAT_10004ef8
#undef DAT_10004f00
#undef DAT_10004f08

#undef DAT_10004fa0
#define DAT_10004fa0 (*(double *)(0x10004fa0U))
#undef DAT_10004fa8
#define DAT_10004fa8 (*(double *)(0x10004fa8U))
#undef DAT_10004fb0
#define DAT_10004fb0 (*(double *)(0x10004fb0U))
#undef DAT_10004fb8
#define DAT_10004fb8 (*(double *)(0x10004fb8U))
#undef DAT_10004fc0
#define DAT_10004fc0 (*(double *)(0x10004fc0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f10
 */

float recovered_10004f10(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / pf_bits_double(0xc086800000000000ULL));
}

#undef DAT_10004fa0
#undef DAT_10004fa8
#undef DAT_10004fb0
#undef DAT_10004fb8
#undef DAT_10004fc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc8
 */

float recovered_10004fc8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe4
 */

int recovered_10004fe4(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10005138
 */

int recovered_10005138(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x100051b4;
  }
  bVar2 = false;
joined_r0x100051b4:
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
 * Address: 0x10005298
 */

double recovered_10005298(byte *param_1,undefined4 *param_2)

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
      goto LAB_10005384;
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
LAB_10005384:
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
 * Address: 0x1000546c
 */

float recovered_1000546c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *in_r0;
  undefined4 *in_r1;
  double dVar1;

  dVar1 = recovered_10005298(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10007b96
#define DAT_10007b96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_10007ba0
#define str_10007ba0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_10007bb1
#define str_10007bb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005488
 */

int recovered_10005488(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10005508:
  while( true ) {
    pcVar6 = str_10007bb1;
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
LAB_10005528:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10005548;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_100055b4;
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
LAB_100055b4:
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
      goto LAB_100055e0;
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
LAB_100055e0:
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
switchD_100057b4_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10006068;
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
      goto LAB_10005a84;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_10005a84:
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
      local_60[-iVar7] = str_10007bb1[uVar11 + uVar12 * -10];
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
      goto LAB_10006068;
    }
    break;
  default:
    goto switchD_100057b4_caseD_4a;
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
      pcVar6 = str_10007ba0;
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
    goto LAB_10006068;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10005528;
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
                      goto LAB_10005f5c;
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
LAB_10005f5c:
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
        local_60[-iVar7] = str_10007bb1[uVar10 + uVar12 * -10];
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
LAB_10005f24:
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
                    goto LAB_10005f24;
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
    goto LAB_10005508;
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
      local_60[iVar7] = str_10007bb1[uVar10 & 0xf];
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
    goto LAB_10005508;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10005508;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_10007b96;
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
      goto LAB_10005f80;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10005f80;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10005f80:
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
      local_60[-iVar7] = str_10007bb1[uVar11 + uVar12 * -10];
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
LAB_10006068:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10005508;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10005508;
code_r0x10005548:
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
  goto LAB_10005508;
}

#undef DAT_10007b96
#undef str_10007ba0
#undef str_10007bb1
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_10006250(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10005488(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10008040
#define DAT_10008040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10008048
#define DAT_10008048 (*(int * *)(((uintptr_t)pf_module_state + 0x4d8U)))
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
 * Address: 0x10006280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006280(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_10008040 != 0;
          puVar4 = &DAT_10008040;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_10008048;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_10008048 = piVar3;
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
      puVar4 = &DAT_10008040;
      if (DAT_10008040 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_10008048;
      goto LAB_10006464;
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
      bVar7 = DAT_10008040 != 0;
      puVar4 = &DAT_10008040;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_10008048;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_10006464:
      if (piVar5 == (int *)0x0) {
        DAT_10008048 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10008040
#undef DAT_10008048
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006480
 */

uint * recovered_10006480(uint *param_1,uint *param_2)

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
 * Address: 0x10006504
 */

undefined4 recovered_10006504(uint *param_1,int param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006564
 */

undefined8 recovered_10006564(int param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_r11;
  uint uVar8;
  bool bVar9;
  bool bVar10;

  uVar1 = 1;
  uVar3 = param_2;
  if (param_3 != (int *)0x0) {
    if (param_4 != (int *)0x0) {
      unaff_r11 = param_5;
    }
    if (param_4 != (int *)0x0 && unaff_r11 != (int *)0x0) {
      uVar5 = *param_3;
      uVar1 = 2;
      if (((0xffffffdf < uVar5 - 0x21) && (uVar6 = param_3[1], 0xffffffdf < uVar6 - 0x21)) &&
         (uVar1 = 3, param_1 != 0 && param_2 != 0)) {
        uVar2 = recovered_10000f08(param_1,uVar5);
        uVar3 = param_1 - uVar2 * uVar5;
        if (uVar3 == 0) {
          uVar3 = recovered_10000f08(param_2,uVar6);
          uVar1 = 3;
          if (param_2 == uVar3 * uVar6) {
            uVar1 = 4;
            uVar4 = param_3[3];
            if (param_3[3] == 0) {
              uVar4 = uVar2;
            }
            if (uVar4 - 1 < uVar2) {
              uVar2 = (uint)((ulonglong)uVar4 * (ulonglong)uVar3);
              uVar8 = (uint)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20);
              uVar7 = param_3[2];
              uVar3 = param_3[4];
              if (param_3[4] == 0) {
                uVar1 = 5;
                uVar3 = -(uVar8 + (uVar2 >= 0x101));
                if ((uint)(uVar2 < 0x101) <= -uVar8) goto LAB_10006594;
                uVar3 = uVar2;
              }
              uVar1 = 5;
              if ((0xfffffeff < uVar3 - 0x101) && (uVar8 != 0 || uVar8 < (uVar3 <= uVar2))) {
                bVar10 = 0xfe < uVar7;
                bVar9 = uVar7 == 0xff;
                uVar1 = 6;
                if (uVar7 < 0x100) {
                  bVar10 = 0xff < uVar3 + uVar7;
                  bVar9 = uVar3 + uVar7 == 0x100;
                }
                if (!bVar10 || bVar9) {
                  param_4[4] = uVar3;
                  param_4[3] = uVar4;
                  param_4[2] = uVar7;
                  param_4[1] = uVar6;
                  *param_4 = uVar5;
                  *unaff_r11 = uVar6 * (uVar5 + 7 >> 3) * uVar3 + 0xc;
                  uVar1 = 0;
                }
              }
            }
          }
        }
        else {
          uVar1 = 3;
        }
      }
    }
  }
LAB_10006594:
  return CONCAT44(uVar3,uVar1);
}


#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_24 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066dc
 */

undefined4
recovered_100066dc(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6,
                  undefined4 *param_7,uint param_8,uint *param_9)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;

  if (param_6 == (uint *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar5 = *param_6;
    uVar2 = 2;
    if (((0xffffffdf < uVar5 - 0x21) &&
        (uVar6 = param_6[1], local_24 = uVar5, 0xffffffdf < uVar6 - 0x21)) &&
       (uVar2 = 3, param_3 != 0 && param_4 != 0)) {
      uVar3 = recovered_10000f08(param_3,uVar5);
      local_2c = uVar6;
      if ((param_3 != uVar3 * uVar5) ||
         (uVar9 = recovered_10000f08(param_4,uVar6), local_30 = uVar3, param_4 != uVar9 * uVar6)) {
        bVar11 = false;
        uVar3 = 0;
        uVar2 = 3;
        goto LAB_1000678c;
      }
      uVar7 = param_6[3];
      if (param_6[3] == 0) {
        uVar7 = uVar3;
      }
      if (uVar3 <= uVar7 - 1) {
        uVar2 = 4;
        uVar3 = 0;
        bVar11 = false;
        goto LAB_1000678c;
      }
      uVar10 = (uint)((ulonglong)uVar7 * (ulonglong)uVar9);
      uVar8 = (uint)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x20);
      local_30 = param_6[2];
      uVar9 = param_6[4];
      if (param_6[4] == 0) {
        if ((uint)(uVar10 < 0x101) <= -uVar8) {
          uVar2 = 5;
          goto LAB_10006788;
        }
        uVar9 = uVar10;
      }
      uVar3 = 0;
      uVar2 = 5;
      if (0xfffffeff < uVar9 - 0x101) {
        bVar11 = false;
        local_48 = uVar7;
        local_3c = uVar9;
        if (uVar8 == 0 && (uVar9 <= uVar10) <= uVar8) goto LAB_1000678c;
        uVar2 = 6;
        if (local_30 < 0x100) {
          bVar11 = false;
          if (uVar9 + local_30 < 0x101) {
            bVar11 = true;
            uVar3 = uVar6 * (uVar5 + 7 >> 3) * uVar9 + 0xc;
            uVar2 = 0;
          }
          goto LAB_1000678c;
        }
      }
    }
  }
LAB_10006788:
  uVar3 = 0;
  bVar11 = false;
LAB_1000678c:
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar3;
  }
  if (((bVar11) && (uVar2 = 1, param_1 != 0)) &&
     ((param_7 != (undefined4 *)0x0 && param_9 != (uint *)0x0 &&
      ((uVar2 = 7, -(param_3 >> 0x1e) < (uint)(param_3 << 2 <= param_5) &&
       (uVar5 = (uint)((ulonglong)param_4 * (ulonglong)param_5),
       (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20) == 0)))))) {
    bVar12 = param_2 <= uVar5;
    bVar11 = uVar5 == param_2;
    if (!bVar12 || bVar11) {
      uVar2 = 8;
      bVar12 = param_8 <= uVar3;
      bVar11 = uVar3 == param_8;
    }
    if (!bVar12 || bVar11) {
      uVar6 = 0;
      recovered_10003238((byte *)param_7,0,uVar3);
      *(char *)((int)param_7 + 7) = (char)local_3c;
      *(char *)(param_7 + 1) = (char)local_24;
      uVar5 = local_24 + 7 >> 3;
      *(char *)((int)param_7 + 5) = (char)local_2c;
      *(char *)(param_7 + 2) = (char)uVar5;
      *param_7 = 0x31464257;
      *(char *)((int)param_7 + 6) = (char)local_30;
      do {
        uVar3 = recovered_10000f08(uVar6,local_48);
        uVar9 = 0;
        do {
          iVar1 = uVar9 * uVar5 + uVar5 * local_2c * uVar6 + 0xc;
          uVar7 = 0;
          do {
            pbVar4 = (byte *)((uVar9 + uVar3 * local_2c) * param_5 + param_1 +
                             (uVar7 + (uVar6 - uVar3 * local_48) * local_24) * 4);
            if ((0x7fffffff < (uint)(int)(char)pbVar4[3]) &&
               ((uint)((short)(ushort)pbVar4[2] * 0x72 +
                      (short)(ushort)*pbVar4 * 299 + (short)(ushort)pbVar4[1] * 0x24b) >> 10 < 0x7d)
               ) {
              *(byte *)((int)param_7 + (uVar7 >> 3) + iVar1) =
                   *(byte *)((int)param_7 + (uVar7 >> 3) + iVar1) | (byte)(0x80 >> (uVar7 & 7));
            }
            uVar7 = uVar7 + 1;
          } while (local_24 != uVar7);
          uVar9 = uVar9 + 1;
        } while (uVar9 != local_2c);
        uVar2 = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 != local_3c);
    }
  }
  return uVar2;
}

#undef local_48
#undef local_3c
#undef local_30
#undef local_2c
#undef local_24

#undef DAT_10007bc2
#define DAT_10007bc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef str_10007feb
#define str_10007feb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a7c
 */

undefined4 recovered_10006a7c(byte *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint unaff_r5;
  byte *pbVar4;

  if (param_1 == (byte *)0x0 || param_2 == 0) {
    return 9;
  }
  if (param_3 != 0) {
    unaff_r5 = (uint)*param_1;
  }
  pbVar4 = param_1;
  if (param_3 == 0 || unaff_r5 == 0) {
    return 9;
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (unaff_r5 == 0x2f || unaff_r5 == 0x5c) {
      param_1 = pbVar4;
    }
    else if (unaff_r5 == 0) break;
    unaff_r5 = (uint)*pbVar4;
  } while( true );
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)recovered_10003b6c((int)param_1);
    puVar3 = puVar1;
    do {
      puVar2 = puVar3;
      puVar3 = puVar1;
      if (puVar2 == (undefined8 *)0x0) break;
      puVar3 = (undefined8 *)((int)puVar2 + -1);
    } while (((param_1 + (int)puVar2)[-1] != 0x2e) || (puVar2 == (undefined8 *)0x1));
    if ((puVar3 != (undefined8 *)0x0) && ((int)puVar3 + 0x15U <= param_3)) {
      recovered_10002aa8((undefined8 *)param_2,(undefined8 *)str_10007feb,(undefined8 *)&DataAbort);
      recovered_10002aa8((undefined8 *)(param_2 + 0x10),(undefined8 *)param_1,puVar3);
      recovered_10002aa8((undefined8 *)(param_2 + 0x10 + (int)puVar3),(undefined8 *)&DAT_10007bc2,
                         (undefined8 *)0x5);
      return 0;
    }
  }
  return 9;
}

#undef DAT_10007bc2
#undef EXT_00000010
#undef str_10007feb

#define local_24 (*(uint * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b94
 */

bool recovered_10006b94(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;

  bVar9 = false;
  if (param_1 != (byte *)0x0) {
    local_24 = param_2;
  }
  if (param_1 != (byte *)0x0 && param_2 != (uint *)0x0) {
    for (; bVar2 = *param_1, bVar2 == 9 || bVar2 == 0x20; param_1 = param_1 + 1) {
    }
    if ((bVar2 == 0x30) && ((param_1[1] | 0x20) == 0x78)) {
      param_1 = param_1 + 2;
      uVar5 = 0x10;
    }
    else {
      uVar5 = 10;
    }
    uVar7 = 0;
    iVar8 = 0;
    for (; (uVar3 = (uint)*param_1, uVar3 != 0 && uVar3 != 0x20 && (uVar3 != 9));
        param_1 = param_1 + 1) {
      uVar6 = uVar3 - 0x30 & 0xff;
      if (9 < uVar6) {
        if ((uVar3 - 0x61 & 0xff) < 6) {
          uVar6 = uVar3 - 0x57;
        }
        else {
          if (5 < (uVar3 - 0x41 & 0xff)) {
            return false;
          }
          uVar6 = uVar3 - 0x37;
        }
      }
      if (uVar5 <= uVar6) {
        return false;
      }
      uVar3 = recovered_10000f08(~uVar6,uVar5);
      if (uVar3 < uVar7) {
        return false;
      }
      uVar7 = uVar7 * uVar5 + uVar6;
      iVar8 = iVar8 + 1;
    }
    iVar4 = 1;
    while (uVar3 == 0x20 || uVar3 == 9) {
      pbVar1 = param_1 + iVar4;
      iVar4 = iVar4 + 1;
      uVar3 = (uint)*pbVar1;
    }
    bVar9 = false;
    if ((iVar8 != 0) && (bVar9 = uVar3 == 0, bVar9)) {
      *local_24 = uVar7;
    }
  }
  return bVar9;
}

#undef local_24

#undef PTR_DAT_1000c004
#define PTR_DAT_1000c004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4494U)))
#undef str_10007d47
#define str_10007d47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce0
 */

char * recovered_10006ce0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 10) {
    return (&PTR_DAT_1000c004)[param_1];
  }
  return str_10007d47;
}

#undef PTR_DAT_1000c004
#undef str_10007d47

#undef DAT_10007f6e
#define DAT_10007f6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
#undef _DAT_40010844
#define _DAT_40010844 (*(code * *)(0x40010844U))
#undef str_10007bca
#define str_10007bca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aU)))
#undef str_10007bdb
#define str_10007bdb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bU)))
#undef str_10007c12
#define str_10007c12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2U)))
#undef str_10007c4d
#define str_10007c4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_10007c72
#define str_10007c72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x102U)))
#undef str_10007caa
#define str_10007caa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13aU)))
#undef str_10007cdf
#define str_10007cdf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16fU)))
#undef str_10007d05
#define str_10007d05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x195U)))
#undef str_10007d24
#define str_10007d24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10007d47
#define str_10007d47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d7U)))
#undef str_10007d65
#define str_10007d65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10007d8f
#define str_10007d8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21fU)))
#undef str_10007da0
#define str_10007da0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x230U)))
#undef str_10007db3
#define str_10007db3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_10007dc8
#define str_10007dc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x258U)))
#undef str_10007dde
#define str_10007dde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26eU)))
#undef str_10007df9
#define str_10007df9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_10007e15
#define str_10007e15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a5U)))
#undef str_10007e2f
#define str_10007e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bfU)))
#undef str_10007e48
#define str_10007e48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d8U)))
#undef str_10007e65
#define str_10007e65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f5U)))
#undef str_10007ea0
#define str_10007ea0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#undef str_10007eb6
#define str_10007eb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#undef str_10007ed6
#define str_10007ed6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x366U)))
#undef str_10007ee4
#define str_10007ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_10007f04
#define str_10007f04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x394U)))
#undef str_10007f2b
#define str_10007f2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bbU)))
#undef str_10007f3b
#define str_10007f3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
#undef str_10007f58
#define str_10007f58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e8U)))
#undef str_10007f71
#define str_10007f71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_10007f7f
#define str_10007f7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_10007fa7
#define str_10007fa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x437U)))
#define uStack_30b4 (*(uint *)(pf_stack_frame + 44))
#define abStack_30b0 (*(byte (*)[12464])(pf_stack_frame + 48))
#define uStack_30a0 (*(undefined4 *)(pf_stack_frame + 64))
#define acStack_2026 (*(char (*)[8230])(pf_stack_frame + 4282))
#define local_30cc (*(uint *)(pf_stack_frame + 20))
#define local_30c8 (*(void * *)(pf_stack_frame + 24))
#define local_30c4 (*(int *)(pf_stack_frame + 28))
#define local_30bc (*(uint *)(pf_stack_frame + 36))
#define local_30b8 (*(uint *)(pf_stack_frame + 40))
#define local_309c (*(uint *)(pf_stack_frame + 68))
#define local_3098 (*(uint *)(pf_stack_frame + 72))
#define local_3094 (*(uint (*)[3109])(pf_stack_frame + 76))
#define local_3087 (*(byte (*)[12423])(pf_stack_frame + 89))
#define local_1025 (*(byte (*)[4133])(pf_stack_frame + 8379))
#define uStack_30c0 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d0c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006d0c(void)

{
  unsigned char pf_stack_frame[12544] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *data;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;

  local_30cc = 0;
  recovered_10003238((byte *)&local_309c,0,0x14);
  recovered_10003238(abStack_30b0,0,0x14);
  recovered_10003238((byte *)&local_30c8,0,0x18);
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(str_10007d65);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(&DAT_10007f6e);
  }
  local_1025[0] = 0;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar3 = (*_DAT_40010844)(local_1025,0x1001,str_10007d8f,1);
    bVar1 = 0;
    if (iVar3 != 0) {
      bVar1 = local_1025[0];
    }
    if ((iVar3 != 0 && bVar1 != 0) && (local_3087[0] = 0, _DAT_40010800 == 0x50414d57)) {
      do {
        local_3087[0] = 0;
        if ((((_DAT_40010804 == 0) || (_DAT_40010808 < 0x48)) || (_DAT_40010844 == (code *)0x0)) ||
           (iVar3 = (*_DAT_40010844)(local_3087,0x40,str_10007db3,1), iVar3 == 0)) break;
        bVar2 = recovered_10006b94(local_3087,&local_309c);
        if ((bVar2) && (local_309c - 1 < 0x20)) {
          local_3087[0] = 0;
          if (_DAT_40010800 == 0x50414d57) {
            goto LAB_10007000;
          }
          break;
        }
        recovered_100078ec(str_10007f71,str_10007f7f);
        local_3087[0] = 0;
      } while (_DAT_40010800 == 0x50414d57);
    }
  }
  goto LAB_10006df8;
  while( true ) {
    recovered_100078ec(str_10007f71,str_10007f7f);
    local_3087[0] = 0;
    if (_DAT_40010800 != 0x50414d57) break;
LAB_10007000:
    local_3087[0] = 0;
    if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x48)) ||
       ((_DAT_40010844 == (code *)0x0 ||
        (iVar3 = (*_DAT_40010844)(local_3087,0x40,str_10007dc8,1), iVar3 == 0)))) break;
    bVar2 = recovered_10006b94(local_3087,&local_3098);
    if ((bVar2) && (local_3098 - 1 < 0x20)) {
      local_3087[0] = 0;
      if (_DAT_40010800 == 0x50414d57) {
        goto LAB_100070c4;
      }
      break;
    }
  }
  goto LAB_10006df8;
  while( true ) {
    bVar2 = recovered_10006b94(local_3087,local_3094);
    if ((bVar2) && (local_3094[0] < 0x100)) goto LAB_10007178;
    recovered_100078ec(str_10007f71,str_10007fa7);
    local_3087[0] = 0;
    if (_DAT_40010800 != 0x50414d57) break;
LAB_100070c4:
    local_3087[0] = 0;
    if ((((_DAT_40010804 == 0) || (_DAT_40010808 < 0x48)) || (_DAT_40010844 == (code *)0x0)) ||
       (iVar3 = (*_DAT_40010844)(local_3087,0x40,str_10007dde,1), iVar3 == 0)) break;
    if (local_3087[0] == 0) {
      local_3094[0] = 0;
LAB_10007178:
      local_3087[0] = 0;
      if (_DAT_40010800 == 0x50414d57) {
        goto LAB_10007198;
      }
      break;
    }
  }
  goto LAB_10006df8;
  while( true ) {
    bVar2 = recovered_10006b94(local_3087,local_3094 + 1);
    if (bVar2) goto LAB_10007240;
    recovered_100078ec(str_10007f71,str_10007fa7);
    local_3087[0] = 0;
    if (_DAT_40010800 != 0x50414d57) break;
LAB_10007198:
    local_3087[0] = 0;
    if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x48)) ||
       ((_DAT_40010844 == (code *)0x0 ||
        (iVar3 = (*_DAT_40010844)(local_3087,0x40,str_10007df9,1), iVar3 == 0)))) break;
    if (local_3087[0] == 0) {
      local_3094[1] = 0;
LAB_10007240:
      local_3087[0] = 0;
      if (_DAT_40010800 == 0x50414d57) {
        goto LAB_10007260;
      }
      break;
    }
  }
  goto LAB_10006df8;
LAB_10007260:
  do {
    local_3087[0] = 0;
    if ((((_DAT_40010804 == 0) || (_DAT_40010808 < 0x48)) || (_DAT_40010844 == (code *)0x0)) ||
       (iVar3 = (*_DAT_40010844)(local_3087,0x40,str_10007e15,1), iVar3 == 0)) break;
    if (local_3087[0] == 0) {
      local_3094[2] = 0;
LAB_10007314:
      iVar3 = recovered_1000782c((char *)local_1025,&local_30c8);
      if (iVar3 == 0) {
        pcVar5 = (char *)local_3087;
        local_3087[0] = 0;
        recovered_10007880(pcVar5);
        pcVar4 = str_10007e2f;
LAB_10007524:
        recovered_100078ec(pcVar4,pcVar5);
        return 1;
      }
      if ((local_30c4 != 0) || (local_30c8 == (void *)0x0)) {
        pcVar4 = str_10007e48;
        pcVar5 = str_10007e65;
        goto LAB_10007524;
      }
      uVar7 = recovered_10006564(local_30bc,local_30b8,(int *)&local_309c,(int *)abStack_30b0,
                                 (int *)&local_30cc);
      pcVar4 = str_10007bca;
                    /* WARNING: Switch is manually overridden */
      switch((uintptr_t)((int)uVar7)) {
      case 0:
        data = (undefined4 *)recovered_10007a28(local_30cc);
        if (data != (undefined4 *)0x0) {
          uVar6 = recovered_100066dc((int)local_30c8,uStack_30c0,local_30bc,local_30b8,uStack_30b4,
                                     &local_309c,data,local_30cc,&local_30cc);
          pcVar4 = str_10007bca;
          switch((uintptr_t)(uVar6)) {
          case 0:
            uVar6 = recovered_10006a7c(local_1025,(int)acStack_2026,0x1001);
            pcVar4 = str_10007bca;
                    /* WARNING: Switch is manually overridden */
            switch((uintptr_t)(uVar6)) {
            case 0:
              recovered_10007a7c((char *)((uintptr_t)pf_module_state + 0x3b5U));
              recovered_10007a7c(str_10007f2b);
              iVar3 = recovered_10007acc(acStack_2026,data,local_30cc);
              if (iVar3 == 0) {
                pcVar4 = (char *)local_3087;
                local_3087[0] = 0;
                recovered_10007880(pcVar4);
                pcVar5 = str_10007f3b;
                break;
              }
              recovered_10006250((char *)local_3087,0x1061,str_10007f58,
                                 uStack_30a0,acStack_2026);
              recovered_10007774((char *)local_3087);
              uVar6 = 0;
              goto LAB_10007660;
            case 2:
              pcVar4 = str_10007bdb;
              pcVar5 = str_10007f04;
              break;
            case 3:
              pcVar4 = str_10007c12;
              pcVar5 = str_10007f04;
              break;
            case 4:
              pcVar4 = str_10007c4d;
              pcVar5 = str_10007f04;
              break;
            case 5:
              pcVar4 = str_10007c72;
              pcVar5 = str_10007f04;
              break;
            case 6:
              pcVar4 = str_10007caa;
              pcVar5 = str_10007f04;
              break;
            case 7:
              pcVar4 = str_10007cdf;
              pcVar5 = str_10007f04;
              break;
            case 8:
              pcVar4 = str_10007d05;
              pcVar5 = str_10007f04;
              break;
            case 9:
              pcVar4 = str_10007d24;
            case 1:
              pcVar5 = str_10007f04;
            }
            goto LAB_10007658;
          case 1:
            break;
          case 2:
            pcVar4 = str_10007bdb;
            break;
          case 3:
            pcVar4 = str_10007c12;
            break;
          case 4:
            pcVar4 = str_10007c4d;
            break;
          case 5:
            pcVar4 = str_10007c72;
            break;
          case 6:
            pcVar4 = str_10007caa;
            break;
          case 7:
            pcVar4 = str_10007cdf;
            break;
          case 8:
            pcVar4 = str_10007d05;
            break;
          case 9:
            pcVar4 = str_10007d24;
            break;
          default:
            pcVar4 = str_10007d47;
          }
          pcVar5 = str_10007ee4;
LAB_10007658:
          recovered_100078ec(pcVar5,pcVar4);
          uVar6 = 1;
LAB_10007660:
          recovered_10007b20(data);
          goto LAB_10007590;
        }
        pcVar5 = str_10007eb6;
        pcVar4 = str_10007ed6;
        goto LAB_10007588;
      case 2:
        pcVar4 = str_10007bdb;
        break;
      case 3:
        pcVar4 = str_10007c12;
        break;
      case 4:
        pcVar4 = str_10007c4d;
        break;
      case 5:
        pcVar4 = str_10007c72;
        break;
      case 6:
        pcVar4 = str_10007caa;
      }
      pcVar5 = str_10007ea0;
LAB_10007588:
      recovered_100078ec(pcVar5,pcVar4);
      uVar6 = 1;
LAB_10007590:
      if (local_30c8 != (void *)0x0) {
        recovered_10007b20(local_30c8);
      }
      return uVar6;
    }
    bVar2 = recovered_10006b94(local_3087,local_3094 + 2);
    if ((bVar2) && (local_3094[2] < 0x101)) goto LAB_10007314;
    recovered_100078ec(str_10007f71,str_10007fa7);
    local_3087[0] = 0;
  } while (_DAT_40010800 == 0x50414d57);
LAB_10006df8:
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(str_10007da0);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(&DAT_10007f6e);
  }
  return 1;
}

#undef DAT_10007f6e
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010828
#undef DAT_40010844
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010828
#undef _DAT_40010844
#undef str_10007bca
#undef str_10007bdb
#undef str_10007c12
#undef str_10007c4d
#undef str_10007c72
#undef str_10007caa
#undef str_10007cdf
#undef str_10007d05
#undef str_10007d24
#undef str_10007d47
#undef str_10007d65
#undef str_10007d8f
#undef str_10007da0
#undef str_10007db3
#undef str_10007dc8
#undef str_10007dde
#undef str_10007df9
#undef str_10007e15
#undef str_10007e2f
#undef str_10007e48
#undef str_10007e65
#undef str_10007ea0
#undef str_10007eb6
#undef str_10007ed6
#undef str_10007ee4
#undef str_10007f04
#undef str_10007f2b
#undef str_10007f3b
#undef str_10007f58
#undef str_10007f71
#undef str_10007f7f
#undef str_10007fa7
#undef uStack_30b4
#undef abStack_30b0
#undef uStack_30a0
#undef acStack_2026
#undef local_30cc
#undef local_30c8
#undef local_30c4
#undef local_30bc
#undef local_30b8
#undef local_309c
#undef local_3098
#undef local_3094
#undef local_3087
#undef local_1025
#undef uStack_30c0

#undef DAT_10007f6e
#define DAT_10007f6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007774
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007774(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_r1;

  if (text != (char *)0x0) {
    in_r1 = (uint)(byte)*text;
  }
  if ((((text != (char *)0x0 && in_r1 != 0) && (_DAT_40010800 == 0x50414d57)) &&
      (_DAT_40010804 != 0)) && ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(text);
  }
  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x2c)) || (_DAT_40010828 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10007828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_40010828)(&DAT_10007f6e);
  return;
}

#undef DAT_10007f6e
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010828
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010828

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010858
#define DAT_40010858 (*(uint8_t *)(0x40010858U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010858
#define _DAT_40010858 (*(code * *)(0x40010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000782c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000782c(char *path,void *image)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x5b < _DAT_40010808)) &&
     (_DAT_40010858 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*_DAT_40010858)(path,image);
    return iVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010858
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010858

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010958
#define DAT_40010958 (*(uint8_t *)(0x40010958U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010958
#define _DAT_40010958 (*(code * *)(0x40010958U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007880(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb < _DAT_40010808)) &&
     (0x56 < _DAT_40010808 >> 2)) {
    if (_DAT_40010958 == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x100078d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_40010958)(param_1,0xa0);
    return;
  }
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010958
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010958

#undef DAT_10007b9f
#define DAT_10007b9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10007f6e
#define DAT_10007f6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
#undef str_10007fd1
#define str_10007fd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x461U)))
#undef str_10007fe1
#define str_10007fe1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x471U)))
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100078ec(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char *arg3;
  undefined *arg4;

  if (param_2 == (char *)0x0) {
    arg4 = &DAT_10007b9f;
    param_2 = &DAT_10007b9f;
  }
  else {
    arg4 = (undefined *)((uintptr_t)pf_module_state + 0x478U);
    if (*param_2 == '\0') {
      param_2 = &DAT_10007b9f;
      arg4 = &DAT_10007b9f;
    }
  }
  arg3 = str_10007fe1;
  if (param_1 != (char *)0x0) {
    arg3 = param_1;
  }
  recovered_10006250(local_114,0x100,str_10007fd1,arg3,arg4,param_2);
  if ((((local_114[0] != '\0') && (_DAT_40010800 == 0x50414d57)) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(local_114);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(&DAT_10007f6e);
    return;
  }
  return;
}

#undef DAT_10007b9f
#undef DAT_10007f6e
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010828
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010828
#undef str_10007fd1
#undef str_10007fe1
#undef local_114

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
 * Address: 0x10007a28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10007a28(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10007a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_4001084c)(size);
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001088c
#define DAT_4001088c (*(uint8_t *)(0x4001088cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001088c
#define _DAT_4001088c (*(code * *)(0x4001088cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007a7c(char *path)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x90)) || (_DAT_4001088c == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10007ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_4001088c)(path);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001088c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001088c

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
 * Address: 0x10007acc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10007acc(char *path,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
     (_DAT_40010838 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10007b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*_DAT_40010838)(path,data,size);
    return iVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007b20(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10007b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_40010850)(pointer);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
