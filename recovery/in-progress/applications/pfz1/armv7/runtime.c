/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001220
 */

uint recovered_10001220(uint param_1,uint param_2)

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
 * Address: 0x10001270
 */

uint recovered_10001270(uint param_1,uint param_2)

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
 * Address: 0x100012a8
 */

uint recovered_100012a8(uint param_1,uint param_2)

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
 * Address: 0x10001318
 */

uint recovered_10001318(uint param_1,uint param_2)

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
 * Address: 0x10001384
 */

undefined8 recovered_10001384(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10004b28(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001394
 */

undefined8 recovered_10001394(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10004a68(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a4
 */

float recovered_100013a4(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004bb0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013c0
 */

float recovered_100013c0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004bf8(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000c034
#define DAT_1000c034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x908U)))
#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

void recovered_100013e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_1000c034 = 0;
  recovered_1000146c();
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c034
#undef DAT_1000c03c

#undef DAT_1000c034
#define DAT_1000c034 (*(char *)(((uintptr_t)pf_module_state + 0x908U)))
#undef DAT_1000c038
#define DAT_1000c038 (*(int *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c040
#define DAT_1000c040 (*(int *)(((uintptr_t)pf_module_state + 0x914U)))
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
 * Address: 0x1000146c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000146c(void)

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
  if (DAT_1000c034 != '\0') {
    return;
  }
  DAT_1000c038 = 0;
  DAT_1000c040 = 0;
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
        if (iVar11 == 0) goto LAB_1000166c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10006598((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_1000c038 != 0) goto LAB_1000169c;
    }
  }
LAB_1000166c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10006598((int *)0x300000,piVar4,&local_24);
LAB_1000169c:
  if (DAT_1000c040 == 0) {
    DAT_1000c040 = DAT_1000c038;
  }
  DAT_1000c034 = 1;
  return;
}

#undef DAT_1000c034
#undef DAT_1000c038
#undef DAT_1000c040
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016ec
 */

bool recovered_100016ec(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10001768(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return bVar1;
}

#undef DAT_1000c03c

#undef DAT_1000c038
#define DAT_1000c038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c040
#define DAT_1000c040 (*(int * *)(((uintptr_t)pf_module_state + 0x914U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001768
 */

bool recovered_10001768(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_1000146c();
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
        piVar1 = DAT_1000c038;
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
      piVar3 = (int *)&DAT_1000c038;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10006598((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_1000c040 == (int *)0x0) {
        DAT_1000c040 = DAT_1000c038;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_1000c038
#undef DAT_1000c040
#undef DAT_68000000
#undef local_24

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b0
 */

void recovered_100019b0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  recovered_10001768(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c03c
#undef local_14
#undef local_10

#undef DAT_1000c038
#define DAT_1000c038 (*(uint * *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a48
 */

int recovered_10001a48(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000146c();
  iVar1 = 0;
  puVar3 = DAT_1000c038;
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
  DAT_1000c03c = 0;
  return iVar1;
}

#undef DAT_1000c038
#undef DAT_1000c03c

#undef DAT_1000c038
#define DAT_1000c038 (*(int *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001af8
 */

void recovered_10001af8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000146c();
  for (iVar1 = DAT_1000c038; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c038
#undef DAT_1000c03c

#undef DAT_1000c038
#define DAT_1000c038 (*(int * *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb4
 */

int recovered_10001bb4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000146c();
  iVar1 = 0;
  for (piVar3 = DAT_1000c038; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return iVar1;
}

#undef DAT_1000c038
#undef DAT_1000c03c

#undef DAT_1000c038
#define DAT_1000c038 (*(int *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c5c
 */

void recovered_10001c5c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000146c();
  for (iVar1 = DAT_1000c038; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c038
#undef DAT_1000c03c

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d0c
 */

void recovered_10001d0c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001d90(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c03c

#undef DAT_1000c038
#define DAT_1000c038 (*(uint * *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c040
#define DAT_1000c040 (*(uint * *)(((uintptr_t)pf_module_state + 0x914U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d90
 */

uint * recovered_10001d90(int param_1,uint *param_2,uint *param_3)

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
    recovered_1000146c();
    puVar4 = DAT_1000c038;
    puVar5 = DAT_1000c040;
    if (DAT_1000c040 == (uint *)0x0) {
      puVar5 = DAT_1000c038;
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
              if (uVar7 < uVar8) goto joined_r0x10001e70;
            }
          }
          else {
joined_r0x10001e70:
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
LAB_10001f68:
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
                    DAT_1000c040 = DAT_1000c038;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_1000c040 = puVar4;
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
                      puVar2 = recovered_10006798(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10001f68;
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

#undef DAT_1000c038
#undef DAT_1000c040

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fe8
 */

void recovered_10001fe8(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001d90(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c03c

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002070
 */

uint * recovered_10002070(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001d90(param_1,(uint *)param_2,(uint *)param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return puVar2;
}

#undef DAT_1000c03c

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

void recovered_10002100(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000217c(param_1);
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return;
}

#undef DAT_1000c03c

#undef DAT_1000c040
#define DAT_1000c040 (*(uint * *)(((uintptr_t)pf_module_state + 0x914U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000217c
 */

void recovered_1000217c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_1000146c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_1000c040 == puVar1) {
        DAT_1000c040 = puVar4;
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
          if (DAT_1000c040 == puVar4) {
            DAT_1000c040 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_1000c040 = puVar4;
  return;
}

#undef DAT_1000c040

#undef DAT_1000c03c
#define DAT_1000c03c (*(int *)(((uintptr_t)pf_module_state + 0x910U)))
#undef DAT_1000c040
#define DAT_1000c040 (*(uint * *)(((uintptr_t)pf_module_state + 0x914U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e8
 */

undefined8 * recovered_100022e8(undefined8 *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_1000c03c != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x910U));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x910U),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = recovered_10001d90(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_1000251c;
  }
  if (param_2 == 0) {
    recovered_1000217c((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_1000251c;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_1000251c;
  recovered_1000146c();
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
          DAT_1000c040 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_1000c040 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = *(uint *)((int)param_1 + -0xc);
          *(undefined1 *)(DAT_1000c040 + 3) = 1;
          DAT_1000c040[2] = (uint)puVar6;
          DAT_1000c040[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_1000c040;
          }
          *(uint **)((int)param_1 + -0xc) = DAT_1000c040;
          *(uint **)(param_1 + -2) = puVar12;
          puVar3 = (uint *)param_1;
        }
      }
    }
    goto LAB_1000251c;
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
      puVar3 = DAT_1000c040;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_1000c040 = puVar6;
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
        iVar4 = recovered_1000681c(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_1000c040 = *(uint **)((int)param_1 + -0xc);
        }
        *(undefined1 *)((int)param_1 + -4) = 0;
        puVar3 = (uint *)param_1;
      }
      goto LAB_1000251c;
    }
  }
  puVar7 = recovered_10001d90((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_1000251c;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = (uint *)param_1;
  if (puVar12 < &SupervisorCall) {
LAB_100025ec:
    if (puVar12 != (uint *)0x0) goto LAB_100025f4;
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
            if (uVar14 == uVar11) goto LAB_100027d4;
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
LAB_100027d4:
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
          if (uVar14 == uVar11) goto LAB_100025ec;
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
      goto LAB_100025ec;
    }
LAB_100025f4:
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
      if (puVar12 == puVar13) goto LAB_10002650;
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
LAB_10002650:
  recovered_1000217c((int)param_1);
  puVar3 = puVar7;
LAB_1000251c:
  DataMemoryBarrier(0xb);
  DAT_1000c03c = 0;
  return (undefined8 *)puVar3;
}

#undef DAT_1000c03c
#undef DAT_1000c040
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002888
 */

longlong recovered_10002888(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100028dc
 */

ulonglong recovered_100028dc(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002930
 */

undefined8 recovered_10002930(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000297c
 */

undefined8 recovered_1000297c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002a60
 */

undefined8 recovered_10002a60(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002ae0
 */

undefined8 recovered_10002ae0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002bf8
 */

undefined8 recovered_10002bf8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002cb4
 */

void recovered_10002cb4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cbc
 */

int recovered_10002cbc(int param_1)

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
 * Address: 0x10002cc8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002cc8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002d18. Too many branches */
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
 * Address: 0x10002d1c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002d1c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002d68. Too many branches */
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
 * Address: 0x10002d6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002d6c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x57 < _DAT_40010808)) &&
     (_DAT_40010854 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002dbc. Too many branches */
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
 * Address: 0x10002dc0
 */

void recovered_10002dc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10002dfc;
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
          if (uVar9 == uVar7) goto LAB_10002f90;
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
LAB_10002f90:
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
        if (uVar7 == uVar9) goto LAB_10002df4;
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
LAB_10002df4:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_10002dfc:
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
 * Address: 0x10003044
 */

void recovered_10003044(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    goto LAB_1000308c;
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
          if (puVar7 == param_3) goto LAB_10003318;
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
LAB_10003318:
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
        if (param_3 == puVar7) goto LAB_10003394;
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
LAB_10003394:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_1000308c:
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
    goto LAB_10003108;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_100033a4:
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
          goto LAB_100033a4;
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
        if (uVar8 == uVar10) goto LAB_10003480;
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
LAB_10003480:
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
      if (uVar10 == uVar8) goto LAB_1000353c;
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
LAB_1000353c:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10003108:
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
 * Address: 0x10003550
 */

void recovered_10003550(byte *param_1,byte param_2,uint param_3)

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
  if (param_3 < 8) goto joined_r0x100036d8;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100035f0:
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
        if (uVar5 == uVar6) goto joined_r0x1000367c;
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
      goto joined_r0x100035f0;
    }
  }
joined_r0x1000367c:
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
      if (uVar6 == uVar5) goto joined_r0x100036d8;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x100036d8:
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
 * Address: 0x10003750
 */

void recovered_10003750(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100038d0;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100037ec:
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
        if (uVar7 == uVar8) goto joined_r0x10003870;
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
      goto joined_r0x100037ec;
    }
  }
joined_r0x10003870:
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
      if (uVar7 == uVar8) goto joined_r0x100038d0;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100038d0:
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
 * Address: 0x1000394c
 */

void recovered_1000394c(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10003acc;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100039e8:
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
        if (uVar7 == uVar8) goto joined_r0x10003a6c;
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
      goto joined_r0x100039e8;
    }
  }
joined_r0x10003a6c:
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
      if (uVar7 == uVar8) goto joined_r0x10003acc;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10003acc:
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
 * Address: 0x10003b48
 */

char * recovered_10003b48(char *param_1,char param_2,int param_3)

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
 * Address: 0x10003b7c
 */

int recovered_10003b7c(uint *param_1,uint *param_2,uint param_3)

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
LAB_10003c74:
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
      if (uVar5 != uVar6) goto LAB_10003d6c;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10003d6c;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10003d6c;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10003d6c;
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
LAB_10003ca4:
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
      if (uVar5 != uVar6) goto LAB_10003ca4;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_10003d74((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_10003c74;
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
LAB_10003d6c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d74
 */

int recovered_10003d74(byte *param_1,byte *param_2)

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
 * Address: 0x10003dc4
 */

bool recovered_10003dc4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd8
 */

bool recovered_10003dd8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dec
 */

bool recovered_10003dec(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e04
 */

bool recovered_10003e04(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e30
 */

bool recovered_10003e30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e50
 */

bool recovered_10003e50(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e64
 */

int recovered_10003e64(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e74
 */

int recovered_10003e74(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e84
 */

int recovered_10003e84(int param_1)

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
 * Address: 0x10003eac
 */

int recovered_10003eac(byte *param_1,byte *param_2)

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
LAB_10003ee4:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003ee4;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ef0
 */

int recovered_10003ef0(byte *param_1,byte *param_2)

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
LAB_10003f28:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003f28;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f34
 */

void recovered_10003f34(int param_1,int param_2)

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
 * Address: 0x10003f50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10003f50(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10004018;
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
          if (uVar8 == uVar11) goto LAB_100041ac;
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
LAB_100041ac:
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
        if (uVar11 == uVar8) goto LAB_10004010;
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
LAB_10004010:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10004018:
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
 * Address: 0x10004264
 */

char * recovered_10004264(char *param_1,char param_2)

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
 * Address: 0x10004298
 */

int recovered_10004298(char *param_1,char *param_2)

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
 * Address: 0x100042fc
 */

int recovered_100042fc(char *param_1,char *param_2)

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
 * Address: 0x10004364
 */

char * recovered_10004364(char *param_1,char *param_2)

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
 * Address: 0x100043c4
 */

char * recovered_100043c4(char *param_1,char *param_2)

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


#undef DAT_1000b72c
#define DAT_1000b72c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004428
 */

undefined * recovered_10004428(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b72c;
}

#undef DAT_1000b72c

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004438
 */

undefined ** recovered_10004438(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

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
 * Address: 0x10004448
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004448(undefined4 *param_1)

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
 * Address: 0x100044f8
 */

double recovered_100044f8(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x1000453c
 */

double recovered_1000453c(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x100045f4
 */

double recovered_100045f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x1000462c
 */

double recovered_1000462c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100046ac
 */

double recovered_100046ac(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x100046dc
 */

double recovered_100046dc(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004720
 */

double recovered_10004720(undefined4 param_1,undefined4 param_2)

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


#undef DAT_10004898
#define DAT_10004898 (*(double *)(0x10004898U))
#undef DAT_100048a0
#define DAT_100048a0 (*(double *)(0x100048a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004768
 */

double recovered_10004768(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004898
#undef DAT_100048a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a8
 */

undefined8 recovered_100048a8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10004a68(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_10004968
#define DAT_10004968 (*(double *)(0x10004968U))
#undef DAT_10004970
#define DAT_10004970 (*(double *)(0x10004970U))
#undef DAT_10004978
#define DAT_10004978 (*(double *)(0x10004978U))
#undef DAT_10004980
#define DAT_10004980 (*(double *)(0x10004980U))
#undef DAT_10004988
#define DAT_10004988 (*(double *)(0x10004988U))
#undef DAT_10004990
#define DAT_10004990 (*(double *)(0x10004990U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048d8
 */

double recovered_100048d8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004968
#undef DAT_10004970
#undef DAT_10004978
#undef DAT_10004980
#undef DAT_10004988
#undef DAT_10004990

#undef DAT_10004a20
#define DAT_10004a20 (*(double *)(0x10004a20U))
#undef DAT_10004a28
#define DAT_10004a28 (*(double *)(0x10004a28U))
#undef DAT_10004a30
#define DAT_10004a30 (*(double *)(0x10004a30U))
#undef DAT_10004a38
#define DAT_10004a38 (*(double *)(0x10004a38U))
#undef DAT_10004a40
#define DAT_10004a40 (*(double *)(0x10004a40U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004998
 */

double recovered_10004998(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004a20
#undef DAT_10004a28
#undef DAT_10004a30
#undef DAT_10004a38
#undef DAT_10004a40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a48
 */

double recovered_10004a48(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10004b20
#define DAT_10004b20 (*(double *)(0x10004b20U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a68
 */

undefined8 recovered_10004a68(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004b20

#undef DAT_10004ba8
#define DAT_10004ba8 (*(double *)(0x10004ba8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b28
 */

undefined8 recovered_10004b28(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004ba8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bb0
 */

double recovered_10004bb0(uint param_1,uint param_2)

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
 * Address: 0x10004bf8
 */

double recovered_10004bf8(uint param_1,uint param_2)

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


#undef DAT_10004cc8
#define DAT_10004cc8 (*(float *)(0x10004cc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c88
 */

float recovered_10004c88(float param_1,float param_2)

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

#undef DAT_10004cc8

#undef DAT_10004d84
#define DAT_10004d84 (*(float *)(0x10004d84U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ccc
 */

float recovered_10004ccc(float param_1,float *param_2)

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

#undef DAT_10004d84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d88
 */

float recovered_10004d88(float param_1,uint param_2)

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


#undef DAT_10004e58
#define DAT_10004e58 (*(float *)(0x10004e58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dd4
 */

float recovered_10004dd4(float param_1,float param_2)

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

#undef DAT_10004e58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e5c
 */

float recovered_10004e5c(float param_1)

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
 * Address: 0x10004e94
 */

float recovered_10004e94(float param_1)

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
 * Address: 0x10004ee0
 */

double recovered_10004ee0(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004f34
 */

float recovered_10004f34(float param_1)

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


#undef DAT_10004fe4
#define DAT_10004fe4 (*(float *)(0x10004fe4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f90
 */

float recovered_10004f90(float param_1)

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

#undef DAT_10004fe4

#undef DAT_10005120
#define DAT_10005120 (*(double *)(0x10005120U))
#undef DAT_10005128
#define DAT_10005128 (*(float *)(0x10005128U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe8
 */

float recovered_10004fe8(float param_1)

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

#undef DAT_10005120
#undef DAT_10005128

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000512c
 */

void recovered_1000512c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10004a68(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_100051f8
#define DAT_100051f8 (*(double *)(0x100051f8U))
#undef DAT_10005200
#define DAT_10005200 (*(double *)(0x10005200U))
#undef DAT_10005208
#define DAT_10005208 (*(double *)(0x10005208U))
#undef DAT_10005210
#define DAT_10005210 (*(double *)(0x10005210U))
#undef DAT_10005218
#define DAT_10005218 (*(double *)(0x10005218U))
#undef DAT_10005220
#define DAT_10005220 (*(double *)(0x10005220U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005160
 */

float recovered_10005160(float param_1)

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

#undef DAT_100051f8
#undef DAT_10005200
#undef DAT_10005208
#undef DAT_10005210
#undef DAT_10005218
#undef DAT_10005220

#undef DAT_100052b8
#define DAT_100052b8 (*(double *)(0x100052b8U))
#undef DAT_100052c0
#define DAT_100052c0 (*(double *)(0x100052c0U))
#undef DAT_100052c8
#define DAT_100052c8 (*(double *)(0x100052c8U))
#undef DAT_100052d0
#define DAT_100052d0 (*(double *)(0x100052d0U))
#undef DAT_100052d8
#define DAT_100052d8 (*(double *)(0x100052d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005228
 */

float recovered_10005228(float param_1)

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

#undef DAT_100052b8
#undef DAT_100052c0
#undef DAT_100052c8
#undef DAT_100052d0
#undef DAT_100052d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

float recovered_100052e0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052fc
 */

int recovered_100052fc(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10005450
 */

int recovered_10005450(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x100054cc;
  }
  bVar2 = false;
joined_r0x100054cc:
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
 * Address: 0x100055b0
 */

double recovered_100055b0(byte *param_1,undefined4 *param_2)

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
      goto LAB_1000569c;
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
LAB_1000569c:
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
 * Address: 0x10005784
 */

float recovered_10005784(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *in_r0;
  undefined4 *in_r1;
  double dVar1;

  dVar1 = recovered_100055b0(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000b72e
#define DAT_1000b72e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef str_1000b738
#define str_1000b738 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcU)))
#undef str_1000b749
#define str_1000b749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dU)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

int recovered_100057a0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10005820:
  while( true ) {
    pcVar6 = str_1000b749;
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
LAB_10005840:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10005860;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_100058cc;
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
LAB_100058cc:
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
      goto LAB_100058f8;
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
LAB_100058f8:
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
switchD_10005acc_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10006380;
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
      goto LAB_10005d9c;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_10005d9c:
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
      local_60[-iVar7] = str_1000b749[uVar11 + uVar12 * -10];
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
      goto LAB_10006380;
    }
    break;
  default:
    goto switchD_10005acc_caseD_4a;
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
      pcVar6 = str_1000b738;
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
    goto LAB_10006380;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10005840;
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
                      goto LAB_10006274;
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
LAB_10006274:
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
        local_60[-iVar7] = str_1000b749[uVar10 + uVar12 * -10];
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
LAB_1000623c:
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
                    goto LAB_1000623c;
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
    goto LAB_10005820;
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
      local_60[iVar7] = str_1000b749[uVar10 & 0xf];
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
    goto LAB_10005820;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10005820;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000b72e;
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
      goto LAB_10006298;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10006298;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10006298:
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
      local_60[-iVar7] = str_1000b749[uVar11 + uVar12 * -10];
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
LAB_10006380:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10005820;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10005820;
code_r0x10005860:
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
  goto LAB_10005820;
}

#undef DAT_1000b72e
#undef str_1000b738
#undef str_1000b749
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

#define local_4 (*(undefined1 (*)[4])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006568
 */

void recovered_10006568(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *in_r0;
  uint in_r1;
  byte *in_r2;

  recovered_100057a0(in_r0,in_r1,in_r2,(double *)local_4);
  return;
}

#undef local_4

#undef DAT_1000c038
#define DAT_1000c038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x90cU)))
#undef DAT_1000c040
#define DAT_1000c040 (*(int * *)(((uintptr_t)pf_module_state + 0x914U)))
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
 * Address: 0x10006598
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006598(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_1000c038 != 0;
          puVar4 = &DAT_1000c038;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_1000c040;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_1000c040 = piVar3;
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
      puVar4 = &DAT_1000c038;
      if (DAT_1000c038 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_1000c040;
      goto LAB_1000677c;
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
      bVar7 = DAT_1000c038 != 0;
      puVar4 = &DAT_1000c038;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_1000c040;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_1000677c:
      if (piVar5 == (int *)0x0) {
        DAT_1000c040 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c038
#undef DAT_1000c040
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006798
 */

uint * recovered_10006798(uint *param_1,uint *param_2)

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
 * Address: 0x1000681c
 */

undefined4 recovered_1000681c(uint *param_1,int param_2)

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


#undef DAT_1000b87a
#define DAT_1000b87a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14eU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_400108bc
#define DAT_400108bc (*(uint8_t *)(0x400108bcU))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef DAT_40010910
#define DAT_40010910 (*(uint8_t *)(0x40010910U))
#undef DAT_40010a18
#define DAT_40010a18 (*(uint8_t *)(0x40010a18U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_400108bc
#define _DAT_400108bc (*(code * *)(0x400108bcU))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef _DAT_40010910
#define _DAT_40010910 (*(code * *)(0x40010910U))
#undef _DAT_40010a18
#define _DAT_40010a18 (*(code * *)(0x40010a18U))
#undef str_1000b75a
#define str_1000b75a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eU)))
#undef str_1000b76b
#define str_1000b76b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fU)))
#undef str_1000b772
#define str_1000b772 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46U)))
#undef str_1000b77a
#define str_1000b77a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eU)))
#undef str_1000b785
#define str_1000b785 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59U)))
#undef str_1000b7a3
#define str_1000b7a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77U)))
#undef str_1000b7ac
#define str_1000b7ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80U)))
#undef str_1000b7b4
#define str_1000b7b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88U)))
#undef str_1000b7f3
#define str_1000b7f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7U)))
#undef str_1000b7fa
#define str_1000b7fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
#undef str_1000b856
#define str_1000b856 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#undef str_1000b87d
#define str_1000b87d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_1000b89c
#define str_1000b89c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x170U)))
#undef str_1000b8c7
#define str_1000b8c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19bU)))
#undef str_1000b8f9
#define str_1000b8f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
#undef str_1000b928
#define str_1000b928 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_1000b948
#define str_1000b948 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_1000b951
#define str_1000b951 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#undef str_1000b988
#define str_1000b988 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25cU)))
#undef str_1000b9cc
#define str_1000b9cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a0U)))
#undef str_1000b9f1
#define str_1000b9f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c5U)))
#undef str_1000ba15
#define str_1000ba15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_1000ba31
#define str_1000ba31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x305U)))
#undef str_1000ba5a
#define str_1000ba5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32eU)))
#define local_f8 (*(int *)(pf_stack_frame + 24))
#define local_ec (*(byte * *)(pf_stack_frame + 36))
#define local_e8 (*(char * *)(pf_stack_frame + 40))
#define local_e4 (*(uint *)(pf_stack_frame + 44))
#define local_e0 (*(uint *)(pf_stack_frame + 48))
#define local_dc (*(char * *)(pf_stack_frame + 52))
#define local_d8 (*(char * *)(pf_stack_frame + 56))
#define local_d4 (*(uint *)(pf_stack_frame + 60))
#define local_d0 (*(uint *)(pf_stack_frame + 64))
#define local_cc (*(char * *)(pf_stack_frame + 68))
#define local_c8 (*(uint *)(pf_stack_frame + 72))
#define local_c4 (*(byte *)(pf_stack_frame + 76))
#define local_c0 (*(char * *)(pf_stack_frame + 80))
#define local_bc (*(uint *)(pf_stack_frame + 84))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 88))
#define local_b0 (*(uint *)(pf_stack_frame + 96))
#define local_ac (*(uint *)(pf_stack_frame + 100))
#define local_a8 (*(int *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006880(int param_1,char *param_2)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;

  pcVar12 = str_1000b7b4;
  if ((param_2 == (char *)0x0) || (param_1 < 2)) {
LAB_10006ca0:
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(str_1000b7f3);
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(pcVar12);
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
       (_DAT_40010828 != (code *)0x0)) {
      (*_DAT_40010828)(str_1000b7fa);
    }
    return 1;
  }
  iVar14 = 1;
  pcVar10 = (char *)0x0;
  local_ec = (byte *)0x0;
  local_e8 = (char *)0x0;
  do {
    puVar13 = *(uint **)(param_2 + iVar14 * 4);
    if (puVar13 == (uint *)0x0) {
      pcVar12 = str_1000b75a;
      goto LAB_10006ca0;
    }
    uVar1 = recovered_10003e84((int)puVar13);
    if (uVar1 < 6) {
      pcVar12 = str_1000b785;
      goto LAB_10006ca0;
    }
    iVar2 = recovered_10003b7c(puVar13,(uint *)str_1000b76b,6);
    if (iVar2 == 0 && pcVar10 == (char *)0x0) {
      pcVar10 = (char *)((int)puVar13 + 6);
    }
    else {
      if (uVar1 == 6) {
        pcVar12 = str_1000b785;
        goto LAB_10006ca0;
      }
      pcVar3 = (char *)recovered_10003b7c(puVar13,(uint *)str_1000b772,7);
      pcVar12 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        pcVar12 = local_e8;
      }
      if (pcVar3 == (char *)0x0 && pcVar12 == (char *)0x0) {
        local_e8 = (char *)((int)puVar13 + 7);
      }
      else {
        if (uVar1 < 10) {
          pcVar12 = str_1000b785;
          goto LAB_10006ca0;
        }
        iVar2 = recovered_10003b7c(puVar13,(uint *)str_1000b77a,10);
        if (iVar2 != 0) {
          pcVar12 = str_1000b785;
          goto LAB_10006ca0;
        }
        if (local_ec != (byte *)0x0) {
          pcVar12 = str_1000b785;
          goto LAB_10006ca0;
        }
        local_ec = (byte *)((int)puVar13 + 10);
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < param_1);
  if (pcVar10 == (char *)0x0) {
    pcVar12 = str_1000b7b4;
    goto LAB_10006ca0;
  }
  pcVar12 = str_1000b7b4;
  if (*pcVar10 != '\0') {
    param_2 = local_e8;
  }
  if (*pcVar10 == '\0' || param_2 == (char *)0x0) goto LAB_10006ca0;
  if (*param_2 != '\0') {
    param_1 = (int)local_ec;
  }
  if ((*param_2 == '\0' || (byte *)param_1 == (byte *)0x0) ||
     ((iVar14 = recovered_10003eac((byte *)param_1,(byte *)str_1000b7a3), iVar14 != 0 &&
      (iVar14 = recovered_10003eac((byte *)param_1,(byte *)str_1000b7ac), iVar14 != 0))))
  goto LAB_10006ca0;
  local_e4 = 0xffffffff;
  local_dc = param_2;
  local_d8 = pcVar10;
  if ((_DAT_40010800 == 0x50414d57) &&
     (((_DAT_40010804 != 0 && (0xbf < _DAT_40010808)) && (_DAT_400108bc != (code *)0x0)))) {
    local_e4 = (*_DAT_400108bc)();
  }
  local_e0 = local_e4;
  recovered_1000749c(pcVar10,&local_e0,&local_d8);
  recovered_1000749c(param_2,&local_e4,&local_dc);
  pcVar10 = local_d8;
  pcVar12 = local_dc;
  uVar11 = local_e0;
  pcVar3 = str_1000b856;
  if (local_e0 != 0x7fffffff) {
    uVar1 = local_e4;
  }
  if (local_e0 != 0x7fffffff && uVar1 != 0x7fffffff) {
    iVar14 = recovered_10003eac(local_ec,(byte *)str_1000b7ac);
    if (((0x7fffffff < uVar11) && (uVar11 = 0xffffffff, _DAT_40010800 == 0x50414d57)) &&
       ((_DAT_40010804 != 0 && ((0xbf < _DAT_40010808 && (_DAT_400108bc != (code *)0x0)))))) {
      uVar11 = (*_DAT_400108bc)();
    }
    if ((((0x7fffffff < uVar1) && (uVar1 = 0xffffffff, _DAT_40010800 == 0x50414d57)) &&
        (_DAT_40010804 != 0)) && ((0xbf < _DAT_40010808 && (_DAT_400108bc != (code *)0x0)))) {
      uVar1 = (*_DAT_400108bc)();
    }
    recovered_10003550((byte *)&local_b0,0,0x8c);
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x113 < _DAT_40010808 &&
        ((_DAT_40010910 != (code *)0x0 &&
         (iVar5 = (*_DAT_40010910)(uVar11,&local_b0), iVar2 = local_a8, iVar5 != 0)))))) {
      pcVar3 = str_1000b8c7;
      if ((((local_a8 != 0) &&
           (recovered_10003550((byte *)&local_b0,0,0x8c), _DAT_40010800 == 0x50414d57)) &&
          (_DAT_40010804 != 0)) && ((0x113 < _DAT_40010808 && (_DAT_40010910 != (code *)0x0)))) {
        iVar6 = (*_DAT_40010910)(uVar1,&local_b0);
        iVar5 = 0;
        if (iVar6 != 0) {
          local_f8 = local_a8;
          iVar5 = local_a8;
        }
        if (iVar6 != 0 && iVar5 != 0) {
          pcVar10 = recovered_100076e4(pcVar10,(uint)(iVar2 == 0xd));
          pcVar7 = recovered_100076e4(pcVar12,(uint)(local_f8 == 0xd));
          local_ac = 0;
          local_b0 = 0;
          pcVar3 = str_1000b8f9;
          local_a8 = 0;
          local_bc = 0;
          local_c0 = (char *)0x0;
          local_b8 = 0;
          pcVar12 = (char *)0x0;
          if (pcVar10 != (char *)0x0) {
            pcVar12 = pcVar7;
          }
          if (pcVar10 == (char *)0x0 || pcVar12 == (char *)0x0) goto LAB_10006f10;
          if (iVar14 == 0) {
            iVar14 = recovered_100095dc(uVar11,pcVar10,(uint *)&local_cc);
            pcVar12 = local_cc;
            if (iVar14 == 0) {
              pcVar3 = str_1000b9f1;
            }
            else {
              pcVar3 = str_1000ba15;
              local_c0 = local_cc;
              local_d0 = 0;
              local_d4 = 0;
              if (((local_c4 & 2) == 0) &&
                 (bVar15 = recovered_100097fc(local_cc,local_c8,0xffffffff,(int *)&local_d0), bVar15
                 )) {
                uVar11 = recovered_10009884(local_d0);
                local_b0 = uVar11;
                if (uVar11 == 0) {
                  pcVar3 = str_1000ba31;
                  goto LAB_10006f10;
                }
                bVar15 = recovered_100098e0(pcVar12,local_c8,uVar11,local_d0,&local_d4);
                if (!bVar15) {
                  pcVar3 = str_1000ba5a;
                  goto LAB_10006f10;
                }
                pcVar3 = recovered_10009bc0(uVar1,(int)pcVar7,(uint)(local_f8 == 0xd),uVar11,
                                            local_d4);
                goto LAB_1000740c;
              }
            }
          }
          else {
            uVar8 = recovered_10003e84((int)pcVar7);
            if (uVar8 < 8) {
LAB_1000715c:
              iVar14 = recovered_10003e84((int)pcVar7);
              if (iVar14 - 0x2ff9U < 0xffffcffe) {
                pcVar3 = str_1000b928;
                goto LAB_10006f10;
              }
              recovered_10002dc0((undefined8 *)(pcVar7 + iVar14),(undefined8 *)str_1000b948,
                                 (undefined8 *)0x9);
            }
            else {
              uVar9 = (uint)(byte)pcVar7[uVar8 - 8];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x2e) goto LAB_1000715c;
              uVar9 = (uint)(byte)pcVar7[uVar8 - 7];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x70) goto LAB_1000715c;
              uVar9 = (uint)(byte)pcVar7[uVar8 - 6];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x69) goto LAB_1000715c;
              uVar9 = (uint)(byte)pcVar7[uVar8 - 5];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 99) goto LAB_1000715c;
              uVar9 = (uint)(byte)pcVar7[uVar8 - 4];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x6f) goto LAB_1000715c;
              uVar9 = (uint)(byte)pcVar7[uVar8 - 3];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x7a) goto LAB_1000715c;
              uVar9 = (uint)(byte)pcVar7[uVar8 - 2];
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != 0x69) goto LAB_1000715c;
              uVar8 = (uint)(byte)pcVar7[uVar8 - 1];
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar8 != 0x70) goto LAB_1000715c;
            }
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x21b < _DAT_40010808))
               && (_DAT_40010a18 != (code *)0x0)) {
              iVar14 = (*_DAT_40010a18)(uVar1,pcVar7,&local_cc);
            }
            else {
              if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
                bVar15 = _DAT_40010808 == 0xc;
                if (0xb < _DAT_40010808) {
                  bVar15 = _DAT_40010808 == 0xcb;
                }
                if (_DAT_40010808 < 0xcb || bVar15) goto LAB_100072c8;
                if (_DAT_400108c8 == (code *)0x0) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = (*_DAT_400108c8)(uVar1,pcVar7,&local_cc);
                }
              }
              else {
LAB_100072c8:
                iVar14 = 0;
                if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                   ((0x37 < _DAT_40010808 && (_DAT_40010834 != (code *)0x0)))) {
                  iVar14 = (*_DAT_40010834)(pcVar7,&local_cc);
                }
              }
              local_cc = (char *)0x0;
            }
            if (iVar14 == 0) {
              pcVar3 = recovered_10007b5c(uVar11,pcVar10,(uint)(iVar2 == 0xd),(int *)&local_b0);
              if ((pcVar3 == (char *)0x0) &&
                 (pcVar3 = recovered_10008d70(local_b0,local_ac,(int *)&local_c0),
                 pcVar3 == (char *)0x0)) {
                iVar14 = recovered_10007a54(uVar1,pcVar7,&local_cc);
                if (iVar14 == 0) {
                  iVar14 = recovered_10009530(uVar1,pcVar7,local_c0,local_bc);
                  pcVar3 = str_1000b9cc;
                  if (iVar14 != 0) {
                    pcVar3 = (char *)0x0;
                  }
                }
                else {
                  pcVar3 = str_1000b988;
                }
              }
              else {
LAB_1000740c:
              }
            }
            else {
              pcVar3 = str_1000b951;
            }
          }
LAB_10006f10:
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
             (_DAT_40010850 != (code *)0x0)) {
            (*_DAT_40010850)(pcVar10);
          }
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
            (*_DAT_40010850)(pcVar7);
          }
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
            (*_DAT_40010850)(local_b0);
          }
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
             (_DAT_40010850 != (code *)0x0)) {
            (*_DAT_40010850)(local_c0);
          }
          if (pcVar3 == (char *)0x0) {
            iVar14 = recovered_10003eac(local_ec,(byte *)str_1000b7ac);
            pcVar12 = str_1000b89c;
            if (iVar14 == 0) {
              pcVar12 = str_1000b87d;
            }
            if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0xc)) {
              return 0;
            }
            uVar4 = 0;
            if (_DAT_40010808 < 0x2c) {
              return 0;
            }
            if (_DAT_40010828 == (code *)0x0) {
              return 0;
            }
            goto LAB_10006c40;
          }
        }
      }
    }
    else {
      pcVar3 = str_1000b8c7;
    }
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(str_1000b7f3);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(pcVar3);
  }
  uVar4 = 1;
  if (_DAT_40010800 != 0x50414d57) {
    return 1;
  }
  if (_DAT_40010804 == 0) {
    return 1;
  }
  if (_DAT_40010808 < 0x2c) {
    return 1;
  }
  if (_DAT_40010828 == (code *)0x0) {
    return 1;
  }
  pcVar12 = &DAT_1000b87a;
LAB_10006c40:
  (*_DAT_40010828)(pcVar12);
  return uVar4;
}

#undef DAT_1000b87a
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010828
#undef DAT_40010834
#undef DAT_40010850
#undef DAT_400108bc
#undef DAT_400108c8
#undef DAT_40010910
#undef DAT_40010a18
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010828
#undef _DAT_40010834
#undef _DAT_40010850
#undef _DAT_400108bc
#undef _DAT_400108c8
#undef _DAT_40010910
#undef _DAT_40010a18
#undef str_1000b75a
#undef str_1000b76b
#undef str_1000b772
#undef str_1000b77a
#undef str_1000b785
#undef str_1000b7a3
#undef str_1000b7ac
#undef str_1000b7b4
#undef str_1000b7f3
#undef str_1000b7fa
#undef str_1000b856
#undef str_1000b87d
#undef str_1000b89c
#undef str_1000b8c7
#undef str_1000b8f9
#undef str_1000b928
#undef str_1000b948
#undef str_1000b951
#undef str_1000b988
#undef str_1000b9cc
#undef str_1000b9f1
#undef str_1000ba15
#undef str_1000ba31
#undef str_1000ba5a
#undef local_f8
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
#undef local_b0
#undef local_ac
#undef local_a8

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a20
#define DAT_40010a20 (*(uint8_t *)(0x40010a20U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010a20
#define _DAT_40010a20 (*(code * *)(0x40010a20U))
#define local_124 (*(char (*)[292])(pf_stack_frame + 28))
#define local_a4 (*(byte (*)[164])(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000749c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000749c(char *param_1,uint *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 != '[') {
    return;
  }
  pcVar5 = local_124;
  iVar3 = 1;
  uVar7 = 0;
  while (cVar1 = param_1[iVar3], cVar1 != '\0' && cVar1 != ']') {
    iVar3 = iVar3 + 1;
    if (uVar7 + 1 < 0x80) {
      local_124[uVar7] = cVar1;
      uVar7 = uVar7 + 1;
    }
  }
  uVar6 = 0x7fffffff;
  local_124[uVar7] = '\0';
  if ((cVar1 == ']') && (iVar3 + 1U < 0x82)) {
    iVar2 = 0;
    if (local_124[0] == '[') {
      pcVar5 = local_124 + 1;
    }
    for (; (bVar4 = pcVar5[iVar2], bVar4 != 0 && (bVar4 != 0x5d && iVar2 != 0x7f));
        iVar2 = iVar2 + 1) {
      local_a4[iVar2] = bVar4;
    }
    local_a4[iVar2] = 0;
    if (local_124[0] == '[') {
      uVar6 = 0x7fffffff;
      if (bVar4 != 0x5d) goto LAB_10007670;
      bVar4 = local_124[iVar2 + 2];
    }
    uVar6 = 0x7fffffff;
    if ((bVar4 == 0) && (uVar6 = 0x7fffffff, local_a4[0] != 0)) {
      iVar8 = 0;
      iVar2 = 1;
      uVar7 = 1;
      do {
        if (iVar2 == 0x80) goto LAB_10007670;
        if (local_a4[0] == 0x5c) {
          if (iVar8 == 0) goto LAB_10007670;
          uVar7 = uVar7 + 1;
          iVar8 = 0;
          if (6 < uVar7) goto LAB_10007670;
        }
        else {
          bVar9 = 9 < (byte)(local_a4[0] - 0x30U);
          bVar4 = local_a4[0];
          if (bVar9) {
            bVar4 = (local_a4[0] & 0xdf) + 0xbf;
          }
          if ((bVar9 && 0x19 < bVar4) && (local_a4[0] != 0x5f && local_a4[0] != 0x2d))
          goto LAB_10007670;
          iVar8 = iVar8 + 1;
        }
        local_a4[0] = local_a4[iVar2];
        iVar2 = iVar2 + 1;
      } while (local_a4[0] != 0);
      if ((((iVar8 != 0) && (1 < uVar7)) && (_DAT_40010800 == 0x50414d57)) &&
         (((_DAT_40010804 != 0 && (0x223 < _DAT_40010808)) &&
          ((_DAT_40010a20 != (code *)0x0 &&
           (uVar6 = (*_DAT_40010a20)(0xfffffffe,local_a4,0x80), 0x7fffffff < uVar6)))))) {
        uVar6 = 0x7fffffff;
      }
    }
  }
LAB_10007670:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar6;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1 + iVar3 + (uint)(cVar1 == ']');
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a20
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a20
#undef local_124
#undef local_a4

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_100076e4(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  undefined1 *pointer;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;

  puVar7 = (undefined1 *)0x0;
  if (((((param_1 != (char *)0x0) && (uVar2 = recovered_10003e84((int)param_1), uVar2 < 0x3001)) &&
       (*param_1 != '[')) && ((_DAT_40010800 == 0x50414d57 && (_DAT_40010804 != 0)))) &&
     ((0x4f < _DAT_40010808 &&
      ((_DAT_4001084c != (code *)0x0 &&
       (pointer = (undefined1 *)(*_DAT_4001084c)(0x3001), pointer != (undefined1 *)0x0)))))) {
    *pointer = 0x5c;
    puVar7 = pointer;
    if (*param_1 == '\0') {
      pointer[1] = 0;
    }
    else {
      iVar9 = 0;
      uVar2 = 1;
      do {
        pcVar4 = param_1 + iVar9 + 1;
        do {
          do {
            iVar10 = iVar9;
            pcVar11 = pcVar4;
            cVar6 = param_1[iVar10];
            pcVar4 = pcVar11 + 1;
            iVar9 = iVar10 + 1;
          } while (cVar6 == '\\');
        } while (cVar6 == '/' && param_2 == 0);
        uVar8 = 0xffffffff;
        while ((cVar6 != '\0' && cVar6 != '\\' && (cVar6 != '/' || param_2 != 0))) {
          uVar8 = uVar8 + 1;
          cVar6 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        }
        puVar5 = (undefined8 *)(uVar8 + 1);
        if (0xfffffffe < uVar8) break;
        pcVar4 = (char *)recovered_1000a66c((int)(param_1 + iVar10),(uint)puVar5,param_2);
        if (pcVar4 == (char *)0x0) {
joined_r0x1000798c:
          if (_DAT_40010800 != 0x50414d57) {
            return (undefined1 *)0x0;
          }
          if (_DAT_40010804 == 0) {
            return (undefined1 *)0x0;
          }
          if (_DAT_40010808 < 0x54) {
            return (undefined1 *)0x0;
          }
          if (_DAT_40010850 == (code *)0x0) {
            return (undefined1 *)0x0;
          }
          (*_DAT_40010850)(pointer);
          return (undefined1 *)0x0;
        }
        pcVar1 = param_1 + iVar10;
        if (param_2 != 0) {
          puVar5 = (undefined8 *)recovered_10003e84((int)pcVar4);
          pcVar1 = pcVar4;
        }
        puVar3 = puVar5;
        if (1 < uVar2) {
          puVar3 = (undefined8 *)((int)puVar5 + 1);
        }
        if ((undefined8 *)(0x3001 - uVar2) <= puVar3) {
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
             (_DAT_40010850 != (code *)0x0)) {
            (*_DAT_40010850)(pcVar4);
          }
          goto joined_r0x1000798c;
        }
        if (1 < uVar2) {
          pointer[uVar2] = 0x5c;
          uVar2 = uVar2 + 1;
        }
        recovered_10002dc0((undefined8 *)(pointer + uVar2),(undefined8 *)pcVar1,puVar5);
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
          (*_DAT_40010850)(pcVar4);
        }
        iVar9 = iVar9 + uVar8;
        uVar2 = uVar2 + (int)puVar5;
      } while (pcVar11[-1] != '\0');
      pointer[uVar2] = 0;
      if (((1 < uVar2) && (param_2 != 0)) &&
         (iVar9 = recovered_1000aa20((int)(pointer + 1),uVar2 - 1), iVar9 == 0)) {
        recovered_1000a61c((uint)pointer);
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  return puVar7;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef DAT_40010a18
#define DAT_40010a18 (*(uint8_t *)(0x40010a18U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef _DAT_40010a18
#define _DAT_40010a18 (*(code * *)(0x40010a18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a54
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10007a54(int param_1,char *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x21b < _DAT_40010808)) &&
     (_DAT_40010a18 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10007b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*_DAT_40010a18)(param_1,param_2,param_3);
    return iVar1;
  }
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar2 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar2 = _DAT_40010808 == 0xcb;
    }
    if (0xca < _DAT_40010808 && !bVar2) {
      if (_DAT_400108c8 == (code *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*_DAT_400108c8)(param_1,param_2,param_3);
      }
      goto LAB_10007b4c;
    }
  }
  iVar1 = 0;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x37 < _DAT_40010808 && (_DAT_40010834 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010834)(param_2,param_3);
  }
LAB_10007b4c:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return iVar1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_400108c8
#undef DAT_40010a18
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_400108c8
#undef _DAT_40010a18

#undef DAT_1000ba8b
#define DAT_1000ba8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010854
#define DAT_40010854 (*(uint8_t *)(0x40010854U))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef DAT_40010910
#define DAT_40010910 (*(uint8_t *)(0x40010910U))
#undef DAT_400109d4
#define DAT_400109d4 (*(uint8_t *)(0x400109d4U))
#undef DAT_40010a18
#define DAT_40010a18 (*(uint8_t *)(0x40010a18U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010854
#define _DAT_40010854 (*(code * *)(0x40010854U))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef _DAT_400109d4
#define _DAT_400109d4 (*(code * *)(0x400109d4U))
#undef _DAT_40010a18
#define _DAT_40010a18 (*(code * *)(0x40010a18U))
#undef str_1000ba90
#define str_1000ba90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1000baa3
#define str_1000baa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x377U)))
#undef str_1000bac7
#define str_1000bac7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39bU)))
#undef str_1000bae9
#define str_1000bae9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bdU)))
#undef str_1000bb07
#define str_1000bb07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dbU)))
#undef str_1000bb3b
#define str_1000bb3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_1000bb58
#define str_1000bb58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42cU)))
#undef str_1000bb77
#define str_1000bb77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44bU)))
#undef str_1000bba3
#define str_1000bba3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x477U)))
#undef str_1000bbc2
#define str_1000bbc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
#undef str_1000bbdc
#define str_1000bbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b0U)))
#undef str_1000bc07
#define str_1000bc07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dbU)))
#undef str_1000bcb4
#define str_1000bcb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x588U)))
#define local_ca (*(undefined1 *)(pf_stack_frame + 38))
#define local_c9 (*(undefined1 *)(pf_stack_frame + 39))
#define local_c8 (*(uint *)(pf_stack_frame + 40))
#define local_c4 (*(uint *)(pf_stack_frame + 44))
#define local_c0 (*(uint *)(pf_stack_frame + 48))
#define local_bc (*(uint *)(pf_stack_frame + 52))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 56))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_d8 (*(uint *)(pf_stack_frame + 24))
#define local_d4 (*(uint *)(pf_stack_frame + 28))
#define local_d0 (*(undefined1 *)(pf_stack_frame + 32))
#define local_cf (*(undefined2 *)(pf_stack_frame + 33))
#define local_cd (*(undefined1 *)(pf_stack_frame + 35))
#define local_cc (*(undefined1 *)(pf_stack_frame + 36))
#define local_cb (*(undefined1 *)(pf_stack_frame + 37))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b5c
 */

/* WARNING: Removing unreachable block (ram,0x1000843c) */
/* WARNING: Removing unreachable block (ram,0x100084fc) */
/* WARNING: Removing unreachable block (ram,0x10008500) */
/* WARNING: Removing unreachable block (ram,0x10008510) */
/* WARNING: Removing unreachable block (ram,0x10008518) */
/* WARNING: Removing unreachable block (ram,0x1000851c) */
/* WARNING: Removing unreachable block (ram,0x1000852c) */
/* WARNING: Removing unreachable block (ram,0x10008550) */
/* WARNING: Removing unreachable block (ram,0x1000855c) */
/* WARNING: Removing unreachable block (ram,0x10008564) */
/* WARNING: Removing unreachable block (ram,0x1000856c) */
/* WARNING: Removing unreachable block (ram,0x10008570) */
/* WARNING: Removing unreachable block (ram,0x1000857c) */
/* WARNING: Removing unreachable block (ram,0x1000858c) */
/* WARNING: Removing unreachable block (ram,0x10008594) */
/* WARNING: Removing unreachable block (ram,0x10008904) */
/* WARNING: Removing unreachable block (ram,0x10008598) */
/* WARNING: Removing unreachable block (ram,0x10008634) */
/* WARNING: Removing unreachable block (ram,0x100085e0) */
/* WARNING: Removing unreachable block (ram,0x10008614) */
/* WARNING: Removing unreachable block (ram,0x10008618) */
/* WARNING: Removing unreachable block (ram,0x10008640) */
/* WARNING: Removing unreachable block (ram,0x10008624) */
/* WARNING: Removing unreachable block (ram,0x1000862c) */
/* WARNING: Removing unreachable block (ram,0x10008644) */
/* WARNING: Removing unreachable block (ram,0x10008650) */
/* WARNING: Removing unreachable block (ram,0x10008668) */
/* WARNING: Removing unreachable block (ram,0x10008674) */
/* WARNING: Removing unreachable block (ram,0x10008680) */
/* WARNING: Removing unreachable block (ram,0x10008688) */
/* WARNING: Removing unreachable block (ram,0x10008690) */
/* WARNING: Removing unreachable block (ram,0x10008774) */
/* WARNING: Removing unreachable block (ram,0x10008780) */
/* WARNING: Removing unreachable block (ram,0x100087a0) */
/* WARNING: Removing unreachable block (ram,0x10008694) */
/* WARNING: Removing unreachable block (ram,0x100086a0) */
/* WARNING: Removing unreachable block (ram,0x100086ac) */
/* WARNING: Removing unreachable block (ram,0x100086b4) */
/* WARNING: Removing unreachable block (ram,0x100086bc) */
/* WARNING: Removing unreachable block (ram,0x1000875c) */
/* WARNING: Removing unreachable block (ram,0x10008768) */
/* WARNING: Removing unreachable block (ram,0x100086c0) */
/* WARNING: Removing unreachable block (ram,0x100086c8) */
/* WARNING: Removing unreachable block (ram,0x100086d0) */
/* WARNING: Removing unreachable block (ram,0x10008a0c) */
/* WARNING: Removing unreachable block (ram,0x10008a18) */
/* WARNING: Removing unreachable block (ram,0x10008a24) */
/* WARNING: Removing unreachable block (ram,0x10008a2c) */
/* WARNING: Removing unreachable block (ram,0x10008a34) */
/* WARNING: Removing unreachable block (ram,0x10008a98) */
/* WARNING: Removing unreachable block (ram,0x10008aa4) */
/* WARNING: Removing unreachable block (ram,0x10008a38) */
/* WARNING: Removing unreachable block (ram,0x10008a48) */
/* WARNING: Removing unreachable block (ram,0x10008a54) */
/* WARNING: Removing unreachable block (ram,0x10008a5c) */
/* WARNING: Removing unreachable block (ram,0x10008a64) */
/* WARNING: Removing unreachable block (ram,0x10008ab0) */
/* WARNING: Removing unreachable block (ram,0x10008abc) */
/* WARNING: Removing unreachable block (ram,0x10008a68) */
/* WARNING: Removing unreachable block (ram,0x100086d4) */
/* WARNING: Removing unreachable block (ram,0x100086e0) */
/* WARNING: Removing unreachable block (ram,0x100086f4) */
/* WARNING: Removing unreachable block (ram,0x10008704) */
/* WARNING: Removing unreachable block (ram,0x10008718) */
/* WARNING: Removing unreachable block (ram,0x100086e8) */
/* WARNING: Removing unreachable block (ram,0x1000871c) */
/* WARNING: Removing unreachable block (ram,0x10008a78) */
/* WARNING: Removing unreachable block (ram,0x10008734) */
/* WARNING: Removing unreachable block (ram,0x10008758) */
/* WARNING: Removing unreachable block (ram,0x10008910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10007b5c(undefined4 param_1,char *param_2,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  uint uVar19;
  bool bVar20;

  pcVar18 = param_2;
  pcVar15 = param_2;
  do {
    while( true ) {
      pcVar12 = pcVar15 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar12;
      if (cVar2 != '\\') break;
      pcVar18 = pcVar12;
    }
  } while (cVar2 != '\0');
  pcVar15 = &DAT_1000ba8b;
  if (*pcVar18 != '\0') {
    pcVar15 = pcVar18;
  }
  uVar3 = recovered_10003e84((int)pcVar15);
  iVar4 = recovered_1000a66c((int)pcVar15,uVar3,param_3);
  puVar5 = recovered_100076e4(param_2,param_3);
  if (iVar4 == 0 || puVar5 == (undefined1 *)0x0) {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
       (_DAT_40010850 != (code *)0x0)) {
      (*_DAT_40010850)(iVar4);
    }
    if (_DAT_40010800 != 0x50414d57) {
      return str_1000ba90;
    }
    if (_DAT_40010804 == 0) {
      return str_1000ba90;
    }
    if (_DAT_40010808 < 0x54) {
      return str_1000ba90;
    }
    if (_DAT_40010850 == (code *)0x0) {
      return str_1000ba90;
    }
    (*_DAT_40010850)(puVar5);
    return str_1000ba90;
  }
  if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
     ((_DAT_40010808 < 0x50 ||
      ((_DAT_4001084c == (code *)0x0 ||
       (puVar6 = (undefined4 *)(*_DAT_4001084c)(0x10), puVar6 == (undefined4 *)0x0)))))) {
    if ((_DAT_40010800 == 0x50414d57) &&
       (((_DAT_40010804 != 0 && (0x53 < _DAT_40010808)) && (_DAT_40010850 != (code *)0x0)))) {
      (*_DAT_40010850)();
    }
    if (_DAT_40010800 != 0x50414d57) {
      return str_1000baa3;
    }
    if (_DAT_40010804 == 0) {
      return str_1000baa3;
    }
    if (_DAT_40010808 < 0x54) {
      return str_1000baa3;
    }
    if (_DAT_40010850 == (code *)0x0) {
      return str_1000baa3;
    }
    (*_DAT_40010850)(iVar4);
    return str_1000baa3;
  }
  puVar6[2] = puVar5;
  uVar3 = param_4[1];
  pcVar18 = str_1000bac7;
  puVar6[1] = param_1;
  *puVar6 = 0;
  local_b4 = 0;
  puVar6[3] = iVar4;
  local_b8 = 0x31415a50;
  if (0xfffffff7 < uVar3) goto LAB_10008c9c;
  uVar7 = param_4[2];
  uVar19 = uVar3 + 8;
  if (uVar7 < uVar19) {
    if (uVar7 == 0) {
      uVar7 = 0x100;
    }
    uVar3 = uVar7;
    if (uVar7 < uVar19) {
      do {
        if ((int)uVar3 < 0) {
          uVar7 = uVar19;
          break;
        }
        uVar7 = uVar3 << 1;
        uVar9 = uVar3 * 2;
        uVar3 = uVar7;
      } while (uVar9 < uVar19);
    }
    if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
       ((_DAT_40010808 < 0x58 || (_DAT_40010854 == (code *)0x0)))) goto LAB_10008c9c;
    iVar4 = (*_DAT_40010854)(*param_4,uVar7);
    if (iVar4 == 0) goto LAB_10008c9c;
    uVar3 = param_4[1];
    param_4[2] = uVar7;
    *param_4 = iVar4;
  }
  else {
    iVar4 = *param_4;
  }
  recovered_10002dc0((undefined8 *)(iVar4 + uVar3),(undefined8 *)&local_b8,
                     (undefined8 *)&SupervisorCall);
  param_4[1] = uVar19;
  uVar3 = 0;
  puVar17 = puVar6;
  do {
    recovered_10003550((byte *)&local_c4,0,0xc);
    uVar13 = puVar17[2];
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x21b < _DAT_40010808 && (_DAT_40010a18 != (code *)0x0)))) {
      iVar4 = (*_DAT_40010a18)(puVar17[1],uVar13,&local_c4);
    }
    else {
      if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
        bVar20 = _DAT_40010808 == 0xc;
        if (0xb < _DAT_40010808) {
          bVar20 = _DAT_40010808 == 0xcb;
        }
        if (_DAT_40010808 < 0xcb || bVar20) goto LAB_10007eb8;
        if (_DAT_400108c8 == (code *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*_DAT_400108c8)(puVar17[1],uVar13,&local_c4);
        }
      }
      else {
LAB_10007eb8:
        iVar4 = 0;
        if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
           (_DAT_40010834 != (code *)0x0)) {
          iVar4 = (*_DAT_40010834)(uVar13,&local_c4);
        }
      }
      local_c4 = 0;
    }
    uVar7 = local_bc;
    if (iVar4 == 0) {
      pcVar18 = str_1000bae9;
      goto LAB_10008c9c;
    }
    puVar8 = (undefined8 *)recovered_10003e84(puVar17[3]);
    iVar4 = recovered_1000aa20(puVar17[3],(uint)puVar8);
    if (iVar4 == 0) {
      pcVar18 = str_1000bb07;
      goto LAB_10008c9c;
    }
    local_c9 = (undefined1)((uint)puVar8 >> 0x18);
    local_ca = (undefined1)((uint)puVar8 >> 0x10);
    local_cb = (undefined1)((uint)puVar8 >> 8);
    bVar20 = (uVar7 & 2) != 0;
    local_c8 = local_c0;
    if (bVar20) {
      local_c8 = 0;
    }
    local_cc = SUB41(puVar8,0);
    local_d0 = 2;
    if (!bVar20) {
      local_d0 = 1;
    }
    local_cd = 0;
    local_cf = 0;
    if (bVar20) {
      uVar7 = param_4[1];
      if (uVar7 < 0xfffffff4) {
        uVar19 = param_4[2];
        uVar9 = uVar7 + 0xc;
        if (uVar19 < uVar9) {
          if (uVar19 == 0) {
            uVar19 = 0x100;
          }
          uVar16 = uVar19;
          if (uVar19 < uVar9) {
            do {
              if ((int)uVar16 < 0) {
                uVar19 = uVar9;
                break;
              }
              uVar19 = uVar16 << 1;
              uVar10 = uVar16 * 2;
              uVar16 = uVar19;
            } while (uVar10 < uVar9);
          }
          if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
             ((_DAT_40010808 < 0x58 ||
              ((_DAT_40010854 == (code *)0x0 ||
               (iVar4 = (*_DAT_40010854)(*param_4,uVar19), iVar4 == 0)))))) goto LAB_10008ad4;
          param_4[2] = uVar19;
          *param_4 = iVar4;
          uVar19 = param_4[1];
        }
        else {
          iVar4 = *param_4;
          uVar19 = uVar7;
        }
        recovered_10002dc0((undefined8 *)(iVar4 + uVar19),(undefined8 *)&local_d0,
                           (undefined8 *)&PrefetchAbort);
        param_4[1] = uVar9;
        if (puVar8 <= (undefined8 *)(-0xd - uVar7)) {
          uVar9 = uVar9 + (int)puVar8;
          uVar7 = param_4[2];
          puVar14 = (undefined8 *)puVar17[3];
          if (uVar7 < uVar9) {
            if (uVar7 == 0) {
              uVar7 = 0x100;
            }
            uVar19 = uVar7;
            if (uVar7 < uVar9) {
              do {
                if ((int)uVar19 < 0) {
                  uVar7 = uVar9;
                  break;
                }
                uVar7 = uVar19 << 1;
                uVar16 = uVar19 * 2;
                uVar19 = uVar7;
              } while (uVar16 < uVar9);
            }
            if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x58))
               || ((_DAT_40010854 == (code *)0x0 ||
                   (iVar4 = (*_DAT_40010854)(*param_4,uVar7), iVar4 == 0)))) goto LAB_10008ad4;
            param_4[2] = uVar7;
            *param_4 = iVar4;
          }
          if (puVar8 != (undefined8 *)0x0) {
            recovered_10002dc0((undefined8 *)(*param_4 + param_4[1]),puVar14,puVar8);
          }
          param_4[1] = uVar9;
          local_d4 = 0;
          local_d8 = 0;
          if (_DAT_40010800 == 0x50414d57) {
            if (_DAT_40010804 == 0) {
              pcVar18 = str_1000bba3;
            }
            else if (_DAT_40010808 < 0xc) {
              pcVar18 = str_1000bba3;
            }
            else if (_DAT_40010808 < 0x1d8) {
              pcVar18 = str_1000bba3;
            }
            else if (_DAT_400109d4 == (code *)0x0) {
              pcVar18 = str_1000bba3;
            }
            else {
              iVar4 = (*_DAT_400109d4)(puVar17[1],puVar17[2],0,0,0,0,&local_d4,&local_d8);
              if (iVar4 == 0) {
                pcVar18 = str_1000bba3;
              }
              else if (local_d4 < 0x924924a) {
                uVar19 = 0;
                uVar7 = 0;
                if (local_d4 != 0) {
                  uVar7 = recovered_10009884(local_d4 * 0x1c);
                }
                if (local_d8 != 0) {
                  uVar19 = recovered_10009884(local_d8);
                }
                bVar20 = false;
                if ((local_d4 == 0) || (uVar7 != 0)) {
                  if ((local_d8 == 0) || (uVar19 != 0)) {
                    iVar4 = recovered_1000ae6c();
                    if (iVar4 == 0) {
                      pcVar18 = str_1000bc07;
                    }
                    else if (local_d4 == 0) {
                      pcVar18 = (char *)0x0;
                      bVar20 = true;
                    }
                    else {
                      pcVar18 = str_1000bc07;
                    }
                  }
                  else {
                    pcVar18 = str_1000bbdc;
                  }
                }
                else {
                  pcVar18 = str_1000bbdc;
                }
                if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                    (0x53 < _DAT_40010808)) && (_DAT_40010850 != (code *)0x0)) {
                  (*_DAT_40010850)(uVar7);
                }
                if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                   ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
                  (*_DAT_40010850)(uVar19);
                }
                if (bVar20) goto LAB_10008990;
              }
              else {
                pcVar18 = str_1000bbc2;
              }
            }
          }
          else {
            pcVar18 = str_1000bba3;
          }
          goto LAB_10008c9c;
        }
      }
LAB_10008ad4:
      pcVar18 = str_1000bb77;
      goto LAB_10008c9c;
    }
    iVar4 = recovered_100095dc(puVar17[1],(char *)puVar17[2],&local_c4);
    uVar7 = local_c4;
    if (iVar4 == 0) {
      pcVar18 = str_1000bb3b;
      goto LAB_10008c9c;
    }
    if (((local_bc & 2) != 0) || ((local_c0 != 0 && (local_c4 == 0)))) {
      pcVar18 = str_1000bb58;
      if (((_DAT_40010800 == 0x50414d57) &&
          (((_DAT_40010804 != 0 && (0xb < _DAT_40010808)) && (0x53 < _DAT_40010808)))) &&
         (_DAT_40010850 != (code *)0x0)) {
        (*_DAT_40010850)(local_c4);
      }
      goto LAB_10008c9c;
    }
    iVar4 = 0;
    local_c8 = local_c0;
    uVar19 = param_4[1];
    if (uVar19 < 0xfffffff4) {
      uVar9 = param_4[2];
      uVar16 = uVar19 + 0xc;
      if (uVar9 < uVar16) {
        if (uVar9 == 0) {
          uVar9 = 0x100;
        }
        uVar10 = uVar9;
        if (uVar9 < uVar16) {
          do {
            if ((int)uVar10 < 0) {
              uVar9 = uVar16;
              break;
            }
            uVar9 = uVar10 << 1;
            uVar1 = uVar10 * 2;
            uVar10 = uVar9;
          } while (uVar1 < uVar16);
        }
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0xb < _DAT_40010808 && (0x57 < _DAT_40010808)))) {
          if ((_DAT_40010854 != (code *)0x0) &&
             (iVar4 = (*_DAT_40010854)(*param_4,uVar9), iVar4 != 0)) {
            param_4[2] = uVar9;
            *param_4 = iVar4;
            uVar9 = param_4[1];
            goto LAB_100080d0;
          }
          goto LAB_100080f4;
        }
      }
      else {
        iVar4 = *param_4;
        uVar9 = uVar19;
LAB_100080d0:
        recovered_10002dc0((undefined8 *)(iVar4 + uVar9),(undefined8 *)&local_d0,
                           (undefined8 *)&PrefetchAbort);
        param_4[1] = uVar16;
        if ((undefined8 *)(-0xd - uVar19) < puVar8) {
LAB_100080f4:
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          puVar14 = (undefined8 *)puVar17[3];
          uVar19 = param_4[2];
          uVar16 = uVar16 + (int)puVar8;
          if (uVar19 < uVar16) {
            if (uVar19 == 0) {
              uVar19 = 0x100;
            }
            if (uVar19 < uVar16) {
              do {
                if ((int)uVar19 < 0) {
                  uVar9 = uVar16;
                  break;
                }
                uVar9 = uVar19 << 1;
                uVar10 = uVar19 * 2;
                uVar19 = uVar9;
              } while (uVar10 < uVar16);
            }
            else {
              uVar9 = uVar19;
            }
            if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb < _DAT_40010808)) {
              if ((_DAT_40010808 < 0x58) || (_DAT_40010854 == (code *)0x0)) goto LAB_100080f4;
              iVar11 = (*_DAT_40010854)(*param_4,uVar9);
              iVar4 = 0;
              if (iVar11 != 0) {
                param_4[2] = uVar9;
                *param_4 = iVar11;
                goto LAB_10008864;
              }
            }
          }
          else {
LAB_10008864:
            if (puVar8 != (undefined8 *)0x0) {
              recovered_10002dc0((undefined8 *)(*param_4 + param_4[1]),puVar14,puVar8);
            }
            param_4[1] = uVar16;
            iVar4 = recovered_1000ad44(param_4,uVar7,local_c0);
          }
        }
      }
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
      (*_DAT_40010850)(uVar7);
    }
    if (iVar4 == 0) {
      pcVar18 = str_1000bb77;
      goto LAB_10008c9c;
    }
LAB_10008990:
    bVar20 = 0xfffffffe < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar20) {
      pcVar18 = str_1000bcb4;
      goto LAB_10008c9c;
    }
    puVar17 = (undefined4 *)*puVar17;
  } while (puVar17 != (undefined4 *)0x0);
  pcVar18 = (char *)0x0;
  *(uint *)(*param_4 + 4) = uVar3;
LAB_10008c9c:
  do {
    puVar17 = (undefined4 *)*puVar6;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
       (_DAT_40010850 != (code *)0x0)) {
      (*_DAT_40010850)(puVar6[2]);
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
      (*_DAT_40010850)(puVar6[3]);
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
      (*_DAT_40010850)(puVar6);
    }
    puVar6 = puVar17;
  } while (puVar17 != (undefined4 *)0x0);
  return pcVar18;
}

#undef DAT_1000ba8b
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_4001084c
#undef DAT_40010850
#undef DAT_40010854
#undef DAT_400108c8
#undef DAT_40010910
#undef DAT_400109d4
#undef DAT_40010a18
#undef EXT_00000008
#undef EXT_0000000c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_4001084c
#undef _DAT_40010850
#undef _DAT_40010854
#undef _DAT_400108c8
#undef _DAT_400109d4
#undef _DAT_40010a18
#undef str_1000ba90
#undef str_1000baa3
#undef str_1000bac7
#undef str_1000bae9
#undef str_1000bb07
#undef str_1000bb3b
#undef str_1000bb58
#undef str_1000bb77
#undef str_1000bba3
#undef str_1000bbc2
#undef str_1000bbdc
#undef str_1000bc07
#undef str_1000bcb4
#undef local_ca
#undef local_c9
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cf
#undef local_cd
#undef local_cc
#undef local_cb

#undef DAT_10009510
#define DAT_10009510 (*(uint64_t *)(0x10009510U))
#undef DAT_10009518
#define DAT_10009518 (*(uint64_t *)(0x10009518U))
#undef DAT_10009520
#define DAT_10009520 (*(uint64_t *)(0x10009520U))
#undef DAT_10009528
#define DAT_10009528 (*(uint64_t *)(0x10009528U))
#undef DAT_1000bff0
#define DAT_1000bff0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8c4U)))
#undef DAT_1000bff8
#define DAT_1000bff8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ccU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010854
#define DAT_40010854 (*(uint8_t *)(0x40010854U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010854
#define _DAT_40010854 (*(code * *)(0x40010854U))
#undef str_1000bac7
#define str_1000bac7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39bU)))
#undef str_1000bb77
#define str_1000bb77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44bU)))
#undef str_1000bccd
#define str_1000bccd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a1U)))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_33 (*(ushort *)(pf_stack_frame + 29))
#define local_31 (*(byte *)(pf_stack_frame + 31))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10008d70(int param_1,uint param_2,int *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  short sVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  ulonglong uVar26;
  uint128 auVar27;
  uint128 auVar28;
  uint128 auVar29;

  if (_DAT_40010800 != 0x50414d57) {
    return str_1000bccd;
  }
  if (_DAT_40010804 == 0) {
    return str_1000bccd;
  }
  if (_DAT_40010808 < 0x50) {
    return str_1000bccd;
  }
  if (_DAT_4001084c == (code *)0x0) {
    return str_1000bccd;
  }
  iVar2 = (*_DAT_4001084c)(0x10000);
  if (iVar2 == 0) {
    return str_1000bccd;
  }
  PF_PART8(auVar28, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar28, 0) = 0xffffffffffffffff;
  auVar28 = auVar28 << 0x40 | auVar28;
  iVar3 = 0;
  do {
    puVar7 = (undefined4 *)(iVar2 + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar7 = PF_PART4(auVar28, 0);
    puVar7[1] = PF_PART4(auVar28, 4);
    puVar7[2] = PF_PART4(auVar28, 8);
    puVar7[3] = PF_PART4(auVar28, 12);
  } while (iVar3 != 0x10000);
  pcVar4 = str_1000bac7;
  uVar14 = param_3[1];
  local_30 = DAT_1000bff0;
  uStack_28 = DAT_1000bff8;
  if (0xffffffef < uVar14) goto LAB_1000947c;
  uVar12 = param_3[2];
  uVar8 = uVar14 + 0x10;
  if (uVar12 < uVar8) {
    if (uVar12 == 0) {
      uVar12 = 0x100;
    }
    uVar14 = uVar12;
    if (uVar12 < uVar8) {
      do {
        if ((int)uVar14 < 0) {
          uVar12 = uVar8;
          break;
        }
        uVar12 = uVar14 << 1;
        uVar5 = uVar14 * 2;
        uVar14 = uVar12;
      } while (uVar5 < uVar8);
    }
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x58)) ||
       (_DAT_40010854 == (code *)0x0)) goto LAB_1000947c;
    iVar3 = (*_DAT_40010854)(*param_3,uVar12);
    pcVar4 = str_1000bac7;
    if (iVar3 == 0) goto LAB_1000947c;
    uVar14 = param_3[1];
    param_3[2] = uVar12;
    *param_3 = iVar3;
  }
  else {
    iVar3 = *param_3;
  }
  recovered_10002dc0((undefined8 *)(iVar3 + uVar14),&local_30,(undefined8 *)&DataAbort);
  uVar14 = 0;
  param_3[1] = uVar8;
  if (param_2 == 0) {
LAB_10009404:
    pcVar4 = (char *)0x0;
    *(uint *)(*param_3 + 4) = param_2;
    *(int *)(*param_3 + 8) = param_3[1] + -0x10;
    *(uint *)(*param_3 + 0xc) = uVar14;
  }
  else {
    local_31 = 0;
    if (uVar8 != 0xffffffff) {
      uVar14 = 0xffffffff;
      uVar12 = 0;
      do {
        local_31 = 0;
        uVar5 = param_3[2];
        uVar9 = uVar8 + 1;
        if (uVar8 < uVar5) {
          iVar3 = *param_3;
          uVar5 = uVar8;
        }
        else {
          if (uVar5 == 0) {
            uVar5 = 0x100;
          }
          if (uVar8 < uVar5) {
            uVar13 = uVar5;
          }
          else {
            do {
              if ((int)uVar5 < 0) {
                uVar13 = uVar9;
                break;
              }
              uVar13 = uVar5 << 1;
              uVar16 = uVar5 << 1;
              uVar5 = uVar13;
            } while (uVar16 <= uVar8);
          }
          if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
             ((_DAT_40010808 < 0x58 ||
              ((_DAT_40010854 == (code *)0x0 ||
               (iVar3 = (*_DAT_40010854)(*param_3,uVar13), iVar3 == 0)))))) break;
          uVar5 = param_3[1];
          param_3[2] = uVar13;
          *param_3 = iVar3;
        }
        recovered_10002dc0((undefined8 *)(iVar3 + uVar5),(undefined8 *)&local_31,(undefined8 *)0x1);
        param_3[1] = uVar9;
        if (uVar12 < param_2) {
          uVar5 = 0;
          do {
            uVar13 = param_2 - uVar12;
            if (uVar13 < 3) {
              bVar11 = *(byte *)(param_1 + uVar12);
LAB_10009158:
              local_33 = CONCAT11(PF_PART1(local_33, 1),bVar11);
              local_31 = local_31 | (byte)(1 << (uVar5 & 0xff));
              local_3c = 1;
              puVar17 = (undefined8 *)0x1;
            }
            else {
              pbVar10 = (byte *)(param_1 + uVar12);
              bVar11 = *pbVar10;
              puVar15 = (uint *)(iVar2 + ((short)(ushort)bVar11 * 0xfb + (uint)pbVar10[1] * 0x11 +
                                          (uint)pbVar10[2] & 0xfff) * 8);
              uVar20 = *puVar15;
              uVar16 = puVar15[1];
              if (((int)uVar16 < 0) || (uVar16 != 0 || uVar16 < (uVar12 <= uVar20)))
              goto LAB_10009158;
              if (0x11 < uVar13) {
                uVar13 = 0x12;
              }
              uVar21 = 0;
              uVar23 = 0;
              local_3c = 0;
              while( true ) {
                sVar22 = (short)uVar23;
                uVar18 = uVar12 - uVar20;
                bVar25 = 0xfff < uVar18;
                bVar24 = uVar18 == 0x1000;
                if (uVar18 < 0x1001) {
                  bVar25 = 0x3e < uVar21;
                  bVar24 = uVar21 == 0x3f;
                }
                if (bVar25 && !bVar24) break;
                uVar6 = 0;
                do {
                  if (*(byte *)(param_1 + uVar20 + uVar6) != pbVar10[uVar6]) goto LAB_100090a4;
                  uVar6 = uVar6 + 1;
                } while (uVar13 != uVar6);
                uVar6 = uVar13;
LAB_100090a4:
                if (local_3c < uVar6) {
                  uVar23 = uVar18;
                  local_3c = uVar6;
                }
                sVar22 = (short)uVar23;
                if (local_3c == 0x12) {
                  local_3c = 0x12;
                  goto LAB_10009128;
                }
                iVar3 = iVar2 + (uVar20 & 0xfff) * 8;
                uVar18 = *(uint *)(iVar3 + 0x8000);
                uVar6 = *(uint *)(iVar3 + 0x8004);
                if (((int)(uVar6 - (uVar16 + (uVar18 < uVar20))) < 0 ==
                     (SBORROW4(uVar6,uVar16) != SBORROW4(uVar6 - uVar16,(uint)(uVar18 < uVar20))))
                   || ((int)uVar6 < 0)) break;
                uVar21 = uVar21 + 1;
                uVar16 = uVar6;
                uVar20 = uVar18;
                if (uVar6 != 0 || uVar6 < (uVar12 <= uVar18)) break;
              }
              if (local_3c < 3) goto LAB_10009158;
LAB_10009128:
              puVar17 = (undefined8 *)0x2;
              local_33 = sVar22 * 0x10 - 0x10U | (short)local_3c - 3U;
            }
            if (CARRY4(uVar9,(uint)puVar17)) goto LAB_10009428;
            uVar13 = param_3[2];
            uVar16 = uVar9 + (int)puVar17;
            if (uVar13 < uVar16) {
              if (uVar13 == 0) {
                uVar13 = 0x100;
              }
              uVar9 = uVar13;
              if (uVar13 < uVar16) {
                do {
                  if ((int)uVar9 < 0) {
                    uVar13 = uVar16;
                    break;
                  }
                  uVar13 = uVar9 << 1;
                  uVar20 = uVar9 * 2;
                  uVar9 = uVar13;
                } while (uVar20 < uVar16);
              }
              if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x58)
                  ) || ((_DAT_40010854 == (code *)0x0 ||
                        (iVar3 = (*_DAT_40010854)(*param_3,uVar13), iVar3 == 0))))
              goto LAB_10009428;
              uVar9 = param_3[1];
              param_3[2] = uVar13;
              *param_3 = iVar3;
            }
            else {
              iVar3 = *param_3;
            }
            recovered_10002dc0((undefined8 *)(iVar3 + uVar9),(undefined8 *)&local_33,puVar17);
            iVar3 = -uVar12;
            uVar9 = 1;
            if (1 < local_3c) {
              uVar9 = local_3c;
            }
            param_3[1] = uVar16;
            uVar13 = uVar12;
            do {
              PF_PART8(auVar27, 8) = (*(uint64_t *)(uint64_t[]){0x2000000010ULL});
              PF_PART8(auVar27, 0) = (*(uint64_t *)(uint64_t[]){0x400000008ULL});
              uVar14 = uVar14 ^ *(byte *)(param_1 + uVar13);
              PF_PART8(auVar1, 8) = CONCAT44(uVar14,uVar14);
              PF_PART8(auVar1, 0) = CONCAT44(uVar14,uVar14);
              auVar28 = PFVectorTest(auVar1,auVar27,4,0x10);
              PF_PART8(auVar29, 8) = (*(uint64_t *)(uint64_t[]){0x3b6e20c81db71064ULL});
              PF_PART8(auVar29, 0) = (*(uint64_t *)(uint64_t[]){0x76dc4190edb8832ULL});
              uVar26 = SUB168(auVar28 & auVar29,0) ^ SUB168(auVar28 & auVar29,8);
              uVar23 = (uint)uVar26 ^ (uint)(uVar26 >> 0x20);
              uVar20 = uVar14 >> 1 ^ 0xedb88320;
              if ((uVar14 & 1) == 0) {
                uVar20 = uVar14 >> 1;
              }
              if ((uVar20 & 0x20) != 0) {
                uVar23 = uVar23 ^ 0x76dc4190;
              }
              uVar21 = uVar20 >> 1 ^ 0xedb88320;
              if ((uVar14 & 2) == 0) {
                uVar21 = uVar20 >> 1;
              }
              uVar14 = uVar21 >> 6 ^ 0xedb88320;
              if ((uVar21 & 0x20) == 0) {
                uVar14 = uVar21 >> 6;
              }
              if (2 < param_2 + iVar3) {
                iVar19 = iVar2 + (uVar13 & 0xfff) * 8;
                puVar15 = (uint *)(iVar2 + ((short)(ushort)*(byte *)(param_1 + uVar13) * 0xfb +
                                            (uint)*(byte *)(param_1 + uVar13 + 1) * 0x11 +
                                            (uint)*(byte *)(param_1 + uVar13 + 2) & 0xfff) * 8);
                uVar20 = *puVar15;
                *puVar15 = uVar13;
                *(uint *)(iVar19 + 0x8000) = uVar20;
                *(uint *)(iVar19 + 0x8004) = puVar15[1];
                puVar15[1] = 0;
              }
              uVar14 = uVar23 ^ uVar14;
              iVar3 = iVar3 + -1;
              uVar13 = uVar13 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            uVar12 = local_3c + uVar12;
            if (6 < uVar5) break;
            uVar5 = uVar5 + 1;
            uVar9 = uVar16;
          } while (uVar12 < param_2);
          *(byte *)(*param_3 + uVar8) = local_31;
          if (param_2 <= uVar12) {
            uVar14 = ~uVar14;
            goto LAB_10009404;
          }
        }
        else {
          *(byte *)(*param_3 + uVar8) = local_31;
        }
        uVar8 = param_3[1];
        local_31 = 0;
      } while (uVar8 != 0xffffffff);
    }
LAB_10009428:
    pcVar4 = str_1000bb77;
  }
LAB_1000947c:
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
    (*_DAT_40010850)(iVar2);
  }
  return pcVar4;
}

#undef DAT_10009510
#undef DAT_10009518
#undef DAT_10009520
#undef DAT_10009528
#undef DAT_1000bff0
#undef DAT_1000bff8
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef DAT_40010854
#undef EXT_00000010
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850
#undef _DAT_40010854
#undef str_1000bac7
#undef str_1000bb77
#undef str_1000bccd
#undef uStack_28
#undef local_3c
#undef local_33
#undef local_31
#undef local_30

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef DAT_400108d0
#define DAT_400108d0 (*(uint8_t *)(0x400108d0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
#undef _DAT_400108d0
#define _DAT_400108d0 (*(code * *)(0x400108d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009530(int param_1,char *param_2,void *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  bool bVar3;

  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xd3;
    }
    if (0xd2 < _DAT_40010808 && !bVar3) {
      if (_DAT_400108d0 == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x100095b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*_DAT_400108d0)(param_1,param_2,param_3,param_4);
      return iVar1;
    }
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
     (_DAT_40010838 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100095d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*_DAT_40010838)(param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef DAT_400108d0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838
#undef _DAT_400108d0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef DAT_40010a1c
#define DAT_40010a1c (*(uint8_t *)(0x40010a1cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef _DAT_40010a1c
#define _DAT_40010a1c (*(code * *)(0x40010a1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100095dc(int param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == (uint *)0x0) {
    return 0;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x21f < _DAT_40010808)) &&
     (_DAT_40010a1c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100096cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*_DAT_40010a1c)(param_1,param_2,param_3);
    return iVar1;
  }
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar6 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar6 = _DAT_40010808 == 0xcb;
    }
    if (0xca < _DAT_40010808 && !bVar6) {
      if (_DAT_400108c8 == (code *)0x0) {
        return 0;
      }
      iVar1 = (*_DAT_400108c8)(param_1,param_2,param_3);
      goto LAB_100096ec;
    }
  }
  if (_DAT_40010800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_40010804 == 0) {
    return 0;
  }
  if (_DAT_40010808 < 0x38) {
    return 0;
  }
  if (_DAT_40010834 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*_DAT_40010834)(param_2,param_3);
LAB_100096ec:
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar5 = *param_3;
    *param_3 = 0;
    uVar2 = 1;
    if (param_3[1] != 0) {
      if (((uVar5 != 0) && (_DAT_40010800 == 0x50414d57)) &&
         ((_DAT_40010804 != 0 &&
          (((0x4f < _DAT_40010808 && (_DAT_4001084c != (code *)0x0)) &&
           (uVar3 = (*_DAT_4001084c)(param_3[1]), uVar3 != 0)))))) {
        uVar4 = param_3[1];
        if ((uVar4 == 0) || (uVar3 <= -uVar4)) {
          if (uVar4 != 0) {
            uVar4 = 0;
            do {
              *(undefined1 *)(uVar3 + uVar4) = *(undefined1 *)(uVar5 + uVar4);
              uVar4 = uVar4 + 1;
            } while (uVar4 < param_3[1]);
          }
          *param_3 = uVar3;
          return 1;
        }
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
          (*_DAT_40010850)();
        }
      }
      return 0;
    }
  }
  return uVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_4001084c
#undef DAT_40010850
#undef DAT_400108c8
#undef DAT_40010a1c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_4001084c
#undef _DAT_40010850
#undef _DAT_400108c8
#undef _DAT_40010a1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097fc
 */

bool recovered_100097fc(char *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;

  if (((param_4 != (int *)0x0 && param_1 != (char *)0x0) && (3 < param_2)) && (*param_1 == 'P')) {
    cVar1 = param_1[1];
    bVar2 = cVar1 == 'F';
    if (bVar2) {
      cVar1 = param_1[2];
    }
    if ((bVar2 && cVar1 == 'Z') && (0xf < param_2)) {
      if (param_1[3] != '1') {
        return false;
      }
      if (*(int *)(param_1 + 4) - 1U < param_3) {
        bVar2 = *(int *)(param_1 + 8) == param_2 - 0x10;
        if (bVar2) {
          *param_4 = *(int *)(param_1 + 4);
        }
        return bVar2;
      }
    }
  }
  return false;
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
 * Address: 0x10009884
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10009884(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100098d4. Too many branches */
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

#undef DAT_10009ba0
#define DAT_10009ba0 (*(uint64_t *)(0x10009ba0U))
#undef DAT_10009ba8
#define DAT_10009ba8 (*(uint64_t *)(0x10009ba8U))
#undef DAT_10009bb0
#define DAT_10009bb0 (*(uint64_t *)(0x10009bb0U))
#undef DAT_10009bb8
#define DAT_10009bb8 (*(uint64_t *)(0x10009bb8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098e0
 */

bool recovered_100098e0(char *param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  uint128 auVar21;
  uint128 auVar22;
  uint128 auVar23;
  uint128 auVar24;
  uint128 auVar25;

  bVar19 = false;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (((param_1 != (char *)0x0) && (3 < param_2)) && (*param_1 == 'P')) {
    cVar2 = param_1[1];
    bVar18 = cVar2 == 'F';
    if (bVar18) {
      cVar2 = param_1[2];
    }
    if (((bVar18 && cVar2 == 'Z') && (0xf < param_2)) &&
       ((param_1[3] == '1' &&
        ((uVar13 = *(uint *)(param_1 + 4), uVar13 - 1 < param_4 &&
         (*(int *)(param_1 + 8) == param_2 - 0x10)))))) {
      uVar15 = 0xffffffff;
      uVar14 = 0x10;
      uVar17 = 0;
      do {
        if (param_2 <= uVar14) {
          return false;
        }
        bVar3 = param_1[uVar14];
        uVar14 = uVar14 + 1;
        uVar8 = 0;
        do {
          if (uVar13 == uVar17) {
            uVar17 = uVar13;
            if (bVar3 >> (uVar8 & 0xff) != 0) {
              return false;
            }
            goto LAB_10009b4c;
          }
          if ((bVar3 >> (uVar8 & 0xff) & 1) == 0) {
            uVar16 = param_2 - uVar14;
            bVar18 = uVar16 == 2;
            bVar19 = false;
            uVar11 = (uint)bVar3;
            if (1 < uVar16) {
              uVar16 = (uint)(byte)*(ushort *)(param_1 + uVar14);
              uVar6 = *(ushort *)(param_1 + uVar14);
              uVar11 = (uint)uVar6;
              uVar10 = (uint)(uVar6 >> 4);
              bVar19 = uVar10 <= uVar17;
              bVar18 = uVar17 == uVar10;
            }
            if (!bVar19 || bVar18) {
              return false;
            }
            uVar16 = (uVar16 & 0xf) + 3;
            if (uVar13 - uVar17 < uVar16) {
              return false;
            }
            uVar14 = uVar14 + 2;
            do {
              bVar4 = *(byte *)((param_3 - (uVar11 >> 4)) + uVar17 + -1);
              PF_PART8(auVar23, 8) = (*(uint64_t *)(uint64_t[]){0x2000000010ULL});
              PF_PART8(auVar23, 0) = (*(uint64_t *)(uint64_t[]){0x400000008ULL});
              uVar15 = uVar15 ^ bVar4;
              *(byte *)(param_3 + uVar17) = bVar4;
              PF_PART8(auVar22, 8) = CONCAT44(uVar15,uVar15);
              PF_PART8(auVar22, 0) = CONCAT44(uVar15,uVar15);
              auVar22 = PFVectorTest(auVar22,auVar23,4,0x10);
              PF_PART8(auVar25, 8) = (*(uint64_t *)(uint64_t[]){0x3b6e20c81db71064ULL});
              PF_PART8(auVar25, 0) = (*(uint64_t *)(uint64_t[]){0x76dc4190edb8832ULL});
              uVar10 = uVar15 >> 1 ^ 0xedb88320;
              uVar17 = uVar17 + 1;
              if ((uVar15 & 1) == 0) {
                uVar10 = uVar15 >> 1;
              }
              uVar20 = SUB168(auVar22 & auVar25,0) ^ SUB168(auVar22 & auVar25,8);
              uVar9 = (uint)uVar20 ^ (uint)(uVar20 >> 0x20);
              uVar12 = uVar10 >> 1 ^ 0xedb88320;
              if ((uVar10 & 0x20) != 0) {
                uVar9 = uVar9 ^ 0x76dc4190;
              }
              if ((uVar15 & 2) == 0) {
                uVar12 = uVar10 >> 1;
              }
              uVar15 = uVar12 >> 6 ^ 0xedb88320;
              if ((uVar12 & 0x20) == 0) {
                uVar15 = uVar12 >> 6;
              }
              uVar15 = uVar9 ^ uVar15;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          else {
            if (param_2 <= uVar14) {
              return false;
            }
            PF_PART8(auVar21, 8) = (*(uint64_t *)(uint64_t[]){0x2000000010ULL});
            PF_PART8(auVar21, 0) = (*(uint64_t *)(uint64_t[]){0x400000008ULL});
            uVar15 = uVar15 ^ (byte)param_1[uVar14];
            *(char *)(param_3 + uVar17) = param_1[uVar14];
            PF_PART8(auVar1, 8) = CONCAT44(uVar15,uVar15);
            PF_PART8(auVar1, 0) = CONCAT44(uVar15,uVar15);
            auVar22 = PFVectorTest(auVar1,auVar21,4,0x10);
            PF_PART8(auVar24, 8) = (*(uint64_t *)(uint64_t[]){0x3b6e20c81db71064ULL});
            PF_PART8(auVar24, 0) = (*(uint64_t *)(uint64_t[]){0x76dc4190edb8832ULL});
            uVar17 = uVar17 + 1;
            uVar14 = uVar14 + 1;
            uVar20 = SUB168(auVar22 & auVar24,0) ^ SUB168(auVar22 & auVar24,8);
            uVar16 = (uint)uVar20 ^ (uint)(uVar20 >> 0x20);
            uVar11 = uVar15 >> 1 ^ 0xedb88320;
            if ((uVar15 & 1) == 0) {
              uVar11 = uVar15 >> 1;
            }
            if ((uVar11 & 0x20) != 0) {
              uVar16 = uVar16 ^ 0x76dc4190;
            }
            uVar10 = uVar11 >> 1 ^ 0xedb88320;
            if ((uVar15 & 2) == 0) {
              uVar10 = uVar11 >> 1;
            }
            uVar15 = uVar10 >> 6 ^ 0xedb88320;
            if ((uVar10 & 0x20) == 0) {
              uVar15 = uVar10 >> 6;
            }
            uVar15 = uVar16 ^ uVar15;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != 8);
      } while (uVar17 < uVar13);
LAB_10009b4c:
      bVar19 = false;
      if (uVar14 == param_2) {
        puVar7 = (uint *)(*(uint *)(param_1 + 0xc) ^ uVar15);
        bVar19 = puVar7 == (uint *)0xffffffff;
        if (param_5 != (uint *)0x0) {
          puVar5 = puVar7;
          if (puVar7 == (uint *)0xffffffff) {
            puVar5 = param_5;
          }
          bVar19 = puVar7 == (uint *)0xffffffff;
          if (puVar7 == (uint *)0xffffffff) {
            *puVar5 = uVar17;
          }
        }
      }
    }
  }
  return bVar19;
}

#undef DAT_10009ba0
#undef DAT_10009ba8
#undef DAT_10009bb0
#undef DAT_10009bb8

#undef DAT_1000bcf7
#define DAT_1000bcf7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cbU)))
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
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_4001088c
#define DAT_4001088c (*(uint8_t *)(0x4001088cU))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef DAT_400108d0
#define DAT_400108d0 (*(uint8_t *)(0x400108d0U))
#undef DAT_400108dc
#define DAT_400108dc (*(uint8_t *)(0x400108dcU))
#undef DAT_40010a18
#define DAT_40010a18 (*(uint8_t *)(0x40010a18U))
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
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_4001088c
#define _DAT_4001088c (*(code * *)(0x4001088cU))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef _DAT_400108d0
#define _DAT_400108d0 (*(code * *)(0x400108d0U))
#undef _DAT_400108dc
#define _DAT_400108dc (*(code * *)(0x400108dcU))
#undef _DAT_40010a18
#define _DAT_40010a18 (*(code * *)(0x40010a18U))
#undef str_1000bcfc
#define str_1000bcfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d0U)))
#undef str_1000bd2c
#define str_1000bd2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x600U)))
#undef str_1000bd48
#define str_1000bd48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61cU)))
#undef str_1000bd72
#define str_1000bd72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x646U)))
#undef str_1000bd9e
#define str_1000bd9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x672U)))
#undef str_1000bdb7
#define str_1000bdb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68bU)))
#undef str_1000bdd6
#define str_1000bdd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aaU)))
#undef str_1000bdee
#define str_1000bdee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c2U)))
#undef str_1000be24
#define str_1000be24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f8U)))
#undef str_1000be49
#define str_1000be49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71dU)))
#undef str_1000be96
#define str_1000be96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76aU)))
#undef str_1000bece
#define str_1000bece (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a2U)))
#undef str_1000bef0
#define str_1000bef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c4U)))
#undef str_1000bf25
#define str_1000bf25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f9U)))
#undef str_1000bf62
#define str_1000bf62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x836U)))
#define local_2c (*(undefined4 (*)[11])(pf_stack_frame + 20))
#define local_24 (*(byte *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10009bc0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pointer;
  byte *pointer_00;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;

  pcVar11 = str_1000bcfc;
  if ((7 < param_5) &&
     (iVar1 = recovered_10003b7c((uint *)param_4,(uint *)&DAT_1000bcf7,4), iVar1 == 0)) {
    uVar12 = *(uint *)(param_4 + 4);
    pcVar11 = str_1000bd2c;
    if (uVar12 != 0) {
      uVar2 = (param_5 - 8) / 0xd;
      bVar16 = uVar2 <= uVar12;
      bVar15 = uVar12 == uVar2;
      if (!bVar16 || bVar15) {
        bVar16 = 0xaaaaaa9 < uVar12;
        bVar15 = uVar12 == 0xaaaaaaa;
      }
      if ((((!bVar16 || bVar15) && (pcVar11 = str_1000bd48, _DAT_40010800 == 0x50414d57)) &&
          (_DAT_40010804 != 0)) && ((0x4f < _DAT_40010808 && (_DAT_4001084c != (code *)0x0)))) {
        pointer = (byte *)(*_DAT_4001084c)();
        if (pointer != (byte *)0x0) {
          recovered_10003550(pointer,0,uVar12 * 0x18);
          iVar1 = 2;
          if ((uVar12 != 1) && (iVar1 = 4, 2 < uVar12)) {
            iVar1 = 8;
            if (4 < uVar12) {
              iVar1 = 0x10;
            }
            if (8 < uVar12) {
              iVar1 = 0x20;
              if (0x10 < uVar12) {
                iVar1 = 0x40;
              }
              if (0x20 < uVar12) {
                iVar1 = 0x80;
                if (0x40 < uVar12) {
                  iVar1 = 0x100;
                }
                if (0x80 < uVar12) {
                  iVar1 = 0x200;
                  bVar16 = 0xff < uVar12;
                  bVar15 = uVar12 == 0x100;
                  if (0x100 < uVar12) {
                    iVar1 = 0x400;
                    bVar16 = 0x1ff < uVar12;
                    bVar15 = uVar12 == 0x200;
                  }
                  if (bVar16 && !bVar15) {
                    iVar1 = 0x800;
                    bVar16 = 0x3ff < uVar12;
                    bVar15 = uVar12 == 0x400;
                    if (0x400 < uVar12) {
                      iVar1 = 0x1000;
                      bVar16 = 0x7ff < uVar12;
                      bVar15 = uVar12 == 0x800;
                    }
                    if (bVar16 && !bVar15) {
                      iVar1 = 0x2000;
                      bVar16 = 0xfff < uVar12;
                      bVar15 = uVar12 == 0x1000;
                      if (0x1000 < uVar12) {
                        iVar1 = 0x4000;
                        bVar16 = 0x1fff < uVar12;
                        bVar15 = uVar12 == 0x2000;
                      }
                      if (bVar16 && !bVar15) {
                        iVar1 = 0x8000;
                        bVar16 = 0x3fff < uVar12;
                        bVar15 = uVar12 == 0x4000;
                        if (0x4000 < uVar12) {
                          iVar1 = 0x10000;
                          bVar16 = 0x7fff < uVar12;
                          bVar15 = uVar12 == 0x8000;
                        }
                        if (bVar16 && !bVar15) {
                          iVar1 = 0x20000;
                          bVar16 = 0xffff < uVar12;
                          bVar15 = uVar12 == 0x10000;
                          if (0x10000 < uVar12) {
                            iVar1 = 0x40000;
                            bVar16 = 0x1ffff < uVar12;
                            bVar15 = uVar12 == 0x20000;
                          }
                          if (bVar16 && !bVar15) {
                            iVar1 = 0x80000;
                            bVar16 = 0x3ffff < uVar12;
                            bVar15 = uVar12 == 0x40000;
                            if (0x40000 < uVar12) {
                              iVar1 = 0x100000;
                              bVar16 = 0x7ffff < uVar12;
                              bVar15 = uVar12 == 0x80000;
                            }
                            if (bVar16 && !bVar15) {
                              iVar1 = 0x200000;
                              bVar16 = 0xfffff < uVar12;
                              bVar15 = uVar12 == 0x100000;
                              if (0x100000 < uVar12) {
                                iVar1 = 0x400000;
                                bVar16 = 0x1fffff < uVar12;
                                bVar15 = uVar12 == 0x200000;
                              }
                              if (bVar16 && !bVar15) {
                                iVar1 = 0x800000;
                                bVar16 = 0x3fffff < uVar12;
                                bVar15 = uVar12 == 0x400000;
                                if (0x400000 < uVar12) {
                                  iVar1 = 0x1000000;
                                  bVar16 = 0x7fffff < uVar12;
                                  bVar15 = uVar12 == 0x800000;
                                }
                                if (bVar16 && !bVar15) {
                                  iVar1 = 0x2000000;
                                  bVar16 = 0xffffff < uVar12;
                                  bVar15 = uVar12 == 0x1000000;
                                  if (0x1000000 < uVar12) {
                                    iVar1 = 0x4000000;
                                    bVar16 = 0x1ffffff < uVar12;
                                    bVar15 = uVar12 == 0x2000000;
                                  }
                                  if (((bVar16 && !bVar15) &&
                                      (iVar1 = 0x8000000, 0x4000000 < uVar12)) &&
                                     (iVar1 = 0x10000000, 0x8000000 < uVar12)) {
                                    iVar1 = 0x20000000;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          pointer_00 = (byte *)recovered_10009884(iVar1 << 2);
          if (pointer_00 == (byte *)0x0) {
            recovered_1000a61c((uint)pointer);
            pcVar11 = str_1000bd72;
          }
          else {
            recovered_10003550(pointer_00,0,iVar1 << 2);
            pcVar11 = recovered_1000aefc(param_1,param_2,0);
            if (pcVar11 == (char *)0x0) {
              uVar9 = 8;
              uVar2 = 0;
              pcVar11 = str_1000bd9e;
              do {
                if (param_5 < uVar9 || param_5 - uVar9 < 0xc) goto LAB_10009d60;
                piVar13 = (int *)(param_4 + uVar9);
                iVar14 = *piVar13;
                pbVar10 = pointer + uVar2 * 0x18;
                *(int *)(pbVar10 + 0x10) = iVar14;
                uVar8 = piVar13[1];
                *(uint *)(pbVar10 + 8) = uVar8;
                uVar3 = piVar13[2];
                *(uint *)(pbVar10 + 0xc) = uVar3;
                if (1 < iVar14 - 1U) {
                  pcVar11 = str_1000bdb7;
                  goto LAB_10009d60;
                }
                if ((iVar14 == 2) && (uVar3 != 0)) {
                  pcVar11 = str_1000bdb7;
                  goto LAB_10009d60;
                }
                iVar14 = uVar9 + 0xc;
                if (param_5 - iVar14 < uVar8) {
                  pcVar11 = str_1000bdb7;
                  goto LAB_10009d60;
                }
                if ((param_5 - iVar14) - uVar8 < uVar3) {
LAB_1000a4dc:
                  pcVar11 = str_1000bdb7;
                  goto LAB_10009d60;
                }
                pbVar4 = (byte *)(param_4 + iVar14);
                iVar5 = recovered_1000aa20((int)pbVar4,uVar8);
                if (iVar5 == 0) goto LAB_1000a4dc;
                *(byte **)(pbVar10 + 4) = pbVar4 + uVar8;
                *(byte **)pbVar10 = pbVar4;
                uVar9 = recovered_1000b17c(pbVar4,uVar8,(int)pointer,(int)pointer_00,iVar1,
                                           param_3 ^ 1);
                if (*(int *)(pointer_00 + uVar9 * 4) != 0) {
                  pcVar11 = str_1000bdd6;
                  goto LAB_10009d60;
                }
                if (uVar8 != 0) {
                  iVar5 = uVar8 + 0xb;
                  do {
                    if (*(char *)((int)piVar13 + iVar5) == '\\') {
                      uVar6 = recovered_1000b17c(pbVar4,iVar5 + -0xc,(int)pointer,(int)pointer_00,
                                                 iVar1,param_3 ^ 1);
                      if ((*(int *)(pointer_00 + uVar6 * 4) != 0) &&
                         (*(int *)(pointer + *(int *)(pointer_00 + uVar6 * 4) * 0x18 + -8) == 2))
                      goto LAB_10009fb4;
                      pcVar11 = str_1000bdee;
                      goto LAB_10009d60;
                    }
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0xb);
                }
                if (uVar2 != 0) {
                  pcVar11 = str_1000be24;
                  goto LAB_10009d60;
                }
LAB_10009fb4:
                uVar2 = uVar2 + 1;
                *(uint *)(pointer_00 + uVar9 * 4) = uVar2;
                pcVar7 = (char *)recovered_1000b290(param_2,(int)pbVar4,uVar8,param_3);
                *(char **)(pbVar10 + 0x14) = pcVar7;
                if (pcVar7 == (char *)0x0) {
                  pcVar11 = str_1000be49;
                  goto LAB_10009d60;
                }
                iVar5 = recovered_10007a54(param_1,pcVar7,local_2c);
                if ((iVar5 != 0) && ((*(int *)(pbVar10 + 0x10) != 2 || ((local_24 & 2) == 0)))) {
                  pcVar11 = str_1000be96;
                  goto LAB_10009d60;
                }
                uVar9 = uVar8 + iVar14 + uVar3;
              } while (uVar2 < uVar12);
              if (uVar9 == param_5) {
                pcVar11 = recovered_1000aefc(param_1,param_2,1);
              }
              else {
                pcVar11 = str_1000bece;
              }
              if (pcVar11 == (char *)0x0) {
                uVar2 = 0;
                pbVar10 = pointer + 0x14;
                do {
                  pcVar11 = *(char **)pbVar10;
                  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                      (0x21b < _DAT_40010808)) && (_DAT_40010a18 != (code *)0x0)) {
                    iVar1 = (*_DAT_40010a18)(param_1,pcVar11,local_2c);
                  }
                  else {
                    if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
                      bVar15 = _DAT_40010808 == 0xc;
                      if (0xb < _DAT_40010808) {
                        bVar15 = _DAT_40010808 == 0xcb;
                      }
                      if (_DAT_40010808 < 0xcb || bVar15) goto LAB_1000a0f8;
                      if (_DAT_400108c8 == (code *)0x0) {
                        iVar1 = 0;
                      }
                      else {
                        iVar1 = (*_DAT_400108c8)(param_1,pcVar11,local_2c);
                      }
                    }
                    else {
LAB_1000a0f8:
                      iVar1 = 0;
                      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                         ((0xb < _DAT_40010808 &&
                          ((0x37 < _DAT_40010808 && (_DAT_40010834 != (code *)0x0)))))) {
                        iVar1 = (*_DAT_40010834)(pcVar11,local_2c);
                      }
                    }
                    local_2c[0] = 0;
                  }
                  if (iVar1 == 0) {
                    pcVar11 = *(char **)pbVar10;
                    if (*(int *)(pbVar10 + -4) != 2) {
                      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                          (0xb < _DAT_40010808)) && (0xd3 < _DAT_40010808)) {
                        if (_DAT_400108d0 != (code *)0x0) {
                          iVar1 = (*_DAT_400108d0)(param_1,pcVar11,*(void **)(pbVar10 + -0x10),
                                                   *(uint *)(pbVar10 + -8));
LAB_1000a3b4:
                          if (iVar1 != 0) goto LAB_1000a3bc;
                        }
                      }
                      else if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                              ((0x3b < _DAT_40010808 && (_DAT_40010838 != (code *)0x0)))) {
                        iVar1 = (*_DAT_40010838)(pcVar11,*(void **)(pbVar10 + -0x10),
                                                 *(uint *)(pbVar10 + -8));
                        goto LAB_1000a3b4;
                      }
                      pcVar11 = str_1000bf62;
                      break;
                    }
                    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                       ((0xb < _DAT_40010808 && (0xdf < _DAT_40010808)))) {
                      if (_DAT_400108dc == (code *)0x0) {
                        pcVar11 = str_1000bf25;
                        break;
                      }
                      iVar1 = (*_DAT_400108dc)(param_1,pcVar11);
                    }
                    else {
                      if (_DAT_40010800 != 0x50414d57) {
                        pcVar11 = str_1000bf25;
                        break;
                      }
                      if (_DAT_40010804 == 0) {
                        pcVar11 = str_1000bf25;
                        break;
                      }
                      if (_DAT_40010808 < 0xc) {
                        pcVar11 = str_1000bf25;
                        break;
                      }
                      if (_DAT_40010808 < 0x90) {
                        pcVar11 = str_1000bf25;
                        break;
                      }
                      if (_DAT_4001088c == (code *)0x0) {
                        pcVar11 = str_1000bf25;
                        break;
                      }
                      iVar1 = (*_DAT_4001088c)(pcVar11);
                    }
                    if (iVar1 == 0) {
                      pcVar11 = str_1000bf25;
                      break;
                    }
                  }
                  else {
                    if (*(int *)(pbVar10 + -4) != 2) {
                      pcVar11 = str_1000bef0;
                      break;
                    }
                    if ((local_24 & 2) == 0) {
                      pcVar11 = str_1000bef0;
                      break;
                    }
                  }
LAB_1000a3bc:
                  uVar2 = uVar2 + 1;
                  pbVar10 = pbVar10 + 0x18;
                  pcVar11 = (char *)0x0;
                } while (uVar2 < uVar12);
              }
            }
LAB_10009d60:
            iVar1 = 0x14;
            do {
              if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)
                  ) && (_DAT_40010850 != (code *)0x0)) {
                (*_DAT_40010850)(*(undefined4 *)(pointer + iVar1));
              }
              iVar1 = iVar1 + 0x18;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            recovered_1000a61c((uint)pointer_00);
            recovered_1000a61c((uint)pointer);
          }
        }
      }
    }
  }
  return pcVar11;
}

#undef DAT_1000bcf7
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_40010838
#undef DAT_4001084c
#undef DAT_40010850
#undef DAT_4001088c
#undef DAT_400108c8
#undef DAT_400108d0
#undef DAT_400108dc
#undef DAT_40010a18
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_40010838
#undef _DAT_4001084c
#undef _DAT_40010850
#undef _DAT_4001088c
#undef _DAT_400108c8
#undef _DAT_400108d0
#undef _DAT_400108dc
#undef _DAT_40010a18
#undef str_1000bcfc
#undef str_1000bd2c
#undef str_1000bd48
#undef str_1000bd72
#undef str_1000bd9e
#undef str_1000bdb7
#undef str_1000bdd6
#undef str_1000bdee
#undef str_1000be24
#undef str_1000be49
#undef str_1000be96
#undef str_1000bece
#undef str_1000bef0
#undef str_1000bf25
#undef str_1000bf62
#undef local_2c
#undef local_24

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
 * Address: 0x1000a61c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a61c(uint pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000a668. Too many branches */
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

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef str_1000ba7a
#define str_1000ba7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34eU)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a66c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000a66c(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;

  iVar9 = 0;
  if ((((0xfffffd02 < param_2 - 0x2fe) && (_DAT_40010800 == 0x50414d57)) && (_DAT_40010804 != 0)) &&
     ((0x4f < _DAT_40010808 && (_DAT_4001084c != (code *)0x0)))) {
    iVar3 = (*_DAT_4001084c)(param_2 * 3 + 1);
    if (iVar3 != 0) {
      uVar11 = 0;
      uVar6 = 0;
      uVar7 = 0;
      iVar13 = 0;
      iVar9 = 0;
      do {
        iVar4 = iVar9;
        uVar12 = (uint)*(byte *)(param_1 + uVar11);
        if (((param_3 != 0) && (uVar12 == 0x25)) && (2 < param_2 - uVar11)) {
          uVar14 = (uint)((byte *)(param_1 + uVar11))[1];
          local_30 = uVar14 - 0x30;
          if ((local_30 & 0xff) < 10) {
            iVar9 = uVar14 - 0x30;
          }
          else if ((uVar14 - 0x41 & 0xff) < 6) {
            iVar9 = uVar14 - 0x37;
          }
          else {
            uVar12 = 0x25;
            if (5 < (uVar14 - 0x61 & 0xff)) goto LAB_1000a8b8;
            iVar9 = uVar14 - 0x57;
          }
          uVar12 = 0x25;
          if (-1 < iVar9) {
            uVar8 = (uint)*(byte *)(param_1 + uVar11 + 2);
            uVar5 = uVar8 - 0x30;
            if ((uVar5 & 0xff) < 10) {
              iVar9 = uVar8 - 0x30;
            }
            else if ((uVar8 - 0x41 & 0xff) < 6) {
              iVar9 = uVar8 - 0x37;
            }
            else {
              if (5 < (uVar8 - 0x61 & 0xff)) goto LAB_1000a8b8;
              iVar9 = uVar8 - 0x57;
            }
            if (-1 < iVar9) {
              if (9 < (local_30 & 0xff)) {
                if ((uVar14 - 0x41 & 0xff) < 6) {
                  local_30 = uVar14 - 0x37;
                }
                else {
                  local_30 = 0xffffffff;
                  if ((uVar14 - 0x61 & 0xff) < 6) {
                    local_30 = uVar14 - 0x57;
                  }
                }
              }
              if (9 < (uVar5 & 0xff)) {
                if ((uVar8 - 0x41 & 0xff) < 6) {
                  uVar5 = uVar8 - 0x37;
                }
                else {
                  uVar5 = 0xffffffff;
                  if ((uVar8 - 0x61 & 0xff) < 6) {
                    uVar5 = uVar8 - 0x57;
                  }
                }
              }
              uVar12 = uVar5 | local_30 << 4;
              uVar11 = uVar11 + 2;
            }
          }
        }
LAB_1000a8b8:
        if (iVar4 == 1) {
          uVar6 = uVar12;
        }
        if (iVar4 == 0) {
          uVar7 = uVar12;
        }
        if (iVar4 == 0xff) {
          if (_DAT_40010800 != 0x50414d57) {
            return 0;
          }
          if (_DAT_40010804 == 0) {
            return 0;
          }
          if (_DAT_40010808 < 0x54) {
            return 0;
          }
          goto LAB_1000aa04;
        }
        uVar14 = uVar12 & 0xff;
        if (((uVar12 - 0x20 & 0xff) < 0x5f) && (uVar14 != 0x25 && uVar14 != 0x5c)) {
          *(char *)(iVar3 + iVar13) = (char)uVar12;
          iVar13 = iVar13 + 1;
        }
        else {
          cVar1 = str_1000ba7a[uVar14 >> 4];
          cVar2 = str_1000ba7a[uVar12 & 0xf];
          puVar10 = (undefined1 *)(iVar3 + iVar13);
          *puVar10 = 0x25;
          iVar13 = iVar13 + 3;
          puVar10[2] = cVar2;
          puVar10[1] = cVar1;
        }
        uVar11 = uVar11 + 1;
        iVar9 = iVar4 + 1;
      } while (uVar11 < param_2);
      *(undefined1 *)(iVar3 + iVar13) = 0;
      if ((iVar4 == 0 && (uVar7 & 0xff) == 0x2e) ||
         (((iVar4 + 1 == 2 && ((uVar7 & 0xff) == 0x2e)) && ((uVar6 & 0xff) == 0x2e)))) {
        iVar9 = 0;
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) {
LAB_1000aa04:
          iVar9 = 0;
          if (_DAT_40010850 != (code *)0x0) {
            (*_DAT_40010850)(iVar3);
          }
        }
      }
      else {
        iVar9 = iVar3;
      }
    }
  }
  return iVar9;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850
#undef str_1000ba7a
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa20
 */

undefined4 recovered_1000aa20(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
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
  bool bVar12;

  uVar1 = 0;
  if (0xffffcfff < param_2 - 0x3001) {
    uVar3 = 0;
    uVar2 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    do {
      if (param_2 == uVar2) {
LAB_1000aa88:
        if (uVar3 == 0) {
          return 0;
        }
        if (uVar3 == 1 && (uVar10 & 0xff) == 0x2e) {
          return 0;
        }
        if ((uVar3 == 2 && (uVar10 & 0xff) == 0x2e) && ((uVar8 & 0xff) == 0x2e)) {
          return 0;
        }
        uVar3 = 0;
        if (param_2 != uVar2) goto joined_r0x1000aad0;
        uVar2 = param_2;
      }
      else {
        uVar4 = (uint)*(byte *)(param_1 + uVar2);
        if (uVar4 == 0x25) {
          if (param_2 - uVar2 < 3) {
            return 0;
          }
          uVar5 = (uint)((byte *)(param_1 + uVar2))[1];
          uVar9 = uVar5 - 0x30;
          if (9 < uVar9) {
            if (uVar5 - 0x41 < 6) {
              uVar9 = uVar5 - 0x37;
            }
            else {
              uVar9 = 0xffffffff;
              if (uVar5 - 0x61 < 6) {
                uVar9 = uVar5 - 0x57;
              }
            }
          }
          uVar7 = uVar2 + 2;
          uVar6 = (uint)*(byte *)(param_1 + uVar7);
          uVar4 = uVar6 - 0x30;
          if (9 < uVar4) {
            if (uVar6 - 0x41 < 6) {
              uVar4 = uVar6 - 0x37;
            }
            else {
              uVar4 = 0xffffffff;
              if (uVar6 - 0x61 < 6) {
                uVar4 = uVar6 - 0x57;
              }
            }
          }
          uVar6 = uVar6 - 0x61;
          bVar12 = uVar6 < 6;
          if (!bVar12) {
            uVar6 = uVar5 - 0x61;
          }
          if (bVar12 || uVar6 < 6) {
            return 0;
          }
          if ((int)uVar9 < 0 || (int)uVar4 < 0) {
            return 0;
          }
          uVar4 = uVar4 | uVar9 << 4;
          if ((uVar4 - 0x7f & 0xff) < 0xa1) {
            uVar2 = uVar7;
          }
          else {
            if (uVar4 == 0x5c) {
              uVar2 = uVar7;
            }
            if (uVar4 == 0x25) {
              uVar2 = uVar7;
            }
            else if (uVar4 != 0x5c) {
              return 0;
            }
          }
        }
        else {
          if (uVar4 == 0x5c) goto LAB_1000aa88;
          if (0x5e < (uVar4 - 0x20 & 0xff)) {
            return 0;
          }
        }
        uVar5 = uVar3 + 1;
        if (0xff < uVar5) {
          return 0;
        }
        if (uVar3 == 0) {
          uVar10 = uVar4;
        }
        bVar12 = uVar3 == 1;
        uVar3 = uVar5;
        if (bVar12) {
          uVar8 = uVar4;
        }
joined_r0x1000aad0:
        uVar11 = uVar11 + 1;
        if (0x1000 < uVar11) {
          return 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= param_2);
    uVar1 = 1;
  }
  return uVar1;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac0c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_1000ac0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     ((_DAT_4001084c != (code *)0x0 &&
      (puVar1 = (undefined4 *)(*_DAT_4001084c)(0x10), puVar1 != (undefined4 *)0x0)))) {
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[1] = param_1;
    *puVar1 = 0;
    return puVar1;
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
    (*_DAT_40010850)(param_2);
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
     (_DAT_40010850 != (code *)0x0)) {
    (*_DAT_40010850)(param_3);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
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
 * Address: 0x1000ad44
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ad44(int *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (CARRY4(param_1[1],param_3)) {
    return 0;
  }
  uVar3 = param_1[2];
  uVar5 = param_1[1] + param_3;
  if (uVar3 < uVar5) {
    if (uVar3 == 0) {
      uVar3 = 0x100;
    }
    uVar4 = uVar3;
    if (uVar3 < uVar5) {
      do {
        if ((int)uVar4 < 0) {
          uVar3 = uVar5;
          break;
        }
        uVar3 = uVar4 << 1;
        uVar1 = uVar4 * 2;
        uVar4 = uVar3;
      } while (uVar1 < uVar5);
    }
    if (_DAT_40010800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_40010804 == 0) {
      return 0;
    }
    if (_DAT_40010808 < 0x58) {
      return 0;
    }
    if (_DAT_40010854 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_40010854)(*param_1,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
    *param_1 = iVar2;
    param_1[2] = uVar3;
  }
  if (param_3 != 0) {
    recovered_10002dc0((undefined8 *)(*param_1 + param_1[1]),param_2,(undefined8 *)param_3);
  }
  param_1[1] = uVar5;
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010854
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010854

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109d4
#define DAT_400109d4 (*(uint8_t *)(0x400109d4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400109d4
#define _DAT_400109d4 (*(code * *)(0x400109d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ae6c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x1d7 < _DAT_40010808)) &&
     (_DAT_400109d4 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000aef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400109d4)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109d4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400109d4

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_4001088c
#define DAT_4001088c (*(uint8_t *)(0x4001088cU))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef DAT_400108dc
#define DAT_400108dc (*(uint8_t *)(0x400108dcU))
#undef DAT_40010a18
#define DAT_40010a18 (*(uint8_t *)(0x40010a18U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_4001088c
#define _DAT_4001088c (*(code * *)(0x4001088cU))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef _DAT_400108dc
#define _DAT_400108dc (*(code * *)(0x400108dcU))
#undef _DAT_40010a18
#define _DAT_40010a18 (*(code * *)(0x40010a18U))
#undef str_1000bf9c
#define str_1000bf9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x870U)))
#undef str_1000bfca
#define str_1000bfca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89eU)))
#define local_2c (*(undefined4 (*)[11])(pf_stack_frame + 20))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aefc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_1000aefc(undefined4 param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;

  iVar5 = 1;
  do {
    cVar1 = *(char *)(param_2 + iVar5);
    if (cVar1 == '\\' || cVar1 == '\0') {
      *(undefined1 *)(param_2 + iVar5) = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x21b < _DAT_40010808)) &&
         (_DAT_40010a18 != (code *)0x0)) {
        iVar2 = (*_DAT_40010a18)(param_1,param_2,local_2c);
        if (iVar2 != 0) goto LAB_1000b0fc;
LAB_1000b064:
        if (param_3 == 0) {
          pcVar4 = (char *)0x0;
          uVar3 = 1;
        }
        else {
          if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
            bVar6 = _DAT_40010808 == 0xc;
            if (0xb < _DAT_40010808) {
              bVar6 = _DAT_40010808 == 0xdf;
            }
            if (_DAT_40010808 < 0xdf || bVar6) goto LAB_1000b098;
            if (_DAT_400108dc == (code *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (*_DAT_400108dc)(param_1,param_2);
            }
          }
          else {
LAB_1000b098:
            iVar2 = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x8f < _DAT_40010808))
               && (_DAT_4001088c != (code *)0x0)) {
              iVar2 = (*_DAT_4001088c)(param_2);
            }
          }
          uVar3 = (uint)(iVar2 != 0);
          pcVar4 = str_1000bfca;
          if (iVar2 != 0) {
            pcVar4 = (char *)0x0;
          }
        }
      }
      else {
        if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
          bVar6 = _DAT_40010808 == 0xc;
          if (0xb < _DAT_40010808) {
            bVar6 = _DAT_40010808 == 0xcb;
          }
          if (_DAT_40010808 < 0xcb || bVar6) goto LAB_1000afb0;
          if (_DAT_400108c8 == (code *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (*_DAT_400108c8)(param_1,param_2,local_2c);
          }
        }
        else {
LAB_1000afb0:
          iVar2 = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x37 < _DAT_40010808 && (_DAT_40010834 != (code *)0x0)))) {
            iVar2 = (*_DAT_40010834)(param_2,local_2c);
          }
        }
        local_2c[0] = 0;
        if (iVar2 == 0) goto LAB_1000b064;
LAB_1000b0fc:
        pcVar4 = str_1000bf9c;
        if ((local_24 & 2) != 0) {
          pcVar4 = (char *)0x0;
        }
        uVar3 = (local_24 & 3) >> 1;
      }
      *(char *)(param_2 + iVar5) = cVar1;
      if (cVar1 == '\0' || uVar3 == 0) {
        return pcVar4;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_4001088c
#undef DAT_400108c8
#undef DAT_400108dc
#undef DAT_40010a18
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_4001088c
#undef _DAT_400108c8
#undef _DAT_400108dc
#undef _DAT_40010a18
#undef str_1000bf9c
#undef str_1000bfca
#undef local_2c
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b17c
 */

uint recovered_1000b17c(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;

  uVar5 = 0x811c9dc5;
  if (param_2 != 0) {
    iVar4 = param_2;
    pbVar6 = param_1;
    do {
      uVar3 = (uint)*pbVar6;
      uVar1 = uVar3;
      if ((uVar3 - 0x41 & 0xff) < 0x1a) {
        uVar1 = uVar3 | 0x20;
      }
      if (param_6 == 0) {
        uVar1 = uVar3;
      }
      iVar4 = iVar4 + -1;
      uVar5 = (uVar5 ^ uVar1) * 0x1000193;
      pbVar6 = pbVar6 + 1;
    } while (iVar4 != 0);
  }
  do {
    uVar5 = uVar5 & param_5 - 1U;
    iVar4 = *(int *)(param_4 + uVar5 * 4);
    if (iVar4 == 0) {
      return uVar5;
    }
    iVar4 = param_3 + iVar4 * 0x18;
    if (*(int *)(iVar4 + -0x10) == param_2) {
      iVar2 = 0;
      if (param_2 != 0) {
        do {
          uVar1 = (uint)param_1[iVar2];
          if (param_6 == 0) {
            if (uVar1 != *(byte *)(*(int *)(iVar4 + -0x18) + iVar2)) break;
          }
          else {
            uVar3 = (uint)*(byte *)(*(int *)(iVar4 + -0x18) + iVar2);
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 != uVar3) break;
          }
          iVar2 = iVar2 + 1;
          if (param_2 == iVar2) {
            return uVar5;
          }
        } while( true );
      }
      if (iVar2 == param_2) {
        return uVar5;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000b290(int param_1,int param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  byte bVar10;

  puVar8 = (undefined8 *)0x0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     ((_DAT_4001084c != (code *)0x0 &&
      (puVar1 = (undefined8 *)(*_DAT_4001084c)(param_3 + 1), puVar1 != (undefined8 *)0x0)))) {
    if (param_3 != 0) {
      uVar5 = 0;
LAB_1000b350:
      bVar6 = *(byte *)(param_2 + uVar5);
      if ((param_4 != 0) || (bVar6 != 0x25)) {
        bVar10 = bVar6;
        if (param_4 == 0) goto LAB_1000b40c;
        goto switchD_1000b430_caseD_23;
      }
      bVar6 = ((byte *)(param_2 + uVar5))[1];
      cVar9 = bVar6 - 0x30U;
      if (9 < (byte)(bVar6 - 0x30U)) {
        if ((byte)(bVar6 + 0xbf) < 6) {
          cVar9 = bVar6 - 0x37;
        }
        else {
          cVar9 = -1;
          if ((byte)(bVar6 + 0x9f) < 6) {
            cVar9 = bVar6 + 0xa9;
          }
        }
      }
      uVar5 = uVar5 + 2;
      bVar10 = *(byte *)(param_2 + uVar5);
      bVar6 = bVar10 - 0x30U;
      if (9 < (byte)(bVar10 - 0x30U)) {
        if ((byte)(bVar10 + 0xbf) < 6) {
          bVar6 = bVar10 - 0x37;
        }
        else {
          bVar6 = 0xff;
          if ((byte)(bVar10 + 0x9f) < 6) {
            bVar6 = bVar10 + 0xa9;
          }
        }
      }
      bVar6 = bVar6 | cVar9 << 4;
LAB_1000b40c:
      if (bVar6 < 0x20) goto switchD_1000b430_caseD_22;
      switch((uintptr_t)(bVar6)) {
      case 0x22:
      case 0x2a:
      case 0x2f:
      case 0x3a:
      case 0x3c:
      case 0x3e:
      case 0x3f:
        break;
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3b:
      case 0x3d:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto switchD_1000b430_caseD_23;
      case 0x5c:
        if (bVar10 == 0x5c) goto switchD_1000b430_caseD_23;
        break;
      default:
        if (bVar6 != 0x7c) goto switchD_1000b430_caseD_23;
      }
switchD_1000b430_caseD_22:
      if (_DAT_40010800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_40010804 == 0) {
        return 0;
      }
      if (_DAT_40010808 < 0x54) {
        return 0;
      }
      if (_DAT_40010850 == (code *)0x0) {
        return 0;
      }
      goto LAB_1000b6a4;
    }
LAB_1000b568:
    puVar7 = (undefined8 *)0x0;
    *(undefined1 *)((int)puVar1 + (int)puVar8) = 0;
    puVar2 = (undefined8 *)recovered_10003e84(param_1);
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (*(char *)(param_1 + -1 + (int)puVar2) != '\\') {
          puVar7 = puVar2;
          break;
        }
        puVar2 = (undefined8 *)((int)puVar2 + -1);
      } while (puVar2 != (undefined8 *)0x0);
    }
    puVar2 = (undefined8 *)0x0;
    if (((((uint)puVar7 >> 0xc < 3) && (puVar8 <= (undefined8 *)(0x2fffU - (int)puVar7))) &&
        (_DAT_40010800 == 0x50414d57)) &&
       (((_DAT_40010804 != 0 && (0x4f < _DAT_40010808)) && (_DAT_4001084c != (code *)0x0)))) {
      puVar4 = (undefined8 *)(*_DAT_4001084c)((int)puVar7 + (int)puVar8 + 2);
      if (puVar4 != (undefined8 *)0x0) {
        recovered_10002dc0(puVar4,(undefined8 *)param_1,puVar7);
        *(undefined1 *)((int)puVar4 + (int)puVar7) = 0x5c;
        recovered_10002dc0((undefined8 *)((undefined1 *)((int)puVar4 + (int)puVar7) + 1),puVar1,
                           puVar8);
        *(undefined1 *)((int)puVar4 + (int)puVar7 + (int)puVar8 + 1) = 0;
        puVar2 = puVar4;
      }
    }
    puVar8 = puVar2;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
      (*_DAT_40010850)(puVar1);
    }
    if ((puVar8 != (undefined8 *)0x0) && (param_4 != 0)) {
      iVar3 = recovered_10003e84((int)puVar8);
      iVar3 = recovered_1000aa20((int)puVar8 + 1,iVar3 - 1);
      if (iVar3 == 0) {
        if (_DAT_40010800 != 0x50414d57) {
          return 0;
        }
        if (_DAT_40010804 == 0) {
          return 0;
        }
        if (_DAT_40010808 < 0x54) {
          return 0;
        }
        puVar1 = puVar8;
        if (_DAT_40010850 == (code *)0x0) {
          return 0;
        }
LAB_1000b6a4:
        (*_DAT_40010850)(puVar1);
        return 0;
      }
    }
  }
  return (uint)puVar8;
switchD_1000b430_caseD_23:
  *(byte *)((int)puVar1 + (int)puVar8) = bVar6;
  uVar5 = uVar5 + 1;
  puVar8 = (undefined8 *)((int)puVar8 + 1);
  if (param_3 <= uVar5) goto LAB_1000b568;
  goto LAB_1000b350;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_40010850
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_40010850
