/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d50
 */

uint recovered_10001d50(uint param_1,uint param_2)

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
 * Address: 0x10001da0
 */

uint recovered_10001da0(uint param_1,uint param_2)

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
 * Address: 0x10001dd8
 */

uint recovered_10001dd8(uint param_1,uint param_2)

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
 * Address: 0x10001e48
 */

uint recovered_10001e48(uint param_1,uint param_2)

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
 * Address: 0x10001eb4
 */

undefined8 recovered_10001eb4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10005658(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec4
 */

undefined8 recovered_10001ec4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10005598(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed4
 */

float recovered_10001ed4(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100056e0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef0
 */

float recovered_10001ef0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10005728(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10020040
#define DAT_10020040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1468U)))
#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f10
 */

void recovered_10001f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_10020040 = 0;
  recovered_10001f9c();
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020040
#undef DAT_10020048

#undef DAT_10020040
#define DAT_10020040 (*(char *)(((uintptr_t)pf_module_state + 0x1468U)))
#undef DAT_10020044
#define DAT_10020044 (*(int *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_1002004c
#define DAT_1002004c (*(int *)(((uintptr_t)pf_module_state + 0x1474U)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x40010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x4001008cU))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x40010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x4001008cU))
#define local_24 (*(int *)(pf_stack_frame + 156))
#define local_ac (*(uint (*)[43])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f9c(void)

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
  if (DAT_10020040 != '\0') {
    return;
  }
  DAT_10020044 = 0;
  DAT_1002004c = 0;
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
        if (iVar11 == 0) goto LAB_1000219c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_100070c8((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_10020044 != 0) goto LAB_100021cc;
    }
  }
LAB_1000219c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_100070c8((int *)0x300000,piVar4,&local_24);
LAB_100021cc:
  if (DAT_1002004c == 0) {
    DAT_1002004c = DAT_10020044;
  }
  DAT_10020040 = 1;
  return;
}

#undef DAT_10020040
#undef DAT_10020044
#undef DAT_1002004c
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_24
#undef local_ac

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000221c
 */

bool recovered_1000221c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10002298(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return bVar1;
}

#undef DAT_10020048

#undef DAT_10020044
#define DAT_10020044 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_1002004c
#define DAT_1002004c (*(int * *)(((uintptr_t)pf_module_state + 0x1474U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002298
 */

bool recovered_10002298(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10001f9c();
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
        piVar1 = DAT_10020044;
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
      piVar3 = (int *)&DAT_10020044;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_100070c8((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_1002004c == (int *)0x0) {
        DAT_1002004c = DAT_10020044;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_10020044
#undef DAT_1002004c
#undef DAT_68000000
#undef local_24

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024e0
 */

void recovered_100024e0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  recovered_10002298(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020048
#undef local_14
#undef local_10

#undef DAT_10020044
#define DAT_10020044 (*(uint * *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002578
 */

int recovered_10002578(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001f9c();
  iVar1 = 0;
  puVar3 = DAT_10020044;
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
  DAT_10020048 = 0;
  return iVar1;
}

#undef DAT_10020044
#undef DAT_10020048

#undef DAT_10020044
#define DAT_10020044 (*(int *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002628
 */

void recovered_10002628(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001f9c();
  for (iVar1 = DAT_10020044; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020044
#undef DAT_10020048

#undef DAT_10020044
#define DAT_10020044 (*(int * *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e4
 */

int recovered_100026e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001f9c();
  iVar1 = 0;
  for (piVar3 = DAT_10020044; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return iVar1;
}

#undef DAT_10020044
#undef DAT_10020048

#undef DAT_10020044
#define DAT_10020044 (*(int *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000278c
 */

void recovered_1000278c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001f9c();
  for (iVar1 = DAT_10020044; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020044
#undef DAT_10020048

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000283c
 */

void recovered_1000283c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_100028c0(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020048

#undef DAT_10020044
#define DAT_10020044 (*(uint * *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_1002004c
#define DAT_1002004c (*(uint * *)(((uintptr_t)pf_module_state + 0x1474U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c0
 */

uint * recovered_100028c0(int param_1,uint *param_2,uint *param_3)

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
    recovered_10001f9c();
    puVar4 = DAT_10020044;
    puVar5 = DAT_1002004c;
    if (DAT_1002004c == (uint *)0x0) {
      puVar5 = DAT_10020044;
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
              if (uVar7 < uVar8) goto joined_r0x100029a0;
            }
          }
          else {
joined_r0x100029a0:
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
LAB_10002a98:
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
                    DAT_1002004c = DAT_10020044;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_1002004c = puVar4;
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
                      puVar2 = recovered_100072c8(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10002a98;
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

#undef DAT_10020044
#undef DAT_1002004c

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b18
 */

void recovered_10002b18(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_100028c0(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020048

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba0
 */

uint * recovered_10002ba0(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_100028c0(param_1,(uint *)param_2,(uint *)param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return puVar2;
}

#undef DAT_10020048

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

void recovered_10002c30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10002cac(param_1);
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return;
}

#undef DAT_10020048

#undef DAT_1002004c
#define DAT_1002004c (*(uint * *)(((uintptr_t)pf_module_state + 0x1474U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cac
 */

void recovered_10002cac(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10001f9c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_1002004c == puVar1) {
        DAT_1002004c = puVar4;
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
          if (DAT_1002004c == puVar4) {
            DAT_1002004c = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_1002004c = puVar4;
  return;
}

#undef DAT_1002004c

#undef DAT_10020048
#define DAT_10020048 (*(int *)(((uintptr_t)pf_module_state + 0x1470U)))
#undef DAT_1002004c
#define DAT_1002004c (*(uint * *)(((uintptr_t)pf_module_state + 0x1474U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e18
 */

undefined8 * recovered_10002e18(undefined8 *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10020048 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x1470U));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x1470U),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = recovered_100028c0(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_1000304c;
  }
  if (param_2 == 0) {
    recovered_10002cac((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_1000304c;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_1000304c;
  recovered_10001f9c();
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
          DAT_1002004c = (uint *)((int)param_1 + (int)puVar12);
          *DAT_1002004c = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = *(uint *)((int)param_1 + -0xc);
          *(undefined1 *)(DAT_1002004c + 3) = 1;
          DAT_1002004c[2] = (uint)puVar6;
          DAT_1002004c[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_1002004c;
          }
          *(uint **)((int)param_1 + -0xc) = DAT_1002004c;
          *(uint **)(param_1 + -2) = puVar12;
          puVar3 = (uint *)param_1;
        }
      }
    }
    goto LAB_1000304c;
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
      puVar3 = DAT_1002004c;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_1002004c = puVar6;
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
        iVar4 = recovered_1000734c(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_1002004c = *(uint **)((int)param_1 + -0xc);
        }
        *(undefined1 *)((int)param_1 + -4) = 0;
        puVar3 = (uint *)param_1;
      }
      goto LAB_1000304c;
    }
  }
  puVar7 = recovered_100028c0((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_1000304c;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = (uint *)param_1;
  if (puVar12 < &SupervisorCall) {
LAB_1000311c:
    if (puVar12 != (uint *)0x0) goto LAB_10003124;
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
            if (uVar14 == uVar11) goto LAB_10003304;
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
LAB_10003304:
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
          if (uVar14 == uVar11) goto LAB_1000311c;
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
      goto LAB_1000311c;
    }
LAB_10003124:
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
      if (puVar12 == puVar13) goto LAB_10003180;
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
LAB_10003180:
  recovered_10002cac((int)param_1);
  puVar3 = puVar7;
LAB_1000304c:
  DataMemoryBarrier(0xb);
  DAT_10020048 = 0;
  return (undefined8 *)puVar3;
}

#undef DAT_10020048
#undef DAT_1002004c
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b8
 */

longlong recovered_100033b8(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000340c
 */

ulonglong recovered_1000340c(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10003460
 */

undefined8 recovered_10003460(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100034ac
 */

undefined8 recovered_100034ac(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003590
 */

undefined8 recovered_10003590(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003610
 */

undefined8 recovered_10003610(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003728
 */

undefined8 recovered_10003728(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100037e4
 */

void recovered_100037e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037ec
 */

int recovered_100037ec(int param_1)

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
 * Address: 0x100037f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100037f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10003848. Too many branches */
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
 * Address: 0x1000384c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000384c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10003898. Too many branches */
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
 * Address: 0x1000389c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000389c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x57 < _DAT_40010808)) &&
     (_DAT_40010854 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100038ec. Too many branches */
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
 * Address: 0x100038f0
 */

void recovered_100038f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000392c;
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
          if (uVar9 == uVar7) goto LAB_10003ac0;
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
LAB_10003ac0:
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
        if (uVar7 == uVar9) goto LAB_10003924;
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
LAB_10003924:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_1000392c:
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
 * Address: 0x10003b74
 */

void recovered_10003b74(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    goto LAB_10003bbc;
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
          if (puVar7 == param_3) goto LAB_10003e48;
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
LAB_10003e48:
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
        if (param_3 == puVar7) goto LAB_10003ec4;
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
LAB_10003ec4:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_10003bbc:
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
    goto LAB_10003c38;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_10003ed4:
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
          goto LAB_10003ed4;
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
        if (uVar8 == uVar10) goto LAB_10003fb0;
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
LAB_10003fb0:
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
      if (uVar10 == uVar8) goto LAB_1000406c;
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
LAB_1000406c:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10003c38:
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
 * Address: 0x10004080
 */

void recovered_10004080(byte *param_1,byte param_2,uint param_3)

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
  if (param_3 < 8) goto joined_r0x10004208;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10004120:
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
        if (uVar5 == uVar6) goto joined_r0x100041ac;
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
      goto joined_r0x10004120;
    }
  }
joined_r0x100041ac:
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
      if (uVar6 == uVar5) goto joined_r0x10004208;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x10004208:
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
 * Address: 0x10004280
 */

void recovered_10004280(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10004400;
  if (((uint)param_1 & 3) == 0) {
joined_r0x1000431c:
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
        if (uVar7 == uVar8) goto joined_r0x100043a0;
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
      goto joined_r0x1000431c;
    }
  }
joined_r0x100043a0:
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
      if (uVar7 == uVar8) goto joined_r0x10004400;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10004400:
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
 * Address: 0x1000447c
 */

void recovered_1000447c(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100045fc;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10004518:
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
        if (uVar7 == uVar8) goto joined_r0x1000459c;
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
      goto joined_r0x10004518;
    }
  }
joined_r0x1000459c:
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
      if (uVar7 == uVar8) goto joined_r0x100045fc;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100045fc:
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
 * Address: 0x10004678
 */

char * recovered_10004678(char *param_1,char param_2,int param_3)

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
 * Address: 0x100046ac
 */

int recovered_100046ac(uint *param_1,uint *param_2,uint param_3)

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
LAB_100047a4:
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
      if (uVar5 != uVar6) goto LAB_1000489c;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_1000489c;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_1000489c;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_1000489c;
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
LAB_100047d4:
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
      if (uVar5 != uVar6) goto LAB_100047d4;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_100048a4((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_100047a4;
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
LAB_1000489c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a4
 */

int recovered_100048a4(byte *param_1,byte *param_2)

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
 * Address: 0x100048f4
 */

bool recovered_100048f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004908
 */

bool recovered_10004908(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000491c
 */

bool recovered_1000491c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004934
 */

bool recovered_10004934(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004960
 */

bool recovered_10004960(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

bool recovered_10004980(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004994
 */

int recovered_10004994(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049a4
 */

int recovered_100049a4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049b4
 */

int recovered_100049b4(int param_1)

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
 * Address: 0x100049dc
 */

int recovered_100049dc(byte *param_1,byte *param_2)

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
LAB_10004a14:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10004a14;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a20
 */

int recovered_10004a20(byte *param_1,byte *param_2)

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
LAB_10004a58:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10004a58;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a64
 */

void recovered_10004a64(int param_1,int param_2)

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
 * Address: 0x10004a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10004a80(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10004b48;
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
          if (uVar8 == uVar11) goto LAB_10004cdc;
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
LAB_10004cdc:
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
        if (uVar11 == uVar8) goto LAB_10004b40;
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
LAB_10004b40:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10004b48:
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
 * Address: 0x10004d94
 */

char * recovered_10004d94(char *param_1,char param_2)

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
 * Address: 0x10004dc8
 */

int recovered_10004dc8(char *param_1,char *param_2)

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
 * Address: 0x10004e2c
 */

int recovered_10004e2c(char *param_1,char *param_2)

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
 * Address: 0x10004e94
 */

char * recovered_10004e94(char *param_1,char *param_2)

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
 * Address: 0x10004ef4
 */

char * recovered_10004ef4(char *param_1,char *param_2)

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


#undef DAT_1001ebfc
#define DAT_1001ebfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f58
 */

undefined * recovered_10004f58(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1001ebfc;
}

#undef DAT_1001ebfc

#undef PTR_DAT_10020008
#define PTR_DAT_10020008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1430U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f68
 */

undefined ** recovered_10004f68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10020008;
}

#undef PTR_DAT_10020008

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
 * Address: 0x10004f78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004f78(undefined4 *param_1)

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
 * Address: 0x10005028
 */

double recovered_10005028(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x1000506c
 */

double recovered_1000506c(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10005124
 */

double recovered_10005124(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x1000515c
 */

double recovered_1000515c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100051dc
 */

double recovered_100051dc(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000520c
 */

double recovered_1000520c(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10005250
 */

double recovered_10005250(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100053c8
#define DAT_100053c8 (*(double *)(0x100053c8U))
#undef DAT_100053d0
#define DAT_100053d0 (*(double *)(0x100053d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005298
 */

double recovered_10005298(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100053c8
#undef DAT_100053d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d8
 */

undefined8 recovered_100053d8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10005598(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_10005498
#define DAT_10005498 (*(double *)(0x10005498U))
#undef DAT_100054a0
#define DAT_100054a0 (*(double *)(0x100054a0U))
#undef DAT_100054a8
#define DAT_100054a8 (*(double *)(0x100054a8U))
#undef DAT_100054b0
#define DAT_100054b0 (*(double *)(0x100054b0U))
#undef DAT_100054b8
#define DAT_100054b8 (*(double *)(0x100054b8U))
#undef DAT_100054c0
#define DAT_100054c0 (*(double *)(0x100054c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005408
 */

double recovered_10005408(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10005498
#undef DAT_100054a0
#undef DAT_100054a8
#undef DAT_100054b0
#undef DAT_100054b8
#undef DAT_100054c0

#undef DAT_10005550
#define DAT_10005550 (*(double *)(0x10005550U))
#undef DAT_10005558
#define DAT_10005558 (*(double *)(0x10005558U))
#undef DAT_10005560
#define DAT_10005560 (*(double *)(0x10005560U))
#undef DAT_10005568
#define DAT_10005568 (*(double *)(0x10005568U))
#undef DAT_10005570
#define DAT_10005570 (*(double *)(0x10005570U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c8
 */

double recovered_100054c8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10005550
#undef DAT_10005558
#undef DAT_10005560
#undef DAT_10005568
#undef DAT_10005570

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005578
 */

double recovered_10005578(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10005650
#define DAT_10005650 (*(double *)(0x10005650U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005598
 */

undefined8 recovered_10005598(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10005650

#undef DAT_100056d8
#define DAT_100056d8 (*(double *)(0x100056d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005658
 */

undefined8 recovered_10005658(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100056d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e0
 */

double recovered_100056e0(uint param_1,uint param_2)

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
 * Address: 0x10005728
 */

double recovered_10005728(uint param_1,uint param_2)

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


#undef DAT_100057f8
#define DAT_100057f8 (*(float *)(0x100057f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057b8
 */

float recovered_100057b8(float param_1,float param_2)

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

#undef DAT_100057f8

#undef DAT_100058b4
#define DAT_100058b4 (*(float *)(0x100058b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057fc
 */

float recovered_100057fc(float param_1,float *param_2)

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

#undef DAT_100058b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058b8
 */

float recovered_100058b8(float param_1,uint param_2)

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


#undef DAT_10005988
#define DAT_10005988 (*(float *)(0x10005988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005904
 */

float recovered_10005904(float param_1,float param_2)

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

#undef DAT_10005988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000598c
 */

float recovered_1000598c(float param_1)

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
 * Address: 0x100059c4
 */

float recovered_100059c4(float param_1)

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
 * Address: 0x10005a10
 */

double recovered_10005a10(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10005a64
 */

float recovered_10005a64(float param_1)

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


#undef DAT_10005b14
#define DAT_10005b14 (*(float *)(0x10005b14U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

float recovered_10005ac0(float param_1)

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

#undef DAT_10005b14

#undef DAT_10005c50
#define DAT_10005c50 (*(double *)(0x10005c50U))
#undef DAT_10005c58
#define DAT_10005c58 (*(float *)(0x10005c58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b18
 */

float recovered_10005b18(float param_1)

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

#undef DAT_10005c50
#undef DAT_10005c58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c5c
 */

void recovered_10005c5c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10005598(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_10005d28
#define DAT_10005d28 (*(double *)(0x10005d28U))
#undef DAT_10005d30
#define DAT_10005d30 (*(double *)(0x10005d30U))
#undef DAT_10005d38
#define DAT_10005d38 (*(double *)(0x10005d38U))
#undef DAT_10005d40
#define DAT_10005d40 (*(double *)(0x10005d40U))
#undef DAT_10005d48
#define DAT_10005d48 (*(double *)(0x10005d48U))
#undef DAT_10005d50
#define DAT_10005d50 (*(double *)(0x10005d50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c90
 */

float recovered_10005c90(float param_1)

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

#undef DAT_10005d28
#undef DAT_10005d30
#undef DAT_10005d38
#undef DAT_10005d40
#undef DAT_10005d48
#undef DAT_10005d50

#undef DAT_10005de8
#define DAT_10005de8 (*(double *)(0x10005de8U))
#undef DAT_10005df0
#define DAT_10005df0 (*(double *)(0x10005df0U))
#undef DAT_10005df8
#define DAT_10005df8 (*(double *)(0x10005df8U))
#undef DAT_10005e00
#define DAT_10005e00 (*(double *)(0x10005e00U))
#undef DAT_10005e08
#define DAT_10005e08 (*(double *)(0x10005e08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d58
 */

float recovered_10005d58(float param_1)

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

#undef DAT_10005de8
#undef DAT_10005df0
#undef DAT_10005df8
#undef DAT_10005e00
#undef DAT_10005e08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

float recovered_10005e10(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e2c
 */

int recovered_10005e2c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10005f80
 */

int recovered_10005f80(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10005ffc;
  }
  bVar2 = false;
joined_r0x10005ffc:
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
 * Address: 0x100060e0
 */

double recovered_100060e0(byte *param_1,undefined4 *param_2)

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
      goto LAB_100061cc;
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
LAB_100061cc:
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
 * Address: 0x100062b4
 */

float recovered_100062b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *in_r0;
  undefined4 *in_r1;
  double dVar1;

  dVar1 = recovered_100060e0(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1001ebfe
#define DAT_1001ebfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_1001ec08
#define str_1001ec08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1001ec19
#define str_1001ec19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062d0
 */

int recovered_100062d0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10006350:
  while( true ) {
    pcVar6 = str_1001ec19;
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
LAB_10006370:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10006390;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_100063fc;
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
LAB_100063fc:
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
      goto LAB_10006428;
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
LAB_10006428:
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
switchD_100065fc_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10006eb0;
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
      goto LAB_100068cc;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_100068cc:
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
      local_60[-iVar7] = str_1001ec19[uVar11 + uVar12 * -10];
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
      goto LAB_10006eb0;
    }
    break;
  default:
    goto switchD_100065fc_caseD_4a;
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
      pcVar6 = str_1001ec08;
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
    goto LAB_10006eb0;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10006370;
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
                      goto LAB_10006da4;
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
LAB_10006da4:
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
        local_60[-iVar7] = str_1001ec19[uVar10 + uVar12 * -10];
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
LAB_10006d6c:
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
                    goto LAB_10006d6c;
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
    goto LAB_10006350;
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
      local_60[iVar7] = str_1001ec19[uVar10 & 0xf];
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
    goto LAB_10006350;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10006350;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1001ebfe;
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
      goto LAB_10006dc8;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10006dc8;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10006dc8:
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
      local_60[-iVar7] = str_1001ec19[uVar11 + uVar12 * -10];
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
LAB_10006eb0:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10006350;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10006350;
code_r0x10006390:
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
  goto LAB_10006350;
}

#undef DAT_1001ebfe
#undef str_1001ec08
#undef str_1001ec19
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_10007098(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_100062d0(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10020044
#define DAT_10020044 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x146cU)))
#undef DAT_1002004c
#define DAT_1002004c (*(int * *)(((uintptr_t)pf_module_state + 0x1474U)))
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
 * Address: 0x100070c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100070c8(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_10020044 != 0;
          puVar4 = &DAT_10020044;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_1002004c;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_1002004c = piVar3;
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
      puVar4 = &DAT_10020044;
      if (DAT_10020044 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_1002004c;
      goto LAB_100072ac;
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
      bVar7 = DAT_10020044 != 0;
      puVar4 = &DAT_10020044;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_1002004c;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_100072ac:
      if (piVar5 == (int *)0x0) {
        DAT_1002004c = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10020044
#undef DAT_1002004c
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072c8
 */

uint * recovered_100072c8(uint *param_1,uint *param_2)

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
 * Address: 0x1000734c
 */

undefined4 recovered_1000734c(uint *param_1,int param_2)

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


#undef DAT_10008720
#define DAT_10008720 (*(uint64_t *)(0x10008720U))
#undef DAT_10008728
#define DAT_10008728 (*(uint64_t *)(0x10008728U))
#undef DAT_10008730
#define DAT_10008730 (*(uint64_t *)(0x10008730U))
#undef DAT_10008738
#define DAT_10008738 (*(uint64_t *)(0x10008738U))
#undef DAT_10008740
#define DAT_10008740 (*(uint64_t *)(0x10008740U))
#undef DAT_10008748
#define DAT_10008748 (*(uint64_t *)(0x10008748U))
#undef DAT_10008750
#define DAT_10008750 (*(uint64_t *)(0x10008750U))
#undef DAT_10008758
#define DAT_10008758 (*(uint64_t *)(0x10008758U))
#undef DAT_10008760
#define DAT_10008760 (*(uint64_t *)(0x10008760U))
#undef DAT_10008768
#define DAT_10008768 (*(uint64_t *)(0x10008768U))
#undef DAT_10008770
#define DAT_10008770 (*(uint64_t *)(0x10008770U))
#undef DAT_10008778
#define DAT_10008778 (*(uint64_t *)(0x10008778U))
#undef DAT_1001ec07
#define DAT_1001ec07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1001ecc6
#define DAT_1001ecc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef DAT_1001ecd1
#define DAT_1001ecd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf9U)))
#undef DAT_1001ed67
#define DAT_1001ed67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1001edc5
#define DAT_1001edc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1edU)))
#undef DAT_1001eddc
#define DAT_1001eddc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef DAT_1001f24b
#define DAT_1001f24b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x673U)))
#undef DAT_10020050
#define DAT_10020050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1478U)))
#undef DAT_10020054
#define DAT_10020054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x147cU)))
#undef DAT_10020058
#define DAT_10020058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1480U)))
#undef DAT_1002005c
#define DAT_1002005c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1484U)))
#undef DAT_10020060
#define DAT_10020060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1488U)))
#undef DAT_10020064
#define DAT_10020064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x148cU)))
#undef DAT_10020068
#define DAT_10020068 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1490U)))
#undef DAT_1002006c
#define DAT_1002006c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1494U)))
#undef DAT_10020184
#define DAT_10020184 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15acU)))
#undef DAT_10020188
#define DAT_10020188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15b0U)))
#undef DAT_10020190
#define DAT_10020190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15b8U)))
#undef DAT_100204f5
#define DAT_100204f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191dU)))
#undef DAT_100208a0
#define DAT_100208a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc8U)))
#undef DAT_100208a1
#define DAT_100208a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cc9U)))
#undef DAT_100208a2
#define DAT_100208a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccaU)))
#undef DAT_100208a3
#define DAT_100208a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccbU)))
#undef DAT_100208a8
#define DAT_100208a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cd0U)))
#undef DAT_100208ac
#define DAT_100208ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cd4U)))
#undef DAT_100208b0
#define DAT_100208b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cd8U)))
#undef DAT_100208c4
#define DAT_100208c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cecU)))
#undef DAT_10020ace
#define DAT_10020ace (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef6U)))
#undef DAT_10020acf
#define DAT_10020acf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ef7U)))
#undef DAT_10020bd0
#define DAT_10020bd0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ff8U)))
#undef DAT_10020bd4
#define DAT_10020bd4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ffcU)))
#undef DAT_10020bd8
#define DAT_10020bd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2000U)))
#undef DAT_10020bdc
#define DAT_10020bdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2004U)))
#undef DAT_10020be0
#define DAT_10020be0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2008U)))
#undef DAT_10020be1
#define DAT_10020be1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2009U)))
#undef DAT_10020de4
#define DAT_10020de4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x220cU)))
#undef DAT_10020de8
#define DAT_10020de8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2210U)))
#undef DAT_10020dec
#define DAT_10020dec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2214U)))
#undef DAT_10020df4
#define DAT_10020df4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x221cU)))
#undef DAT_10020df8
#define DAT_10020df8 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x2220U)))
#undef DAT_10020dfa
#define DAT_10020dfa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2222U)))
#undef DAT_10020dfb
#define DAT_10020dfb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2223U)))
#undef DAT_10020dfc
#define DAT_10020dfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2224U)))
#undef DAT_10020e00
#define DAT_10020e00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10020e04
#define DAT_10020e04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_10020e08
#define DAT_10020e08 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10020e0c
#define DAT_10020e0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10020e14
#define DAT_10020e14 (*(uint * *)(((uintptr_t)pf_module_state + 0x223cU)))
#undef DAT_10020e18
#define DAT_10020e18 (*(int *)(((uintptr_t)pf_module_state + 0x2240U)))
#undef DAT_10020f44
#define DAT_10020f44 (*(int *)(((uintptr_t)pf_module_state + 0x236cU)))
#undef DAT_10021680
#define DAT_10021680 (*(int *)(((uintptr_t)pf_module_state + 0x2aa8U)))
#undef DAT_10021998
#define DAT_10021998 (*(int *)(((uintptr_t)pf_module_state + 0x2dc0U)))
#undef DAT_1002199d
#define DAT_1002199d (*(char *)(((uintptr_t)pf_module_state + 0x2dc5U)))
#undef DAT_10021ba0
#define DAT_10021ba0 (*(char * *)(((uintptr_t)pf_module_state + 0x2fc8U)))
#undef DAT_10021ba4
#define DAT_10021ba4 (*(int *)(((uintptr_t)pf_module_state + 0x2fccU)))
#undef DAT_10021ba8
#define DAT_10021ba8 (*(int *)(((uintptr_t)pf_module_state + 0x2fd0U)))
#undef DAT_10021bb0
#define DAT_10021bb0 (*(char * *)(((uintptr_t)pf_module_state + 0x2fd8U)))
#undef DAT_10021bb4
#define DAT_10021bb4 (*(ushort *)(((uintptr_t)pf_module_state + 0x2fdcU)))
#undef DAT_10021bb6
#define DAT_10021bb6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fdeU)))
#undef DAT_10021bb7
#define DAT_10021bb7 (*(char *)(((uintptr_t)pf_module_state + 0x2fdfU)))
#undef DAT_10021bbc
#define DAT_10021bbc (*(uint *)(((uintptr_t)pf_module_state + 0x2fe4U)))
#undef DAT_10021bc8
#define DAT_10021bc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ff0U)))
#undef DAT_10021bd0
#define DAT_10021bd0 (*(uint * *)(((uintptr_t)pf_module_state + 0x2ff8U)))
#undef DAT_10021bd4
#define DAT_10021bd4 (*(int *)(((uintptr_t)pf_module_state + 0x2ffcU)))
#undef DAT_10021d00
#define DAT_10021d00 (*(int *)(((uintptr_t)pf_module_state + 0x3128U)))
#undef DAT_1002243c
#define DAT_1002243c (*(int *)(((uintptr_t)pf_module_state + 0x3864U)))
#undef DAT_10022754
#define DAT_10022754 (*(int *)(((uintptr_t)pf_module_state + 0x3b7cU)))
#undef DAT_10022759
#define DAT_10022759 (*(char *)(((uintptr_t)pf_module_state + 0x3b81U)))
#undef DAT_1002295c
#define DAT_1002295c (*(char * *)(((uintptr_t)pf_module_state + 0x3d84U)))
#undef DAT_10022960
#define DAT_10022960 (*(int *)(((uintptr_t)pf_module_state + 0x3d88U)))
#undef DAT_10022964
#define DAT_10022964 (*(int *)(((uintptr_t)pf_module_state + 0x3d8cU)))
#undef DAT_1002296c
#define DAT_1002296c (*(char * *)(((uintptr_t)pf_module_state + 0x3d94U)))
#undef DAT_10022970
#define DAT_10022970 (*(ushort *)(((uintptr_t)pf_module_state + 0x3d98U)))
#undef DAT_10022972
#define DAT_10022972 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d9aU)))
#undef DAT_10022973
#define DAT_10022973 (*(char *)(((uintptr_t)pf_module_state + 0x3d9bU)))
#undef DAT_10022978
#define DAT_10022978 (*(uint *)(((uintptr_t)pf_module_state + 0x3da0U)))
#undef DAT_10022984
#define DAT_10022984 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dacU)))
#undef DAT_1002298c
#define DAT_1002298c (*(uint * *)(((uintptr_t)pf_module_state + 0x3db4U)))
#undef DAT_10022990
#define DAT_10022990 (*(int *)(((uintptr_t)pf_module_state + 0x3db8U)))
#undef DAT_10022abc
#define DAT_10022abc (*(int *)(((uintptr_t)pf_module_state + 0x3ee4U)))
#undef DAT_100231f8
#define DAT_100231f8 (*(int *)(((uintptr_t)pf_module_state + 0x4620U)))
#undef DAT_10023510
#define DAT_10023510 (*(int *)(((uintptr_t)pf_module_state + 0x4938U)))
#undef DAT_10023515
#define DAT_10023515 (*(char *)(((uintptr_t)pf_module_state + 0x493dU)))
#undef DAT_10023718
#define DAT_10023718 (*(char * *)(((uintptr_t)pf_module_state + 0x4b40U)))
#undef DAT_1002371c
#define DAT_1002371c (*(int *)(((uintptr_t)pf_module_state + 0x4b44U)))
#undef DAT_10023720
#define DAT_10023720 (*(int *)(((uintptr_t)pf_module_state + 0x4b48U)))
#undef DAT_10023728
#define DAT_10023728 (*(char * *)(((uintptr_t)pf_module_state + 0x4b50U)))
#undef DAT_1002372c
#define DAT_1002372c (*(ushort *)(((uintptr_t)pf_module_state + 0x4b54U)))
#undef DAT_1002372e
#define DAT_1002372e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b56U)))
#undef DAT_1002372f
#define DAT_1002372f (*(char *)(((uintptr_t)pf_module_state + 0x4b57U)))
#undef DAT_10023734
#define DAT_10023734 (*(uint *)(((uintptr_t)pf_module_state + 0x4b5cU)))
#undef DAT_10023740
#define DAT_10023740 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4b68U)))
#undef DAT_10023742
#define DAT_10023742 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b6aU)))
#undef DAT_10023743
#define DAT_10023743 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b6bU)))
#undef DAT_10023782
#define DAT_10023782 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4baaU)))
#undef DAT_10023802
#define DAT_10023802 (*(char *)(((uintptr_t)pf_module_state + 0x4c2aU)))
#undef DAT_10023804
#define DAT_10023804 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4c2cU)))
#undef DAT_10023808
#define DAT_10023808 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4c30U)))
#undef DAT_1002380c
#define DAT_1002380c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4c34U)))
#undef DAT_10023810
#define DAT_10023810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c38U)))
#undef DAT_10023910
#define DAT_10023910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d38U)))
#undef DAT_1002391a
#define DAT_1002391a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d42U)))
#undef DAT_10023950
#define DAT_10023950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d78U)))
#undef DAT_10023970
#define DAT_10023970 (*(char *)(((uintptr_t)pf_module_state + 0x4d98U)))
#undef DAT_10023974
#define DAT_10023974 (*(int *)(((uintptr_t)pf_module_state + 0x4d9cU)))
#undef DAT_10023978
#define DAT_10023978 (*(char *)(((uintptr_t)pf_module_state + 0x4da0U)))
#undef DAT_1002397c
#define DAT_1002397c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4da4U)))
#undef DAT_1002398c
#define DAT_1002398c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4db4U)))
#undef DAT_10023990
#define DAT_10023990 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
#undef DAT_10023998
#define DAT_10023998 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc0U)))
#undef DAT_100239a4
#define DAT_100239a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dccU)))
#undef DAT_100239ac
#define DAT_100239ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dd4U)))
#undef DAT_100239b4
#define DAT_100239b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#undef DAT_100239bc
#define DAT_100239bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4de4U)))
#undef DAT_100239c0
#define DAT_100239c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4de8U)))
#undef DAT_100239c4
#define DAT_100239c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4decU)))
#undef DAT_100239c6
#define DAT_100239c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4deeU)))
#undef DAT_100239cb
#define DAT_100239cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df3U)))
#undef DAT_100239d4
#define DAT_100239d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dfcU)))
#undef DAT_100239dc
#define DAT_100239dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e04U)))
#undef DAT_100239e4
#define DAT_100239e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e0cU)))
#undef DAT_10023a4c
#define DAT_10023a4c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e74U)))
#undef DAT_10023ab4
#define DAT_10023ab4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4edcU)))
#undef DAT_10023b1c
#define DAT_10023b1c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f44U)))
#undef DAT_10023b84
#define DAT_10023b84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4facU)))
#undef DAT_10023bec
#define DAT_10023bec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5014U)))
#undef DAT_10023c54
#define DAT_10023c54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507cU)))
#undef DAT_10023cbc
#define DAT_10023cbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50e4U)))
#undef DAT_10023d24
#define DAT_10023d24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x514cU)))
#undef DAT_10023d8c
#define DAT_10023d8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51b4U)))
#undef DAT_10023df4
#define DAT_10023df4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x521cU)))
#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e62
#define DAT_10023e62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528aU)))
#undef DAT_10023e63
#define DAT_10023e63 (*(byte *)(((uintptr_t)pf_module_state + 0x528bU)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023ed8
#define DAT_10023ed8 (*(int *)(((uintptr_t)pf_module_state + 0x5300U)))
#undef DAT_10023edc
#define DAT_10023edc (*(uint *)(((uintptr_t)pf_module_state + 0x5304U)))
#undef DAT_10023ee8
#define DAT_10023ee8 (*(uint *)(((uintptr_t)pf_module_state + 0x5310U)))
#undef DAT_10023eec
#define DAT_10023eec (*(uint *)(((uintptr_t)pf_module_state + 0x5314U)))
#undef DAT_10023ef0
#define DAT_10023ef0 (*(uint *)(((uintptr_t)pf_module_state + 0x5318U)))
#undef DAT_10023ef4
#define DAT_10023ef4 (*(uint *)(((uintptr_t)pf_module_state + 0x531cU)))
#undef DAT_10023ef8
#define DAT_10023ef8 (*(int *)(((uintptr_t)pf_module_state + 0x5320U)))
#undef DAT_10023efc
#define DAT_10023efc (*(int *)(((uintptr_t)pf_module_state + 0x5324U)))
#undef DAT_10023f00
#define DAT_10023f00 (*(uint *)(((uintptr_t)pf_module_state + 0x5328U)))
#undef DAT_10023f04
#define DAT_10023f04 (*(uint *)(((uintptr_t)pf_module_state + 0x532cU)))
#undef DAT_10024f08
#define DAT_10024f08 (*(uint *)(((uintptr_t)pf_module_state + 0x6330U)))
#undef DAT_10024f0c
#define DAT_10024f0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6334U)))
#undef DAT_10024f0d
#define DAT_10024f0d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6335U)))
#undef DAT_10024f0e
#define DAT_10024f0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6336U)))
#undef DAT_10024f0f
#define DAT_10024f0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6337U)))
#undef DAT_10024f10
#define DAT_10024f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6338U)))
#undef DAT_10024f11
#define DAT_10024f11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6339U)))
#undef DAT_10024f12
#define DAT_10024f12 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633aU)))
#undef DAT_10024f13
#define DAT_10024f13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633bU)))
#undef DAT_10024f14
#define DAT_10024f14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633cU)))
#undef DAT_10024f15
#define DAT_10024f15 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633dU)))
#undef DAT_10024f16
#define DAT_10024f16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633eU)))
#undef DAT_10024f17
#define DAT_10024f17 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633fU)))
#undef DAT_10024f18
#define DAT_10024f18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6340U)))
#undef DAT_10024f19
#define DAT_10024f19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6341U)))
#undef DAT_10024f1a
#define DAT_10024f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6342U)))
#undef DAT_10024f1b
#define DAT_10024f1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6343U)))
#undef DAT_10024f1c
#define DAT_10024f1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6344U)))
#undef DAT_10024f1d
#define DAT_10024f1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6345U)))
#undef DAT_10024f1e
#define DAT_10024f1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6346U)))
#undef DAT_10024f1f
#define DAT_10024f1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6347U)))
#undef DAT_10024f20
#define DAT_10024f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6348U)))
#undef DAT_10024f21
#define DAT_10024f21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6349U)))
#undef DAT_10024f22
#define DAT_10024f22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x634aU)))
#undef DAT_10024f23
#define DAT_10024f23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x634bU)))
#undef DAT_10024f24
#define DAT_10024f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x634cU)))
#undef DAT_10024f25
#define DAT_10024f25 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x634dU)))
#undef DAT_10024f26
#define DAT_10024f26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x634eU)))
#undef DAT_10024f27
#define DAT_10024f27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x634fU)))
#undef DAT_10024f28
#define DAT_10024f28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6350U)))
#undef DAT_10024f29
#define DAT_10024f29 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6351U)))
#undef DAT_10024f2a
#define DAT_10024f2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6352U)))
#undef DAT_10024f2b
#define DAT_10024f2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6353U)))
#undef DAT_10024f2c
#define DAT_10024f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6354U)))
#undef DAT_10024f4b
#define DAT_10024f4b (*(byte *)(((uintptr_t)pf_module_state + 0x6373U)))
#undef DAT_10024f4c
#define DAT_10024f4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6374U)))
#undef DAT_10024f50
#define DAT_10024f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6378U)))
#undef DAT_10024f80
#define DAT_10024f80 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x63a8U)))
#undef DAT_10024f84
#define DAT_10024f84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63acU)))
#undef DAT_10024fd0
#define DAT_10024fd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x63f8U)))
#undef DAT_100250cc
#define DAT_100250cc (*(uint *)(((uintptr_t)pf_module_state + 0x64f4U)))
#undef DAT_100250d0
#define DAT_100250d0 (*(uint *)(((uintptr_t)pf_module_state + 0x64f8U)))
#undef DAT_100250d8
#define DAT_100250d8 (*(uint *)(((uintptr_t)pf_module_state + 0x6500U)))
#undef DAT_100250dc
#define DAT_100250dc (*(int *)(((uintptr_t)pf_module_state + 0x6504U)))
#undef DAT_100250e0
#define DAT_100250e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6508U)))
#undef DAT_100250e4
#define DAT_100250e4 (*(uint *)(((uintptr_t)pf_module_state + 0x650cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010820
#define DAT_40010820 (*(uint8_t *)(0x40010820U))
#undef DAT_40010828
#define DAT_40010828 (*(uint8_t *)(0x40010828U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef DAT_40010894
#define DAT_40010894 (*(uint8_t *)(0x40010894U))
#undef DAT_40010898
#define DAT_40010898 (*(uint8_t *)(0x40010898U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef DAT_400108f8
#define DAT_400108f8 (*(uint8_t *)(0x400108f8U))
#undef DAT_40010924
#define DAT_40010924 (*(uint8_t *)(0x40010924U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef DAT_40010974
#define DAT_40010974 (*(uint8_t *)(0x40010974U))
#undef DAT_400109fc
#define DAT_400109fc (*(uint8_t *)(0x400109fcU))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(uint *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(uint *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010820
#define _DAT_40010820 (*(code * *)(0x40010820U))
#undef _DAT_40010828
#define _DAT_40010828 (*(code * *)(0x40010828U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
#undef _DAT_40010830
#define _DAT_40010830 (*(code * *)(0x40010830U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_40010894
#define _DAT_40010894 (*(code * *)(0x40010894U))
#undef _DAT_40010898
#define _DAT_40010898 (*(code * *)(0x40010898U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
#undef _DAT_400108f8
#define _DAT_400108f8 (*(code * *)(0x400108f8U))
#undef _DAT_40010924
#define _DAT_40010924 (*(code * *)(0x40010924U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#undef _DAT_40010974
#define _DAT_40010974 (*(code * *)(0x40010974U))
#undef _DAT_400109fc
#define _DAT_400109fc (*(code * *)(0x400109fcU))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef str_1001ec2a
#define str_1001ec2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52U)))
#undef str_1001ec3e
#define str_1001ec3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66U)))
#undef str_1001ec6c
#define str_1001ec6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94U)))
#undef str_1001ec93
#define str_1001ec93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbU)))
#undef str_1001ecc8
#define str_1001ecc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1001ecd5
#define str_1001ecd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfdU)))
#undef str_1001ed00
#define str_1001ed00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_1001ed07
#define str_1001ed07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12fU)))
#undef str_1001ed44
#define str_1001ed44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#undef str_1001ed52
#define str_1001ed52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_1001ed6a
#define str_1001ed6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
#undef str_1001ed7a
#define str_1001ed7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a2U)))
#undef str_1001ed9a
#define str_1001ed9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_1001edca
#define str_1001edca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f2U)))
#undef str_1001edd3
#define str_1001edd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_1001ede1
#define str_1001ede1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x209U)))
#undef str_1001ede9
#define str_1001ede9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_1001edf1
#define str_1001edf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x219U)))
#undef str_1001edf9
#define str_1001edf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x221U)))
#undef str_1001ee00
#define str_1001ee00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x228U)))
#undef str_1001ee09
#define str_1001ee09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#undef str_1001ee14
#define str_1001ee14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_1001ee1d
#define str_1001ee1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#undef str_1001ee2a
#define str_1001ee2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x252U)))
#undef str_1001ee32
#define str_1001ee32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25aU)))
#undef str_1001ee66
#define str_1001ee66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28eU)))
#undef str_1001ee9d
#define str_1001ee9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c5U)))
#undef str_1001eedf
#define str_1001eedf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x307U)))
#undef str_1001ef28
#define str_1001ef28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x350U)))
#undef str_1001ef49
#define str_1001ef49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1001ef66
#define str_1001ef66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38eU)))
#undef str_1001ef81
#define str_1001ef81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#undef str_1001efaa
#define str_1001efaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d2U)))
#undef str_1001efce
#define str_1001efce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_1001effe
#define str_1001effe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x426U)))
#undef str_1001f01b
#define str_1001f01b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x443U)))
#undef str_1001f02c
#define str_1001f02c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x454U)))
#undef str_1001f036
#define str_1001f036 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45eU)))
#undef str_1001f077
#define str_1001f077 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49fU)))
#undef str_1001f09c
#define str_1001f09c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_1001f0ba
#define str_1001f0ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e2U)))
#undef str_1001f0cf
#define str_1001f0cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f7U)))
#undef str_1001f0fd
#define str_1001f0fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
#undef str_1001f171
#define str_1001f171 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x599U)))
#undef str_1001f189
#define str_1001f189 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b1U)))
#undef str_1001f1aa
#define str_1001f1aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d2U)))
#undef str_1001f1b0
#define str_1001f1b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d8U)))
#undef str_1001f1c4
#define str_1001f1c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ecU)))
#undef str_1001f1ea
#define str_1001f1ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x612U)))
#undef str_1001f1fa
#define str_1001f1fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x622U)))
#undef str_1001f211
#define str_1001f211 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x639U)))
#undef str_1001f21f
#define str_1001f21f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x647U)))
#undef str_1001f22e
#define str_1001f22e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x656U)))
#undef str_1001f250
#define str_1001f250 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x678U)))
#undef str_1001f259
#define str_1001f259 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x681U)))
#undef str_1001f262
#define str_1001f262 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68aU)))
#undef str_1001f27f
#define str_1001f27f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a7U)))
#undef str_1001f711
#define str_1001f711 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb39U)))
#undef str_1001f71d
#define str_1001f71d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb45U)))
#undef str_1001f73c
#define str_1001f73c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb64U)))
#undef str_1001f744
#define str_1001f744 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6cU)))
#undef str_1001f750
#define str_1001f750 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb78U)))
#undef str_1001f9ee
#define str_1001f9ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe16U)))
#undef str_1001fc94
#define str_1001fc94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10bcU)))
#define local_444 (*(char * *)(pf_stack_frame + 28))
#define local_438 (*(uint *)(pf_stack_frame + 40))
#define local_434 (*(uint *)(pf_stack_frame + 44))
#define local_40c (*(undefined8 * *)(pf_stack_frame + 84))
#define local_408 (*(undefined8 * *)(pf_stack_frame + 88))
#define local_400 (*(undefined8 *)(pf_stack_frame + 96))
#define local_3f8 (*(undefined1 (*)[1016])(pf_stack_frame + 104))
#define local_3f4 (*(char * *)(pf_stack_frame + 108))
#define local_3f0 (*(uint *)(pf_stack_frame + 112))
#define local_3e8 (*(undefined1 *)(pf_stack_frame + 120))
#define local_3e7 (*(undefined1 *)(pf_stack_frame + 121))
#define local_3e6 (*(undefined1 *)(pf_stack_frame + 122))
#define local_3e5 (*(undefined1 *)(pf_stack_frame + 123))
#define local_3e4 (*(undefined1 *)(pf_stack_frame + 124))
#define local_3e3 (*(undefined1 *)(pf_stack_frame + 125))
#define local_3e2 (*(undefined1 *)(pf_stack_frame + 126))
#define local_3e1 (*(undefined1 *)(pf_stack_frame + 127))
#define local_3e0 (*(undefined1 *)(pf_stack_frame + 128))
#define local_3d8 (*(undefined8 *)(pf_stack_frame + 136))
#define local_3d0 (*(undefined1 *)(pf_stack_frame + 144))
#define local_3c8 (*(undefined1 *)(pf_stack_frame + 152))
#define local_3c7 (*(undefined1 *)(pf_stack_frame + 153))
#define local_3c6 (*(undefined1 *)(pf_stack_frame + 154))
#define local_3c5 (*(undefined1 *)(pf_stack_frame + 155))
#define local_3c4 (*(undefined1 *)(pf_stack_frame + 156))
#define local_3c3 (*(undefined1 *)(pf_stack_frame + 157))
#define local_3c2 (*(undefined1 *)(pf_stack_frame + 158))
#define local_3c1 (*(undefined1 *)(pf_stack_frame + 159))
#define local_3c0 (*(undefined2 *)(pf_stack_frame + 160))
#define local_3bc (*(undefined4 *)(pf_stack_frame + 164))
#define local_398 (*(int *)(pf_stack_frame + 200))
#define local_380 (*(char (*)[896])(pf_stack_frame + 224))
#define local_338 (*(int *)(pf_stack_frame + 296))
#define local_200 (*(byte *)(pf_stack_frame + 608))
#define local_1ff (*(undefined1 *)(pf_stack_frame + 609))
#define local_1fe (*(undefined1 *)(pf_stack_frame + 610))
#define local_1fd (*(undefined1 *)(pf_stack_frame + 611))
#define local_1fc (*(undefined1 *)(pf_stack_frame + 612))
#define local_1fb (*(undefined1 *)(pf_stack_frame + 613))
#define local_1fa (*(undefined1 *)(pf_stack_frame + 614))
#define local_1f9 (*(undefined1 *)(pf_stack_frame + 615))
#define local_1f8 (*(undefined1 *)(pf_stack_frame + 616))
#define local_1f7 (*(undefined1 *)(pf_stack_frame + 617))
#define local_1f6 (*(undefined1 *)(pf_stack_frame + 618))
#define local_1f5 (*(undefined1 *)(pf_stack_frame + 619))
#define local_1f4 (*(undefined1 *)(pf_stack_frame + 620))
#define local_1f3 (*(undefined1 *)(pf_stack_frame + 621))
#define local_1f2 (*(undefined1 *)(pf_stack_frame + 622))
#define local_1f1 (*(undefined1 *)(pf_stack_frame + 623))
#define local_1f0 (*(undefined1 *)(pf_stack_frame + 624))
#define local_1ef (*(undefined1 *)(pf_stack_frame + 625))
#define local_1ee (*(undefined1 *)(pf_stack_frame + 626))
#define local_1ed (*(undefined1 *)(pf_stack_frame + 627))
#define local_1ec (*(undefined1 *)(pf_stack_frame + 628))
#define local_1eb (*(undefined1 *)(pf_stack_frame + 629))
#define local_1ea (*(undefined1 *)(pf_stack_frame + 630))
#define local_1e9 (*(undefined1 *)(pf_stack_frame + 631))
#define local_1e8 (*(undefined1 *)(pf_stack_frame + 632))
#define local_1e7 (*(undefined1 *)(pf_stack_frame + 633))
#define local_1e6 (*(undefined1 *)(pf_stack_frame + 634))
#define local_1e5 (*(undefined1 *)(pf_stack_frame + 635))
#define local_1e4 (*(undefined1 *)(pf_stack_frame + 636))
#define local_1e3 (*(undefined1 *)(pf_stack_frame + 637))
#define local_1e2 (*(undefined1 *)(pf_stack_frame + 638))
#define local_1e1 (*(byte *)(pf_stack_frame + 639))
#define local_1e0 (*(undefined1 *)(pf_stack_frame + 640))
#define local_1df (*(undefined1 *)(pf_stack_frame + 641))
#define local_1de (*(undefined1 *)(pf_stack_frame + 642))
#define local_1dd (*(undefined1 *)(pf_stack_frame + 643))
#define local_1dc (*(undefined1 *)(pf_stack_frame + 644))
#define local_1db (*(undefined1 *)(pf_stack_frame + 645))
#define local_1da (*(undefined1 *)(pf_stack_frame + 646))
#define local_1d9 (*(undefined1 *)(pf_stack_frame + 647))
#define local_1d8 (*(undefined1 *)(pf_stack_frame + 648))
#define local_1d7 (*(undefined1 *)(pf_stack_frame + 649))
#define local_1d6 (*(undefined1 *)(pf_stack_frame + 650))
#define local_1d5 (*(undefined1 *)(pf_stack_frame + 651))
#define local_1d4 (*(undefined1 *)(pf_stack_frame + 652))
#define local_1d3 (*(undefined1 *)(pf_stack_frame + 653))
#define local_1d2 (*(undefined1 *)(pf_stack_frame + 654))
#define local_1d1 (*(undefined1 *)(pf_stack_frame + 655))
#define local_1d0 (*(undefined1 *)(pf_stack_frame + 656))
#define local_1cf (*(undefined1 *)(pf_stack_frame + 657))
#define local_1ce (*(undefined1 *)(pf_stack_frame + 658))
#define local_1cd (*(undefined1 *)(pf_stack_frame + 659))
#define local_1cc (*(undefined1 *)(pf_stack_frame + 660))
#define local_1cb (*(undefined1 *)(pf_stack_frame + 661))
#define local_1ca (*(undefined1 *)(pf_stack_frame + 662))
#define local_1c9 (*(undefined1 *)(pf_stack_frame + 663))
#define local_1c8 (*(undefined1 *)(pf_stack_frame + 664))
#define local_1c7 (*(undefined1 *)(pf_stack_frame + 665))
#define local_1c6 (*(undefined1 *)(pf_stack_frame + 666))
#define local_1c5 (*(undefined1 *)(pf_stack_frame + 667))
#define local_1c4 (*(undefined1 *)(pf_stack_frame + 668))
#define local_1c3 (*(undefined1 *)(pf_stack_frame + 669))
#define local_1c2 (*(undefined1 *)(pf_stack_frame + 670))
#define local_1c1 (*(undefined1 *)(pf_stack_frame + 671))
#define local_140 (*(uint (*)[80])(pf_stack_frame + 800))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 928))
#define local_bc (*(undefined4 *)(pf_stack_frame + 932))
#define local_b8 (*(float *)(pf_stack_frame + 936))
#define local_b4 (*(char * *)(pf_stack_frame + 940))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 944))
#define local_ac (*(undefined4 *)(pf_stack_frame + 948))
#define local_a8 (*(undefined1 *)(pf_stack_frame + 952))
#define local_a7 (*(undefined1 *)(pf_stack_frame + 953))
#define local_a6 (*(undefined1 *)(pf_stack_frame + 954))
#define local_a5 (*(undefined1 *)(pf_stack_frame + 955))
#define local_a4 (*(undefined1 *)(pf_stack_frame + 956))
#define local_a3 (*(undefined1 *)(pf_stack_frame + 957))
#define local_a2 (*(undefined1 *)(pf_stack_frame + 958))
#define local_a1 (*(undefined1 *)(pf_stack_frame + 959))
#define local_40 (*(char (*)[64])(pf_stack_frame + 1056))
#define uStack_3ec (*(uint *)(pf_stack_frame + 116))
#define uStack_3df (*(undefined1 *)(pf_stack_frame + 129))
#define uStack_3de (*(undefined1 *)(pf_stack_frame + 130))
#define uStack_3dd (*(undefined1 *)(pf_stack_frame + 131))
#define uStack_3dc (*(undefined1 *)(pf_stack_frame + 132))
#define uStack_3db (*(undefined1 *)(pf_stack_frame + 133))
#define uStack_3da (*(undefined1 *)(pf_stack_frame + 134))
#define uStack_3d9 (*(undefined1 *)(pf_stack_frame + 135))
#define uStack_3cf (*(undefined1 *)(pf_stack_frame + 145))
#define uStack_3ce (*(undefined1 *)(pf_stack_frame + 146))
#define uStack_3cd (*(undefined1 *)(pf_stack_frame + 147))
#define uStack_3cc (*(undefined1 *)(pf_stack_frame + 148))
#define uStack_3cb (*(undefined1 *)(pf_stack_frame + 149))
#define uStack_3ca (*(undefined1 *)(pf_stack_frame + 150))
#define uStack_3c9 (*(undefined1 *)(pf_stack_frame + 151))
#define uStack_3be (*(undefined1 *)(pf_stack_frame + 162))
#define uStack_3bd (*(undefined1 *)(pf_stack_frame + 163))
#define auStack_3b8 (*(undefined8 (*)[119])(pf_stack_frame + 168))
#define auStack_300 (*(undefined8 (*)[96])(pf_stack_frame + 352))
#define auStack_1c0 (*(undefined1 (*)[448])(pf_stack_frame + 672))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073b0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100073b0(void)

{
  unsigned char pf_stack_frame[1152] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  longlong lVar3;
  ushort uVar4;
  undefined1 auVar5 [4];
  char cVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 extraout_r3 = 0;
  undefined1 *extraout_r3_00 = 0;
  undefined1 *extraout_r3_01 = 0;
  undefined1 *extraout_r3_02 = 0;
  undefined1 *extraout_r3_03 = 0;
  undefined1 *extraout_r3_04 = 0;
  undefined1 *puVar21;
  undefined1 *extraout_r3_05 = 0;
  undefined1 *extraout_r3_06 = 0;
  undefined1 *extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  undefined1 *extraout_r3_09 = 0;
  undefined1 *extraout_r3_10 = 0;
  undefined1 *extraout_r3_11 = 0;
  undefined1 *extraout_r3_12 = 0;
  undefined1 *extraout_r3_13 = 0;
  undefined4 extraout_r3_14 = 0;
  undefined4 extraout_r3_15 = 0;
  undefined4 extraout_r3_16 = 0;
  undefined1 *extraout_r3_17 = 0;
  undefined1 *extraout_r3_18 = 0;
  undefined4 extraout_r3_19 = 0;
  undefined4 extraout_r3_20 = 0;
  undefined4 extraout_r3_21 = 0;
  undefined4 extraout_r3_22 = 0;
  undefined4 extraout_r3_23 = 0;
  undefined4 extraout_r3_24 = 0;
  uint uVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  undefined8 *puVar30;
  byte bVar31;
  undefined8 *puVar32;
  undefined4 uVar33;
  undefined8 *puVar34;
  undefined4 uVar35;
  uint *puVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined8 uVar40;

  bVar39 = true;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x23 < _DAT_40010808)) &&
     (_DAT_40010820 != (code *)0x0)) {
    iVar26 = (*_DAT_40010820)(0xb1a2c,0xd8e6f2,0x1f);
    bVar39 = iVar26 == 0;
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(str_1001ec2a);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(&DAT_1001ed67);
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(str_1001ec3e);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(&DAT_1001ed67);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    (*_DAT_40010828)(&DAT_1001ec07);
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(&DAT_1001ed67);
  }
  recovered_10004080((byte *)&local_400,0,0x18);
  local_400 = CONCAT44(PF_PART4(local_400, 4),0x18);
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x16b < _DAT_40010808 && (_DAT_40010968 != (code *)0x0)))) {
    (*_DAT_40010968)(&local_400);
  }
  recovered_1000c340((int)&local_400,0x18);
  iVar26 = 0x40;
  do {
    recovered_10004080((byte *)&local_400,0,0x18);
    PF_PART4(local_400, 0) = 0x18;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x16b < _DAT_40010808 &&
        ((_DAT_40010968 != (code *)0x0 && (iVar8 = (*_DAT_40010968)(&local_400), iVar8 != 0)))))) {
      uVar22 = local_3f0;
    }
    else {
      uVar22 = 0;
    }
    local_400 = (ulonglong)uVar22;
    recovered_1000c340((int)&local_400,8);
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
       (_DAT_4001089c != (code *)0x0)) {
      (*_DAT_4001089c)();
    }
    iVar26 = iVar26 + -1;
  } while (iVar26 != 0);
  recovered_10004080((byte *)&local_400,0,0xa8);
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0xfb < _DAT_40010808 &&
      ((_DAT_400108f8 != (code *)0x0 && (iVar26 = (*_DAT_400108f8)(&local_400), iVar26 != 0)))))) {
    recovered_1000c340((int)&local_400,0xa8);
  }
  recovered_10004080((byte *)&local_400,0,0x18);
  PF_PART4(local_400, 0) = 0x18;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
     (_DAT_40010968 != (code *)0x0)) {
    (*_DAT_40010968)(&local_400);
  }
  recovered_1000c340((int)&local_400,0x18);
  uVar22 = 0;
  recovered_10004080((byte *)&local_400,0,0x18);
  PF_PART4(local_400, 0) = 0x18;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x16b < _DAT_40010808 &&
      ((_DAT_40010968 != (code *)0x0 && (iVar26 = (*_DAT_40010968)(&local_400), iVar26 != 0)))))) {
    uVar22 = local_3f0;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x177 < _DAT_40010808)) &&
     (_DAT_40010974 != (code *)0x0)) {
    (*_DAT_40010974)(250000);
  }
  uVar27 = 0;
  recovered_10004080((byte *)&local_400,0,0x18);
  PF_PART4(local_400, 0) = 0x18;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x16b < _DAT_40010808 &&
      ((_DAT_40010968 != (code *)0x0 && (iVar26 = (*_DAT_40010968)(&local_400), iVar26 != 0)))))) {
    uVar27 = local_3f0;
  }
  DAT_100250dc = 0;
  DAT_100250d8 = 0;
  DAT_100250cc = (uVar27 - uVar22) * 4;
  PF_PART4(local_400, 4) = uVar22;
  PF_PART4(local_400, 0) = uVar27;
  if (DAT_100250cc == 0) {
    DAT_100250cc = 0x12;
  }
  DAT_100250d0 = uVar27;
  recovered_1000c340((int)&local_400,8);
  recovered_10004080((byte *)&DAT_10023740,0,0x23c);
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9b < _DAT_40010808)) &&
     (_DAT_40010898 != (code *)0x0)) {
    (*_DAT_40010898)(str_1001ee66,0,0);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x9b < _DAT_40010808 && (_DAT_40010898 != (code *)0x0)))) {
    (*_DAT_40010898)(str_1001ee9d,0,0);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x9b < _DAT_40010808 && (_DAT_40010898 != (code *)0x0)))) {
    (*_DAT_40010898)(str_1001eedf,0,0);
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x1ff < _DAT_40010808)) &&
     ((_DAT_400109fc != (code *)0x0 && (iVar26 = (*_DAT_400109fc)(str_1001ed6a), iVar26 != 0)))) {
    pcVar7 = str_1001ed7a;
  }
  else {
    pcVar7 = str_1001ed9a;
  }
  recovered_1000b728(pcVar7,str_1001ed6a);
  uStack_3ec = 0;
  iVar26 = 0x16;
  local_3f0 = 0;
  PF_PART8(local_3f8,0) = 0;
  local_400 = 0;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x207 < _DAT_40010808 && (_DAT_40010a04 != (code *)0x0)))) {
    iVar8 = (*_DAT_40010a04)(&DAT_1001edc5,&local_400);
    iVar26 = 0x16;
    if (iVar8 != 0) {
      if ((uint)local_400 == 5) {
        iVar26 = PF_PART4(local_400, 4);
        if (PF_PART4(local_400, 4) != 0) {
          iVar26 = 1;
        }
      }
      else if ((uint)local_400 == 2) {
        iVar26 = (int)(float)PF_PART4(local_3f8, 0);
      }
      else if ((uint)local_400 == 1) {
        iVar26 = PF_PART4(local_400, 4);
      }
    }
  }
  iVar8 = 0x16;
  if (iVar26 - 1U < 0xffff) {
    iVar8 = iVar26;
  }
  DAT_10023740 = (ushort)iVar8;
  recovered_1000ca18(str_1001edca,&DAT_10023742,0x40,&DAT_1001ecc6);
  recovered_1000ca18(str_1001edd3,&DAT_10023782,0x80,&DAT_1001ecc6);
  uStack_3ec = 0;
  bVar37 = true;
  local_3f0 = 0;
  PF_PART8(local_3f8,0) = 0;
  local_400 = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x207 < _DAT_40010808)) &&
     ((_DAT_40010a04 != (code *)0x0 &&
      (iVar26 = (*_DAT_40010a04)(&DAT_1001eddc,&local_400), iVar26 != 0)))) {
    if (((uint)local_400 & 0xfffffffb) == 1) {
      bVar37 = PF_PART4(local_400, 4) != 0;
    }
    else if (((uint)local_400 == 3) && (local_3f4 != (char *)0x0)) {
      switch((uintptr_t)(*local_3f4)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        break;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        bVar37 = false;
        break;
      default:
        bVar37 = *local_3f4 == '1';
      }
    }
  }
  DAT_10023802 = bVar37;
  recovered_1000cc90(str_1001ede1,&DAT_10023804);
  recovered_1000cc90(str_1001ede9,&DAT_10023808);
  recovered_1000cc90(str_1001edf1,&DAT_1002380c);
  recovered_1000ca18(str_1001edf9,&DAT_10023810,0x100,&DAT_1001ec07);
  recovered_1000ca18(str_1001ee00,&DAT_10023910,0x40,str_1001ee09);
  recovered_1000ca18(str_1001ee14,(undefined1 *)&local_400,0x100,&DAT_1001ec07);
  uVar22 = recovered_100049b4((int)&local_400);
  if (0x3f < uVar22) {
    iVar26 = recovered_1000ce68((int)&local_400,(int)&local_c0);
    if (iVar26 != 0) {
      recovered_100038f0((undefined8 *)&DAT_10023950,(undefined8 *)&local_c0,(undefined8 *)0x20);
      DAT_10023970 = '\x01';
    }
    local_a8 = 0;
    local_a7 = 0;
    local_a6 = 0;
    local_a5 = 0;
    local_a4 = 0;
    local_a3 = 0;
    local_a2 = 0;
    local_a1 = 0;
  }
  bVar37 = false;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = (char *)0x0;
  local_b8 = 0.0;
  local_bc = 0;
  local_c0 = 0;
  iVar26 = 4;
  if ((((_DAT_40010800 == 0x50414d57) && (iVar26 = 4, _DAT_40010804 != 0)) &&
      (iVar26 = 4, 0xb < _DAT_40010808)) &&
     ((iVar26 = 4, 0x207 < _DAT_40010808 && (_DAT_40010a04 != (code *)0x0)))) {
    iVar8 = (*_DAT_40010a04)(str_1001ee1d,&local_c0);
    iVar26 = 4;
    if (iVar8 != 0) {
      if (local_c0 == 5) {
        iVar26 = local_bc;
        if (local_bc != 0) {
          iVar26 = 1;
        }
      }
      else if (local_c0 == 2) {
        iVar26 = (int)local_b8;
      }
      else {
        iVar26 = 4;
        if (local_c0 == 1) {
          iVar26 = local_bc;
        }
      }
    }
  }
  DAT_10023974 = 4;
  if (iVar26 - 1U < 4) {
    DAT_10023974 = iVar26;
  }
  local_ac = 0;
  local_b0 = 0;
  local_b4 = (char *)0x0;
  local_b8 = 0.0;
  local_bc = 0;
  local_c0 = 0;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x207 < _DAT_40010808 &&
      ((_DAT_40010a04 != (code *)0x0 &&
       (iVar26 = (*_DAT_40010a04)(str_1001ee2a,&local_c0), iVar26 != 0)))))) {
    if ((local_c0 & 0xfffffffb) == 1) {
      bVar37 = local_bc != 0;
    }
    else if ((local_c0 == 3) && (local_b4 != (char *)0x0)) {
      bVar37 = true;
      switch((uintptr_t)(*local_b4)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        break;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
        bVar37 = false;
        break;
      default:
        bVar37 = *local_b4 == '1';
      }
    }
  }
  DAT_10023978 = bVar37;
  if (DAT_10023742 == '\0') {
    recovered_100038f0((undefined8 *)&DAT_10023742,(undefined8 *)&DAT_1001ecc6,(undefined8 *)0x1);
    DAT_10023743 = 0;
  }
  if (DAT_10023910 == '\0') {
    recovered_100038f0((undefined8 *)&DAT_10023910,(undefined8 *)str_1001ee09,(undefined8 *)0xa);
    DAT_1002391a = 0;
  }
  if (DAT_10023802 == '\0' && DAT_10023804 == 0) {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
       (_DAT_40010828 != (code *)0x0)) {
      (*_DAT_40010828)(str_1001ee32);
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(&DAT_1001ed67);
    }
    DAT_10023802 = '\x01';
  }
  if ((DAT_10023808 == 0) && (DAT_10023804 != 0)) {
    DAT_10023808 = 0xffffff00;
  }
  if (DAT_10023970 == '\x01') {
    recovered_100038f0((undefined8 *)&DAT_10024f0c,(undefined8 *)&DAT_10023950,(undefined8 *)0x20);
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
       (_DAT_40010828 != (code *)0x0)) {
      (*_DAT_40010828)(str_1001ef28);
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
      (*_DAT_40010828)(&DAT_1001ed67);
    }
    recovered_10004080((byte *)&local_40c,0,0xc);
  }
  else {
    iVar26 = 0;
    recovered_10004080((byte *)&local_40c,0,0xc);
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
       (_DAT_40010834 != (code *)0x0)) {
      uVar40 = (*_DAT_40010834)(str_1001ef49,&local_40c);
      bVar37 = (int)uVar40 != 0;
      puVar9 = (undefined8 *)((ulonglong)uVar40 >> 0x20);
      if (bVar37) {
        puVar9 = local_40c;
      }
      if ((bVar37 && puVar9 != (undefined8 *)0x0) && ((undefined8 *)0x3f < local_408)) {
        puVar23 = local_408;
        if ((undefined8 *)0x4e < local_408) {
          puVar23 = (undefined8 *)0x4f;
        }
        recovered_100038f0(&local_400,puVar9,puVar23);
        *(undefined1 *)((int)&local_400 + (int)puVar23) = 0;
        iVar8 = recovered_1000ce68((int)&local_400,((uintptr_t)pf_module_state + 0x6334U));
        pcVar7 = str_1001ef81;
        if (iVar8 != 0) {
          pcVar7 = str_1001ef66;
        }
        recovered_1000b728(pcVar7,str_1001ef49);
        iVar19 = 0;
        do {
          *(undefined1 *)((int)&local_400 + iVar19) = 0;
          iVar19 = iVar19 + 1;
        } while (iVar19 != 0x50);
        if (iVar8 != 0) goto LAB_10008394;
      }
    }
    recovered_1000cff0(((uintptr_t)pf_module_state + 0x6334U),0x20);
    do {
      bVar31 = (&DAT_10024f0c)[iVar26];
      *(char *)((int)&local_400 + iVar26 * 2) = str_1001f01b[bVar31 >> 4];
      iVar8 = iVar26 * 2;
      iVar26 = iVar26 + 1;
      local_3f8[iVar8 + -7] = str_1001f01b[bVar31 & 0xf];
    } while (iVar26 != 0x20);
    local_3c0 = 10;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x3b < _DAT_40010808 &&
        ((_DAT_40010838 != (code *)0x0 &&
         (iVar26 = (*_DAT_40010838)(str_1001ef49,&local_400,0x41), iVar26 != 0)))))) {
      pcVar7 = str_1001efaa;
    }
    else {
      pcVar7 = str_1001efce;
    }
    recovered_1000b728(pcVar7,str_1001ef49);
  }
LAB_10008394:
  local_338 = 0;
  local_3f0 = (uint)(*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL});
  uStack_3ec = (uint)((ulonglong)(*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL}) >> 0x20);
  local_3e8 = (undefined1)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL});
  local_3e7 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 8);
  local_3e6 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 0x10);
  local_3e5 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 0x18);
  local_3e4 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 0x20);
  local_3e3 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 0x28);
  local_3e2 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 0x30);
  local_3e1 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}) >> 0x38);
  local_3e0 = (undefined1)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL});
  uStack_3df = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 8);
  uStack_3de = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 0x10);
  uStack_3dd = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 0x18);
  uStack_3dc = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 0x20);
  uStack_3db = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 0x28);
  uStack_3da = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 0x30);
  uStack_3d9 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}) >> 0x38);
  PF_PART1(local_3d8, 0) = (undefined1)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL});
  PF_PART1(local_3d8, 1) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 8);
  PF_PART1(local_3d8, 2) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 0x10);
  PF_PART1(local_3d8, 3) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 0x18);
  PF_PART1(local_3d8, 4) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 0x20);
  PF_PART1(local_3d8, 5) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 0x28);
  PF_PART1(local_3d8, 6) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 0x30);
  PF_PART1(local_3d8, 7) = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}) >> 0x38);
  local_3d0 = (undefined1)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL});
  uStack_3cf = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 8);
  uStack_3ce = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 0x10);
  uStack_3cd = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 0x18);
  uStack_3cc = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 0x20);
  uStack_3cb = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 0x28);
  uStack_3ca = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 0x30);
  uStack_3c9 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}) >> 0x38);
  local_3c8 = (undefined1)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL});
  local_3c7 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 8);
  local_3c6 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 0x10);
  local_3c5 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 0x18);
  local_3c4 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 0x20);
  local_3c3 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 0x28);
  local_3c2 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 0x30);
  local_3c1 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}) >> 0x38);
  local_3bc = 0;
  local_3c0 = 0x20;
  uStack_3be = 0;
  uStack_3bd = 0;
  local_400 = (*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
  PF_PART8(local_3f8,0) = (*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL});
  recovered_100038f0(auStack_3b8,(undefined8 *)&DAT_10024f0c,(undefined8 *)0x20);
  local_338 = local_338 + 0x20;
  if (local_338 == 0x80) {
    recovered_1000c530((uint *)&local_400,(int)auStack_3b8);
    local_338 = 0;
  }
  recovered_1000d760((undefined4 *)&local_400,&local_200);
  local_200 = local_200 & 0xf8;
  local_1e1 = local_1e1 & 0x3f | 0x40;
  recovered_1000dfa0((uint128 *)&local_400,(int)&local_200);
  recovered_100105dc((undefined8 *)auStack_1c0,auStack_300);
  recovered_1000e2e0(&local_c0,(int)&local_400,(uint128 *)auStack_1c0);
  recovered_1000e2e0(local_140,(int)local_380,(uint128 *)auStack_1c0);
  recovered_10010704(&DAT_10024f2c,local_140);
  recovered_10010704(local_40,&local_c0);
  DAT_10024f4b = DAT_10024f4b ^ local_40[0] << 7;
  local_200 = 0;
  local_1ff = 0;
  local_1fe = 0;
  local_1fd = 0;
  local_1fc = 0;
  local_1fb = 0;
  local_1fa = 0;
  local_1f9 = 0;
  local_1f8 = 0;
  local_1f7 = 0;
  local_1f6 = 0;
  local_1f5 = 0;
  local_1f4 = 0;
  local_1f3 = 0;
  local_1f2 = 0;
  local_1f1 = 0;
  local_1f0 = 0;
  local_1ef = 0;
  local_1ee = 0;
  local_1ed = 0;
  local_1ec = 0;
  local_1eb = 0;
  local_1ea = 0;
  local_1e9 = 0;
  local_1e8 = 0;
  local_1e7 = 0;
  local_1e6 = 0;
  local_1e5 = 0;
  local_1e4 = 0;
  local_1e3 = 0;
  local_1e2 = 0;
  local_1e1 = 0;
  local_1e0 = 0;
  local_1df = 0;
  local_1de = 0;
  local_1dd = 0;
  local_1dc = 0;
  local_1db = 0;
  local_1da = 0;
  local_1d9 = 0;
  local_1d8 = 0;
  local_1d7 = 0;
  local_1d6 = 0;
  local_1d5 = 0;
  local_1d4 = 0;
  local_1d3 = 0;
  local_1d2 = 0;
  local_1d1 = 0;
  local_1d0 = 0;
  local_1cf = 0;
  local_1ce = 0;
  local_1cd = 0;
  local_1cc = 0;
  local_1cb = 0;
  local_1ca = 0;
  local_1c9 = 0;
  local_1c8 = 0;
  local_1c7 = 0;
  local_1c6 = 0;
  local_1c5 = 0;
  local_1c4 = 0;
  local_1c3 = 0;
  local_1c2 = 0;
  local_1c1 = 0;
  puVar9 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0xe20U));
  puVar23 = (undefined8 *)&DAT_10024f4c;
  puVar32 = (undefined8 *)&UndefinedInstruction;
  PF_PART4(local_400, 0) =
       (int)puVar9 << 0x18 | ((uint)puVar9 >> 8 & 0xff) << 0x10 | ((uint)puVar9 >> 0x10 & 0xff) << 8
       | (uint)puVar9 >> 0x18;
  recovered_100038f0((undefined8 *)&DAT_10024f4c,&local_400,(undefined8 *)&UndefinedInstruction);
  if (puVar9 < (undefined8 *)0x30) {
    if (puVar9 != (undefined8 *)0x0) {
      recovered_100038f0((undefined8 *)&DAT_10024f50,
                         (undefined8 *)(str_1001f9ee + 10),puVar9);
      puVar32 = (undefined8 *)((int)puVar9 + 4);
      if ((undefined8 *)0x2b < puVar9) goto LAB_10008684;
    }
    PF_PART4(local_400, 0) = 0x20000000;
    recovered_100038f0((undefined8 *)((int)puVar32 + ((uintptr_t)pf_module_state + 0x6374U)),&local_400,
                       (undefined8 *)&UndefinedInstruction);
    puVar32 = puVar9 + 1;
    if (0x1f < (int)puVar9 - 0xcU) {
      recovered_100038f0((undefined8 *)((int)puVar9 + ((uintptr_t)pf_module_state + 0x637cU)),(undefined8 *)&DAT_10024f2c,
                         (undefined8 *)0x20);
      puVar32 = puVar9 + 5;
    }
  }
LAB_10008684:
  local_3f0 = (uint)(*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
  uStack_3ec = (uint)((ulonglong)(*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL}) >> 0x20);
  local_3e8 = (undefined1)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
  local_3e7 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 8);
  local_3e6 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 0x10);
  local_3e5 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 0x18);
  local_3e4 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 0x20);
  local_3e3 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 0x28);
  local_3e2 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 0x30);
  local_3e1 = (undefined1)((ulonglong)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL}) >> 0x38);
  uStack_3dc = 0;
  uStack_3db = 0;
  uStack_3da = 0;
  uStack_3d9 = 0;
  local_3e0 = SUB41(puVar32,0);
  uStack_3df = (undefined1)((uint)puVar32 >> 8);
  uStack_3de = (undefined1)((uint)puVar32 >> 0x10);
  uStack_3dd = (undefined1)((uint)puVar32 >> 0x18);
  local_400 = (*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
  PF_PART8(local_3f8,0) = (*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
  local_398 = 0;
  DAT_10024f80 = puVar32;
  do {
    puVar9 = (undefined8 *)(0x40 - local_398);
    if (puVar32 < (undefined8 *)(0x40 - local_398)) {
      puVar9 = puVar32;
    }
    recovered_100038f0((undefined8 *)((int)&local_3d8 + local_398),puVar23,puVar9);
    local_398 = local_398 + (int)puVar9;
    if (local_398 == 0x40) {
      recovered_10010ee4((uint *)&local_400,(int)&local_3d8);
      local_398 = 0;
    }
    puVar32 = (undefined8 *)((int)puVar32 - (int)puVar9);
    puVar23 = (undefined8 *)((int)puVar23 + (int)puVar9);
  } while (puVar32 != (undefined8 *)0x0);
  recovered_1000dcc0((uint *)&local_400,&local_c0);
  pcVar7 = (char *)((int)&local_400 + 1);
  uVar22 = 0xfffffffd;
  do {
    uVar27 = uVar22 + 3;
    uVar20 = 0;
    if (uVar27 < 0x1e) {
      uVar20 = (uint)*(byte *)((int)local_140 + uVar22 + 0x85);
    }
    bVar31 = *(byte *)((int)local_140 + uVar22 + 0x83);
    uVar22 = (uint)*(byte *)((int)local_140 + uVar22 + 0x84) << 8;
    cVar6 = str_1001f036[(uVar20 | uVar22 & 0xfff) >> 6];
    pcVar7[-1] = str_1001f036[bVar31 >> 2];
    cVar1 = str_1001f036[(uVar22 | (bVar31 & 3) << 0x10) >> 0xc];
    uVar22 = 0x3d;
    if (uVar27 < 0x1e) {
      uVar22 = uVar20 & 0x3f;
    }
    pcVar7[1] = cVar6;
    if (uVar27 < 0x1e) {
      uVar22 = (uint)(byte)str_1001f036[uVar22];
    }
    *pcVar7 = cVar1;
    pcVar7[2] = (char)uVar22;
    pcVar7 = pcVar7 + 4;
    uVar22 = uVar27;
  } while (uVar27 < 0x1d);
  PF_PART1(local_3d8, 4) = 0;
  iVar26 = 0x2b;
  do {
    if (*(char *)((int)&local_400 + iVar26) != '=') break;
    *(undefined1 *)((int)&local_400 + iVar26) = 0;
    bVar37 = iVar26 != 0;
    iVar26 = iVar26 + -1;
  } while (bVar37);
  recovered_10007098(&DAT_10024f84,0x40,str_1001f02c,&local_400);
  recovered_1000b728(str_1001effe,&DAT_10024f84);
  iVar26 = 0;
  puVar28 = &DAT_10020de4;
  do {
    puVar28[-0x364] = iVar26;
    pbVar24 = (byte *)0x0;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x4f < _DAT_40010808 &&
        ((_DAT_4001084c != (code *)0x0 &&
         (pbVar25 = (byte *)(*_DAT_4001084c)(0x89cc), pbVar25 != (byte *)0x0)))))) {
      recovered_10004080(pbVar25,0,0x89cc);
      pbVar24 = pbVar25;
    }
    puVar28[-0x318] = pbVar24;
    pbVar25 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
       (_DAT_4001084c != (code *)0x0)) {
      pbVar10 = (byte *)(*_DAT_4001084c)(0x890c);
      pbVar24 = (byte *)0x0;
      if (pbVar10 != (byte *)0x0) {
        recovered_10004080(pbVar10,0,0x890c);
        pbVar24 = pbVar10;
      }
    }
    puVar28[-0x316] = pbVar24;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x4f < _DAT_40010808 &&
        ((_DAT_4001084c != (code *)0x0 &&
         (pbVar24 = (byte *)(*_DAT_4001084c)(0x2000), pbVar24 != (byte *)0x0)))))) {
      recovered_10004080(pbVar24,0,0x2000);
      pbVar25 = pbVar24;
    }
    puVar28[-0x315] = pbVar25;
    pbVar25 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
       (_DAT_4001084c != (code *)0x0)) {
      pbVar10 = (byte *)(*_DAT_4001084c)(0x2000);
      pbVar24 = (byte *)0x0;
      if (pbVar10 != (byte *)0x0) {
        recovered_10004080(pbVar10,0,0x2000);
        pbVar24 = pbVar10;
      }
    }
    puVar28[-0x23a] = pbVar24;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x4f < _DAT_40010808 &&
        ((_DAT_4001084c != (code *)0x0 &&
         (pbVar24 = (byte *)(*_DAT_4001084c)(0x2000), pbVar24 != (byte *)0x0)))))) {
      recovered_10004080(pbVar24,0,0x2000);
      pbVar25 = pbVar24;
    }
    puVar28[-0x238] = pbVar25;
    pbVar25 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
       (_DAT_4001084c != (code *)0x0)) {
      pbVar10 = (byte *)(*_DAT_4001084c)(0x8000);
      pbVar24 = (byte *)0x0;
      if (pbVar10 != (byte *)0x0) {
        recovered_10004080(pbVar10,0,0x8000);
        pbVar24 = pbVar10;
      }
    }
    puVar28[-0x84] = pbVar24;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x4f < _DAT_40010808 &&
        ((_DAT_4001084c != (code *)0x0 &&
         (pbVar24 = (byte *)(*_DAT_4001084c)(0x10000), pbVar24 != (byte *)0x0)))))) {
      recovered_10004080(pbVar24,0,0x10000);
      pbVar25 = pbVar24;
    }
    *puVar28 = pbVar25;
    iVar8 = 0;
    if (puVar28[-0x318] != 0) {
      iVar8 = puVar28[-0x316];
    }
    if (puVar28[-0x318] == 0 || iVar8 == 0) {
LAB_10008bdc:
      if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
         ((_DAT_40010808 < 0x2c || (_DAT_40010828 == (code *)0x0)))) goto LAB_10008c08;
      pcVar7 = str_1001ec6c;
      goto LAB_10008d0c;
    }
    iVar8 = 0;
    if (puVar28[-0x315] != 0) {
      iVar8 = puVar28[-0x23a];
    }
    if (((puVar28[-0x315] == 0 || iVar8 == 0) || (puVar28[-0x238] == 0 || pbVar25 == (byte *)0x0))
       || (puVar28[-0x84] == 0)) goto LAB_10008bdc;
    iVar26 = iVar26 + 1;
    puVar28 = puVar28 + 0x36f;
  } while (iVar26 != 4);
  uVar22 = 0;
  recovered_10004080((byte *)&local_400,0,0x18);
  PF_PART4(local_400, 0) = 0x18;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x16b < _DAT_40010808 &&
      ((_DAT_40010968 != (code *)0x0 && (iVar26 = (*_DAT_40010968)(&local_400), iVar26 != 0)))))) {
    uVar22 = local_3f0;
  }
  uVar27 = DAT_100250cc;
  uVar20 = DAT_100250d8 + (uVar22 - DAT_100250d0);
  iVar26 = DAT_100250dc + (uint)CARRY4(DAT_100250d8,uVar22 - DAT_100250d0);
  DAT_100250d0 = uVar22;
  DAT_100250d8 = uVar20;
  DAT_100250dc = iVar26;
  recovered_10004080((byte *)&local_400,0,0xc0);
  uVar22 = _DAT_40010800;
  local_400 = CONCAT44(PF_PART4(local_400, 4),0xc0);
  lVar3 = (ulonglong)uVar20 * 1000;
  uVar40 = recovered_100034ac((uint)lVar3,iVar26 * 1000 + (int)((ulonglong)lVar3 >> 0x20),uVar27,0);
  local_434 = (uint)uVar40;
  if ((((uVar22 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x127 < _DAT_40010808)) &&
     (_DAT_40010924 != (code *)0x0)) {
    iVar26 = (*_DAT_40010924)(&local_400);
    bVar31 = 0;
    if (iVar26 != 0) {
      bVar31 = PF_PART1(local_400, 4);
    }
    if (iVar26 != 0 && (bVar31 & 1) != 0) {
      recovered_100038f0((undefined8 *)&DAT_10023e5c,(undefined8 *)&local_3f0,(undefined8 *)0x6);
      DAT_10023e62 = 1;
      recovered_1000c340((int)&local_400,0xc0);
      recovered_10007098((char *)&local_c0,0x18,str_1001f09c,local_3f0 & 0xff,local_3f0 >> 8 & 0xff,
                         local_3f0 >> 0x10 & 0xff,local_3f0 >> 0x18,uStack_3ec & 0xff,
                         uStack_3ec >> 8 & 0xff);
      pcVar7 = local_380;
      if (local_380[0] == '\0') {
        pcVar7 = (char *)&local_3c0;
      }
      recovered_1000b728(str_1001f0ba,&local_c0,pcVar7);
      if ((local_400 & 0x200000000) == 0) {
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
          (*_DAT_40010828)(str_1001f0cf);
        }
        if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
           (_DAT_40010828 != (code *)0x0)) {
          (*_DAT_40010828)(&DAT_1001ed67);
        }
      }
      iVar26 = 0;
      do {
        pbVar24 = (byte *)0x0;
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x4f < _DAT_40010808 &&
            ((_DAT_4001084c != (code *)0x0 &&
             (pbVar25 = (byte *)(*_DAT_4001084c)(0x4000), pbVar25 != (byte *)0x0)))))) {
          recovered_10004080(pbVar25,0,0x4000);
          pbVar24 = pbVar25;
        }
        bVar37 = _DAT_40010800 != 0x50414d57;
        *(byte **)((int)&DAT_100239a4 + iVar26) = pbVar24;
        if ((((bVar37) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x50)) ||
           ((_DAT_4001084c == (code *)0x0 ||
            (pbVar24 = (byte *)(*_DAT_4001084c)(0x8000), pbVar24 == (byte *)0x0)))) {
          *(undefined4 *)((int)&DAT_1002397c + iVar26) = 0;
          *(undefined4 *)((int)&DAT_100239b4 + iVar26) = 0;
LAB_1000934c:
          if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
             ((_DAT_40010808 < 0x2c || (_DAT_40010828 == (code *)0x0)))) goto LAB_10008c08;
          pcVar7 = str_1001f0fd;
          goto LAB_10008d0c;
        }
        recovered_10004080(pbVar24,0,0x8000);
        *(undefined4 *)((int)&DAT_1002397c + iVar26) = 0;
        *(byte **)((int)&DAT_100239b4 + iVar26) = pbVar24;
        if (*(int *)((int)&DAT_100239a4 + iVar26) == 0) goto LAB_1000934c;
        iVar26 = iVar26 + 0x68;
      } while (iVar26 != 0x4e0);
      if (DAT_10023802 == '\x01') {
        DAT_10023e63 = 0;
        recovered_1000cff0((int)local_140,4);
        DAT_10023eec = 2000;
        DAT_10023ed8 = 1;
        DAT_10023edc = local_140[0] << 0x18 | (local_140[0] >> 8 & 0xff) << 0x10 |
                       (local_140[0] >> 0x10 & 0xff) << 8 | local_140[0] >> 0x18;
        DAT_10023ef0 = 0;
        DAT_10023ee8 = local_434;
        recovered_10011250(1,0);
      }
      else {
        DAT_10023ed8 = 0;
        recovered_1001111c(DAT_10023804,DAT_10023808,DAT_1002380c);
      }
      uVar22 = (uint)DAT_10023740;
      iVar26 = recovered_100049dc(&DAT_10023782,&DAT_1001ecc6);
      pcVar7 = &DAT_1001ecd1;
      if (iVar26 == 0) {
        pcVar7 = str_1001ecc8;
      }
      local_444 = &DAT_10023742;
      recovered_1000b728(str_1001ec93,uVar22,&DAT_10023742,pcVar7);
      bVar31 = 0;
      local_438 = 0;
      uVar22 = 0;
      while( true ) {
        bVar37 = false;
        if (!bVar39) {
          uVar22 = _DAT_40010800;
        }
        if (((!bVar39 && uVar22 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x2f < _DAT_40010808 && (_DAT_4001082c != (code *)0x0)))) {
          cVar6 = (*_DAT_4001082c)();
          bVar37 = cVar6 == '\x1b';
        }
        recovered_10004080((byte *)&local_400,0,0x18);
        local_400 = CONCAT44(PF_PART4(local_400, 4),0x18);
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x16b < _DAT_40010808 &&
            ((_DAT_40010968 != (code *)0x0 && (iVar26 = (*_DAT_40010968)(&local_400), iVar26 != 0)))
            ))) {
          uVar22 = local_3f0;
        }
        else {
          uVar22 = 0;
        }
        bVar38 = CARRY4(DAT_100250d8,uVar22 - DAT_100250d0);
        DAT_100250d8 = DAT_100250d8 + (uVar22 - DAT_100250d0);
        DAT_100250dc = DAT_100250dc + (uint)bVar38;
        DAT_100250d0 = uVar22;
        uVar40 = recovered_100034ac((uint)((ulonglong)DAT_100250d8 * 1000),
                                    DAT_100250dc * 1000 +
                                    (int)((ulonglong)DAT_100250d8 * 1000 >> 0x20),DAT_100250cc,0);
        uVar22 = (uint)uVar40;
        if (bVar37) break;
        iVar26 = recovered_1000b810(0x20,uVar22);
        bVar37 = iVar26 != 0;
        if (DAT_10023ed8 - 1U < 2) {
LAB_10009644:
          if (uVar22 - DAT_10023ee8 < DAT_10023eec) goto LAB_1000995c;
          DAT_10023ef0 = DAT_10023ef0 + 1;
          if ((DAT_10023ed8 == 2) && (3 < DAT_10023ef0)) {
            recovered_1000cff0((int)&local_400,4);
            DAT_10023ef0 = 0;
            DAT_10023eec = 2000;
            DAT_10023ed8 = 1;
            DAT_10023edc = (uint)local_400 << 0x18 | ((uint)local_400 >> 8 & 0xff) << 0x10 |
                           ((uint)local_400 >> 0x10 & 0xff) << 8 | (uint)local_400 >> 0x18;
            DAT_10023ee8 = uVar22;
LAB_10009950:
            iVar8 = 1;
          }
          else {
            if ((DAT_10023ed8 == 4) && (DAT_10023ef4 <= uVar22 - DAT_10023ef8)) {
              if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)
                  ) && (_DAT_40010828 != (code *)0x0)) {
                (*_DAT_40010828)(str_1001f171);
              }
              if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                 ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
                (*_DAT_40010828)(&DAT_1001ed67);
              }
              DAT_10023e63 = 0;
              recovered_1000cff0((int)&local_400,4);
              DAT_10023ef0 = 0;
              DAT_10023eec = 2000;
              DAT_10023ed8 = 1;
              DAT_10023edc = (uint)local_400 << 0x18 | ((uint)local_400 >> 8 & 0xff) << 0x10 |
                             ((uint)local_400 >> 0x10 & 0xff) << 8 | (uint)local_400 >> 0x18;
              DAT_10023ee8 = uVar22;
              goto LAB_10009950;
            }
            if (DAT_10023eec >> 7 < 0x7d) {
              DAT_10023eec = DAT_10023eec << 1;
            }
            if (DAT_10023ed8 != 2) {
              if (DAT_10023ed8 != 1) goto LAB_10009880;
              DAT_10023ee8 = uVar22;
              if ((DAT_10023ef0 & 3) == 0) {
                if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                   ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
                  (*_DAT_40010828)(str_1001f189);
                }
                if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                    (0x2b < _DAT_40010808)) && (_DAT_40010828 != (code *)0x0)) {
                  (*_DAT_40010828)(&DAT_1001ed67);
                }
              }
              goto LAB_10009950;
            }
            iVar8 = 3;
            DAT_10023ee8 = uVar22;
          }
          iVar19 = 0;
LAB_10009958:
          recovered_10011250(iVar8,iVar19);
        }
        else if (DAT_10023ed8 == 3) {
          if (-1 < (int)(uVar22 - DAT_10023efc)) {
            DAT_10023ef0 = 0;
            DAT_10023eec = 4000;
            DAT_10023ed8 = 4;
LAB_10009880:
            iVar8 = 3;
            iVar19 = 1;
            DAT_10023ee8 = uVar22;
            goto LAB_10009958;
          }
        }
        else if (DAT_10023ed8 == 4) goto LAB_10009644;
LAB_1000995c:
        recovered_1000bbf8(&DAT_1002397c,uVar22);
        recovered_1000bbf8(&DAT_100239e4,uVar22);
        recovered_1000bbf8(&DAT_10023a4c,uVar22);
        recovered_1000bbf8(&DAT_10023ab4,uVar22);
        recovered_1000bbf8(&DAT_10023b1c,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023b84,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023bec,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023c54,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023cbc,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023d24,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023d8c,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023df4,uVar22);
        iVar8 = 0;
        puVar21 = extraout_r3_00;
        do {
          pbVar24 = &DAT_10020050;
          iVar19 = iVar8 * 0x68;
          puVar36 = &DAT_1002397c + iVar8 * 0x1a;
          if (*puVar36 == 2) {
            puVar12 = (uint *)(uint)DAT_10020050;
            puVar18 = puVar12;
            if (puVar12 == (uint *)0x1) {
              puVar18 = DAT_10020058;
            }
            if ((puVar12 != (uint *)0x1 || puVar18 != puVar36) ||
               (DAT_1002005c != *(int *)(iVar19 + ((uintptr_t)pf_module_state + 0x4da8U)))) {
              puVar12 = (uint *)(uint)DAT_10020e0c;
              puVar18 = puVar12;
              if (puVar12 == (uint *)0x1) {
                puVar18 = DAT_10020e14;
              }
              if ((puVar12 != (uint *)0x1 || puVar18 != puVar36) ||
                 (DAT_10020e18 != *(int *)(iVar19 + ((uintptr_t)pf_module_state + 0x4da8U)))) {
                puVar12 = (uint *)(uint)DAT_10021bc8;
                puVar18 = puVar12;
                if (puVar12 == (uint *)0x1) {
                  puVar18 = DAT_10021bd0;
                }
                if ((puVar12 != (uint *)0x1 || puVar18 != puVar36) ||
                   (DAT_10021bd4 != *(int *)(iVar19 + ((uintptr_t)pf_module_state + 0x4da8U)))) {
                  puVar12 = (uint *)(uint)DAT_10022984;
                  puVar18 = puVar12;
                  if (puVar12 == (uint *)0x1) {
                    puVar18 = DAT_1002298c;
                  }
                  if ((puVar12 != (uint *)0x1 || puVar18 != puVar36) ||
                     (DAT_10022990 != *(int *)(iVar19 + ((uintptr_t)pf_module_state + 0x4da8U)))) {
                    if (DAT_10023974 != 0) {
                      iVar13 = DAT_10023974;
                      do {
                        bVar2 = *pbVar24;
                        bVar38 = bVar2 == 0;
                        if (bVar38) {
                          bVar2 = pbVar24[0xb91];
                        }
                        if (bVar38 && bVar2 == 0) {
                          uVar11 = *(undefined4 *)(pbVar24 + 4);
                          uVar14 = *(undefined4 *)(pbVar24 + 0x134);
                          uVar15 = *(undefined4 *)(pbVar24 + 0x13c);
                          uVar16 = *(undefined4 *)(pbVar24 + 0x140);
                          uVar17 = *(undefined4 *)(pbVar24 + 0x4ac);
                          uVar35 = *(undefined4 *)(pbVar24 + 0x4b4);
                          uVar29 = *(undefined4 *)(pbVar24 + 0xb84);
                          uVar33 = *(undefined4 *)(pbVar24 + 0xd94);
                          recovered_10004080(pbVar24,0,0xdbc);
                          *(undefined4 *)(pbVar24 + 0x13c) = uVar15;
                          uVar27 = (&DAT_1002398c)[iVar8 * 0x1a];
                          *(undefined4 *)(pbVar24 + 0x134) = uVar14;
                          *(undefined4 *)(pbVar24 + 0x4ac) = uVar17;
                          *(undefined4 *)(pbVar24 + 4) = uVar11;
                          *(undefined4 *)(pbVar24 + 0x140) = uVar16;
                          uVar11 = *(undefined4 *)(iVar19 + ((uintptr_t)pf_module_state + 0x4da8U));
                          *pbVar24 = 1;
                          *(undefined4 *)(pbVar24 + 0xc) = uVar11;
                          *(uint *)(pbVar24 + 0x18) = uVar22;
                          *(uint *)(pbVar24 + 0x14) = uVar22;
                          *(undefined4 *)(pbVar24 + 0xd94) = uVar33;
                          *(undefined4 *)(pbVar24 + 0xb84) = uVar29;
                          *(undefined4 *)(pbVar24 + 0x4b4) = uVar35;
                          *(uint **)(pbVar24 + 8) = puVar36;
                          pbVar24[0x10] = 0;
                          pbVar24[0x11] = 0;
                          pbVar24[0x12] = 0;
                          pbVar24[0x13] = 0;
                          recovered_10007098((char *)&local_400,0x14,str_1001f750,uVar27 >> 0x18,
                                             (uVar27 & 0xffffff) >> 0x10,(uVar27 & 0xffff) >> 8,
                                             uVar27 & 0xff);
                          recovered_10007098((char *)(pbVar24 + 0x11c),0x18,str_1001f1aa,&local_400,
                                             (uint)(ushort)(&DAT_10023990)[iVar8 * 0x34]);
                          DAT_10024f08 = DAT_10024f08 + 1;
                          recovered_1000b728(str_1001f1c4,*(uint *)(pbVar24 + 4),pbVar24 + 0x11c,
                                             str_1001f1b0);
                          uVar27 = *puVar36 & 0xfffffffe;
                          bVar38 = uVar27 == 2;
                          if (bVar38) {
                            uVar27 = (uint)*(byte *)(iVar19 + ((uintptr_t)pf_module_state + 0x4dedU));
                          }
                          if ((bVar38 && uVar27 == 0) &&
                             (0x23 < (&DAT_100239bc)[iVar8 * 0x1a] - 0x7fdd)) {
                            puVar9 = (undefined8 *)(&DAT_100239b4)[iVar8 * 0x1a];
                            uVar27 = *(int *)(iVar19 + ((uintptr_t)pf_module_state + 0x4de0U)) + (&DAT_100239bc)[iVar8 * 0x1a] &
                                     0x7fff;
                            puVar23 = (undefined8 *)(0x8000 - uVar27);
                            if ((undefined8 *)0x23 < puVar23) {
                              puVar23 = (undefined8 *)0x24;
                            }
                            recovered_100038f0((undefined8 *)((int)puVar9 + uVar27),
                                               (undefined8 *)str_1001fc94,puVar23);
                            if (0x7fdc < uVar27) {
                              recovered_100038f0(puVar9,(undefined8 *)((int)puVar23 + ((uintptr_t)pf_module_state + 0x10bcU)),
                                                 (undefined8 *)(0x24 - (int)puVar23));
                            }
                            (&DAT_100239bc)[iVar8 * 0x1a] = (&DAT_100239bc)[iVar8 * 0x1a] + 0x24;
                          }
                          recovered_1001309c((int)pbVar24);
                          recovered_10012e18(puVar36,uVar22);
                          puVar21 = extraout_r3_03;
                          goto LAB_10009a20;
                        }
                        pbVar24 = pbVar24 + 0xdbc;
                        iVar13 = iVar13 + -1;
                      } while (iVar13 != 0);
                    }
                    if (uVar22 - (&DAT_100239dc)[iVar8 * 0x1a] < 90000) {
                      recovered_10012e18(puVar36,uVar22);
                      puVar21 = extraout_r3_01;
                    }
                    else {
                      recovered_10012940((int)puVar36,0x14,
                                         (&DAT_100239c0)[iVar8 * 0x1a] +
                                         (&DAT_10023998)[iVar8 * 0x1a] +
                                         (uint)(byte)(&DAT_100239c4)[iVar19] +
                                         (uint)(byte)(&DAT_100239c6)[iVar19],0,0);
                      (&DAT_100239d4)[iVar19] = 0;
                      (&DAT_100239cb)[iVar19] = 1;
                      (&DAT_100239bc)[iVar8 * 0x1a] = 0;
                      (&DAT_100239ac)[iVar8 * 0x1a] = 0;
                      *puVar36 = 0;
                      puVar21 = extraout_r3_02;
                    }
                  }
                }
              }
            }
          }
LAB_10009a20:
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0xc);
        iVar8 = 0;
        do {
          iVar19 = iVar8 * 0xdbc;
          pcVar7 = (char *)(&DAT_10020050 + iVar19);
          if (*pcVar7 == '\x01') {
            puVar36 = (&DAT_10020058)[iVar8 * 0x36f];
            if (((puVar36 == (uint *)0x0) || (puVar36[1] != (&DAT_1002005c)[iVar8 * 0x36f])) ||
               (*puVar36 == 0)) {
              cVar6 = (&DAT_10020e04)[iVar19];
              bVar38 = cVar6 == '\0';
              if (bVar38) {
                cVar6 = (&DAT_10020dfc)[iVar19];
              }
              if (bVar38 && cVar6 == '\0') {
                recovered_1000b728(str_1001f1c4,(&DAT_10020054)[iVar8 * 0x36f],
                                   (void *)(iVar19 + ((uintptr_t)pf_module_state + 0x1594U)),str_1001f1ea);
                puVar21 = extraout_r3_12;
              }
              if ((&DAT_10020be1)[iVar19] == '\x01') {
                (&DAT_10020058)[iVar8 * 0x36f] = (uint *)0x0;
                *pcVar7 = '\0';
              }
              else {
LAB_1000a1c4:
                recovered_1000c22c(pcVar7);
                puVar21 = extraout_r3_10;
              }
            }
            else {
              puVar9 = (undefined8 *)puVar36[0xc];
              if (puVar9 != (undefined8 *)0x0) {
                puVar23 = (undefined8 *)(&DAT_1002006c + iVar19);
                do {
                  uVar27 = (&DAT_10020188)[iVar8 * 0x36f];
                  if ((0x89cb < uVar27) || ((&DAT_10020e04)[iVar19] != '\0')) break;
                  iVar13 = (&DAT_10020184)[iVar8 * 0x36f];
                  puVar34 = (undefined8 *)puVar36[10];
                  puVar30 = (undefined8 *)(0x4000 - puVar36[0xb]);
                  puVar32 = (undefined8 *)(0x89cc - uVar27);
                  if (puVar9 < (undefined8 *)(0x89cc - uVar27)) {
                    puVar32 = puVar9;
                  }
                  puVar9 = puVar32;
                  if (puVar30 < puVar32) {
                    puVar9 = puVar30;
                  }
                  recovered_100038f0((undefined8 *)(iVar13 + uVar27),
                                     (undefined8 *)((int)puVar34 + puVar36[0xb]),puVar9);
                  if (puVar30 < puVar32) {
                    recovered_100038f0((undefined8 *)((int)(iVar13 + uVar27) + (int)puVar9),puVar34,
                                       (undefined8 *)((int)puVar32 - (int)puVar9));
                  }
                  uVar27 = puVar36[0xc];
                  puVar21 = (undefined1 *)puVar36[0xd];
                  puVar36[0xc] = uVar27 - (int)puVar32;
                  puVar36[0xb] = puVar36[0xb] + (int)puVar32 & 0x3fff;
                  if ((puVar21 < (undefined1 *)puVar36[9]) &&
                     ((uint)((int)puVar36[9] << 1) <= 0x4000 - (uVar27 - (int)puVar32))) {
                    *(undefined1 *)((int)puVar36 + 0x4e) = 1;
                  }
                  uVar27 = (&DAT_10020188)[iVar8 * 0x36f] + (int)puVar32;
                  (&DAT_10020068)[iVar8 * 0x36f] = uVar22;
                  (&DAT_10020188)[iVar8 * 0x36f] = uVar27;
                  if ((&DAT_10020060)[iVar8 * 0x36f] == 0) {
                    if (uVar27 != 0) {
                      do {
                        puVar18 = (uint *)(&DAT_10020184)[iVar8 * 0x36f];
                        uVar20 = 1;
                        while (*(char *)((int)puVar18 + (uVar20 - 1)) != '\n') {
                          uVar20 = uVar20 + 1;
                          if (uVar20 - uVar27 == 1) {
                            puVar21 = (undefined1 *)0x1;
                            goto LAB_10009ff8;
                          }
                        }
                        puVar21 = (undefined1 *)0xa;
                        if (uVar20 - uVar27 == 1) {
LAB_10009ff8:
                          if (0xfe < uVar27) {
                            recovered_1000be98((int)pcVar7,2,str_1001f22e,puVar21);
                            puVar21 = extraout_r3_07;
                          }
                          break;
                        }
                        puVar9 = (undefined8 *)(uVar20 - 1);
                        puVar21 = (undefined1 *)0xa;
                        if (puVar9 != (undefined8 *)0x0) {
                          do {
                            puVar21 = (undefined1 *)(uint)*(byte *)((int)puVar18 + -1 + (int)puVar9)
                            ;
                            if (puVar21 != (undefined1 *)0xd && puVar21 != (undefined1 *)0xa) {
                              if (&UndefinedInstruction <= puVar9) {
                                iVar13 = recovered_100046ac(puVar18,(uint *)&DAT_1001f24b,4);
                                if (iVar13 == 0) {
                                  if ((((undefined8 *)0x7 < puVar9) &&
                                      (iVar13 = recovered_100046ac((uint *)(&DAT_10020184)
                                                                           [iVar8 * 0x36f],
                                                                   (uint *)str_1001f250,8),
                                      iVar13 != 0)) &&
                                     (iVar13 = recovered_100046ac((uint *)(&DAT_10020184)
                                                                          [iVar8 * 0x36f],
                                                                  (uint *)str_1001f259,8),
                                     iVar13 != 0)) {
                                    recovered_1000be98((int)pcVar7,2,str_1001f262,extraout_r3_08);
                                    puVar21 = extraout_r3_09;
                                    goto LAB_1000a01c;
                                  }
                                  puVar32 = puVar9;
                                  if ((undefined8 *)0xfe < puVar9) {
                                    puVar32 = (undefined8 *)0xff;
                                  }
                                  recovered_100038f0(puVar23,(undefined8 *)
                                                             (&DAT_10020184)[iVar8 * 0x36f],puVar32)
                                  ;
                                  uVar27 = (&DAT_10020188)[iVar8 * 0x36f];
                                  iVar13 = 0;
                                  *(undefined1 *)((int)puVar23 + (int)puVar32) = 0;
                                  if (uVar20 < uVar27) {
                                    recovered_10003b74((undefined8 *)(&DAT_10020184)[iVar8 * 0x36f],
                                                       (undefined8 *)
                                                       ((int)(&DAT_10020184)[iVar8 * 0x36f] + uVar20
                                                       ),(undefined8 *)(uVar27 - uVar20));
                                    iVar13 = (&DAT_10020188)[iVar8 * 0x36f] - uVar20;
                                  }
                                  (&DAT_10020188)[iVar8 * 0x36f] = iVar13;
                                  recovered_1000c340((int)puVar23,(uint)puVar9);
                                  recovered_100195a8(pcVar7,str_1001f27f,puVar23);
                                  (&DAT_10020060)[iVar8 * 0x36f] = 1;
                                  goto LAB_10009e60;
                                }
                                uVar27 = (&DAT_10020188)[iVar8 * 0x36f];
                                puVar21 = extraout_r3_05;
                              }
                              break;
                            }
                            puVar9 = (undefined8 *)((int)puVar9 + -1);
                          } while (puVar9 != (undefined8 *)0x0);
                        }
                        if (uVar27 <= uVar20) {
                          (&DAT_10020188)[iVar8 * 0x36f] = 0;
                          break;
                        }
                        recovered_10003b74((undefined8 *)(&DAT_10020184)[iVar8 * 0x36f],
                                           (undefined8 *)
                                           ((int)(&DAT_10020184)[iVar8 * 0x36f] + uVar20),
                                           (undefined8 *)(uVar27 - uVar20));
                        uVar27 = (&DAT_10020188)[iVar8 * 0x36f] - uVar20;
                        (&DAT_10020188)[iVar8 * 0x36f] = uVar27;
                        puVar21 = extraout_r3_06;
                      } while (uVar27 != 0);
LAB_1000a01c:
                      if ((&DAT_10020060)[iVar8 * 0x36f] != 0) goto LAB_10009e60;
                    }
                  }
                  else {
LAB_10009e60:
                    recovered_10015990((int)pcVar7);
                    puVar21 = extraout_r3_04;
                  }
                  puVar9 = (undefined8 *)puVar36[0xc];
                } while (puVar9 != (undefined8 *)0x0);
              }
              if (((&DAT_10020060)[iVar8 * 0x36f] == 0) &&
                 (0x89cb < (uint)(&DAT_10020188)[iVar8 * 0x36f])) {
                recovered_1000be98((int)pcVar7,2,str_1001f1fa,puVar21);
                puVar21 = extraout_r3_11;
              }
              if ((&DAT_10020e04)[iVar19] == '\x01') {
                if (((2999 < uVar22 - (&DAT_10020e08)[iVar8 * 0x36f]) || (*puVar36 == 3)) &&
                   ((&DAT_10020be1)[iVar19] == '\0')) goto LAB_1000a1c4;
              }
              else {
                uVar27 = *puVar36;
                bVar38 = uVar27 == 3;
                if (bVar38) {
                  uVar27 = (uint)(byte)(&DAT_10020dfb)[iVar19];
                }
                if (!bVar38 || uVar27 != 0) {
                  if (((&DAT_10020060)[iVar8 * 0x36f] != 3) &&
                     (89999 < uVar22 - (&DAT_10020064)[iVar8 * 0x36f])) {
                    recovered_1000be98((int)pcVar7,0xb,str_1001f211,puVar21);
                    puVar21 = extraout_r3_13;
                    goto LAB_10009dd0;
                  }
                  if ((&DAT_100208c4)[iVar8 * 0x36f] == 1) {
                    cVar6 = (&DAT_10020dfa)[iVar19];
                    bVar38 = cVar6 == '\x01';
                    if (bVar38) {
                      cVar6 = *(char *)(&DAT_10020df8 + iVar8 * 0x6de);
                    }
                    if ((bVar38 && cVar6 == '\0') &&
                       ((&DAT_10020bdc)[iVar8 * 0x36f] - 0x8001U < 0xffffffbf ||
                        (&DAT_10020bdc)[iVar8 * 0x36f] == 0x7fc0)) {
                      (&DAT_10020dfa)[iVar19] = 0;
                      recovered_1001948c((int)pcVar7);
                      iVar13 = (&DAT_10020bd0)[iVar8 * 0x36f];
                      if (iVar13 != 0) {
                        do {
                          cVar6 = (&DAT_10020be0)[iVar19];
                          bVar38 = cVar6 != '\0';
                          if (!bVar38) {
                            cVar6 = (&DAT_10020be1)[iVar19];
                          }
                          if (bVar38 || cVar6 != '\0') break;
                          cVar6 = *(char *)(&DAT_10020df8 + iVar8 * 0x6de);
                          bVar38 = cVar6 != '\0';
                          if (!bVar38) {
                            cVar6 = (&DAT_10020dfb)[iVar19];
                          }
                          if (bVar38 || cVar6 != '\0') break;
                          bVar2 = (&DAT_10020ace)[iVar19];
                          recovered_10003b74((undefined8 *)(&DAT_10020ace + iVar19),
                                             (undefined8 *)(&DAT_10020acf + iVar19),
                                             (undefined8 *)(iVar13 + -1));
                          (&DAT_10020bd0)[iVar8 * 0x36f] = (&DAT_10020bd0)[iVar8 * 0x36f] + -1;
                          recovered_1001e3b8((int)pcVar7,(uint)bVar2);
                          iVar13 = (&DAT_10020bd0)[iVar8 * 0x36f];
                        } while (iVar13 != 0);
                      }
                    }
                  }
                  recovered_1001e96c((int)pcVar7);
                  uVar11 = extraout_r3_14;
                  if ((&DAT_100208a0)[iVar19] == '\x01') {
                    while( true ) {
                      puVar18 = (uint *)(uint)(byte)(&DAT_100208a1)[iVar19];
                      bVar38 = puVar18 != (uint *)0x0;
                      if (!bVar38) {
                        puVar18 = (uint *)(uint)(byte)(&DAT_100204f5)[iVar19];
                      }
                      if ((bVar38 || puVar18 != (uint *)0x0) ||
                         (puVar9 = (undefined8 *)(&DAT_10020bdc)[iVar8 * 0x36f],
                         puVar9 == (undefined8 *)0x0)) break;
                      puVar23 = (undefined8 *)(&DAT_100208ac)[iVar8 * 0x36f];
                      if (puVar23 != (undefined8 *)0x0) {
                        puVar18 = (&DAT_10020058)[iVar8 * 0x36f];
                      }
                      if (puVar23 == (undefined8 *)0x0 || puVar18 == (uint *)0x0) break;
                      uVar27 = (&DAT_1002005c)[iVar8 * 0x36f];
                      bVar38 = puVar18[1] != uVar27;
                      if (!bVar38) {
                        uVar27 = *puVar18 & 0xfffffffe;
                      }
                      if ((bVar38 || uVar27 != 2) ||
                         (uVar27 = puVar18[0x10], uVar27 - 0x6fc1 < 0x1040)) break;
                      puVar34 = (undefined8 *)(&DAT_10020190)[iVar8 * 0x36f];
                      puVar32 = (undefined8 *)(&DAT_100208b0)[iVar8 * 0x36f];
                      PF_PART1(local_400, 0) = 0x5e;
                      recovered_100038f0(puVar34,&local_400,(undefined8 *)0x1);
                      uVar20 = (&DAT_100208a8)[iVar8 * 0x36f];
                      PF_PART4(local_400, 0) =
                           uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18;
                      recovered_100038f0((undefined8 *)((int)puVar34 + 1),&local_400,
                                         (undefined8 *)&UndefinedInstruction);
                      puVar30 = (undefined8 *)(0x6fc0 - uVar27);
                      if (puVar9 < puVar23) {
                        puVar23 = puVar9;
                      }
                      if (puVar32 <= puVar23) {
                        puVar23 = puVar32;
                      }
                      if (puVar30 <= puVar23) {
                        puVar23 = puVar30;
                      }
                      if ((undefined8 *)0xfff < puVar23) {
                        puVar23 = (undefined8 *)0x1000;
                      }
                      local_400 = (ulonglong)
                                  CONCAT42(PF_PART4(local_400, 4),
                                           CONCAT11((char)puVar23,(char)((uint)puVar23 >> 8))) <<
                                  0x10;
                      recovered_100038f0((undefined8 *)((int)puVar34 + 5),&local_400,
                                         (undefined8 *)&UndefinedInstruction);
                      puVar32 = (undefined8 *)(&DAT_10020bd4)[iVar8 * 0x36f];
                      puVar30 = (undefined8 *)(0x8000 - (&DAT_10020bd8)[iVar8 * 0x36f]);
                      puVar9 = puVar23;
                      if (puVar30 < puVar23) {
                        puVar9 = puVar30;
                      }
                      recovered_100038f0((undefined8 *)((int)puVar34 + 9),
                                         (undefined8 *)
                                         ((int)puVar32 + (&DAT_10020bd8)[iVar8 * 0x36f]),puVar9);
                      if (puVar30 < puVar23) {
                        recovered_100038f0((undefined8 *)((int)puVar34 + 9 + (int)puVar9),puVar32,
                                           (undefined8 *)((int)puVar23 - (int)puVar9));
                      }
                      iVar13 = recovered_100136d0((int)pcVar7,puVar34,(int)puVar23 + 9);
                      uVar11 = extraout_r3_15;
                      if (iVar13 == 0) break;
                      (&DAT_10020bdc)[iVar8 * 0x36f] = (&DAT_10020bdc)[iVar8 * 0x36f] - (int)puVar23
                      ;
                      (&DAT_100208ac)[iVar8 * 0x36f] = (&DAT_100208ac)[iVar8 * 0x36f] - (int)puVar23
                      ;
                      (&DAT_10020bd8)[iVar8 * 0x36f] =
                           (&DAT_10020bd8)[iVar8 * 0x36f] + (int)puVar23 & 0x7fff;
                      recovered_1001e96c((int)pcVar7);
                      uVar11 = extraout_r3_16;
                      if ((&DAT_100208a0)[iVar19] == '\0') break;
                    }
                  }
                  if ((&DAT_10020dfb)[iVar19] == '\x01') {
                    cVar6 = (&DAT_10020dfc)[iVar19];
                    bVar38 = cVar6 == '\0';
                    if (bVar38) {
                      cVar6 = (&DAT_100204f5)[iVar19];
                    }
                    if (bVar38 && cVar6 == '\0') {
                      if ((&DAT_10020be0)[iVar19] == '\0') {
                        cVar6 = (&DAT_10020be1)[iVar19];
                        bVar38 = cVar6 == '\0';
                        if (bVar38) {
                          cVar6 = *(char *)(&DAT_10020df8 + iVar8 * 0x6de);
                        }
                        if ((!bVar38 || cVar6 != '\0') || ((&DAT_10020bdc)[iVar8 * 0x36f] != 0))
                        goto LAB_1000a670;
                      }
                      else {
LAB_1000a670:
                        if ((&DAT_100208a3)[iVar19] != '\x01') goto LAB_1000a520;
                      }
                      cVar6 = (&DAT_100208a0)[iVar19];
                      bVar38 = cVar6 == '\x01';
                      if (bVar38) {
                        cVar6 = (&DAT_100208a3)[iVar19];
                      }
                      if ((((bVar38 && cVar6 == '\0') &&
                           (puVar18 = (&DAT_10020058)[iVar8 * 0x36f], puVar18 != (uint *)0x0)) &&
                          (puVar18[1] == (&DAT_1002005c)[iVar8 * 0x36f])) &&
                         ((*puVar18 & 0xfffffffe) == 2)) {
                        if (puVar18[0x10] - 0x7f01 < 0x100) goto LAB_1000a520;
                        PF_PART1(local_c0, 0) = 'b';
                        PF_PART1(local_3f4, 0) = 0;
                        local_400 = CONCAT44(0x2000,(undefined8 *)(&DAT_10020190)[iVar8 * 0x36f]);
                        recovered_100038f0((undefined8 *)(&DAT_10020190)[iVar8 * 0x36f],
                                           (undefined8 *)&local_c0,(undefined8 *)0x1);
                        PF_PART4(local_3f8,0) = (uint32_t)0x1;
                        recovered_10010e70((int *)&local_400,(&DAT_100208a8)[iVar8 * 0x36f]);
                        recovered_1000dbf0((int *)&local_400,str_1001f711);
                        local_c0 = (uint)PF_PART3(local_c0, 1) << 8;
                        (*(uint32_t *)(void *)auVar5) = (*(uint32_t *)(void *)local_3f8);
                        if (((char)local_3f4 == '\0') &&
                           ((uint32_t)PF_PART4(local_400, 4) != local_3f8)) {
                          recovered_100038f0((undefined8 *)((uint)local_400 + (int)PF_PART4(local_3f8, 0)),
                                             (undefined8 *)&local_c0,(undefined8 *)0x1);
                          PF_PART4(local_3f8,0) = (uint32_t)((int)PF_PART4(auVar5, 0) + 1);
                        }
                        else {
                          PF_PART1(local_3f4, 0) = 1;
                        }
                        recovered_10010e70((int *)&local_400,(&DAT_10020e00)[iVar8 * 0x36f]);
                        recovered_100136d0((int)pcVar7,(uint)local_400,(uint)PF_PART4(local_3f8, 0));
                        if ((&DAT_100208a1)[iVar19] == '\0') {
                          recovered_1001ab74((int)pcVar7,0x60);
                          (&DAT_100208a1)[iVar19] = 1;
                        }
                        if ((&DAT_100208a2)[iVar19] == '\0') {
                          recovered_1001ab74((int)pcVar7,0x61);
                          (&DAT_100208a2)[iVar19] = 1;
                        }
                      }
                      (&DAT_10020e08)[iVar8 * 0x36f] = uVar22;
                      (&DAT_10020dfc)[iVar19] = 1;
                      recovered_100195a8(pcVar7,str_1001f71d,(&DAT_10020e00)[iVar8 * 0x36f]);
                      uVar11 = extraout_r3_19;
                    }
                  }
LAB_1000a520:
                  cVar6 = (&DAT_10020dfc)[iVar19];
                  bVar38 = cVar6 == '\x01';
                  if (bVar38) {
                    cVar6 = (&DAT_10020e04)[iVar19];
                  }
                  if ((bVar38 && cVar6 == '\0') &&
                     (((&DAT_100208a3)[iVar19] != '\0' ||
                      (2999 < uVar22 - (&DAT_10020e08)[iVar8 * 0x36f])))) {
                    recovered_1000be98((int)pcVar7,0xb,str_1001f21f,uVar11);
                  }
                  recovered_10012e18(puVar36,uVar22);
                  puVar21 = extraout_r3_17;
                  goto LAB_10009dd0;
                }
                (&DAT_10020e08)[iVar8 * 0x36f] = uVar22;
                (&DAT_10020e04)[iVar19] = 1;
                (&DAT_10020dfb)[iVar19] = 1;
                *(undefined1 *)((int)puVar36 + 0x49) = 1;
              }
              recovered_10012e18(puVar36,uVar22);
              puVar21 = extraout_r3_18;
            }
          }
          else if (((&DAT_10020be1)[iVar19] == '\x01') && ((&DAT_10020de8)[iVar8 * 0x36f] != 0)) {
            DataMemoryBarrier(0xb);
            iVar13 = (int)(&DAT_10020de4)[iVar8 * 0x36f];
            (&DAT_10020be1)[iVar19] = 0;
            *(undefined1 *)(iVar13 + 0xffff) = 0;
            iVar13 = (&DAT_100208c4)[iVar8 * 0x36f];
            uVar11 = (&DAT_10020de4)[iVar8 * 0x36f];
            puVar21 = &DAT_100250e0;
            *(undefined1 *)((int)&DAT_10020df8 + iVar19 + 1) = 0;
            (&DAT_10020df4)[iVar8 * 0x36f] = (char *)uVar11;
            DAT_100250e0 = '\0';
            if (iVar13 == 2) {
              iVar13 = (&DAT_10020dec)[iVar8 * 0x36f];
              if ((&DAT_10020dfb)[iVar19] == '\0') {
                (&DAT_10020dfb)[iVar19] = 1;
                (&DAT_10020e00)[iVar8 * 0x36f] = (uint)(iVar13 == 0);
              }
            }
            else if (iVar13 == 1) {
              (&DAT_10020dfa)[iVar19] = 1;
            }
            *(undefined1 *)(&DAT_10020df8 + iVar8 * 0x6de) = 0;
          }
LAB_10009dd0:
          pcVar7 = DAT_10020de4;
          iVar19 = DAT_100208c4;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 4);
        iVar8 = 0;
        if (DAT_10020be1 != '\0') {
          iVar8 = DAT_10020de8;
        }
        if (DAT_10020be1 != '\0' && iVar8 != 0) {
          DataMemoryBarrier(0xb);
          DAT_10020df8 = 1;
          (&DAT_10020de4)[0xffff] = '\0';
          DAT_10020be1 = '\0';
          DAT_100250e0 = '\0';
          DAT_10020df4 = pcVar7;
          if (iVar19 == 2) {
            if (DAT_10020dfb == '\0') {
              DAT_10020dfb = '\x01';
              DAT_10020e00 = (uint)(DAT_10020dec == 0);
            }
          }
          else if (iVar19 == 1) {
            DAT_10020dfa = 1;
          }
          if (*pcVar7 == '\0') {
            DAT_10020df8 = DAT_10020df8 & 0xff00;
          }
        }
        pcVar7 = DAT_10021ba0;
        iVar8 = DAT_10021680;
        if ((DAT_1002199d == '\x01') && (DAT_10021ba4 != 0)) {
          DataMemoryBarrier(0xb);
          DAT_10021bb0 = DAT_10021ba0;
          DAT_1002199d = '\0';
          DAT_10021bb4 = 1;
          DAT_10021ba0[0xffff] = '\0';
          DAT_100250e0 = '\0';
          if (iVar8 == 1) {
            DAT_10021bb6 = 1;
          }
          else if ((iVar8 == 2) && (DAT_10021bb7 == '\0')) {
            DAT_10021bb7 = '\x01';
            DAT_10021bbc = (uint)(DAT_10021ba8 == 0);
          }
          if (*pcVar7 == '\0') {
            DAT_10021bb4 = DAT_10021bb4 & 0xff00;
          }
        }
        pcVar7 = DAT_1002295c;
        iVar8 = DAT_1002243c;
        if ((DAT_10022759 == '\x01') && (DAT_10022960 != 0)) {
          DataMemoryBarrier(0xb);
          DAT_1002296c = DAT_1002295c;
          DAT_10022759 = '\0';
          DAT_10022970 = 1;
          DAT_1002295c[0xffff] = '\0';
          DAT_100250e0 = '\0';
          if (iVar8 == 1) {
            DAT_10022972 = 1;
          }
          else if ((iVar8 == 2) && (DAT_10022973 == '\0')) {
            DAT_10022973 = '\x01';
            DAT_10022978 = (uint)(DAT_10022964 == 0);
          }
          if (*pcVar7 == '\0') {
            DAT_10022970 = DAT_10022970 & 0xff00;
          }
        }
        pcVar7 = DAT_10023718;
        iVar8 = DAT_100231f8;
        if ((DAT_10023515 == '\x01') && (DAT_1002371c != 0)) {
          DataMemoryBarrier(0xb);
          DAT_10023728 = DAT_10023718;
          DAT_10023515 = '\0';
          DAT_1002372c = 1;
          DAT_10023718[0xffff] = '\0';
          DAT_100250e0 = '\0';
          if (iVar8 == 1) {
            DAT_1002372e = 1;
          }
          else if ((iVar8 == 2) && (DAT_1002372f == '\0')) {
            DAT_1002372f = '\x01';
            DAT_10023734 = (uint)(DAT_10023720 == 0);
          }
          if (*pcVar7 == '\0') {
            DAT_1002372c = DAT_1002372c & 0xff00;
          }
        }
        if (DAT_100250e0 == '\0') {
          uVar4 = (ushort)DAT_100250e4;
          iVar8 = (short)(uVar4 & 3) * 0xdbc;
          pcVar7 = (char *)(&DAT_10020050 + iVar8);
          if (*pcVar7 == '\0') {
LAB_1000ab90:
            iVar8 = (short)(uVar4 + 1 & 3) * 0xdbc;
            pcVar7 = (char *)(&DAT_10020050 + iVar8);
            cVar6 = *pcVar7;
            bVar38 = cVar6 == '\x01';
            if (bVar38) {
              cVar6 = (&DAT_10020be0)[iVar8];
            }
            if ((!bVar38 || cVar6 != '\x01') || ((&DAT_10020e04)[iVar8] == '\x01')) {
              iVar8 = (short)(uVar4 & 3 ^ 2) * 0xdbc;
              pcVar7 = (char *)(&DAT_10020050 + iVar8);
              cVar6 = *pcVar7;
              bVar38 = cVar6 == '\x01';
              if (bVar38) {
                cVar6 = (&DAT_10020be0)[iVar8];
              }
              if ((!bVar38 || cVar6 != '\x01') || ((&DAT_10020e04)[iVar8] == '\x01')) {
                iVar8 = (short)(uVar4 - 1 & 3) * 0xdbc;
                pcVar7 = (char *)(&DAT_10020050 + iVar8);
                cVar6 = *pcVar7;
                bVar38 = cVar6 == '\x01';
                if (bVar38) {
                  cVar6 = (&DAT_10020be0)[iVar8];
                }
                if ((!bVar38 || cVar6 != '\x01') || ((&DAT_10020e04)[iVar8] == '\x01'))
                goto LAB_1000ad28;
              }
            }
          }
          else {
            cVar6 = (&DAT_10020be0)[iVar8];
            bVar38 = cVar6 == '\x01';
            if (bVar38) {
              cVar6 = (&DAT_10020e04)[iVar8];
            }
            if (!bVar38 || cVar6 != '\0') goto LAB_1000ab90;
          }
          pcVar7[0xb90] = '\0';
          pcVar7[0xb91] = '\x01';
          pcVar7[0xd98] = '\0';
          pcVar7[0xd99] = '\0';
          pcVar7[0xd9a] = '\0';
          pcVar7[0xd9b] = '\0';
          *(uint *)(pcVar7 + 0xda0) = uVar22;
          pcVar7[0xd9c] = '\0';
          pcVar7[0xd9d] = '\0';
          pcVar7[0xd9e] = '\0';
          pcVar7[0xd9f] = '\0';
          DAT_100250e4 = *(int *)(pcVar7 + 4) + 1U & 3;
          **(undefined1 **)(pcVar7 + 0xd94) = 0;
          DAT_100250e0 = '\x01';
          if (DAT_10023978 == '\x01') {
            recovered_100195a8(pcVar7,str_1001f73c,pcVar7 + 0xb92);
          }
          DataMemoryBarrier(0xb);
          if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x98)) ||
             ((_DAT_40010894 == (code *)0x0 ||
              (iVar8 = (*_DAT_40010894)(recovered_1001eb34,pcVar7,str_1001f744), iVar8 == 0)))) {
            uVar11 = 0;
            **(undefined1 **)(pcVar7 + 0xd94) = 0;
            if (((_DAT_40010800 == 0x50414d57) && ((_DAT_40010804 != 0 && (0x9b < _DAT_40010808))))
               && (_DAT_40010898 != (code *)0x0)) {
              uVar11 = (*_DAT_40010898)(pcVar7 + 0xb92,*(undefined4 *)(pcVar7 + 0xd94),0x10000);
            }
            *(undefined4 *)(pcVar7 + 0xd9c) = uVar11;
            DataMemoryBarrier(0xb);
            pcVar7[0xd98] = '\x01';
            pcVar7[0xd99] = '\0';
            pcVar7[0xd9a] = '\0';
            pcVar7[0xd9b] = '\0';
          }
        }
LAB_1000ad28:
        if ((DAT_10020050 == 1) &&
           (bVar37 = false, (DAT_10020188 != 0 || DAT_10020bdc != 0) || iVar26 != 0)) {
          bVar37 = true;
        }
        if (DAT_10020e0c == 1) {
          bVar37 = (bool)((DAT_10020f44 != 0 || DAT_10021998 != 0) | bVar37);
        }
        if (DAT_10021bc8 == 1) {
          bVar37 = (bool)((DAT_10021d00 != 0 || DAT_10022754 != 0) | bVar37);
        }
        if (DAT_10022984 == 1) {
          bVar37 = (bool)((DAT_10022abc != 0 || DAT_10023510 != 0) | bVar37);
        }
        if ((DAT_10023e63 != (bVar31 & 1)) && (bVar31 = DAT_10023e63, DAT_10023e63 != 0)) {
          recovered_10007098((char *)&local_400,0x14,str_1001f750,DAT_10023e64 >> 0x18,
                             (DAT_10023e64 & 0xffffff) >> 0x10,(DAT_10023e64 & 0xffff) >> 8,
                             DAT_10023e64 & 0xff);
          iVar26 = recovered_100049dc((byte *)&DAT_10023742,&DAT_1001ecc6);
          pcVar7 = local_444;
          if (iVar26 == 0) {
            pcVar7 = str_1001ed00;
          }
          recovered_1000b728(str_1001ecd5,pcVar7,&local_400,(uint)DAT_10023740);
          bVar31 = 1;
        }
        uVar27 = (uint)(byte)(DAT_10020e0c + DAT_10020050 + DAT_10021bc8 + DAT_10022984);
        if (local_438 == uVar27) {
          if (59999 < uVar22 - local_434) {
            if (DAT_10023978 == '\x01') goto LAB_1000af10;
            goto LAB_1000af4c;
          }
        }
        else {
LAB_1000af10:
          recovered_1000b728(str_1001ed07,uVar27,DAT_10024f08,DAT_10023f00,DAT_10023f04);
          local_438 = uVar27;
LAB_1000af4c:
          local_434 = uVar22;
        }
        uVar22 = _DAT_40010800;
        if ((((_DAT_40010800 == 0x50414d57) && (uVar22 = _DAT_40010804, _DAT_40010804 != 0)) &&
            (uVar22 = _DAT_40010808, 0x9f < _DAT_40010808)) &&
           (uVar22 = 0, _DAT_4001089c != (code *)0x0)) {
          uVar22 = (*_DAT_4001089c)();
        }
        if (!bVar37) {
          uVar22 = _DAT_40010800;
        }
        if (((!bVar37 && uVar22 == 0x50414d57) && (uVar22 = _DAT_40010804, _DAT_40010804 != 0)) &&
           ((uVar22 = _DAT_40010808, 0x177 < _DAT_40010808 && (_DAT_40010974 != (code *)0x0)))) {
          uVar22 = (*_DAT_40010974)(1000);
        }
      }
      uVar11 = extraout_r3;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
         (_DAT_40010828 != (code *)0x0)) {
        (*_DAT_40010828)(str_1001ed44);
        uVar11 = extraout_r3_23;
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
        (*_DAT_40010828)(&DAT_1001ed67);
        uVar11 = extraout_r3_24;
      }
      if (DAT_10020050 != 0) {
        recovered_1000be98(((uintptr_t)pf_module_state + 0x1478U),0xb,str_1001ed52,uVar11);
        uVar11 = extraout_r3_20;
      }
      if (DAT_10020e0c == 1) {
        recovered_1000be98(((uintptr_t)pf_module_state + 0x2234U),0xb,str_1001ed52,uVar11);
        uVar11 = extraout_r3_21;
      }
      if (DAT_10021bc8 == 1) {
        recovered_1000be98(((uintptr_t)pf_module_state + 0x2ff0U),0xb,str_1001ed52,uVar11);
        uVar11 = extraout_r3_22;
      }
      if (DAT_10022984 == 1) {
        recovered_1000be98(((uintptr_t)pf_module_state + 0x3dacU),0xb,str_1001ed52,uVar11);
      }
      uVar22 = 0;
      recovered_10004080((byte *)&local_400,0,0x18);
      local_400 = CONCAT44(PF_PART4(local_400, 4),0x18);
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x16b < _DAT_40010808 &&
          ((_DAT_40010968 != (code *)0x0 && (iVar26 = (*_DAT_40010968)(&local_400), iVar26 != 0)))))
         ) {
        uVar22 = local_3f0;
      }
      iVar26 = 200;
      bVar39 = CARRY4(DAT_100250d8,uVar22 - DAT_100250d0);
      DAT_100250d8 = DAT_100250d8 + (uVar22 - DAT_100250d0);
      DAT_100250dc = DAT_100250dc + (uint)bVar39;
      DAT_100250d0 = uVar22;
      do {
        recovered_10004080((byte *)&local_400,0,0x18);
        local_400 = CONCAT44(PF_PART4(local_400, 4),0x18);
        if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
           ((_DAT_40010968 != (code *)0x0 && (iVar8 = (*_DAT_40010968)(&local_400), iVar8 != 0)))) {
          uVar22 = local_3f0;
        }
        else {
          uVar22 = 0;
        }
        bVar39 = CARRY4(DAT_100250d8,uVar22 - DAT_100250d0);
        DAT_100250d8 = DAT_100250d8 + (uVar22 - DAT_100250d0);
        DAT_100250dc = DAT_100250dc + (uint)bVar39;
        DAT_100250d0 = uVar22;
        uVar40 = recovered_100034ac((uint)((ulonglong)DAT_100250d8 * 1000),
                                    DAT_100250dc * 1000 +
                                    (int)((ulonglong)DAT_100250d8 * 1000 >> 0x20),DAT_100250cc,0);
        uVar22 = (uint)uVar40;
        recovered_1000b810(0x10,uVar22);
        recovered_1000bbf8(&DAT_1002397c,uVar22);
        recovered_1000bbf8(&DAT_100239e4,uVar22);
        recovered_1000bbf8(&DAT_10023a4c,uVar22);
        recovered_1000bbf8(&DAT_10023ab4,uVar22);
        recovered_1000bbf8(&DAT_10023b1c,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023b84,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023bec,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023c54,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023cbc,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023d24,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023d8c,uVar22);
        recovered_1000bbf8((uint *)&DAT_10023df4,uVar22);
        if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
           ((0x177 < _DAT_40010808 && (_DAT_40010974 != (code *)0x0)))) {
          (*_DAT_40010974)(2000);
        }
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
      iVar26 = 0;
      do {
        iVar8 = *(int *)((int)&DAT_1002397c + iVar26);
        if (iVar8 != 0) {
          if (iVar8 != 8) {
            recovered_10012940((int)&DAT_1002397c + iVar26,0x14,
                               *(int *)((int)&DAT_100239c0 + iVar26) +
                               *(int *)((int)&DAT_10023998 + iVar26) +
                               (uint)(byte)(&DAT_100239c4)[iVar26] +
                               (uint)(byte)(&DAT_100239c6)[iVar26],0,0);
          }
          *(undefined4 *)((int)&DAT_1002397c + iVar26) = 0;
          (&DAT_100239d4)[iVar26] = 0;
          *(undefined4 *)((int)&DAT_100239bc + iVar26) = 0;
          *(undefined4 *)((int)&DAT_100239ac + iVar26) = 0;
          (&DAT_100239cb)[iVar26] = 1;
        }
        iVar26 = iVar26 + 0x68;
      } while (iVar26 != 0x4e0);
      recovered_1000c22c(&DAT_10020050);
      recovered_1000c22c(&DAT_10020e0c);
      recovered_1000c22c(&DAT_10021bc8);
      recovered_1000c22c(&DAT_10022984);
      iVar26 = 0;
      DAT_10024f0c = 0;
      DAT_10024f0d = 0;
      DAT_10024f0e = 0;
      DAT_10024f0f = 0;
      DAT_10024f10 = 0;
      DAT_10024f11 = 0;
      DAT_10024f12 = 0;
      DAT_10024f13 = 0;
      DAT_10024f14 = 0;
      DAT_10024f15 = 0;
      DAT_10024f16 = 0;
      DAT_10024f17 = 0;
      DAT_10024f18 = 0;
      DAT_10024f19 = 0;
      DAT_10024f1a = 0;
      DAT_10024f1b = 0;
      DAT_10024f1c = 0;
      DAT_10024f1d = 0;
      DAT_10024f1e = 0;
      DAT_10024f1f = 0;
      DAT_10024f20 = 0;
      DAT_10024f21 = 0;
      DAT_10024f22 = 0;
      DAT_10024f23 = 0;
      DAT_10024f24 = 0;
      DAT_10024f25 = 0;
      DAT_10024f26 = 0;
      DAT_10024f27 = 0;
      DAT_10024f28 = 0;
      DAT_10024f29 = 0;
      DAT_10024f2a = 0;
      DAT_10024f2b = 0;
      do {
        *(undefined1 *)((int)&DAT_10024fd0 + iVar26) = 0;
        iVar26 = iVar26 + 1;
      } while (iVar26 != 0xfc);
      uVar11 = 0;
      if (_DAT_40010800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_40010804 == 0) {
        return 0;
      }
      if (_DAT_40010808 < 0xc) {
        return 0;
      }
      goto joined_r0x10008c60;
    }
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x2b < _DAT_40010808 && (_DAT_40010828 != (code *)0x0)))) {
    pcVar7 = str_1001f077;
LAB_10008d0c:
    (*_DAT_40010828)(pcVar7);
  }
LAB_10008c08:
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x2b < _DAT_40010808)) &&
     (_DAT_40010828 != (code *)0x0)) {
    (*_DAT_40010828)(&DAT_1001ed67);
  }
  uVar11 = 1;
  if (_DAT_40010800 != 0x50414d57) {
    return 1;
  }
  if (_DAT_40010804 == 0) {
    return 1;
  }
joined_r0x10008c60:
  _DAT_40010800 = 0x50414d57;
  if ((0x33 < _DAT_40010808) && (_DAT_40010830 != (code *)0x0)) {
    (*_DAT_40010830)();
  }
  return uVar11;
}

#undef DAT_10008720
#undef DAT_10008728
#undef DAT_10008730
#undef DAT_10008738
#undef DAT_10008740
#undef DAT_10008748
#undef DAT_10008750
#undef DAT_10008758
#undef DAT_10008760
#undef DAT_10008768
#undef DAT_10008770
#undef DAT_10008778
#undef DAT_1001ec07
#undef DAT_1001ecc6
#undef DAT_1001ecd1
#undef DAT_1001ed67
#undef DAT_1001edc5
#undef DAT_1001eddc
#undef DAT_1001f24b
#undef DAT_10020050
#undef DAT_10020054
#undef DAT_10020058
#undef DAT_1002005c
#undef DAT_10020060
#undef DAT_10020064
#undef DAT_10020068
#undef DAT_1002006c
#undef DAT_10020184
#undef DAT_10020188
#undef DAT_10020190
#undef DAT_100204f5
#undef DAT_100208a0
#undef DAT_100208a1
#undef DAT_100208a2
#undef DAT_100208a3
#undef DAT_100208a8
#undef DAT_100208ac
#undef DAT_100208b0
#undef DAT_100208c4
#undef DAT_10020ace
#undef DAT_10020acf
#undef DAT_10020bd0
#undef DAT_10020bd4
#undef DAT_10020bd8
#undef DAT_10020bdc
#undef DAT_10020be0
#undef DAT_10020be1
#undef DAT_10020de4
#undef DAT_10020de8
#undef DAT_10020dec
#undef DAT_10020df4
#undef DAT_10020df8
#undef DAT_10020dfa
#undef DAT_10020dfb
#undef DAT_10020dfc
#undef DAT_10020e00
#undef DAT_10020e04
#undef DAT_10020e08
#undef DAT_10020e0c
#undef DAT_10020e14
#undef DAT_10020e18
#undef DAT_10020f44
#undef DAT_10021680
#undef DAT_10021998
#undef DAT_1002199d
#undef DAT_10021ba0
#undef DAT_10021ba4
#undef DAT_10021ba8
#undef DAT_10021bb0
#undef DAT_10021bb4
#undef DAT_10021bb6
#undef DAT_10021bb7
#undef DAT_10021bbc
#undef DAT_10021bc8
#undef DAT_10021bd0
#undef DAT_10021bd4
#undef DAT_10021d00
#undef DAT_1002243c
#undef DAT_10022754
#undef DAT_10022759
#undef DAT_1002295c
#undef DAT_10022960
#undef DAT_10022964
#undef DAT_1002296c
#undef DAT_10022970
#undef DAT_10022972
#undef DAT_10022973
#undef DAT_10022978
#undef DAT_10022984
#undef DAT_1002298c
#undef DAT_10022990
#undef DAT_10022abc
#undef DAT_100231f8
#undef DAT_10023510
#undef DAT_10023515
#undef DAT_10023718
#undef DAT_1002371c
#undef DAT_10023720
#undef DAT_10023728
#undef DAT_1002372c
#undef DAT_1002372e
#undef DAT_1002372f
#undef DAT_10023734
#undef DAT_10023740
#undef DAT_10023742
#undef DAT_10023743
#undef DAT_10023782
#undef DAT_10023802
#undef DAT_10023804
#undef DAT_10023808
#undef DAT_1002380c
#undef DAT_10023810
#undef DAT_10023910
#undef DAT_1002391a
#undef DAT_10023950
#undef DAT_10023970
#undef DAT_10023974
#undef DAT_10023978
#undef DAT_1002397c
#undef DAT_1002398c
#undef DAT_10023990
#undef DAT_10023998
#undef DAT_100239a4
#undef DAT_100239ac
#undef DAT_100239b4
#undef DAT_100239bc
#undef DAT_100239c0
#undef DAT_100239c4
#undef DAT_100239c6
#undef DAT_100239cb
#undef DAT_100239d4
#undef DAT_100239dc
#undef DAT_100239e4
#undef DAT_10023a4c
#undef DAT_10023ab4
#undef DAT_10023b1c
#undef DAT_10023b84
#undef DAT_10023bec
#undef DAT_10023c54
#undef DAT_10023cbc
#undef DAT_10023d24
#undef DAT_10023d8c
#undef DAT_10023df4
#undef DAT_10023e5c
#undef DAT_10023e62
#undef DAT_10023e63
#undef DAT_10023e64
#undef DAT_10023ed8
#undef DAT_10023edc
#undef DAT_10023ee8
#undef DAT_10023eec
#undef DAT_10023ef0
#undef DAT_10023ef4
#undef DAT_10023ef8
#undef DAT_10023efc
#undef DAT_10023f00
#undef DAT_10023f04
#undef DAT_10024f08
#undef DAT_10024f0c
#undef DAT_10024f0d
#undef DAT_10024f0e
#undef DAT_10024f0f
#undef DAT_10024f10
#undef DAT_10024f11
#undef DAT_10024f12
#undef DAT_10024f13
#undef DAT_10024f14
#undef DAT_10024f15
#undef DAT_10024f16
#undef DAT_10024f17
#undef DAT_10024f18
#undef DAT_10024f19
#undef DAT_10024f1a
#undef DAT_10024f1b
#undef DAT_10024f1c
#undef DAT_10024f1d
#undef DAT_10024f1e
#undef DAT_10024f1f
#undef DAT_10024f20
#undef DAT_10024f21
#undef DAT_10024f22
#undef DAT_10024f23
#undef DAT_10024f24
#undef DAT_10024f25
#undef DAT_10024f26
#undef DAT_10024f27
#undef DAT_10024f28
#undef DAT_10024f29
#undef DAT_10024f2a
#undef DAT_10024f2b
#undef DAT_10024f2c
#undef DAT_10024f4b
#undef DAT_10024f4c
#undef DAT_10024f50
#undef DAT_10024f80
#undef DAT_10024f84
#undef DAT_10024fd0
#undef DAT_100250cc
#undef DAT_100250d0
#undef DAT_100250d8
#undef DAT_100250dc
#undef DAT_100250e0
#undef DAT_100250e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010820
#undef DAT_40010828
#undef DAT_4001082c
#undef DAT_40010830
#undef DAT_40010834
#undef DAT_40010838
#undef DAT_4001084c
#undef DAT_40010894
#undef DAT_40010898
#undef DAT_4001089c
#undef DAT_400108f8
#undef DAT_40010924
#undef DAT_40010968
#undef DAT_40010974
#undef DAT_400109fc
#undef DAT_40010a04
#undef EXT_00000004
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010820
#undef _DAT_40010828
#undef _DAT_4001082c
#undef _DAT_40010830
#undef _DAT_40010834
#undef _DAT_40010838
#undef _DAT_4001084c
#undef _DAT_40010894
#undef _DAT_40010898
#undef _DAT_4001089c
#undef _DAT_400108f8
#undef _DAT_40010924
#undef _DAT_40010968
#undef _DAT_40010974
#undef _DAT_400109fc
#undef _DAT_40010a04
#undef str_1001ec2a
#undef str_1001ec3e
#undef str_1001ec6c
#undef str_1001ec93
#undef str_1001ecc8
#undef str_1001ecd5
#undef str_1001ed00
#undef str_1001ed07
#undef str_1001ed44
#undef str_1001ed52
#undef str_1001ed6a
#undef str_1001ed7a
#undef str_1001ed9a
#undef str_1001edca
#undef str_1001edd3
#undef str_1001ede1
#undef str_1001ede9
#undef str_1001edf1
#undef str_1001edf9
#undef str_1001ee00
#undef str_1001ee09
#undef str_1001ee14
#undef str_1001ee1d
#undef str_1001ee2a
#undef str_1001ee32
#undef str_1001ee66
#undef str_1001ee9d
#undef str_1001eedf
#undef str_1001ef28
#undef str_1001ef49
#undef str_1001ef66
#undef str_1001ef81
#undef str_1001efaa
#undef str_1001efce
#undef str_1001effe
#undef str_1001f01b
#undef str_1001f02c
#undef str_1001f036
#undef str_1001f077
#undef str_1001f09c
#undef str_1001f0ba
#undef str_1001f0cf
#undef str_1001f0fd
#undef str_1001f171
#undef str_1001f189
#undef str_1001f1aa
#undef str_1001f1b0
#undef str_1001f1c4
#undef str_1001f1ea
#undef str_1001f1fa
#undef str_1001f211
#undef str_1001f21f
#undef str_1001f22e
#undef str_1001f250
#undef str_1001f259
#undef str_1001f262
#undef str_1001f27f
#undef str_1001f711
#undef str_1001f71d
#undef str_1001f73c
#undef str_1001f744
#undef str_1001f750
#undef str_1001f9ee
#undef str_1001fc94
#undef local_444
#undef local_438
#undef local_434
#undef local_40c
#undef local_408
#undef local_400
#undef local_3f8
#undef local_3f4
#undef local_3f0
#undef local_3e8
#undef local_3e7
#undef local_3e6
#undef local_3e5
#undef local_3e4
#undef local_3e3
#undef local_3e2
#undef local_3e1
#undef local_3e0
#undef local_3d8
#undef local_3d0
#undef local_3c8
#undef local_3c7
#undef local_3c6
#undef local_3c5
#undef local_3c4
#undef local_3c3
#undef local_3c2
#undef local_3c1
#undef local_3c0
#undef local_3bc
#undef local_398
#undef local_380
#undef local_338
#undef local_200
#undef local_1ff
#undef local_1fe
#undef local_1fd
#undef local_1fc
#undef local_1fb
#undef local_1fa
#undef local_1f9
#undef local_1f8
#undef local_1f7
#undef local_1f6
#undef local_1f5
#undef local_1f4
#undef local_1f3
#undef local_1f2
#undef local_1f1
#undef local_1f0
#undef local_1ef
#undef local_1ee
#undef local_1ed
#undef local_1ec
#undef local_1eb
#undef local_1ea
#undef local_1e9
#undef local_1e8
#undef local_1e7
#undef local_1e6
#undef local_1e5
#undef local_1e4
#undef local_1e3
#undef local_1e2
#undef local_1e1
#undef local_1e0
#undef local_1df
#undef local_1de
#undef local_1dd
#undef local_1dc
#undef local_1db
#undef local_1da
#undef local_1d9
#undef local_1d8
#undef local_1d7
#undef local_1d6
#undef local_1d5
#undef local_1d4
#undef local_1d3
#undef local_1d2
#undef local_1d1
#undef local_1d0
#undef local_1cf
#undef local_1ce
#undef local_1cd
#undef local_1cc
#undef local_1cb
#undef local_1ca
#undef local_1c9
#undef local_1c8
#undef local_1c7
#undef local_1c6
#undef local_1c5
#undef local_1c4
#undef local_1c3
#undef local_1c2
#undef local_1c1
#undef local_140
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a7
#undef local_a6
#undef local_a5
#undef local_a4
#undef local_a3
#undef local_a2
#undef local_a1
#undef local_40
#undef uStack_3ec
#undef uStack_3df
#undef uStack_3de
#undef uStack_3dd
#undef uStack_3dc
#undef uStack_3db
#undef uStack_3da
#undef uStack_3d9
#undef uStack_3cf
#undef uStack_3ce
#undef uStack_3cd
#undef uStack_3cc
#undef uStack_3cb
#undef uStack_3ca
#undef uStack_3c9
#undef uStack_3be
#undef uStack_3bd
#undef auStack_3b8
#undef auStack_300
#undef auStack_1c0

/* Recovered kernel console boundary; Pooka's Free Software License. */
void recovered_1000b680(char *text) {
    volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
    if(api[0]==0x50414d57U && api[1] && api[2]>=0x2cU && api[0x28/4])
        ((void (*)(char *))(uintptr_t)api[0x28/4])(text);
    if(api[0]==0x50414d57U && api[1] && api[2]>=0x2cU && api[0x28/4])
        ((void (*)(char *))(uintptr_t)api[0x28/4])("\r\n");
}


/* Recovered variadic console formatting; Pooka's Free Software License. */
void recovered_1000b728(char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_100062d0(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_1000b680(text);
}


#undef DAT_1001fc88
#define DAT_1001fc88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10b0U)))
#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e63
#define DAT_10023e63 (*(byte *)(((uintptr_t)pf_module_state + 0x528bU)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023f00
#define DAT_10023f00 (*(int *)(((uintptr_t)pf_module_state + 0x5328U)))
#undef DAT_10023f08
#define DAT_10023f08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10023f14
#define DAT_10023f14 (*(ushort *)(((uintptr_t)pf_module_state + 0x533cU)))
#undef DAT_10023f16
#define DAT_10023f16 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x533eU)))
#undef DAT_10023f18
#define DAT_10023f18 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5340U)))
#undef DAT_10023f1a
#define DAT_10023f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5342U)))
#undef DAT_10023f1b
#define DAT_10023f1b (*(char *)(((uintptr_t)pf_module_state + 0x5343U)))
#undef DAT_10023f1c
#define DAT_10023f1c (*(ushort *)(((uintptr_t)pf_module_state + 0x5344U)))
#undef DAT_10023f1e
#define DAT_10023f1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5346U)))
#undef DAT_10023f1f
#define DAT_10023f1f (*(char *)(((uintptr_t)pf_module_state + 0x5347U)))
#undef DAT_10023f24
#define DAT_10023f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534cU)))
#undef DAT_10023f28
#define DAT_10023f28 (*(ushort *)(((uintptr_t)pf_module_state + 0x5350U)))
#undef DAT_10023f2e
#define DAT_10023f2e (*(uint *)(((uintptr_t)pf_module_state + 0x5356U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010928
#define DAT_40010928 (*(uint8_t *)(0x40010928U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010928
#define _DAT_40010928 (*(code * *)(0x40010928U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000b810(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  int iVar9;
  uint unaff_r9;
  bool bVar10;

  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    iVar9 = 0;
    do {
      local_3c = 0;
      if (_DAT_40010800 != 0x50414d57) {
        return iVar9;
      }
      if (_DAT_40010804 == 0) {
        return iVar9;
      }
      if (_DAT_40010808 < 300) {
        return iVar9;
      }
      if (_DAT_40010928 == (code *)0x0) {
        return iVar9;
      }
      iVar3 = (*_DAT_40010928)(&DAT_10023f08,0x800,&local_3c);
      if (iVar3 == 0) {
        return iVar9;
      }
      if (local_3c < 0xe) {
        return iVar9;
      }
      DAT_10023f00 = DAT_10023f00 + 1;
      recovered_10004080((byte *)&local_38,0,0x18);
      local_38 = 0x18;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
         ((_DAT_40010968 != (code *)0x0 && (iVar3 = (*_DAT_40010968)(&local_38), iVar3 != 0)))) {
        local_34 = local_28;
      }
      else {
        local_34 = 0;
      }
      local_38 = local_3c;
      recovered_1000c340((int)&local_38,8);
      iVar3 = recovered_100046ac((uint *)&DAT_10023f08,(uint *)&DAT_10023e5c,6);
      uVar7 = extraout_r3;
      if (iVar3 == 0) {
LAB_1000b960:
        uVar5 = DAT_10023f2e;
        uVar2 = DAT_10023f1c;
        uVar4 = (uint)DAT_10023f14 << 0x18 | (uint)(DAT_10023f14 >> 8) << 0x10;
        if (uVar4 == 0x8000000) {
          if (0x21 < local_3c) {
            if (((byte)DAT_10023f16 & 0xf0) == 0x40) {
              uVar4 = (byte)DAT_10023f16 & 0xf;
              uVar5 = uVar4 * 4;
              if (0x13 < uVar5) {
                uVar7 = (uint)DAT_10023f18;
                unaff_r9 = (uVar7 & 0xff) << 8 | (uint)(DAT_10023f18 >> 8);
              }
              if ((0x13 < uVar5 && uVar5 <= unaff_r9) &&
                 (((uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10) >> 0x10) + 0xe <= local_3c)) {
                uVar7 = 0;
                uVar8 = 0;
                do {
                  uVar8 = uVar8 + (((uint)*(ushort *)((int)&DAT_10023f16 + uVar7) << 0x18 |
                                   (uint)(*(ushort *)((int)&DAT_10023f16 + uVar7) >> 8) << 0x10) >>
                                  0x10);
                  uVar6 = uVar7 + 3;
                  uVar7 = uVar7 + 2;
                } while (uVar6 < uVar5);
                if (0xffff < uVar8) {
                  do {
                    uVar8 = (uVar8 >> 0x10) + (uVar8 & 0xffff);
                  } while (uVar8 >> 0x10 != 0);
                }
                if ((uVar8 == 0xffff) && (PF_PART1(DAT_10023f1c, 1) == '\0' && (DAT_10023f1c & 0x3f) == 0))
                {
                  if (DAT_10023f1f == '\x11') {
                    uVar7 = unaff_r9 + uVar4 * -4;
                    if (((7 < uVar7) &&
                        (uVar8 = (*(ushort *)(&DAT_10023f1a + uVar5) & 0xff) << 8 |
                                 (uint)(*(ushort *)(&DAT_10023f1a + uVar5) >> 8),
                        7 < uVar8 && uVar8 <= uVar7)) &&
                       (((uint)(&DAT_10023f18)[uVar4 * 2] << 0x18 |
                        (uint)((&DAT_10023f18)[uVar4 * 2] >> 8) << 0x10) == 0x440000)) {
                      recovered_10011aac(&DAT_10023f1e + uVar5,uVar8 - 8,param_2);
                    }
                  }
                  else {
                    uVar8 = (uint)DAT_10023e63;
                    bVar10 = uVar8 == 1;
                    if (bVar10) {
                      uVar8 = CONCAT22(DAT_10023f28,PF_PART2(DAT_10023f24, 2)) << 0x18 |
                              (uint)(PF_PART2(DAT_10023f24, 2) >> 8) << 0x10 | (DAT_10023f28 & 0xff) << 8 |
                              (uint)(DAT_10023f28 >> 8);
                      uVar7 = DAT_10023e64;
                    }
                    if (bVar10 && uVar8 == uVar7) {
                      if (DAT_10023f1f == '\x01') {
                        recovered_10012328(uVar5,unaff_r9 + uVar4 * -4);
                      }
                      else if (DAT_10023f1f == '\x06') {
                        recovered_10011da8(uVar5,unaff_r9 + uVar4 * -4,param_2);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (((uVar4 == 0x8060000) && (0x29 < local_3c)) &&
                ((((uint)DAT_10023f16 << 0x18 | (uint)(DAT_10023f16 >> 8) << 0x10) == 0x10000 &&
                 (((uint)DAT_10023f18 << 0x18 | (uint)(DAT_10023f18 >> 8) << 0x10) == 0x8000000))))
        {
          cVar1 = DAT_10023f1a;
          if (DAT_10023f1a == '\x06') {
            cVar1 = DAT_10023f1b;
          }
          if (DAT_10023f1a == '\x06' && cVar1 == '\x04') {
            uVar7 = CONCAT22(PF_PART2(DAT_10023f24, 2),(ushort)DAT_10023f24) << 0x18 |
                    (uint)((ushort)DAT_10023f24 >> 8) << 0x10 | (PF_PART2(DAT_10023f24, 2) & 0xff) << 8 |
                    (uint)(PF_PART2(DAT_10023f24, 2) >> 8);
            if (uVar7 != 0) {
              recovered_10011984(uVar7,&DAT_10023f1e);
            }
            if ((ushort)(uVar2 << 8 | uVar2 >> 8) == 1) {
              uVar4 = (uint)DAT_10023e63;
              bVar10 = uVar4 == 1;
              if (bVar10) {
                uVar4 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                        uVar5 >> 0x18;
                uVar5 = DAT_10023e64;
              }
              if (bVar10 && uVar4 == uVar5) {
                recovered_100038f0((undefined8 *)&local_38,(undefined8 *)&DAT_10023f1e,
                                   (undefined8 *)0x6);
                recovered_10011850(2,&local_38,uVar7,&local_38);
              }
            }
          }
        }
      }
      else {
        iVar3 = recovered_100046ac((uint *)&DAT_10023f08,(uint *)&DAT_1001fc88,6);
        uVar7 = extraout_r3_00;
        if (iVar3 == 0) goto LAB_1000b960;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_1);
  }
  return param_1;
}

#undef DAT_1001fc88
#undef DAT_10023e5c
#undef DAT_10023e63
#undef DAT_10023e64
#undef DAT_10023f00
#undef DAT_10023f08
#undef DAT_10023f14
#undef DAT_10023f16
#undef DAT_10023f18
#undef DAT_10023f1a
#undef DAT_10023f1b
#undef DAT_10023f1c
#undef DAT_10023f1e
#undef DAT_10023f1f
#undef DAT_10023f24
#undef DAT_10023f28
#undef DAT_10023f2e
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010928
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010928
#undef _DAT_40010968
#undef local_3c
#undef local_38
#undef local_34
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbf8
 */

void recovered_1000bbf8(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = *param_1;
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 == 1) {
    if (29999 < param_2 - param_1[0x18]) {
      recovered_10012940((int)param_1,0x14,
                         param_1[0x11] + param_1[7] + (uint)(byte)param_1[0x12] +
                         (uint)*(byte *)((int)param_1 + 0x4a),0,0);
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)((int)param_1 + 0x4f) = 1;
      param_1[0x10] = 0;
      param_1[0xc] = 0;
      *param_1 = 0;
      return;
    }
  }
  else {
    if (uVar3 == 8) {
      if (param_2 - param_1[0x18] < 1000) {
        return;
      }
      *(undefined1 *)(param_1 + 0x16) = 0;
      param_1[0x10] = 0;
      param_1[0xc] = 0;
      *param_1 = 0;
      return;
    }
    if (((uVar3 & 0xfffffffc) == 4) && (4999 < param_2 - param_1[0x18])) {
      recovered_10012940((int)param_1,0x14,
                         param_1[0x11] + param_1[7] + (uint)(byte)param_1[0x12] +
                         (uint)*(byte *)((int)param_1 + 0x4a),0,0);
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)((int)param_1 + 0x4f) = 1;
      param_1[0x10] = 0;
      param_1[0xc] = 0;
      *param_1 = 0;
      return;
    }
  }
  if (((char)param_1[0x16] != '\x01') || ((int)(param_2 - param_1[0x15]) < 0)) goto LAB_1000be48;
  if (7 < param_1[0x17]) {
    if ((uVar3 | 8) != 8) {
      recovered_10012940((int)param_1,0x14,
                         param_1[0x11] + param_1[7] + (uint)(byte)param_1[0x12] +
                         (uint)*(byte *)((int)param_1 + 0x4a),0,0);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
    param_1[0x10] = 0;
    param_1[0xc] = 0;
    *param_1 = 0;
    *(undefined1 *)((int)param_1 + 0x4f) = 1;
    return;
  }
  param_1[0x17] = param_1[0x17] + 1;
  if (uVar3 == 1) {
    uVar4 = param_1[7];
    bVar1 = 0x12;
LAB_1000bddc:
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = param_1[0x11];
    if (uVar3 == 0) {
      if (*(char *)((int)param_1 + 0x4a) != '\x01') {
        *(undefined1 *)(param_1 + 0x16) = 0;
        return;
      }
      uVar4 = param_1[7];
      bVar1 = 0x11;
      goto LAB_1000bddc;
    }
    uVar4 = param_1[7];
    uVar5 = param_1[0xf];
    uVar2 = param_1[9];
    if (uVar3 < param_1[9]) {
      uVar2 = uVar3;
    }
    bVar1 = 0x18;
  }
  recovered_10012940((int)param_1,bVar1,uVar4,uVar5,uVar2);
  *(undefined1 *)(param_1 + 0x16) = 1;
  uVar3 = 8000;
  if (param_1[0x14] << 1 < 8000) {
    uVar3 = param_1[0x14] << 1;
  }
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar3 + param_2;
LAB_1000be48:
  if (*(char *)((int)param_1 + 0x4e) == '\x01') {
    recovered_10012e18(param_1,param_2);
    return;
  }
  return;
}


#undef DAT_1001ec07
#define DAT_1001ec07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_100250cc
#define DAT_100250cc (*(uint *)(((uintptr_t)pf_module_state + 0x64f4U)))
#undef DAT_100250d0
#define DAT_100250d0 (*(int *)(((uintptr_t)pf_module_state + 0x64f8U)))
#undef DAT_100250d8
#define DAT_100250d8 (*(uint *)(((uintptr_t)pf_module_state + 0x6500U)))
#undef DAT_100250dc
#define DAT_100250dc (*(int *)(((uintptr_t)pf_module_state + 0x6504U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#undef str_1001f75c
#define str_1001f75c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb84U)))
#define local_38 (*(uint (*)[14])(pf_stack_frame + 24))
#define local_28 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be98
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000be98(int param_1,uint param_2,undefined8 *param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 uVar9;

  if (*(char *)(param_1 + 0xdb4) == '\0') {
    recovered_100195a8((void *)param_1,str_1001f75c,param_3);
  }
  puVar1 = *(uint **)(param_1 + 8);
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(param_1 + 0xc))) {
    uVar2 = *puVar1 & 0xfffffffe;
    bVar8 = uVar2 == 2;
    if (bVar8) {
      uVar2 = (uint)*(byte *)(param_1 + 0xdb4);
    }
    if (bVar8 && uVar2 == 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x140);
      local_38[0] = CONCAT31(PF_PART3(local_38[0], 1),1);
      recovered_100038f0(puVar7,(undefined8 *)local_38,(undefined8 *)0x1);
      local_38[0] = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8
                    | param_2 >> 0x18;
      recovered_100038f0((undefined8 *)((int)puVar7 + 1),(undefined8 *)local_38,
                         (undefined8 *)&UndefinedInstruction);
      puVar3 = (undefined8 *)recovered_100049b4((int)param_3);
      local_38[0] = (int)puVar3 << 0x18 | ((uint)puVar3 >> 8 & 0xff) << 0x10 |
                    ((uint)puVar3 >> 0x10 & 0xff) << 8 | (uint)puVar3 >> 0x18;
      recovered_100038f0((undefined8 *)((int)puVar7 + 5),(undefined8 *)local_38,
                         (undefined8 *)&UndefinedInstruction);
      uVar2 = 9;
      if (puVar3 < (undefined8 *)0x1ff8) {
        if (puVar3 != (undefined8 *)0x0) {
          recovered_100038f0((undefined8 *)((int)puVar7 + 9),param_3,puVar3);
        }
        uVar2 = (int)puVar3 + 9;
      }
      puVar4 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x2fU));
      local_38[0] = (int)puVar4 << 0x18 | ((uint)puVar4 >> 8 & 0xff) << 0x10 |
                    ((uint)puVar4 >> 0x10 & 0xff) << 8 | (uint)puVar4 >> 0x18;
      bVar8 = (undefined8 *)0x1ff6 < puVar3;
      if (puVar3 < (undefined8 *)0x1ff8) {
        bVar8 = 0x1ffc < uVar2;
      }
      if (!bVar8) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar2),(undefined8 *)local_38,
                           (undefined8 *)&UndefinedInstruction);
        puVar3 = (undefined8 *)(0x1ffc - uVar2);
        uVar2 = uVar2 + 4;
        if (puVar4 <= puVar3) {
          if (puVar4 != (undefined8 *)0x0) {
            recovered_100038f0((undefined8 *)((int)puVar7 + uVar2),(undefined8 *)&DAT_1001ec07,
                               puVar4);
          }
          uVar2 = (int)puVar4 + uVar2;
        }
      }
      recovered_100136d0(param_1,puVar7,uVar2);
    }
  }
  *(undefined1 *)(param_1 + 0xdb4) = 1;
  iVar6 = 0;
  recovered_10004080((byte *)local_38,0,0x18);
  local_38[0] = 0x18;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
     ((_DAT_40010968 != (code *)0x0 && (iVar5 = (*_DAT_40010968)(local_38), iVar5 != 0)))) {
    iVar6 = local_28;
  }
  bVar8 = CARRY4(DAT_100250d8,iVar6 - DAT_100250d0);
  DAT_100250d8 = DAT_100250d8 + (iVar6 - DAT_100250d0);
  DAT_100250dc = DAT_100250dc + (uint)bVar8;
  puVar1 = *(uint **)(param_1 + 8);
  DAT_100250d0 = iVar6;
  uVar9 = recovered_100034ac((uint)((ulonglong)DAT_100250d8 * 1000),
                             DAT_100250dc * 1000 + (int)((ulonglong)DAT_100250d8 * 1000 >> 0x20),
                             DAT_100250cc,0);
  *(uint *)(param_1 + 0xdb8) = (uint)uVar9;
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(param_1 + 0xc))) {
    if (*puVar1 - 2 < 2) {
      *(undefined1 *)((int)puVar1 + 0x49) = 1;
      recovered_10012e18(puVar1,(uint)uVar9);
    }
    else if (*puVar1 == 1) {
      recovered_10012940((int)puVar1,0x14,
                         puVar1[0x11] + puVar1[7] + (uint)(byte)puVar1[0x12] +
                         (uint)*(byte *)((int)puVar1 + 0x4a),0,0);
      *(undefined1 *)(puVar1 + 0x16) = 0;
      *(undefined1 *)((int)puVar1 + 0x4f) = 1;
      puVar1[0x10] = 0;
      puVar1[0xc] = 0;
      *puVar1 = 0;
    }
  }
  return;
}

#undef DAT_1001ec07
#undef DAT_100250cc
#undef DAT_100250d0
#undef DAT_100250d8
#undef DAT_100250dc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef EXT_00000004
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef str_1001f75c
#undef local_38
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1b0
 */

void recovered_1000c1b0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((*param_1 | 8) != 8) {
    recovered_10012940((int)param_1,0x14,
                       param_1[0x11] + param_1[7] + (uint)(byte)param_1[0x12] +
                       (uint)*(byte *)((int)param_1 + 0x4a),0,0);
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 0x4f) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c22c
 */

void recovered_1000c22c(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;

  piVar3 = *(int **)(param_1 + 8);
  if (((piVar3 != (int *)0x0) && (piVar3[1] == *(int *)(param_1 + 0xc))) && (*piVar3 - 1U < 3)) {
    recovered_10012940((int)piVar3,0x14,
                       piVar3[0x11] + piVar3[7] + (uint)*(byte *)(piVar3 + 0x12) +
                       (uint)*(byte *)((int)piVar3 + 0x4a),0,0);
    *(undefined1 *)((int)piVar3 + 0x4f) = 1;
    *(undefined1 *)(piVar3 + 0x16) = 0;
    piVar3[0x10] = 0;
    piVar3[0xc] = 0;
    *piVar3 = 0;
  }
  iVar1 = 0x14c;
  do {
    param_1[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x2e8);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 0x2e8] = 0;
    iVar1 = iVar2;
  } while (iVar2 != 0x19c);
  iVar1 = -0x19c;
  iVar2 = -0x19c;
  do {
    bVar4 = iVar2 != -1;
    param_1[iVar2 + 0x658] = 0;
    iVar2 = iVar2 + 1;
  } while (bVar4);
  do {
    bVar4 = iVar1 != -1;
    param_1[iVar1 + 0x7f4] = 0;
    iVar1 = iVar1 + 1;
  } while (bVar4);
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  return;
}


#undef DAT_1000c4f0
#define DAT_1000c4f0 (*(uint64_t *)(0x1000c4f0U))
#undef DAT_1000c4f8
#define DAT_1000c4f8 (*(uint64_t *)(0x1000c4f8U))
#undef DAT_1000c500
#define DAT_1000c500 (*(uint64_t *)(0x1000c500U))
#undef DAT_1000c508
#define DAT_1000c508 (*(uint64_t *)(0x1000c508U))
#undef DAT_1000c510
#define DAT_1000c510 (*(uint64_t *)(0x1000c510U))
#undef DAT_1000c518
#define DAT_1000c518 (*(uint64_t *)(0x1000c518U))
#undef DAT_1000c520
#define DAT_1000c520 (*(uint64_t *)(0x1000c520U))
#undef DAT_1000c528
#define DAT_1000c528 (*(uint64_t *)(0x1000c528U))
#undef DAT_10024fd0
#define DAT_10024fd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x63f8U)))
#undef DAT_10024fd8
#define DAT_10024fd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6400U)))
#undef DAT_10024fe0
#define DAT_10024fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6408U)))
#undef DAT_10024fe8
#define DAT_10024fe8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6410U)))
#undef DAT_10024ff0
#define DAT_10024ff0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6418U)))
#undef DAT_10024ff8
#define DAT_10024ff8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6420U)))
#undef DAT_10025000
#define DAT_10025000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6428U)))
#undef DAT_10025008
#define DAT_10025008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6430U)))
#undef DAT_10025010
#define DAT_10025010 (*(uint *)(((uintptr_t)pf_module_state + 0x6438U)))
#undef DAT_10025014
#define DAT_10025014 (*(int *)(((uintptr_t)pf_module_state + 0x643cU)))
#undef DAT_10025018
#define DAT_10025018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6440U)))
#undef DAT_10025098
#define DAT_10025098 (*(int *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_100250c4
#define DAT_100250c4 (*(int *)(((uintptr_t)pf_module_state + 0x64ecU)))
#undef DAT_100250c8
#define DAT_100250c8 (*(char *)(((uintptr_t)pf_module_state + 0x64f0U)))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c340
 */

void recovered_1000c340(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;

  puVar2 = (undefined8 *)&local_28;
  iVar1 = 0;
  local_24 = 0;
  local_28 = 0;
  if (DAT_100250c8 == '\0' && DAT_100250c4 == 0) {
    DAT_10024fd0 = (*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
    DAT_10024fd8 = (*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL});
    DAT_10024fe0 = (*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL});
    DAT_10024fe8 = (*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL});
    DAT_10024ff0 = (*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL});
    DAT_10024ff8 = (*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL});
    DAT_10025000 = (*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL});
    DAT_10025008 = (*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL});
    DAT_10025098 = 0;
    DAT_10025010 = 8;
  }
  else {
    bVar5 = 0xfffffff7 < DAT_10025010;
    DAT_10025010 = DAT_10025010 + 8;
    iVar1 = DAT_10025014 + (uint)bVar5;
  }
  puVar3 = (undefined8 *)&SupervisorCall;
  DAT_10025014 = iVar1;
  do {
    puVar4 = (undefined8 *)(0x80 - DAT_10025098);
    if (puVar3 < (undefined8 *)(0x80 - DAT_10025098)) {
      puVar4 = puVar3;
    }
    recovered_100038f0((undefined8 *)(&DAT_10025018 + DAT_10025098),puVar2,puVar4);
    DAT_10025098 = DAT_10025098 + (int)puVar4;
    if (DAT_10025098 == 0x80) {
      recovered_1000c530((uint *)&DAT_10024fd0,((uintptr_t)pf_module_state + 0x6440U));
      DAT_10025098 = 0;
    }
    puVar3 = (undefined8 *)((int)puVar3 - (int)puVar4);
    puVar2 = (undefined8 *)((int)puVar2 + (int)puVar4);
  } while (puVar3 != (undefined8 *)0x0);
  if (param_1 != 0 && param_2 != 0) {
    bVar5 = CARRY4(DAT_10025010,param_2);
    DAT_10025010 = DAT_10025010 + param_2;
    DAT_10025014 = DAT_10025014 + (uint)bVar5;
    do {
      puVar2 = (undefined8 *)(0x80U - DAT_10025098);
      if (param_2 < (undefined8 *)(0x80U - DAT_10025098)) {
        puVar2 = (undefined8 *)param_2;
      }
      recovered_100038f0((undefined8 *)(&DAT_10025018 + DAT_10025098),(undefined8 *)param_1,puVar2);
      DAT_10025098 = DAT_10025098 + (int)puVar2;
      if (DAT_10025098 == 0x80) {
        recovered_1000c530((uint *)&DAT_10024fd0,((uintptr_t)pf_module_state + 0x6440U));
        DAT_10025098 = 0;
      }
      param_2 = param_2 - (int)puVar2;
      param_1 = param_1 + (int)puVar2;
    } while ((undefined8 *)param_2 != (undefined8 *)0x0);
  }
  DAT_100250c4 = DAT_100250c4 + 1;
  return;
}

#undef DAT_1000c4f0
#undef DAT_1000c4f8
#undef DAT_1000c500
#undef DAT_1000c508
#undef DAT_1000c510
#undef DAT_1000c518
#undef DAT_1000c520
#undef DAT_1000c528
#undef DAT_10024fd0
#undef DAT_10024fd8
#undef DAT_10024fe0
#undef DAT_10024fe8
#undef DAT_10024ff0
#undef DAT_10024ff8
#undef DAT_10025000
#undef DAT_10025008
#undef DAT_10025010
#undef DAT_10025014
#undef DAT_10025018
#undef DAT_10025098
#undef DAT_100250c4
#undef DAT_100250c8
#undef EXT_00000008
#undef local_28
#undef local_24

#undef DAT_1001f770
#define DAT_1001f770 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb98U)))
#undef DAT_1001f774
#define DAT_1001f774 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb9cU)))
#define local_2d0 (*(uint *)(pf_stack_frame + 16))
#define local_2c8 (*(uint *)(pf_stack_frame + 24))
#define local_2c4 (*(uint *)(pf_stack_frame + 28))
#define local_2c0 (*(uint *)(pf_stack_frame + 32))
#define local_2bc (*(uint *)(pf_stack_frame + 36))
#define local_2b8 (*(uint *)(pf_stack_frame + 40))
#define local_2b4 (*(uint *)(pf_stack_frame + 44))
#define local_2b0 (*(uint *)(pf_stack_frame + 48))
#define local_2a4 (*(uint *)(pf_stack_frame + 60))
#define local_2a0 (*(uint (*)[168])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c530
 */

void recovered_1000c530(uint *param_1,int param_2)

{
  unsigned char pf_stack_frame[768] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6; uint pf_schedule_low, pf_schedule_high;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;

  iVar6 = 0;
  do {
    uVar7 = *(uint *)(param_2 + iVar6);
    uVar2 = ((uint *)(param_2 + iVar6))[1];
    *(uint *)((int)local_2a0 + iVar6) =
         uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
    iVar15 = iVar6 + 8;
    *(uint *)((int)local_2a0 + iVar6 + 4) =
         uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
    iVar6 = iVar15;
  } while (iVar15 != 0x80);
  pf_schedule_low=local_2a0[0]; pf_schedule_high=local_2a0[1]; iVar6 = -0x200;
  do {
    uVar2 = *(uint *)((int)local_2a0 + iVar6 + 0x208);
    uVar7 = *(uint *)((int)local_2a0 + iVar6 + 0x20c);
    uVar24 = *(uint *)((int)local_2a0 + iVar6 + 0x248);
    uVar10 = (uVar7 << 0x1f | uVar2 >> 1) ^ (uVar7 << 0x18 | uVar2 >> 8) ^
             (uVar2 >> 7 | uVar7 << 0x19);
    uVar16 = uVar10 + pf_schedule_low;
    uVar11 = *(uint *)((int)local_2a0 + iVar6 + 0x274);
    uVar25 = uVar16 + uVar24;
    uVar12 = *(uint *)((int)local_2a0 + iVar6 + 0x270);
    uVar13 = (uVar11 << 0xd | uVar12 >> 0x13) ^ (uVar12 << 3 | uVar11 >> 0x1d) ^
             (uVar12 >> 6 | uVar11 << 0x1a);
    *(uint *)((int)local_2a0 + iVar6 + 0x280) = uVar25 + uVar13;
    iVar15 = iVar6 + 8;
    *(uint *)((int)local_2a0 + iVar6 + 0x284) =
         ((uVar2 << 0x1f | uVar7 >> 1) ^ (uVar2 << 0x18 | uVar7 >> 8) ^ uVar7 >> 7) + pf_schedule_high +
         (uint)CARRY4(uVar10,pf_schedule_low) + *(int *)((int)local_2a0 + iVar6 + 0x24c) +
         (uint)CARRY4(uVar16,uVar24) +
         ((uVar12 << 0xd | uVar11 >> 0x13) ^ (uVar11 << 3 | uVar12 >> 0x1d) ^ uVar11 >> 6) +
         (uint)CARRY4(uVar25,uVar13);
    pf_schedule_high = uVar7;
    iVar6 = iVar15;
    pf_schedule_low = uVar2;
  } while (iVar15 != 0);
  uVar8 = *param_1;
  uVar3 = param_1[0xe];
  uVar4 = param_1[0xc];
  uVar19 = param_1[10];
  uVar14 = param_1[8];
  uVar21 = param_1[6];
  uVar17 = param_1[2];
  uVar5 = param_1[4];
  uVar2 = uVar21;
  uVar7 = param_1[0xf];
  uVar10 = uVar3;
  uVar11 = uVar17;
  uVar12 = uVar19;
  uVar13 = param_1[0xb];
  uVar16 = param_1[3];
  iVar6 = 0;
  local_2d0 = param_1[7];
  uVar24 = param_1[1];
  uVar25 = param_1[9];
  uVar9 = uVar14;
  uVar1 = uVar8;
  uVar22 = param_1[0xd];
  uVar20 = uVar4;
  uVar23 = param_1[5];
  uVar18 = uVar5;
  do {
    local_2a4 = uVar18;
    local_2b0 = uVar23;
    local_2b4 = uVar20;
    local_2b8 = uVar22;
    local_2bc = uVar1;
    local_2c0 = uVar9;
    local_2c4 = uVar25;
    local_2c8 = uVar24;
    uVar23 = uVar16;
    uVar22 = uVar13;
    uVar20 = uVar12;
    uVar18 = uVar11;
    uVar12 = local_2c0 & uVar20 | local_2b4 & ~local_2c0;
    uVar11 = uVar12 + uVar10;
    uVar13 = (local_2c4 << 0x12 | local_2c0 >> 0xe) ^ (local_2c4 << 0xe | local_2c0 >> 0x12) ^
             (local_2c0 << 0x17 | local_2c4 >> 9);
    uVar16 = uVar11 + uVar13;
    iVar15 = iVar6 + 8;
    uVar24 = uVar16 + *(uint *)((int)&DAT_1001f770 + iVar6);
    uVar25 = uVar24 + *(uint *)((int)local_2a0 + iVar6);
    iVar6 = (local_2c4 & uVar22 | local_2b8 & ~local_2c4) + uVar7 + (uint)CARRY4(uVar12,uVar10) +
            ((local_2c0 << 0x12 | local_2c4 >> 0xe) ^ (local_2c0 << 0xe | local_2c4 >> 0x12) ^
            (local_2c4 << 0x17 | local_2c0 >> 9)) + (uint)CARRY4(uVar11,uVar13) +
            *(int *)((int)&DAT_1001f774 + iVar6) +
            (uint)CARRY4(uVar16,*(uint *)((int)&DAT_1001f770 + iVar6)) +
            *(int *)((int)local_2a0 + iVar6 + 4) +
            (uint)CARRY4(uVar24,*(uint *)((int)local_2a0 + iVar6));
    uVar7 = local_2bc & (uVar18 ^ local_2a4) ^ uVar18 & local_2a4;
    uVar11 = (local_2c8 << 4 | local_2bc >> 0x1c) ^ (local_2bc << 0x1e | local_2c8 >> 2) ^
             (local_2bc << 0x19 | local_2c8 >> 7);
    uVar10 = uVar11 + uVar7;
    uVar1 = uVar10 + uVar25;
    uVar24 = ((local_2bc << 4 | local_2c8 >> 0x1c) ^ (local_2c8 << 0x1e | local_2bc >> 2) ^
             (local_2c8 << 0x19 | local_2bc >> 7)) +
             (local_2c8 & (uVar23 ^ local_2b0) ^ uVar23 & local_2b0) + (uint)CARRY4(uVar11,uVar7) +
             iVar6 + (uint)CARRY4(uVar10,uVar25);
    uVar9 = uVar25 + uVar2;
    uVar25 = iVar6 + local_2d0 + (uint)CARRY4(uVar25,uVar2);
    local_2d0 = local_2b0;
    uVar2 = local_2a4;
    uVar7 = local_2b8;
    uVar10 = local_2b4;
    uVar11 = local_2bc;
    uVar12 = local_2c0;
    uVar13 = local_2c4;
    uVar16 = local_2c8;
    iVar6 = iVar15;
  } while (iVar15 != 0x280);
  param_1[10] = local_2c0 + uVar19;
  param_1[0xb] = local_2c4 + param_1[0xb] + (uint)CARRY4(local_2c0,uVar19);
  param_1[0xc] = uVar20 + uVar4;
  param_1[2] = local_2bc + uVar17;
  param_1[3] = local_2c8 + param_1[3] + (uint)CARRY4(local_2bc,uVar17);
  param_1[1] = uVar24 + param_1[1] + (uint)CARRY4(uVar1,uVar8);
  *param_1 = uVar1 + uVar8;
  param_1[4] = uVar18 + uVar5;
  param_1[5] = uVar23 + param_1[5] + (uint)CARRY4(uVar18,uVar5);
  param_1[6] = local_2a4 + uVar21;
  param_1[7] = local_2b0 + param_1[7] + (uint)CARRY4(local_2a4,uVar21);
  param_1[8] = uVar9 + uVar14;
  param_1[9] = uVar25 + param_1[9] + (uint)CARRY4(uVar9,uVar14);
  param_1[0xe] = local_2b4 + uVar3;
  param_1[0xd] = uVar22 + param_1[0xd] + (uint)CARRY4(uVar20,uVar4);
  param_1[0xf] = local_2b8 + param_1[0xf] + (uint)CARRY4(local_2b4,uVar3);
  return;
}

#undef DAT_1001f770
#undef DAT_1001f774
#undef local_2d0
#undef local_2c8
#undef local_2c4
#undef local_2c0
#undef local_2bc
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef local_2a4
#undef local_2a0

#undef DAT_1001ec07
#define DAT_1001ec07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1001ef1d
#define DAT_1001ef1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x345U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef str_1001ef22
#define str_1001ef22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34aU)))
#define local_3c (*(byte (*)[60])(pf_stack_frame + 20))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1c (*(undefined4 *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca18
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ca18(undefined4 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x207 < _DAT_40010808)) &&
     (_DAT_40010a04 != (code *)0x0)) {
    iVar4 = (*_DAT_40010a04)(param_1,&local_30);
    if (((iVar4 != 0) && (local_30 == 3)) && (local_24 != 0)) {
      iVar4 = 0;
      if (1 < param_3) {
        do {
          cVar2 = *(char *)(local_24 + iVar4);
          if (cVar2 != '\0') {
            param_2[iVar4] = cVar2;
            iVar4 = iVar4 + 1;
          }
        } while (cVar2 != '\0' && param_3 - 1 != iVar4);
      }
      param_2[iVar4] = 0;
      return;
    }
    if ((iVar4 != 0) && (local_30 == 1)) {
      uVar9 = local_2c;
      uVar8 = 0;
      if ((int)local_2c < 0) {
        uVar9 = -local_2c;
      }
      do {
        uVar7 = uVar8;
        uVar3 = uVar9 / 10;
        local_3c[uVar7] = (char)uVar9 + (char)uVar3 * -10 | 0x30;
        if (10 < uVar7) break;
        bVar1 = 9 < uVar9;
        uVar9 = uVar3;
        uVar8 = uVar7 + 1;
      } while (bVar1);
      if (0x7fffffff < local_2c) {
        uVar3 = 0x2d;
      }
      uVar9 = (uint)(0x7fffffff < local_2c);
      if (0x7fffffff < local_2c) {
        *param_2 = (char)uVar3;
      }
      if (uVar9 + 1 < param_3) {
        uVar8 = 0;
        do {
          param_2[uVar8 + uVar9] = local_3c[~uVar8 + uVar7 + 1];
          uVar3 = uVar8 + 1;
          if (uVar7 == uVar8) break;
          iVar4 = uVar9 + uVar8;
          uVar8 = uVar3;
        } while (iVar4 + 2U < param_3);
        uVar9 = uVar9 + uVar3;
      }
      param_2[uVar9] = 0;
      return;
    }
    if ((iVar4 != 0) && (local_30 == 5)) {
      pcVar5 = &DAT_1001ef1d;
      iVar4 = 0;
      if (local_2c == 0) {
        pcVar5 = str_1001ef22;
      }
      if (1 < param_3) {
        do {
          cVar2 = pcVar5[iVar4];
          if (cVar2 != '\0') {
            param_2[iVar4] = cVar2;
            iVar4 = iVar4 + 1;
          }
        } while (cVar2 != '\0' && param_3 - 1 != iVar4);
      }
      param_2[iVar4] = 0;
      return;
    }
  }
  puVar6 = &DAT_1001ec07;
  if (param_4 != (undefined1 *)0x0) {
    puVar6 = param_4;
  }
  iVar4 = 0;
  if (1 < param_3) {
    do {
      cVar2 = puVar6[iVar4];
      if (cVar2 != '\0') {
        param_2[iVar4] = cVar2;
        iVar4 = iVar4 + 1;
      }
    } while (cVar2 != '\0' && param_3 - 1 != iVar4);
  }
  param_2[iVar4] = 0;
  return;
}

#undef DAT_1001ec07
#undef DAT_1001ef1d
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a04
#undef str_1001ef22
#undef local_3c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_1001ec07
#define DAT_1001ec07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#define local_11c (*(char *)(pf_stack_frame + 20))
#define local_11b (*(char (*)[283])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc90
 */

void recovered_1000cc90(undefined4 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;

  recovered_1000ca18(param_1,&local_11c,0x100,&DAT_1001ec07);
  if ((byte)(local_11c - 0x30U) < 10) {
    uVar3 = 0;
    iVar6 = 0;
    do {
      iVar9 = iVar6;
      uVar3 = uVar3 * 10 + (uint)(byte)(local_11c - 0x30);
      if (0xff < uVar3) {
        return;
      }
      local_11c = local_11b[iVar9];
      iVar6 = iVar9 + 1;
    } while ((byte)(local_11c - 0x30U) < 10);
    if ((iVar9 + 1 != 0) && (local_11c == '.')) {
      cVar10 = local_11b[iVar9 + 1];
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar6 = 0;
        uVar4 = 0;
        do {
          uVar4 = uVar4 * 10 + (uint)(byte)(cVar10 - 0x30);
          if (0xff < uVar4) {
            return;
          }
          iVar1 = (iVar9 + -0x11b) - iVar6;
          iVar6 = iVar6 + -1;
          cVar10 = local_11b[iVar1 + 0x11d];
        } while ((byte)(cVar10 - 0x30U) < 10);
        if ((iVar6 != 0) && (cVar10 == '.')) {
          iVar6 = (iVar9 + -0x11b) - iVar6;
          cVar10 = local_11b[iVar6 + 0x11d];
          if ((byte)(cVar10 - 0x30U) < 10) {
            iVar9 = 0;
            uVar7 = 0;
            pcVar2 = local_11b + iVar6 + 0x11f;
            do {
              pcVar5 = pcVar2;
              uVar7 = uVar7 * 10 + (uint)(byte)(cVar10 - 0x30);
              if (0xff < uVar7) {
                return;
              }
              cVar10 = pcVar5[-1];
              iVar9 = iVar9 + -1;
              pcVar2 = pcVar5 + 1;
            } while ((byte)(cVar10 - 0x30U) < 10);
            if (((iVar9 != 0) && (cVar10 == '.')) && (cVar10 = *pcVar5, (byte)(cVar10 - 0x30U) < 10)
               ) {
              iVar6 = 0;
              uVar8 = 0;
              do {
                uVar8 = uVar8 * 10 + (uint)(byte)(cVar10 - 0x30);
                if (0xff < uVar8) {
                  return;
                }
                cVar10 = (pcVar5 + 1)[-iVar6];
                iVar6 = iVar6 + -1;
              } while ((byte)(cVar10 - 0x30U) < 10);
              if ((iVar6 != 0) && (cVar10 == '\0')) {
                *param_2 = uVar8 | uVar7 * 0x100 | uVar4 * 0x10000 | uVar3 * 0x1000000;
              }
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_1001ec07
#undef local_11c
#undef local_11b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce68
 */

undefined4 recovered_1000ce68(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;

  iVar3 = 0;
  while( true ) {
    pcVar5 = (char *)(param_1 + iVar3 * 2);
    cVar1 = *pcVar5;
    iVar4 = (int)cVar1;
    uVar6 = iVar4 - 0x30;
    if (9 < (uVar6 & 0xff)) {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        uVar6 = iVar4 - 0x57;
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          return 0;
        }
        uVar6 = iVar4 - 0x37;
      }
    }
    if ((int)uVar6 < 0) {
      return 0;
    }
    cVar1 = pcVar5[1];
    iVar4 = (int)cVar1;
    uVar2 = iVar4 - 0x30;
    if (9 < (uVar2 & 0xff)) {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        uVar2 = iVar4 - 0x57;
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          return 0;
        }
        uVar2 = iVar4 - 0x37;
      }
    }
    if ((int)uVar2 < 0) break;
    *(byte *)(param_2 + iVar3) = (byte)uVar2 | (byte)(uVar6 << 4);
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x20) {
      switch((uintptr_t)(*(undefined1 *)(param_1 + 0x40))) {
      case 0:
      case 9:
      case 10:
      case 0xd:
      case 0x20:
        return 1;
      default:
        return 0;
      }
    }
  }
  return 0;
}


#undef DAT_1000d420
#define DAT_1000d420 (*(uint64_t *)(0x1000d420U))
#undef DAT_1000d428
#define DAT_1000d428 (*(uint64_t *)(0x1000d428U))
#undef DAT_1000d430
#define DAT_1000d430 (*(uint64_t *)(0x1000d430U))
#undef DAT_1000d438
#define DAT_1000d438 (*(uint64_t *)(0x1000d438U))
#undef DAT_1000d440
#define DAT_1000d440 (*(uint64_t *)(0x1000d440U))
#undef DAT_1000d448
#define DAT_1000d448 (*(uint64_t *)(0x1000d448U))
#undef DAT_1000d450
#define DAT_1000d450 (*(uint64_t *)(0x1000d450U))
#undef DAT_1000d458
#define DAT_1000d458 (*(uint64_t *)(0x1000d458U))
#undef DAT_10024fd0
#define DAT_10024fd0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x63f8U)))
#undef DAT_10024fd8
#define DAT_10024fd8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6400U)))
#undef DAT_10024fe0
#define DAT_10024fe0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6408U)))
#undef DAT_10024fe8
#define DAT_10024fe8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6410U)))
#undef DAT_10024ff0
#define DAT_10024ff0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6418U)))
#undef DAT_10024ff8
#define DAT_10024ff8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6420U)))
#undef DAT_10025000
#define DAT_10025000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6428U)))
#undef DAT_10025008
#define DAT_10025008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6430U)))
#undef DAT_10025010
#define DAT_10025010 (*(uint *)(((uintptr_t)pf_module_state + 0x6438U)))
#undef DAT_10025014
#define DAT_10025014 (*(int *)(((uintptr_t)pf_module_state + 0x643cU)))
#undef DAT_10025018
#define DAT_10025018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6440U)))
#undef DAT_10025098
#define DAT_10025098 (*(int *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_1002509c
#define DAT_1002509c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64c4U)))
#undef DAT_100250bc
#define DAT_100250bc (*(uint *)(((uintptr_t)pf_module_state + 0x64e4U)))
#undef DAT_100250c0
#define DAT_100250c0 (*(int *)(((uintptr_t)pf_module_state + 0x64e8U)))
#undef DAT_100250c4
#define DAT_100250c4 (*(uint *)(((uintptr_t)pf_module_state + 0x64ecU)))
#undef DAT_100250c8
#define DAT_100250c8 (*(char *)(((uintptr_t)pf_module_state + 0x64f0U)))
#undef str_1001f9ee
#define str_1001f9ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe16U)))
#define local_60 (*(undefined1 *)(pf_stack_frame + 16))
#define local_5f (*(undefined1 *)(pf_stack_frame + 17))
#define local_5e (*(undefined1 *)(pf_stack_frame + 18))
#define local_5d (*(undefined1 *)(pf_stack_frame + 19))
#define local_5c (*(undefined1 *)(pf_stack_frame + 20))
#define local_5b (*(undefined1 *)(pf_stack_frame + 21))
#define local_5a (*(undefined1 *)(pf_stack_frame + 22))
#define local_59 (*(undefined1 *)(pf_stack_frame + 23))
#define local_58 (*(undefined1 *)(pf_stack_frame + 24))
#define local_57 (*(undefined1 *)(pf_stack_frame + 25))
#define local_56 (*(undefined1 *)(pf_stack_frame + 26))
#define local_55 (*(undefined1 *)(pf_stack_frame + 27))
#define local_54 (*(undefined1 *)(pf_stack_frame + 28))
#define local_53 (*(undefined1 *)(pf_stack_frame + 29))
#define local_52 (*(undefined1 *)(pf_stack_frame + 30))
#define local_51 (*(undefined1 *)(pf_stack_frame + 31))
#define local_50 (*(undefined1 *)(pf_stack_frame + 32))
#define local_4f (*(undefined1 *)(pf_stack_frame + 33))
#define local_4e (*(undefined1 *)(pf_stack_frame + 34))
#define local_4d (*(undefined1 *)(pf_stack_frame + 35))
#define local_4c (*(undefined1 *)(pf_stack_frame + 36))
#define local_4b (*(undefined1 *)(pf_stack_frame + 37))
#define local_4a (*(undefined1 *)(pf_stack_frame + 38))
#define local_49 (*(undefined1 *)(pf_stack_frame + 39))
#define local_48 (*(undefined1 *)(pf_stack_frame + 40))
#define local_47 (*(undefined1 *)(pf_stack_frame + 41))
#define local_46 (*(undefined1 *)(pf_stack_frame + 42))
#define local_45 (*(undefined1 *)(pf_stack_frame + 43))
#define local_44 (*(undefined1 *)(pf_stack_frame + 44))
#define local_43 (*(undefined1 *)(pf_stack_frame + 45))
#define local_42 (*(undefined1 *)(pf_stack_frame + 46))
#define local_41 (*(undefined1 *)(pf_stack_frame + 47))
#define local_40 (*(undefined1 *)(pf_stack_frame + 48))
#define local_3f (*(undefined1 *)(pf_stack_frame + 49))
#define local_3e (*(undefined1 *)(pf_stack_frame + 50))
#define local_3d (*(undefined1 *)(pf_stack_frame + 51))
#define local_3c (*(undefined1 *)(pf_stack_frame + 52))
#define local_3b (*(undefined1 *)(pf_stack_frame + 53))
#define local_3a (*(undefined1 *)(pf_stack_frame + 54))
#define local_39 (*(undefined1 *)(pf_stack_frame + 55))
#define local_38 (*(undefined1 *)(pf_stack_frame + 56))
#define local_37 (*(undefined1 *)(pf_stack_frame + 57))
#define local_36 (*(undefined1 *)(pf_stack_frame + 58))
#define local_35 (*(undefined1 *)(pf_stack_frame + 59))
#define local_34 (*(undefined1 *)(pf_stack_frame + 60))
#define local_33 (*(undefined1 *)(pf_stack_frame + 61))
#define local_32 (*(undefined1 *)(pf_stack_frame + 62))
#define local_31 (*(undefined1 *)(pf_stack_frame + 63))
#define local_30 (*(undefined1 *)(pf_stack_frame + 64))
#define local_2f (*(undefined1 *)(pf_stack_frame + 65))
#define local_2e (*(undefined1 *)(pf_stack_frame + 66))
#define local_2d (*(undefined1 *)(pf_stack_frame + 67))
#define local_2c (*(undefined1 *)(pf_stack_frame + 68))
#define local_2b (*(undefined1 *)(pf_stack_frame + 69))
#define local_2a (*(undefined1 *)(pf_stack_frame + 70))
#define local_29 (*(undefined1 *)(pf_stack_frame + 71))
#define local_28 (*(undefined1 *)(pf_stack_frame + 72))
#define local_27 (*(undefined1 *)(pf_stack_frame + 73))
#define local_26 (*(undefined1 *)(pf_stack_frame + 74))
#define local_25 (*(undefined1 *)(pf_stack_frame + 75))
#define local_24 (*(undefined1 *)(pf_stack_frame + 76))
#define local_23 (*(undefined1 *)(pf_stack_frame + 77))
#define local_22 (*(undefined1 *)(pf_stack_frame + 78))
#define local_21 (*(undefined1 *)(pf_stack_frame + 79))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cff0
 */

void recovered_1000cff0(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;

  if ((DAT_100250c8 != '\x01') || (0x3f < DAT_100250c4)) {
    puVar3 = (undefined8 *)&DAT_1002509c;
    puVar4 = (undefined8 *)0x20;
    bVar6 = 0xffffffdf < DAT_10025010;
    DAT_10025010 = DAT_10025010 + 0x20;
    DAT_10025014 = DAT_10025014 + (uint)bVar6;
    do {
      puVar5 = (undefined8 *)(0x80U - DAT_10025098);
      if (puVar4 < (undefined8 *)(0x80U - DAT_10025098)) {
        puVar5 = puVar4;
      }
      recovered_100038f0((undefined8 *)(&DAT_10025018 + DAT_10025098),puVar3,puVar5);
      DAT_10025098 = DAT_10025098 + (int)puVar5;
      if (DAT_10025098 == 0x80) {
        recovered_1000c530((uint *)&DAT_10024fd0,((uintptr_t)pf_module_state + 0x6440U));
        DAT_10025098 = 0;
      }
      puVar4 = (undefined8 *)((int)puVar4 - (int)puVar5);
      puVar3 = (undefined8 *)((int)puVar3 + (int)puVar5);
    } while (puVar4 != (undefined8 *)0x0);
    recovered_1000d760((undefined4 *)&DAT_10024fd0,&local_60);
    recovered_100038f0((undefined8 *)&DAT_1002509c,(undefined8 *)&local_60,(undefined8 *)0x20);
    DAT_10024fd0 = (*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
    DAT_10024fd8 = (*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL});
    DAT_10024fe0 = (*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL});
    DAT_10024fe8 = (*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL});
    DAT_10024ff0 = (*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL});
    DAT_10024ff8 = (*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL});
    DAT_10025000 = (*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL});
    DAT_10025008 = (*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL});
    DAT_10025014 = 0;
    DAT_10025010 = 0x20;
    DAT_10025098 = 0;
    recovered_100038f0((undefined8 *)&DAT_10025018,(undefined8 *)&local_40,(undefined8 *)0x20);
    DAT_10025098 = DAT_10025098 + 0x20;
    if (DAT_10025098 == 0x80) {
      recovered_1000c530((uint *)&DAT_10024fd0,((uintptr_t)pf_module_state + 0x6440U));
      DAT_10025098 = 0;
    }
    DAT_100250c0 = 0;
    DAT_100250bc = 0;
    DAT_100250c8 = '\x01';
    local_60 = 0;
    local_5f = 0;
    local_5e = 0;
    local_5d = 0;
    local_5c = 0;
    local_5b = 0;
    local_5a = 0;
    local_59 = 0;
    local_58 = 0;
    local_57 = 0;
    local_56 = 0;
    local_55 = 0;
    local_54 = 0;
    local_53 = 0;
    local_52 = 0;
    local_51 = 0;
    local_50 = 0;
    local_4f = 0;
    local_4e = 0;
    local_4d = 0;
    local_4c = 0;
    local_4b = 0;
    local_4a = 0;
    local_49 = 0;
    local_48 = 0;
    local_47 = 0;
    local_46 = 0;
    local_45 = 0;
    local_44 = 0;
    local_43 = 0;
    local_42 = 0;
    local_41 = 0;
    local_40 = 0;
    local_3f = 0;
    local_3e = 0;
    local_3d = 0;
    local_3c = 0;
    local_3b = 0;
    local_3a = 0;
    local_39 = 0;
    local_38 = 0;
    local_37 = 0;
    local_36 = 0;
    local_35 = 0;
    local_34 = 0;
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    local_30 = 0;
    local_2f = 0;
    local_2e = 0;
    local_2d = 0;
    local_2c = 0;
    local_2b = 0;
    local_2a = 0;
    local_29 = 0;
    local_28 = 0;
    local_27 = 0;
    local_26 = 0;
    local_25 = 0;
    local_24 = 0;
    local_23 = 0;
    local_22 = 0;
    local_21 = 0;
    DAT_100250c4 = 0;
  }
  if (param_2 != 0) {
    do {
      iVar2 = DAT_100250c0;
      uVar1 = DAT_100250bc;
      bVar6 = 0xfffffffe < DAT_100250bc;
      DAT_100250bc = DAT_100250bc + 1;
      DAT_100250c0 = DAT_100250c0 + (uint)bVar6;
      recovered_1000d460((undefined8 *)&DAT_1002509c,uVar1,iVar2,
                         (undefined4 *)(str_1001f9ee + 2),(int)&local_60);
      puVar3 = (undefined8 *)param_2;
      if ((undefined8 *)0x3f < param_2) {
        puVar3 = (undefined8 *)0x40;
      }
      recovered_100038f0((undefined8 *)param_1,(undefined8 *)&local_60,puVar3);
      param_2 = param_2 - (int)puVar3;
      param_1 = param_1 + (int)puVar3;
    } while ((undefined8 *)param_2 != (undefined8 *)0x0);
  }
  iVar2 = DAT_100250c0;
  uVar1 = DAT_100250bc;
  bVar6 = 0xfffffffe < DAT_100250bc;
  DAT_100250bc = DAT_100250bc + 1;
  DAT_100250c0 = DAT_100250c0 + (uint)bVar6;
  recovered_1000d460((undefined8 *)&DAT_1002509c,uVar1,iVar2,
                     (undefined4 *)(str_1001f9ee + 2),(int)&local_60);
  recovered_100038f0((undefined8 *)&DAT_1002509c,(undefined8 *)&local_60,(undefined8 *)0x20);
  return;
}

#undef DAT_1000d420
#undef DAT_1000d428
#undef DAT_1000d430
#undef DAT_1000d438
#undef DAT_1000d440
#undef DAT_1000d448
#undef DAT_1000d450
#undef DAT_1000d458
#undef DAT_10024fd0
#undef DAT_10024fd8
#undef DAT_10024fe0
#undef DAT_10024fe8
#undef DAT_10024ff0
#undef DAT_10024ff8
#undef DAT_10025000
#undef DAT_10025008
#undef DAT_10025010
#undef DAT_10025014
#undef DAT_10025018
#undef DAT_10025098
#undef DAT_1002509c
#undef DAT_100250bc
#undef DAT_100250c0
#undef DAT_100250c4
#undef DAT_100250c8
#undef str_1001f9ee
#undef local_60
#undef local_5f
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_57
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f
#undef local_3e
#undef local_3d
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
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

#undef DAT_1000d750
#define DAT_1000d750 (*(uint64_t *)(0x1000d750U))
#undef DAT_1000d758
#define DAT_1000d758 (*(uint64_t *)(0x1000d758U))
#define local_b8 (*(uint *)(pf_stack_frame + 24))
#define local_b4 (*(uint *)(pf_stack_frame + 28))
#define local_b0 (*(uint *)(pf_stack_frame + 32))
#define local_ac (*(uint *)(pf_stack_frame + 36))
#define local_a8 (*(uint *)(pf_stack_frame + 40))
#define local_a4 (*(uint *)(pf_stack_frame + 44))
#define local_a0 (*(uint (*)[40])(pf_stack_frame + 48))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 152))
#define local_60 (*(undefined8 *)(pf_stack_frame + 112))
#define local_50 (*(undefined8 *)(pf_stack_frame + 128))
#define local_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_30 (*(undefined4 *)(pf_stack_frame + 160))
#define local_2c (*(undefined4 *)(pf_stack_frame + 164))
#define local_28 (*(undefined4 *)(pf_stack_frame + 168))
#define local_24 (*(undefined4 *)(pf_stack_frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d460
 */

void recovered_1000d460(undefined8 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4,int param_5)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

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

  local_50 = *param_1;
  uStack_48 = param_1[1];
  local_60 = (*(uint64_t *)(uint64_t[]){0x3320646e61707865ULL});
  uStack_58 = (*(uint64_t *)(uint64_t[]){0x6b20657479622d32ULL});
  local_40 = param_1[2];
  uStack_38 = param_1[3];
  local_28 = *param_4;
  local_24 = param_4[1];
  local_30 = param_2;
  local_2c = param_3;
  recovered_100038f0((undefined8 *)local_a0,&local_60,(undefined8 *)0x40);
  local_a4 = local_a0[0xe];
  local_b8 = local_a0[3];
  local_b0 = local_a0[0xd];
  local_ac = local_a0[0xf];
  iVar1 = 10;
  local_b4 = local_a0[0xc];
  local_a8 = local_a0[4];
  do {
    local_b0 = local_b0 ^ local_a0[1] + local_a0[5];
    local_a0[9] = local_a0[9] + (local_b0 >> 0x10 | local_b0 << 0x10);
    uVar4 = local_a0[9] ^ local_a0[5];
    local_a0[1] = local_a0[1] + local_a0[5] + (uVar4 >> 0x14 | uVar4 << 0xc);
    uVar2 = local_a0[1] ^ (local_b0 >> 0x10 | local_b0 << 0x10);
    uVar7 = local_a0[9] + (uVar2 >> 0x18 | uVar2 << 8);
    local_a4 = local_a4 ^ local_a0[2] + local_a0[6];
    local_a0[10] = local_a0[10] + (local_a4 >> 0x10 | local_a4 << 0x10);
    uVar3 = local_a0[10] ^ local_a0[6];
    local_a0[2] = local_a0[2] + local_a0[6] + (uVar3 >> 0x14 | uVar3 << 0xc);
    uVar5 = local_a0[2] ^ (local_a4 >> 0x10 | local_a4 << 0x10);
    local_b4 = local_b4 ^ local_a0[0] + local_a8;
    local_a0[8] = local_a0[8] + (local_b4 >> 0x10 | local_b4 << 0x10);
    uVar9 = local_a0[8] ^ local_a8;
    local_a0[0] = local_a0[0] + local_a8 + (uVar9 >> 0x14 | uVar9 << 0xc);
    uVar6 = local_a0[0] ^ (local_b4 >> 0x10 | local_b4 << 0x10);
    local_a0[8] = local_a0[8] + (uVar6 >> 0x18 | uVar6 << 8);
    uVar8 = local_a0[8] ^ (uVar9 >> 0x14 | uVar9 << 0xc);
    local_ac = local_ac ^ local_b8 + local_a0[7];
    local_a0[0xb] = local_a0[0xb] + (local_ac >> 0x10 | local_ac << 0x10);
    uVar11 = local_a0[0xb] ^ local_a0[7];
    uVar10 = local_b8 + local_a0[7] + (uVar11 >> 0x14 | uVar11 << 0xc);
    local_b8 = uVar10 + (uVar8 >> 0x19 | uVar8 << 7);
    uVar9 = local_b8 ^ (uVar5 >> 0x18 | uVar5 << 8);
    local_a0[9] = uVar7 + (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar8 = local_a0[9] ^ (uVar8 >> 0x19 | uVar8 << 7);
    local_b8 = local_b8 + (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar9 = local_b8 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    local_a0[9] = local_a0[9] + (uVar9 >> 0x18 | uVar9 << 8);
    local_a4 = uVar9 >> 0x18 | uVar9 << 8;
    uVar9 = local_a0[9] ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar10 = uVar10 ^ (local_ac >> 0x10 | local_ac << 0x10);
    local_a8 = uVar9 >> 0x19 | uVar9 << 7;
    local_a0[0xb] = local_a0[0xb] + (uVar10 >> 0x18 | uVar10 << 8);
    uVar9 = local_a0[0xb] ^ (uVar11 >> 0x14 | uVar11 << 0xc);
    local_a0[2] = local_a0[2] + (uVar9 >> 0x19 | uVar9 << 7);
    uVar2 = local_a0[2] ^ (uVar2 >> 0x18 | uVar2 << 8);
    local_a0[8] = local_a0[8] + (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar9 = local_a0[8] ^ (uVar9 >> 0x19 | uVar9 << 7);
    local_a0[2] = local_a0[2] + (uVar9 >> 0x14 | uVar9 << 0xc);
    uVar2 = local_a0[2] ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    local_a0[8] = local_a0[8] + (uVar2 >> 0x18 | uVar2 << 8);
    local_b0 = uVar2 >> 0x18 | uVar2 << 8;
    uVar9 = local_a0[8] ^ (uVar9 >> 0x14 | uVar9 << 0xc);
    local_a0[7] = uVar9 >> 0x19 | uVar9 << 7;
    local_a0[10] = local_a0[10] + (uVar5 >> 0x18 | uVar5 << 8);
    uVar9 = local_a0[10] ^ (uVar3 >> 0x14 | uVar3 << 0xc);
    local_a0[1] = local_a0[1] + (uVar9 >> 0x19 | uVar9 << 7);
    uVar2 = local_a0[1] ^ (uVar6 >> 0x18 | uVar6 << 8);
    local_a0[0xb] = local_a0[0xb] + (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar9 = local_a0[0xb] ^ (uVar9 >> 0x19 | uVar9 << 7);
    local_a0[1] = local_a0[1] + (uVar9 >> 0x14 | uVar9 << 0xc);
    uVar2 = local_a0[1] ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    local_a0[0xb] = local_a0[0xb] + (uVar2 >> 0x18 | uVar2 << 8);
    local_b4 = uVar2 >> 0x18 | uVar2 << 8;
    uVar9 = local_a0[0xb] ^ (uVar9 >> 0x14 | uVar9 << 0xc);
    local_a0[6] = uVar9 >> 0x19 | uVar9 << 7;
    uVar7 = uVar7 ^ (uVar4 >> 0x14 | uVar4 << 0xc);
    local_a0[0] = local_a0[0] + (uVar7 >> 0x19 | uVar7 << 7);
    uVar2 = local_a0[0] ^ (uVar10 >> 0x18 | uVar10 << 8);
    local_a0[10] = local_a0[10] + (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar9 = local_a0[10] ^ (uVar7 >> 0x19 | uVar7 << 7);
    local_a0[0] = local_a0[0] + (uVar9 >> 0x14 | uVar9 << 0xc);
    uVar2 = local_a0[0] ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    local_ac = uVar2 >> 0x18 | uVar2 << 8;
    local_a0[10] = local_a0[10] + (uVar2 >> 0x18 | uVar2 << 8);
    uVar9 = local_a0[10] ^ (uVar9 >> 0x14 | uVar9 << 0xc);
    local_a0[5] = uVar9 >> 0x19 | uVar9 << 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_a0[0xe] = local_a4;
  local_a0[0xc] = local_b4;
  local_a0[0xf] = local_ac;
  local_a0[4] = local_a8;
  local_a0[3] = local_b8;
  iVar1 = 0;
  local_a0[0xd] = local_b0;
  do {
    *(int *)(param_5 + iVar1) =
         *(int *)((int)local_a0 + iVar1 + 0x40) + *(int *)((int)local_a0 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x40);
  return;
}

#undef DAT_1000d750
#undef DAT_1000d758
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_58
#undef uStack_48
#undef uStack_38
#undef local_60
#undef local_50
#undef local_40
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#define local_44 (*(undefined1 *)(pf_stack_frame + 28))
#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_3c (*(undefined1 *)(pf_stack_frame + 36))
#define local_38 (*(uint *)(pf_stack_frame + 40))
#define local_34 (*(undefined1 *)(pf_stack_frame + 44))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_21 (*(undefined1 *)(pf_stack_frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d760
 */

void recovered_1000d760(undefined4 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;

  puVar6 = param_1 + 0x10;
  uVar1 = *puVar6;
  puVar11 = param_1 + 0x12;
  uVar3 = param_1[0x11];
  puVar7 = (undefined8 *)&local_21;
  param_1[0x11] = uVar3 + (0xfffffffe < uVar1);
  iVar4 = param_1[0x32];
  puVar10 = (undefined8 *)0x1;
  *puVar6 = uVar1 + 1;
  local_21 = 0x80;
  do {
    while( true ) {
      puVar8 = (undefined8 *)(0x80U - iVar4);
      if (puVar10 < (undefined8 *)(0x80U - iVar4)) {
        puVar8 = puVar10;
      }
      recovered_100038f0((undefined8 *)((int)puVar11 + iVar4),puVar7,puVar8);
      puVar10 = (undefined8 *)((int)puVar10 - (int)puVar8);
      puVar7 = (undefined8 *)((int)puVar7 + (int)puVar8);
      iVar4 = param_1[0x32] + (int)puVar8;
      param_1[0x32] = iVar4;
      bVar9 = (byte)(uVar1 >> 0x18);
      if (iVar4 != 0x80) break;
      recovered_1000c530(param_1,(int)puVar11);
      iVar4 = 0;
      param_1[0x32] = 0;
      if (puVar10 == (undefined8 *)0x0) {
        bVar9 = (byte)(uVar3 << 3) | bVar9 >> 5;
        local_34 = (undefined1)((uVar3 & 0x1fffffff) >> 0x15);
        local_3c = (undefined1)((uVar3 & 0x1fffffff) >> 0xd);
        local_44 = (undefined1)((uVar3 & 0x1fffffff) >> 5);
        iVar4 = 0;
LAB_1000d8dc:
        local_21 = 0;
        do {
          puVar10 = (undefined8 *)&local_21;
          puVar7 = (undefined8 *)0x1;
          uVar3 = *puVar6;
          *puVar6 = uVar3 + 1;
          param_1[0x11] = param_1[0x11] + (uint)(0xfffffffe < uVar3);
          do {
            puVar8 = (undefined8 *)(0x80U - iVar4);
            if (puVar7 < (undefined8 *)(0x80U - iVar4)) {
              puVar8 = puVar7;
            }
            recovered_100038f0((undefined8 *)((int)puVar11 + iVar4),puVar10,puVar8);
            iVar4 = param_1[0x32] + (int)puVar8;
            param_1[0x32] = iVar4;
            if (iVar4 == 0x80) {
              recovered_1000c530(param_1,(int)puVar11);
              iVar4 = 0;
              param_1[0x32] = 0;
            }
            puVar7 = (undefined8 *)((int)puVar7 - (int)puVar8);
            puVar10 = (undefined8 *)((int)puVar10 + (int)puVar8);
          } while (puVar7 != (undefined8 *)0x0);
        } while (iVar4 != 0x70);
LAB_1000d974:
        local_30 = uVar1 >> 0xd;
        local_38 = uVar1 >> 5;
        local_40 = uVar1 << 3;
        recovered_10004080((byte *)(param_1 + 0x2e),0,8);
        *(char *)((int)param_1 + 199) = (char)local_40;
        *(char *)((int)param_1 + 0xc6) = (char)local_38;
        *(char *)((int)param_1 + 0xc5) = (char)local_30;
        *(undefined1 *)((int)param_1 + 0xc2) = local_44;
        *(undefined1 *)((int)param_1 + 0xc1) = local_3c;
        *(undefined1 *)(param_1 + 0x30) = local_34;
        *(char *)(param_1 + 0x31) = (char)(uVar1 >> 0x15);
        *(byte *)((int)param_1 + 0xc3) = bVar9;
        recovered_1000c530(param_1,(int)puVar11);
        uVar2 = *param_1;
        uVar5 = param_1[1];
        param_2[7] = (char)uVar2;
        param_2[6] = (char)((uint)uVar2 >> 8);
        param_2[3] = (char)uVar5;
        param_2[4] = (char)((uint)uVar2 >> 0x18);
        param_2[2] = (char)((uint)uVar5 >> 8);
        param_2[1] = (char)((uint)uVar5 >> 0x10);
        param_2[5] = (char)((uint)uVar2 >> 0x10);
        *param_2 = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[2];
        uVar5 = param_1[3];
        param_2[0xf] = (char)uVar2;
        param_2[0xb] = (char)uVar5;
        param_2[0xe] = (char)((uint)uVar2 >> 8);
        param_2[0xd] = (char)((uint)uVar2 >> 0x10);
        param_2[0xc] = (char)((uint)uVar2 >> 0x18);
        param_2[10] = (char)((uint)uVar5 >> 8);
        param_2[9] = (char)((uint)uVar5 >> 0x10);
        param_2[8] = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[4];
        uVar5 = param_1[5];
        param_2[0x17] = (char)uVar2;
        param_2[0x13] = (char)uVar5;
        param_2[0x16] = (char)((uint)uVar2 >> 8);
        param_2[0x15] = (char)((uint)uVar2 >> 0x10);
        param_2[0x14] = (char)((uint)uVar2 >> 0x18);
        param_2[0x12] = (char)((uint)uVar5 >> 8);
        param_2[0x11] = (char)((uint)uVar5 >> 0x10);
        param_2[0x10] = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[6];
        uVar5 = param_1[7];
        param_2[0x1f] = (char)uVar2;
        param_2[0x1b] = (char)uVar5;
        param_2[0x1e] = (char)((uint)uVar2 >> 8);
        param_2[0x1d] = (char)((uint)uVar2 >> 0x10);
        param_2[0x1c] = (char)((uint)uVar2 >> 0x18);
        param_2[0x1a] = (char)((uint)uVar5 >> 8);
        param_2[0x19] = (char)((uint)uVar5 >> 0x10);
        param_2[0x18] = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[8];
        uVar5 = param_1[9];
        param_2[0x27] = (char)uVar2;
        param_2[0x23] = (char)uVar5;
        param_2[0x26] = (char)((uint)uVar2 >> 8);
        param_2[0x25] = (char)((uint)uVar2 >> 0x10);
        param_2[0x24] = (char)((uint)uVar2 >> 0x18);
        param_2[0x22] = (char)((uint)uVar5 >> 8);
        param_2[0x21] = (char)((uint)uVar5 >> 0x10);
        param_2[0x20] = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[10];
        uVar5 = param_1[0xb];
        param_2[0x2f] = (char)uVar2;
        param_2[0x2b] = (char)uVar5;
        param_2[0x2e] = (char)((uint)uVar2 >> 8);
        param_2[0x2d] = (char)((uint)uVar2 >> 0x10);
        param_2[0x2c] = (char)((uint)uVar2 >> 0x18);
        param_2[0x2a] = (char)((uint)uVar5 >> 8);
        param_2[0x29] = (char)((uint)uVar5 >> 0x10);
        param_2[0x28] = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[0xc];
        uVar5 = param_1[0xd];
        param_2[0x37] = (char)uVar2;
        param_2[0x33] = (char)uVar5;
        param_2[0x36] = (char)((uint)uVar2 >> 8);
        param_2[0x35] = (char)((uint)uVar2 >> 0x10);
        param_2[0x34] = (char)((uint)uVar2 >> 0x18);
        param_2[0x32] = (char)((uint)uVar5 >> 8);
        param_2[0x31] = (char)((uint)uVar5 >> 0x10);
        param_2[0x30] = (char)((uint)uVar5 >> 0x18);
        uVar2 = param_1[0xe];
        uVar5 = param_1[0xf];
        param_2[0x3f] = (char)uVar2;
        param_2[0x3b] = (char)uVar5;
        param_2[0x3e] = (char)((uint)uVar2 >> 8);
        param_2[0x3d] = (char)((uint)uVar2 >> 0x10);
        param_2[0x3c] = (char)((uint)uVar2 >> 0x18);
        param_2[0x3a] = (char)((uint)uVar5 >> 8);
        param_2[0x39] = (char)((uint)uVar5 >> 0x10);
        param_2[0x38] = (char)((uint)uVar5 >> 0x18);
        iVar4 = 0;
        do {
          *(undefined1 *)((int)param_1 + iVar4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xcc);
        return;
      }
    }
  } while (puVar10 != (undefined8 *)0x0);
  local_21 = 0;
  bVar9 = (byte)(uVar3 << 3) | bVar9 >> 5;
  local_34 = (undefined1)((uVar3 & 0x1fffffff) >> 0x15);
  local_3c = (undefined1)((uVar3 & 0x1fffffff) >> 0xd);
  local_44 = (undefined1)((uVar3 & 0x1fffffff) >> 5);
  if (iVar4 == 0x70) goto LAB_1000d974;
  goto LAB_1000d8dc;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_21

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbf0
 */

void recovered_1000dbf0(int *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  int iVar2;

  puVar1 = (undefined8 *)recovered_100049b4((int)param_2);
  local_18 = (int)puVar1 << 0x18 | ((uint)puVar1 >> 8 & 0xff) << 0x10 |
             ((uint)puVar1 >> 0x10 & 0xff) << 8 | (uint)puVar1 >> 0x18;
  if (((char)param_1[3] == '\0') && (3 < (uint)(param_1[1] - param_1[2]))) {
    recovered_100038f0((undefined8 *)(*param_1 + param_1[2]),(undefined8 *)&local_18,
                       (undefined8 *)&UndefinedInstruction);
    iVar2 = param_1[2] + 4;
    param_1[2] = iVar2;
    if (((*(byte *)(param_1 + 3) & 1) == 0) && (puVar1 <= (undefined8 *)(param_1[1] - iVar2))) {
      if (puVar1 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)(*param_1 + iVar2),param_2,puVar1);
        iVar2 = param_1[2];
      }
      param_1[2] = iVar2 + (int)puVar1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

#undef EXT_00000004
#undef local_18

#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define local_28 (*(undefined1 *)(pf_stack_frame + 24))
#define local_27 (*(undefined1 *)(pf_stack_frame + 25))
#define local_26 (*(byte *)(pf_stack_frame + 26))
#define local_25 (*(undefined1 *)(pf_stack_frame + 27))
#define local_24 (*(undefined1 *)(pf_stack_frame + 28))
#define local_23 (*(undefined1 *)(pf_stack_frame + 29))
#define local_22 (*(undefined1 *)(pf_stack_frame + 30))
#define local_21 (*(undefined1 *)(pf_stack_frame + 31))
#define local_29 (*(undefined1 *)(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcc0
 */

void recovered_1000dcc0(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint *puVar13;

  puVar7 = param_1 + 8;
  uVar2 = *puVar7;
  puVar13 = param_1 + 10;
  uVar3 = param_1[9];
  puVar8 = (undefined8 *)&local_21;
  param_1[9] = uVar3 + (0xfffffffe < uVar2);
  uVar4 = param_1[0x1a];
  puVar11 = (undefined8 *)0x1;
  *puVar7 = uVar2 + 1;
  local_21 = 0x80;
  do {
    while( true ) {
      puVar10 = (undefined8 *)(0x40 - uVar4);
      if (puVar11 < (undefined8 *)(0x40 - uVar4)) {
        puVar10 = puVar11;
      }
      recovered_100038f0((undefined8 *)((int)puVar13 + uVar4),puVar8,puVar10);
      puVar11 = (undefined8 *)((int)puVar11 - (int)puVar10);
      puVar8 = (undefined8 *)((int)puVar8 + (int)puVar10);
      uVar4 = param_1[0x1a] + (int)puVar10;
      param_1[0x1a] = uVar4;
      bVar12 = (byte)(uVar2 >> 0x18);
      if (uVar4 != 0x40) break;
      recovered_10010ee4(param_1,(int)puVar13);
      uVar4 = 0;
      param_1[0x1a] = 0;
      if (puVar11 == (undefined8 *)0x0) {
        bVar12 = (byte)(uVar3 << 3) | bVar12 >> 5;
        uVar1 = (undefined1)((uVar3 & 0x1fffffff) >> 0x15);
        uVar6 = (undefined1)((uVar3 & 0x1fffffff) >> 0xd);
        uVar9 = (undefined1)((uVar3 & 0x1fffffff) >> 5);
        uVar4 = 0;
LAB_1000de04:
        local_21 = 0;
        do {
          puVar11 = (undefined8 *)&local_21;
          puVar8 = (undefined8 *)0x1;
          uVar3 = *puVar7;
          *puVar7 = uVar3 + 1;
          param_1[9] = param_1[9] + (uint)(0xfffffffe < uVar3);
          do {
            puVar10 = (undefined8 *)(0x40 - uVar4);
            if (puVar8 < (undefined8 *)(0x40 - uVar4)) {
              puVar10 = puVar8;
            }
            recovered_100038f0((undefined8 *)((int)puVar13 + uVar4),puVar11,puVar10);
            uVar4 = param_1[0x1a] + (int)puVar10;
            param_1[0x1a] = uVar4;
            if (uVar4 == 0x40) {
              recovered_10010ee4(param_1,(int)puVar13);
              uVar4 = 0;
              param_1[0x1a] = 0;
            }
            puVar8 = (undefined8 *)((int)puVar8 - (int)puVar10);
            puVar11 = (undefined8 *)((int)puVar11 + (int)puVar10);
          } while (puVar8 != (undefined8 *)0x0);
          local_29 = uVar1;
          local_28 = uVar6;
          local_26 = bVar12;
          local_27 = uVar9;
        } while (uVar4 != 0x38);
LAB_1000ded4:
        local_22 = (undefined1)(uVar2 << 3);
        local_23 = (undefined1)(uVar2 >> 5);
        local_24 = (undefined1)(uVar2 >> 0xd);
        local_25 = (undefined1)(uVar2 >> 0x15);
        recovered_100038f0((undefined8 *)(param_1 + 0x18),(undefined8 *)&local_29,
                           (undefined8 *)&SupervisorCall);
        recovered_10010ee4(param_1,(int)puVar13);
        uVar2 = *param_1;
        param_1[0x1a] = 0;
        *param_2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                   uVar2 >> 0x18;
        uVar2 = param_1[1];
        param_2[1] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        uVar2 = param_1[2];
        param_2[2] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        uVar2 = param_1[3];
        param_2[3] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        uVar2 = param_1[4];
        param_2[4] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        uVar2 = param_1[5];
        param_2[5] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        uVar2 = param_1[6];
        param_2[6] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        uVar2 = param_1[7];
        param_2[7] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
        iVar5 = 0;
        do {
          *(undefined1 *)((int)param_1 + iVar5) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0x6c);
        return;
      }
    }
  } while (puVar11 != (undefined8 *)0x0);
  local_21 = 0;
  bVar12 = (byte)(uVar3 << 3) | bVar12 >> 5;
  uVar1 = (undefined1)((uVar3 & 0x1fffffff) >> 0x15);
  uVar6 = (undefined1)((uVar3 & 0x1fffffff) >> 0xd);
  uVar9 = (undefined1)((uVar3 & 0x1fffffff) >> 5);
  local_29 = uVar1;
  local_28 = uVar6;
  local_26 = bVar12;
  local_27 = uVar9;
  if (uVar4 == 0x38) goto LAB_1000ded4;
  goto LAB_1000de04;
}

#undef EXT_00000008
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22
#undef local_21
#undef local_29

#undef DAT_1000e230
#define DAT_1000e230 (*(uint64_t *)(0x1000e230U))
#undef DAT_1000e238
#define DAT_1000e238 (*(uint64_t *)(0x1000e238U))
#undef DAT_1000e240
#define DAT_1000e240 (*(uint64_t *)(0x1000e240U))
#undef DAT_1000e248
#define DAT_1000e248 (*(uint64_t *)(0x1000e248U))
#undef DAT_1000e250
#define DAT_1000e250 (*(uint64_t *)(0x1000e250U))
#undef DAT_1000e258
#define DAT_1000e258 (*(uint64_t *)(0x1000e258U))
#undef DAT_1000e260
#define DAT_1000e260 (*(uint64_t *)(0x1000e260U))
#undef DAT_1000e268
#define DAT_1000e268 (*(uint64_t *)(0x1000e268U))
#undef DAT_1000e270
#define DAT_1000e270 (*(uint64_t *)(0x1000e270U))
#undef DAT_1000e278
#define DAT_1000e278 (*(uint64_t *)(0x1000e278U))
#undef DAT_1000e280
#define DAT_1000e280 (*(uint64_t *)(0x1000e280U))
#undef DAT_1000e288
#define DAT_1000e288 (*(uint64_t *)(0x1000e288U))
#undef DAT_1000e290
#define DAT_1000e290 (*(uint64_t *)(0x1000e290U))
#undef DAT_1000e298
#define DAT_1000e298 (*(uint64_t *)(0x1000e298U))
#undef DAT_1000e2a0
#define DAT_1000e2a0 (*(uint64_t *)(0x1000e2a0U))
#undef DAT_1000e2a8
#define DAT_1000e2a8 (*(uint64_t *)(0x1000e2a8U))
#undef DAT_1000e2b0
#define DAT_1000e2b0 (*(uint64_t *)(0x1000e2b0U))
#undef DAT_1000e2b8
#define DAT_1000e2b8 (*(uint64_t *)(0x1000e2b8U))
#undef DAT_1000e2c0
#define DAT_1000e2c0 (*(uint64_t *)(0x1000e2c0U))
#undef DAT_1000e2c8
#define DAT_1000e2c8 (*(uint64_t *)(0x1000e2c8U))
#undef DAT_1000e2d0
#define DAT_1000e2d0 (*(uint64_t *)(0x1000e2d0U))
#undef DAT_1000e2d8
#define DAT_1000e2d8 (*(uint64_t *)(0x1000e2d8U))
#undef DAT_1001fa88
#define DAT_1001fa88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeb0U)))
#define uStack_d8 (*(undefined4 *)(pf_stack_frame + 360))
#define uStack_d4 (*(undefined4 *)(pf_stack_frame + 364))
#define uStack_cc (*(undefined4 *)(pf_stack_frame + 372))
#define uStack_c8 (*(undefined4 *)(pf_stack_frame + 376))
#define uStack_c4 (*(undefined4 *)(pf_stack_frame + 380))
#define uStack_bc (*(undefined4 *)(pf_stack_frame + 388))
#define uStack_b8 (*(undefined4 *)(pf_stack_frame + 392))
#define uStack_b4 (*(undefined4 *)(pf_stack_frame + 396))
#define auStack_b0 (*(uint (*)[44])(pf_stack_frame + 400))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
#define local_220 (*(undefined8 *)(pf_stack_frame + 32))
#define local_210 (*(undefined8 *)(pf_stack_frame + 48))
#define local_200 (*(undefined8 *)(pf_stack_frame + 64))
#define local_1f0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 96))
#define local_1d0 (*(undefined8 *)(pf_stack_frame + 112))
#define local_1c0 (*(undefined8 *)(pf_stack_frame + 128))
#define local_1b0 (*(undefined8 *)(pf_stack_frame + 144))
#define local_1a0 (*(undefined8 *)(pf_stack_frame + 160))
#define local_190 (*(undefined8 *)(pf_stack_frame + 176))
#define local_180 (*(undefined8 *)(pf_stack_frame + 192))
#define local_170 (*(undefined8 *)(pf_stack_frame + 208))
#define local_160 (*(undefined8 *)(pf_stack_frame + 224))
#define local_150 (*(undefined8 *)(pf_stack_frame + 240))
#define local_140 (*(undefined8 *)(pf_stack_frame + 256))
#define local_130 (*(undefined4 *)(pf_stack_frame + 272))
#define local_120 (*(undefined4 *)(pf_stack_frame + 288))
#define local_110 (*(undefined4 *)(pf_stack_frame + 304))
#define local_100 (*(undefined4 *)(pf_stack_frame + 320))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 40))
#define local_f0 (*(undefined4 *)(pf_stack_frame + 336))
#define local_e0 (*(undefined4 *)(pf_stack_frame + 352))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 56))
#define local_d0 (*(undefined4 *)(pf_stack_frame + 368))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 384))
#define uStack_1f8 (*(undefined8 *)(pf_stack_frame + 72))
#define uStack_1e8 (*(undefined8 *)(pf_stack_frame + 88))
#define uStack_1d8 (*(undefined8 *)(pf_stack_frame + 104))
#define uStack_1c8 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_1b8 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_1a8 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_198 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_188 (*(undefined8 *)(pf_stack_frame + 184))
#define uStack_178 (*(undefined8 *)(pf_stack_frame + 200))
#define uStack_168 (*(undefined8 *)(pf_stack_frame + 216))
#define uStack_158 (*(undefined8 *)(pf_stack_frame + 232))
#define uStack_148 (*(undefined8 *)(pf_stack_frame + 248))
#define uStack_138 (*(undefined8 *)(pf_stack_frame + 264))
#define uStack_12c (*(undefined4 *)(pf_stack_frame + 276))
#define uStack_128 (*(undefined4 *)(pf_stack_frame + 280))
#define uStack_124 (*(undefined4 *)(pf_stack_frame + 284))
#define uStack_11c (*(undefined4 *)(pf_stack_frame + 292))
#define uStack_118 (*(undefined4 *)(pf_stack_frame + 296))
#define uStack_114 (*(undefined4 *)(pf_stack_frame + 300))
#define uStack_10c (*(undefined4 *)(pf_stack_frame + 308))
#define uStack_108 (*(undefined4 *)(pf_stack_frame + 312))
#define uStack_104 (*(undefined4 *)(pf_stack_frame + 316))
#define uStack_fc (*(undefined4 *)(pf_stack_frame + 324))
#define uStack_f8 (*(undefined4 *)(pf_stack_frame + 328))
#define uStack_f4 (*(undefined4 *)(pf_stack_frame + 332))
#define uStack_ec (*(undefined4 *)(pf_stack_frame + 340))
#define uStack_e8 (*(undefined4 *)(pf_stack_frame + 344))
#define uStack_e4 (*(undefined4 *)(pf_stack_frame + 348))
#define uStack_dc (*(undefined4 *)(pf_stack_frame + 356))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dfa0
 */

void recovered_1000dfa0(uint128 *param_1,int param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  uVar6 = 0;
  uVar7 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uVar8 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uVar9 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_1d0 = (*(uint64_t *)(uint64_t[]){0x53feULL});
  uStack_1c8 = (*(uint64_t *)(uint64_t[]){0xcd6eULL});
  local_1b0 = (*(uint64_t *)(uint64_t[]){0x6658ULL});
  uStack_1a8 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_1e0 = (*(uint64_t *)(uint64_t[]){0xe231ULL});
  uStack_1d8 = (*(uint64_t *)(uint64_t[]){0xc0a4ULL});
  local_1a0 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_198 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_160 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_158 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_120 = 0;
  local_180 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_178 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_170 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_168 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  PF_PART8(local_230, 0) = (*(uint64_t *)(uint64_t[]){0xd51aULL});
  PF_PART8(local_230, 8) = (*(uint64_t *)(uint64_t[]){0x8f25ULL});
  local_220 = (*(uint64_t *)(uint64_t[]){0x2d60ULL});
  uStack_218 = (*(uint64_t *)(uint64_t[]){0xc956ULL});
  local_210 = (*(uint64_t *)(uint64_t[]){0xa7b2ULL});
  uStack_208 = (*(uint64_t *)(uint64_t[]){0x9525ULL});
  local_200 = (*(uint64_t *)(uint64_t[]){0xc760ULL});
  uStack_1f8 = (*(uint64_t *)(uint64_t[]){0x692cULL});
  local_1f0 = (*(uint64_t *)(uint64_t[]){0xdc5cULL});
  uStack_1e8 = (*(uint64_t *)(uint64_t[]){0xfdd6ULL});
  local_150 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_148 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_190 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_188 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_1c0 = (*(uint64_t *)(uint64_t[]){0x36d3ULL});
  uStack_1b8 = (*(uint64_t *)(uint64_t[]){0x2169ULL});
  local_140 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  uStack_138 = (*(uint64_t *)(uint64_t[]){0x6666ULL});
  local_c0 = 0;
  uStack_12c = 0;
  local_130 = 1;
  uStack_128 = uVar8;
  uStack_124 = uVar9;
  uStack_11c = uVar7;
  uStack_118 = uVar8;
  uStack_114 = uVar9;
  uStack_10c = uVar7;
  uStack_108 = uVar8;
  uStack_104 = uVar9;
  uStack_fc = uVar7;
  uStack_f8 = uVar8;
  uStack_f4 = uVar9;
  uStack_ec = uVar7;
  uStack_e8 = uVar8;
  uStack_e4 = uVar9;
  uStack_dc = uVar7;
  uStack_d8 = uVar8;
  uStack_d4 = uVar9;
  uStack_cc = uVar7;
  uStack_c8 = uVar8;
  uStack_c4 = uVar9;
  uStack_bc = uVar7;
  uStack_b8 = uVar8;
  uStack_b4 = uVar9;
  recovered_1000e2e0(auStack_b0,((uintptr_t)pf_module_state + 0xe30U),(uint128 *)&DAT_1001fa88);
  uVar2 = (*(uint64_t *)(uint64_t[]){0x0ULL});
  uVar1 = (*(uint64_t *)(uint64_t[]){0x1ULL});
  *(undefined4 *)(uintptr_t)(param_1+(0x15)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x15]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x15]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x15]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x18)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x18]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x18]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x18]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(5)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[5]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[5]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[5]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(9)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[9]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[9]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[9]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0xd)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xd]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xd]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xd]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x11)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x11]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x11]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x11]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x14)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x14]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x14]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x14]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x19)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x19]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x19]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x19]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(4)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[4]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[4]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[4]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(10)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[10]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[10]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[10]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0xc)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xc]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xc]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xc]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x12)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x12]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x12]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x12]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x1b)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1b]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1b]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1b]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x1c)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1c]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1c]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1c]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x1d)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1d]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1d]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1d]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)param_1 = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)param_1) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)param_1) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)param_1) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(1)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[1]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[1]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[1]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(2)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[2]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[2]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[2]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(3)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[3]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[3]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[3]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0xb)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xb]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xb]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xb]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x13)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x13]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x13]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x13]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x1a)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1a]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1a]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1a]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(6)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[6]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[6]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[6]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0xe)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xe]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xe]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xe]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x16)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x16]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x16]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x16]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x1e)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1e]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1e]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1e]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0xf)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xf]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xf]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0xf]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x17)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x17]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x17]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x17]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(0x1f)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1f]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1f]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[0x1f]) + 0xc) = uVar9;
  *(undefined4 *)(uintptr_t)(param_1+(7)) = uVar6;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[7]) + 4) = uVar7;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[7]) + 8) = uVar8;
  *(undefined4 *)(((uint8_t *)(void *)&param_1[7]) + 0xc) = uVar9;
  *(undefined8 *)(uintptr_t)(param_1+(8)) = uVar1;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[8]) + 8) = uVar2;
  *(undefined8 *)(uintptr_t)(param_1+(0x10)) = uVar1;
  *(undefined8 *)(((uint8_t *)(void *)&param_1[0x10]) + 8) = uVar2;
  uVar4 = 0xff;
  do {
    uVar3 = *(byte *)(param_2 + (uVar4 >> 3)) >> (uVar4 & 7) & 1;
    recovered_1000e954(param_1,&local_230,uVar3,0);
    recovered_1000effc((uint *)local_230,(uint *)param_1);
    recovered_1000effc((uint *)param_1,(uint *)param_1);
    recovered_1000e954(param_1,&local_230,uVar3,0);
    bVar5 = uVar4 != 0;
    uVar4 = uVar4 - 1;
  } while (bVar5);
  return;
}

#undef DAT_1000e230
#undef DAT_1000e238
#undef DAT_1000e240
#undef DAT_1000e248
#undef DAT_1000e250
#undef DAT_1000e258
#undef DAT_1000e260
#undef DAT_1000e268
#undef DAT_1000e270
#undef DAT_1000e278
#undef DAT_1000e280
#undef DAT_1000e288
#undef DAT_1000e290
#undef DAT_1000e298
#undef DAT_1000e2a0
#undef DAT_1000e2a8
#undef DAT_1000e2b0
#undef DAT_1000e2b8
#undef DAT_1000e2c0
#undef DAT_1000e2c8
#undef DAT_1000e2d0
#undef DAT_1000e2d8
#undef DAT_1001fa88
#undef uStack_d8
#undef uStack_d4
#undef uStack_cc
#undef uStack_c8
#undef uStack_c4
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef auStack_b0
#undef local_230
#undef local_220
#undef local_210
#undef local_200
#undef local_1f0
#undef local_1e0
#undef local_1d0
#undef local_1c0
#undef local_1b0
#undef local_1a0
#undef local_190
#undef local_180
#undef local_170
#undef local_160
#undef local_150
#undef local_140
#undef local_130
#undef local_120
#undef local_110
#undef local_100
#undef uStack_218
#undef local_f0
#undef local_e0
#undef uStack_208
#undef local_d0
#undef local_c0
#undef uStack_1f8
#undef uStack_1e8
#undef uStack_1d8
#undef uStack_1c8
#undef uStack_1b8
#undef uStack_1a8
#undef uStack_198
#undef uStack_188
#undef uStack_178
#undef uStack_168
#undef uStack_158
#undef uStack_148
#undef uStack_138
#undef uStack_12c
#undef uStack_128
#undef uStack_124
#undef uStack_11c
#undef uStack_118
#undef uStack_114
#undef uStack_10c
#undef uStack_108
#undef uStack_104
#undef uStack_fc
#undef uStack_f8
#undef uStack_f4
#undef uStack_ec
#undef uStack_e8
#undef uStack_e4
#undef uStack_dc

/* Recovered field convolution, reduction and two carry passes.
 * Pooka's Free Software License. */
void recovered_1000e2e0(uint *output,int left, uint128 *right) {
    const int64_t *a=(const int64_t *)(uintptr_t)left;
    const int64_t *b=(const int64_t *)right;
    int64_t products[31]={0};
    for(unsigned i=0;i<16;i++)
        for(unsigned j=0;j<16;j++)products[i+j]+=a[i]*b[j];
    for(unsigned i=0;i<15;i++)products[i]+=38*products[i+16];
    int64_t *value=(int64_t *)output;
    for(unsigned i=0;i<16;i++)value[i]=products[i];
    for(unsigned round=0;round<2;round++) {
        for(unsigned i=0;i<16;i++) {
            value[i]+=0x10000;
            int64_t carry=value[i]>>16;
            value[i]-=carry*0x10000;
            if(i<15)value[i+1]+=carry-1;
            else value[0]+=38*(carry-1);
        }
    }
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e954
 */

void recovered_1000e954(uint128 *param_1,uint128 *param_2,int param_3,
                       int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint128 *pauVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint128 *pauVar10;
  uint128 *pauVar11;
  bool bVar12;
  bool bVar13;
  ulonglong in_d16;
  uint128 auVar14;
  uint128 auVar15;
  uint128 auVar16;
  uint128 auVar17;
  uint128 auVar18;
  uint128 auVar19;
  uint128 auVar20;

  uVar2 = -param_3;
  uVar3 = -(param_4 + (uint)(param_3 != 0));
  bVar13 = param_1 <= param_2 + 8;
  bVar12 = param_2 + 8 == param_1;
  if (bVar13 && !bVar12) {
    bVar13 = param_2 <= param_1 + 8;
    bVar12 = param_1 + 8 == param_2;
  }
  if (bVar13 && !bVar12) {
    iVar4 = 0;
    do {
      puVar6 = (uint *)(((uint8_t *)(void *)param_2) + iVar4);
      puVar8 = (uint *)(((uint8_t *)(void *)param_1) + iVar4);
      iVar4 = iVar4 + 8;
      uVar9 = puVar6[1];
      uVar7 = (*puVar6 ^ *puVar8) & uVar2;
      *puVar8 = uVar7 ^ *puVar8;
      uVar9 = (uVar9 ^ puVar8[1]) & uVar3;
      puVar8[1] = uVar9 ^ puVar8[1];
      *puVar6 = *puVar6 ^ uVar7;
      puVar6[1] = puVar6[1] ^ uVar9;
    } while (iVar4 != 0x80);
  }
  else {
    auVar16 = param_1[1];
    uVar1 = in_d16 & 0xffff0000ffff0000 | (ulonglong)uVar2 & 0xffff;
    auVar18 = param_2[1];
    PF_PART8(auVar14, 8) = uVar1;
    PF_PART8(auVar14, 0) = uVar1;
    auVar20 = (auVar18 ^ auVar16) & auVar14;
    auVar17 = *param_2;
    auVar18 = auVar18 ^ auVar20;
    auVar19 = (auVar17 ^ *param_1) & auVar14;
    auVar20 = auVar20 ^ auVar16;
    auVar16 = auVar19 ^ *param_1;
    *(longlong *)(uintptr_t)(param_2+(1)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[1]) + 8) = PF_PART8(auVar18, 8);
    auVar17 = auVar17 ^ auVar19;
    *(longlong *)(uintptr_t)(param_1+(1)) = PF_PART8(auVar20, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[1]) + 8) = PF_PART8(auVar20, 8);
    *(longlong *)(uintptr_t)param_1 = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)param_1) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)param_2 = PF_PART8(auVar17, 0);
    *(longlong *)(((uint8_t *)(void *)param_2) + 8) = PF_PART8(auVar17, 8);
    auVar16 = param_1[2];
    auVar18 = param_2[2];
    auVar17 = (auVar18 ^ auVar16) & auVar14;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(2)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[2]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(2)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[2]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[3];
    auVar18 = param_2[3];
    auVar17 = (auVar18 ^ auVar16) & auVar14;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(3)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[3]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(3)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[3]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[4];
    auVar18 = param_2[4];
    auVar17 = (auVar18 ^ auVar16) & auVar14;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(4)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[4]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(4)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[4]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[5];
    auVar18 = param_2[5];
    auVar17 = (auVar18 ^ auVar16) & auVar14;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(5)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[5]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(5)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[5]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[6];
    auVar18 = param_2[6];
    auVar17 = (auVar18 ^ auVar16) & auVar14;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(6)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[6]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(6)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[6]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[7];
    auVar18 = param_2[7];
    auVar14 = (auVar18 ^ auVar16) & auVar14;
    auVar16 = auVar14 ^ auVar16;
    auVar18 = auVar18 ^ auVar14;
    *(longlong *)(uintptr_t)(param_1+(7)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[7]) + 8) = PF_PART8(auVar16, 8);
    in_d16 = PF_PART8(auVar18, 0);
    *(ulonglong *)(uintptr_t)(param_2+(7)) = in_d16;
    *(longlong *)(((uint8_t *)(void *)&param_2[7]) + 8) = PF_PART8(auVar18, 8);
  }
  pauVar10 = param_1 + 8;
  pauVar11 = param_2 + 8;
  pauVar5 = param_2 + 0x10;
  bVar12 = pauVar10 < pauVar5;
  if (bVar12) {
    pauVar5 = param_1 + 0x10;
  }
  if (bVar12 && pauVar11 < pauVar5) {
    iVar4 = 0;
    do {
      puVar6 = (uint *)(((uint8_t *)(void *)pauVar10) + iVar4);
      puVar8 = (uint *)(((uint8_t *)(void *)pauVar11) + iVar4);
      iVar4 = iVar4 + 8;
      uVar9 = puVar8[1];
      uVar7 = (*puVar8 ^ *puVar6) & uVar2;
      *puVar6 = uVar7 ^ *puVar6;
      uVar9 = (uVar9 ^ puVar6[1]) & uVar3;
      puVar6[1] = uVar9 ^ puVar6[1];
      *puVar8 = *puVar8 ^ uVar7;
      puVar8[1] = puVar8[1] ^ uVar9;
    } while (iVar4 != 0x80);
  }
  else {
    auVar16 = param_1[9];
    uVar1 = in_d16 & 0xffff0000ffff0000 | (ulonglong)uVar2 & 0xffff;
    auVar18 = param_2[9];
    PF_PART8(auVar20, 8) = uVar1;
    PF_PART8(auVar20, 0) = uVar1;
    auVar14 = (auVar18 ^ auVar16) & auVar20;
    auVar17 = *pauVar11;
    auVar18 = auVar18 ^ auVar14;
    auVar19 = (auVar17 ^ *pauVar10) & auVar20;
    auVar14 = auVar14 ^ auVar16;
    auVar16 = auVar19 ^ *pauVar10;
    *(longlong *)(uintptr_t)(param_2+(9)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[9]) + 8) = PF_PART8(auVar18, 8);
    auVar17 = auVar17 ^ auVar19;
    *(longlong *)(uintptr_t)(param_1+(9)) = PF_PART8(auVar14, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[9]) + 8) = PF_PART8(auVar14, 8);
    *(longlong *)(uintptr_t)pauVar10 = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[8]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)pauVar11 = PF_PART8(auVar17, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[8]) + 8) = PF_PART8(auVar17, 8);
    auVar16 = param_1[10];
    auVar18 = param_2[10];
    auVar17 = (auVar18 ^ auVar16) & auVar20;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(10)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[10]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(10)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[10]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0xb];
    auVar18 = param_2[0xb];
    auVar17 = (auVar18 ^ auVar16) & auVar20;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0xb)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0xb]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0xb)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0xb]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0xc];
    auVar18 = param_2[0xc];
    auVar17 = (auVar18 ^ auVar16) & auVar20;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0xc)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0xc]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0xc)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0xc]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0xd];
    auVar18 = param_2[0xd];
    auVar17 = (auVar18 ^ auVar16) & auVar20;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0xd)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0xd]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0xd)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0xd]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0xe];
    auVar18 = param_2[0xe];
    auVar17 = (auVar18 ^ auVar16) & auVar20;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0xe)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0xe]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0xe)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0xe]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0xf];
    auVar18 = param_2[0xf];
    auVar20 = (auVar18 ^ auVar16) & auVar20;
    auVar16 = auVar20 ^ auVar16;
    auVar18 = auVar18 ^ auVar20;
    *(longlong *)(uintptr_t)(param_1+(0xf)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0xf]) + 8) = PF_PART8(auVar16, 8);
    in_d16 = PF_PART8(auVar18, 0);
    *(ulonglong *)(uintptr_t)(param_2+(0xf)) = in_d16;
    *(longlong *)(((uint8_t *)(void *)&param_2[0xf]) + 8) = PF_PART8(auVar18, 8);
  }
  pauVar5 = param_2 + 0x18;
  pauVar11 = param_1 + 0x10;
  bVar12 = pauVar11 < pauVar5;
  pauVar10 = param_2 + 0x10;
  if (bVar12) {
    pauVar5 = param_1 + 0x18;
  }
  if (bVar12 && pauVar10 < pauVar5) {
    iVar4 = 0;
    do {
      puVar6 = (uint *)(((uint8_t *)(void *)pauVar11) + iVar4);
      puVar8 = (uint *)(((uint8_t *)(void *)pauVar10) + iVar4);
      iVar4 = iVar4 + 8;
      uVar7 = puVar8[1];
      uVar9 = (*puVar8 ^ *puVar6) & uVar2;
      *puVar6 = uVar9 ^ *puVar6;
      uVar7 = (uVar7 ^ puVar6[1]) & uVar3;
      puVar6[1] = uVar7 ^ puVar6[1];
      *puVar8 = *puVar8 ^ uVar9;
      puVar8[1] = puVar8[1] ^ uVar7;
    } while (iVar4 != 0x80);
  }
  else {
    auVar16 = param_1[0x11];
    uVar1 = in_d16 & 0xffff0000ffff0000 | (ulonglong)uVar2 & 0xffff;
    auVar18 = param_2[0x11];
    PF_PART8(auVar19, 8) = uVar1;
    PF_PART8(auVar19, 0) = uVar1;
    auVar14 = (auVar18 ^ auVar16) & auVar19;
    auVar17 = *pauVar10;
    auVar18 = auVar18 ^ auVar14;
    auVar20 = (auVar17 ^ *pauVar11) & auVar19;
    auVar14 = auVar14 ^ auVar16;
    auVar16 = auVar20 ^ *pauVar11;
    *(longlong *)(uintptr_t)(param_2+(0x11)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x11]) + 8) = PF_PART8(auVar18, 8);
    auVar17 = auVar17 ^ auVar20;
    *(longlong *)(uintptr_t)(param_1+(0x11)) = PF_PART8(auVar14, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x11]) + 8) = PF_PART8(auVar14, 8);
    *(longlong *)(uintptr_t)pauVar11 = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x10]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)pauVar10 = PF_PART8(auVar17, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x10]) + 8) = PF_PART8(auVar17, 8);
    auVar16 = param_1[0x12];
    auVar18 = param_2[0x12];
    auVar17 = (auVar18 ^ auVar16) & auVar19;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x12)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x12]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x12)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x12]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x13];
    auVar18 = param_2[0x13];
    auVar17 = (auVar18 ^ auVar16) & auVar19;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x13)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x13]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x13)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x13]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x14];
    auVar18 = param_2[0x14];
    auVar17 = (auVar18 ^ auVar16) & auVar19;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x14)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x14]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x14)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x14]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x15];
    auVar18 = param_2[0x15];
    auVar17 = (auVar18 ^ auVar16) & auVar19;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x15)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x15]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x15)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x15]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x16];
    auVar18 = param_2[0x16];
    auVar17 = (auVar18 ^ auVar16) & auVar19;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x16)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x16]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x16)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x16]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x17];
    auVar18 = param_2[0x17];
    auVar19 = (auVar18 ^ auVar16) & auVar19;
    auVar16 = auVar19 ^ auVar16;
    auVar18 = auVar18 ^ auVar19;
    *(longlong *)(uintptr_t)(param_1+(0x17)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x17]) + 8) = PF_PART8(auVar16, 8);
    in_d16 = PF_PART8(auVar18, 0);
    *(ulonglong *)(uintptr_t)(param_2+(0x17)) = in_d16;
    *(longlong *)(((uint8_t *)(void *)&param_2[0x17]) + 8) = PF_PART8(auVar18, 8);
  }
  pauVar10 = param_2 + 0x18;
  pauVar11 = param_1 + 0x18;
  pauVar5 = param_1;
  if (pauVar11 < param_2 + 0x20) {
    pauVar5 = param_1 + 0x20;
  }
  if (pauVar11 < param_2 + 0x20 && pauVar10 < pauVar5) {
    iVar4 = 0;
    do {
      puVar6 = (uint *)(((uint8_t *)(void *)pauVar11) + iVar4);
      puVar8 = (uint *)(((uint8_t *)(void *)pauVar10) + iVar4);
      iVar4 = iVar4 + 8;
      uVar9 = puVar8[1];
      uVar7 = (*puVar8 ^ *puVar6) & uVar2;
      *puVar6 = uVar7 ^ *puVar6;
      uVar9 = (uVar9 ^ puVar6[1]) & uVar3;
      puVar6[1] = uVar9 ^ puVar6[1];
      *puVar8 = *puVar8 ^ uVar7;
      puVar8[1] = puVar8[1] ^ uVar9;
    } while (iVar4 != 0x80);
  }
  else {
    auVar16 = param_2[0x19];
    uVar1 = in_d16 & 0xffff0000ffff0000 | (ulonglong)uVar2 & 0xffff;
    auVar18 = param_1[0x19];
    PF_PART8(auVar15, 8) = uVar1;
    PF_PART8(auVar15, 0) = uVar1;
    auVar14 = (auVar16 ^ auVar18) & auVar15;
    auVar17 = *pauVar10;
    auVar16 = auVar16 ^ auVar14;
    auVar20 = (auVar17 ^ *pauVar11) & auVar15;
    auVar14 = auVar14 ^ auVar18;
    auVar18 = auVar20 ^ *pauVar11;
    *(longlong *)(uintptr_t)(param_2+(0x19)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x19]) + 8) = PF_PART8(auVar16, 8);
    auVar17 = auVar17 ^ auVar20;
    *(longlong *)(uintptr_t)(param_1+(0x19)) = PF_PART8(auVar14, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x19]) + 8) = PF_PART8(auVar14, 8);
    *(longlong *)(uintptr_t)pauVar11 = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x18]) + 8) = PF_PART8(auVar18, 8);
    *(longlong *)(uintptr_t)pauVar10 = PF_PART8(auVar17, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x18]) + 8) = PF_PART8(auVar17, 8);
    auVar16 = param_1[0x1a];
    auVar18 = param_2[0x1a];
    auVar17 = (auVar18 ^ auVar16) & auVar15;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x1a)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x1a]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x1a)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x1a]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x1b];
    auVar18 = param_2[0x1b];
    auVar17 = (auVar18 ^ auVar16) & auVar15;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x1b)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x1b]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x1b)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x1b]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x1c];
    auVar18 = param_2[0x1c];
    auVar17 = (auVar18 ^ auVar16) & auVar15;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x1c)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x1c]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x1c)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x1c]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x1d];
    auVar18 = param_2[0x1d];
    auVar17 = (auVar18 ^ auVar16) & auVar15;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x1d)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x1d]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x1d)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x1d]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x1e];
    auVar18 = param_2[0x1e];
    auVar17 = (auVar18 ^ auVar16) & auVar15;
    auVar16 = auVar17 ^ auVar16;
    auVar18 = auVar18 ^ auVar17;
    *(longlong *)(uintptr_t)(param_1+(0x1e)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x1e]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x1e)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x1e]) + 8) = PF_PART8(auVar18, 8);
    auVar16 = param_1[0x1f];
    auVar18 = param_2[0x1f];
    auVar15 = (auVar18 ^ auVar16) & auVar15;
    auVar16 = auVar15 ^ auVar16;
    auVar18 = auVar18 ^ auVar15;
    *(longlong *)(uintptr_t)(param_1+(0x1f)) = PF_PART8(auVar16, 0);
    *(longlong *)(((uint8_t *)(void *)&param_1[0x1f]) + 8) = PF_PART8(auVar16, 8);
    *(longlong *)(uintptr_t)(param_2+(0x1f)) = PF_PART8(auVar18, 0);
    *(longlong *)(((uint8_t *)(void *)&param_2[0x1f]) + 8) = PF_PART8(auVar18, 8);
  }
  return;
}


#undef DAT_1001fb08
#define DAT_1001fb08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf30U)))
#define local_238 (*(int *)(pf_stack_frame + 632))
#define local_234 (*(int *)(pf_stack_frame + 636))
#define local_230 (*(int *)(pf_stack_frame + 640))
#define local_22c (*(int *)(pf_stack_frame + 644))
#define local_228 (*(int *)(pf_stack_frame + 648))
#define local_224 (*(int *)(pf_stack_frame + 652))
#define local_220 (*(uint *)(pf_stack_frame + 656))
#define local_21c (*(int *)(pf_stack_frame + 660))
#define local_218 (*(uint *)(pf_stack_frame + 664))
#define local_214 (*(int *)(pf_stack_frame + 668))
#define local_210 (*(uint *)(pf_stack_frame + 672))
#define local_20c (*(int *)(pf_stack_frame + 676))
#define local_208 (*(uint *)(pf_stack_frame + 680))
#define local_204 (*(int *)(pf_stack_frame + 684))
#define local_200 (*(uint *)(pf_stack_frame + 688))
#define local_1fc (*(int *)(pf_stack_frame + 692))
#define local_1f8 (*(uint *)(pf_stack_frame + 696))
#define local_1f4 (*(int *)(pf_stack_frame + 700))
#define local_1f0 (*(uint *)(pf_stack_frame + 704))
#define local_1ec (*(int *)(pf_stack_frame + 708))
#define local_1e8 (*(uint *)(pf_stack_frame + 712))
#define local_1e4 (*(int *)(pf_stack_frame + 716))
#define local_1e0 (*(uint *)(pf_stack_frame + 720))
#define local_1dc (*(int *)(pf_stack_frame + 724))
#define local_1d8 (*(uint *)(pf_stack_frame + 728))
#define local_1d4 (*(int *)(pf_stack_frame + 732))
#define local_1d0 (*(uint *)(pf_stack_frame + 736))
#define local_1cc (*(int *)(pf_stack_frame + 740))
#define local_1c8 (*(uint *)(pf_stack_frame + 744))
#define local_1c4 (*(int *)(pf_stack_frame + 748))
#define local_1c0 (*(uint *)(pf_stack_frame + 752))
#define local_1bc (*(int *)(pf_stack_frame + 756))
#define local_1b8 (*(uint *)(pf_stack_frame + 760))
#define local_1b4 (*(int *)(pf_stack_frame + 764))
#define local_1b0 (*(uint *)(pf_stack_frame + 768))
#define local_1ac (*(int *)(pf_stack_frame + 772))
#define local_1a8 (*(uint *)(pf_stack_frame + 776))
#define local_1a4 (*(int *)(pf_stack_frame + 780))
#define local_1a0 (*(uint *)(pf_stack_frame + 784))
#define local_19c (*(int *)(pf_stack_frame + 788))
#define local_198 (*(uint *)(pf_stack_frame + 792))
#define local_194 (*(int *)(pf_stack_frame + 796))
#define local_190 (*(uint *)(pf_stack_frame + 800))
#define local_18c (*(int *)(pf_stack_frame + 804))
#define local_188 (*(uint *)(pf_stack_frame + 808))
#define local_184 (*(int *)(pf_stack_frame + 812))
#define local_180 (*(uint *)(pf_stack_frame + 816))
#define local_17c (*(int *)(pf_stack_frame + 820))
#define local_178 (*(uint *)(pf_stack_frame + 824))
#define local_174 (*(int *)(pf_stack_frame + 828))
#define local_170 (*(uint *)(pf_stack_frame + 832))
#define local_16c (*(int *)(pf_stack_frame + 836))
#define local_168 (*(uint *)(pf_stack_frame + 840))
#define local_164 (*(int *)(pf_stack_frame + 844))
#define local_160 (*(uint *)(pf_stack_frame + 848))
#define local_15c (*(int *)(pf_stack_frame + 852))
#define local_158 (*(uint *)(pf_stack_frame + 856))
#define local_154 (*(int *)(pf_stack_frame + 860))
#define local_150 (*(uint *)(pf_stack_frame + 864))
#define local_14c (*(int *)(pf_stack_frame + 868))
#define local_148 (*(uint *)(pf_stack_frame + 872))
#define local_144 (*(int *)(pf_stack_frame + 876))
#define local_140 (*(uint *)(pf_stack_frame + 880))
#define local_13c (*(int *)(pf_stack_frame + 884))
#define local_138 (*(uint *)(pf_stack_frame + 888))
#define local_134 (*(int *)(pf_stack_frame + 892))
#define local_130 (*(uint *)(pf_stack_frame + 896))
#define local_12c (*(int *)(pf_stack_frame + 900))
#define local_128 (*(uint *)(pf_stack_frame + 904))
#define local_124 (*(int *)(pf_stack_frame + 908))
#define local_120 (*(uint *)(pf_stack_frame + 912))
#define local_11c (*(int *)(pf_stack_frame + 916))
#define local_118 (*(uint *)(pf_stack_frame + 920))
#define local_114 (*(int *)(pf_stack_frame + 924))
#define local_110 (*(uint *)(pf_stack_frame + 928))
#define local_10c (*(int *)(pf_stack_frame + 932))
#define local_108 (*(uint *)(pf_stack_frame + 936))
#define local_104 (*(int *)(pf_stack_frame + 940))
#define local_100 (*(uint *)(pf_stack_frame + 944))
#define local_fc (*(int *)(pf_stack_frame + 948))
#define local_f8 (*(uint *)(pf_stack_frame + 952))
#define local_f4 (*(int *)(pf_stack_frame + 956))
#define local_f0 (*(uint *)(pf_stack_frame + 960))
#define local_ec (*(int *)(pf_stack_frame + 964))
#define local_e8 (*(uint *)(pf_stack_frame + 968))
#define local_e4 (*(int *)(pf_stack_frame + 972))
#define local_e0 (*(uint *)(pf_stack_frame + 976))
#define local_dc (*(int *)(pf_stack_frame + 980))
#define local_d8 (*(uint *)(pf_stack_frame + 984))
#define local_d4 (*(int *)(pf_stack_frame + 988))
#define local_d0 (*(uint *)(pf_stack_frame + 992))
#define local_cc (*(int *)(pf_stack_frame + 996))
#define local_c8 (*(uint *)(pf_stack_frame + 1000))
#define local_c4 (*(int *)(pf_stack_frame + 1004))
#define local_c0 (*(uint *)(pf_stack_frame + 1008))
#define local_bc (*(int *)(pf_stack_frame + 1012))
#define local_b8 (*(uint *)(pf_stack_frame + 1016))
#define local_b4 (*(int *)(pf_stack_frame + 1020))
#define local_b0 (*(uint *)(pf_stack_frame + 1024))
#define local_ac (*(int *)(pf_stack_frame + 1028))
#define local_a8 (*(uint *)(pf_stack_frame + 1032))
#define local_a4 (*(int *)(pf_stack_frame + 1036))
#define local_a0 (*(uint *)(pf_stack_frame + 1040))
#define local_9c (*(int *)(pf_stack_frame + 1044))
#define local_98 (*(uint *)(pf_stack_frame + 1048))
#define local_94 (*(int *)(pf_stack_frame + 1052))
#define local_90 (*(uint *)(pf_stack_frame + 1056))
#define local_8c (*(int *)(pf_stack_frame + 1060))
#define local_88 (*(uint *)(pf_stack_frame + 1064))
#define local_84 (*(int *)(pf_stack_frame + 1068))
#define local_80 (*(uint *)(pf_stack_frame + 1072))
#define local_7c (*(int *)(pf_stack_frame + 1076))
#define local_78 (*(uint *)(pf_stack_frame + 1080))
#define local_74 (*(int *)(pf_stack_frame + 1084))
#define local_70 (*(uint *)(pf_stack_frame + 1088))
#define local_6c (*(int *)(pf_stack_frame + 1092))
#define local_68 (*(uint *)(pf_stack_frame + 1096))
#define local_64 (*(int *)(pf_stack_frame + 1100))
#define local_60 (*(uint *)(pf_stack_frame + 1104))
#define local_5c (*(int *)(pf_stack_frame + 1108))
#define local_58 (*(uint *)(pf_stack_frame + 1112))
#define local_54 (*(int *)(pf_stack_frame + 1116))
#define local_50 (*(uint *)(pf_stack_frame + 1120))
#define local_4c (*(int *)(pf_stack_frame + 1124))
#define local_48 (*(uint *)(pf_stack_frame + 1128))
#define local_44 (*(int *)(pf_stack_frame + 1132))
#define local_40 (*(uint *)(pf_stack_frame + 1136))
#define local_3c (*(int *)(pf_stack_frame + 1140))
#define local_38 (*(uint *)(pf_stack_frame + 1144))
#define local_34 (*(int *)(pf_stack_frame + 1148))
#define local_30 (*(uint *)(pf_stack_frame + 1152))
#define local_2c (*(int *)(pf_stack_frame + 1156))
#define local_28 (*(uint *)(pf_stack_frame + 1160))
#define local_24 (*(int *)(pf_stack_frame + 1164))
#define local_4a0 (*(int *)(pf_stack_frame + 16))
#define local_49c (*(int *)(pf_stack_frame + 20))
#define local_498 (*(int *)(pf_stack_frame + 24))
#define local_494 (*(int *)(pf_stack_frame + 28))
#define local_490 (*(int *)(pf_stack_frame + 32))
#define local_48c (*(int *)(pf_stack_frame + 36))
#define local_488 (*(int *)(pf_stack_frame + 40))
#define local_484 (*(int *)(pf_stack_frame + 44))
#define local_480 (*(int *)(pf_stack_frame + 48))
#define local_47c (*(int *)(pf_stack_frame + 52))
#define local_478 (*(int *)(pf_stack_frame + 56))
#define local_474 (*(int *)(pf_stack_frame + 60))
#define local_470 (*(int *)(pf_stack_frame + 64))
#define local_46c (*(int *)(pf_stack_frame + 68))
#define local_468 (*(int *)(pf_stack_frame + 72))
#define local_464 (*(int *)(pf_stack_frame + 76))
#define local_460 (*(int *)(pf_stack_frame + 80))
#define local_45c (*(int *)(pf_stack_frame + 84))
#define local_458 (*(int *)(pf_stack_frame + 88))
#define local_454 (*(int *)(pf_stack_frame + 92))
#define local_450 (*(int *)(pf_stack_frame + 96))
#define local_44c (*(int *)(pf_stack_frame + 100))
#define local_448 (*(int *)(pf_stack_frame + 104))
#define local_444 (*(int *)(pf_stack_frame + 108))
#define local_440 (*(int *)(pf_stack_frame + 112))
#define local_43c (*(int *)(pf_stack_frame + 116))
#define local_438 (*(int *)(pf_stack_frame + 120))
#define local_434 (*(int *)(pf_stack_frame + 124))
#define local_430 (*(int *)(pf_stack_frame + 128))
#define local_42c (*(int *)(pf_stack_frame + 132))
#define local_428 (*(int *)(pf_stack_frame + 136))
#define local_424 (*(int *)(pf_stack_frame + 140))
#define local_420 (*(int *)(pf_stack_frame + 144))
#define local_41c (*(int *)(pf_stack_frame + 148))
#define local_418 (*(int *)(pf_stack_frame + 152))
#define local_414 (*(int *)(pf_stack_frame + 156))
#define local_410 (*(int *)(pf_stack_frame + 160))
#define local_40c (*(int *)(pf_stack_frame + 164))
#define local_408 (*(int *)(pf_stack_frame + 168))
#define local_404 (*(int *)(pf_stack_frame + 172))
#define local_400 (*(int *)(pf_stack_frame + 176))
#define local_3fc (*(int *)(pf_stack_frame + 180))
#define local_3f8 (*(int *)(pf_stack_frame + 184))
#define local_3f4 (*(int *)(pf_stack_frame + 188))
#define local_3f0 (*(int *)(pf_stack_frame + 192))
#define local_3ec (*(int *)(pf_stack_frame + 196))
#define local_3e8 (*(int *)(pf_stack_frame + 200))
#define local_3e4 (*(int *)(pf_stack_frame + 204))
#define local_3e0 (*(int *)(pf_stack_frame + 208))
#define local_3dc (*(int *)(pf_stack_frame + 212))
#define local_3d8 (*(int *)(pf_stack_frame + 216))
#define local_3d4 (*(int *)(pf_stack_frame + 220))
#define local_3d0 (*(int *)(pf_stack_frame + 224))
#define local_3cc (*(int *)(pf_stack_frame + 228))
#define local_3c8 (*(int *)(pf_stack_frame + 232))
#define local_3c4 (*(int *)(pf_stack_frame + 236))
#define local_3c0 (*(int *)(pf_stack_frame + 240))
#define local_3bc (*(int *)(pf_stack_frame + 244))
#define local_3b8 (*(int *)(pf_stack_frame + 248))
#define local_3b4 (*(int *)(pf_stack_frame + 252))
#define local_3b0 (*(int *)(pf_stack_frame + 256))
#define local_3ac (*(int *)(pf_stack_frame + 260))
#define local_3a8 (*(int *)(pf_stack_frame + 264))
#define local_3a4 (*(int *)(pf_stack_frame + 268))
#define local_3a0 (*(int *)(pf_stack_frame + 272))
#define local_39c (*(int *)(pf_stack_frame + 276))
#define local_398 (*(int *)(pf_stack_frame + 280))
#define local_394 (*(int *)(pf_stack_frame + 284))
#define local_390 (*(int *)(pf_stack_frame + 288))
#define local_38c (*(int *)(pf_stack_frame + 292))
#define local_388 (*(int *)(pf_stack_frame + 296))
#define local_384 (*(int *)(pf_stack_frame + 300))
#define local_380 (*(int *)(pf_stack_frame + 304))
#define local_37c (*(int *)(pf_stack_frame + 308))
#define local_378 (*(int *)(pf_stack_frame + 312))
#define local_374 (*(int *)(pf_stack_frame + 316))
#define local_370 (*(int *)(pf_stack_frame + 320))
#define local_36c (*(int *)(pf_stack_frame + 324))
#define local_368 (*(int *)(pf_stack_frame + 328))
#define local_364 (*(int *)(pf_stack_frame + 332))
#define local_360 (*(int *)(pf_stack_frame + 336))
#define local_35c (*(int *)(pf_stack_frame + 340))
#define local_358 (*(int *)(pf_stack_frame + 344))
#define local_354 (*(int *)(pf_stack_frame + 348))
#define local_350 (*(int *)(pf_stack_frame + 352))
#define local_34c (*(int *)(pf_stack_frame + 356))
#define local_348 (*(int *)(pf_stack_frame + 360))
#define local_344 (*(int *)(pf_stack_frame + 364))
#define local_340 (*(int *)(pf_stack_frame + 368))
#define local_33c (*(int *)(pf_stack_frame + 372))
#define local_338 (*(int *)(pf_stack_frame + 376))
#define local_334 (*(int *)(pf_stack_frame + 380))
#define local_330 (*(int *)(pf_stack_frame + 384))
#define local_32c (*(int *)(pf_stack_frame + 388))
#define local_328 (*(int *)(pf_stack_frame + 392))
#define local_324 (*(int *)(pf_stack_frame + 396))
#define local_320 (*(int *)(pf_stack_frame + 400))
#define local_31c (*(int *)(pf_stack_frame + 404))
#define local_318 (*(int *)(pf_stack_frame + 408))
#define local_314 (*(int *)(pf_stack_frame + 412))
#define local_310 (*(int *)(pf_stack_frame + 416))
#define local_30c (*(int *)(pf_stack_frame + 420))
#define local_308 (*(int *)(pf_stack_frame + 424))
#define local_304 (*(int *)(pf_stack_frame + 428))
#define local_300 (*(int *)(pf_stack_frame + 432))
#define local_2fc (*(int *)(pf_stack_frame + 436))
#define local_2f8 (*(int *)(pf_stack_frame + 440))
#define local_2f4 (*(int *)(pf_stack_frame + 444))
#define local_2f0 (*(int *)(pf_stack_frame + 448))
#define local_2ec (*(int *)(pf_stack_frame + 452))
#define local_2e8 (*(int *)(pf_stack_frame + 456))
#define local_2e4 (*(int *)(pf_stack_frame + 460))
#define local_2e0 (*(int *)(pf_stack_frame + 464))
#define local_2dc (*(int *)(pf_stack_frame + 468))
#define local_2d8 (*(int *)(pf_stack_frame + 472))
#define local_2d4 (*(int *)(pf_stack_frame + 476))
#define local_2d0 (*(int *)(pf_stack_frame + 480))
#define local_2cc (*(int *)(pf_stack_frame + 484))
#define local_2c8 (*(int *)(pf_stack_frame + 488))
#define local_2c4 (*(int *)(pf_stack_frame + 492))
#define local_2c0 (*(int *)(pf_stack_frame + 496))
#define local_2bc (*(int *)(pf_stack_frame + 500))
#define local_2b8 (*(int *)(pf_stack_frame + 504))
#define local_2b4 (*(int *)(pf_stack_frame + 508))
#define local_2b0 (*(int *)(pf_stack_frame + 512))
#define local_2ac (*(int *)(pf_stack_frame + 516))
#define local_2a8 (*(int *)(pf_stack_frame + 520))
#define local_2a4 (*(int *)(pf_stack_frame + 524))
#define local_2a0 (*(int *)(pf_stack_frame + 528))
#define local_29c (*(int *)(pf_stack_frame + 532))
#define local_298 (*(int *)(pf_stack_frame + 536))
#define local_294 (*(int *)(pf_stack_frame + 540))
#define local_290 (*(int *)(pf_stack_frame + 544))
#define local_28c (*(int *)(pf_stack_frame + 548))
#define local_288 (*(int *)(pf_stack_frame + 552))
#define local_284 (*(int *)(pf_stack_frame + 556))
#define local_280 (*(int *)(pf_stack_frame + 560))
#define local_27c (*(int *)(pf_stack_frame + 564))
#define local_278 (*(int *)(pf_stack_frame + 568))
#define local_274 (*(int *)(pf_stack_frame + 572))
#define local_270 (*(int *)(pf_stack_frame + 576))
#define local_26c (*(int *)(pf_stack_frame + 580))
#define local_268 (*(int *)(pf_stack_frame + 584))
#define local_264 (*(int *)(pf_stack_frame + 588))
#define local_260 (*(int *)(pf_stack_frame + 592))
#define local_25c (*(int *)(pf_stack_frame + 596))
#define local_258 (*(int *)(pf_stack_frame + 600))
#define local_254 (*(int *)(pf_stack_frame + 604))
#define local_250 (*(int *)(pf_stack_frame + 608))
#define local_24c (*(int *)(pf_stack_frame + 612))
#define local_248 (*(int *)(pf_stack_frame + 616))
#define local_244 (*(int *)(pf_stack_frame + 620))
#define local_240 (*(int *)(pf_stack_frame + 624))
#define local_23c (*(int *)(pf_stack_frame + 628))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000effc
 */

void recovered_1000effc(uint *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;

  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[6];
  uVar4 = param_1[0x26];
  uVar5 = param_1[0x27];
  uVar6 = param_1[7];
  uVar7 = param_1[8];
  uVar8 = param_1[0x28];
  uVar9 = param_1[9];
  uVar10 = param_1[0x29];
  uVar113 = param_1[2];
  uVar87 = param_1[0x22];
  uVar35 = param_1[0x20];
  uVar125 = param_1[3];
  uVar61 = param_1[0x23];
  local_98 = uVar87 - uVar113;
  local_94 = uVar61 - (uVar125 + (uVar87 < uVar113));
  uVar116 = param_1[0x21];
  uVar127 = param_1[4];
  local_a0 = uVar35 - uVar1;
  uVar119 = param_1[0x24];
  uVar121 = param_1[5];
  uVar123 = param_1[0x25];
  local_9c = uVar116 - (uVar2 + (uVar35 < uVar1));
  local_90 = uVar119 - uVar127;
  local_8c = uVar123 - (uVar121 + (uVar119 < uVar127));
  local_88 = uVar4 - uVar3;
  local_84 = uVar5 - (uVar6 + (uVar4 < uVar3));
  local_80 = uVar8 - uVar7;
  uVar88 = param_1[10];
  local_7c = uVar10 - (uVar9 + (uVar8 < uVar7));
  uVar114 = param_1[0x2a];
  uVar128 = param_1[0xb];
  uVar36 = param_1[0x2b];
  uVar120 = param_1[0xc];
  local_78 = uVar114 - uVar88;
  uVar62 = param_1[0x2c];
  uVar126 = param_1[0xd];
  uVar117 = param_1[0x2d];
  local_74 = uVar36 - (uVar128 + (uVar114 < uVar88));
  local_70 = uVar62 - uVar120;
  local_6c = uVar117 - (uVar126 + (uVar62 < uVar120));
  uVar37 = param_1[0xe];
  uVar11 = param_1[0x2e];
  uVar63 = param_1[0xf];
  uVar89 = param_1[0x2f];
  local_68 = uVar11 - uVar37;
  local_64 = uVar89 - (uVar63 + (uVar11 < uVar37));
  uVar38 = param_1[0x10];
  uVar12 = param_1[0x30];
  uVar64 = param_1[0x11];
  uVar90 = param_1[0x31];
  local_60 = uVar12 - uVar38;
  local_5c = uVar90 - (uVar64 + (uVar12 < uVar38));
  uVar39 = param_1[0x12];
  uVar13 = param_1[0x32];
  uVar65 = param_1[0x13];
  uVar91 = param_1[0x33];
  local_58 = uVar13 - uVar39;
  local_54 = uVar91 - (uVar65 + (uVar13 < uVar39));
  uVar40 = param_1[0x14];
  uVar14 = param_1[0x34];
  uVar66 = param_1[0x15];
  uVar92 = param_1[0x35];
  local_50 = uVar14 - uVar40;
  local_4c = uVar92 - (uVar66 + (uVar14 < uVar40));
  uVar41 = param_1[0x16];
  uVar15 = param_1[0x36];
  uVar67 = param_1[0x17];
  uVar93 = param_1[0x37];
  local_48 = uVar15 - uVar41;
  local_44 = uVar93 - (uVar67 + (uVar15 < uVar41));
  uVar42 = param_1[0x18];
  uVar16 = param_1[0x38];
  uVar68 = param_1[0x19];
  uVar94 = param_1[0x39];
  local_40 = uVar16 - uVar42;
  local_3c = uVar94 - (uVar68 + (uVar16 < uVar42));
  uVar43 = param_1[0x1a];
  uVar17 = param_1[0x3a];
  uVar69 = param_1[0x1b];
  uVar95 = param_1[0x3b];
  local_38 = uVar17 - uVar43;
  local_34 = uVar95 - (uVar69 + (uVar17 < uVar43));
  uVar44 = param_1[0x1c];
  uVar18 = param_1[0x3c];
  uVar70 = param_1[0x1d];
  uVar96 = param_1[0x3d];
  local_30 = uVar18 - uVar44;
  local_2c = uVar96 - (uVar70 + (uVar18 < uVar44));
  uVar45 = param_1[0x1e];
  uVar19 = param_1[0x3e];
  uVar71 = param_1[0x1f];
  uVar97 = param_1[0x3f];
  local_28 = uVar19 - uVar45;
  local_24 = uVar97 - (uVar71 + (uVar19 < uVar45));
  uVar46 = *param_2;
  uVar20 = param_2[0x20];
  uVar72 = param_2[1];
  uVar98 = param_2[0x21];
  local_2a0 = uVar20 - uVar46;
  local_29c = uVar98 - (uVar72 + (uVar20 < uVar46));
  uVar47 = param_2[2];
  uVar21 = param_2[0x22];
  uVar73 = param_2[3];
  uVar99 = param_2[0x23];
  local_298 = uVar21 - uVar47;
  local_294 = uVar99 - (uVar73 + (uVar21 < uVar47));
  uVar48 = param_2[4];
  uVar22 = param_2[0x24];
  uVar74 = param_2[5];
  uVar100 = param_2[0x25];
  local_290 = uVar22 - uVar48;
  local_28c = uVar100 - (uVar74 + (uVar22 < uVar48));
  uVar49 = param_2[6];
  uVar23 = param_2[0x26];
  uVar75 = param_2[7];
  uVar101 = param_2[0x27];
  local_288 = uVar23 - uVar49;
  local_284 = uVar101 - (uVar75 + (uVar23 < uVar49));
  uVar50 = param_2[8];
  uVar24 = param_2[0x28];
  uVar76 = param_2[9];
  uVar102 = param_2[0x29];
  local_280 = uVar24 - uVar50;
  local_27c = uVar102 - (uVar76 + (uVar24 < uVar50));
  uVar51 = param_2[10];
  uVar25 = param_2[0x2a];
  uVar77 = param_2[0xb];
  uVar103 = param_2[0x2b];
  local_278 = uVar25 - uVar51;
  local_274 = uVar103 - (uVar77 + (uVar25 < uVar51));
  uVar52 = param_2[0xc];
  uVar26 = param_2[0x2c];
  uVar78 = param_2[0xd];
  uVar104 = param_2[0x2d];
  local_270 = uVar26 - uVar52;
  local_26c = uVar104 - (uVar78 + (uVar26 < uVar52));
  uVar53 = param_2[0xe];
  uVar27 = param_2[0x2e];
  uVar79 = param_2[0xf];
  uVar105 = param_2[0x2f];
  local_268 = uVar27 - uVar53;
  local_264 = uVar105 - (uVar79 + (uVar27 < uVar53));
  uVar54 = param_2[0x10];
  uVar28 = param_2[0x30];
  uVar80 = param_2[0x11];
  uVar106 = param_2[0x31];
  local_260 = uVar28 - uVar54;
  local_25c = uVar106 - (uVar80 + (uVar28 < uVar54));
  uVar55 = param_2[0x12];
  uVar29 = param_2[0x32];
  uVar81 = param_2[0x13];
  uVar107 = param_2[0x33];
  local_258 = uVar29 - uVar55;
  local_254 = uVar107 - (uVar81 + (uVar29 < uVar55));
  uVar56 = param_2[0x14];
  uVar30 = param_2[0x34];
  uVar82 = param_2[0x15];
  uVar108 = param_2[0x35];
  local_250 = uVar30 - uVar56;
  local_24c = uVar108 - (uVar82 + (uVar30 < uVar56));
  uVar57 = param_2[0x16];
  uVar31 = param_2[0x36];
  uVar83 = param_2[0x17];
  uVar109 = param_2[0x37];
  local_248 = uVar31 - uVar57;
  local_244 = uVar109 - (uVar83 + (uVar31 < uVar57));
  uVar58 = param_2[0x18];
  uVar32 = param_2[0x38];
  uVar84 = param_2[0x19];
  uVar110 = param_2[0x39];
  local_240 = uVar32 - uVar58;
  local_23c = uVar110 - (uVar84 + (uVar32 < uVar58));
  uVar59 = param_2[0x1a];
  uVar33 = param_2[0x3a];
  uVar85 = param_2[0x1b];
  uVar111 = param_2[0x3b];
  local_238 = uVar33 - uVar59;
  local_234 = uVar111 - (uVar85 + (uVar33 < uVar59));
  uVar60 = param_2[0x1c];
  uVar34 = param_2[0x3c];
  uVar86 = param_2[0x1d];
  uVar112 = param_2[0x3d];
  local_230 = uVar34 - uVar60;
  uVar115 = param_2[0x1e];
  uVar122 = param_2[0x3e];
  local_22c = uVar112 - (uVar86 + (uVar34 < uVar60));
  uVar118 = param_2[0x1f];
  uVar124 = param_2[0x3f];
  local_228 = uVar122 - uVar115;
  local_224 = uVar124 - (uVar118 + (uVar122 < uVar115));
  recovered_1000e2e0(&local_a0,(int)&local_a0,(uint128 *)&local_2a0);
  local_a8 = uVar45 + uVar19;
  local_a4 = uVar71 + uVar97 + (uint)CARRY4(uVar45,uVar19);
  local_b0 = uVar44 + uVar18;
  local_ac = uVar70 + uVar96 + (uint)CARRY4(uVar44,uVar18);
  local_b8 = uVar43 + uVar17;
  local_b4 = uVar69 + uVar95 + (uint)CARRY4(uVar43,uVar17);
  local_c0 = uVar42 + uVar16;
  local_bc = uVar68 + uVar94 + (uint)CARRY4(uVar42,uVar16);
  local_c8 = uVar41 + uVar15;
  local_c4 = uVar67 + uVar93 + (uint)CARRY4(uVar41,uVar15);
  local_d0 = uVar40 + uVar14;
  local_cc = uVar66 + uVar92 + (uint)CARRY4(uVar40,uVar14);
  local_d8 = uVar39 + uVar13;
  local_d4 = uVar65 + uVar91 + (uint)CARRY4(uVar39,uVar13);
  local_e0 = uVar38 + uVar12;
  local_dc = uVar64 + uVar90 + (uint)CARRY4(uVar38,uVar12);
  local_e8 = uVar37 + uVar11;
  local_e4 = uVar63 + uVar89 + (uint)CARRY4(uVar37,uVar11);
  local_f0 = uVar120 + uVar62;
  local_ec = uVar126 + uVar117 + (uint)CARRY4(uVar120,uVar62);
  local_f8 = uVar88 + uVar114;
  local_f4 = uVar128 + uVar36 + (uint)CARRY4(uVar88,uVar114);
  local_100 = uVar7 + uVar8;
  local_fc = uVar9 + uVar10 + (uint)CARRY4(uVar7,uVar8);
  local_108 = uVar3 + uVar4;
  local_104 = uVar6 + uVar5 + (uint)CARRY4(uVar3,uVar4);
  local_110 = uVar127 + uVar119;
  local_10c = uVar121 + uVar123 + (uint)CARRY4(uVar127,uVar119);
  local_118 = uVar113 + uVar87;
  local_114 = uVar125 + uVar61 + (uint)CARRY4(uVar113,uVar87);
  local_120 = uVar1 + uVar35;
  local_11c = uVar2 + uVar116 + (uint)CARRY4(uVar1,uVar35);
  local_228 = uVar115 + uVar122;
  local_224 = uVar118 + uVar124 + (uint)CARRY4(uVar115,uVar122);
  local_230 = uVar60 + uVar34;
  local_22c = uVar86 + uVar112 + (uint)CARRY4(uVar60,uVar34);
  local_238 = uVar59 + uVar33;
  local_234 = uVar85 + uVar111 + (uint)CARRY4(uVar59,uVar33);
  local_240 = uVar58 + uVar32;
  local_23c = uVar84 + uVar110 + (uint)CARRY4(uVar58,uVar32);
  local_248 = uVar57 + uVar31;
  local_244 = uVar83 + uVar109 + (uint)CARRY4(uVar57,uVar31);
  local_250 = uVar56 + uVar30;
  local_24c = uVar82 + uVar108 + (uint)CARRY4(uVar56,uVar30);
  local_258 = uVar55 + uVar29;
  local_254 = uVar81 + uVar107 + (uint)CARRY4(uVar55,uVar29);
  local_260 = uVar54 + uVar28;
  local_25c = uVar80 + uVar106 + (uint)CARRY4(uVar54,uVar28);
  local_268 = uVar53 + uVar27;
  local_264 = uVar79 + uVar105 + (uint)CARRY4(uVar53,uVar27);
  local_270 = uVar52 + uVar26;
  local_26c = uVar78 + uVar104 + (uint)CARRY4(uVar52,uVar26);
  local_278 = uVar51 + uVar25;
  local_274 = uVar77 + uVar103 + (uint)CARRY4(uVar51,uVar25);
  local_280 = uVar50 + uVar24;
  local_27c = uVar76 + uVar102 + (uint)CARRY4(uVar50,uVar24);
  local_288 = uVar49 + uVar23;
  local_284 = uVar75 + uVar101 + (uint)CARRY4(uVar49,uVar23);
  local_290 = uVar48 + uVar22;
  local_28c = uVar74 + uVar100 + (uint)CARRY4(uVar48,uVar22);
  local_298 = uVar47 + uVar21;
  local_294 = uVar73 + uVar99 + (uint)CARRY4(uVar47,uVar21);
  local_2a0 = uVar46 + uVar20;
  local_29c = uVar72 + uVar98 + (uint)CARRY4(uVar46,uVar20);
  recovered_1000e2e0(&local_120,(int)&local_120,(uint128 *)&local_2a0);
  recovered_1000e2e0(&local_1a0,(int)(param_1 + 0x60),(uint128 *)(param_2 + 0x60));
  recovered_1000e2e0(&local_1a0,(int)&local_1a0,(uint128 *)&DAT_1001fb08);
  recovered_1000e2e0(&local_220,(int)(param_1 + 0x40),(uint128 *)(param_2 + 0x40));
  local_320 = local_120 - local_a0;
  local_31c = local_11c - (local_9c + (uint)(local_120 < local_a0));
  local_318 = local_118 - local_98;
  local_314 = local_114 - (local_94 + (uint)(local_118 < local_98));
  local_310 = local_110 - local_90;
  local_30c = local_10c - (local_8c + (uint)(local_110 < local_90));
  local_308 = local_108 - local_88;
  local_304 = local_104 - (local_84 + (uint)(local_108 < local_88));
  local_300 = local_100 - local_80;
  local_2fc = local_fc - (local_7c + (uint)(local_100 < local_80));
  local_2f8 = local_f8 - local_78;
  local_2f4 = local_f4 - (local_74 + (uint)(local_f8 < local_78));
  local_2f0 = local_f0 - local_70;
  local_2ec = local_ec - (local_6c + (uint)(local_f0 < local_70));
  local_2e8 = local_e8 - local_68;
  local_2e4 = local_e4 - (local_64 + (uint)(local_e8 < local_68));
  local_2e0 = local_e0 - local_60;
  local_2dc = local_dc - (local_5c + (uint)(local_e0 < local_60));
  local_2d8 = local_d8 - local_58;
  local_2d4 = local_d4 - (local_54 + (uint)(local_d8 < local_58));
  local_2d0 = local_d0 - local_50;
  local_2cc = local_cc - (local_4c + (uint)(local_d0 < local_50));
  local_2c8 = local_c8 - local_48;
  local_2c4 = local_c4 - (local_44 + (uint)(local_c8 < local_48));
  local_2c0 = local_c0 - local_40;
  local_2bc = local_bc - (local_3c + (uint)(local_c0 < local_40));
  local_2b8 = local_b8 - local_38;
  local_2b4 = local_b4 - (local_34 + (uint)(local_b8 < local_38));
  local_2b0 = local_b0 - local_30;
  local_2ac = local_ac - (local_2c + (uint)(local_b0 < local_30));
  local_2a8 = local_a8 - local_28;
  uVar1 = local_21c << 1 | local_220 >> 0x1f;
  local_2a4 = local_a4 - (local_24 + (uint)(local_a8 < local_28));
  local_3a0 = local_220 * 2 - local_1a0;
  local_39c = uVar1 - (local_19c + (uint)(local_220 * 2 < local_1a0));
  uVar4 = local_214 << 1 | local_218 >> 0x1f;
  local_398 = local_218 * 2 - local_198;
  local_394 = uVar4 - (local_194 + (uint)(local_218 * 2 < local_198));
  uVar2 = local_20c << 1 | local_210 >> 0x1f;
  local_390 = local_210 * 2 - local_190;
  local_38c = uVar2 - (local_18c + (uint)(local_210 * 2 < local_190));
  uVar3 = local_204 << 1 | local_208 >> 0x1f;
  local_388 = local_208 * 2 - local_188;
  local_384 = uVar3 - (local_184 + (uint)(local_208 * 2 < local_188));
  uVar5 = local_1fc << 1 | local_200 >> 0x1f;
  local_380 = local_200 * 2 - local_180;
  local_37c = uVar5 - (local_17c + (uint)(local_200 * 2 < local_180));
  uVar6 = local_1f4 << 1 | local_1f8 >> 0x1f;
  local_378 = local_1f8 * 2 - local_178;
  local_374 = uVar6 - (local_174 + (uint)(local_1f8 * 2 < local_178));
  uVar7 = local_1ec << 1 | local_1f0 >> 0x1f;
  local_370 = local_1f0 * 2 - local_170;
  local_36c = uVar7 - (local_16c + (uint)(local_1f0 * 2 < local_170));
  uVar8 = local_1e4 << 1 | local_1e8 >> 0x1f;
  local_368 = local_1e8 * 2 - local_168;
  local_364 = uVar8 - (local_164 + (uint)(local_1e8 * 2 < local_168));
  uVar9 = local_1dc << 1 | local_1e0 >> 0x1f;
  local_360 = local_1e0 * 2 - local_160;
  local_35c = uVar9 - (local_15c + (uint)(local_1e0 * 2 < local_160));
  uVar10 = local_1d4 << 1 | local_1d8 >> 0x1f;
  local_358 = local_1d8 * 2 - local_158;
  local_354 = uVar10 - (local_154 + (uint)(local_1d8 * 2 < local_158));
  uVar11 = local_1cc << 1 | local_1d0 >> 0x1f;
  local_350 = local_1d0 * 2 - local_150;
  local_34c = uVar11 - (local_14c + (uint)(local_1d0 * 2 < local_150));
  uVar12 = local_1c4 << 1 | local_1c8 >> 0x1f;
  local_348 = local_1c8 * 2 - local_148;
  local_344 = uVar12 - (local_144 + (uint)(local_1c8 * 2 < local_148));
  uVar13 = local_1bc << 1 | local_1c0 >> 0x1f;
  local_340 = local_1c0 * 2 - local_140;
  local_33c = uVar13 - (local_13c + (uint)(local_1c0 * 2 < local_140));
  uVar16 = local_1b4 << 1 | local_1b8 >> 0x1f;
  local_338 = local_1b8 * 2 - local_138;
  local_334 = uVar16 - (local_134 + (uint)(local_1b8 * 2 < local_138));
  uVar14 = local_1ac << 1 | local_1b0 >> 0x1f;
  local_330 = local_1b0 * 2 - local_130;
  local_32c = uVar14 - (local_12c + (uint)(local_1b0 * 2 < local_130));
  uVar15 = local_1a4 << 1 | local_1a8 >> 0x1f;
  local_328 = local_1a8 * 2 - local_128;
  local_324 = uVar15 - (local_124 + (uint)(local_1a8 * 2 < local_128));
  local_3a8 = local_128 + local_1a8 * 2;
  local_3a4 = local_124 + uVar15 + (uint)CARRY4(local_128,local_1a8 * 2);
  local_3b0 = local_130 + local_1b0 * 2;
  local_3ac = local_12c + uVar14 + (uint)CARRY4(local_130,local_1b0 * 2);
  local_3b8 = local_138 + local_1b8 * 2;
  local_3b4 = local_134 + uVar16 + (uint)CARRY4(local_138,local_1b8 * 2);
  local_3c0 = local_140 + local_1c0 * 2;
  local_3bc = local_13c + uVar13 + (uint)CARRY4(local_140,local_1c0 * 2);
  local_3c8 = local_148 + local_1c8 * 2;
  local_3c4 = local_144 + uVar12 + (uint)CARRY4(local_148,local_1c8 * 2);
  local_3d0 = local_150 + local_1d0 * 2;
  local_3cc = local_14c + uVar11 + (uint)CARRY4(local_150,local_1d0 * 2);
  local_3d8 = local_158 + local_1d8 * 2;
  local_3d4 = local_154 + uVar10 + (uint)CARRY4(local_158,local_1d8 * 2);
  local_3e0 = local_160 + local_1e0 * 2;
  local_3dc = local_15c + uVar9 + (uint)CARRY4(local_160,local_1e0 * 2);
  local_3e8 = local_168 + local_1e8 * 2;
  local_3e4 = local_164 + uVar8 + (uint)CARRY4(local_168,local_1e8 * 2);
  local_3f0 = local_170 + local_1f0 * 2;
  local_3ec = local_16c + uVar7 + (uint)CARRY4(local_170,local_1f0 * 2);
  local_3f8 = local_178 + local_1f8 * 2;
  local_3f4 = local_174 + uVar6 + (uint)CARRY4(local_178,local_1f8 * 2);
  local_400 = local_180 + local_200 * 2;
  local_3fc = local_17c + uVar5 + (uint)CARRY4(local_180,local_200 * 2);
  local_408 = local_188 + local_208 * 2;
  local_404 = local_184 + uVar3 + (uint)CARRY4(local_188,local_208 * 2);
  local_410 = local_190 + local_210 * 2;
  local_40c = local_18c + uVar2 + (uint)CARRY4(local_190,local_210 * 2);
  local_418 = local_198 + local_218 * 2;
  local_414 = local_194 + uVar4 + (uint)CARRY4(local_198,local_218 * 2);
  local_420 = local_1a0 + local_220 * 2;
  local_41c = local_19c + uVar1 + (uint)CARRY4(local_1a0,local_220 * 2);
  local_428 = local_28 + local_a8;
  local_424 = local_24 + local_a4 + (uint)CARRY4(local_28,local_a8);
  local_430 = local_30 + local_b0;
  local_42c = local_2c + local_ac + (uint)CARRY4(local_30,local_b0);
  local_438 = local_38 + local_b8;
  local_434 = local_34 + local_b4 + (uint)CARRY4(local_38,local_b8);
  local_440 = local_40 + local_c0;
  local_43c = local_3c + local_bc + (uint)CARRY4(local_40,local_c0);
  local_448 = local_48 + local_c8;
  local_444 = local_44 + local_c4 + (uint)CARRY4(local_48,local_c8);
  local_450 = local_50 + local_d0;
  local_44c = local_4c + local_cc + (uint)CARRY4(local_50,local_d0);
  local_458 = local_58 + local_d8;
  local_454 = local_54 + local_d4 + (uint)CARRY4(local_58,local_d8);
  local_460 = local_60 + local_e0;
  local_45c = local_5c + local_dc + (uint)CARRY4(local_60,local_e0);
  local_468 = local_68 + local_e8;
  local_464 = local_64 + local_e4 + (uint)CARRY4(local_68,local_e8);
  local_470 = local_70 + local_f0;
  local_46c = local_6c + local_ec + (uint)CARRY4(local_70,local_f0);
  local_478 = local_78 + local_f8;
  local_474 = local_74 + local_f4 + (uint)CARRY4(local_78,local_f8);
  local_480 = local_80 + local_100;
  local_47c = local_7c + local_fc + (uint)CARRY4(local_80,local_100);
  local_488 = local_88 + local_108;
  local_484 = local_84 + local_104 + (uint)CARRY4(local_88,local_108);
  local_490 = local_90 + local_110;
  local_48c = local_8c + local_10c + (uint)CARRY4(local_90,local_110);
  local_498 = local_98 + local_118;
  local_494 = local_94 + local_114 + (uint)CARRY4(local_98,local_118);
  local_4a0 = local_a0 + local_120;
  local_49c = local_9c + local_11c + (uint)CARRY4(local_a0,local_120);
  recovered_1000e2e0(param_1,(int)&local_320,(uint128 *)&local_3a0);
  recovered_1000e2e0(param_1 + 0x20,(int)&local_4a0,(uint128 *)&local_420);
  recovered_1000e2e0(param_1 + 0x40,(int)&local_420,(uint128 *)&local_3a0);
  recovered_1000e2e0(param_1 + 0x60,(int)&local_320,(uint128 *)&local_4a0);
  return;
}

#undef DAT_1001fb08
#undef local_238
#undef local_234
#undef local_230
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_218
#undef local_214
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_180
#undef local_17c
#undef local_178
#undef local_174
#undef local_170
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_15c
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
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
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_42c
#undef local_428
#undef local_424
#undef local_420
#undef local_41c
#undef local_418
#undef local_414
#undef local_410
#undef local_40c
#undef local_408
#undef local_404
#undef local_400
#undef local_3fc
#undef local_3f8
#undef local_3f4
#undef local_3f0
#undef local_3ec
#undef local_3e8
#undef local_3e4
#undef local_3e0
#undef local_3dc
#undef local_3d8
#undef local_3d4
#undef local_3d0
#undef local_3cc
#undef local_3c8
#undef local_3c4
#undef local_3c0
#undef local_3bc
#undef local_3b8
#undef local_3b4
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_398
#undef local_394
#undef local_390
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_374
#undef local_370
#undef local_36c
#undef local_368
#undef local_364
#undef local_360
#undef local_35c
#undef local_358
#undef local_354
#undef local_350
#undef local_34c
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_338
#undef local_334
#undef local_330
#undef local_32c
#undef local_328
#undef local_324
#undef local_320
#undef local_31c
#undef local_318
#undef local_314
#undef local_310
#undef local_30c
#undef local_308
#undef local_304
#undef local_300
#undef local_2fc
#undef local_2f8
#undef local_2f4
#undef local_2f0
#undef local_2ec
#undef local_2e8
#undef local_2e4
#undef local_2e0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_2cc
#undef local_2c8
#undef local_2c4
#undef local_2c0
#undef local_2bc
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef local_2ac
#undef local_2a8
#undef local_2a4
#undef local_2a0
#undef local_29c
#undef local_298
#undef local_294
#undef local_290
#undef local_28c
#undef local_288
#undef local_284
#undef local_280
#undef local_27c
#undef local_278
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_23c

#define local_40 (*(undefined8 *)(pf_stack_frame + 112))
#define local_30 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_98 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 72))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 88))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 16))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 104))
#define local_80 (*(undefined8 *)(pf_stack_frame + 48))
#define local_70 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 120))
#define local_60 (*(undefined8 *)(pf_stack_frame + 80))
#define local_50 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100105dc
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_100105dc(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  local_a0 = *param_2;
  uStack_98 = param_2[1];
  local_90 = param_2[2];
  uStack_88 = param_2[3];
  local_80 = param_2[4];
  uStack_78 = param_2[5];
  local_70 = param_2[6];
  uStack_68 = param_2[7];
  local_60 = param_2[8];
  uStack_58 = param_2[9];
  local_50 = param_2[10];
  uStack_48 = param_2[0xb];
  local_40 = param_2[0xc];
  uStack_38 = param_2[0xd];
  local_30 = param_2[0xe];
  uStack_28 = param_2[0xf];
  iVar1 = 0xfd;
  do {
    recovered_1000e2e0((uint *)&local_a0,(int)&local_a0,(uint128 *)&local_a0);
    if (iVar1 != 2 && iVar1 != 4) {
      recovered_1000e2e0((uint *)&local_a0,(int)&local_a0,(uint128 *)param_2);
    }
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  param_1[2] = local_90;
  param_1[3] = uStack_88;
  param_1[4] = local_80;
  param_1[5] = uStack_78;
  param_1[6] = local_70;
  param_1[7] = uStack_68;
  param_1[8] = local_60;
  param_1[9] = uStack_58;
  param_1[10] = local_50;
  param_1[0xb] = uStack_48;
  param_1[0xc] = local_40;
  param_1[0xd] = uStack_38;
  *param_1 = local_a0;
  param_1[1] = uStack_98;
  param_1[0xe] = local_30;
  param_1[0xf] = uStack_28;
  return;
}

#undef local_40
#undef local_30
#undef uStack_98
#undef uStack_88
#undef uStack_78
#undef uStack_68
#undef uStack_58
#undef local_a0
#undef local_90
#undef uStack_48
#undef local_80
#undef local_70
#undef uStack_38
#undef local_60
#undef local_50
#undef uStack_28

/* Recovered field packing, including native carries and conditional reduction.
 * Pooka's Free Software License. */
void recovered_10010704(uint8_t *output,const int64_t *input) {
    int64_t value[16], reduced[16];
    for(unsigned i=0;i<16;i++)value[i]=input[i];
    for(unsigned round=0;round<3;round++) {
        for(unsigned i=0;i<16;i++) {
            value[i]+=0x10000;
            int64_t carry=value[i]>>16;
            value[i]-=carry*0x10000;
            if(i<15)value[i+1]+=carry-1;
            else value[0]+=38*(carry-1);
        }
    }
    for(unsigned round=0;round<2;round++) {
        reduced[0]=value[0]-0xffed;
        for(unsigned i=1;i<15;i++) {
            reduced[i]=value[i]-0xffff-((reduced[i-1]>>16)&1);
            reduced[i-1]&=0xffff;
        }
        reduced[15]=value[15]-0x7fff-((reduced[14]>>16)&1);
        int64_t select=-((~(reduced[15]>>16))&1);
        reduced[14]&=0xffff;
        for(unsigned i=0;i<16;i++)value[i]^=(value[i]^reduced[i])&select;
    }
    for(unsigned i=0;i<16;i++) {
        output[2*i]=(uint8_t)value[i];
        output[2*i+1]=(uint8_t)(value[i]>>8);
    }
}


#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_10 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010e70
 */

void recovered_10010e70(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
             param_2 >> 0x18;
  if (((char)param_1[3] == '\0') && (3 < (uint)(param_1[1] - param_1[2]))) {
    recovered_100038f0((undefined8 *)(*param_1 + param_1[2]),(undefined8 *)&local_10,
                       (undefined8 *)&UndefinedInstruction);
    param_1[2] = param_1[2] + 4;
    return;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

#undef EXT_00000004
#undef local_10

#undef DAT_1001fb88
#define DAT_1001fb88 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xfb0U)))
#define local_124 (*(uint (*)[73])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010ee4
 */

void recovered_10010ee4(uint *param_1,int param_2)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5; uint pf_schedule_word;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;

  iVar5 = 0;
  do {
    uVar7 = *(uint *)(param_2 + iVar5);
    *(uint *)((int)local_124 + iVar5) =
         uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x40);
  pf_schedule_word = local_124[0]; iVar5 = 0;
  do {
    bVar17 = iVar5 != -0x2f;
    uVar8 = local_124[0xe - iVar5];
    uVar7 = local_124[1 - iVar5];
    local_124[0x10 - iVar5] =
         ((uVar7 >> 7 | uVar7 << 0x19) ^ (uVar7 >> 0x12 | uVar7 << 0xe) ^ uVar7 >> 3) + pf_schedule_word
         + local_124[9 - iVar5] +
         ((uVar8 >> 0x11 | uVar8 << 0xf) ^ (uVar8 >> 0x13 | uVar8 << 0xd) ^ uVar8 >> 10);
    iVar5 = iVar5 + -1;
    pf_schedule_word = uVar7;
  } while (bVar17);
  iVar5 = 0;
  uVar7 = param_1[1];
  uVar8 = param_1[4];
  uVar10 = param_1[7];
  uVar3 = param_1[6];
  uVar4 = param_1[2];
  uVar9 = param_1[5];
  uVar15 = *param_1;
  uVar16 = param_1[3];
  do {
    uVar14 = uVar15;
    uVar13 = uVar9;
    uVar12 = uVar4;
    uVar11 = uVar3;
    uVar9 = uVar8;
    uVar4 = uVar7;
    puVar1 = local_124 + iVar5;
    piVar2 = &DAT_1001fb88 + iVar5;
    iVar5 = iVar5 + 1;
    iVar6 = (uVar9 & uVar13 | uVar11 & ~uVar9) + uVar10 +
            ((uVar9 >> 6 | uVar9 << 0x1a) ^ (uVar9 >> 0xb | uVar9 << 0x15) ^
            (uVar9 >> 0x19 | uVar9 << 7)) + *piVar2 + *puVar1;
    uVar8 = iVar6 + uVar16;
    uVar15 = ((uVar14 >> 2 | uVar14 << 0x1e) ^ (uVar14 >> 0xd | uVar14 << 0x13) ^
             (uVar14 >> 0x16 | uVar14 << 10)) + (uVar14 & (uVar4 ^ uVar12) ^ uVar4 & uVar12) + iVar6
    ;
    uVar7 = uVar14;
    uVar10 = uVar11;
    uVar3 = uVar13;
    uVar16 = uVar12;
  } while (iVar5 != 0x40);
  param_1[7] = uVar11 + param_1[7];
  param_1[6] = uVar13 + param_1[6];
  param_1[5] = uVar9 + param_1[5];
  param_1[4] = uVar8 + param_1[4];
  param_1[3] = uVar12 + param_1[3];
  param_1[2] = uVar4 + param_1[2];
  param_1[1] = uVar14 + param_1[1];
  *param_1 = uVar15 + *param_1;
  return;
}

#undef DAT_1001fb88
#undef local_124

#undef DAT_10023ed8
#define DAT_10023ed8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5300U)))
#undef DAT_10023edc
#define DAT_10023edc (*(uint *)(((uintptr_t)pf_module_state + 0x5304U)))
#undef DAT_10023ee8
#define DAT_10023ee8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5310U)))
#undef DAT_10023eec
#define DAT_10023eec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5314U)))
#undef DAT_10023ef0
#define DAT_10023ef0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5318U)))
#define local_10 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100110b8
 */

void recovered_100110b8(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_1000cff0((int)&local_10,4);
  DAT_10023ef0 = 0;
  DAT_10023eec = 2000;
  DAT_10023ed8 = 1;
  DAT_10023edc = local_10 << 0x18 | (local_10 >> 8 & 0xff) << 0x10 | (local_10 >> 0x10 & 0xff) << 8
                 | local_10 >> 0x18;
  DAT_10023ee8 = param_1;
  recovered_10011250(1,0);
  return;
}

#undef DAT_10023ed8
#undef DAT_10023edc
#undef DAT_10023ee8
#undef DAT_10023eec
#undef DAT_10023ef0
#undef local_10

#undef DAT_1001fc88
#define DAT_1001fc88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10b0U)))
#undef DAT_1001fc8e
#define DAT_1001fc8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10b6U)))
#undef DAT_10023e63
#define DAT_10023e63 (*(char *)(((uintptr_t)pf_module_state + 0x528bU)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023e68
#define DAT_10023e68 (*(uint *)(((uintptr_t)pf_module_state + 0x5290U)))
#undef DAT_10023e6c
#define DAT_10023e6c (*(uint *)(((uintptr_t)pf_module_state + 0x5294U)))
#undef str_1001f127
#define str_1001f127 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54fU)))
#undef str_1001f750
#define str_1001f750 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb78U)))
#define acStack_44 (*(char (*)[68])(pf_stack_frame + 44))
#define acStack_30 (*(char (*)[48])(pf_stack_frame + 64))
#define acStack_58 (*(char (*)[88])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001111c
 */

void recovered_1001111c(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};


  DAT_10023e63 = param_1 != 0;
  DAT_10023e64 = param_1;
  DAT_10023e68 = param_2;
  DAT_10023e6c = param_3;
  recovered_10007098(acStack_30,0x14,str_1001f750,param_1 >> 0x18,(param_1 & 0xffffff) >> 0x10,
                     (param_1 & 0xffff) >> 8,param_1 & 0xff);
  recovered_10007098(acStack_44,0x14,str_1001f750,param_2 >> 0x18,(param_2 & 0xffffff) >> 0x10,
                     (param_2 & 0xffff) >> 8,param_2 & 0xff);
  recovered_10007098(acStack_58,0x14,str_1001f750,param_3 >> 0x18,(param_3 & 0xffffff) >> 0x10,
                     (param_3 & 0xffff) >> 8,param_3 & 0xff);
  recovered_1000b728(str_1001f127,acStack_30,acStack_44,acStack_58);
  if (DAT_10023e63 == '\x01') {
    recovered_10011850(1,&DAT_1001fc88,DAT_10023e64,&DAT_1001fc8e);
  }
  return;
}

#undef DAT_1001fc88
#undef DAT_1001fc8e
#undef DAT_10023e63
#undef DAT_10023e64
#undef DAT_10023e68
#undef DAT_10023e6c
#undef str_1001f127
#undef str_1001f750
#undef acStack_44
#undef acStack_30
#undef acStack_58

#undef DAT_1001fc88
#define DAT_1001fc88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10b0U)))
#undef DAT_10023910
#define DAT_10023910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d38U)))
#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023edc
#define DAT_10023edc (*(uint *)(((uintptr_t)pf_module_state + 0x5304U)))
#undef DAT_10023ee0
#define DAT_10023ee0 (*(uint *)(((uintptr_t)pf_module_state + 0x5308U)))
#undef DAT_10023ee4
#define DAT_10023ee4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x530cU)))
#undef DAT_10023f04
#define DAT_10023f04 (*(int *)(((uintptr_t)pf_module_state + 0x532cU)))
#undef DAT_10024708
#define DAT_10024708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1002470e
#define DAT_1002470e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b36U)))
#undef DAT_10024714
#define DAT_10024714 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5b3cU)))
#undef DAT_1002472a
#define DAT_1002472a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b52U)))
#undef DAT_1002472e
#define DAT_1002472e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b56U)))
#undef DAT_1002472f
#define DAT_1002472f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b57U)))
#undef DAT_10024730
#define DAT_10024730 (*(ushort *)(((uintptr_t)pf_module_state + 0x5b58U)))
#undef DAT_10024732
#define DAT_10024732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5aU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001092c
#define DAT_4001092c (*(uint8_t *)(0x4001092cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001092c
#define _DAT_4001092c (*(code * *)(0x4001092cU))
#define local_1a6 (*(undefined1 *)(pf_stack_frame + 42))
#define local_1a5 (*(undefined1 (*)[421])(pf_stack_frame + 43))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 264))
#define local_c4 (*(undefined2 *)(pf_stack_frame + 268))
#define local_c2 (*(undefined1 *)(pf_stack_frame + 270))
#define local_c1 (*(undefined2 *)(pf_stack_frame + 271))
#define local_bf (*(undefined1 *)(pf_stack_frame + 273))
#define local_b8 (*(undefined2 *)(pf_stack_frame + 280))
#define local_b6 (*(undefined1 *)(pf_stack_frame + 282))
#define local_b5 (*(undefined1 *)(pf_stack_frame + 283))
#define local_b4 (*(undefined1 *)(pf_stack_frame + 284))
#define local_b3 (*(undefined1 *)(pf_stack_frame + 285))
#define local_b0 (*(uint *)(pf_stack_frame + 288))
#define uStack_1a9 (*(undefined1 *)(pf_stack_frame + 39))
#define auStack_198 (*(undefined8 (*)[51])(pf_stack_frame + 56))
#define auStack_be (*(undefined1 (*)[190])(pf_stack_frame + 274))
#define uStack_b2 (*(undefined2 *)(pf_stack_frame + 286))
#define local_1b4 (*(byte (*)[436])(pf_stack_frame + 28))
#define local_1b0 (*(uint *)(pf_stack_frame + 32))
#define local_1aa (*(undefined1 *)(pf_stack_frame + 38))
#define local_1a8 (*(undefined1 *)(pf_stack_frame + 40))
#define local_1a7 (*(undefined1 *)(pf_stack_frame + 41))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10011250(int param_1,int param_2)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int extraout_r0 = 0;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;

  uVar5 = 0;
  recovered_10004080(local_1b4,0,400);
  local_1b4[2] = 6;
  local_1b4[0] = 1;
  local_1b4[1] = 1;
  local_1b0 = DAT_10023edc << 0x18 | (DAT_10023edc >> 8 & 0xff) << 0x10 |
              (DAT_10023edc >> 0x10 & 0xff) << 8 | DAT_10023edc >> 0x18;
  if (param_2 == 0) {
    local_1aa = 0x80;
    puVar1 = &uStack_1a9;
  }
  else {
    local_1a6 = (undefined1)(DAT_10023e64 >> 8);
    local_1a7 = (undefined1)(DAT_10023e64 >> 0x10);
    local_1a8 = (undefined1)(DAT_10023e64 >> 0x18);
    puVar1 = local_1a5;
    uVar5 = DAT_10023e64;
  }
  *puVar1 = (char)uVar5;
  recovered_100038f0(auStack_198,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
  local_bf = 1;
  local_c1 = 0x73d;
  local_c4 = 0x135;
  local_c8 = 0x63538263;
  local_c2 = (undefined1)param_1;
  recovered_100038f0((undefined8 *)auStack_be,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
  iVar6 = extraout_r0;
  if (param_1 == 3) {
    iVar6 = param_2;
  }
  iVar8 = 0xc;
  if (param_1 == 3 && iVar6 == 0) {
    uStack_b2 = 0x436;
    iVar8 = 0x18;
    local_b0 = DAT_10023ee0 << 0x18 | (DAT_10023ee0 >> 8 & 0xff) << 0x10 |
               (DAT_10023ee0 >> 0x10 & 0xff) << 8 | DAT_10023ee0 >> 0x18;
    local_b8 = 0x432;
    local_b3 = (undefined1)DAT_10023ee4;
    local_b4 = (undefined1)((uint)DAT_10023ee4 >> 8);
    local_b5 = (undefined1)((uint)DAT_10023ee4 >> 0x10);
    local_b6 = (undefined1)((uint)DAT_10023ee4 >> 0x18);
  }
  *(undefined2 *)((int)auStack_198 + iVar8 + 0xd4) = 0x437;
  uVar5 = iVar8 + 6;
  *(undefined4 *)(auStack_be + iVar8 + -4) = 0x36330301;
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x4d38U));
  if ((int)puVar2 - 1U < 0x3f) {
    auStack_be[iVar8 + 1] = (char)puVar2;
    auStack_be[iVar8] = 0xc;
    recovered_100038f0((undefined8 *)(auStack_be + iVar8 + 2),(undefined8 *)&DAT_10023910,puVar2);
    uVar5 = (int)puVar2 + iVar8 + 8;
  }
  uVar3 = DAT_10023e64;
  *(undefined1 *)((int)auStack_198 + uVar5 + 0xd4) = 0xff;
  recovered_100038f0((undefined8 *)&DAT_10024708,(undefined8 *)&DAT_1001fc88,(undefined8 *)0x6);
  recovered_100038f0((undefined8 *)&DAT_1002470e,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
  DAT_10024714 = 8;
  uVar7 = uVar5 + 0xf1;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  if (uVar5 < 0x3b) {
    uVar7 = 300;
  }
  recovered_10011618(uVar7 + 0x1c & 0xffff,0x11,uVar3,0xffffffff);
  uVar4 = uVar7 + 8;
  iVar6 = 0;
  DAT_10024730 = 0;
  DAT_1002472e = (undefined1)(uVar4 >> 8);
  DAT_1002472a = 0x43004400;
  DAT_1002472f = (undefined1)uVar4;
  recovered_100038f0((undefined8 *)&DAT_10024732,(undefined8 *)local_1b4,
                     (undefined8 *)(uVar7 & 0xffff));
  uVar5 = (uVar3 >> 0x10) + (uVar3 & 0xffff) + (uVar4 & 0xffff) + 0x2000f;
  do {
    uVar5 = uVar5 + (((uint)*(ushort *)((int)&DAT_1002472a + iVar6) << 0x18 |
                     (uint)(*(ushort *)((int)&DAT_1002472a + iVar6) >> 8) << 0x10) >> 0x10);
    uVar3 = iVar6 + 3;
    iVar6 = iVar6 + 2;
  } while (uVar3 < (uVar4 & 0xffff));
  if ((uVar4 & 0x7ffe) != (uVar4 & 0xffff)) {
    uVar5 = uVar5 + (uint)*(byte *)((int)&DAT_1002472a + (uVar4 & 0x7ffe)) * 0x100;
  }
  if (0xffff < uVar5) {
    do {
      uVar5 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
    } while (uVar5 >> 0x10 != 0);
  }
  uVar3 = ~uVar5;
  if (uVar5 == 0xffff) {
    uVar3 = 0xffffffff;
  }
  DAT_10024730 = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x12f < _DAT_40010808)) &&
     ((_DAT_4001092c != (code *)0x0 &&
      (iVar6 = (*_DAT_4001092c)(&DAT_10024708,(int)(uVar7 & 0xffff) + 0x2a), iVar6 != 0)))) {
    DAT_10023f04 = DAT_10023f04 + 1;
  }
  return;
}

#undef DAT_1001fc88
#undef DAT_10023910
#undef DAT_10023e5c
#undef DAT_10023e64
#undef DAT_10023edc
#undef DAT_10023ee0
#undef DAT_10023ee4
#undef DAT_10023f04
#undef DAT_10024708
#undef DAT_1002470e
#undef DAT_10024714
#undef DAT_1002472a
#undef DAT_1002472e
#undef DAT_1002472f
#undef DAT_10024730
#undef DAT_10024732
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001092c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001092c
#undef local_1a6
#undef local_1a5
#undef local_c8
#undef local_c4
#undef local_c2
#undef local_c1
#undef local_bf
#undef local_b8
#undef local_b6
#undef local_b5
#undef local_b4
#undef local_b3
#undef local_b0
#undef uStack_1a9
#undef auStack_198
#undef auStack_be
#undef uStack_b2
#undef local_1b4
#undef local_1b0
#undef local_1aa
#undef local_1a8
#undef local_1a7

#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10024708
#define DAT_10024708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1002470e
#define DAT_1002470e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b36U)))
#undef DAT_10024714
#define DAT_10024714 (*(ushort *)(((uintptr_t)pf_module_state + 0x5b3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100115c8
 */

void recovered_100115c8(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038f0((undefined8 *)&DAT_10024708,param_1,(undefined8 *)0x6);
  recovered_100038f0((undefined8 *)&DAT_1002470e,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
  DAT_10024714 = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  return;
}

#undef DAT_10023e5c
#undef DAT_10024708
#undef DAT_1002470e
#undef DAT_10024714

#undef DAT_10023e70
#define DAT_10023e70 (*(ushort *)(((uintptr_t)pf_module_state + 0x5298U)))
#undef DAT_10024716
#define DAT_10024716 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b3eU)))
#undef DAT_10024717
#define DAT_10024717 (*(byte *)(((uintptr_t)pf_module_state + 0x5b3fU)))
#undef DAT_10024718
#define DAT_10024718 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b40U)))
#undef DAT_10024719
#define DAT_10024719 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b41U)))
#undef DAT_1002471a
#define DAT_1002471a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b42U)))
#undef DAT_1002471b
#define DAT_1002471b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b43U)))
#undef DAT_1002471c
#define DAT_1002471c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5b44U)))
#undef DAT_1002471e
#define DAT_1002471e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b46U)))
#undef DAT_1002471f
#define DAT_1002471f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b47U)))
#undef DAT_10024720
#define DAT_10024720 (*(ushort *)(((uintptr_t)pf_module_state + 0x5b48U)))
#undef DAT_10024722
#define DAT_10024722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4aU)))
#undef DAT_10024723
#define DAT_10024723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4bU)))
#undef DAT_10024724
#define DAT_10024724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4cU)))
#undef DAT_10024725
#define DAT_10024725 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4dU)))
#undef DAT_10024726
#define DAT_10024726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4eU)))
#undef DAT_10024727
#define DAT_10024727 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4fU)))
#undef DAT_10024728
#define DAT_10024728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b50U)))
#undef DAT_10024729
#define DAT_10024729 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011618
 */

void recovered_10011618(int param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_10004080(&DAT_10024716,0,0x14);
  DAT_1002471c = 0x40;
  DAT_10024718 = (char)((uint)param_1 >> 8);
  DAT_10024716 = 0x45;
  DAT_10024728 = (char)(param_4 >> 8);
  DAT_10024727 = (char)(param_4 >> 0x10);
  DAT_10024724 = (char)(param_3 >> 8);
  DAT_10024723 = (char)(param_3 >> 0x10);
  DAT_1002471e = 0x40;
  uVar1 = DAT_10023e70 + 1;
  DAT_10024719 = (char)param_1;
  DAT_1002471a = (char)(uVar1 >> 8);
  DAT_10024729 = (char)param_4;
  DAT_10024726 = (char)(param_4 >> 0x18);
  DAT_10024725 = (char)param_3;
  DAT_10024722 = (char)(param_3 >> 0x18);
  DAT_1002471f = (char)param_2;
  DAT_10023e70 = (short)uVar1;
  DAT_1002471b = (char)uVar1;
  uVar1 = param_1 + (uint)DAT_10024717 + (uVar1 & 0xffff) + param_2 +
          (((uint)DAT_10024720 << 0x18 | (uint)(DAT_10024720 >> 8) << 0x10) >> 0x10) +
          ((param_3 & 0xffffff) >> 0x10 | (param_3 >> 0x18) << 8) + (param_3 & 0xffff) +
          ((param_4 & 0xffffff) >> 0x10 | (param_4 >> 0x18) << 8) + (param_4 & 0xffff) + 0xc500;
  if (0xffff < uVar1) {
    do {
      uVar1 = (uVar1 >> 0x10) + (uVar1 & 0xffff);
    } while (uVar1 >> 0x10 != 0);
  }
  DAT_10024720 = (ushort)((~uVar1 & 0xff) << 8) | (ushort)(~uVar1 >> 8) & 0xff;
  return;
}

#undef DAT_10023e70
#undef DAT_10024716
#undef DAT_10024717
#undef DAT_10024718
#undef DAT_10024719
#undef DAT_1002471a
#undef DAT_1002471b
#undef DAT_1002471c
#undef DAT_1002471e
#undef DAT_1002471f
#undef DAT_10024720
#undef DAT_10024722
#undef DAT_10024723
#undef DAT_10024724
#undef DAT_10024725
#undef DAT_10024726
#undef DAT_10024727
#undef DAT_10024728
#undef DAT_10024729

#undef DAT_10023f04
#define DAT_10023f04 (*(int *)(((uintptr_t)pf_module_state + 0x532cU)))
#undef DAT_10024708
#define DAT_10024708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001092c
#define DAT_4001092c (*(uint8_t *)(0x4001092cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001092c
#define _DAT_4001092c (*(code * *)(0x4001092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001173c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001173c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 < 0x3c) {
    recovered_10004080(&DAT_10024708 + param_1,0,0x3c - param_1);
    param_1 = 0x3c;
  }
  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x130)) || (_DAT_4001092c == (code *)0x0)) {
    return;
  }
  iVar1 = (*_DAT_4001092c)(&DAT_10024708,param_1);
  if (iVar1 != 0) {
    DAT_10023f04 = DAT_10023f04 + 1;
  }
  return;
}

#undef DAT_10023f04
#undef DAT_10024708
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001092c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001092c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100117f0
 */

uint recovered_100117f0(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = 0;
  uVar3 = 0;
  if (1 < param_2) {
    do {
      uVar1 = uVar1 + (((uint)*(ushort *)(param_1 + uVar3) << 0x18 |
                       (uint)(*(ushort *)(param_1 + uVar3) >> 8) << 0x10) >> 0x10);
      uVar2 = uVar3 + 3;
      uVar3 = uVar3 + 2;
    } while (uVar2 < param_2);
  }
  if (uVar3 < param_2) {
    uVar1 = uVar1 + (uint)*(byte *)(param_1 + uVar3) * 0x100;
  }
  if (0xffff < uVar1) {
    do {
      uVar1 = (uVar1 >> 0x10) + (uVar1 & 0xffff);
    } while (uVar1 >> 0x10 != 0);
  }
  return ~uVar1 & 0xffff;
}


#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023f04
#define DAT_10023f04 (*(int *)(((uintptr_t)pf_module_state + 0x532cU)))
#undef DAT_10024708
#define DAT_10024708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1002470e
#define DAT_1002470e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b36U)))
#undef DAT_10024714
#define DAT_10024714 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b3cU)))
#undef DAT_10024718
#define DAT_10024718 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b40U)))
#undef DAT_1002471c
#define DAT_1002471c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b44U)))
#undef DAT_1002471e
#define DAT_1002471e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b46U)))
#undef DAT_10024724
#define DAT_10024724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4cU)))
#undef DAT_10024728
#define DAT_10024728 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b50U)))
#undef DAT_1002472e
#define DAT_1002472e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b56U)))
#undef DAT_10024732
#define DAT_10024732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5aU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001092c
#define DAT_4001092c (*(uint8_t *)(0x4001092cU))
#undef _DAT_10024714
#define _DAT_10024714 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b3cU)))
#undef _DAT_10024718
#define _DAT_10024718 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b40U)))
#undef _DAT_10024724
#define _DAT_10024724 (*(uint *)(((uintptr_t)pf_module_state + 0x5b4cU)))
#undef _DAT_1002472e
#define _DAT_1002472e (*(uint *)(((uintptr_t)pf_module_state + 0x5b56U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001092c
#define _DAT_4001092c (*(code * *)(0x4001092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10011850(undefined4 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_100038f0((undefined8 *)&DAT_10024708,param_2,(undefined8 *)0x6);
  recovered_100038f0((undefined8 *)&DAT_1002470e,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
  PF_PART1(DAT_1002471c, 0) = (undefined1)((uint)param_1 >> 8);
  _DAT_10024718 = 0x4060008;
  PF_PART1(DAT_1002471c, 1) = (undefined1)param_1;
  _DAT_10024714 = 0x1000608;
  recovered_100038f0((undefined8 *)&DAT_1002471e,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
  _DAT_10024724 =
       DAT_10023e64 << 0x18 | (DAT_10023e64 >> 8 & 0xff) << 0x10 |
       (DAT_10023e64 >> 0x10 & 0xff) << 8 | DAT_10023e64 >> 0x18;
  recovered_100038f0((undefined8 *)&DAT_10024728,param_4,(undefined8 *)0x6);
  _DAT_1002472e =
       param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
       param_3 >> 0x18;
  recovered_10004080(&DAT_10024732,0,0x12);
  if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x130)) ||
     (_DAT_4001092c == (code *)0x0)) {
    return;
  }
  iVar1 = (*_DAT_4001092c)(&DAT_10024708,0x3c);
  if (iVar1 != 0) {
    DAT_10023f04 = DAT_10023f04 + 1;
  }
  return;
}

#undef DAT_10023e5c
#undef DAT_10023e64
#undef DAT_10023f04
#undef DAT_10024708
#undef DAT_1002470e
#undef DAT_10024714
#undef DAT_10024718
#undef DAT_1002471c
#undef DAT_1002471e
#undef DAT_10024724
#undef DAT_10024728
#undef DAT_1002472e
#undef DAT_10024732
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001092c
#undef _DAT_10024714
#undef _DAT_10024718
#undef _DAT_10024724
#undef _DAT_1002472e
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001092c

#undef DAT_10023e74
#define DAT_10023e74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x529cU)))
#undef DAT_10023e78
#define DAT_10023e78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52a0U)))
#undef DAT_10023e7e
#define DAT_10023e7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52a6U)))
#undef DAT_10023e80
#define DAT_10023e80 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52a8U)))
#undef DAT_10023e8a
#define DAT_10023e8a (*(char *)(((uintptr_t)pf_module_state + 0x52b2U)))
#undef DAT_10023e8c
#define DAT_10023e8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52b4U)))
#undef DAT_10023e96
#define DAT_10023e96 (*(char *)(((uintptr_t)pf_module_state + 0x52beU)))
#undef DAT_10023e98
#define DAT_10023e98 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52c0U)))
#undef DAT_10023ea2
#define DAT_10023ea2 (*(char *)(((uintptr_t)pf_module_state + 0x52caU)))
#undef DAT_10023ea4
#define DAT_10023ea4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52ccU)))
#undef DAT_10023eae
#define DAT_10023eae (*(char *)(((uintptr_t)pf_module_state + 0x52d6U)))
#undef DAT_10023eb0
#define DAT_10023eb0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52d8U)))
#undef DAT_10023eba
#define DAT_10023eba (*(char *)(((uintptr_t)pf_module_state + 0x52e2U)))
#undef DAT_10023ebc
#define DAT_10023ebc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52e4U)))
#undef DAT_10023ec6
#define DAT_10023ec6 (*(char *)(((uintptr_t)pf_module_state + 0x52eeU)))
#undef DAT_10023ec8
#define DAT_10023ec8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52f0U)))
#undef DAT_10023ed2
#define DAT_10023ed2 (*(char *)(((uintptr_t)pf_module_state + 0x52faU)))
#undef DAT_10023ed4
#define DAT_10023ed4 (*(uint *)(((uintptr_t)pf_module_state + 0x52fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011984
 */

void recovered_10011984(int param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_10023e74;
  if (((((DAT_10023e7e == '\x01' && DAT_10023e74 == param_1) ||
        (puVar2 = &DAT_10023e80, DAT_10023e8a == '\x01' && DAT_10023e80 == param_1)) ||
       (puVar2 = &DAT_10023e8c, DAT_10023e96 == '\x01' && DAT_10023e8c == param_1)) ||
      ((puVar2 = &DAT_10023e98, DAT_10023ea2 == '\x01' && DAT_10023e98 == param_1 ||
       (puVar2 = &DAT_10023ea4, DAT_10023eae == '\x01' && DAT_10023ea4 == param_1)))) ||
     ((puVar2 = &DAT_10023eb0, DAT_10023eba == '\x01' && DAT_10023eb0 == param_1 ||
      ((puVar2 = &DAT_10023ebc, DAT_10023ec6 == '\x01' && DAT_10023ebc == param_1 ||
       (puVar2 = &DAT_10023ec8, DAT_10023ed2 == '\x01' && DAT_10023ec8 == param_1)))))) {
    recovered_100038f0((undefined8 *)(puVar2 + 1),param_2,(undefined8 *)0x6);
    return;
  }
  iVar1 = DAT_10023ed4 * 0xc;
  (&DAT_10023e74)[DAT_10023ed4 * 3] = param_1;
  recovered_100038f0((undefined8 *)(&DAT_10023e78 + iVar1),param_2,(undefined8 *)0x6);
  iVar1 = DAT_10023ed4 * 0xc;
  DAT_10023ed4 = DAT_10023ed4 + 1 & 7;
  (&DAT_10023e7e)[iVar1] = 1;
  return;
}

#undef DAT_10023e74
#undef DAT_10023e78
#undef DAT_10023e7e
#undef DAT_10023e80
#undef DAT_10023e8a
#undef DAT_10023e8c
#undef DAT_10023e96
#undef DAT_10023e98
#undef DAT_10023ea2
#undef DAT_10023ea4
#undef DAT_10023eae
#undef DAT_10023eb0
#undef DAT_10023eba
#undef DAT_10023ebc
#undef DAT_10023ec6
#undef DAT_10023ec8
#undef DAT_10023ed2
#undef DAT_10023ed4

#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e63
#define DAT_10023e63 (*(char *)(((uintptr_t)pf_module_state + 0x528bU)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023e68
#define DAT_10023e68 (*(uint *)(((uintptr_t)pf_module_state + 0x5290U)))
#undef DAT_10023e6c
#define DAT_10023e6c (*(uint *)(((uintptr_t)pf_module_state + 0x5294U)))
#undef DAT_10023ed8
#define DAT_10023ed8 (*(int *)(((uintptr_t)pf_module_state + 0x5300U)))
#undef DAT_10023edc
#define DAT_10023edc (*(uint *)(((uintptr_t)pf_module_state + 0x5304U)))
#undef DAT_10023ee0
#define DAT_10023ee0 (*(uint *)(((uintptr_t)pf_module_state + 0x5308U)))
#undef DAT_10023ee4
#define DAT_10023ee4 (*(uint *)(((uintptr_t)pf_module_state + 0x530cU)))
#undef DAT_10023ee8
#define DAT_10023ee8 (*(int *)(((uintptr_t)pf_module_state + 0x5310U)))
#undef DAT_10023eec
#define DAT_10023eec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5314U)))
#undef DAT_10023ef0
#define DAT_10023ef0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5318U)))
#undef DAT_10023ef4
#define DAT_10023ef4 (*(uint *)(((uintptr_t)pf_module_state + 0x531cU)))
#undef DAT_10023ef8
#define DAT_10023ef8 (*(int *)(((uintptr_t)pf_module_state + 0x5320U)))
#undef DAT_10023efc
#define DAT_10023efc (*(int *)(((uintptr_t)pf_module_state + 0x5324U)))
#undef str_1001f14d
#define str_1001f14d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x575U)))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011aac
 */

void recovered_10011aac(char *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;

  if ((((DAT_10023ed8 != 0 && DAT_10023ed8 != 3) && (0xf3 < param_2)) && (*param_1 == '\x02')) &&
     (((uVar8 = *(uint *)(param_1 + 4),
       (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18)
       == DAT_10023edc &&
       (iVar2 = recovered_100046ac((uint *)(param_1 + 0x1c),(uint *)&DAT_10023e5c,6), iVar2 == 0))
      && (uVar8 = *(uint *)(param_1 + 0xec),
         (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18)
         == 0x63825363)))) {
    uVar8 = *(uint *)(param_1 + 0x10);
    uVar3 = param_2 - 0xf0;
    cVar9 = '\0';
    uVar4 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    uVar10 = 0;
    uVar11 = 0;
    local_2c = 0;
    local_24 = 0;
    uVar8 = 0;
    do {
      pbVar5 = (byte *)(param_1 + uVar8 + 0xf0);
      bVar1 = *pbVar5;
      if (bVar1 == 0) {
        uVar6 = uVar8 + 1;
      }
      else {
        if ((bVar1 == 0xff) || (uVar3 <= uVar8 + 1)) break;
        uVar7 = (uint)(byte)param_1[uVar8 + 0xf1];
        uVar6 = uVar8 + 2 + uVar7;
        if (uVar3 < uVar6) break;
        if (bVar1 < 0x33) {
          if (bVar1 == 1) {
            if (uVar7 == 4) {
              uVar8 = *(uint *)(pbVar5 + 2);
              uVar11 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                       uVar8 >> 0x18;
            }
          }
          else if ((bVar1 == 3) && (3 < uVar7)) {
            uVar8 = *(uint *)(pbVar5 + 2);
            uVar10 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                     uVar8 >> 0x18;
          }
        }
        else if (bVar1 == 0x33) {
          if (uVar7 == 4) {
            uVar8 = *(uint *)(pbVar5 + 2);
            local_2c = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                       uVar8 >> 0x18;
          }
        }
        else if (bVar1 == 0x35) {
          if (uVar7 == 1) {
            cVar9 = param_1[uVar8 + 0xf2];
          }
        }
        else if ((bVar1 == 0x36) && (uVar7 == 4)) {
          uVar8 = *(uint *)(pbVar5 + 2);
          local_24 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                     uVar8 >> 0x18;
        }
      }
      uVar8 = uVar6;
    } while (uVar6 < uVar3);
    recovered_1000c340((int)param_1,uVar3);
    if ((DAT_10023ed8 == 1 && cVar9 == '\x02') && (uVar4 != 0)) {
      DAT_10023ef0 = 0;
      DAT_10023eec = 2000;
      DAT_10023ee0 = local_24;
      DAT_10023ed8 = 2;
      DAT_10023ee4 = uVar4;
      DAT_10023ee8 = param_3;
      recovered_10011250(3,0);
      return;
    }
    if (((DAT_10023ed8 - 2U & 0xfffffffd) == 0 && cVar9 == '\x05') && (uVar4 != 0)) {
      DAT_10023ef4 = local_2c * 1000;
      if (local_2c - 0x400000 < 0xffc00000 || local_2c == 0) {
        DAT_10023ef4 = 0xf9fffc18;
      }
      DAT_10023ed8 = 3;
      DAT_10023efc = param_3 + (DAT_10023ef4 >> 1);
      if (local_24 != 0) {
        DAT_10023ee0 = local_24;
      }
      if (uVar11 == 0) {
        uVar11 = 0xffffff00;
      }
      DAT_10023ef8 = param_3;
      if (((DAT_10023e63 != '\x01') || (DAT_10023e64 != uVar4 || DAT_10023e68 != uVar11)) ||
         (DAT_10023e6c != uVar10)) {
        recovered_1001111c(uVar4,uVar11,uVar10);
        return;
      }
    }
    else if (cVar9 == '\x06') {
      recovered_1000b680(str_1001f14d);
      if (DAT_10023ed8 == 4) {
        DAT_10023e63 = '\0';
      }
      recovered_100110b8(param_3);
      return;
    }
  }
  return;
}

#undef DAT_10023e5c
#undef DAT_10023e63
#undef DAT_10023e64
#undef DAT_10023e68
#undef DAT_10023e6c
#undef DAT_10023ed8
#undef DAT_10023edc
#undef DAT_10023ee0
#undef DAT_10023ee4
#undef DAT_10023ee8
#undef DAT_10023eec
#undef DAT_10023ef0
#undef DAT_10023ef4
#undef DAT_10023ef8
#undef DAT_10023efc
#undef str_1001f14d
#undef local_2c
#undef local_24

#undef DAT_10023740
#define DAT_10023740 (*(ushort *)(((uintptr_t)pf_module_state + 0x4b68U)))
#undef DAT_1002397c
#define DAT_1002397c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4da4U)))
#undef DAT_1002398c
#define DAT_1002398c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4db4U)))
#undef DAT_10023990
#define DAT_10023990 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
#undef DAT_10023992
#define DAT_10023992 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4dbaU)))
#undef DAT_10023994
#define DAT_10023994 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dbcU)))
#undef DAT_10023998
#define DAT_10023998 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc0U)))
#undef DAT_1002399c
#define DAT_1002399c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dc4U)))
#undef DAT_100239a4
#define DAT_100239a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dccU)))
#undef DAT_100239a8
#define DAT_100239a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef DAT_100239ac
#define DAT_100239ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dd4U)))
#undef DAT_100239bc
#define DAT_100239bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4de4U)))
#undef DAT_100239c0
#define DAT_100239c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4de8U)))
#undef DAT_100239c4
#define DAT_100239c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4decU)))
#undef DAT_100239c6
#define DAT_100239c6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4deeU)))
#undef DAT_100239c8
#define DAT_100239c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df0U)))
#undef DAT_100239c9
#define DAT_100239c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df1U)))
#undef DAT_100239ca
#define DAT_100239ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df2U)))
#undef DAT_100239cb
#define DAT_100239cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df3U)))
#undef DAT_100239cc
#define DAT_100239cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4df4U)))
#undef DAT_100239d4
#define DAT_100239d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dfcU)))
#undef DAT_100239d8
#define DAT_100239d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e00U)))
#undef DAT_100239dc
#define DAT_100239dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e04U)))
#undef DAT_100239e0
#define DAT_100239e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e08U)))
#undef DAT_10023f16
#define DAT_10023f16 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x533eU)))
#undef DAT_10023f18
#define DAT_10023f18 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5340U)))
#undef DAT_10023f1a
#define DAT_10023f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5342U)))
#undef DAT_10023f1e
#define DAT_10023f1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5346U)))
#undef DAT_10023f22
#define DAT_10023f22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534aU)))
#undef DAT_10023f23
#define DAT_10023f23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534bU)))
#undef DAT_10023f24
#define DAT_10023f24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x534cU)))
#undef DAT_10023f28
#define DAT_10023f28 (*(ushort *)(((uintptr_t)pf_module_state + 0x5350U)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011da8
 */

void recovered_10011da8(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  uint unaff_r10;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;

  if (0x13 < param_2) {
    puVar1 = (ushort *)((int)&DAT_10023f16 + param_1);
    bVar3 = (&DAT_10023f22)[param_1];
    if (0x4f < bVar3) {
      unaff_r10 = bVar3 >> 2 & 0x3c;
    }
    if (0x4f < bVar3 && unaff_r10 <= param_2) {
      uVar14 = (uint)DAT_10023f23 << 0x10 | (uint)DAT_10023f22 << 0x18;
      uVar15 = param_2 & 0xfffe;
      uVar7 = (uVar14 >> 0x10) + (param_2 & 0xffff) +
              (((ushort)DAT_10023f24 & 0xff) << 8 | (uint)((ushort)DAT_10023f24 >> 8)) +
              (((uint)PF_PART2(DAT_10023f24, 2) << 0x18 | (uint)(PF_PART2(DAT_10023f24, 2) >> 8) << 0x10) >> 0x10)
              + (((uint)DAT_10023f28 << 0x18 | (uint)(DAT_10023f28 >> 8) << 0x10) >> 0x10) + 6;
      if (uVar15 != 0) {
        iVar5 = 0;
        do {
          uVar11 = *(ushort *)((int)&DAT_10023f16 + param_1 + iVar5);
          uVar7 = uVar7 + (((uint)uVar11 << 0x18 | (uint)(uVar11 >> 8) << 0x10) >> 0x10);
          uVar9 = iVar5 + 3;
          iVar5 = iVar5 + 2;
        } while (uVar9 < (param_2 & 0xffff));
      }
      if (uVar15 < (param_2 & 0xffff)) {
        uVar7 = uVar7 + (uint)*(byte *)((int)puVar1 + uVar15) * 0x100;
      }
      if (0xffff < uVar7) {
        do {
          uVar7 = (uVar7 >> 0x10) + (uVar7 & 0xffff);
        } while (uVar7 >> 0x10 != 0);
      }
      if (uVar7 == 0xffff) {
        uVar15 = *(uint *)(&DAT_10023f1e + param_1);
        uVar7 = param_2 - unaff_r10;
        uVar10 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                 uVar15 >> 0x18;
        uVar15 = *(uint *)(&DAT_10023f1a + param_1);
        uVar9 = (*(ushort *)((int)&DAT_10023f24 + param_1) & 0xff) << 8 |
                (uint)(*(ushort *)((int)&DAT_10023f24 + param_1) >> 8);
        iVar5 = 0;
        uVar15 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                 uVar15 >> 0x18;
        uVar11 = *(ushort *)((int)&DAT_10023f18 + param_1) << 8 |
                 *(ushort *)((int)&DAT_10023f18 + param_1) >> 8;
        bVar3 = (&DAT_10023f23)[param_1];
        do {
          uVar6 = *(uint *)((int)&DAT_1002397c + iVar5);
          if (uVar6 != 0) {
            puVar13 = (uint *)((int)&DAT_1002397c + iVar5);
            uVar8 = *(uint *)((int)&DAT_1002398c + iVar5);
            bVar16 = uVar8 == (uVar14 | ((uint)(ushort)DAT_10023f24 << 0x18 |
                                        (uint)((ushort)DAT_10023f24 >> 8) << 0x10) >> 0x10);
            if (bVar16) {
              uVar8 = (uint)*(ushort *)((int)&DAT_10023990 + iVar5);
            }
            if ((bVar16 && uVar8 == ((*puVar1 & 0xff) << 8 | (uint)(*puVar1 >> 8))) &&
               (*(ushort *)((int)&DAT_10023992 + iVar5) == uVar11)) {
              bVar16 = uVar6 == 8;
              if (bVar16) {
                uVar6 = bVar3 & 0x16;
              }
              if ((!bVar16 || uVar6 != 2) ||
                 (*(int *)((int)&DAT_10023994 + iVar5) - uVar15 < 0x80000000)) {
                *(uint *)((int)&DAT_100239e0 + iVar5) = param_3;
                local_28 = param_3;
                local_24 = uVar15;
                recovered_1000c340((int)&local_28,8);
                if ((bVar3 & 4) != 0) {
                  if (0 < (int)(*(int *)((int)&DAT_10023994 + iVar5) - uVar15)) {
                    return;
                  }
                  iVar12 = uVar15 - *(int *)((int)&DAT_10023994 + iVar5);
                  if (iVar12 == 0x4000 || iVar12 + -0x4001 < -1) {
                    iVar12 = *(int *)((int)&DAT_1002397c + iVar5);
                    (&DAT_100239d4)[iVar5] = 0;
                    *(undefined4 *)((int)&DAT_100239bc + iVar5) = 0;
                    *(undefined4 *)((int)&DAT_100239ac + iVar5) = 0;
                    *(int *)((int)&DAT_1002397c + iVar5) = 0;
                    (&DAT_100239cb)[iVar5] = iVar12 != 1 && iVar12 != 8;
                    return;
                  }
                  return;
                }
                if (*puVar13 == 8) {
                  (&DAT_100239ca)[iVar5] = 1;
                  iVar5 = *(int *)((int)&DAT_100239c0 + iVar5) +
                          *(int *)((int)&DAT_10023998 + iVar5) + (uint)(byte)(&DAT_100239c4)[iVar5]
                          + (uint)(byte)(&DAT_100239c6)[iVar5];
                  bVar3 = 0x10;
LAB_100121c8:
                  recovered_10012940((int)puVar13,bVar3,iVar5,0,0);
                  return;
                }
                if (*puVar13 == 1) {
                  if ((bVar3 & 2) != 0) {
                    if (((bVar3 & 0x10) == 0) &&
                       (uVar15 + 1 != *(int *)((int)&DAT_10023994 + iVar5))) {
                      *(undefined4 *)((int)&DAT_1002397c + iVar5) = 0;
                      (&DAT_100239d4)[iVar5] = 0;
                      *(undefined4 *)((int)&DAT_100239bc + iVar5) = 0;
                      *(undefined4 *)((int)&DAT_100239ac + iVar5) = 0;
                      recovered_1001244c(puVar1,unaff_r10,param_3);
                      return;
                    }
                    iVar5 = *(int *)((int)&DAT_10023998 + iVar5);
                    bVar3 = 0x12;
                    goto LAB_100121c8;
                  }
                  if ((bVar3 & 0x10) == 0) {
                    return;
                  }
                  if (uVar10 != *(int *)((int)&DAT_10023998 + iVar5) + 1U) {
                    return;
                  }
                  *(uint *)((int)&DAT_10023998 + iVar5) = uVar10;
                  *(undefined4 *)((int)&DAT_1002397c + iVar5) = 2;
                  (&DAT_100239c4)[iVar5] = 0;
                  *(undefined4 *)((int)&DAT_100239d8 + iVar5) = 0;
                  (&DAT_100239d4)[iVar5] = 0;
                  *(uint *)((int)&DAT_1002399c + iVar5) = uVar9;
                  *(undefined4 *)((int)&DAT_100239cc + iVar5) = 400;
                  *(uint *)((int)&DAT_100239dc + iVar5) = param_3;
                }
                else if ((bVar3 & 2) != 0) {
                  recovered_1000c1b0(puVar13);
                  return;
                }
                if ((bVar3 & 0x10) == 0) {
                  return;
                }
                recovered_10012c50((int *)puVar13,uVar10,uVar9,param_3);
                if (*puVar13 == 0) {
                  return;
                }
                iVar12 = *(int *)((int)&DAT_10023994 + iVar5);
                uVar15 = iVar12 - uVar15;
                if (((int)uVar15 < 0) || (uVar7 < uVar15)) {
                  if (param_2 != unaff_r10 || (bVar3 & 1) != 0) {
                    (&DAT_100239ca)[iVar5] = 1;
                  }
                }
                else {
                  if (uVar7 == uVar15) {
                    if ((bVar3 & 1) == 0) goto LAB_10012190;
                  }
                  else {
                    uVar7 = uVar7 - uVar15;
                    uVar9 = 0x4000 - *(int *)((int)&DAT_100239ac + iVar5);
                    uVar14 = uVar9;
                    if (uVar7 < uVar9) {
                      uVar14 = uVar7;
                    }
                    if ((uVar14 != 0) && ((&DAT_100239c9)[iVar5] == '\0')) {
                      recovered_10012db8(*(int *)((int)&DAT_100239a4 + iVar5),0x4000,
                                         *(int *)((int)&DAT_100239a8 + iVar5) +
                                         *(int *)((int)&DAT_100239ac + iVar5) & 0x3fff,
                                         (int)puVar1 + uVar15 + unaff_r10,uVar14);
                      iVar12 = *(int *)((int)&DAT_10023994 + iVar5) + uVar14;
                      *(int *)((int)&DAT_10023994 + iVar5) = iVar12;
                      *(uint *)((int)&DAT_100239ac + iVar5) =
                           *(int *)((int)&DAT_100239ac + iVar5) + uVar14;
                    }
                    (&DAT_100239ca)[iVar5] = 1;
                    if (((bVar3 & 1) == 0) || (uVar9 < uVar7)) goto LAB_10012190;
                  }
                  if ((&DAT_100239c9)[iVar5] == '\0') {
                    iVar2 = *(int *)((int)&DAT_1002397c + iVar5);
                    (&DAT_100239c9)[iVar5] = 1;
                    *(int *)((int)&DAT_10023994 + iVar5) = iVar12 + 1;
                    (&DAT_100239ca)[iVar5] = 1;
                    if (iVar2 == 6) {
                      *(undefined4 *)((int)&DAT_1002397c + iVar5) = 8;
                    }
                    else {
                      if (iVar2 == 5) {
                        uVar4 = 7;
                        if ((&DAT_100239c8)[iVar5] != '\0') {
                          uVar4 = 8;
                        }
                        *(undefined4 *)((int)&DAT_1002397c + iVar5) = uVar4;
                        *(uint *)((int)&DAT_100239dc + iVar5) = param_3;
                        goto LAB_10012190;
                      }
                      if (iVar2 != 2) goto LAB_10012190;
                      *(undefined4 *)((int)&DAT_1002397c + iVar5) = 3;
                    }
                    *(uint *)((int)&DAT_100239dc + iVar5) = param_3;
                  }
                }
LAB_10012190:
                recovered_10012e18(puVar13,param_3);
                return;
              }
              *(undefined4 *)((int)&DAT_1002397c + iVar5) = 0;
              (&DAT_100239d4)[iVar5] = 0;
              *(undefined4 *)((int)&DAT_100239bc + iVar5) = 0;
              *(undefined4 *)((int)&DAT_100239ac + iVar5) = 0;
              goto LAB_10012020;
            }
          }
          iVar5 = iVar5 + 0x68;
          if (iVar5 == 0x4e0) {
            if ((bVar3 & 0x16) == 2) {
LAB_10012020:
              if (uVar11 == DAT_10023740) {
                recovered_1001244c(puVar1,unaff_r10,param_3);
                return;
              }
            }
            recovered_100126d4((undefined1 *)puVar1,uVar7);
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

#undef DAT_10023740
#undef DAT_1002397c
#undef DAT_1002398c
#undef DAT_10023990
#undef DAT_10023992
#undef DAT_10023994
#undef DAT_10023998
#undef DAT_1002399c
#undef DAT_100239a4
#undef DAT_100239a8
#undef DAT_100239ac
#undef DAT_100239bc
#undef DAT_100239c0
#undef DAT_100239c4
#undef DAT_100239c6
#undef DAT_100239c8
#undef DAT_100239c9
#undef DAT_100239ca
#undef DAT_100239cb
#undef DAT_100239cc
#undef DAT_100239d4
#undef DAT_100239d8
#undef DAT_100239dc
#undef DAT_100239e0
#undef DAT_10023f16
#undef DAT_10023f18
#undef DAT_10023f1a
#undef DAT_10023f1e
#undef DAT_10023f22
#undef DAT_10023f23
#undef DAT_10023f24
#undef DAT_10023f28
#undef local_28
#undef local_24

#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023f0e
#define DAT_10023f0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5336U)))
#undef DAT_10023f16
#define DAT_10023f16 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x533eU)))
#undef DAT_10023f22
#define DAT_10023f22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534aU)))
#undef DAT_1002472a
#define DAT_1002472a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b52U)))
#undef _DAT_10023f22
#define _DAT_10023f22 (*(uint *)(((uintptr_t)pf_module_state + 0x534aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012328
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10012328(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (7 < param_2) {
    cVar1 = *(char *)((int)&DAT_10023f16 + param_1);
    bVar6 = cVar1 == '\b';
    if (bVar6) {
      cVar1 = *(char *)((int)&DAT_10023f16 + param_1 + 1);
    }
    if ((bVar6 && cVar1 == '\0') && (param_2 + 0x22 < 0x801)) {
      uVar4 = 0;
      uVar3 = 0;
      do {
        uVar2 = *(ushort *)(&DAT_10023e5c + uVar4 + param_1 + 0xba);
        uVar3 = uVar3 + (((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10);
        uVar5 = uVar4 + 3;
        uVar4 = uVar4 + 2;
      } while (uVar5 < param_2);
      if (uVar4 < param_2) {
        uVar3 = uVar3 + (uint)(byte)(&DAT_10023e5c)[uVar4 + param_1 + 0xba] * 0x100;
      }
      if (0xffff < uVar3) {
        do {
          uVar3 = (uVar3 >> 0x10) + (uVar3 & 0xffff);
        } while (uVar3 >> 0x10 != 0);
      }
      if (uVar3 == 0xffff) {
        recovered_100115c8(&DAT_10023f0e,0x800);
        recovered_10011618(param_2 + 0x14 & 0xffff,1,DAT_10023e64,
                           _DAT_10023f22 << 0x18 | (_DAT_10023f22 >> 8 & 0xff) << 0x10 |
                           (_DAT_10023f22 >> 0x10 & 0xff) << 8 | _DAT_10023f22 >> 0x18);
        recovered_100038f0((undefined8 *)&DAT_1002472a,(undefined8 *)((int)&DAT_10023f16 + param_1),
                           (undefined8 *)param_2);
        PF_PART1(DAT_1002472a, 0) = 0;
        PF_PART2(DAT_1002472a, 2) = 0;
        uVar3 = recovered_100117f0(((uintptr_t)pf_module_state + 0x5b52U),param_2);
        PF_PART2(DAT_1002472a, 2) = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
        recovered_1001173c(param_2 + 0x22);
        return;
      }
    }
  }
  return;
}

#undef DAT_10023e5c
#undef DAT_10023e64
#undef DAT_10023f0e
#undef DAT_10023f16
#undef DAT_10023f22
#undef DAT_1002472a
#undef _DAT_10023f22

#undef DAT_10020038
#define DAT_10020038 (*(int *)(((uintptr_t)pf_module_state + 0x1460U)))
#undef DAT_1002397c
#define DAT_1002397c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4da4U)))
#undef DAT_100239a4
#define DAT_100239a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dccU)))
#undef DAT_100239b4
#define DAT_100239b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#undef DAT_100239dc
#define DAT_100239dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e04U)))
#undef DAT_10023f0e
#define DAT_10023f0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5336U)))
#undef DAT_10023f22
#define DAT_10023f22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534aU)))
#undef _DAT_10023f22
#define _DAT_10023f22 (*(uint *)(((uintptr_t)pf_module_state + 0x534aU)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001244c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001244c(ushort *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r4;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;

  iVar3 = 0;
  piVar9 = (int *)0x0;
  do {
    piVar5 = (int *)((int)&DAT_1002397c + iVar3);
    bVar11 = *(int *)((int)&DAT_100239a4 + iVar3) != 0;
    piVar7 = (int *)0x0;
    if (bVar11) {
      piVar7 = (int *)((int)&DAT_1002397c + iVar3);
      unaff_r4 = *(int *)((int)&DAT_100239b4 + iVar3);
    }
    if (bVar11 && unaff_r4 != 0) {
      unaff_r4 = *piVar5;
      if (unaff_r4 - 4U < 5) {
        if (piVar9 == (int *)0x0) {
          piVar9 = piVar5;
        }
        else if (0x7fffffff < (uint)(*(int *)((int)&DAT_100239dc + iVar3) - piVar9[0x18])) {
          piVar9 = piVar5;
        }
      }
      else if (unaff_r4 == 0) goto LAB_10012504;
    }
    iVar3 = iVar3 + 0x68;
  } while (iVar3 != 0x4e0);
  if (piVar9 == (int *)0x0) {
    recovered_100126d4((undefined1 *)param_1,0);
    return;
  }
  *(undefined1 *)(piVar9 + 0x16) = 0;
  piVar9[0x10] = 0;
  piVar9[0xc] = 0;
  *piVar9 = 0;
  piVar7 = piVar9;
LAB_10012504:
  uVar8 = 0x218;
  if (0x14 < param_2) {
    uVar4 = 0x14;
    do {
      cVar1 = *(char *)((int)param_1 + uVar4);
      if (cVar1 == '\x01') {
        uVar6 = 1;
      }
      else {
        if (((cVar1 == '\0') || (param_2 <= uVar4 + 1)) ||
           (uVar6 = (uint)*(byte *)((int)param_1 + uVar4 + 1), uVar6 < 2)) break;
        if ((cVar1 == '\x02' && uVar6 == 4) && (uVar4 + 4 <= param_2)) {
          uVar2 = *(ushort *)((char *)((int)param_1 + uVar4) + 2);
          uVar8 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
        }
      }
      uVar4 = uVar4 + uVar6;
    } while (uVar4 < param_2);
  }
  pbVar10 = (byte *)(piVar7 + 2);
  recovered_10004080(pbVar10,0,6);
  recovered_100038f0((undefined8 *)pbVar10,(undefined8 *)&DAT_10023f0e,(undefined8 *)0x6);
  piVar7[1] = DAT_10020038;
  DAT_10020038 = DAT_10020038 + 1;
  piVar7[4] = _DAT_10023f22 << 0x18 | (_DAT_10023f22 >> 8 & 0xff) << 0x10 |
              (_DAT_10023f22 >> 0x10 & 0xff) << 8 | _DAT_10023f22 >> 0x18;
  *(ushort *)(piVar7 + 5) = *param_1 << 8 | *param_1 >> 8;
  *(ushort *)((int)piVar7 + 0x16) = param_1[1] << 8 | param_1[1] >> 8;
  uVar4 = *(uint *)(param_1 + 2);
  piVar7[6] = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18) + 1;
  recovered_1000cff0((int)&local_24,4);
  uVar6 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
          local_24 >> 0x18;
  piVar7[7] = uVar6;
  uVar2 = param_1[7];
  piVar7[0x14] = 800;
  uVar4 = 0x5b4;
  if (uVar8 < 0x5b4) {
    uVar4 = uVar8;
  }
  if (uVar4 < 0x101) {
    uVar4 = 0x100;
  }
  piVar7[8] = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
  piVar7[9] = uVar4;
  *piVar7 = 1;
  piVar7[0x18] = param_3;
  piVar7[0x13] = 0;
  piVar7[0x12] = 1;
  piVar7[0x19] = param_3;
  piVar7[0x17] = 0;
  piVar7[0x11] = 0;
  piVar7[0x10] = 0;
  piVar7[0xf] = 0;
  piVar7[0xc] = 0;
  piVar7[0xb] = 0;
  recovered_10012940((int)piVar7,0x12,uVar6,0,0);
  piVar7[0x15] = piVar7[0x14] + param_3;
  *(undefined1 *)(piVar7 + 0x16) = 1;
  recovered_10011984(piVar7[4],pbVar10);
  return;
}

#undef DAT_10020038
#undef DAT_1002397c
#undef DAT_100239a4
#undef DAT_100239b4
#undef DAT_100239dc
#undef DAT_10023f0e
#undef DAT_10023f22
#undef _DAT_10023f22
#undef local_24

#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023f04
#define DAT_10023f04 (*(int *)(((uintptr_t)pf_module_state + 0x532cU)))
#undef DAT_10023f0e
#define DAT_10023f0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5336U)))
#undef DAT_10023f22
#define DAT_10023f22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534aU)))
#undef DAT_10023f24
#define DAT_10023f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534cU)))
#undef DAT_10024708
#define DAT_10024708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1002470e
#define DAT_1002470e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b36U)))
#undef DAT_10024714
#define DAT_10024714 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5b3cU)))
#undef DAT_1002472a
#define DAT_1002472a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b52U)))
#undef DAT_1002472e
#define DAT_1002472e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b56U)))
#undef DAT_1002472f
#define DAT_1002472f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b57U)))
#undef DAT_10024730
#define DAT_10024730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b58U)))
#undef DAT_10024732
#define DAT_10024732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5aU)))
#undef DAT_10024733
#define DAT_10024733 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5bU)))
#undef DAT_10024734
#define DAT_10024734 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5cU)))
#undef DAT_10024735
#define DAT_10024735 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5dU)))
#undef DAT_10024736
#define DAT_10024736 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5eU)))
#undef DAT_10024737
#define DAT_10024737 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5fU)))
#undef DAT_10024738
#define DAT_10024738 (*(ushort *)(((uintptr_t)pf_module_state + 0x5b60U)))
#undef DAT_1002473a
#define DAT_1002473a (*(ushort *)(((uintptr_t)pf_module_state + 0x5b62U)))
#undef DAT_1002473c
#define DAT_1002473c (*(ushort *)(((uintptr_t)pf_module_state + 0x5b64U)))
#undef DAT_1002473e
#define DAT_1002473e (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b66U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001092c
#define DAT_4001092c (*(uint8_t *)(0x4001092cU))
#undef _DAT_10023f22
#define _DAT_10023f22 (*(uint *)(((uintptr_t)pf_module_state + 0x534aU)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001092c
#define _DAT_4001092c (*(code * *)(0x4001092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100126d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100126d4(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  bVar1 = param_1[0xd];
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 0x10) == 0) {
      uVar2 = *(uint *)(param_1 + 4);
      uVar4 = (((bVar1 & 1) + param_2) - ((int)((uint)bVar1 << 0x1e) >> 0x1f)) +
              (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18);
      iVar3 = 0x14;
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      iVar3 = 4;
      uVar4 = 0;
      uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
    }
    recovered_100038f0((undefined8 *)&DAT_10024708,(undefined8 *)&DAT_10023f0e,(undefined8 *)0x6);
    recovered_100038f0((undefined8 *)&DAT_1002470e,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
    DAT_10024714 = 8;
    recovered_10011618(0x28,6,DAT_10023e64,
                       _DAT_10023f22 << 0x18 | (_DAT_10023f22 >> 8 & 0xff) << 0x10 |
                       (_DAT_10023f22 >> 0x10 & 0xff) << 8 | _DAT_10023f22 >> 0x18);
    recovered_10004080((byte *)&DAT_1002472a,0,0x14);
    PF_PART1(DAT_1002472a, 0) = param_1[2];
    PF_PART1(DAT_1002472a, 1) = param_1[3];
    PF_PART1(DAT_1002472a, 2) = *param_1;
    PF_PART1(DAT_1002472a, 3) = param_1[1];
    DAT_10024733 = (undefined1)(uVar4 >> 0x10);
    DAT_1002472f = (undefined1)(uVar2 >> 0x10);
    DAT_10024734 = (undefined1)(uVar4 >> 8);
    PF_PART1(DAT_10024730, 0) = (undefined1)(uVar2 >> 8);
    DAT_10024736 = 0x50;
    DAT_1002472e = (undefined1)(uVar2 >> 0x18);
    PF_PART1(DAT_10024730, 1) = (undefined1)uVar2;
    DAT_10024732 = (undefined1)(uVar4 >> 0x18);
    DAT_10024735 = (undefined1)uVar4;
    DAT_10024737 = (undefined1)iVar3;
    uVar2 = (DAT_10023e64 >> 0x10) + (DAT_10023e64 & 0xffff) +
            ((_DAT_10023f22 << 0x18 | (_DAT_10023f22 >> 8 & 0xff) << 0x10) >> 0x10) +
            (((uint)(ushort)DAT_10023f24 << 0x18 | (uint)((ushort)DAT_10023f24 >> 8) << 0x10) >>
            0x10) + (uint)CONCAT11((undefined1)DAT_1002472a,PF_PART1(DAT_1002472a, 1)) +
            (uint)CONCAT11(PF_PART1(DAT_1002472a, 2),PF_PART1(DAT_1002472a, 3)) +
            ((uVar2 & 0xffffff) >> 0x10 | (uVar2 >> 0x18) << 8) + (uVar2 & 0xffff) +
            ((uVar4 & 0xffffff) >> 0x10 | (uVar4 >> 0x18) << 8) + (uVar4 & 0xffff) + iVar3 +
            (((uint)DAT_10024738 << 0x18 | (uint)(DAT_10024738 >> 8) << 0x10) >> 0x10) +
            (((uint)DAT_1002473a << 0x18 | (uint)(DAT_1002473a >> 8) << 0x10) >> 0x10) +
            (((uint)DAT_1002473c << 0x18 | (uint)(DAT_1002473c >> 8) << 0x10) >> 0x10) + 0x501a;
    if (0xffff < uVar2) {
      do {
        uVar2 = (uVar2 >> 0x10) + (uVar2 & 0xffff);
      } while (uVar2 >> 0x10 != 0);
    }
    DAT_1002473a = (ushort)((~uVar2 & 0xff) << 8) | (ushort)(~uVar2 >> 8) & 0xff;
    recovered_10004080((byte *)&DAT_1002473e,0,6);
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x12f < _DAT_40010808)) &&
       (_DAT_4001092c != (code *)0x0)) {
      iVar3 = (*_DAT_4001092c)(&DAT_10024708,0x3c);
      if (iVar3 != 0) {
        DAT_10023f04 = DAT_10023f04 + 1;
      }
      return;
    }
  }
  return;
}

#undef DAT_10023e5c
#undef DAT_10023e64
#undef DAT_10023f04
#undef DAT_10023f0e
#undef DAT_10023f22
#undef DAT_10023f24
#undef DAT_10024708
#undef DAT_1002470e
#undef DAT_10024714
#undef DAT_1002472a
#undef DAT_1002472e
#undef DAT_1002472f
#undef DAT_10024730
#undef DAT_10024732
#undef DAT_10024733
#undef DAT_10024734
#undef DAT_10024735
#undef DAT_10024736
#undef DAT_10024737
#undef DAT_10024738
#undef DAT_1002473a
#undef DAT_1002473c
#undef DAT_1002473e
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001092c
#undef _DAT_10023f22
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001092c

#undef DAT_10023e5c
#define DAT_10023e5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10023e64
#define DAT_10023e64 (*(uint *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10023f04
#define DAT_10023f04 (*(int *)(((uintptr_t)pf_module_state + 0x532cU)))
#undef DAT_10024708
#define DAT_10024708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b30U)))
#undef DAT_1002470e
#define DAT_1002470e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b36U)))
#undef DAT_10024714
#define DAT_10024714 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5b3cU)))
#undef DAT_1002472a
#define DAT_1002472a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b52U)))
#undef DAT_1002472e
#define DAT_1002472e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b56U)))
#undef DAT_1002472f
#define DAT_1002472f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b57U)))
#undef DAT_10024730
#define DAT_10024730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b58U)))
#undef DAT_10024732
#define DAT_10024732 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5aU)))
#undef DAT_10024733
#define DAT_10024733 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5bU)))
#undef DAT_10024734
#define DAT_10024734 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5cU)))
#undef DAT_10024735
#define DAT_10024735 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5dU)))
#undef DAT_10024736
#define DAT_10024736 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b5eU)))
#undef DAT_10024737
#define DAT_10024737 (*(byte *)(((uintptr_t)pf_module_state + 0x5b5fU)))
#undef DAT_10024738
#define DAT_10024738 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b60U)))
#undef DAT_1002473a
#define DAT_1002473a (*(ushort *)(((uintptr_t)pf_module_state + 0x5b62U)))
#undef DAT_1002473e
#define DAT_1002473e (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b66U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001092c
#define DAT_4001092c (*(uint8_t *)(0x4001092cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001092c
#define _DAT_4001092c (*(code * *)(0x4001092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10012940(int param_1,byte param_2,undefined4 param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  bool bVar13;

  uVar9 = 0x18;
  if ((param_2 & 2) == 0) {
    uVar9 = 0x14;
  }
  uVar7 = uVar9 + param_5;
  uVar1 = uVar7 + 0x22;
  bVar13 = false;
  if (uVar1 < 0x801) {
    iVar4 = *(int *)(param_1 + 0x30);
    recovered_100038f0((undefined8 *)&DAT_10024708,(undefined8 *)(param_1 + 8),(undefined8 *)0x6);
    recovered_100038f0((undefined8 *)&DAT_1002470e,(undefined8 *)&DAT_10023e5c,(undefined8 *)0x6);
    DAT_10024714 = 8;
    recovered_10011618(uVar7 + 0x14 & 0xffff,6,DAT_10023e64,*(uint *)(param_1 + 0x10));
    recovered_10004080((byte *)&DAT_1002472a,0,uVar9);
    PF_PART2(DAT_1002472a, 0) = *(ushort *)(param_1 + 0x16) << 8 | *(ushort *)(param_1 + 0x16) >> 8;
    PF_PART1(DAT_10024730, 0) = (undefined1)((uint)param_3 >> 8);
    PF_PART1(DAT_1002472a, 3) = (undefined1)*(undefined2 *)(param_1 + 0x14);
    DAT_1002472f = (undefined1)((uint)param_3 >> 0x10);
    PF_PART1(DAT_10024730, 1) = (undefined1)param_3;
    DAT_1002472e = (undefined1)((uint)param_3 >> 0x18);
    PF_PART1(DAT_1002472a, 2) = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x14) >> 8);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    DAT_10024736 = (undefined1)(uVar9 << 2);
    DAT_10024735 = (undefined1)uVar2;
    uVar3 = 0x4000 - iVar4;
    uVar8 = 0xffff;
    if (uVar3 < 0xffff) {
      uVar8 = uVar3;
    }
    PF_PART1(DAT_10024738, 1) = (undefined1)uVar8;
    PF_PART1(DAT_10024738, 0) = (undefined1)(uVar8 >> 8);
    DAT_10024734 = (undefined1)((uint)uVar2 >> 8);
    DAT_10024733 = (undefined1)((uint)uVar2 >> 0x10);
    DAT_10024732 = (undefined1)((uint)uVar2 >> 0x18);
    if ((param_2 & 2) != 0) {
      DAT_1002473e = 0xb4050402;
    }
    DAT_10024737 = param_2;
    if (param_5 != 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x38);
      puVar12 = (undefined8 *)(0x8000 - param_4);
      puVar10 = (undefined8 *)param_5;
      if (puVar12 < param_5) {
        puVar10 = puVar12;
      }
      recovered_100038f0((undefined8 *)((int)&DAT_1002472a + uVar9),
                         (undefined8 *)((int)puVar6 + param_4),puVar10);
      if (puVar12 < param_5) {
        recovered_100038f0((undefined8 *)((int)((int)&DAT_1002472a + uVar9) + (int)puVar10),puVar6,
                           (undefined8 *)(param_5 - (int)puVar10));
      }
    }
    uVar5 = 0;
    uVar3 = uVar7 & 0xffff;
    uVar9 = (DAT_10023e64 >> 0x10) + (uVar7 & 0xffff) + (DAT_10023e64 & 0xffff) +
            (*(uint *)(param_1 + 0x10) >> 0x10) + (*(uint *)(param_1 + 0x10) & 0xffff) + 6;
    if (1 < uVar3) {
      do {
        uVar9 = uVar9 + (((uint)*(ushort *)((int)&DAT_1002472a + uVar5) << 0x18 |
                         (uint)(*(ushort *)((int)&DAT_1002472a + uVar5) >> 8) << 0x10) >> 0x10);
        uVar11 = uVar5 + 3;
        uVar5 = uVar5 + 2;
      } while (uVar11 < uVar3);
      uVar5 = uVar7 & 0xfffe;
    }
    if (uVar5 < uVar3) {
      uVar9 = uVar9 + (uint)*(byte *)((int)&DAT_1002472a + uVar5) * 0x100;
    }
    if (0xffff < uVar9) {
      do {
        uVar9 = (uVar9 >> 0x10) + (uVar9 & 0xffff);
      } while (uVar9 >> 0x10 != 0);
    }
    bVar13 = false;
    DAT_1002473a = (ushort)((~uVar9 & 0xff) << 8) | (ushort)(~uVar9 >> 8) & 0xff;
    *(undefined1 *)(param_1 + 0x4e) = 0;
    *(uint *)(param_1 + 0x34) = uVar8;
    if (uVar1 < 0x3c) {
      recovered_10004080((byte *)((int)&DAT_1002472a + uVar7),0,0x1a - uVar7);
      uVar1 = 0x3c;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x12f < _DAT_40010808)) &&
       (_DAT_4001092c != (code *)0x0)) {
      iVar4 = (*_DAT_4001092c)(&DAT_10024708,uVar1);
      bVar13 = iVar4 != 0;
      if (bVar13) {
        DAT_10023f04 = DAT_10023f04 + 1;
      }
    }
  }
  return bVar13;
}

#undef DAT_10023e5c
#undef DAT_10023e64
#undef DAT_10023f04
#undef DAT_10024708
#undef DAT_1002470e
#undef DAT_10024714
#undef DAT_1002472a
#undef DAT_1002472e
#undef DAT_1002472f
#undef DAT_10024730
#undef DAT_10024732
#undef DAT_10024733
#undef DAT_10024734
#undef DAT_10024735
#undef DAT_10024736
#undef DAT_10024737
#undef DAT_10024738
#undef DAT_1002473a
#undef DAT_1002473e
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001092c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001092c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c50
 */

void recovered_10012c50(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = param_1[7];
  uVar4 = param_1[0x11];
  uVar5 = (uint)*(byte *)((int)param_1 + 0x4a);
  iVar3 = uVar4 + iVar1 + (uint)*(byte *)(param_1 + 0x12) + uVar5;
  if (iVar3 - param_2 < 0) {
    *(undefined1 *)((int)param_1 + 0x4e) = 1;
    return;
  }
  if (0x7fffffff < (uint)(iVar1 - param_2)) {
    uVar2 = param_2 - iVar1;
    if (*(byte *)(param_1 + 0x12) != 0) {
      uVar2 = uVar2 - 1;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    if (((uVar4 < uVar2) && (uVar2 = uVar4, iVar3 == param_2)) && (uVar5 != 0)) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(undefined1 *)((int)param_1 + 0x4a) = 0;
    }
    param_1[7] = param_2;
    param_1[0x14] = 400;
    param_1[0x10] = param_1[0x10] - uVar2;
    param_1[0x11] = uVar4 - uVar2;
    param_1[0xf] = param_1[0xf] + uVar2 & 0x7fff;
    param_1[0x17] = 0;
    param_1[0x19] = param_4;
    bVar6 = uVar4 != uVar2 || (uVar5 & 1) != 0;
    if (bVar6) {
      param_1[0x15] = param_4 + 400;
    }
    *(bool *)(param_1 + 0x16) = bVar6;
  }
  param_1[8] = param_3;
  if ((char)param_1[0x13] == '\x01') {
    iVar1 = *param_1;
    if (iVar1 == 4) {
      iVar1 = 0;
      *(undefined1 *)(param_1 + 0x16) = 0;
      param_1[0x10] = 0;
      param_1[0xc] = 0;
    }
    else {
      if (iVar1 != 7) {
        if (iVar1 != 5) {
          return;
        }
        iVar1 = 6;
        param_1[0x18] = param_4;
        if (*(char *)((int)param_1 + 0x4d) != '\0') {
          iVar1 = 8;
        }
        *param_1 = iVar1;
        return;
      }
      param_1[0x18] = param_4;
      iVar1 = 8;
    }
    *param_1 = iVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012db8
 */

void recovered_10012db8(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = (undefined8 *)(param_2 - param_3);
  puVar2 = (undefined8 *)param_5;
  if (puVar1 < param_5) {
    puVar2 = puVar1;
  }
  recovered_100038f0((undefined8 *)(param_1 + param_3),(undefined8 *)param_4,puVar2);
  if (puVar1 < param_5) {
    recovered_100038f0((undefined8 *)param_1,(undefined8 *)(param_4 + (int)puVar2),
                       (undefined8 *)(param_5 - (int)puVar2));
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e18
 */

void recovered_10012e18(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  uVar4 = *param_1;
  if ((uVar4 < 9) && ((1 << (uVar4 & 0xff) & 0x103U) != 0)) {
    if ((uVar4 == 1) && ((*(byte *)((int)param_1 + 0x4e) & 1) != 0)) {
      *(undefined1 *)((int)param_1 + 0x4e) = 0;
    }
  }
  else {
    bVar2 = false;
    if (*(char *)((int)param_1 + 0x4b) == '\0') {
      uVar4 = param_1[0x11];
      uVar5 = param_1[8] - uVar4;
      if (param_1[8] < uVar4) {
        uVar5 = 0;
      }
      uVar6 = 0x2da0 - uVar4;
      if (0x2da0 < uVar4) {
        uVar6 = 0;
      }
      if (uVar5 <= 0x2da0 - uVar4) {
        uVar6 = uVar5;
      }
      if (param_1[0x10] - uVar4 < uVar6) {
        uVar6 = param_1[0x10] - uVar4;
      }
      if (param_1[9] <= uVar6) {
        uVar6 = param_1[9];
      }
      if ((uVar6 != 0) &&
         (bVar3 = recovered_10012940((int)param_1,0x18,param_1[7] + uVar4,
                                     param_1[0xf] + uVar4 & 0x7fff,uVar6), bVar3)) {
        cVar1 = (char)param_1[0x16];
        uVar6 = param_1[0x11] + uVar6;
        param_1[0x11] = uVar6;
        while( true ) {
          if (cVar1 == '\0') {
            *(undefined1 *)(param_1 + 0x16) = 1;
            param_1[0x15] = param_1[0x14] + param_2;
          }
          uVar4 = 0x2da0 - uVar6;
          if (0x2da0 < uVar6) {
            uVar4 = 0;
          }
          uVar5 = param_1[8] - uVar6;
          if (param_1[8] < uVar6) {
            uVar5 = 0;
          }
          if (0x2da0 - uVar6 < uVar5) {
            uVar5 = uVar4;
          }
          if (param_1[0x10] - uVar6 < uVar5) {
            uVar5 = param_1[0x10] - uVar6;
          }
          if (param_1[9] <= uVar5) {
            uVar5 = param_1[9];
          }
          bVar2 = true;
          if ((uVar5 == 0) ||
             (bVar3 = recovered_10012940((int)param_1,0x18,param_1[7] + uVar6,
                                         param_1[0xf] + uVar6 & 0x7fff,uVar5), !bVar3)) break;
          cVar1 = (char)param_1[0x16];
          uVar6 = param_1[0x11] + uVar5;
          param_1[0x11] = uVar6;
        }
      }
      if ((*(char *)((int)param_1 + 0x49) == '\x01') && (param_1[0x10] == param_1[0x11])) {
        *(undefined2 *)((int)param_1 + 0x4a) = 0x101;
        recovered_10012940((int)param_1,0x11,param_1[7] + param_1[0x10],0,0);
        if ((char)param_1[0x16] == '\0') {
          *(undefined1 *)(param_1 + 0x16) = 1;
          param_1[0x15] = param_1[0x14] + param_2;
        }
        if (*param_1 == 3) {
          param_1[0x18] = param_2;
          *param_1 = 4;
          return;
        }
        if (*param_1 == 2) {
          param_1[0x18] = param_2;
          *param_1 = 5;
          return;
        }
        return;
      }
    }
    if ((!bVar2) && ((*(byte *)((int)param_1 + 0x4e) & 1) != 0)) {
      recovered_10012940((int)param_1,0x10,
                         param_1[0x11] + param_1[7] + (uint)(byte)param_1[0x12] +
                         (uint)*(byte *)((int)param_1 + 0x4a),0,0);
    }
  }
  return;
}


#undef DAT_1001ec07
#define DAT_1001ec07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1001fe38
#define DAT_1001fe38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1260U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef str_1001f1d3
#define str_1001f1d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fbU)))
#undef str_1001f9ee
#define str_1001f9ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe16U)))
#undef str_1001fcb9
#define str_1001fcb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10e1U)))
#undef str_1001fce8
#define str_1001fce8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1110U)))
#undef str_1001fd1c
#define str_1001fd1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1144U)))
#define auStack_34 (*(undefined8 (*)[6])(pf_stack_frame + 28))
#define local_24 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001309c
 */

void recovered_1001309c(int param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 extraout_r3 = 0;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;

  puVar7 = *(undefined8 **)(param_1 + 0x4b4);
  recovered_1000cff0((int)auStack_34,0x10);
  local_24 = CONCAT31(PF_PART3(local_24, 1),0x14);
  recovered_100038f0(puVar7,(undefined8 *)&local_24,(undefined8 *)0x1);
  recovered_100038f0((undefined8 *)((int)puVar7 + 1),auStack_34,(undefined8 *)&DataAbort);
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x10e1U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  recovered_100038f0((undefined8 *)((int)puVar7 + 0x11),(undefined8 *)&local_24,
                     (undefined8 *)&UndefinedInstruction);
  uVar6 = 0x15;
  if (puVar2 < (undefined8 *)0x1fec) {
    if (puVar2 != (undefined8 *)0x0) {
      recovered_100038f0((undefined8 *)((int)puVar7 + 0x15),(undefined8 *)str_1001fcb9,puVar2);
    }
    uVar6 = (int)puVar2 + 0x15;
  }
  puVar3 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0xe20U));
  local_24 = (int)puVar3 << 0x18 | ((uint)puVar3 >> 8 & 0xff) << 0x10 |
             ((uint)puVar3 >> 0x10 & 0xff) << 8 | (uint)puVar3 >> 0x18;
  if ((puVar2 < (undefined8 *)0x1fec) && (3 < uVar6 - 0x1ffd)) {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar2 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar3 <= puVar2) {
      if (puVar3 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),
                           (undefined8 *)(str_1001f9ee + 10),puVar3);
      }
      uVar6 = (int)puVar3 + uVar6;
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1110U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)str_1001fce8,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1110U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)str_1001fce8,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1144U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)str_1001fd1c,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1144U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)str_1001fd1c,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1260U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&DAT_1001fe38,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1260U));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&DAT_1001fe38,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x2fU));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((bVar1) || (uVar6 - 0x1ffd < 4)) {
    bVar1 = true;
  }
  else {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    bVar1 = true;
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&DAT_1001ec07,puVar2);
      }
      uVar6 = (int)puVar2 + uVar6;
      bVar1 = false;
    }
  }
  puVar2 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x2fU));
  local_24 = (int)puVar2 << 0x18 | ((uint)puVar2 >> 8 & 0xff) << 0x10 |
             ((uint)puVar2 >> 0x10 & 0xff) << 8 | (uint)puVar2 >> 0x18;
  if ((!bVar1) && (3 < uVar6 - 0x1ffd)) {
    recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                       (undefined8 *)&UndefinedInstruction);
    puVar3 = (undefined8 *)(0x1ffc - uVar6);
    uVar6 = uVar6 + 4;
    if (puVar2 <= puVar3) {
      if (puVar2 != (undefined8 *)0x0) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&DAT_1001ec07,puVar2);
      }
      uVar5 = (int)puVar2 + uVar6;
      uVar6 = 0x2000;
      local_24 = local_24 & 0xffffff00;
      if (uVar5 != 0x2000) {
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar5),(undefined8 *)&local_24,
                           (undefined8 *)0x1);
        uVar6 = uVar5 + 1;
        local_24 = 0;
        if (uVar5 >> 2 != 0x7ff) {
          recovered_100038f0((undefined8 *)((int)puVar7 + uVar6),(undefined8 *)&local_24,
                             (undefined8 *)&UndefinedInstruction);
          uVar6 = uVar5 + 5;
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 0x808) = 0;
  *(undefined1 *)(param_1 + 0x7f4) = 0;
  *(undefined2 *)(param_1 + 0x4a5) = 0x101;
  *(uint *)(param_1 + 0x4b8) = uVar6;
  iVar4 = recovered_100136d0(param_1,puVar7,uVar6);
  if (iVar4 == 0) {
    recovered_1000be98(param_1,2,str_1001f1d3,extraout_r3);
  }
  return;
}

#undef DAT_1001ec07
#undef DAT_1001fe38
#undef EXT_00000004
#undef EXT_00000010
#undef str_1001f1d3
#undef str_1001f9ee
#undef str_1001fcb9
#undef str_1001fce8
#undef str_1001fd1c
#undef auStack_34
#undef local_24

#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_8c (*(undefined8 *)(pf_stack_frame + 68))
#define local_84 (*(undefined8 *)(pf_stack_frame + 76))
#define local_7c (*(undefined1 *)(pf_stack_frame + 84))
#define local_7b (*(undefined1 *)(pf_stack_frame + 85))
#define local_7a (*(undefined1 *)(pf_stack_frame + 86))
#define local_79 (*(undefined1 *)(pf_stack_frame + 87))
#define local_78 (*(undefined1 *)(pf_stack_frame + 88))
#define local_77 (*(undefined1 *)(pf_stack_frame + 89))
#define local_76 (*(undefined1 *)(pf_stack_frame + 90))
#define local_75 (*(undefined1 *)(pf_stack_frame + 91))
#define local_6c (*(undefined4 *)(pf_stack_frame + 100))
#define local_68 (*(undefined1 *)(pf_stack_frame + 104))
#define local_64 (*(undefined1 *)(pf_stack_frame + 108))
#define local_63 (*(undefined1 *)(pf_stack_frame + 109))
#define local_62 (*(undefined1 *)(pf_stack_frame + 110))
#define local_5e (*(undefined1 *)(pf_stack_frame + 114))
#define local_5d (*(undefined1 *)(pf_stack_frame + 115))
#define local_5c (*(undefined1 *)(pf_stack_frame + 116))
#define local_58 (*(undefined1 *)(pf_stack_frame + 120))
#define local_50 (*(undefined1 *)(pf_stack_frame + 128))
#define local_4f (*(undefined1 *)(pf_stack_frame + 129))
#define local_4e (*(undefined1 *)(pf_stack_frame + 130))
#define local_4d (*(undefined1 *)(pf_stack_frame + 131))
#define local_4c (*(undefined1 *)(pf_stack_frame + 132))
#define local_4b (*(undefined1 *)(pf_stack_frame + 133))
#define local_4a (*(undefined1 *)(pf_stack_frame + 134))
#define local_49 (*(undefined1 *)(pf_stack_frame + 135))
#define local_48 (*(undefined1 *)(pf_stack_frame + 136))
#define local_47 (*(undefined1 *)(pf_stack_frame + 137))
#define local_46 (*(undefined1 *)(pf_stack_frame + 138))
#define local_45 (*(undefined1 *)(pf_stack_frame + 139))
#define local_44 (*(undefined1 *)(pf_stack_frame + 140))
#define local_43 (*(undefined1 *)(pf_stack_frame + 141))
#define local_42 (*(undefined1 *)(pf_stack_frame + 142))
#define local_41 (*(undefined1 *)(pf_stack_frame + 143))
#define local_40 (*(undefined1 *)(pf_stack_frame + 144))
#define local_3f (*(undefined1 *)(pf_stack_frame + 145))
#define local_3e (*(undefined1 *)(pf_stack_frame + 146))
#define local_3d (*(undefined1 *)(pf_stack_frame + 147))
#define local_3c (*(undefined1 *)(pf_stack_frame + 148))
#define local_3b (*(undefined1 *)(pf_stack_frame + 149))
#define local_3a (*(undefined1 *)(pf_stack_frame + 150))
#define local_39 (*(undefined1 *)(pf_stack_frame + 151))
#define local_38 (*(undefined1 *)(pf_stack_frame + 152))
#define local_37 (*(undefined1 *)(pf_stack_frame + 153))
#define local_36 (*(undefined1 *)(pf_stack_frame + 154))
#define local_35 (*(undefined1 *)(pf_stack_frame + 155))
#define local_34 (*(undefined1 *)(pf_stack_frame + 156))
#define local_33 (*(undefined1 *)(pf_stack_frame + 157))
#define local_32 (*(undefined1 *)(pf_stack_frame + 158))
#define local_31 (*(undefined1 *)(pf_stack_frame + 159))
#define local_30 (*(undefined1 *)(pf_stack_frame + 160))
#define local_2f (*(undefined1 *)(pf_stack_frame + 161))
#define local_2e (*(undefined1 *)(pf_stack_frame + 162))
#define local_2d (*(undefined1 *)(pf_stack_frame + 163))
#define local_2c (*(undefined1 *)(pf_stack_frame + 164))
#define local_2b (*(undefined1 *)(pf_stack_frame + 165))
#define local_2a (*(undefined1 *)(pf_stack_frame + 166))
#define local_29 (*(undefined1 *)(pf_stack_frame + 167))
#define local_28 (*(undefined4 *)(pf_stack_frame + 168))
#define local_24 (*(undefined1 *)(pf_stack_frame + 172))
#define local_23 (*(undefined1 *)(pf_stack_frame + 173))
#define local_22 (*(undefined1 *)(pf_stack_frame + 174))
#define local_21 (*(undefined1 *)(pf_stack_frame + 175))
#define uStack_67 (*(undefined1 *)(pf_stack_frame + 105))
#define uStack_66 (*(undefined1 *)(pf_stack_frame + 106))
#define uStack_65 (*(undefined1 *)(pf_stack_frame + 107))
#define uStack_61 (*(undefined1 *)(pf_stack_frame + 111))
#define uStack_60 (*(undefined1 *)(pf_stack_frame + 112))
#define uStack_5f (*(undefined1 *)(pf_stack_frame + 113))
#define uStack_5b (*(undefined1 *)(pf_stack_frame + 117))
#define uStack_5a (*(undefined1 *)(pf_stack_frame + 118))
#define uStack_59 (*(undefined1 *)(pf_stack_frame + 119))
#define uStack_57 (*(undefined1 *)(pf_stack_frame + 121))
#define uStack_56 (*(undefined1 *)(pf_stack_frame + 122))
#define uStack_55 (*(undefined1 *)(pf_stack_frame + 123))
#define uStack_54 (*(undefined1 *)(pf_stack_frame + 124))
#define uStack_53 (*(undefined1 *)(pf_stack_frame + 125))
#define uStack_52 (*(undefined1 *)(pf_stack_frame + 126))
#define uStack_51 (*(undefined1 *)(pf_stack_frame + 127))
#define local_b4 (*(uint *)(pf_stack_frame + 28))
#define local_b0 (*(uint *)(pf_stack_frame + 32))
#define local_ac (*(uint *)(pf_stack_frame + 36))
#define local_a8 (*(uint *)(pf_stack_frame + 40))
#define local_a4 (*(uint *)(pf_stack_frame + 44))
#define local_a0 (*(byte (*)[160])(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100136d0
 */

undefined4 recovered_100136d0(int param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;

  puVar4 = *(uint **)(param_1 + 8);
  uVar1 = 0;
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  if (puVar4[1] != *(uint *)(param_1 + 0xc)) {
    return 0;
  }
  if (0x8898 < param_3) {
    return 0;
  }
  if ((*puVar4 & 0xfffffffe) != 2) {
    return 0;
  }
  puVar11 = *(uint **)(param_1 + 0x13c);
  if (*(int *)(param_1 + 0x2e8) - 2U < 2) {
    uVar10 = 0x10;
    puVar9 = *(undefined8 **)(param_1 + 0x47c);
    uVar8 = 0xf;
  }
  else {
    puVar9 = (undefined8 *)&DataAbort;
    uVar10 = 8;
    uVar8 = 7;
    iVar2 = 1;
    if (*(int *)(param_1 + 0x2e8) == 1) goto LAB_10013760;
    puVar9 = (undefined8 *)0x0;
  }
  iVar2 = 5;
LAB_10013760:
  uVar8 = uVar10 - (iVar2 + param_3 & uVar8);
  if (uVar8 < 4) {
    uVar8 = uVar8 | uVar10;
  }
  uVar10 = param_3 + uVar8 + 5;
  puVar5 = (undefined8 *)(uVar10 + (int)puVar9);
  if (puVar5 <= (undefined8 *)(0x8000 - puVar4[0x10])) {
    uVar6 = param_3 + uVar8 + 1;
    *(undefined1 *)puVar11 = 0;
    *(char *)((int)puVar11 + 3) = (char)uVar6;
    *(char *)((int)puVar11 + 2) = (char)(uVar6 >> 8);
    *(char *)((int)puVar11 + 1) = (char)(uVar6 >> 0x10);
    puVar4 = puVar11 + 1;
    *(char *)puVar4 = (char)uVar8;
    recovered_100038f0((undefined8 *)((int)puVar11 + 5),param_2,(undefined8 *)param_3);
    recovered_1000cff0((int)puVar11 + 5 + param_3,uVar8);
    if (*(int *)(param_1 + 0x2e8) - 2U < 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x148);
      local_68 = (undefined1)((uint)uVar1 >> 0x18);
      uStack_67 = (undefined1)((uint)uVar1 >> 0x10);
      uStack_66 = (undefined1)((uint)uVar1 >> 8);
      uStack_65 = (undefined1)uVar1;
      if (*(int *)(param_1 + 0x2ec) == 2) {
        recovered_100141c0((undefined1 *)(param_1 + 0x438),*(uint *)(param_1 + 0x478),(int)&local_68
                           ,(int)puVar11,uVar10,&local_b4);
      }
      else {
        recovered_10014870((undefined1 *)(param_1 + 0x438),*(uint *)(param_1 + 0x478),(int)&local_68
                           ,(int)puVar11,uVar10,&local_b4);
      }
      recovered_10014e70((byte *)(param_1 + 0x334),(char *)(param_1 + 0x428),(int)puVar11,
                         (int)puVar11,uVar10);
      recovered_100038f0((undefined8 *)((int)puVar4 + uVar6),(undefined8 *)&local_b4,puVar9);
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      local_a0[4] = 0;
      local_a0[5] = 0;
      local_a0[6] = 0;
      local_a0[7] = 0;
      local_a0[8] = 0;
      local_a0[9] = 0;
      local_a0[10] = 0;
      local_a0[0xb] = 0;
      local_a0[0xc] = 0;
      local_a0[0xd] = 0;
      local_a0[0xe] = 0;
      local_a0[0xf] = 0;
      local_a0[0x10] = 0;
      local_a0[0x11] = 0;
      local_a0[0x12] = 0;
      local_a0[0x13] = 0;
      local_8c = 0;
      local_84 = 0;
      local_7c = 0;
      local_7b = 0;
      local_7a = 0;
      local_79 = 0;
      local_78 = 0;
      local_77 = 0;
      local_76 = 0;
      local_75 = 0;
    }
    else if (*(int *)(param_1 + 0x2e8) == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x148);
      local_21 = (undefined1)uVar1;
      local_28 = 0;
      local_22 = (undefined1)((uint)uVar1 >> 8);
      local_23 = (undefined1)((uint)uVar1 >> 0x10);
      local_24 = (undefined1)((uint)uVar1 >> 0x18);
      recovered_1000d460((undefined8 *)(param_1 + 0x2f1),0,0,&local_28,(int)&local_68);
      recovered_10013c94(param_1 + 0x311,0,0,&local_28,(int)puVar11,(int)puVar11,4);
      recovered_10013c94((undefined8 *)(param_1 + 0x2f1),1,0,&local_28,(int)puVar4,(int)puVar4,uVar6
                        );
      local_b4 = CONCAT13(uStack_65,CONCAT12(uStack_66,CONCAT11(uStack_67,local_68))) & 0x3ffffff;
      local_b0 = CONCAT13(local_62,CONCAT12(local_63,CONCAT11(local_64,uStack_65))) >> 2 & 0x3ffff03
      ;
      local_ac = CONCAT13(uStack_5f,CONCAT12(uStack_60,CONCAT11(uStack_61,local_62))) >> 4 &
                 0x3ffc0ff;
      local_a8 = CONCAT13(local_5c,CONCAT12(local_5d,CONCAT11(local_5e,uStack_5f))) >> 6 & 0x3f03fff
      ;
      local_a4 = (CONCAT13(uStack_59,CONCAT12(uStack_5a,CONCAT11(uStack_5b,local_5c))) & 0xfffffff)
                 >> 8;
      recovered_10004080(local_a0,0,0x14);
      local_8c = CONCAT17(uStack_51,
                          CONCAT16(uStack_52,
                                   CONCAT15(uStack_53,
                                            CONCAT14(uStack_54,
                                                     CONCAT13(uStack_55,
                                                              CONCAT12(uStack_56,
                                                                       CONCAT11(uStack_57,local_58))
                                                             )))));
      local_84 = CONCAT17(local_49,CONCAT16(local_4a,CONCAT15(local_4b,CONCAT14(local_4c,CONCAT13(
                                                  local_4d,CONCAT12(local_4e,CONCAT11(local_4f,
                                                  local_50)))))));
      local_6c = 0;
      recovered_10013ed0(&local_b4,puVar11,uVar10);
      recovered_10013f98(&local_b4,(undefined1 *)((int)puVar4 + uVar6));
      local_68 = 0;
      uStack_67 = 0;
      uStack_66 = 0;
      uStack_65 = 0;
      local_64 = 0;
      local_63 = 0;
      local_62 = 0;
      uStack_61 = 0;
      uStack_60 = 0;
      uStack_5f = 0;
      local_5e = 0;
      local_5d = 0;
      local_5c = 0;
      uStack_5b = 0;
      uStack_5a = 0;
      uStack_59 = 0;
      local_58 = 0;
      uStack_57 = 0;
      uStack_56 = 0;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      uStack_52 = 0;
      uStack_51 = 0;
      local_50 = 0;
      local_4f = 0;
      local_4e = 0;
      local_4d = 0;
      local_4c = 0;
      local_4b = 0;
      local_4a = 0;
      local_49 = 0;
      local_48 = 0;
      local_47 = 0;
      local_46 = 0;
      local_45 = 0;
      local_44 = 0;
      local_43 = 0;
      local_42 = 0;
      local_41 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      local_3a = 0;
      local_39 = 0;
      local_38 = 0;
      local_37 = 0;
      local_36 = 0;
      local_35 = 0;
      local_34 = 0;
      local_33 = 0;
      local_32 = 0;
      local_31 = 0;
      local_30 = 0;
      local_2f = 0;
      local_2e = 0;
      local_2d = 0;
      local_2c = 0;
      local_2b = 0;
      local_2a = 0;
      local_29 = 0;
    }
    puVar4 = *(uint **)(param_1 + 8);
    uVar8 = *puVar4 & 0xfffffffe;
    uVar1 = 0;
    bVar12 = uVar8 == 2;
    if (bVar12) {
      uVar8 = (uint)*(byte *)((int)puVar4 + 0x49);
    }
    if ((bVar12 && uVar8 == 0) && (puVar5 <= (undefined8 *)(0x8000 - puVar4[0x10]))) {
      puVar7 = (undefined8 *)puVar4[0xe];
      uVar8 = puVar4[0xf] + puVar4[0x10] & 0x7fff;
      puVar3 = (undefined8 *)(0x8000 - uVar8);
      puVar9 = puVar5;
      if (puVar3 < puVar5) {
        puVar9 = puVar3;
      }
      recovered_100038f0((undefined8 *)((int)puVar7 + uVar8),(undefined8 *)puVar11,puVar9);
      if (puVar3 < puVar5) {
        recovered_100038f0(puVar7,(undefined8 *)((int)puVar11 + (int)puVar9),
                           (undefined8 *)((int)puVar5 - (int)puVar9));
      }
      iVar2 = *(int *)(param_1 + 0x148);
      puVar4[0x10] = puVar4[0x10] + (int)puVar5;
      *(int *)(param_1 + 0x148) = iVar2 + 1;
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef EXT_00000010
#undef local_8c
#undef local_84
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_77
#undef local_76
#undef local_75
#undef local_6c
#undef local_68
#undef local_64
#undef local_63
#undef local_62
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_58
#undef local_50
#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f
#undef local_3e
#undef local_3d
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_24
#undef local_23
#undef local_22
#undef local_21
#undef uStack_67
#undef uStack_66
#undef uStack_65
#undef uStack_61
#undef uStack_60
#undef uStack_5f
#undef uStack_5b
#undef uStack_5a
#undef uStack_59
#undef uStack_57
#undef uStack_56
#undef uStack_55
#undef uStack_54
#undef uStack_53
#undef uStack_52
#undef uStack_51
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0

#define local_60 (*(uint (*)[24])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c94
 */

void recovered_10013c94(undefined8 *param_1,uint param_2,int param_3,undefined4 *param_4,int param_5
                       ,int param_6,uint param_7)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

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
  uint *puVar11;
  int iVar12;
  byte *pbVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;

  if (param_7 != 0) {
    uVar19 = 0;
    do {
      recovered_1000d460(param_1,param_2,param_3,param_4,(int)local_60);
      uVar10 = param_7 - uVar19;
      uVar9 = uVar10;
      if (0x3f < uVar10) {
        uVar9 = 0x40;
      }
      if (param_7 != uVar19) {
        uVar20 = uVar9;
        if (uVar9 < 2) {
          uVar20 = 1;
        }
        bVar22 = 0xf < uVar10;
        bVar21 = uVar10 == 0x10;
        if (bVar22) {
          uVar10 = param_6 - param_5;
        }
        uVar18 = 0;
        if (bVar22) {
          bVar21 = uVar10 == 0xf;
        }
        if ((bVar22 && 0xe < uVar10) && !bVar21) {
          uVar18 = uVar20 & 0x70;
          puVar14 = (uint *)(param_5 + uVar19);
          puVar16 = (uint *)(param_6 + uVar19);
          puVar11 = local_60;
          uVar10 = uVar18;
          do {
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            uVar3 = puVar14[2];
            uVar4 = puVar14[3];
            puVar14 = puVar14 + 4;
            uVar10 = uVar10 - 0x10;
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            uVar7 = puVar11[2];
            uVar8 = puVar11[3];
            puVar11 = puVar11 + 4;
            *puVar16 = uVar5 ^ uVar1;
            puVar16[1] = uVar6 ^ uVar2;
            puVar16[2] = uVar7 ^ uVar3;
            puVar16[3] = uVar8 ^ uVar4;
            puVar16 = puVar16 + 4;
          } while (uVar10 != 0);
          if (uVar9 == uVar18) goto LAB_10013cd8;
        }
        iVar12 = uVar20 - uVar18;
        pbVar13 = (byte *)(param_5 + uVar19 + uVar18);
        pbVar15 = (byte *)((int)local_60 + uVar18);
        pbVar17 = (byte *)(param_6 + uVar19 + uVar18);
        do {
          iVar12 = iVar12 + -1;
          *pbVar17 = *pbVar15 ^ *pbVar13;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
          pbVar17 = pbVar17 + 1;
        } while (iVar12 != 0);
      }
LAB_10013cd8:
      bVar21 = 0xfffffffe < param_2;
      param_2 = param_2 + 1;
      uVar19 = uVar9 + uVar19;
      param_3 = param_3 + (uint)bVar21;
    } while (uVar19 < param_7);
  }
  return;
}

#undef local_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ed0
 */

void recovered_10013ed0(uint *param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;

  uVar1 = param_1[0x12];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(0x10 - uVar1);
    if (param_3 <= (undefined8 *)(0x10 - uVar1)) {
      puVar2 = (undefined8 *)param_3;
    }
    recovered_100038f0((undefined8 *)((int)(param_1 + 0xe) + uVar1),(undefined8 *)param_2,puVar2);
    uVar1 = param_1[0x12];
    param_1[0x12] = uVar1 + (int)puVar2;
    if (uVar1 + (int)puVar2 < 0x10) {
      return;
    }
    recovered_100156b8(param_1,param_1 + 0xe,0x10,0x1000000);
    param_2 = (uint *)((int)param_2 + (int)puVar2);
    param_3 = param_3 - (int)puVar2;
    param_1[0x12] = 0;
  }
  if ((undefined8 *)0xf < param_3) {
    recovered_100156b8(param_1,param_2,param_3 & 0xfffffff0,0x1000000);
    param_2 = (uint *)((int)param_2 + (param_3 & 0xfffffff0));
    param_3 = param_3 & 0xf;
  }
  if ((undefined8 *)param_3 != (undefined8 *)0x0) {
    recovered_100038f0((undefined8 *)(param_1 + 0xe),(undefined8 *)param_2,(undefined8 *)param_3);
    param_1[0x12] = param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f98
 */

void recovered_10013f98(uint *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;

  uVar8 = param_1[0x12];
  if (uVar8 == 0) goto LAB_10014030;
  puVar3 = param_1 + 0xe;
  *(undefined1 *)((int)puVar3 + uVar8) = 1;
  uVar1 = uVar8 + 1;
  if (uVar1 < 0x10) {
    uVar17 = 0xf - uVar8;
    if (0xf < uVar17) {
      uVar14 = uVar17 & 0xfffffff0;
      puVar9 = (undefined4 *)((int)param_1 + uVar8 + 0x39);
      uVar1 = uVar1 | uVar14;
      uVar8 = uVar14;
      do {
        *puVar9 = 0;
        puVar9[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar9[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar9[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar9 = puVar9 + 4;
        uVar8 = uVar8 - 0x10;
      } while (uVar8 != 0);
      if (uVar17 == uVar14) goto LAB_10014020;
    }
    do {
      *(undefined1 *)((int)puVar3 + uVar1) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x10);
  }
LAB_10014020:
  recovered_100156b8(param_1,puVar3,0x10,0);
LAB_10014030:
  uVar1 = param_1[7] + (param_1[6] >> 0x1a);
  uVar8 = param_1[8] + (uVar1 >> 0x1a);
  uVar19 = uVar8 & 0x3ffffff;
  uVar15 = param_1[9] + (uVar8 >> 0x1a);
  uVar8 = (uVar15 >> 0x1a) * 5 + param_1[5];
  uVar14 = uVar8 & 0x3ffffff;
  uVar4 = uVar14 + 5;
  uVar13 = (param_1[6] & 0x3ffffff) + (uVar8 >> 0x1a);
  uVar1 = uVar1 & 0x3ffffff;
  uVar18 = uVar13 + (uVar4 >> 0x1a);
  uVar12 = uVar1 + (uVar18 >> 0x1a);
  uVar6 = uVar19 + (uVar12 >> 0x1a);
  uVar16 = (uVar15 & 0x3ffffff) + (uVar6 >> 0x1a);
  uVar8 = (int)(uVar16 + 0xfc000000) >> 0x1f;
  uVar17 = 0xffffffff - uVar8 & 0x3ffffff;
  uVar10 = uVar1 & uVar8 | uVar17 & uVar12;
  uVar19 = uVar19 & uVar8 | uVar17 & uVar6;
  uVar12 = uVar10 >> 0xc | uVar19 << 0xe;
  uVar1 = uVar13 & uVar8 | uVar17 & uVar18;
  uVar18 = uVar1 >> 6 | uVar10 << 0x14;
  uVar6 = param_1[10];
  uVar10 = param_1[0xd];
  uVar13 = param_1[0xb];
  uVar1 = uVar17 & uVar4 | uVar14 & uVar8 | uVar1 << 0x1a;
  uVar17 = param_1[0xc];
  iVar2 = uVar1 + uVar6;
  *param_2 = (char)iVar2;
  bVar20 = CARRY4(uVar18,uVar13) || CARRY4(uVar18 + uVar13,(uint)CARRY4(uVar1,uVar6));
  iVar5 = uVar18 + uVar13 + (uint)CARRY4(uVar1,uVar6);
  param_2[4] = (char)iVar5;
  iVar7 = uVar12 + uVar17 + (uint)bVar20;
  param_2[8] = (char)iVar7;
  iVar11 = ((0xffffffff - uVar8 & uVar16 | uVar15 & uVar8) << 8 | uVar19 >> 0x12) + uVar10 +
           (uint)(CARRY4(uVar12,uVar17) || CARRY4(uVar12 + uVar17,(uint)bVar20));
  param_2[3] = (char)((uint)iVar2 >> 0x18);
  param_2[0xc] = (char)iVar11;
  param_2[1] = (char)((uint)iVar2 >> 8);
  param_2[7] = (char)((uint)iVar5 >> 0x18);
  param_2[6] = (char)((uint)iVar5 >> 0x10);
  param_2[5] = (char)((uint)iVar5 >> 8);
  param_2[0xb] = (char)((uint)iVar7 >> 0x18);
  param_2[10] = (char)((uint)iVar7 >> 0x10);
  param_2[9] = (char)((uint)iVar7 >> 8);
  param_2[0xf] = (char)((uint)iVar11 >> 0x18);
  param_2[0xe] = (char)((uint)iVar11 >> 0x10);
  param_2[0xd] = (char)((uint)iVar11 >> 8);
  iVar5 = 0;
  param_2[2] = (char)((uint)iVar2 >> 0x10);
  do {
    *(undefined1 *)((int)param_1 + iVar5) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x4c);
  return;
}


#undef DAT_10014240
#define DAT_10014240 (*(uint64_t *)(0x10014240U))
#undef DAT_10014248
#define DAT_10014248 (*(uint64_t *)(0x10014248U))
#undef DAT_10014250
#define DAT_10014250 (*(uint64_t *)(0x10014250U))
#undef DAT_10014258
#define DAT_10014258 (*(uint64_t *)(0x10014258U))
#undef DAT_10014260
#define DAT_10014260 (*(uint64_t *)(0x10014260U))
#undef DAT_10014268
#define DAT_10014268 (*(uint64_t *)(0x10014268U))
#undef DAT_10014270
#define DAT_10014270 (*(uint64_t *)(0x10014270U))
#undef DAT_10014278
#define DAT_10014278 (*(uint64_t *)(0x10014278U))
#undef DAT_10014830
#define DAT_10014830 (*(uint64_t *)(0x10014830U))
#undef DAT_10014838
#define DAT_10014838 (*(uint64_t *)(0x10014838U))
#undef DAT_10014840
#define DAT_10014840 (*(uint64_t *)(0x10014840U))
#undef DAT_10014848
#define DAT_10014848 (*(uint64_t *)(0x10014848U))
#undef DAT_10014850
#define DAT_10014850 (*(uint64_t *)(0x10014850U))
#undef DAT_10014858
#define DAT_10014858 (*(uint64_t *)(0x10014858U))
#undef DAT_10014860
#define DAT_10014860 (*(uint64_t *)(0x10014860U))
#undef DAT_10014868
#define DAT_10014868 (*(uint64_t *)(0x10014868U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define uStack_1b4 (*(undefined8 *)(pf_stack_frame + 156))
#define uStack_1a4 (*(undefined8 *)(pf_stack_frame + 172))
#define uStack_194 (*(undefined8 *)(pf_stack_frame + 188))
#define uStack_184 (*(undefined8 *)(pf_stack_frame + 204))
#define auStack_174 (*(undefined8 (*)[46])(pf_stack_frame + 220))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 392))
#define uStack_b8 (*(undefined8 *)(pf_stack_frame + 408))
#define auStack_a8 (*(undefined8 (*)[21])(pf_stack_frame + 424))
#define local_1bc (*(undefined8 *)(pf_stack_frame + 148))
#define local_1fc (*(undefined8 (*)[63])(pf_stack_frame + 84))
#define local_23c (*(undefined1 (*)[572])(pf_stack_frame + 20))
#define local_1ac (*(undefined8 *)(pf_stack_frame + 164))
#define local_19c (*(undefined8 *)(pf_stack_frame + 180))
#define local_18c (*(undefined8 *)(pf_stack_frame + 196))
#define local_17c (*(uint *)(pf_stack_frame + 212))
#define local_178 (*(int *)(pf_stack_frame + 216))
#define local_f4 (*(int *)(pf_stack_frame + 348))
#define local_f0 (*(undefined8 (*)[30])(pf_stack_frame + 352))
#define local_d0 (*(undefined8 *)(pf_stack_frame + 384))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 400))
#define local_b0 (*(uint *)(pf_stack_frame + 416))
#define local_ac (*(undefined4 *)(pf_stack_frame + 420))
#define local_28 (*(int *)(pf_stack_frame + 552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100141c0
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_100141c0(undefined1 *param_1,uint param_2,int param_3,int param_4,uint param_5,
                       undefined1 *param_6)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;

  if (0x80 < param_2) {
    local_f0[2] = (*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL});
    local_f0[3] = (*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL});
    local_d0 = (*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL});
    uStack_c8 = (*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL});
    local_c0 = (*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL});
    uStack_b8 = (*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL});
    local_ac = 0;
    local_f0[0] = (*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
    local_f0[1] = (*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL});
    local_28 = 0;
    local_b0 = param_2;
    do {
      puVar6 = (undefined8 *)(0x80U - local_28);
      if (param_2 < (undefined8 *)(0x80U - local_28)) {
        puVar6 = (undefined8 *)param_2;
      }
      recovered_100038f0((undefined8 *)((int)auStack_a8 + local_28),(undefined8 *)param_1,puVar6);
      local_28 = local_28 + (int)puVar6;
      if (local_28 == 0x80) {
        recovered_1000c530((uint *)local_f0,(int)auStack_a8);
        local_28 = 0;
      }
      param_2 = param_2 - (int)puVar6;
      param_1 = (undefined1 *)((int)param_1 + (int)puVar6);
    } while ((undefined8 *)param_2 != (undefined8 *)0x0);
    param_1 = local_23c;
    recovered_1000d760((undefined4 *)local_f0,param_1);
    param_2 = 0x40;
  }
  uVar1 = 0;
  do {
    bVar2 = 0x36;
    if (uVar1 < param_2) {
      bVar2 = param_1[uVar1] ^ 0x36;
    }
    *(byte *)((int)local_f0 + uVar1) = bVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x80);
  local_1ac = (*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL});
  uStack_1a4 = (*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL});
  local_19c = (*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL});
  uStack_194 = (*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL});
  local_18c = (*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL});
  uStack_184 = (*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL});
  local_17c = 0x80;
  local_1bc = (*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
  uStack_1b4 = (*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL});
  local_178 = 0;
  local_f4 = 0;
  recovered_100038f0(auStack_174,local_f0,(undefined8 *)0x80);
  iVar3 = local_f4 + 0x80;
  bVar7 = local_f4 == 0;
  local_f4 = iVar3;
  if (bVar7) {
    recovered_1000c530((uint *)&local_1bc,(int)auStack_174);
    local_f4 = 0;
  }
  puVar6 = (undefined8 *)&UndefinedInstruction;
  bVar7 = 0xfffffffb < local_17c;
  local_17c = local_17c + 4;
  local_178 = local_178 + (uint)bVar7;
  do {
    puVar4 = (undefined8 *)(0x80 - local_f4);
    if (puVar6 < (undefined8 *)(0x80 - local_f4)) {
      puVar4 = puVar6;
    }
    recovered_100038f0((undefined8 *)((int)auStack_174 + local_f4),(undefined8 *)param_3,puVar4);
    local_f4 = local_f4 + (int)puVar4;
    if (local_f4 == 0x80) {
      recovered_1000c530((uint *)&local_1bc,(int)auStack_174);
      local_f4 = 0;
    }
    puVar6 = (undefined8 *)((int)puVar6 - (int)puVar4);
    param_3 = param_3 + (int)puVar4;
  } while (puVar6 != (undefined8 *)0x0);
  bVar7 = CARRY4(local_17c,param_5);
  local_17c = local_17c + param_5;
  local_178 = local_178 + (uint)bVar7;
  for (; (undefined8 *)param_5 != (undefined8 *)0x0; param_5 = param_5 - (int)puVar6) {
    puVar6 = (undefined8 *)(0x80U - local_f4);
    if (param_5 < (undefined8 *)(0x80U - local_f4)) {
      puVar6 = (undefined8 *)param_5;
    }
    recovered_100038f0((undefined8 *)((int)auStack_174 + local_f4),(undefined8 *)param_4,puVar6);
    local_f4 = local_f4 + (int)puVar6;
    if (local_f4 == 0x80) {
      recovered_1000c530((uint *)&local_1bc,(int)auStack_174);
      local_f4 = 0;
    }
    param_4 = param_4 + (int)puVar6;
  }
  puVar6 = local_1fc;
  recovered_1000d760((undefined4 *)&local_1bc,(undefined1 *)puVar6);
  uVar1 = 0;
  do {
    bVar2 = 0x5c;
    if (uVar1 < param_2) {
      bVar2 = param_1[uVar1] ^ 0x5c;
    }
    *(byte *)((int)local_f0 + uVar1) = bVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x80);
  local_1ac = (*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL});
  uStack_1a4 = (*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL});
  local_19c = (*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL});
  uStack_194 = (*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL});
  local_17c = 0x80;
  local_178 = 0;
  local_18c = (*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL});
  uStack_184 = (*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL});
  local_1bc = (*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
  uStack_1b4 = (*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL});
  local_f4 = 0;
  recovered_100038f0(auStack_174,local_f0,(undefined8 *)0x80);
  iVar3 = local_f4 + 0x80;
  bVar7 = local_f4 == 0;
  local_f4 = iVar3;
  if (bVar7) {
    recovered_1000c530((uint *)&local_1bc,(int)auStack_174);
    local_f4 = 0;
  }
  puVar4 = (undefined8 *)0x40;
  bVar7 = 0xffffffbf < local_17c;
  local_17c = local_17c + 0x40;
  local_178 = local_178 + (uint)bVar7;
  do {
    puVar5 = (undefined8 *)(0x80U - local_f4);
    if (puVar4 < (undefined8 *)(0x80U - local_f4)) {
      puVar5 = puVar4;
    }
    recovered_100038f0((undefined8 *)((int)auStack_174 + local_f4),puVar6,puVar5);
    local_f4 = local_f4 + (int)puVar5;
    if (local_f4 == 0x80) {
      recovered_1000c530((uint *)&local_1bc,(int)auStack_174);
      local_f4 = 0;
    }
    puVar4 = (undefined8 *)((int)puVar4 - (int)puVar5);
    puVar6 = (undefined8 *)((int)puVar6 + (int)puVar5);
  } while (puVar4 != (undefined8 *)0x0);
  recovered_1000d760((undefined4 *)&local_1bc,param_6);
  iVar3 = 0;
  do {
    *(undefined1 *)((int)local_f0 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x80);
  return;
}

#undef DAT_10014240
#undef DAT_10014248
#undef DAT_10014250
#undef DAT_10014258
#undef DAT_10014260
#undef DAT_10014268
#undef DAT_10014270
#undef DAT_10014278
#undef DAT_10014830
#undef DAT_10014838
#undef DAT_10014840
#undef DAT_10014848
#undef DAT_10014850
#undef DAT_10014858
#undef DAT_10014860
#undef DAT_10014868
#undef EXT_00000004
#undef uStack_1b4
#undef uStack_1a4
#undef uStack_194
#undef uStack_184
#undef auStack_174
#undef uStack_c8
#undef uStack_b8
#undef auStack_a8
#undef local_1bc
#undef local_1fc
#undef local_23c
#undef local_1ac
#undef local_19c
#undef local_18c
#undef local_17c
#undef local_178
#undef local_f4
#undef local_f0
#undef local_d0
#undef local_c0
#undef local_b0
#undef local_ac
#undef local_28

#undef DAT_10014c10
#define DAT_10014c10 (*(uint64_t *)(0x10014c10U))
#undef DAT_10014c18
#define DAT_10014c18 (*(uint64_t *)(0x10014c18U))
#undef DAT_10014c20
#define DAT_10014c20 (*(uint64_t *)(0x10014c20U))
#undef DAT_10014c28
#define DAT_10014c28 (*(uint64_t *)(0x10014c28U))
#undef DAT_10014e50
#define DAT_10014e50 (*(uint64_t *)(0x10014e50U))
#undef DAT_10014e58
#define DAT_10014e58 (*(uint64_t *)(0x10014e58U))
#undef DAT_10014e60
#define DAT_10014e60 (*(uint64_t *)(0x10014e60U))
#undef DAT_10014e68
#define DAT_10014e68 (*(uint64_t *)(0x10014e68U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 168))
#define local_110 (*(uint (*)[68])(pf_stack_frame + 16))
#define local_90 (*(undefined8 *)(pf_stack_frame + 144))
#define local_d0 (*(byte (*)[208])(pf_stack_frame + 80))
#define local_f0 (*(uint (*)[60])(pf_stack_frame + 48))
#define auStack_68 (*(undefined8 (*)[13])(pf_stack_frame + 184))
#define local_80 (*(undefined8 *)(pf_stack_frame + 160))
#define local_70 (*(uint *)(pf_stack_frame + 176))
#define local_6c (*(int *)(pf_stack_frame + 180))
#define local_28 (*(int *)(pf_stack_frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014870
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_10014870(undefined1 *param_1,uint param_2,int param_3,int param_4,uint param_5,
                       uint *param_6)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  bool bVar7;

  if (0x40 < param_2) {
    local_80 = (*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
    uStack_78 = (*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
    local_6c = 0;
    local_90 = (*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
    uStack_88 = (*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
    local_28 = 0;
    local_70 = param_2;
    do {
      puVar6 = (undefined8 *)(0x40U - local_28);
      if (param_2 < (undefined8 *)(0x40U - local_28)) {
        puVar6 = (undefined8 *)param_2;
      }
      recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)param_1,puVar6);
      local_28 = local_28 + (int)puVar6;
      if (local_28 == 0x40) {
        recovered_10010ee4((uint *)&local_90,(int)auStack_68);
        local_28 = 0;
      }
      param_2 = param_2 - (int)puVar6;
      param_1 = (undefined1 *)((int)param_1 + (int)puVar6);
    } while ((undefined8 *)param_2 != (undefined8 *)0x0);
    param_1 = (undefined1 *)local_110;
    recovered_1000dcc0((uint *)&local_90,(uint *)param_1);
    param_2 = 0x20;
  }
  uVar1 = 0;
  do {
    bVar3 = 0x36;
    if (uVar1 < param_2) {
      bVar3 = *(byte *)((int)param_1 + uVar1) ^ 0x36;
    }
    local_d0[uVar1] = bVar3;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x40);
  local_80 = (*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
  uStack_78 = (*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
  local_70 = 0x40;
  local_90 = (*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
  uStack_88 = (*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
  local_6c = 0;
  local_28 = 0;
  recovered_100038f0(auStack_68,(undefined8 *)local_d0,(undefined8 *)0x40);
  bVar7 = local_28 == 0;
  local_28 = local_28 + 0x40;
  if (bVar7) {
    recovered_10010ee4((uint *)&local_90,(int)auStack_68);
    local_28 = 0;
  }
  puVar6 = (undefined8 *)&UndefinedInstruction;
  bVar7 = 0xfffffffb < local_70;
  local_70 = local_70 + 4;
  local_6c = local_6c + (uint)bVar7;
  do {
    puVar4 = (undefined8 *)(0x40 - local_28);
    if (puVar6 < (undefined8 *)(0x40 - local_28)) {
      puVar4 = puVar6;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)param_3,puVar4);
    local_28 = local_28 + (int)puVar4;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar6 = (undefined8 *)((int)puVar6 - (int)puVar4);
    param_3 = param_3 + (int)puVar4;
  } while (puVar6 != (undefined8 *)0x0);
  bVar7 = CARRY4(local_70,param_5);
  local_70 = local_70 + param_5;
  local_6c = local_6c + (uint)bVar7;
  if (param_5 != 0) {
    do {
      puVar6 = (undefined8 *)(0x40U - local_28);
      if (param_5 < (undefined8 *)(0x40U - local_28)) {
        puVar6 = (undefined8 *)param_5;
      }
      recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)param_4,puVar6);
      local_28 = local_28 + (int)puVar6;
      if (local_28 == 0x40) {
        recovered_10010ee4((uint *)&local_90,(int)auStack_68);
        local_28 = 0;
      }
      param_5 = param_5 - (int)puVar6;
      param_4 = param_4 + (int)puVar6;
    } while ((undefined8 *)param_5 != (undefined8 *)0x0);
  }
  puVar5 = local_f0;
  recovered_1000dcc0((uint *)&local_90,puVar5);
  uVar1 = 0;
  do {
    bVar3 = 0x5c;
    if (uVar1 < param_2) {
      bVar3 = *(byte *)((int)param_1 + uVar1) ^ 0x5c;
    }
    local_d0[uVar1] = bVar3;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x40);
  local_70 = 0x40;
  local_6c = 0;
  local_80 = (*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
  uStack_78 = (*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
  local_90 = (*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
  uStack_88 = (*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
  local_28 = 0;
  recovered_100038f0(auStack_68,(undefined8 *)local_d0,(undefined8 *)0x40);
  iVar2 = local_28 + 0x40;
  bVar7 = local_28 == 0;
  local_28 = iVar2;
  if (bVar7) {
    recovered_10010ee4((uint *)&local_90,(int)auStack_68);
    local_28 = 0;
  }
  puVar6 = (undefined8 *)0x20;
  bVar7 = 0xffffffdf < local_70;
  local_70 = local_70 + 0x20;
  local_6c = local_6c + (uint)bVar7;
  do {
    puVar4 = (undefined8 *)(0x40U - local_28);
    if (puVar6 < (undefined8 *)(0x40U - local_28)) {
      puVar4 = puVar6;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)puVar5,puVar4);
    local_28 = local_28 + (int)puVar4;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar6 = (undefined8 *)((int)puVar6 - (int)puVar4);
    puVar5 = (uint *)((int)puVar5 + (int)puVar4);
  } while (puVar6 != (undefined8 *)0x0);
  recovered_1000dcc0((uint *)&local_90,param_6);
  return;
}

#undef DAT_10014c10
#undef DAT_10014c18
#undef DAT_10014c20
#undef DAT_10014c28
#undef DAT_10014e50
#undef DAT_10014e58
#undef DAT_10014e60
#undef DAT_10014e68
#undef EXT_00000004
#undef uStack_88
#undef uStack_78
#undef local_110
#undef local_90
#undef local_d0
#undef local_f0
#undef auStack_68
#undef local_80
#undef local_70
#undef local_6c
#undef local_28

#undef DAT_1001fd38
#define DAT_1001fd38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1160U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(uint *)(pf_stack_frame + 28))
#define local_60 (*(uint *)(pf_stack_frame + 32))
#define local_5c (*(uint *)(pf_stack_frame + 36))
#define local_58 (*(uint *)(pf_stack_frame + 40))
#define local_54 (*(uint *)(pf_stack_frame + 44))
#define local_50 (*(uint *)(pf_stack_frame + 48))
#define local_4c (*(uint *)(pf_stack_frame + 52))
#define local_48 (*(uint *)(pf_stack_frame + 56))
#define local_44 (*(uint *)(pf_stack_frame + 60))
#define local_40 (*(uint *)(pf_stack_frame + 64))
#define local_3c (*(uint *)(pf_stack_frame + 68))
#define local_38 (*(uint *)(pf_stack_frame + 72))
#define local_34 (*(uint *)(pf_stack_frame + 76))
#define local_30 (*(undefined4 *)(pf_stack_frame + 80))
#define local_28 (*(undefined4 *)(pf_stack_frame + 88))
#define local_24 (*(undefined4 *)(pf_stack_frame + 92))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e70
 */

void recovered_10014e70(byte *param_1,char *param_2,int param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  byte *pbVar24;
  uint uVar25;
  byte *pbVar26;
  uint uVar27;
  byte *pbVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  bool bVar37;

  if (param_5 != 0) {
    uVar29 = 0;
    do {
      recovered_100038f0((undefined8 *)&local_30,(undefined8 *)param_2,(undefined8 *)&DataAbort);
      PF_PART1(local_30, 0) = (byte)local_30 ^ *param_1;
      PF_PART1(local_30, 1) = PF_PART1(local_30, 1) ^ param_1[1];
      PF_PART1(local_30, 2) = PF_PART1(local_30, 2) ^ param_1[2];
      PF_PART1(local_30, 3) = PF_PART1(local_30, 3) ^ param_1[3];
      PF_PART1(uStack_2c, 0) = (byte)uStack_2c ^ param_1[4];
      PF_PART1(uStack_2c, 1) = PF_PART1(uStack_2c, 1) ^ param_1[5];
      PF_PART1(uStack_2c, 2) = PF_PART1(uStack_2c, 2) ^ param_1[6];
      PF_PART1(uStack_2c, 3) = PF_PART1(uStack_2c, 3) ^ param_1[7];
      PF_PART1(local_28, 0) = (byte)local_28 ^ param_1[8];
      PF_PART1(local_28, 1) = PF_PART1(local_28, 1) ^ param_1[9];
      PF_PART1(local_28, 2) = PF_PART1(local_28, 2) ^ param_1[10];
      PF_PART1(local_28, 3) = PF_PART1(local_28, 3) ^ param_1[0xb];
      PF_PART1(local_24, 0) = (byte)local_24 ^ param_1[0xc];
      PF_PART1(local_24, 1) = PF_PART1(local_24, 1) ^ param_1[0xd];
      PF_PART1(local_24, 2) = PF_PART1(local_24, 2) ^ param_1[0xe];
      PF_PART1(local_24, 3) = PF_PART1(local_24, 3) ^ param_1[0xf];
      uVar31 = *(uint *)(param_1 + 0xf0);
      uVar19 = param_5 - uVar29;
      uVar33 = 0x10;
      if (uVar19 < 0x10) {
        uVar33 = uVar19;
      }
      if (uVar31 != 0) {
        local_38 = (uint)PF_PART1(local_30, 3);
        local_64 = (uint)PF_PART1(local_28, 1);
        local_50 = (uint)(byte)local_30;
        local_4c = (uint)PF_PART1(local_30, 1);
        iVar32 = 0;
        local_48 = (uint)PF_PART1(local_30, 2);
        uVar34 = (uint)PF_PART1(uStack_2c, 2);
        local_3c = (uint)(byte)local_28;
        uVar35 = (uint)PF_PART1(local_28, 3);
        uVar30 = (uint)(byte)local_24;
        local_54 = (uint)PF_PART1(local_24, 1);
        local_44 = (uint)(byte)uStack_2c;
        local_5c = (uint)PF_PART1(local_28, 2);
        local_58 = (uint)PF_PART1(uStack_2c, 1);
        local_68 = (uint)PF_PART1(local_24, 2);
        uVar20 = (uint)PF_PART1(uStack_2c, 3);
        local_60 = (uint)PF_PART1(local_24, 3);
        do {
          bVar1 = (&DAT_1001fd38)[uVar20 & 0xff];
          bVar2 = (&DAT_1001fd38)[uVar35 & 0xff];
          bVar3 = (&DAT_1001fd38)[local_48 & 0xff];
          uVar21 = (uint)bVar3;
          bVar4 = (&DAT_1001fd38)[uVar34 & 0xff];
          uVar25 = (uint)bVar4;
          bVar5 = (&DAT_1001fd38)[local_54 & 0xff];
          local_34 = (uint)bVar5;
          bVar6 = (&DAT_1001fd38)[local_4c & 0xff];
          local_54 = (uint)bVar6;
          bVar7 = (&DAT_1001fd38)[local_3c & 0xff];
          local_3c = (uint)bVar7;
          bVar8 = (&DAT_1001fd38)[uVar30 & 0xff];
          uVar30 = (uint)bVar8;
          bVar9 = (&DAT_1001fd38)[local_38 & 0xff];
          bVar10 = (&DAT_1001fd38)[local_68 & 0xff];
          uVar34 = (uint)bVar10;
          bVar11 = (&DAT_1001fd38)[local_64 & 0xff];
          local_38 = (uint)bVar11;
          bVar12 = (&DAT_1001fd38)[local_44 & 0xff];
          local_44 = (uint)bVar12;
          bVar13 = (&DAT_1001fd38)[local_60 & 0xff];
          bVar14 = (&DAT_1001fd38)[local_5c & 0xff];
          local_48 = (uint)bVar14;
          bVar15 = (&DAT_1001fd38)[local_58 & 0xff];
          local_4c = (uint)bVar15;
          bVar16 = (&DAT_1001fd38)[local_50 & 0xff];
          local_50 = (uint)bVar16;
          if (uVar31 - 1 == iVar32) {
            local_60 = (uint)bVar2;
            uVar20 = (uint)bVar9;
            uVar35 = (uint)bVar1;
            local_40 = (uint)bVar13;
          }
          else {
            bVar17 = bVar6 ^ bVar8;
            local_60 = (uint)(int)(char)(bVar2 ^ bVar8) >> 7 & 0x1b ^ (uint)(bVar2 ^ bVar8) << 1 ^
                       (uint)(bVar4 ^ bVar17);
            bVar8 = bVar5 ^ bVar7;
            uVar35 = (uint)(int)(char)(bVar1 ^ bVar7) >> 7 & 0x1b ^ (uint)(bVar1 ^ bVar7) << 1 ^
                     (uint)(bVar3 ^ bVar8);
            bVar7 = bVar11 ^ bVar12;
            uVar20 = (uint)(int)(char)(bVar9 ^ bVar12) >> 7 & 0x1b ^ (uint)(bVar9 ^ bVar12) << 1 ^
                     (uint)(bVar10 ^ bVar7);
            bVar12 = bVar15 ^ bVar16;
            local_40 = (uint)(int)(char)(bVar13 ^ bVar16) >> 7 & 0x1b ^ (uint)(bVar13 ^ bVar16) << 1
                       ^ (uint)(bVar14 ^ bVar12);
            uVar25 = (uint)(int)(char)(bVar2 ^ bVar4) >> 7 & 0x1b ^ (uint)(bVar2 ^ bVar4) << 1 ^
                     (uint)bVar17 ^ (uint)bVar2;
            uVar34 = (uint)(byte)(bVar4 ^ bVar17 ^ bVar2);
            local_54 = (uint)(int)(char)(bVar4 ^ bVar6) >> 7 & 0x1b ^ (uint)(bVar4 ^ bVar6) << 1 ^
                       local_54 ^ uVar34;
            uVar30 = (uint)(int)(char)bVar17 >> 7 & 0x1b ^ (uint)bVar17 << 1 ^ uVar30 ^ uVar34;
            uVar21 = (uint)(int)(char)(bVar1 ^ bVar3) >> 7 & 0x1b ^ (uint)(bVar1 ^ bVar3) << 1 ^
                     (uint)bVar8 ^ (uint)bVar1;
            uVar34 = (uint)(byte)(bVar3 ^ bVar8 ^ bVar1);
            local_34 = (uint)(int)(char)(bVar3 ^ bVar5) >> 7 & 0x1b ^ (uint)(bVar3 ^ bVar5) << 1 ^
                       local_34 ^ uVar34;
            local_3c = (uint)(int)(char)bVar8 >> 7 & 0x1b ^ (uint)bVar8 << 1 ^ local_3c ^ uVar34;
            uVar34 = (uint)(int)(char)(bVar9 ^ bVar10) >> 7 & 0x1b ^ (uint)(bVar9 ^ bVar10) << 1 ^
                     (uint)bVar7 ^ (uint)bVar9;
            uVar27 = (uint)(byte)(bVar10 ^ bVar7 ^ bVar9);
            local_38 = (uint)(int)(char)(bVar10 ^ bVar11) >> 7 & 0x1b ^ (uint)(bVar10 ^ bVar11) << 1
                       ^ local_38 ^ uVar27;
            local_44 = (uint)(int)(char)bVar7 >> 7 & 0x1b ^ (uint)bVar7 << 1 ^ local_44 ^ uVar27;
            local_48 = (uint)(int)(char)(bVar13 ^ bVar14) >> 7 & 0x1b ^ (uint)(bVar13 ^ bVar14) << 1
                       ^ (uint)bVar12 ^ (uint)bVar13;
            uVar27 = (uint)(byte)(bVar14 ^ bVar12 ^ bVar13);
            local_4c = (uint)(int)(char)(bVar14 ^ bVar15) >> 7 & 0x1b ^ (uint)(bVar14 ^ bVar15) << 1
                       ^ local_4c ^ uVar27;
            local_50 = (uint)(int)(char)bVar12 >> 7 & 0x1b ^ (uint)bVar12 << 1 ^ local_50 ^ uVar27;
          }
          local_60 = param_1[iVar32 * 0x10 + 0x1f] ^ local_60;
          local_68 = param_1[iVar32 * 0x10 + 0x1e] ^ uVar25;
          uVar35 = param_1[iVar32 * 0x10 + 0x1b] ^ uVar35;
          local_5c = param_1[iVar32 * 0x10 + 0x1a] ^ uVar21;
          local_54 = param_1[iVar32 * 0x10 + 0x1d] ^ local_54;
          uVar30 = param_1[iVar32 * 0x10 + 0x1c] ^ uVar30;
          local_64 = param_1[iVar32 * 0x10 + 0x19] ^ local_34;
          iVar18 = iVar32 * 0x10;
          local_3c = param_1[iVar32 * 0x10 + 0x18] ^ local_3c;
          uVar34 = param_1[iVar32 * 0x10 + 0x16] ^ uVar34;
          uVar20 = param_1[iVar32 * 0x10 + 0x17] ^ uVar20;
          local_58 = param_1[iVar32 * 0x10 + 0x15] ^ local_38;
          local_44 = param_1[iVar32 * 0x10 + 0x14] ^ local_44;
          local_38 = param_1[iVar32 * 0x10 + 0x13] ^ local_40;
          uVar25 = iVar32 + 2;
          local_48 = param_1[iVar32 * 0x10 + 0x12] ^ local_48;
          local_50 = param_1[iVar32 * 0x10 + 0x10] ^ local_50;
          iVar32 = iVar32 + 1;
          local_4c = param_1[iVar18 + 0x11] ^ local_4c;
        } while (uVar25 <= uVar31);
        PF_PART1(uStack_2c, 3) = (byte)uVar20;
        PF_PART3(uStack_2c, 0) = CONCAT12((char)uVar34,CONCAT11((char)local_58,(char)local_44));
        PF_PART1(local_24, 3) = (byte)local_60;
        PF_PART2(local_24, 0) = CONCAT11((char)local_54,(char)uVar30);
        local_24 = CONCAT22(CONCAT11(PF_PART1(local_24, 3),(char)local_68),(undefined2)local_24);
        local_28 = (local_5c & 0xff) << 0x10;
        local_28 = CONCAT13((char)uVar35,(undefined3)local_28);
        local_28 = CONCAT31(CONCAT21(PF_PART2(local_28, 2),(char)local_64),(char)local_3c);
        local_30 = CONCAT31(CONCAT21(CONCAT11((char)local_38,(char)local_48),(char)local_4c),
                            (char)local_50);
      }
      if (param_5 != uVar29) {
        uVar31 = uVar33;
        if (uVar33 < 2) {
          uVar31 = 1;
        }
        bVar37 = 0xf < uVar19;
        bVar36 = uVar19 == 0x10;
        if (bVar37) {
          uVar19 = param_4 - param_3;
        }
        uVar20 = 0;
        if (bVar37) {
          bVar36 = uVar19 == 0xf;
        }
        if ((bVar37 && 0xe < uVar19) && !bVar36) {
          uVar20 = uVar31 & 0x10;
          puVar22 = (uint *)(param_3 + uVar29);
          uVar19 = puVar22[1];
          uVar35 = puVar22[2];
          uVar30 = puVar22[3];
          puVar23 = (uint *)(param_4 + uVar29);
          *puVar23 = local_30 ^ *puVar22;
          puVar23[1] = uStack_2c ^ uVar19;
          puVar23[2] = local_28 ^ uVar35;
          puVar23[3] = local_24 ^ uVar30;
          if (uVar31 == uVar20) goto LAB_100154f4;
        }
        iVar32 = uVar31 - uVar20;
        pbVar24 = (byte *)((int)&local_30 + uVar20);
        pbVar26 = (byte *)(param_3 + uVar20 + uVar29);
        pbVar28 = (byte *)(param_4 + uVar20 + uVar29);
        do {
          iVar32 = iVar32 + -1;
          *pbVar28 = *pbVar24 ^ *pbVar26;
          pbVar24 = pbVar24 + 1;
          pbVar26 = pbVar26 + 1;
          pbVar28 = pbVar28 + 1;
        } while (iVar32 != 0);
      }
LAB_100154f4:
      uVar19 = (byte)param_2[0xf] + 1;
      param_2[0xf] = (char)uVar19;
      if ((uVar19 & 0xff) != uVar19) {
        uVar19 = (byte)param_2[0xe] + 1;
        param_2[0xe] = (char)uVar19;
        if ((uVar19 & 0xff) != uVar19) {
          uVar19 = (byte)param_2[0xd] + 1;
          param_2[0xd] = (char)uVar19;
          if ((uVar19 & 0xff) != uVar19) {
            uVar19 = (byte)param_2[0xc] + 1;
            param_2[0xc] = (char)uVar19;
            if ((uVar19 & 0xff) != uVar19) {
              uVar19 = (byte)param_2[0xb] + 1;
              param_2[0xb] = (char)uVar19;
              if ((uVar19 & 0xff) != uVar19) {
                uVar19 = (byte)param_2[10] + 1;
                param_2[10] = (char)uVar19;
                if ((uVar19 & 0xff) != uVar19) {
                  uVar19 = (byte)param_2[9] + 1;
                  param_2[9] = (char)uVar19;
                  if ((uVar19 & 0xff) != uVar19) {
                    uVar19 = (byte)param_2[8] + 1;
                    param_2[8] = (char)uVar19;
                    if ((uVar19 & 0xff) != uVar19) {
                      uVar19 = (byte)param_2[7] + 1;
                      param_2[7] = (char)uVar19;
                      if ((uVar19 & 0xff) != uVar19) {
                        uVar19 = (byte)param_2[6] + 1;
                        param_2[6] = (char)uVar19;
                        if ((uVar19 & 0xff) != uVar19) {
                          uVar19 = (byte)param_2[5] + 1;
                          param_2[5] = (char)uVar19;
                          if ((uVar19 & 0xff) != uVar19) {
                            uVar19 = (byte)param_2[4] + 1;
                            param_2[4] = (char)uVar19;
                            if ((uVar19 & 0xff) != uVar19) {
                              uVar19 = (byte)param_2[3] + 1;
                              param_2[3] = (char)uVar19;
                              if ((uVar19 & 0xff) != uVar19) {
                                uVar19 = (byte)param_2[2] + 1;
                                param_2[2] = (char)uVar19;
                                if ((uVar19 & 0xff) != uVar19) {
                                  uVar19 = (byte)param_2[1] + 1;
                                  param_2[1] = (char)uVar19;
                                  if ((uVar19 & 0xff) != uVar19) {
                                    *param_2 = *param_2 + '\x01';
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
        }
      }
      uVar29 = uVar33 + uVar29;
    } while (uVar29 < param_5);
  }
  return;
}

#undef DAT_1001fd38
#undef EXT_00000010
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef uStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100156b8
 */

void recovered_100156b8(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  longlong lVar3;
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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;

  uVar15 = param_1[5];
  uVar5 = param_1[6];
  uVar11 = param_1[7];
  uVar14 = param_1[8];
  uVar16 = param_1[9];
  if (0xf < param_3) {
    uVar9 = *param_1;
    uVar10 = param_1[1];
    uVar8 = param_1[2];
    uVar12 = param_1[3];
    uVar1 = uVar12 * 5;
    uVar2 = param_1[4] * 5;
    do {
      uVar15 = (*param_2 & 0x3ffffff) + uVar15;
      uVar5 = ((*(uint *)((int)param_2 + 3) & 0xfffffff) >> 2) + uVar5;
      uVar11 = ((*(uint *)((int)param_2 + 6) & 0x3fffffff) >> 4) + uVar11;
      uVar13 = uVar14 + (*(uint *)((int)param_2 + 9) >> 6);
      uVar16 = (param_4 | param_2[3] >> 8) + uVar16;
      lVar3 = (ulonglong)(uVar8 * 5) * (ulonglong)uVar13 +
              (ulonglong)uVar2 * (ulonglong)uVar5 + (ulonglong)uVar9 * (ulonglong)uVar15 +
              (ulonglong)uVar1 * (ulonglong)uVar11 + (ulonglong)(uVar10 * 5) * (ulonglong)uVar16;
      uVar6 = (uint)lVar3;
      lVar3 = (ulonglong)uVar1 * (ulonglong)uVar13 +
              (ulonglong)uVar9 * (ulonglong)uVar5 + (ulonglong)uVar10 * (ulonglong)uVar15 +
              (ulonglong)uVar2 * (ulonglong)uVar11 + (ulonglong)(uVar8 * 5) * (ulonglong)uVar16 +
              (ulonglong)(uVar6 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar7 = (uint)lVar3;
      lVar3 = (ulonglong)uVar1 * (ulonglong)uVar16 +
              (ulonglong)uVar2 * (ulonglong)uVar13 +
              (ulonglong)uVar10 * (ulonglong)uVar5 + (ulonglong)uVar8 * (ulonglong)uVar15 +
              (ulonglong)uVar9 * (ulonglong)uVar11 +
              (ulonglong)(uVar7 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar4 = (uint)lVar3;
      lVar3 = (ulonglong)uVar2 * (ulonglong)uVar16 +
              (ulonglong)uVar9 * (ulonglong)uVar13 +
              (ulonglong)uVar8 * (ulonglong)uVar5 + (ulonglong)uVar12 * (ulonglong)uVar15 +
              (ulonglong)uVar10 * (ulonglong)uVar11 +
              (ulonglong)(uVar4 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar17 = (uint)lVar3;
      uVar14 = uVar17 & 0x3ffffff;
      param_3 = param_3 - 0x10;
      lVar3 = (ulonglong)uVar9 * (ulonglong)uVar16 +
              (ulonglong)uVar10 * (ulonglong)uVar13 +
              (ulonglong)uVar12 * (ulonglong)uVar5 + (ulonglong)param_1[4] * (ulonglong)uVar15 +
              (ulonglong)uVar8 * (ulonglong)uVar11 +
              (ulonglong)(uVar17 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40);
      uVar16 = (uint)lVar3;
      uVar5 = (uVar16 >> 0x1a | (int)((ulonglong)lVar3 >> 0x20) * 0x40) * 5 + (uVar6 & 0x3ffffff);
      uVar15 = uVar5 & 0x3ffffff;
      uVar5 = (uVar7 & 0x3ffffff) + (uVar5 >> 0x1a);
      uVar16 = uVar16 & 0x3ffffff;
      param_2 = param_2 + 4;
      uVar11 = uVar4 & 0x3ffffff;
    } while (0xf < param_3);
  }
  param_1[9] = uVar16;
  param_1[8] = uVar14;
  param_1[7] = uVar11;
  param_1[6] = uVar5;
  param_1[5] = uVar15;
  return;
}


#undef DAT_10015f84
#define DAT_10015f84 (*(uint32_t *)(0x10015f84U))
#undef DAT_10017f10
#define DAT_10017f10 (*(uint8_t *)(0x10017f10U))
#undef DAT_10017f18
#define DAT_10017f18 (*(uint8_t *)(0x10017f18U))
#undef DAT_10017f20
#define DAT_10017f20 (*(uint8_t *)(0x10017f20U))
#undef DAT_10017f28
#define DAT_10017f28 (*(uint8_t *)(0x10017f28U))
#undef DAT_10018790
#define DAT_10018790 (*(uint8_t *)(0x10018790U))
#undef DAT_10018798
#define DAT_10018798 (*(uint8_t *)(0x10018798U))
#undef DAT_100187a0
#define DAT_100187a0 (*(uint8_t *)(0x100187a0U))
#undef DAT_100187a8
#define DAT_100187a8 (*(uint8_t *)(0x100187a8U))
#undef DAT_100187b0
#define DAT_100187b0 (*(uint8_t *)(0x100187b0U))
#undef DAT_100187b8
#define DAT_100187b8 (*(uint8_t *)(0x100187b8U))
#undef DAT_100187c0
#define DAT_100187c0 (*(uint8_t *)(0x100187c0U))
#undef DAT_100187c8
#define DAT_100187c8 (*(uint8_t *)(0x100187c8U))
#undef DAT_1001fe38
#define DAT_1001fe38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1260U)))
#undef DAT_10024f0c
#define DAT_10024f0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6334U)))
#undef DAT_10024f2c
#define DAT_10024f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6354U)))
#undef DAT_10024f4c
#define DAT_10024f4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6374U)))
#undef DAT_10024f80
#define DAT_10024f80 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x63a8U)))
#undef DAT_100250cc
#define DAT_100250cc (*(uint *)(((uintptr_t)pf_module_state + 0x64f4U)))
#undef DAT_100250d0
#define DAT_100250d0 (*(uint *)(((uintptr_t)pf_module_state + 0x64f8U)))
#undef DAT_100250d8
#define DAT_100250d8 (*(uint *)(((uintptr_t)pf_module_state + 0x6500U)))
#undef DAT_100250dc
#define DAT_100250dc (*(int *)(((uintptr_t)pf_module_state + 0x6504U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#undef str_1001f289
#define str_1001f289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b1U)))
#undef str_1001f29b
#define str_1001f29b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c3U)))
#undef str_1001f2b4
#define str_1001f2b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dcU)))
#undef str_1001f2d1
#define str_1001f2d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f9U)))
#undef str_1001f2dd
#define str_1001f2dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x705U)))
#undef str_1001f2f5
#define str_1001f2f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71dU)))
#undef str_1001f319
#define str_1001f319 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x741U)))
#undef str_1001f326
#define str_1001f326 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74eU)))
#undef str_1001f336
#define str_1001f336 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75eU)))
#undef str_1001f359
#define str_1001f359 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x781U)))
#undef str_1001f37c
#define str_1001f37c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a4U)))
#undef str_1001f38e
#define str_1001f38e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b6U)))
#undef str_1001f3a0
#define str_1001f3a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c8U)))
#undef str_1001f3b2
#define str_1001f3b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7daU)))
#undef str_1001f3cf
#define str_1001f3cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f7U)))
#undef str_1001f3ff
#define str_1001f3ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x827U)))
#undef str_1001f42c
#define str_1001f42c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x854U)))
#undef str_1001f43f
#define str_1001f43f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x867U)))
#undef str_1001f44f
#define str_1001f44f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x877U)))
#undef str_1001f4bb
#define str_1001f4bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e3U)))
#undef str_1001f4ce
#define str_1001f4ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f6U)))
#undef str_1001f4f1
#define str_1001f4f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x919U)))
#undef str_1001f50a
#define str_1001f50a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x932U)))
#undef str_1001f523
#define str_1001f523 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94bU)))
#undef str_1001f546
#define str_1001f546 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96eU)))
#undef str_1001f55f
#define str_1001f55f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x987U)))
#undef str_1001f9ee
#define str_1001f9ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe16U)))
#define local_473 (*(undefined1 *)(pf_stack_frame + 1613))
#define uStack_318 (*(undefined4 *)(pf_stack_frame + 1960))
#define local_472 (*(undefined1 *)(pf_stack_frame + 1614))
#define uStack_314 (*(undefined4 *)(pf_stack_frame + 1964))
#define local_471 (*(undefined1 *)(pf_stack_frame + 1615))
#define local_470 (*(undefined8 *)(pf_stack_frame + 1616))
#define uStack_30c (*(undefined4 *)(pf_stack_frame + 1972))
#define local_468 (*(undefined4 *)(pf_stack_frame + 1624))
#define uStack_308 (*(undefined4 *)(pf_stack_frame + 1976))
#define local_460 (*(undefined8 *)(pf_stack_frame + 1632))
#define uStack_304 (*(undefined4 *)(pf_stack_frame + 1980))
#define local_450 (*(undefined8 *)(pf_stack_frame + 1648))
#define local_440 (*(undefined8 *)(pf_stack_frame + 1664))
#define uStack_2fc (*(undefined4 *)(pf_stack_frame + 1988))
#define local_430 (*(undefined8 *)(pf_stack_frame + 1680))
#define uStack_2f8 (*(undefined4 *)(pf_stack_frame + 1992))
#define local_420 (*(undefined8 *)(pf_stack_frame + 1696))
#define uStack_2f4 (*(undefined4 *)(pf_stack_frame + 1996))
#define local_410 (*(undefined8 *)(pf_stack_frame + 1712))
#define local_400 (*(undefined8 *)(pf_stack_frame + 1728))
#define uStack_2ec (*(undefined4 *)(pf_stack_frame + 2004))
#define local_3f0 (*(undefined8 *)(pf_stack_frame + 1744))
#define uStack_2e8 (*(undefined4 *)(pf_stack_frame + 2008))
#define local_3e0 (*(undefined8 *)(pf_stack_frame + 1760))
#define uStack_2e4 (*(undefined4 *)(pf_stack_frame + 2012))
#define local_3d0 (*(undefined8 *)(pf_stack_frame + 1776))
#define local_3c0 (*(undefined8 *)(pf_stack_frame + 1792))
#define uStack_2dc (*(undefined4 *)(pf_stack_frame + 2020))
#define local_3b0 (*(undefined4 *)(pf_stack_frame + 1808))
#define uStack_2d8 (*(undefined4 *)(pf_stack_frame + 2024))
#define local_3a0 (*(undefined4 *)(pf_stack_frame + 1824))
#define uStack_2d4 (*(undefined4 *)(pf_stack_frame + 2028))
#define local_390 (*(undefined4 *)(pf_stack_frame + 1840))
#define local_380 (*(undefined4 *)(pf_stack_frame + 1856))
#define uStack_2cc (*(undefined4 *)(pf_stack_frame + 2036))
#define local_370 (*(undefined4 *)(pf_stack_frame + 1872))
#define uStack_2c8 (*(undefined4 *)(pf_stack_frame + 2040))
#define local_360 (*(undefined4 *)(pf_stack_frame + 1888))
#define uStack_2c4 (*(undefined4 *)(pf_stack_frame + 2044))
#define local_350 (*(undefined4 *)(pf_stack_frame + 1904))
#define local_340 (*(undefined4 *)(pf_stack_frame + 1920))
#define uStack_2bc (*(undefined4 *)(pf_stack_frame + 2052))
#define local_330 (*(undefined4 *)(pf_stack_frame + 1936))
#define uStack_2b8 (*(undefined4 *)(pf_stack_frame + 2056))
#define local_320 (*(undefined4 *)(pf_stack_frame + 1952))
#define uStack_2b4 (*(undefined4 *)(pf_stack_frame + 2060))
#define local_310 (*(undefined4 *)(pf_stack_frame + 1968))
#define local_300 (*(undefined4 *)(pf_stack_frame + 1984))
#define local_2f0 (*(undefined4 *)(pf_stack_frame + 2000))
#define local_2e0 (*(undefined4 *)(pf_stack_frame + 2016))
#define local_2d0 (*(undefined4 *)(pf_stack_frame + 2032))
#define local_2c0 (*(undefined4 *)(pf_stack_frame + 2048))
#define local_2b0 (*(undefined2 *)(pf_stack_frame + 2064))
#define uStack_2a5 (*(undefined1 *)(pf_stack_frame + 2075))
#define local_2ae (*(undefined2 *)(pf_stack_frame + 2066))
#define local_2ac (*(undefined2 *)(pf_stack_frame + 2068))
#define local_2aa (*(undefined2 *)(pf_stack_frame + 2070))
#define local_2a8 (*(undefined2 *)(pf_stack_frame + 2072))
#define uStack_29f (*(undefined1 *)(pf_stack_frame + 2081))
#define local_2a6 (*(undefined1 *)(pf_stack_frame + 2074))
#define local_2a4 (*(undefined2 *)(pf_stack_frame + 2076))
#define local_2a2 (*(undefined2 *)(pf_stack_frame + 2078))
#define local_2a0 (*(undefined1 *)(pf_stack_frame + 2080))
#define local_29e (*(undefined2 *)(pf_stack_frame + 2082))
#define local_29c (*(undefined2 *)(pf_stack_frame + 2084))
#define local_29a (*(undefined2 *)(pf_stack_frame + 2086))
#define local_298 (*(undefined2 *)(pf_stack_frame + 2088))
#define local_296 (*(undefined2 *)(pf_stack_frame + 2090))
#define local_294 (*(undefined2 *)(pf_stack_frame + 2092))
#define local_292 (*(undefined2 *)(pf_stack_frame + 2094))
#define local_290 (*(undefined1 *)(pf_stack_frame + 2096))
#define local_28f (*(undefined1 *)(pf_stack_frame + 2097))
#define local_28e (*(undefined1 *)(pf_stack_frame + 2098))
#define local_28d (*(undefined1 *)(pf_stack_frame + 2099))
#define local_28c (*(undefined1 *)(pf_stack_frame + 2100))
#define local_28b (*(undefined1 *)(pf_stack_frame + 2101))
#define local_28a (*(undefined1 *)(pf_stack_frame + 2102))
#define local_289 (*(undefined1 *)(pf_stack_frame + 2103))
#define local_288 (*(undefined1 *)(pf_stack_frame + 2104))
#define local_287 (*(undefined1 *)(pf_stack_frame + 2105))
#define local_286 (*(undefined1 *)(pf_stack_frame + 2106))
#define local_285 (*(undefined1 *)(pf_stack_frame + 2107))
#define local_284 (*(undefined1 *)(pf_stack_frame + 2108))
#define local_283 (*(undefined1 *)(pf_stack_frame + 2109))
#define local_282 (*(undefined1 *)(pf_stack_frame + 2110))
#define local_281 (*(undefined1 *)(pf_stack_frame + 2111))
#define local_280 (*(undefined1 *)(pf_stack_frame + 2112))
#define local_27f (*(undefined1 *)(pf_stack_frame + 2113))
#define local_27e (*(undefined1 *)(pf_stack_frame + 2114))
#define local_27d (*(undefined1 *)(pf_stack_frame + 2115))
#define local_27c (*(undefined1 *)(pf_stack_frame + 2116))
#define local_27b (*(undefined1 *)(pf_stack_frame + 2117))
#define local_27a (*(undefined1 *)(pf_stack_frame + 2118))
#define local_279 (*(undefined1 *)(pf_stack_frame + 2119))
#define local_278 (*(undefined1 *)(pf_stack_frame + 2120))
#define local_277 (*(undefined1 *)(pf_stack_frame + 2121))
#define local_276 (*(undefined1 *)(pf_stack_frame + 2122))
#define local_275 (*(undefined1 *)(pf_stack_frame + 2123))
#define local_274 (*(undefined1 *)(pf_stack_frame + 2124))
#define local_273 (*(undefined1 *)(pf_stack_frame + 2125))
#define local_272 (*(undefined1 *)(pf_stack_frame + 2126))
#define local_271 (*(undefined1 *)(pf_stack_frame + 2127))
#define local_270 (*(byte (*)[624])(pf_stack_frame + 2128))
#define uStack_22c (*(undefined4 *)(pf_stack_frame + 2196))
#define uStack_228 (*(undefined8 *)(pf_stack_frame + 2200))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 2216))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 2232))
#define uStack_1f8 (*(undefined8 *)(pf_stack_frame + 2248))
#define local_250 (*(undefined8 *)(pf_stack_frame + 2160))
#define auStack_1e8 (*(undefined8 (*)[61])(pf_stack_frame + 2264))
#define auStack_160 (*(undefined1 (*)[352])(pf_stack_frame + 2400))
#define auStack_e0 (*(uint (*)[56])(pf_stack_frame + 2528))
#define local_248 (*(undefined1 *)(pf_stack_frame + 2168))
#define local_247 (*(undefined1 *)(pf_stack_frame + 2169))
#define local_246 (*(undefined1 *)(pf_stack_frame + 2170))
#define local_245 (*(undefined1 *)(pf_stack_frame + 2171))
#define local_244 (*(undefined1 *)(pf_stack_frame + 2172))
#define local_243 (*(undefined1 *)(pf_stack_frame + 2173))
#define local_242 (*(undefined1 *)(pf_stack_frame + 2174))
#define local_241 (*(undefined1 *)(pf_stack_frame + 2175))
#define local_240 (*(undefined1 *)(pf_stack_frame + 2176))
#define local_23f (*(undefined1 *)(pf_stack_frame + 2177))
#define local_23e (*(undefined1 *)(pf_stack_frame + 2178))
#define local_23d (*(undefined1 *)(pf_stack_frame + 2179))
#define local_23c (*(undefined1 *)(pf_stack_frame + 2180))
#define local_23b (*(undefined1 *)(pf_stack_frame + 2181))
#define local_23a (*(undefined1 *)(pf_stack_frame + 2182))
#define local_239 (*(undefined1 *)(pf_stack_frame + 2183))
#define local_238 (*(undefined1 *)(pf_stack_frame + 2184))
#define local_237 (*(undefined1 *)(pf_stack_frame + 2185))
#define local_236 (*(undefined1 *)(pf_stack_frame + 2186))
#define local_235 (*(undefined1 *)(pf_stack_frame + 2187))
#define local_234 (*(undefined1 *)(pf_stack_frame + 2188))
#define local_233 (*(undefined1 *)(pf_stack_frame + 2189))
#define local_232 (*(undefined1 *)(pf_stack_frame + 2190))
#define local_231 (*(undefined1 *)(pf_stack_frame + 2191))
#define local_230 (*(uint *)(pf_stack_frame + 2192))
#define local_220 (*(undefined8 *)(pf_stack_frame + 2208))
#define local_210 (*(undefined8 *)(pf_stack_frame + 2224))
#define local_200 (*(undefined8 *)(pf_stack_frame + 2240))
#define local_1f0 (*(undefined4 *)(pf_stack_frame + 2256))
#define local_1ec (*(undefined4 *)(pf_stack_frame + 2260))
#define local_168 (*(int *)(pf_stack_frame + 2392))
#define local_60 (*(char (*)[96])(pf_stack_frame + 2656))
#define local_ab0 (*(undefined8 * *)(pf_stack_frame + 16))
#define uStack_8cc (*(undefined4 *)(pf_stack_frame + 500))
#define uStack_8c8 (*(undefined4 *)(pf_stack_frame + 504))
#define uStack_8c4 (*(undefined4 *)(pf_stack_frame + 508))
#define uStack_8bc (*(undefined4 *)(pf_stack_frame + 516))
#define uStack_8b8 (*(undefined4 *)(pf_stack_frame + 520))
#define uStack_8b4 (*(undefined4 *)(pf_stack_frame + 524))
#define auStack_8a8 (*(undefined8 (*)[277])(pf_stack_frame + 536))
#define auStack_864 (*(undefined8 (*)[268])(pf_stack_frame + 604))
#define auStack_844 (*(undefined1 (*)[2116])(pf_stack_frame + 636))
#define auStack_824 (*(uint (*)[521])(pf_stack_frame + 668))
#define auStack_7bc (*(undefined8 (*)[247])(pf_stack_frame + 772))
#define local_8dc (*(byte (*)[2268])(pf_stack_frame + 484))
#define local_8d7 (*(undefined1 *)(pf_stack_frame + 489))
#define local_8d6 (*(undefined1 *)(pf_stack_frame + 490))
#define local_8d5 (*(undefined1 *)(pf_stack_frame + 491))
#define local_8d4 (*(uint *)(pf_stack_frame + 492))
#define local_8d0 (*(uint *)(pf_stack_frame + 496))
#define local_8c0 (*(undefined4 *)(pf_stack_frame + 512))
#define local_8b0 (*(undefined1 * *)(pf_stack_frame + 528))
#define local_8ac (*(int *)(pf_stack_frame + 532))
#define local_868 (*(int *)(pf_stack_frame + 600))
#define local_845 (*(byte *)(pf_stack_frame + 635))
#define local_804 (*(undefined1 (*)[2052])(pf_stack_frame + 700))
#define uStack_774 (*(undefined8 *)(pf_stack_frame + 844))
#define uStack_764 (*(undefined8 *)(pf_stack_frame + 860))
#define local_7ff (*(undefined1 *)(pf_stack_frame + 705))
#define uStack_754 (*(undefined8 *)(pf_stack_frame + 876))
#define local_7fe (*(undefined1 *)(pf_stack_frame + 706))
#define local_7fd (*(undefined1 *)(pf_stack_frame + 707))
#define uStack_744 (*(undefined8 *)(pf_stack_frame + 892))
#define local_7fc (*(undefined1 *)(pf_stack_frame + 708))
#define local_7fb (*(undefined1 *)(pf_stack_frame + 709))
#define auStack_734 (*(undefined8 (*)[230])(pf_stack_frame + 908))
#define local_7fa (*(undefined1 *)(pf_stack_frame + 710))
#define local_7f9 (*(undefined1 *)(pf_stack_frame + 711))
#define local_7f8 (*(undefined1 *)(pf_stack_frame + 712))
#define local_7f7 (*(undefined1 *)(pf_stack_frame + 713))
#define local_7f6 (*(undefined1 *)(pf_stack_frame + 714))
#define uStack_6ab (*(undefined1 *)(pf_stack_frame + 1045))
#define local_7f5 (*(undefined1 *)(pf_stack_frame + 715))
#define uStack_6aa (*(undefined1 *)(pf_stack_frame + 1046))
#define local_7f4 (*(undefined1 *)(pf_stack_frame + 716))
#define uStack_6a9 (*(undefined1 *)(pf_stack_frame + 1047))
#define local_7f3 (*(undefined1 *)(pf_stack_frame + 717))
#define uStack_6a8 (*(undefined1 *)(pf_stack_frame + 1048))
#define local_7f2 (*(undefined1 *)(pf_stack_frame + 718))
#define uStack_6a7 (*(undefined1 *)(pf_stack_frame + 1049))
#define local_7f1 (*(undefined1 *)(pf_stack_frame + 719))
#define uStack_6a6 (*(undefined1 *)(pf_stack_frame + 1050))
#define local_7f0 (*(undefined1 *)(pf_stack_frame + 720))
#define uStack_6a5 (*(undefined1 *)(pf_stack_frame + 1051))
#define local_7ef (*(undefined1 *)(pf_stack_frame + 721))
#define local_7ee (*(undefined1 *)(pf_stack_frame + 722))
#define uStack_6a3 (*(undefined1 *)(pf_stack_frame + 1053))
#define local_7ed (*(undefined1 *)(pf_stack_frame + 723))
#define uStack_6a2 (*(undefined1 *)(pf_stack_frame + 1054))
#define local_7ec (*(undefined1 *)(pf_stack_frame + 724))
#define uStack_6a1 (*(undefined1 *)(pf_stack_frame + 1055))
#define local_7eb (*(undefined1 *)(pf_stack_frame + 725))
#define local_7ea (*(undefined1 *)(pf_stack_frame + 726))
#define uStack_69c (*(uint *)(pf_stack_frame + 1060))
#define local_7e9 (*(undefined1 *)(pf_stack_frame + 727))
#define local_7e8 (*(undefined1 *)(pf_stack_frame + 728))
#define local_7e7 (*(undefined1 *)(pf_stack_frame + 729))
#define local_7e6 (*(undefined1 *)(pf_stack_frame + 730))
#define local_7e5 (*(undefined1 *)(pf_stack_frame + 731))
#define local_7e4 (*(undefined1 *)(pf_stack_frame + 732))
#define local_7e3 (*(undefined1 *)(pf_stack_frame + 733))
#define local_7e2 (*(undefined1 *)(pf_stack_frame + 734))
#define local_7e1 (*(undefined1 *)(pf_stack_frame + 735))
#define local_7e0 (*(undefined1 *)(pf_stack_frame + 736))
#define local_7df (*(undefined1 *)(pf_stack_frame + 737))
#define local_7de (*(undefined1 *)(pf_stack_frame + 738))
#define local_7dd (*(undefined1 *)(pf_stack_frame + 739))
#define local_7dc (*(char *)(pf_stack_frame + 740))
#define local_7db (*(char *)(pf_stack_frame + 741))
#define local_7da (*(char *)(pf_stack_frame + 742))
#define local_7d9 (*(char *)(pf_stack_frame + 743))
#define local_7d8 (*(char *)(pf_stack_frame + 744))
#define local_7d7 (*(char *)(pf_stack_frame + 745))
#define local_7d6 (*(char *)(pf_stack_frame + 746))
#define local_7d5 (*(char *)(pf_stack_frame + 747))
#define local_7d4 (*(char *)(pf_stack_frame + 748))
#define local_7d3 (*(char *)(pf_stack_frame + 749))
#define local_7d2 (*(char *)(pf_stack_frame + 750))
#define local_7d1 (*(char *)(pf_stack_frame + 751))
#define local_7d0 (*(char *)(pf_stack_frame + 752))
#define local_7cf (*(char *)(pf_stack_frame + 753))
#define local_7ce (*(char *)(pf_stack_frame + 754))
#define local_7cd (*(char *)(pf_stack_frame + 755))
#define local_7cc (*(char *)(pf_stack_frame + 756))
#define local_7cb (*(char *)(pf_stack_frame + 757))
#define local_7ca (*(char *)(pf_stack_frame + 758))
#define local_7c9 (*(char *)(pf_stack_frame + 759))
#define local_7c8 (*(char *)(pf_stack_frame + 760))
#define auStack_630 (*(undefined1 (*)[1584])(pf_stack_frame + 1168))
#define local_7c7 (*(char *)(pf_stack_frame + 761))
#define auStack_5b0 (*(undefined8 (*)[182])(pf_stack_frame + 1296))
#define local_7c6 (*(char *)(pf_stack_frame + 762))
#define local_7c5 (*(char *)(pf_stack_frame + 763))
#define local_7c4 (*(char *)(pf_stack_frame + 764))
#define local_7c3 (*(char *)(pf_stack_frame + 765))
#define iStack_49c (*(int *)(pf_stack_frame + 1572))
#define local_7c2 (*(char *)(pf_stack_frame + 766))
#define local_7c1 (*(char *)(pf_stack_frame + 767))
#define local_7c0 (*(char *)(pf_stack_frame + 768))
#define local_7bf (*(char *)(pf_stack_frame + 769))
#define local_7be (*(char *)(pf_stack_frame + 770))
#define uStack_48f (*(undefined1 *)(pf_stack_frame + 1585))
#define local_7bd (*(char *)(pf_stack_frame + 771))
#define uStack_48e (*(undefined1 *)(pf_stack_frame + 1586))
#define local_79c (*(undefined1 *)(pf_stack_frame + 804))
#define uStack_48d (*(undefined1 *)(pf_stack_frame + 1587))
#define local_79b (*(undefined1 *)(pf_stack_frame + 805))
#define uStack_48c (*(undefined1 *)(pf_stack_frame + 1588))
#define local_79a (*(undefined1 *)(pf_stack_frame + 806))
#define uStack_48b (*(undefined1 *)(pf_stack_frame + 1589))
#define local_799 (*(undefined1 *)(pf_stack_frame + 807))
#define uStack_48a (*(undefined1 *)(pf_stack_frame + 1590))
#define local_798 (*(undefined1 *)(pf_stack_frame + 808))
#define uStack_489 (*(undefined1 *)(pf_stack_frame + 1591))
#define local_797 (*(undefined1 *)(pf_stack_frame + 809))
#define local_796 (*(undefined1 *)(pf_stack_frame + 810))
#define uStack_487 (*(undefined1 *)(pf_stack_frame + 1593))
#define local_795 (*(undefined1 *)(pf_stack_frame + 811))
#define uStack_486 (*(undefined1 *)(pf_stack_frame + 1594))
#define local_794 (*(undefined1 *)(pf_stack_frame + 812))
#define uStack_485 (*(undefined1 *)(pf_stack_frame + 1595))
#define local_793 (*(undefined1 *)(pf_stack_frame + 813))
#define uStack_484 (*(undefined1 *)(pf_stack_frame + 1596))
#define local_792 (*(undefined1 *)(pf_stack_frame + 814))
#define uStack_483 (*(undefined1 *)(pf_stack_frame + 1597))
#define local_791 (*(undefined1 *)(pf_stack_frame + 815))
#define uStack_482 (*(undefined1 *)(pf_stack_frame + 1598))
#define local_790 (*(undefined1 *)(pf_stack_frame + 816))
#define uStack_481 (*(undefined1 *)(pf_stack_frame + 1599))
#define local_78f (*(undefined1 *)(pf_stack_frame + 817))
#define local_78e (*(undefined1 *)(pf_stack_frame + 818))
#define uStack_47f (*(undefined1 *)(pf_stack_frame + 1601))
#define local_78d (*(undefined1 *)(pf_stack_frame + 819))
#define uStack_47e (*(undefined1 *)(pf_stack_frame + 1602))
#define local_78c (*(undefined1 *)(pf_stack_frame + 820))
#define uStack_47d (*(undefined1 *)(pf_stack_frame + 1603))
#define local_78b (*(undefined1 *)(pf_stack_frame + 821))
#define uStack_47c (*(undefined1 *)(pf_stack_frame + 1604))
#define local_78a (*(undefined1 *)(pf_stack_frame + 822))
#define uStack_47b (*(undefined1 *)(pf_stack_frame + 1605))
#define local_789 (*(undefined1 *)(pf_stack_frame + 823))
#define uStack_47a (*(undefined1 *)(pf_stack_frame + 1606))
#define local_788 (*(undefined1 *)(pf_stack_frame + 824))
#define uStack_479 (*(undefined1 *)(pf_stack_frame + 1607))
#define local_787 (*(undefined1 *)(pf_stack_frame + 825))
#define local_786 (*(undefined1 *)(pf_stack_frame + 826))
#define local_785 (*(undefined1 *)(pf_stack_frame + 827))
#define local_784 (*(undefined1 *)(pf_stack_frame + 828))
#define local_783 (*(undefined1 *)(pf_stack_frame + 829))
#define local_782 (*(undefined1 *)(pf_stack_frame + 830))
#define local_781 (*(undefined1 *)(pf_stack_frame + 831))
#define local_780 (*(undefined1 *)(pf_stack_frame + 832))
#define local_77f (*(undefined1 *)(pf_stack_frame + 833))
#define local_77e (*(undefined1 *)(pf_stack_frame + 834))
#define local_77d (*(undefined1 *)(pf_stack_frame + 835))
#define local_77c (*(undefined8 *)(pf_stack_frame + 836))
#define uStack_458 (*(undefined8 *)(pf_stack_frame + 1640))
#define local_76c (*(undefined8 *)(pf_stack_frame + 852))
#define local_75c (*(undefined8 *)(pf_stack_frame + 868))
#define uStack_448 (*(undefined8 *)(pf_stack_frame + 1656))
#define local_74c (*(undefined8 *)(pf_stack_frame + 884))
#define local_73c (*(uint *)(pf_stack_frame + 900))
#define uStack_438 (*(undefined8 *)(pf_stack_frame + 1672))
#define local_738 (*(int *)(pf_stack_frame + 904))
#define local_6b4 (*(int *)(pf_stack_frame + 1036))
#define uStack_428 (*(undefined8 *)(pf_stack_frame + 1688))
#define local_6b0 (*(undefined4 *)(pf_stack_frame + 1040))
#define local_6ac (*(undefined1 *)(pf_stack_frame + 1044))
#define uStack_418 (*(undefined8 *)(pf_stack_frame + 1704))
#define local_6a4 (*(undefined1 *)(pf_stack_frame + 1052))
#define local_6a0 (*(uint *)(pf_stack_frame + 1056))
#define uStack_408 (*(undefined8 *)(pf_stack_frame + 1720))
#define local_698 (*(uint *)(pf_stack_frame + 1064))
#define local_694 (*(uint *)(pf_stack_frame + 1068))
#define uStack_3f8 (*(undefined8 *)(pf_stack_frame + 1736))
#define local_690 (*(undefined1 *)(pf_stack_frame + 1072))
#define local_68f (*(undefined1 *)(pf_stack_frame + 1073))
#define uStack_3e8 (*(undefined8 *)(pf_stack_frame + 1752))
#define local_68e (*(undefined1 *)(pf_stack_frame + 1074))
#define local_68d (*(undefined1 *)(pf_stack_frame + 1075))
#define uStack_3d8 (*(undefined8 *)(pf_stack_frame + 1768))
#define local_68c (*(undefined1 *)(pf_stack_frame + 1076))
#define local_68b (*(undefined1 *)(pf_stack_frame + 1077))
#define uStack_3c8 (*(undefined8 *)(pf_stack_frame + 1784))
#define local_68a (*(undefined1 *)(pf_stack_frame + 1078))
#define local_689 (*(undefined1 *)(pf_stack_frame + 1079))
#define uStack_3b8 (*(undefined8 *)(pf_stack_frame + 1800))
#define local_688 (*(undefined1 *)(pf_stack_frame + 1080))
#define local_687 (*(undefined1 *)(pf_stack_frame + 1081))
#define uStack_3ac (*(undefined4 *)(pf_stack_frame + 1812))
#define local_686 (*(undefined1 *)(pf_stack_frame + 1082))
#define uStack_3a8 (*(undefined4 *)(pf_stack_frame + 1816))
#define local_685 (*(undefined1 *)(pf_stack_frame + 1083))
#define uStack_3a4 (*(undefined4 *)(pf_stack_frame + 1820))
#define local_684 (*(undefined1 *)(pf_stack_frame + 1084))
#define local_683 (*(undefined1 *)(pf_stack_frame + 1085))
#define uStack_39c (*(undefined4 *)(pf_stack_frame + 1828))
#define local_682 (*(undefined1 *)(pf_stack_frame + 1086))
#define uStack_398 (*(undefined4 *)(pf_stack_frame + 1832))
#define local_681 (*(undefined1 *)(pf_stack_frame + 1087))
#define uStack_394 (*(undefined4 *)(pf_stack_frame + 1836))
#define local_680 (*(undefined1 *)(pf_stack_frame + 1088))
#define local_67f (*(undefined1 *)(pf_stack_frame + 1089))
#define uStack_38c (*(undefined4 *)(pf_stack_frame + 1844))
#define local_67e (*(undefined1 *)(pf_stack_frame + 1090))
#define uStack_388 (*(undefined4 *)(pf_stack_frame + 1848))
#define local_67d (*(undefined1 *)(pf_stack_frame + 1091))
#define uStack_384 (*(undefined4 *)(pf_stack_frame + 1852))
#define local_67c (*(undefined1 *)(pf_stack_frame + 1092))
#define local_67b (*(undefined1 *)(pf_stack_frame + 1093))
#define uStack_37c (*(undefined4 *)(pf_stack_frame + 1860))
#define local_67a (*(undefined1 *)(pf_stack_frame + 1094))
#define uStack_378 (*(undefined4 *)(pf_stack_frame + 1864))
#define local_679 (*(undefined1 *)(pf_stack_frame + 1095))
#define uStack_374 (*(undefined4 *)(pf_stack_frame + 1868))
#define local_678 (*(undefined1 *)(pf_stack_frame + 1096))
#define local_677 (*(undefined1 *)(pf_stack_frame + 1097))
#define uStack_36c (*(undefined4 *)(pf_stack_frame + 1876))
#define local_676 (*(undefined1 *)(pf_stack_frame + 1098))
#define uStack_368 (*(undefined4 *)(pf_stack_frame + 1880))
#define local_675 (*(undefined1 *)(pf_stack_frame + 1099))
#define uStack_364 (*(undefined4 *)(pf_stack_frame + 1884))
#define local_674 (*(undefined1 *)(pf_stack_frame + 1100))
#define local_673 (*(undefined1 *)(pf_stack_frame + 1101))
#define uStack_35c (*(undefined4 *)(pf_stack_frame + 1892))
#define local_672 (*(undefined1 *)(pf_stack_frame + 1102))
#define uStack_358 (*(undefined4 *)(pf_stack_frame + 1896))
#define local_671 (*(undefined1 *)(pf_stack_frame + 1103))
#define uStack_354 (*(undefined4 *)(pf_stack_frame + 1900))
#define local_4b0 (*(undefined1 (*)[1200])(pf_stack_frame + 1552))
#define local_4a8 (*(undefined8 *)(pf_stack_frame + 1560))
#define uStack_34c (*(undefined4 *)(pf_stack_frame + 1908))
#define uStack_348 (*(undefined4 *)(pf_stack_frame + 1912))
#define local_4a0 (*(uint *)(pf_stack_frame + 1568))
#define uStack_344 (*(undefined4 *)(pf_stack_frame + 1916))
#define local_498 (*(int *)(pf_stack_frame + 1576))
#define local_494 (*(int *)(pf_stack_frame + 1580))
#define uStack_33c (*(undefined4 *)(pf_stack_frame + 1924))
#define local_490 (*(undefined1 *)(pf_stack_frame + 1584))
#define uStack_338 (*(undefined4 *)(pf_stack_frame + 1928))
#define local_488 (*(undefined1 *)(pf_stack_frame + 1592))
#define uStack_334 (*(undefined4 *)(pf_stack_frame + 1932))
#define local_480 (*(undefined1 *)(pf_stack_frame + 1600))
#define local_478 (*(undefined1 *)(pf_stack_frame + 1608))
#define uStack_32c (*(undefined4 *)(pf_stack_frame + 1940))
#define local_477 (*(undefined1 *)(pf_stack_frame + 1609))
#define uStack_328 (*(undefined4 *)(pf_stack_frame + 1944))
#define local_476 (*(undefined1 *)(pf_stack_frame + 1610))
#define uStack_324 (*(undefined4 *)(pf_stack_frame + 1948))
#define local_475 (*(undefined1 *)(pf_stack_frame + 1611))
#define local_474 (*(undefined1 *)(pf_stack_frame + 1612))
#define uStack_31c (*(undefined4 *)(pf_stack_frame + 1956))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015990
 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffff960 : 0x10016024 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_10015990(int param_1)

{
  unsigned char pf_stack_frame[2784] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  uint128 *pauVar19;
  uint128 *pauVar20;
  byte *extraout_r3 = 0;
  byte *extraout_r3_00 = 0;
  byte *pbVar21;
  byte *extraout_r3_01 = 0;
  byte *extraout_r3_02 = 0;
  byte *extraout_r3_03 = 0;
  byte *pbVar22;
  byte *pbVar23;
  int extraout_r3_04 = 0;
  int extraout_r3_05 = 0;
  uint extraout_r3_06 = 0;
  int extraout_r3_07 = 0;
  uint extraout_r3_08 = 0;
  int extraout_r3_09 = 0;
  int extraout_r3_10 = 0;
  undefined4 extraout_r3_11 = 0;
  undefined4 uVar24;
  undefined4 extraout_r3_12 = 0;
  int extraout_r3_13 = 0;
  int extraout_r3_14 = 0;
  undefined4 extraout_r3_15 = 0;
  int extraout_r3_16 = 0;
  int extraout_r3_17 = 0;
  int extraout_r3_18 = 0;
  int extraout_r3_19 = 0;
  int iVar25;
  int extraout_r3_20 = 0;
  int extraout_r3_21 = 0;
  int iVar26;
  char *pcVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int *piVar33;
  uint *puVar34;
  char cVar35;
  bool bVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  ulonglong uVar42;
  uint128 auVar43;
  uint128 auVar44;
  uint128 auVar45;
  uint128 auVar46;
  uint128 auVar47;
  uint128 auVar48;
  uint128 auVar49;
  uint128 auVar50;
  uint128 auVar51;
  uint128 auVar52;
  uint128 auVar53;
  uint128 auVar54;
  uint128 auVar55;
  uint128 auVar56;
  uint128 auVar57;
  uint128 auVar58;
  uint128 auVar59;
  uint128 auVar60;
  undefined8 uVar61;

  uVar3 = *(uint *)(param_1 + 0x138);
  if (uVar3 < 4) {
    return;
  }
  piVar9 = (int *)(param_1 + 0x658);
  piVar10 = (int *)(param_1 + 0x4bc);
  puVar11 = (undefined8 *)(param_1 + 0x1c);
  uVar38 = 0;
  uVar39 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uVar40 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uVar41 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
LAB_10015d88:
  pbVar22 = local_8dc;
  if (*(char *)(param_1 + 0xdb4) != '\0') {
    return;
  }
  puVar34 = *(uint **)(param_1 + 0x134);
  if (*(int *)(param_1 + 0x14c) - 2U < 2) {
    if (uVar3 < 0x10) {
      return;
    }
    recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)(param_1 + 0x28c),
                       (undefined8 *)&DataAbort);
    recovered_10014e70((byte *)(param_1 + 0x198),local_4b0,(int)puVar34,(int)&local_6b0,0x10);
    uVar3 = CONCAT13(PF_PART1(local_6b0, 3),
                     CONCAT12(PF_PART1(local_6b0, 2),CONCAT11(PF_PART1(local_6b0, 1),(byte)local_6b0)));
    PF_PART1(local_6b0, 0) = 0;
    PF_PART1(local_6b0, 1) = 0;
    PF_PART1(local_6b0, 2) = 0;
    PF_PART1(local_6b0, 3) = 0;
    local_6ac = 0;
    uStack_6ab = 0;
    uStack_6aa = 0;
    uStack_6a9 = 0;
    uStack_6a8 = 0;
    uStack_6a7 = 0;
    uStack_6a6 = 0;
    uStack_6a5 = 0;
    local_6a4 = 0;
    uStack_6a3 = 0;
    uStack_6a2 = 0;
    uStack_6a1 = 0;
    PF_PART8(local_4b0,0) = (uint64_t)0x0;
    local_4a8 = 0;
    pbVar22 = extraout_r3;
  }
  else if (*(int *)(param_1 + 0x14c) == 1) {
    uVar5 = *(undefined4 *)(param_1 + 0x144);
    local_8d5 = (undefined1)uVar5;
    local_8dc[0] = 0;
    local_8dc[1] = 0;
    local_8dc[2] = 0;
    local_8dc[3] = 0;
    local_8d6 = (undefined1)((uint)uVar5 >> 8);
    local_8d7 = (undefined1)((uint)uVar5 >> 0x10);
    local_8dc[4] = (byte)((uint)uVar5 >> 0x18);
    recovered_10013c94(param_1 + 0x175,0,0,pbVar22,(int)puVar34,(int)local_4b0,4);
    uVar3 = PF_PART4(local_4b0, 0);
    pbVar22 = extraout_r3_00;
  }
  else {
    uVar3 = *puVar34;
  }
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  if (uVar3 - 0x88b9 < 0xffff774c) {
    pcVar27 = str_1001f289;
LAB_100192b4:
    uVar3 = 2;
LAB_100192bc:
    recovered_1000be98(param_1,uVar3,pcVar27,pbVar22);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x14c);
  if (((uVar4 & 0xfffffffe) == 2) && ((uVar3 + 4 & 0xf) != 0)) {
    pcVar27 = str_1001f29b;
    goto LAB_100192b4;
  }
  if (uVar4 - 2 < 2) {
    pbVar21 = (byte *)(uVar3 + *(int *)(param_1 + 0x2e0) + 4);
  }
  else if (uVar4 == 1) {
    pbVar21 = (byte *)(uVar3 + 0x14);
  }
  else {
    pbVar21 = (byte *)(uVar3 + 4);
  }
  if (*(byte **)(param_1 + 0x138) < pbVar21) {
    return;
  }
  if (uVar4 - 2 < 2) {
    uVar4 = uVar3 + 4;
    recovered_10014e70((byte *)(param_1 + 0x198),(char *)(param_1 + 0x28c),(int)puVar34,(int)puVar34
                       ,uVar4);
    uVar5 = *(undefined4 *)(param_1 + 0x144);
    PF_PART1(local_6b0, 0) = (byte)((uint)uVar5 >> 0x18);
    PF_PART1(local_6b0, 1) = (undefined1)((uint)uVar5 >> 0x10);
    PF_PART1(local_6b0, 2) = (byte)((uint)uVar5 >> 8);
    PF_PART1(local_6b0, 3) = (byte)uVar5;
    if (*(int *)(param_1 + 0x150) == 2) {
      recovered_100141c0((undefined1 *)(param_1 + 0x29c),*(uint *)(param_1 + 0x2dc),(int)&local_6b0,
                         (int)puVar34,uVar4,local_4b0);
      pbVar22 = extraout_r3_01;
    }
    else {
      recovered_10014870((undefined1 *)(param_1 + 0x29c),*(uint *)(param_1 + 0x2dc),(int)&local_6b0,
                         (int)puVar34,uVar4,local_4b0);
      pbVar22 = extraout_r3_03;
    }
    uVar4 = *(uint *)(param_1 + 0x2e0);
    if (uVar4 != 0) {
      uVar30 = 0;
      bVar18 = 0;
      if (uVar4 < 0x10) {
LAB_100162fc:
        iVar7 = uVar4 - uVar30;
        pbVar13 = (byte *)((int)puVar34 + uVar3 + uVar30 + 4);
        pbVar23 = local_4b0 + uVar30;
        do {
          pbVar22 = pbVar23 + 1;
          iVar7 = iVar7 + -1;
          bVar18 = *pbVar13 ^ *pbVar23 | bVar18;
          pbVar13 = pbVar13 + 1;
          pbVar23 = pbVar22;
        } while (iVar7 != 0);
      }
      else {
        auVar43 = (uint128)0x0;
        uVar30 = uVar4 & 0xfffffff0;
        pauVar19 = (uint128 *)((int)puVar34 + uVar3 + 4);
        pauVar20 = (uint128 *)local_4b0;
        uVar12 = uVar30;
        do {
          auVar54 = *pauVar20;
          pauVar20 = pauVar20 + 1;
          uVar12 = uVar12 - 0x10;
          auVar49 = *pauVar19;
          pauVar19 = pauVar19 + 1;
          auVar43 = auVar49 ^ auVar54 | auVar43;
        } while (uVar12 != 0);
        uVar42 = PF_PART8(auVar43, 0) | PF_PART8(auVar43, 8);
        bVar18 = (byte)(uVar42 >> 0x10);
        pbVar22 = (byte *)(uint)bVar18;
        bVar18 = (byte)uVar42 | (byte)(uVar42 >> 8) | bVar18 | (byte)(uVar42 >> 0x18) |
                 (byte)(uVar42 >> 0x20) | (byte)(uVar42 >> 0x28) | (byte)(uVar42 >> 0x30) |
                 (byte)(uVar42 >> 0x38);
        if (uVar4 != uVar30) goto LAB_100162fc;
      }
      if (bVar18 != 0) {
        PF_PART8(local_4b0,0) = (uint64_t)0x0;
        local_4a8 = 0;
        local_4a0 = 0;
        iStack_49c = 0;
        local_498 = 0;
        local_494 = 0;
        local_490 = 0;
        uStack_48f = 0;
        uStack_48e = 0;
        uStack_48d = 0;
        uStack_48c = 0;
        uStack_48b = 0;
        uStack_48a = 0;
        uStack_489 = 0;
        local_488 = 0;
        uStack_487 = 0;
        uStack_486 = 0;
        uStack_485 = 0;
        uStack_484 = 0;
        uStack_483 = 0;
        uStack_482 = 0;
        uStack_481 = 0;
        local_480 = 0;
        uStack_47f = 0;
        uStack_47e = 0;
        uStack_47d = 0;
        uStack_47c = 0;
        uStack_47b = 0;
        uStack_47a = 0;
        uStack_479 = 0;
        local_478 = 0;
        local_477 = 0;
        local_476 = 0;
        local_475 = 0;
        local_474 = 0;
        local_473 = 0;
        local_472 = 0;
        local_471 = 0;
        goto LAB_100193fc;
      }
    }
    PF_PART8(local_4b0,0) = (uint64_t)0x0;
    local_4a8 = 0;
    local_4a0 = 0;
    iStack_49c = 0;
    local_498 = 0;
    local_494 = 0;
    local_490 = 0;
    uStack_48f = 0;
    uStack_48e = 0;
    uStack_48d = 0;
    uStack_48c = 0;
    uStack_48b = 0;
    uStack_48a = 0;
    uStack_489 = 0;
    local_488 = 0;
    uStack_487 = 0;
    uStack_486 = 0;
    uStack_485 = 0;
    uStack_484 = 0;
    uStack_483 = 0;
    uStack_482 = 0;
    uStack_481 = 0;
    local_480 = 0;
    uStack_47f = 0;
    uStack_47e = 0;
    uStack_47d = 0;
    uStack_47c = 0;
    uStack_47b = 0;
    uStack_47a = 0;
    uStack_479 = 0;
    local_478 = 0;
    local_477 = 0;
    local_476 = 0;
    local_475 = 0;
    local_474 = 0;
    local_473 = 0;
    local_472 = 0;
    local_471 = 0;
  }
  else {
    pbVar22 = pbVar21;
    if (uVar4 == 1) {
      recovered_1000d460((undefined8 *)(param_1 + 0x155),0,0,(undefined4 *)local_8dc,(int)&local_6b0
                        );
      PF_PART8(local_4b0, 0) = (uint64_t)
                  (CONCAT44(CONCAT13(uStack_6aa,
                                     CONCAT12(uStack_6ab,CONCAT11(local_6ac,PF_PART1(local_6b0, 3)))) >> 2,
                            CONCAT13(PF_PART1(local_6b0, 3),
                                     CONCAT12(PF_PART1(local_6b0, 2),
                                              CONCAT11(PF_PART1(local_6b0, 1),(byte)local_6b0)))) &
                  0x3ffff0303ffffff);
      local_4a8 = CONCAT44(CONCAT13(local_6a4,CONCAT12(uStack_6a5,CONCAT11(uStack_6a6,uStack_6a7)))
                           >> 6,CONCAT13(uStack_6a7,
                                         CONCAT12(uStack_6a8,CONCAT11(uStack_6a9,uStack_6aa))) >> 4)
                  & 0x3f03fff03ffc0ff;
      local_4a0 = (CONCAT13(uStack_6a1,CONCAT12(uStack_6a2,CONCAT11(uStack_6a3,local_6a4))) &
                  0xfffffff) >> 8;
      recovered_10004080((byte *)&iStack_49c,0,0x14);
      local_468 = 0;
      recovered_10013ed0((uint *)local_4b0,puVar34,uVar3 + 4);
      recovered_10013f98((uint *)local_4b0,(undefined1 *)&local_230);
      PF_PART1(local_6b0, 0) = 0;
      puVar6 = puVar34 + 1;
      PF_PART1(local_6b0, 1) = 0;
      PF_PART1(local_6b0, 2) = 0;
      PF_PART1(local_6b0, 3) = 0;
      local_6ac = 0;
      uStack_6ab = 0;
      uStack_6aa = 0;
      uStack_6a9 = 0;
      uStack_6a8 = 0;
      uStack_6a7 = 0;
      uStack_6a6 = 0;
      uStack_6a5 = 0;
      local_6a4 = 0;
      uStack_6a3 = 0;
      uStack_6a2 = 0;
      uStack_6a1 = 0;
      local_6a0 = 0;
      uStack_69c = 0;
      local_698 = 0;
      local_694 = 0;
      local_690 = 0;
      local_68f = 0;
      local_68e = 0;
      local_68d = 0;
      local_68c = 0;
      local_68b = 0;
      local_68a = 0;
      local_689 = 0;
      local_688 = 0;
      local_687 = 0;
      local_686 = 0;
      local_685 = 0;
      local_684 = 0;
      local_683 = 0;
      local_682 = 0;
      local_681 = 0;
      local_680 = 0;
      local_67f = 0;
      local_67e = 0;
      local_67d = 0;
      local_67c = 0;
      local_67b = 0;
      local_67a = 0;
      local_679 = 0;
      local_678 = 0;
      local_677 = 0;
      local_676 = 0;
      local_675 = 0;
      local_674 = 0;
      local_673 = 0;
      local_672 = 0;
      local_671 = 0;
      PF_PART4(auVar43, 4) = uStack_22c;
      PF_PART4(auVar43, 0) = local_230;
      PF_PART8(auVar43, 8) = uStack_228;
      auVar43 = VectorCompareEqual(*(uint128 *)((int)puVar6 + uVar3),auVar43,1);
      uVar42 = ~PF_PART8(auVar43, 0);
      uVar1 = ~PF_PART8(auVar43, 8);
      pbVar22 = (byte *)(uint)(byte)(uVar1 >> 0x38);
      if ((((((((((((((((uVar42 & 1) != 0 || (uVar42 & 0x100) != 0) || (uVar42 & 0x10000) != 0) ||
                     (uVar42 & 0x1000000) != 0) || (uVar42 & 0x100000000) != 0) ||
                   (uVar42 & 0x10000000000) != 0) || (uVar42 & 0x1000000000000) != 0) ||
                 (uVar42 & 0x100000000000000) != 0) || (uVar1 & 1) != 0) || (uVar1 & 0x100) != 0) ||
              (uVar1 & 0x10000) != 0) || (uVar1 & 0x1000000) != 0) || (uVar1 & 0x100000000) != 0) ||
           (uVar1 & 0x10000000000) != 0) || (uVar1 & 0x1000000000000) != 0) ||
          (uVar1 & 0x100000000000000) != 0) {
LAB_100193fc:
        pcVar27 = str_1001f2b4;
        uVar3 = 5;
        goto LAB_100192bc;
      }
      recovered_10013c94((undefined8 *)(param_1 + 0x155),1,0,local_8dc,(int)puVar6,(int)puVar6,uVar3
                        );
      pbVar22 = extraout_r3_02;
    }
  }
  uVar30 = *(uint *)(param_1 + 0x144);
  uVar4 = puVar34[1];
  *(uint *)(param_1 + 0x144) = uVar30 + 1;
  if (uVar3 <= (byte)uVar4) {
    pcVar27 = str_1001f2d1;
    goto LAB_100192b4;
  }
  puVar32 = (undefined8 *)(uVar3 + ~(uint)(byte)uVar4);
  if (puVar32 == (undefined8 *)0x0) goto switchD_1001648c_caseD_2;
  pcVar27 = (char *)((int)puVar34 + 5);
  if (*(char *)(param_1 + 0x4a8) == '\x01' && *pcVar27 == '\x1e') {
    *(undefined1 *)(param_1 + 0x4a8) = 0;
    goto switchD_1001648c_caseD_2;
  }
  switch((uintptr_t)(*pcVar27)) {
  case '\x01':
    PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)(uint7)PF_PART7(local_4b0, 1) << 8);
    recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)pcVar27,(undefined8 *)0x1);
    PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffff00000000);
    puVar31 = (undefined8 *)local_4b0;
    if (&UndefinedInstruction < puVar32) {
      recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 6),
                         (undefined8 *)&UndefinedInstruction);
      PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffff00000000);
      if (3 < (int)puVar32 - 5U) {
        recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 10),
                           (undefined8 *)&UndefinedInstruction);
        puVar28 = (undefined8 *)(uint)local_4b0[3];
        uVar3 = (uint)local_4b0[1] << 0x10 | (uint)local_4b0[0] << 0x18 | (uint)local_4b0[2] << 8;
        if ((uVar3 | (uint)puVar28) <= (int)puVar32 - 9U) {
          if (uVar3 != 0) {
            puVar28 = (undefined8 *)0xff;
          }
          recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 0xe),puVar28);
          puVar31 = (undefined8 *)((int)local_4b0 + (int)puVar28);
        }
      }
    }
    *(undefined1 *)puVar31 = 0;
    recovered_100195a8((void *)param_1,str_1001f2dd,local_4b0);
    *(undefined1 *)(param_1 + 0xdb4) = 1;
    recovered_10004080((byte *)&local_6b0,0,0x18);
    PF_PART1(local_6b0, 0) = 0x18;
    PF_PART1(local_6b0, 1) = 0;
    PF_PART1(local_6b0, 2) = 0;
    PF_PART1(local_6b0, 3) = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
       ((_DAT_40010968 != (code *)0x0 && (iVar7 = (*_DAT_40010968)(&local_6b0), iVar7 != 0)))) {
      uVar3 = local_6a0;
    }
    else {
      uVar3 = 0;
    }
    bVar36 = CARRY4(DAT_100250d8,uVar3 - DAT_100250d0);
    DAT_100250d8 = DAT_100250d8 + (uVar3 - DAT_100250d0);
    piVar33 = *(int **)(param_1 + 8);
    DAT_100250dc = DAT_100250dc + (uint)bVar36;
    DAT_100250d0 = uVar3;
    uVar61 = recovered_100034ac((uint)((ulonglong)DAT_100250d8 * 1000),
                                DAT_100250dc * 1000 + (int)((ulonglong)DAT_100250d8 * 1000 >> 0x20),
                                DAT_100250cc,0);
    *(int *)(param_1 + 0xdb8) = (int)uVar61;
    if (piVar33 != (int *)0x0) {
      recovered_10019404(piVar33);
    }
    break;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\a':
  case '_':
    break;
  case '\x05':
    PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)(uint7)PF_PART7(local_4b0, 1) << 8);
    recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)pcVar27,(undefined8 *)0x1);
    PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffff00000000);
    if (&UndefinedInstruction < puVar32) {
      recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 6),
                         (undefined8 *)&UndefinedInstruction);
      iVar25 = (int)puVar34 + 10;
      uVar3 = PF_PART4(local_4b0, 0) << 0x18 | ((uint)PF_PART4(local_4b0, 0) >> 8 & 0xff) << 0x10 |
              ((uint)PF_PART4(local_4b0, 0) >> 0x10 & 0xff) << 8 | (uint)PF_PART4(local_4b0, 0) >> 0x18;
      iVar7 = extraout_r3_05;
      if ((int)puVar32 - 5U < uVar3) {
        iVar25 = 0;
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
      iVar25 = 0;
      iVar7 = extraout_r3_04;
    }
    if ((*(uint *)(param_1 + 0x10) < 2) || (*(char *)(param_1 + 0x4a5) == '\x01')) {
      uVar3 = 2;
      pcVar27 = str_1001f2f5;
    }
    else {
      bVar36 = recovered_1001977c(iVar25,uVar3,str_1001f319);
      if (bVar36) {
        PF_PART1(local_4a8, 4) = 0;
        PF_PART1(local_6b0, 0) = 6;
        PF_PART4(local_4b0, 4) = 0x2000;
        PF_PART4(local_4b0, 0) = *(undefined8 **)(param_1 + 0x140);
        recovered_100038f0(*(undefined8 **)(param_1 + 0x140),(undefined8 *)&local_6b0,
                           (undefined8 *)0x1);
        local_4a8 = CONCAT44(PF_PART4(local_4a8, 4),1);
        recovered_1000dbf0((int *)local_4b0,str_1001f319);
        puVar32 = (undefined8 *)PF_PART4(local_4b0, 0);
        uVar3 = (uint)local_4a8;
        goto LAB_10016914;
      }
      uVar3 = 7;
      pcVar27 = str_1001f326;
      iVar7 = extraout_r3_07;
    }
    goto LAB_10016b18;
  default:
    local_4b0[0] = 3;
    puVar32 = *(undefined8 **)(param_1 + 0x140);
    recovered_100038f0(puVar32,(undefined8 *)local_4b0,(undefined8 *)0x1);
    PF_PART4(local_4b0, 0) =
         uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
         uVar30 >> 0x18;
    recovered_100038f0((undefined8 *)((int)puVar32 + 1),(undefined8 *)local_4b0,
                       (undefined8 *)&UndefinedInstruction);
    uVar3 = 5;
LAB_10016914:
    recovered_100136d0(param_1,puVar32,uVar3);
    break;
  case '\x14':
    if (puVar32 < (undefined8 *)0x2001) {
      PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)(uint7)PF_PART7(local_4b0, 1) << 8);
      recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)pcVar27,(undefined8 *)0x1);
      bVar36 = puVar32 < (undefined8 *)0x11;
      puVar31 = (undefined8 *)0x11;
      if (bVar36) {
        puVar31 = (undefined8 *)0x1;
      }
      uVar3 = extraout_r3_06;
      iVar7 = 0;
      do {
        local_230 = 0;
        bVar36 = (bool)(bVar36 | (uint)((int)puVar32 - (int)puVar31) < 4);
        if (bVar36) {
          uVar4 = 0;
          pcVar8 = (char *)0x0;
LAB_10016b5c:
          *(uint *)((int)auStack_734 + iVar7 * -4 + 0x84) = uVar4;
        }
        else {
          recovered_100038f0((undefined8 *)&local_230,(undefined8 *)(pcVar27 + (int)puVar31),
                             (undefined8 *)&UndefinedInstruction);
          pcVar8 = (char *)0x0;
          *(undefined4 *)((int)auStack_734 + iVar7 * -4 + 0x84) = 0;
          puVar28 = (undefined8 *)((int)puVar31 + 4);
          uVar3 = (int)puVar32 - (int)puVar28;
          uVar4 = local_230 << 0x18 | (local_230 >> 8 & 0xff) << 0x10 |
                  (local_230 >> 0x10 & 0xff) << 8 | local_230 >> 0x18;
          if (uVar4 <= uVar3) {
            puVar31 = (undefined8 *)(uVar4 + (int)puVar28);
            pcVar8 = pcVar27 + (int)puVar28;
            goto LAB_10016b5c;
          }
          bVar36 = true;
          puVar31 = puVar28;
        }
        *(char **)(local_4b0 + iVar7 * -4) = pcVar8;
        bVar37 = iVar7 != -9;
        iVar7 = iVar7 + -1;
      } while (bVar37);
      local_230 = local_230 & 0xffffff00;
      if (!(bool)(bVar36 | puVar31 == puVar32)) {
        recovered_100038f0((undefined8 *)&local_230,(undefined8 *)(pcVar27 + (int)puVar31),
                           (undefined8 *)0x1);
        uVar4 = local_230 & 0xff;
        local_230 = 0;
        uVar3 = extraout_r3_08;
        if (3 < (uint)((int)puVar32 - ((int)puVar31 + 1))) {
          recovered_100038f0((undefined8 *)&local_230,(undefined8 *)(pcVar27 + (int)puVar31 + 1),
                             (undefined8 *)&UndefinedInstruction);
          recovered_1000c340((int)pcVar27,(uint)puVar32);
          recovered_100038f0(*(undefined8 **)(param_1 + 0x4ac),(undefined8 *)pcVar27,puVar32);
          *(undefined8 **)(param_1 + 0x4b0) = puVar32;
          *(undefined1 *)(param_1 + 0x4a7) = 1;
          if (*(char *)(param_1 + 0x4a6) == '\0') {
            recovered_1001309c(param_1);
          }
          uVar3 = CONCAT13(PF_PART1(local_6b0, 3),
                           CONCAT12(PF_PART1(local_6b0, 2),CONCAT11(PF_PART1(local_6b0, 1),(byte)local_6b0)));
          uVar5 = PF_PART4(local_4b0, 0);
          uVar30 = recovered_100049b4(((uintptr_t)pf_module_state + 0x7c8U));
          if (uVar5 == 0) {
            recovered_100049b4(((uintptr_t)pf_module_state + 0x7daU));
            uVar24 = extraout_r3_15;
          }
          else {
            uVar12 = 0;
            do {
              if (uVar3 < uVar12) break;
              bVar36 = false;
              uVar14 = uVar12;
              if ((uVar12 < uVar3) && (bVar36 = true, *(char *)(uVar5 + uVar12) != ',')) {
                do {
                  uVar14 = uVar14 + 1;
                  if (uVar3 == uVar14) {
                    uVar14 = uVar3;
                    goto LAB_100171e0;
                  }
                } while (*(char *)(uVar5 + uVar14) != ',');
LAB_100171e0:
                bVar36 = false;
                if (uVar14 < uVar3) {
                  bVar36 = true;
                }
              }
              if ((uVar14 - uVar12 == uVar30) &&
                 (iVar7 = recovered_100046ac((uint *)(uVar5 + uVar12),(uint *)str_1001f3a0,uVar30),
                 iVar7 == 0)) goto LAB_100172e4;
              uVar12 = uVar14 + 1;
            } while (bVar36);
            uVar30 = recovered_100049b4(((uintptr_t)pf_module_state + 0x7daU));
            uVar12 = 0;
            uVar24 = extraout_r3_11;
            do {
              if (uVar3 < uVar12) break;
              bVar36 = false;
              uVar14 = uVar12;
              if ((uVar12 < uVar3) && (bVar36 = true, *(char *)(uVar5 + uVar12) != ',')) {
                do {
                  uVar14 = uVar14 + 1;
                  if (uVar3 == uVar14) {
                    uVar14 = uVar3;
                    goto LAB_100172ac;
                  }
                } while (*(char *)(uVar5 + uVar14) != ',');
LAB_100172ac:
                bVar36 = false;
                if (uVar14 < uVar3) {
                  bVar36 = true;
                }
              }
              if (uVar14 - uVar12 == uVar30) {
                iVar7 = recovered_100046ac((uint *)(uVar5 + uVar12),(uint *)str_1001f3b2,uVar30);
                uVar24 = extraout_r3_12;
                if (iVar7 == 0) goto LAB_100172e4;
              }
              uVar12 = uVar14 + 1;
            } while (bVar36);
          }
          recovered_1000be98(param_1,3,str_1001f3cf,uVar24);
          break;
        }
      }
      recovered_1000be98(param_1,2,str_1001f38e,uVar3);
    }
    else {
      recovered_1000be98(param_1,3,str_1001f37c,pbVar22);
    }
    break;
  case '\x15':
    if ((*(char *)(param_1 + 0x4a5) == '\x01') && (*(char *)(param_1 + 0x7f4) != '\0')) {
      recovered_100038f0((undefined8 *)(param_1 + 0x14c),(undefined8 *)piVar10,(undefined8 *)0x19c);
      *(undefined1 *)(param_1 + 0x809) = 1;
      iVar7 = 0;
      do {
        *(undefined1 *)((int)piVar10 + iVar7) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x19c);
      iVar7 = 0;
      do {
        *(undefined1 *)((int)piVar9 + iVar7) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x19c);
      *(undefined1 *)(param_1 + 0x7f4) = 0;
      if (*(char *)(param_1 + 0x808) == '\x01') {
        *(undefined2 *)(param_1 + 0x4a5) = 0;
        *(undefined1 *)(param_1 + 0x4a7) = 0;
        if (*(int *)(param_1 + 0x10) == 1) {
          *(undefined4 *)(param_1 + 0x10) = 2;
        }
      }
    }
    else {
      recovered_1000be98(param_1,2,str_1001f4bb,pbVar22);
    }
    break;
  case '\x1e':
    cVar35 = *(char *)(param_1 + 0x4a5);
    bVar36 = cVar35 == '\x01';
    if (bVar36) {
      cVar35 = *(char *)(param_1 + 0x4a7);
    }
    if ((bVar36 && cVar35 == '\x01') && (*(char *)(param_1 + 0x4a6) != '\0')) {
      PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)(uint7)PF_PART7(local_4b0, 1) << 8);
      recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)pcVar27,(undefined8 *)0x1);
      PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffff00000000);
      iVar7 = extraout_r3_09;
      if (&UndefinedInstruction < puVar32) {
        recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 6),
                           (undefined8 *)&UndefinedInstruction);
        uVar3 = PF_PART4(local_4b0, 0) << 0x18 | ((uint)PF_PART4(local_4b0, 0) >> 8 & 0xff) << 0x10 |
                ((uint)PF_PART4(local_4b0, 0) >> 0x10 & 0xff) << 8 | (uint)PF_PART4(local_4b0, 0) >> 0x18;
        iVar7 = extraout_r3_10;
        if ((uVar3 <= (int)puVar32 - 5U) && (uVar3 == 0x20)) {
          puVar32 = (undefined8 *)((int)puVar34 + 10);
          recovered_1000c340((int)puVar32,0x20);
          recovered_10004080(local_4b0,0,0x18);
          PF_PART4(local_4b0, 0) = 0x18;
          if ((_DAT_40010800 == 0x50414d57) &&
             (((_DAT_40010804 != 0 && (0x16b < _DAT_40010808)) && (_DAT_40010968 != (code *)0x0))))
          {
            (*_DAT_40010968)(local_4b0);
          }
          recovered_1000c340((int)local_4b0,0x18);
          recovered_1000cff0((int)&local_79c,0x20);
          recovered_1001b030(auStack_7bc,(uint *)&local_79c,((uintptr_t)pf_module_state + 0x1265U));
          recovered_1001b030(&local_7dc,(uint *)&local_79c,(int)puVar32);
          if (((((((((((((((((((((((((((((((local_7db == '\0' && local_7dc == '\0') &&
                                          local_7da == '\0') && local_7d9 == '\0') &&
                                        local_7d8 == '\0') && local_7d7 == '\0') &&
                                      local_7d6 == '\0') && local_7d5 == '\0') && local_7d4 == '\0')
                                   && local_7d3 == '\0') && local_7d2 == '\0') && local_7d1 == '\0')
                                && local_7d0 == '\0') && local_7cf == '\0') && local_7ce == '\0') &&
                             local_7cd == '\0') && local_7cc == '\0') && local_7cb == '\0') &&
                          local_7ca == '\0') && local_7c9 == '\0') && local_7c8 == '\0') &&
                       local_7c7 == '\0') && local_7c6 == '\0') && local_7c5 == '\0') &&
                    local_7c4 == '\0') && local_7c3 == '\0') && local_7c2 == '\0') &&
                 local_7c1 == '\0') && local_7c0 == '\0') && local_7bf == '\0') && local_7be == '\0'
              ) && local_7bd == '\0') {
            local_79c = 0;
            local_79b = 0;
            local_79a = 0;
            local_799 = 0;
            local_798 = 0;
            local_797 = 0;
            local_796 = 0;
            local_795 = 0;
            local_794 = 0;
            local_793 = 0;
            local_792 = 0;
            local_791 = 0;
            local_790 = 0;
            local_78f = 0;
            local_78e = 0;
            local_78d = 0;
            local_78c = 0;
            local_78b = 0;
            local_78a = 0;
            local_789 = 0;
            local_788 = 0;
            local_787 = 0;
            local_786 = 0;
            local_785 = 0;
            local_784 = 0;
            local_783 = 0;
            local_782 = 0;
            local_781 = 0;
            local_780 = 0;
            local_77f = 0;
            local_77e = 0;
            local_77d = 0;
            recovered_1000be98(param_1,3,str_1001f50a,0);
            break;
          }
          if (local_7dc == '\0') {
            if (local_7db != '\0') {
              iVar7 = 1;
              pcVar27 = &local_7db;
              cVar35 = local_7db;
              goto LAB_10017aa0;
            }
            if (local_7da != '\0') {
              iVar7 = 2;
              pcVar27 = &local_7da;
              cVar35 = local_7da;
              goto LAB_10017aa0;
            }
            if (local_7d9 != '\0') {
              iVar7 = 3;
              pcVar27 = &local_7d9;
              cVar35 = local_7d9;
              goto LAB_10017aa0;
            }
            if (local_7d8 != '\0') {
              iVar7 = 4;
              pcVar27 = &local_7d8;
              cVar35 = local_7d8;
              goto LAB_10017aa0;
            }
            if (local_7d7 != '\0') {
              iVar7 = 5;
              pcVar27 = &local_7d7;
              cVar35 = local_7d7;
              goto LAB_10017aa0;
            }
            if (local_7d6 != '\0') {
              iVar7 = 6;
              pcVar27 = &local_7d6;
              cVar35 = local_7d6;
              goto LAB_10017aa0;
            }
            if (local_7d5 != '\0') {
              iVar7 = 7;
              pcVar27 = &local_7d5;
              cVar35 = local_7d5;
              goto LAB_10017aa0;
            }
            if (local_7d4 != '\0') {
              iVar7 = 8;
              pcVar27 = &local_7d4;
              cVar35 = local_7d4;
              goto LAB_10017aa0;
            }
            if (local_7d3 != '\0') {
              iVar7 = 9;
              pcVar27 = &local_7d3;
              cVar35 = local_7d3;
              goto LAB_10017aa0;
            }
            if (local_7d2 != '\0') {
              iVar7 = 10;
              pcVar27 = &local_7d2;
              cVar35 = local_7d2;
              goto LAB_10017aa0;
            }
            if (local_7d1 != '\0') {
              iVar7 = 0xb;
              pcVar27 = &local_7d1;
              cVar35 = local_7d1;
              goto LAB_10017aa0;
            }
            if (local_7d0 != '\0') {
              iVar7 = 0xc;
              pcVar27 = &local_7d0;
              cVar35 = local_7d0;
              goto LAB_10017aa0;
            }
            if (local_7cf != '\0') {
              iVar7 = 0xd;
              pcVar27 = &local_7cf;
              cVar35 = local_7cf;
              goto LAB_10017aa0;
            }
            if (local_7ce != '\0') {
              iVar7 = 0xe;
              pcVar27 = &local_7ce;
              cVar35 = local_7ce;
              goto LAB_10017aa0;
            }
            if (local_7cd != '\0') {
              iVar7 = 0xf;
              pcVar27 = &local_7cd;
              cVar35 = local_7cd;
              goto LAB_10017aa0;
            }
            if (local_7cc != '\0') {
              iVar7 = 0x10;
              pcVar27 = &local_7cc;
              cVar35 = local_7cc;
              goto LAB_10017aa0;
            }
            if (local_7cb != '\0') {
              iVar7 = 0x11;
              pcVar27 = &local_7cb;
              cVar35 = local_7cb;
              goto LAB_10017aa0;
            }
            if (local_7ca != '\0') {
              iVar7 = 0x12;
              pcVar27 = &local_7ca;
              cVar35 = local_7ca;
              goto LAB_10017aa0;
            }
            if (local_7c9 != '\0') {
              iVar7 = 0x13;
              pcVar27 = &local_7c9;
              cVar35 = local_7c9;
              goto LAB_10017aa0;
            }
            if (local_7c8 != '\0') {
              iVar7 = 0x14;
              pcVar27 = &local_7c8;
              cVar35 = local_7c8;
              goto LAB_10017aa0;
            }
            if (local_7c7 != '\0') {
              iVar7 = 0x15;
              pcVar27 = &local_7c7;
              cVar35 = local_7c7;
              goto LAB_10017aa0;
            }
            if (local_7c6 != '\0') {
              iVar7 = 0x16;
              pcVar27 = &local_7c6;
              cVar35 = local_7c6;
              goto LAB_10017aa0;
            }
            if (local_7c5 != '\0') {
              iVar7 = 0x17;
              pcVar27 = &local_7c5;
              cVar35 = local_7c5;
              goto LAB_10017aa0;
            }
            if (local_7c4 != '\0') {
              iVar7 = 0x18;
              pcVar27 = &local_7c4;
              cVar35 = local_7c4;
              goto LAB_10017aa0;
            }
            if (local_7c3 != '\0') {
              iVar7 = 0x19;
              pcVar27 = &local_7c3;
              cVar35 = local_7c3;
              goto LAB_10017aa0;
            }
            if (local_7c2 != '\0') {
              iVar7 = 0x1a;
              pcVar27 = &local_7c2;
              cVar35 = local_7c2;
              goto LAB_10017aa0;
            }
            if (local_7c1 != '\0') {
              iVar7 = 0x1b;
              pcVar27 = &local_7c1;
              cVar35 = local_7c1;
              goto LAB_10017aa0;
            }
            if (local_7c0 != '\0') {
              iVar7 = 0x1c;
              pcVar27 = &local_7c0;
              cVar35 = local_7c0;
              goto LAB_10017aa0;
            }
            if (local_7bf != '\0') {
              iVar7 = 0x1d;
              pcVar27 = &local_7bf;
              cVar35 = local_7bf;
              goto LAB_10017aa0;
            }
            if (local_7be != '\0') {
              iVar7 = 0x1e;
              pcVar27 = &local_7be;
              cVar35 = local_7be;
              goto LAB_10017aa0;
            }
            if (local_7bd != '\0') {
              iVar7 = 0x1f;
              pcVar27 = &local_7bd;
              cVar35 = local_7bd;
              goto LAB_10017aa0;
            }
            PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)(uint)PF_PART4(local_4b0, 4) << 0x20);
            local_ab0 = (undefined8 *)&UndefinedInstruction;
            recovered_100038f0((undefined8 *)local_804,(undefined8 *)local_4b0,
                               (undefined8 *)&UndefinedInstruction);
          }
          else {
            iVar7 = 0;
            pcVar27 = &local_7dc;
            cVar35 = local_7dc;
LAB_10017aa0:
            if (cVar35 < '\0') {
              PF_PART8(local_4b0, 0) = (uint64_t)
                          ((ulonglong)CONCAT41(PF_PART4(local_4b0, 4),'!' - (char)iVar7) << 0x18);
              recovered_100038f0((undefined8 *)local_804,(undefined8 *)local_4b0,
                                 (undefined8 *)&UndefinedInstruction);
              PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffffffffff00);
              recovered_100038f0((undefined8 *)(local_804 + 4),(undefined8 *)local_4b0,
                                 (undefined8 *)0x1);
              local_ab0 = (undefined8 *)(0x20 - iVar7);
              iVar7 = 5;
              puVar31 = (undefined8 *)&local_7ff;
            }
            else {
              local_ab0 = (undefined8 *)(0x20 - iVar7);
              PF_PART4(local_4b0, 0) = (int)local_ab0 * 0x1000000;
              iVar7 = 4;
              recovered_100038f0((undefined8 *)local_804,(undefined8 *)local_4b0,
                                 (undefined8 *)&UndefinedInstruction);
              puVar31 = (undefined8 *)(local_804 + 4);
            }
            recovered_100038f0(puVar31,(undefined8 *)pcVar27,local_ab0);
            local_ab0 = (undefined8 *)((int)local_ab0 + iVar7);
          }
          local_8c0 = (undefined4)(*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
          uStack_8bc = 0x9b05688cU;
          uStack_8b8 = (undefined4)(*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
          uStack_8b4 = 0x5be0cd19U;
          local_8d0 = (uint)(*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
          uStack_8cc = 0xbb67ae85U;
          uStack_8c8 = (undefined4)(*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
          uStack_8c4 = 0xa54ff53aU;
          local_8ac = 0;
          local_8b0 = (undefined1 *)0x0;
          local_868 = 0;
          uVar3 = recovered_100049b4((int)puVar11);
          puVar31 = (undefined8 *)&UndefinedInstruction;
          puVar34 = &local_8d4;
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          local_8d4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                      uVar3 >> 0x18;
          local_8ac = local_8ac + (uint)bVar36;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar31 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar34 = (uint *)((int)puVar34 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar31 = (undefined8 *)recovered_100049b4((int)puVar11);
          bVar36 = CARRY4((uint)local_8b0,(uint)puVar31);
          local_8b0 = (undefined1 *)((int)local_8b0 + (int)puVar31);
          local_8ac = local_8ac + (uint)bVar36;
          if (puVar31 != (undefined8 *)0x0) {
            puVar28 = puVar11;
            do {
              puVar29 = (undefined8 *)(0x40U - local_868);
              if (puVar31 < (undefined8 *)(0x40U - local_868)) {
                puVar29 = puVar31;
              }
              recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar28,puVar29);
              local_868 = local_868 + (int)puVar29;
              if (local_868 == 0x40) {
                recovered_10010ee4(&local_8d0,(int)auStack_8a8);
                local_868 = 0;
              }
              puVar31 = (undefined8 *)((int)puVar31 - (int)puVar29);
              puVar28 = (undefined8 *)((int)puVar28 + (int)puVar29);
            } while (puVar31 != (undefined8 *)0x0);
          }
          uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x94bU));
          puVar34 = &local_8d4;
          local_8d4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                      uVar3 >> 0x18;
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          local_8ac = local_8ac + (uint)bVar36;
          puVar31 = (undefined8 *)&UndefinedInstruction;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar31 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar34 = (uint *)((int)puVar34 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          pcVar27 = str_1001f523;
          puVar31 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x94bU));
          bVar36 = CARRY4((uint)local_8b0,(uint)puVar31);
          local_8b0 = (undefined1 *)((int)local_8b0 + (int)puVar31);
          local_8ac = local_8ac + (uint)bVar36;
          if (puVar31 != (undefined8 *)0x0) {
            do {
              puVar28 = (undefined8 *)(0x40U - local_868);
              if (puVar31 < (undefined8 *)(0x40U - local_868)) {
                puVar28 = puVar31;
              }
              recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)pcVar27,
                                 puVar28);
              local_868 = local_868 + (int)puVar28;
              if (local_868 == 0x40) {
                recovered_10010ee4(&local_8d0,(int)auStack_8a8);
                local_868 = 0;
              }
              puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
              pcVar27 = pcVar27 + (int)puVar28;
            } while (puVar31 != (undefined8 *)0x0);
          }
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          puVar34 = &local_8d4;
          puVar31 = (undefined8 *)&UndefinedInstruction;
          local_8ac = local_8ac + (uint)bVar36;
          uVar3 = *(uint *)(param_1 + 0x4b0);
          local_8d4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                      uVar3 >> 0x18;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar31 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar34 = (uint *)((int)puVar34 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar31 = *(undefined8 **)(param_1 + 0x4ac);
          puVar28 = *(undefined8 **)(param_1 + 0x4b0);
          bVar36 = CARRY4((uint)local_8b0,(uint)puVar28);
          local_8b0 = (undefined1 *)((int)local_8b0 + (int)puVar28);
          local_8ac = local_8ac + (uint)bVar36;
          if (puVar28 != (undefined8 *)0x0) {
            do {
              puVar29 = (undefined8 *)(0x40U - local_868);
              if (puVar28 < (undefined8 *)(0x40U - local_868)) {
                puVar29 = puVar28;
              }
              recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar31,puVar29);
              local_868 = local_868 + (int)puVar29;
              if (local_868 == 0x40) {
                recovered_10010ee4(&local_8d0,(int)auStack_8a8);
                local_868 = 0;
              }
              puVar28 = (undefined8 *)((int)puVar28 - (int)puVar29);
              puVar31 = (undefined8 *)((int)puVar31 + (int)puVar29);
            } while (puVar28 != (undefined8 *)0x0);
          }
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          puVar34 = &local_8d4;
          puVar31 = (undefined8 *)&UndefinedInstruction;
          local_8ac = local_8ac + (uint)bVar36;
          uVar3 = *(uint *)(param_1 + 0x4b8);
          local_8d4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                      uVar3 >> 0x18;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar31 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar34 = (uint *)((int)puVar34 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar31 = *(undefined8 **)(param_1 + 0x4b4);
          puVar28 = *(undefined8 **)(param_1 + 0x4b8);
          bVar36 = CARRY4((uint)local_8b0,(uint)puVar28);
          local_8b0 = (undefined1 *)((int)local_8b0 + (int)puVar28);
          local_8ac = local_8ac + (uint)bVar36;
          if (puVar28 != (undefined8 *)0x0) {
            do {
              puVar29 = (undefined8 *)(0x40U - local_868);
              if (puVar28 < (undefined8 *)(0x40U - local_868)) {
                puVar29 = puVar28;
              }
              recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar31,puVar29);
              local_868 = local_868 + (int)puVar29;
              if (local_868 == 0x40) {
                recovered_10010ee4(&local_8d0,(int)auStack_8a8);
                local_868 = 0;
              }
              puVar28 = (undefined8 *)((int)puVar28 - (int)puVar29);
              puVar31 = (undefined8 *)((int)puVar31 + (int)puVar29);
            } while (puVar28 != (undefined8 *)0x0);
          }
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          puVar34 = &local_8d4;
          puVar31 = (undefined8 *)&UndefinedInstruction;
          local_8ac = local_8ac + (uint)bVar36;
          local_8d4 = (int)DAT_10024f80 << 0x18 | ((uint)DAT_10024f80 >> 8 & 0xff) << 0x10 |
                      ((uint)DAT_10024f80 >> 0x10 & 0xff) << 8 | (uint)DAT_10024f80 >> 0x18;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar31 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar34 = (uint *)((int)puVar34 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          bVar36 = CARRY4((uint)local_8b0,(uint)DAT_10024f80);
          local_8b0 = (undefined1 *)((int)local_8b0 + (int)DAT_10024f80);
          local_8ac = local_8ac + (uint)bVar36;
          if (DAT_10024f80 != (undefined8 *)0x0) {
            puVar28 = (undefined8 *)&DAT_10024f4c;
            puVar31 = DAT_10024f80;
            do {
              puVar29 = (undefined8 *)(0x40 - local_868);
              if (puVar31 < (undefined8 *)(0x40 - local_868)) {
                puVar29 = puVar31;
              }
              recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar28,puVar29);
              local_868 = local_868 + (int)puVar29;
              if (local_868 == 0x40) {
                recovered_10010ee4(&local_8d0,(int)auStack_8a8);
                local_868 = 0;
              }
              puVar31 = (undefined8 *)((int)puVar31 - (int)puVar29);
              puVar28 = (undefined8 *)((int)puVar28 + (int)puVar29);
            } while (puVar31 != (undefined8 *)0x0);
          }
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          local_8ac = local_8ac + (uint)bVar36;
          puVar34 = &local_8d4;
          puVar31 = (undefined8 *)&UndefinedInstruction;
          local_8d4 = 0x20000000;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar31 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar34 = (uint *)((int)puVar34 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar31 = (undefined8 *)0x20;
          bVar36 = 0xffffffdf < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 0x20);
          local_8ac = local_8ac + (uint)bVar36;
          do {
            puVar28 = (undefined8 *)(0x40U - local_868);
            if (puVar31 < (undefined8 *)(0x40U - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar32,puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar32 = (undefined8 *)((int)puVar32 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar34 = &local_8d4;
          puVar32 = (undefined8 *)&UndefinedInstruction;
          bVar36 = 0xfffffffb < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 4);
          local_8ac = local_8ac + (uint)bVar36;
          do {
            puVar31 = (undefined8 *)(0x40 - local_868);
            if (puVar32 < (undefined8 *)(0x40 - local_868)) {
              puVar31 = puVar32;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),(undefined8 *)puVar34,
                               puVar31);
            local_868 = local_868 + (int)puVar31;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar32 = (undefined8 *)((int)puVar32 - (int)puVar31);
            puVar34 = (uint *)((int)puVar34 + (int)puVar31);
          } while (puVar32 != (undefined8 *)0x0);
          puVar32 = auStack_7bc;
          puVar31 = (undefined8 *)0x20;
          bVar36 = 0xffffffdf < local_8b0;
          local_8b0 = (undefined1 *)((int)local_8b0 + 0x20);
          local_8ac = local_8ac + (uint)bVar36;
          do {
            puVar28 = (undefined8 *)(0x40U - local_868);
            if (puVar31 < (undefined8 *)(0x40U - local_868)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar32,puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar32 = (undefined8 *)((int)puVar32 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar31 = (undefined8 *)local_804;
          bVar36 = CARRY4((uint)local_8b0,(uint)local_ab0);
          local_8b0 = (undefined1 *)((int)local_8b0 + (int)local_ab0);
          local_8ac = local_8ac + (uint)bVar36;
          puVar32 = local_ab0;
          do {
            puVar28 = (undefined8 *)(0x40 - local_868);
            if (puVar32 < (undefined8 *)(0x40 - local_868)) {
              puVar28 = puVar32;
            }
            recovered_100038f0((undefined8 *)((int)auStack_8a8 + local_868),puVar31,puVar28);
            local_868 = local_868 + (int)puVar28;
            if (local_868 == 0x40) {
              recovered_10010ee4(&local_8d0,(int)auStack_8a8);
              local_868 = 0;
            }
            puVar32 = (undefined8 *)((int)puVar32 - (int)puVar28);
            puVar31 = (undefined8 *)((int)puVar31 + (int)puVar28);
          } while (puVar32 != (undefined8 *)0x0);
          recovered_1000dcc0(&local_8d0,auStack_824);
          if (*(char *)(param_1 + 0x4a4) == '\0') {
            recovered_100038f0((undefined8 *)(param_1 + 0x484),(undefined8 *)auStack_824,
                               (undefined8 *)0x20);
            *(undefined1 *)(param_1 + 0x4a4) = 1;
          }
          local_200 = CONCAT44(0x1f83d9abU,(undefined4)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}));
          uStack_1f8 = CONCAT44(0x5be0cd19U,(undefined4)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}));
          uStack_228 = CONCAT44(0xbb67ae85U,(undefined4)(*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL}));
          local_210 = CONCAT44(0x510e527fU,(undefined4)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}));
          uStack_208 = CONCAT44(0x9b05688cU,(undefined4)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}));
          local_220 = CONCAT44(0x3c6ef372U,(undefined4)(*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL}));
          uStack_218 = CONCAT44(0xa54ff53aU,(undefined4)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}));
          local_1ec = 0;
          local_1f0 = 0x20;
          local_230 = (uint)(*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL});
          uStack_22c = 0x6a09e667U;
          local_168 = 0;
          recovered_100038f0(auStack_1e8,(undefined8 *)&DAT_10024f0c,(undefined8 *)0x20);
          local_168 = local_168 + 0x20;
          if (local_168 == 0x80) {
            recovered_1000c530(&local_230,(int)auStack_1e8);
            local_168 = 0;
          }
          recovered_1000d760(&local_230,local_270);
          local_76c = CONCAT44(0x3c6ef372U,(undefined4)(*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL}));
          uStack_764 = CONCAT44(0xa54ff53aU,(undefined4)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}));
          local_75c = CONCAT44(0x510e527fU,(undefined4)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}));
          uStack_754 = CONCAT44(0x9b05688cU,(undefined4)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}));
          local_270[0] = local_270[0] & 0xf8;
          local_270[0x1f] = local_270[0x1f] & 0x3f | 0x40;
          local_74c = CONCAT44(0x1f83d9abU,(undefined4)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}));
          uStack_744 = CONCAT44(0x5be0cd19U,(undefined4)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}));
          local_738 = 0;
          local_73c = 0x20;
          local_77c = CONCAT44(0x6a09e667U,(uint)(*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL}));
          uStack_774 = CONCAT44(0xbb67ae85U,(undefined4)(*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL}));
          local_6b4 = 0;
          recovered_100038f0(auStack_734,&local_250,(undefined8 *)0x20);
          local_6b4 = local_6b4 + 0x20;
          if (local_6b4 == 0x80) {
            recovered_1000c530((uint *)&local_77c,(int)auStack_734);
            local_6b4 = 0;
          }
          puVar34 = auStack_824;
          puVar32 = (undefined8 *)0x20;
          bVar36 = 0xffffffdf < local_73c;
          local_73c = local_73c + 0x20;
          local_738 = local_738 + (uint)bVar36;
          do {
            puVar31 = (undefined8 *)(0x80U - local_6b4);
            if (puVar32 < (undefined8 *)(0x80U - local_6b4)) {
              puVar31 = puVar32;
            }
            recovered_100038f0((undefined8 *)((int)auStack_734 + local_6b4),(undefined8 *)puVar34,
                               puVar31);
            local_6b4 = local_6b4 + (int)puVar31;
            if (local_6b4 == 0x80) {
              recovered_1000c530((uint *)&local_77c,(int)auStack_734);
              local_6b4 = 0;
            }
            puVar32 = (undefined8 *)((int)puVar32 - (int)puVar31);
            puVar34 = (uint *)((int)puVar34 + (int)puVar31);
          } while (puVar32 != (undefined8 *)0x0);
          recovered_1000d760((undefined4 *)&local_77c,(undefined1 *)&local_2b0);
          recovered_1001d518((undefined4 *)&local_2b0);
          recovered_1000dfa0((uint128 *)&local_6b0,(int)&local_2b0);
          recovered_100105dc((undefined8 *)auStack_160,auStack_5b0);
          recovered_1000e2e0(&local_230,(int)&local_6b0,(uint128 *)auStack_160);
          recovered_1000e2e0(auStack_e0,(int)auStack_630,(uint128 *)auStack_160);
          recovered_10010704(auStack_864,auStack_e0);
          recovered_10010704(local_60,&local_230);
          local_76c = CONCAT44(0x3c6ef372U,(undefined4)(*(uint64_t *)(uint64_t[]){0x3c6ef372fe94f82bULL}));
          uStack_764 = CONCAT44(0xa54ff53aU,(undefined4)(*(uint64_t *)(uint64_t[]){0xa54ff53a5f1d36f1ULL}));
          PF_PART8(auVar54, 8) = uStack_764;
          PF_PART8(auVar54, 0) = local_76c;
          local_75c = CONCAT44(0x510e527fU,(undefined4)(*(uint64_t *)(uint64_t[]){0x510e527fade682d1ULL}));
          uStack_754 = CONCAT44(0x9b05688cU,(undefined4)(*(uint64_t *)(uint64_t[]){0x9b05688c2b3e6c1fULL}));
          PF_PART8(auVar49, 8) = uStack_754;
          PF_PART8(auVar49, 0) = local_75c;
          local_74c = CONCAT44(0x1f83d9abU,(undefined4)(*(uint64_t *)(uint64_t[]){0x1f83d9abfb41bd6bULL}));
          uStack_744 = CONCAT44(0x5be0cd19U,(undefined4)(*(uint64_t *)(uint64_t[]){0x5be0cd19137e2179ULL}));
          local_77c = CONCAT44(0x6a09e667U,(uint)(*(uint64_t *)(uint64_t[]){0x6a09e667f3bcc908ULL}));
          uStack_774 = CONCAT44(0xbb67ae85U,(undefined4)(*(uint64_t *)(uint64_t[]){0xbb67ae8584caa73bULL}));
          PF_PART8(auVar56, 8) = uStack_774;
          PF_PART8(auVar56, 0) = local_77c;
          local_845 = local_845 ^ local_60[0] << 7;
          local_6b4 = 0;
          local_738 = 0;
          local_73c = 0x20;
          recovered_100038f0(auStack_734,auStack_864,(undefined8 *)0x20);
          local_6b4 = local_6b4 + 0x20;
          if (local_6b4 == 0x80) {
            recovered_1000c530((uint *)&local_77c,(int)auStack_734);
            local_6b4 = 0;
          }
          puVar31 = (undefined8 *)0x20;
          bVar36 = 0xffffffdf < local_73c;
          local_73c = local_73c + 0x20;
          local_738 = local_738 + (uint)bVar36;
          puVar32 = (undefined8 *)&DAT_10024f2c;
          do {
            puVar28 = (undefined8 *)(0x80U - local_6b4);
            if (puVar31 < (undefined8 *)(0x80U - local_6b4)) {
              puVar28 = puVar31;
            }
            recovered_100038f0((undefined8 *)((int)auStack_734 + local_6b4),puVar32,puVar28);
            local_6b4 = local_6b4 + (int)puVar28;
            if (local_6b4 == 0x80) {
              recovered_1000c530((uint *)&local_77c,(int)auStack_734);
              local_6b4 = 0;
            }
            puVar31 = (undefined8 *)((int)puVar31 - (int)puVar28);
            puVar32 = (undefined8 *)((int)puVar32 + (int)puVar28);
          } while (puVar31 != (undefined8 *)0x0);
          puVar34 = auStack_824;
          puVar32 = (undefined8 *)0x20;
          bVar36 = 0xffffffdf < local_73c;
          local_73c = local_73c + 0x20;
          local_738 = local_738 + (uint)bVar36;
          do {
            puVar31 = (undefined8 *)(0x80U - local_6b4);
            if (puVar32 < (undefined8 *)(0x80U - local_6b4)) {
              puVar31 = puVar32;
            }
            recovered_100038f0((undefined8 *)((int)auStack_734 + local_6b4),(undefined8 *)puVar34,
                               puVar31);
            local_6b4 = local_6b4 + (int)puVar31;
            if (local_6b4 == 0x80) {
              recovered_1000c530((uint *)&local_77c,(int)auStack_734);
              local_6b4 = 0;
            }
            puVar32 = (undefined8 *)((int)puVar32 - (int)puVar31);
            puVar34 = (uint *)((int)puVar34 + (int)puVar31);
          } while (puVar32 != (undefined8 *)0x0);
          recovered_1000d760((undefined4 *)&local_77c,(undefined1 *)&local_230);
          recovered_1001d518(&local_230);
          local_3b0 = uVar38;
          uStack_3ac = uVar39;
          uStack_3a8 = uVar40;
          uStack_3a4 = uVar41;
          local_3a0 = uVar38;
          uStack_39c = uVar39;
          uStack_398 = uVar40;
          uStack_394 = uVar41;
          local_390 = uVar38;
          uStack_38c = uVar39;
          uStack_388 = uVar40;
          uStack_384 = uVar41;
          PF_PART14(auVar53, 2) = PF_PART14(auVar54, 2);
          PF_PART2(auVar53, 0) = local_2ac;
          auVar53 = VectorCopyLong(CONCAT26(local_2b0,PF_PART6(auVar53, 0)),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar54, 10),1,1);
          auVar54 = VectorCopyLong(PF_PART8(auVar53, 0),2,1);
          PF_PART14(auVar48, 2) = PF_PART14(auVar49, 2);
          PF_PART2(auVar48, 0) = local_2ae;
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          auVar53 = VectorCopyLong(PF_PART8(auVar54, 0),4,1);
          auVar54 = VectorCopyLong(PF_PART8(auVar48, 0),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          local_370 = uVar38;
          uStack_36c = uVar39;
          uStack_368 = uVar40;
          uStack_364 = uVar41;
          auVar54 = VectorCopyLong(PF_PART8(auVar54, 0),2,1);
          auVar49 = VectorCopyLong(PF_PART8(auVar54, 0),4,1);
          local_380 = uVar38;
          uStack_37c = uVar39;
          uStack_378 = uVar40;
          uStack_374 = uVar41;
          local_360 = uVar38;
          uStack_35c = uVar39;
          uStack_358 = uVar40;
          uStack_354 = uVar41;
          local_350 = uVar38;
          uStack_34c = uVar39;
          uStack_348 = uVar40;
          uStack_344 = uVar41;
          local_340 = uVar38;
          uStack_33c = uVar39;
          uStack_338 = uVar40;
          uStack_334 = uVar41;
          local_330 = uVar38;
          uStack_32c = uVar39;
          uStack_328 = uVar40;
          uStack_324 = uVar41;
          local_320 = uVar38;
          uStack_31c = uVar39;
          uStack_318 = uVar40;
          uStack_314 = uVar41;
          local_310 = uVar38;
          uStack_30c = uVar39;
          uStack_308 = uVar40;
          uStack_304 = uVar41;
          local_300 = uVar38;
          uStack_2fc = uVar39;
          uStack_2f8 = uVar40;
          uStack_2f4 = uVar41;
          local_2f0 = uVar38;
          uStack_2ec = uVar39;
          uStack_2e8 = uVar40;
          uStack_2e4 = uVar41;
          local_2e0 = uVar38;
          uStack_2dc = uVar39;
          uStack_2d8 = uVar40;
          uStack_2d4 = uVar41;
          local_2d0 = uVar38;
          uStack_2cc = uVar39;
          uStack_2c8 = uVar40;
          uStack_2c4 = uVar41;
          local_2c0 = uVar38;
          uStack_2bc = uVar39;
          uStack_2b8 = uVar40;
          uStack_2b4 = uVar41;
          pauVar19 = (uint128 *)local_4b0;
          PF_PART8(local_4b0,0) = (uint64_t)PF_PART8(auVar43, 0);
          local_4a8 = PF_PART8(auVar43, 8);
          PF_PART14(auVar58, 2) = PF_PART14(auVar43, 2);
          PF_PART2(auVar58, 0) = local_2a2;
          auVar54 = VectorCopyLong(PF_PART8(auVar58, 0),1,1);
          auVar54 = VectorCopyLong(PF_PART8(auVar54, 0),2,1);
          PF_PART14(auVar50, 2) = PF_PART14(auVar49, 2);
          PF_PART2(auVar50, 0) = local_2a8;
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 10),1,1);
          auVar54 = VectorCopyLong(PF_PART8(auVar54, 0),4,1);
          auVar58 = VectorCopyLong(PF_PART8(auVar50, 0),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          local_440 = PF_PART8(auVar54, 0);
          uStack_438 = PF_PART8(auVar54, 8);
          PF_PART6(auVar51, 0) = PF_PART6(auVar50, 0);
          PF_PART2(auVar51, 6) = local_29c;
          PF_PART6(auVar51, 8) = PF_PART6(auVar49, 10);
          auVar58 = VectorCopyLong(PF_PART8(auVar58, 0),2,1);
          auVar54 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar49, 10),1,1);
          auVar58 = VectorCopyLong(PF_PART8(auVar58, 0),4,1);
          local_430 = PF_PART8(auVar54, 0);
          uStack_428 = PF_PART8(auVar54, 8);
          PF_PART14(auVar55, 2) = PF_PART14(auVar53, 2);
          PF_PART2(auVar55, 0) = local_2aa;
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          auVar60 = VectorCopyLong(CONCAT26(local_2a4,PF_PART6(auVar55, 0)),1,1);
          auVar59 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar53, 10),1,1);
          auVar53 = VectorCopyLong(PF_PART8(auVar60, 0),2,1);
          local_470 = PF_PART8(auVar58, 0);
          iVar7 = 0;
          PF_PART14(auVar57, 2) = PF_PART14(auVar56, 2);
          PF_PART2(auVar57, 0) = local_29e;
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          VectorCopyLong(PF_PART8(auVar53, 0),4,1);
          PF_PART14(auVar52, 2) = PF_PART14(auVar51, 2);
          PF_PART2(auVar52, 0) = local_29a;
          auVar53 = VectorCopyLong(PF_PART8(auVar57, 0),1,1);
          auVar56 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar52, 0),1,1);
          auVar53 = VectorCopyLong(PF_PART8(auVar53, 0),2,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          auVar53 = VectorCopyLong(PF_PART8(auVar53, 0),4,1);
          PF_PART14(auVar60, 2) = PF_PART14(auVar54, 2);
          PF_PART2(auVar60, 0) = local_298;
          auVar49 = VectorCopyLong(PF_PART8(auVar49, 12),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          auVar54 = VectorCopyLong(PF_PART8(auVar60, 0),1,1);
          auVar49 = VectorCopyLong(PF_PART8(auVar49, 0),2,1);
          local_450 = PF_PART8(auVar56, 0);
          uStack_448 = PF_PART8(auVar56, 8);
          auVar54 = VectorCopyLong(PF_PART8(auVar54, 0),2,1);
          local_420 = PF_PART8(auVar53, 0);
          uStack_418 = PF_PART8(auVar53, 8);
          auVar49 = VectorCopyLong(PF_PART8(auVar49, 0),4,1);
          local_410 = PF_PART8(auVar59, 0);
          uStack_408 = PF_PART8(auVar59, 8);
          auVar54 = VectorCopyLong(PF_PART8(auVar54, 0),4,1);
          local_400 = PF_PART8(auVar43, 0);
          uStack_3f8 = PF_PART8(auVar43, 8);
          local_460 = PF_PART8(auVar49, 0);
          uStack_458 = PF_PART8(auVar49, 8);
          local_3f0 = PF_PART8(auVar54, 0);
          uStack_3e8 = PF_PART8(auVar54, 8);
          PF_PART14(auVar59, 2) = PF_PART14(auVar54, 2);
          PF_PART2(auVar59, 0) = local_296;
          auVar43 = VectorCopyLong(PF_PART8(auVar59, 0),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          local_3e0 = PF_PART8(auVar43, 0);
          uStack_3d8 = PF_PART8(auVar43, 8);
          PF_PART14(auVar44, 2) = PF_PART14(auVar43, 2);
          PF_PART2(auVar44, 0) = local_294;
          auVar43 = VectorCopyLong(PF_PART8(auVar44, 0),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          local_3d0 = PF_PART8(auVar43, 0);
          uStack_3c8 = PF_PART8(auVar43, 8);
          PF_PART14(auVar45, 2) = PF_PART14(auVar43, 2);
          PF_PART2(auVar45, 0) = local_292;
          auVar43 = VectorCopyLong(PF_PART8(auVar45, 0),1,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
          auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
          local_3c0 = PF_PART8(auVar43, 0);
          uStack_3b8 = PF_PART8(auVar43, 8);
          do {
            uVar3 = (uint)*(byte *)((int)auStack_1e8 + iVar7 + -0x48);
            iVar25 = 0;
            pauVar20 = pauVar19;
            do {
              pbVar22 = local_270 + iVar25;
              iVar25 = iVar25 + 2;
              PF_PART14(auVar46, 2) = PF_PART14(auVar43, 2);
              PF_PART2(auVar46, 0) = *(undefined2 *)pbVar22;
              auVar43 = VectorCopyLong(PF_PART8(auVar46, 0),1,1);
              auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),2,1);
              auVar43 = VectorCopyLong(PF_PART8(auVar43, 0),4,1);
              PF_PART8(auVar47, 8) =
                   PF_PART8(auVar43, 8) & 0xffff0000ffff0000 |
                   (ulonglong)PF_PART4(auVar43, 8) * (ulonglong)uVar3 & 0xffff;
              PF_PART8(auVar47, 0) =
                   PF_PART8(auVar43, 0) & 0xffff0000ffff0000 |
                   (ulonglong)PF_PART4(auVar43, 0) * (ulonglong)uVar3 & 0xffff;
              auVar43 = VectorAdd(auVar47,*pauVar20,8);
              *(longlong *)(uintptr_t)pauVar20 = PF_PART8(auVar43, 0);
              *(longlong *)(((uint8_t *)(void *)pauVar20) + 8) = PF_PART8(auVar43, 8);
              pauVar20 = pauVar20 + 1;
            } while (iVar25 != 0x20);
            iVar7 = iVar7 + 1;
            pauVar19 = (uint128 *)(((uint8_t *)(void *)pauVar19) + 8);
          } while (iVar7 != 0x20);
          recovered_1001d588(auStack_844,(uint128 *)local_4b0);
          iVar7 = 0;
          local_270[0] = 0;
          local_270[1] = 0;
          local_270[2] = 0;
          local_270[3] = 0;
          local_270[4] = 0;
          local_270[5] = 0;
          local_270[6] = 0;
          local_270[7] = 0;
          local_270[8] = 0;
          local_270[9] = 0;
          local_270[10] = 0;
          local_270[0xb] = 0;
          local_270[0xc] = 0;
          local_270[0xd] = 0;
          local_270[0xe] = 0;
          local_270[0xf] = 0;
          local_270[0x10] = 0;
          local_270[0x11] = 0;
          local_270[0x12] = 0;
          local_270[0x13] = 0;
          local_270[0x14] = 0;
          local_270[0x15] = 0;
          local_270[0x16] = 0;
          local_270[0x17] = 0;
          local_270[0x18] = 0;
          local_270[0x19] = 0;
          local_270[0x1a] = 0;
          local_270[0x1b] = 0;
          local_270[0x1c] = 0;
          local_270[0x1d] = 0;
          local_270[0x1e] = 0;
          local_270[0x1f] = 0;
          PF_PART1(local_250, 0) = 0;
          PF_PART1(local_250, 1) = 0;
          PF_PART1(local_250, 2) = 0;
          PF_PART1(local_250, 3) = 0;
          PF_PART1(local_250, 4) = 0;
          PF_PART1(local_250, 5) = 0;
          PF_PART1(local_250, 6) = 0;
          PF_PART1(local_250, 7) = 0;
          local_248 = 0;
          local_247 = 0;
          local_246 = 0;
          local_245 = 0;
          local_244 = 0;
          local_243 = 0;
          local_242 = 0;
          local_241 = 0;
          local_240 = 0;
          local_23f = 0;
          local_23e = 0;
          local_23d = 0;
          local_23c = 0;
          local_23b = 0;
          local_23a = 0;
          local_239 = 0;
          local_238 = 0;
          local_237 = 0;
          local_236 = 0;
          local_235 = 0;
          local_234 = 0;
          local_233 = 0;
          local_232 = 0;
          local_231 = 0;
          local_2b0 = 0;
          local_2ae = 0;
          local_2ac = 0;
          local_2aa = 0;
          local_2a8 = 0;
          local_2a6 = 0;
          uStack_2a5 = 0;
          local_2a4 = 0;
          local_2a2 = 0;
          local_2a0 = 0;
          uStack_29f = 0;
          local_29e = 0;
          local_29c = 0;
          local_29a = 0;
          local_298 = 0;
          local_296 = 0;
          local_294 = 0;
          local_292 = 0;
          local_290 = 0;
          local_28f = 0;
          local_28e = 0;
          local_28d = 0;
          local_28c = 0;
          local_28b = 0;
          local_28a = 0;
          local_289 = 0;
          local_288 = 0;
          local_287 = 0;
          local_286 = 0;
          local_285 = 0;
          local_284 = 0;
          local_283 = 0;
          local_282 = 0;
          local_281 = 0;
          local_280 = 0;
          local_27f = 0;
          local_27e = 0;
          local_27d = 0;
          local_27c = 0;
          local_27b = 0;
          local_27a = 0;
          local_279 = 0;
          local_278 = 0;
          local_277 = 0;
          local_276 = 0;
          local_275 = 0;
          local_274 = 0;
          local_273 = 0;
          local_272 = 0;
          local_271 = 0;
          do {
            ((uint8_t *)(local_4b0))[iVar7] = 0;
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0x200);
          local_4b0[0] = 0x1f;
          puVar31 = *(undefined8 **)(param_1 + 0x140);
          recovered_100038f0(puVar31,(undefined8 *)local_4b0,(undefined8 *)0x1);
          puVar32 = DAT_10024f80;
          PF_PART4(local_4b0, 0) =
               (int)DAT_10024f80 << 0x18 | ((uint)DAT_10024f80 >> 8 & 0xff) << 0x10 |
               ((uint)DAT_10024f80 >> 0x10 & 0xff) << 8 | (uint)DAT_10024f80 >> 0x18;
          recovered_100038f0((undefined8 *)((int)puVar31 + 1),(undefined8 *)local_4b0,
                             (undefined8 *)&UndefinedInstruction);
          if (puVar32 < (undefined8 *)0x1ffc) {
            if (puVar32 == (undefined8 *)0x0) {
              uVar3 = 5;
              PF_PART4(local_4b0, 0) = 0x20000000;
            }
            else {
              recovered_100038f0((undefined8 *)((int)puVar31 + 5),(undefined8 *)&DAT_10024f4c,
                                 puVar32);
              uVar3 = (int)puVar32 + 5;
              PF_PART4(local_4b0, 0) = 0x20000000;
              if ((undefined8 *)0x1ff7 < puVar32) goto LAB_10018e38;
            }
            recovered_100038f0((undefined8 *)((int)puVar31 + uVar3),(undefined8 *)local_4b0,
                               (undefined8 *)&UndefinedInstruction);
            uVar3 = (int)puVar32 + 9;
            bVar18 = 1;
            if ((undefined8 *)0x1f < puVar32 + -0x3fb) {
              recovered_100038f0((undefined8 *)((int)puVar31 + uVar3),auStack_7bc,(undefined8 *)0x20
                                );
              uVar3 = (int)puVar32 + 0x29;
              bVar18 = 0;
            }
          }
          else {
            uVar3 = 5;
LAB_10018e38:
            bVar18 = 1;
          }
          puVar32 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0xe20U));
          PF_PART1(local_6b0, 0) = (byte)((uint)puVar32 >> 0x18);
          PF_PART1(local_6b0, 1) = (undefined1)((uint)puVar32 >> 0x10);
          PF_PART1(local_6b0, 2) = (byte)((uint)puVar32 >> 8);
          PF_PART1(local_6b0, 3) = (byte)puVar32;
          recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)&local_6b0,
                             (undefined8 *)&UndefinedInstruction);
          if (puVar32 < (undefined8 *)0x50) {
            if (puVar32 == (undefined8 *)0x0) {
              puVar28 = (undefined8 *)&UndefinedInstruction;
            }
            else {
              recovered_100038f0((undefined8 *)(local_4b0 + 4),
                                 (undefined8 *)(str_1001f9ee + 10),puVar32);
              puVar28 = (undefined8 *)((int)puVar32 + 4);
              if ((undefined8 *)0x4b < puVar32) goto LAB_10018f48;
            }
            PF_PART1(local_6b0, 3) = 0x40;
            PF_PART1(local_6b0, 2) = 0;
            PF_PART1(local_6b0, 1) = 0;
            PF_PART1(local_6b0, 0) = 0;
            recovered_100038f0((undefined8 *)(*(uint128 *)local_4b0 + (int)puVar28),
                               (undefined8 *)&local_6b0,(undefined8 *)&UndefinedInstruction);
            puVar28 = puVar32 + 1;
            if (0x3f < (int)puVar32 - 0xcU) {
              recovered_100038f0((undefined8 *)(*(uint128 *)local_4b0 + (int)puVar28),
                                 auStack_864,(undefined8 *)0x40);
              puVar28 = puVar32 + 9;
            }
          }
          else {
            puVar28 = (undefined8 *)&UndefinedInstruction;
          }
LAB_10018f48:
          PF_PART1(local_6b0, 0) = (byte)((uint)puVar28 >> 0x18);
          PF_PART1(local_6b0, 1) = (undefined1)((uint)puVar28 >> 0x10);
          PF_PART1(local_6b0, 2) = (byte)((uint)puVar28 >> 8);
          PF_PART1(local_6b0, 3) = (byte)puVar28;
          if (!(bool)(bVar18 | uVar3 - 0x1ffd < 4)) {
            recovered_100038f0((undefined8 *)((int)puVar31 + uVar3),(undefined8 *)&local_6b0,
                               (undefined8 *)&UndefinedInstruction);
            puVar32 = (undefined8 *)(0x1ffc - uVar3);
            uVar3 = uVar3 + 4;
            if (puVar28 <= puVar32) {
              recovered_100038f0((undefined8 *)((int)puVar31 + uVar3),(undefined8 *)local_4b0,
                                 puVar28);
              uVar3 = (int)puVar28 + uVar3;
            }
          }
          recovered_1001cf60(piVar10,*(int *)(param_1 + 0x7f8),*(int *)(param_1 + 0x800),param_1,
                             (int)local_804,(uint)local_ab0,(int)auStack_824,0);
          recovered_1001cf60(piVar9,*(int *)(param_1 + 0x7fc),*(int *)(param_1 + 0x804),param_1,
                             (int)local_804,(uint)local_ab0,(int)auStack_824,1);
          *(undefined1 *)(param_1 + 0x7f4) = 1;
          local_79c = 0;
          local_79b = 0;
          local_79a = 0;
          local_799 = 0;
          local_798 = 0;
          local_797 = 0;
          local_796 = 0;
          local_795 = 0;
          local_794 = 0;
          local_793 = 0;
          local_792 = 0;
          local_791 = 0;
          local_790 = 0;
          local_78f = 0;
          local_78e = 0;
          local_78d = 0;
          local_78c = 0;
          local_78b = 0;
          local_78a = 0;
          local_789 = 0;
          local_788 = 0;
          local_787 = 0;
          local_786 = 0;
          local_785 = 0;
          local_784 = 0;
          local_783 = 0;
          local_782 = 0;
          local_781 = 0;
          local_780 = 0;
          local_77f = 0;
          local_77e = 0;
          local_77d = 0;
          local_7dc = '\0';
          local_7db = '\0';
          local_7da = '\0';
          local_7d9 = '\0';
          local_7d8 = '\0';
          local_7d7 = '\0';
          local_7d6 = '\0';
          local_7d5 = '\0';
          local_7d4 = '\0';
          local_7d3 = '\0';
          local_7d2 = '\0';
          local_7d1 = '\0';
          local_7d0 = '\0';
          local_7cf = '\0';
          local_7ce = '\0';
          local_7cd = '\0';
          local_7cc = '\0';
          local_7cb = '\0';
          local_7ca = '\0';
          local_7c9 = '\0';
          local_7c8 = '\0';
          local_7c7 = '\0';
          local_7c6 = '\0';
          local_7c5 = '\0';
          local_7c4 = '\0';
          local_7c3 = '\0';
          local_7c2 = '\0';
          local_7c1 = '\0';
          local_7c0 = '\0';
          local_7bf = '\0';
          local_7be = '\0';
          local_7bd = '\0';
          local_804[0] = 0;
          local_804[1] = 0;
          local_804[2] = 0;
          local_804[3] = 0;
          local_804[4] = 0;
          local_7ff = 0;
          local_7fe = 0;
          local_7fd = 0;
          local_7fc = 0;
          local_7fb = 0;
          local_7fa = 0;
          local_7f9 = 0;
          local_7f8 = 0;
          local_7f7 = 0;
          local_7f6 = 0;
          local_7f5 = 0;
          local_7f4 = 0;
          local_7f3 = 0;
          local_7f2 = 0;
          local_7f1 = 0;
          local_7f0 = 0;
          local_7ef = 0;
          local_7ee = 0;
          local_7ed = 0;
          local_7ec = 0;
          local_7eb = 0;
          local_7ea = 0;
          local_7e9 = 0;
          local_7e8 = 0;
          local_7e7 = 0;
          local_7e6 = 0;
          local_7e5 = 0;
          local_7e4 = 0;
          local_7e3 = 0;
          local_7e2 = 0;
          local_7e1 = 0;
          local_7e0 = 0;
          local_7df = 0;
          local_7de = 0;
          local_7dd = 0;
          iVar7 = recovered_100136d0(param_1,puVar31,uVar3);
          if (iVar7 == 0) {
            uVar3 = 2;
            pcVar27 = str_1001f546;
            iVar7 = extraout_r3_20;
          }
          else {
            local_4b0[0] = 0x15;
            iVar7 = recovered_100136d0(param_1,local_4b0,1);
            if (iVar7 != 0) {
              recovered_100038f0((undefined8 *)(param_1 + 0x2e8),(undefined8 *)piVar9,
                                 (undefined8 *)0x19c);
              *(undefined1 *)(param_1 + 0x808) = 1;
              if (*(char *)(param_1 + 0x809) == '\x01') {
                *(undefined2 *)(param_1 + 0x4a5) = 0;
                *(undefined1 *)(param_1 + 0x4a7) = 0;
              }
              break;
            }
            uVar3 = 2;
            pcVar27 = str_1001f55f;
            iVar7 = extraout_r3_21;
          }
          goto LAB_10016b18;
        }
      }
      uVar3 = 3;
      pcVar27 = str_1001f4f1;
      goto LAB_10016b18;
    }
    recovered_1000be98(param_1,2,str_1001f4ce,pbVar22);
    break;
  case '2':
    if ((*(uint *)(param_1 + 0x10) < 2) || (*(char *)(param_1 + 0x4a5) == '\x01')) {
      recovered_1000be98(param_1,2,str_1001f336,pbVar22);
    }
    else {
      recovered_100197cc(param_1,(int)pcVar27,(uint)puVar32);
    }
    break;
  case 'P':
    PF_PART5(local_4a8, 0) = (uint5)(uint)local_4a8;
    PF_PART4(local_4b0, 4) = puVar32;
    PF_PART4(local_4b0, 0) = pcVar27;
    PF_PART1(local_6b0, 0) = 0;
    recovered_100038f0((undefined8 *)&local_6b0,(undefined8 *)pcVar27,(undefined8 *)0x1);
    PF_PART1(local_6b0, 0) = 0;
    PF_PART1(local_6b0, 1) = 0;
    PF_PART1(local_6b0, 2) = 0;
    PF_PART1(local_6b0, 3) = 0;
    if (&UndefinedInstruction < puVar32) {
      recovered_100038f0((undefined8 *)&local_6b0,(undefined8 *)((int)puVar34 + 6),
                         (undefined8 *)&UndefinedInstruction);
      uVar2 = CONCAT12(PF_PART1(local_6b0, 2),CONCAT11(PF_PART1(local_6b0, 1),(byte)local_6b0));
      uVar3 = CONCAT13(PF_PART1(local_6b0, 3),uVar2) << 0x18 | ((uVar2 & 0xff00) >> 8) << 0x10 |
              (uint)PF_PART1(local_6b0, 2) << 8 | (uint)PF_PART1(local_6b0, 3);
      if (uVar3 <= (int)puVar32 - 5U) {
        local_4a8 = CONCAT44(PF_PART4(local_4a8, 4),uVar3 + 5);
        bVar36 = recovered_10019cc4((int *)local_4b0);
        if (bVar36) {
          PF_PART1(local_6b0, 0) = 0x52;
          puVar32 = (undefined8 *)&local_6b0;
          uVar3 = 1;
          goto LAB_10016914;
        }
      }
    }
    break;
  case 'Z':
    if (*(char *)(param_1 + 0x80a) == '\0') {
      recovered_1000be98(param_1,2,str_1001f359,pbVar22);
    }
    else {
      recovered_10019d40(param_1,(int)pcVar27,(uint)puVar32);
    }
    break;
  case ']':
    PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)(uint7)PF_PART7(local_4b0, 1) << 8);
    recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)pcVar27,(undefined8 *)0x1);
    PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffff00000000);
    if (&UndefinedInstruction < puVar32) {
      recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 6),
                         (undefined8 *)&UndefinedInstruction);
      uVar3 = (uint)local_4b0[0];
      uVar30 = (uint)local_4b0[1];
      uVar4 = (uint)local_4b0[2];
      cVar35 = local_4b0[3];
      PF_PART8(local_4b0, 0) = (uint64_t)((ulonglong)PF_PART8(local_4b0, 0) & 0xffffffff00000000);
      if (3 < (int)puVar32 - 5U) {
        recovered_100038f0((undefined8 *)local_4b0,(undefined8 *)((int)puVar34 + 10),
                           (undefined8 *)&UndefinedInstruction);
        uVar12 = (uint)*(byte *)(param_1 + 0x850);
        bVar36 = uVar12 == 1;
        if (bVar36) {
          uVar12 = uVar30 << 0x10 | uVar3 << 0x18 | uVar4 << 8;
        }
        if (bVar36 && (uVar12 == 0 && cVar35 == '\0')) {
          *(uint *)(param_1 + 0x85c) =
               *(int *)(param_1 + 0x85c) +
               ((uint)local_4b0[1] << 0x10 | (uint)local_4b0[0] << 0x18 | (uint)local_4b0[2] << 8 |
               (uint)local_4b0[3]);
        }
      }
    }
    break;
  case '^':
    if (*(char *)(param_1 + 0x80a) == '\x01') {
      recovered_1001a974(param_1,(int)pcVar27,(uint)puVar32);
    }
    break;
  case '`':
    if (((*(char *)(param_1 + 0x850) == '\x01') &&
        (*(undefined1 *)(param_1 + 0x854) = 1, *(int *)(param_1 + 0x874) == 1)) &&
       (*(char *)(param_1 + 0xdab) == '\0')) {
      *(undefined4 *)(param_1 + 0xdb0) = 0;
LAB_100169c0:
      *(undefined1 *)(param_1 + 0xdab) = 1;
    }
    break;
  case 'a':
    if (*(char *)(param_1 + 0x850) == '\x01') {
      *(undefined1 *)(param_1 + 0x853) = 1;
      if (*(char *)(param_1 + 0x852) == '\0') {
        recovered_1001ab74(param_1,0x61);
        *(undefined1 *)(param_1 + 0x852) = 1;
      }
      if (*(char *)(param_1 + 0xdab) == '\0') goto LAB_100169c0;
    }
    break;
  case 'b':
    if (*(char *)(param_1 + 0x80a) == '\x01') {
      recovered_1001a110(param_1,(int)pcVar27,(uint)puVar32);
    }
  }
  goto switchD_1001648c_caseD_2;
LAB_100172e4:
  uVar30 = CONCAT13(uStack_6a9,CONCAT12(uStack_6aa,CONCAT11(uStack_6ab,local_6ac)));
  uVar24 = PF_PART4(local_4b0, 4);
  uVar12 = recovered_100049b4(((uintptr_t)pf_module_state + 0xe20U));
  iVar7 = extraout_r3_13;
  if (uVar24 != 0) {
    uVar14 = 0;
    do {
      iVar7 = uVar24;
      if (uVar30 < uVar14) break;
      bVar36 = false;
      uVar15 = uVar14;
      if ((uVar14 < uVar30) && (bVar36 = true, *(char *)(uVar24 + uVar14) != ',')) {
        do {
          uVar15 = uVar15 + 1;
          if (uVar30 == uVar15) {
            uVar15 = uVar30;
            goto LAB_10017378;
          }
        } while (*(char *)(uVar24 + uVar15) != ',');
LAB_10017378:
        bVar36 = false;
        if (uVar15 < uVar30) {
          bVar36 = true;
        }
      }
      if ((uVar15 - uVar14 == uVar12) &&
         (iVar25 = recovered_100046ac((uint *)(uVar24 + uVar14),
                                      (uint *)(str_1001f9ee + 10),uVar12),
         iVar25 == 0)) {
        iVar7 = recovered_1001acac((uint)local_4a8,
                                   CONCAT13(uStack_6a5,
                                            CONCAT12(uStack_6a6,CONCAT11(uStack_6a7,uStack_6a8))));
        *(int *)(param_1 + 0x7f8) = iVar7;
        iVar25 = recovered_1001acac(PF_PART4(local_4a8, 4),
                                    CONCAT13(uStack_6a1,
                                             CONCAT12(uStack_6a2,CONCAT11(uStack_6a3,local_6a4))));
        *(int *)(param_1 + 0x7fc) = iVar25;
        if (iVar25 == 0 || *(int *)(param_1 + 0x7f8) == 0) {
          recovered_1000be98(param_1,3,str_1001f42c,extraout_r3_14);
          goto switchD_1001648c_caseD_2;
        }
        iVar26 = 0;
        iVar16 = 0;
        iVar7 = extraout_r3_14;
        if (*(int *)(param_1 + 0x7f8) != 1) {
          iVar16 = recovered_1001ae58(local_4a0,local_6a0);
          iVar25 = *(int *)(param_1 + 0x7fc);
          iVar7 = extraout_r3_16;
        }
        *(int *)(param_1 + 0x800) = iVar16;
        if (iVar25 != 1) {
          iVar26 = recovered_1001ae58(iStack_49c,uStack_69c);
          iVar7 = extraout_r3_17;
        }
        iVar25 = local_498;
        uVar12 = local_698;
        *(int *)(param_1 + 0x804) = iVar26;
        if (((*(int *)(param_1 + 0x7f8) != 1) && (*(int *)(param_1 + 0x800) == 0)) ||
           ((iVar26 == 0 && (*(int *)(param_1 + 0x7fc) != 1)))) {
          uVar3 = 3;
          pcVar27 = str_1001f43f;
          goto LAB_10016b18;
        }
        uVar14 = recovered_100049b4(((uintptr_t)pf_module_state + 0x1260U));
        iVar7 = extraout_r3_18;
        if (iVar25 == 0) goto LAB_1001776c;
        uVar15 = 0;
        goto LAB_10017640;
      }
      uVar14 = uVar15 + 1;
    } while (bVar36);
  }
  recovered_1000be98(param_1,3,str_1001f3ff,iVar7);
  goto switchD_1001648c_caseD_2;
LAB_10017640:
  do {
    iVar7 = iVar25;
    if (uVar12 < uVar15) break;
    bVar36 = false;
    uVar17 = uVar15;
    if ((uVar15 < uVar12) && (bVar36 = true, *(char *)(iVar25 + uVar15) != ',')) {
      do {
        uVar17 = uVar17 + 1;
        if (uVar12 == uVar17) {
          uVar17 = uVar12;
          goto LAB_10017690;
        }
      } while (*(char *)(iVar25 + uVar17) != ',');
LAB_10017690:
      bVar36 = false;
      if (uVar17 < uVar12) {
        bVar36 = true;
      }
    }
    if ((uVar17 - uVar15 == uVar14) &&
       (iVar16 = recovered_100046ac((uint *)(iVar25 + uVar15),(uint *)&DAT_1001fe38,uVar14),
       iVar16 == 0)) {
      iVar25 = recovered_1001abd0(local_494,local_694,&DAT_1001fe38);
      iVar7 = extraout_r3_19;
      if (iVar25 != 0) {
        if (uVar4 != 0) {
          bVar36 = recovered_1001afc4(uVar5,uVar3,str_1001f3a0);
          bVar37 = true;
          if (!bVar36) {
            bVar37 = recovered_1001afc4(uVar5,uVar3,str_1001f3b2);
          }
          bVar36 = recovered_1001afc4(uVar24,uVar30,str_1001f9ee + 10);
          *(byte *)(param_1 + 0x4a8) = bVar37 & bVar36 ^ 1;
        }
        goto switchD_1001648c_caseD_2;
      }
      break;
    }
    uVar15 = uVar17 + 1;
  } while (bVar36);
LAB_1001776c:
  uVar3 = 3;
  pcVar27 = str_1001f44f;
LAB_10016b18:
  recovered_1000be98(param_1,uVar3,pcVar27,iVar7);
switchD_1001648c_caseD_2:
  if (*(byte **)(param_1 + 0x138) <= pbVar21) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    return;
  }
  recovered_10003b74(*(undefined8 **)(param_1 + 0x134),
                     (undefined8 *)((int)*(undefined8 **)(param_1 + 0x134) + (int)pbVar21),
                     (undefined8 *)(*(byte **)(param_1 + 0x138) + -(int)pbVar21));
  uVar3 = *(int *)(param_1 + 0x138) - (int)pbVar21;
  *(uint *)(param_1 + 0x138) = uVar3;
  if (uVar3 < 4) {
    return;
  }
  goto LAB_10015d88;
}

#undef DAT_10015f84
#undef DAT_10017f10
#undef DAT_10017f18
#undef DAT_10017f20
#undef DAT_10017f28
#undef DAT_10018790
#undef DAT_10018798
#undef DAT_100187a0
#undef DAT_100187a8
#undef DAT_100187b0
#undef DAT_100187b8
#undef DAT_100187c0
#undef DAT_100187c8
#undef DAT_1001fe38
#undef DAT_10024f0c
#undef DAT_10024f2c
#undef DAT_10024f4c
#undef DAT_10024f80
#undef DAT_100250cc
#undef DAT_100250d0
#undef DAT_100250d8
#undef DAT_100250dc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef EXT_00000004
#undef EXT_00000010
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef str_1001f289
#undef str_1001f29b
#undef str_1001f2b4
#undef str_1001f2d1
#undef str_1001f2dd
#undef str_1001f2f5
#undef str_1001f319
#undef str_1001f326
#undef str_1001f336
#undef str_1001f359
#undef str_1001f37c
#undef str_1001f38e
#undef str_1001f3a0
#undef str_1001f3b2
#undef str_1001f3cf
#undef str_1001f3ff
#undef str_1001f42c
#undef str_1001f43f
#undef str_1001f44f
#undef str_1001f4bb
#undef str_1001f4ce
#undef str_1001f4f1
#undef str_1001f50a
#undef str_1001f523
#undef str_1001f546
#undef str_1001f55f
#undef str_1001f9ee
#undef local_473
#undef uStack_318
#undef local_472
#undef uStack_314
#undef local_471
#undef local_470
#undef uStack_30c
#undef local_468
#undef uStack_308
#undef local_460
#undef uStack_304
#undef local_450
#undef local_440
#undef uStack_2fc
#undef local_430
#undef uStack_2f8
#undef local_420
#undef uStack_2f4
#undef local_410
#undef local_400
#undef uStack_2ec
#undef local_3f0
#undef uStack_2e8
#undef local_3e0
#undef uStack_2e4
#undef local_3d0
#undef local_3c0
#undef uStack_2dc
#undef local_3b0
#undef uStack_2d8
#undef local_3a0
#undef uStack_2d4
#undef local_390
#undef local_380
#undef uStack_2cc
#undef local_370
#undef uStack_2c8
#undef local_360
#undef uStack_2c4
#undef local_350
#undef local_340
#undef uStack_2bc
#undef local_330
#undef uStack_2b8
#undef local_320
#undef uStack_2b4
#undef local_310
#undef local_300
#undef local_2f0
#undef local_2e0
#undef local_2d0
#undef local_2c0
#undef local_2b0
#undef uStack_2a5
#undef local_2ae
#undef local_2ac
#undef local_2aa
#undef local_2a8
#undef uStack_29f
#undef local_2a6
#undef local_2a4
#undef local_2a2
#undef local_2a0
#undef local_29e
#undef local_29c
#undef local_29a
#undef local_298
#undef local_296
#undef local_294
#undef local_292
#undef local_290
#undef local_28f
#undef local_28e
#undef local_28d
#undef local_28c
#undef local_28b
#undef local_28a
#undef local_289
#undef local_288
#undef local_287
#undef local_286
#undef local_285
#undef local_284
#undef local_283
#undef local_282
#undef local_281
#undef local_280
#undef local_27f
#undef local_27e
#undef local_27d
#undef local_27c
#undef local_27b
#undef local_27a
#undef local_279
#undef local_278
#undef local_277
#undef local_276
#undef local_275
#undef local_274
#undef local_273
#undef local_272
#undef local_271
#undef local_270
#undef uStack_22c
#undef uStack_228
#undef uStack_218
#undef uStack_208
#undef uStack_1f8
#undef local_250
#undef auStack_1e8
#undef auStack_160
#undef auStack_e0
#undef local_248
#undef local_247
#undef local_246
#undef local_245
#undef local_244
#undef local_243
#undef local_242
#undef local_241
#undef local_240
#undef local_23f
#undef local_23e
#undef local_23d
#undef local_23c
#undef local_23b
#undef local_23a
#undef local_239
#undef local_238
#undef local_237
#undef local_236
#undef local_235
#undef local_234
#undef local_233
#undef local_232
#undef local_231
#undef local_230
#undef local_220
#undef local_210
#undef local_200
#undef local_1f0
#undef local_1ec
#undef local_168
#undef local_60
#undef local_ab0
#undef uStack_8cc
#undef uStack_8c8
#undef uStack_8c4
#undef uStack_8bc
#undef uStack_8b8
#undef uStack_8b4
#undef auStack_8a8
#undef auStack_864
#undef auStack_844
#undef auStack_824
#undef auStack_7bc
#undef local_8dc
#undef local_8d7
#undef local_8d6
#undef local_8d5
#undef local_8d4
#undef local_8d0
#undef local_8c0
#undef local_8b0
#undef local_8ac
#undef local_868
#undef local_845
#undef local_804
#undef uStack_774
#undef uStack_764
#undef local_7ff
#undef uStack_754
#undef local_7fe
#undef local_7fd
#undef uStack_744
#undef local_7fc
#undef local_7fb
#undef auStack_734
#undef local_7fa
#undef local_7f9
#undef local_7f8
#undef local_7f7
#undef local_7f6
#undef uStack_6ab
#undef local_7f5
#undef uStack_6aa
#undef local_7f4
#undef uStack_6a9
#undef local_7f3
#undef uStack_6a8
#undef local_7f2
#undef uStack_6a7
#undef local_7f1
#undef uStack_6a6
#undef local_7f0
#undef uStack_6a5
#undef local_7ef
#undef local_7ee
#undef uStack_6a3
#undef local_7ed
#undef uStack_6a2
#undef local_7ec
#undef uStack_6a1
#undef local_7eb
#undef local_7ea
#undef uStack_69c
#undef local_7e9
#undef local_7e8
#undef local_7e7
#undef local_7e6
#undef local_7e5
#undef local_7e4
#undef local_7e3
#undef local_7e2
#undef local_7e1
#undef local_7e0
#undef local_7df
#undef local_7de
#undef local_7dd
#undef local_7dc
#undef local_7db
#undef local_7da
#undef local_7d9
#undef local_7d8
#undef local_7d7
#undef local_7d6
#undef local_7d5
#undef local_7d4
#undef local_7d3
#undef local_7d2
#undef local_7d1
#undef local_7d0
#undef local_7cf
#undef local_7ce
#undef local_7cd
#undef local_7cc
#undef local_7cb
#undef local_7ca
#undef local_7c9
#undef local_7c8
#undef auStack_630
#undef local_7c7
#undef auStack_5b0
#undef local_7c6
#undef local_7c5
#undef local_7c4
#undef local_7c3
#undef iStack_49c
#undef local_7c2
#undef local_7c1
#undef local_7c0
#undef local_7bf
#undef local_7be
#undef uStack_48f
#undef local_7bd
#undef uStack_48e
#undef local_79c
#undef uStack_48d
#undef local_79b
#undef uStack_48c
#undef local_79a
#undef uStack_48b
#undef local_799
#undef uStack_48a
#undef local_798
#undef uStack_489
#undef local_797
#undef local_796
#undef uStack_487
#undef local_795
#undef uStack_486
#undef local_794
#undef uStack_485
#undef local_793
#undef uStack_484
#undef local_792
#undef uStack_483
#undef local_791
#undef uStack_482
#undef local_790
#undef uStack_481
#undef local_78f
#undef local_78e
#undef uStack_47f
#undef local_78d
#undef uStack_47e
#undef local_78c
#undef uStack_47d
#undef local_78b
#undef uStack_47c
#undef local_78a
#undef uStack_47b
#undef local_789
#undef uStack_47a
#undef local_788
#undef uStack_479
#undef local_787
#undef local_786
#undef local_785
#undef local_784
#undef local_783
#undef local_782
#undef local_781
#undef local_780
#undef local_77f
#undef local_77e
#undef local_77d
#undef local_77c
#undef uStack_458
#undef local_76c
#undef local_75c
#undef uStack_448
#undef local_74c
#undef local_73c
#undef uStack_438
#undef local_738
#undef local_6b4
#undef uStack_428
#undef local_6b0
#undef local_6ac
#undef uStack_418
#undef local_6a4
#undef local_6a0
#undef uStack_408
#undef local_698
#undef local_694
#undef uStack_3f8
#undef local_690
#undef local_68f
#undef uStack_3e8
#undef local_68e
#undef local_68d
#undef uStack_3d8
#undef local_68c
#undef local_68b
#undef uStack_3c8
#undef local_68a
#undef local_689
#undef uStack_3b8
#undef local_688
#undef local_687
#undef uStack_3ac
#undef local_686
#undef uStack_3a8
#undef local_685
#undef uStack_3a4
#undef local_684
#undef local_683
#undef uStack_39c
#undef local_682
#undef uStack_398
#undef local_681
#undef uStack_394
#undef local_680
#undef local_67f
#undef uStack_38c
#undef local_67e
#undef uStack_388
#undef local_67d
#undef uStack_384
#undef local_67c
#undef local_67b
#undef uStack_37c
#undef local_67a
#undef uStack_378
#undef local_679
#undef uStack_374
#undef local_678
#undef local_677
#undef uStack_36c
#undef local_676
#undef uStack_368
#undef local_675
#undef uStack_364
#undef local_674
#undef local_673
#undef uStack_35c
#undef local_672
#undef uStack_358
#undef local_671
#undef uStack_354
#undef local_4b0
#undef local_4a8
#undef uStack_34c
#undef uStack_348
#undef local_4a0
#undef uStack_344
#undef local_498
#undef local_494
#undef uStack_33c
#undef local_490
#undef uStack_338
#undef local_488
#undef uStack_334
#undef local_480
#undef local_478
#undef uStack_32c
#undef local_477
#undef uStack_328
#undef local_476
#undef uStack_324
#undef local_475
#undef local_474
#undef uStack_31c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019404
 */

void recovered_10019404(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_r1;

  if (*param_1 - 2U < 2) {
    *(undefined1 *)((int)param_1 + 0x49) = 1;
    recovered_10012e18((uint *)param_1,in_r1);
    return;
  }
  if (*param_1 == 1) {
    recovered_10012940((int)param_1,0x14,
                       param_1[0x11] + param_1[7] + (uint)*(byte *)(param_1 + 0x12) +
                       (uint)*(byte *)((int)param_1 + 0x4a),0,0);
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x4f) = 1;
    param_1[0x10] = 0;
    param_1[0xc] = 0;
    *param_1 = 0;
    return;
  }
  return;
}


#undef DAT_1001ffeb
#define DAT_1001ffeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1413U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001948c
 */

void recovered_1001948c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;

  if (*(char *)(param_1 + 0x868) == '\x01') {
    puVar1 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1413U));
    iVar2 = *(int *)(param_1 + 0xb8c);
    if (puVar1 <= (undefined8 *)(0x8000U - iVar2)) {
      puVar5 = *(undefined8 **)(param_1 + 0xb84);
      uVar3 = *(int *)(param_1 + 0xb88) + iVar2 & 0x7fff;
      puVar6 = (undefined8 *)(0x8000 - uVar3);
      puVar4 = puVar1;
      if (puVar6 < puVar1) {
        puVar4 = puVar6;
      }
      recovered_100038f0((undefined8 *)((int)puVar5 + uVar3),(undefined8 *)&DAT_1001ffeb,puVar4);
      if (puVar6 < puVar1) {
        recovered_100038f0(puVar5,(undefined8 *)((int)puVar4 + ((uintptr_t)pf_module_state + 0x1413U)),
                           (undefined8 *)((int)puVar1 - (int)puVar4));
      }
      iVar2 = *(int *)(param_1 + 0xb8c) + (int)puVar1;
      *(int *)(param_1 + 0xb8c) = iVar2;
    }
    puVar1 = *(undefined8 **)(param_1 + 0xa78);
    if ((puVar1 != (undefined8 *)0x0) && (puVar1 <= (undefined8 *)(0x8000U - iVar2))) {
      puVar5 = *(undefined8 **)(param_1 + 0xb84);
      uVar3 = *(int *)(param_1 + 0xb88) + iVar2 & 0x7fff;
      puVar6 = (undefined8 *)(0x8000 - uVar3);
      puVar4 = puVar1;
      if (puVar6 < puVar1) {
        puVar4 = puVar6;
      }
      recovered_100038f0((undefined8 *)((int)puVar5 + uVar3),(undefined8 *)(param_1 + 0x878),puVar4)
      ;
      if (puVar6 < puVar1) {
        recovered_100038f0(puVar5,(undefined8 *)(param_1 + 0x878 + (int)puVar4),
                           (undefined8 *)((int)puVar1 - (int)puVar4));
      }
      *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + (int)puVar1;
    }
  }
  return;
}

#undef DAT_1001ffeb

/* Recovered variadic session logging; Pooka's Free Software License. */
void recovered_100195a8(void *session,char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_100062d0(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_1000b728("ssh[%u %s]: %s",*(uint32_t *)((char *)session+4),(char *)session+0x120,text);
}


#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_10 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019610
 */

uint recovered_10019610(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  local_10 = 0;
  if (((char)param_1[3] == '\0') && (3 < (uint)(param_1[1] - param_1[2]))) {
    recovered_100038f0((undefined8 *)&local_10,(undefined8 *)(*param_1 + param_1[2]),
                       (undefined8 *)&UndefinedInstruction);
    uVar1 = local_10 << 0x18 | (local_10 >> 8 & 0xff) << 0x10 | (local_10 >> 0x10 & 0xff) << 8 |
            local_10 >> 0x18;
    param_1[2] = param_1[2] + 4;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return uVar1;
}

#undef EXT_00000004
#undef local_10

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001968c
 */

undefined4 recovered_1001968c(int *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;

  local_18 = 0;
  if (((char)param_1[3] == '\0') && (3 < (uint)(param_1[1] - param_1[2]))) {
    recovered_100038f0((undefined8 *)&local_18,(undefined8 *)(*param_1 + param_1[2]),
                       (undefined8 *)&UndefinedInstruction);
    param_1[2] = param_1[2] + 4;
    if ((*(byte *)(param_1 + 3) & 1) != 0) goto LAB_10019724;
    puVar3 = (undefined8 *)
             (local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8 |
             local_18 >> 0x18);
    iVar2 = param_1[2];
    if ((undefined8 *)(param_1[1] - iVar2) < puVar3) goto LAB_10019724;
    param_1[2] = iVar2 + (int)puVar3;
    if (*param_1 != 0) {
      if (param_3 <= puVar3) {
        puVar3 = (undefined8 *)(param_3 - 1);
      }
      recovered_100038f0((undefined8 *)param_2,(undefined8 *)(*param_1 + iVar2),puVar3);
      param_2 = param_2 + (int)puVar3;
      uVar1 = 1;
      goto LAB_10019730;
    }
  }
  else {
LAB_10019724:
    *(undefined1 *)(param_1 + 3) = 1;
  }
  uVar1 = 0;
LAB_10019730:
  *param_2 = 0;
  return uVar1;
}

#undef EXT_00000004
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001977c
 */

bool recovered_1001977c(int param_1,int param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  iVar2 = recovered_100049b4((int)param_3);
  bVar1 = false;
  if ((param_1 != 0) && (iVar2 == param_2)) {
    iVar2 = recovered_100046ac((uint *)param_1,param_3,param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


#undef DAT_1001ecc6
#define DAT_1001ecc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef DAT_1001fe38
#define DAT_1001fe38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1260U)))
#undef DAT_10023742
#define DAT_10023742 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b6aU)))
#undef DAT_10023782
#define DAT_10023782 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4baaU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef str_1001edd3
#define str_1001edd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_1001f576
#define str_1001f576 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99eU)))
#undef str_1001f585
#define str_1001f585 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9adU)))
#undef str_1001f5a8
#define str_1001f5a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d0U)))
#undef str_1001f5c0
#define str_1001f5c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e8U)))
#undef str_1001f5df
#define str_1001f5df (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa07U)))
#define local_64 (*(uint (*)[25])(pf_stack_frame + 28))
#define local_24 (*(uint *)(pf_stack_frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100197cc
 */

void recovered_100197cc(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_r3;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 extraout_r3_04 = 0;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;

  if (*(char *)(param_1 + 0x80a) != '\0') {
    return;
  }
  local_64[0] = local_64[0] & 0xffffff00;
  if (param_3 == 0) {
LAB_10019848:
    local_64[0] = local_64[0] & 0xffffff00;
  }
  else {
    recovered_100038f0((undefined8 *)local_64,(undefined8 *)param_2,(undefined8 *)0x1);
    local_64[0] = 0;
    in_r3 = extraout_r3;
    if (param_3 < 5) goto LAB_10019848;
    puVar6 = local_64;
    recovered_100038f0((undefined8 *)puVar6,(undefined8 *)(param_2 + 1),
                       (undefined8 *)&UndefinedInstruction);
    puVar8 = (undefined8 *)
             (local_64[0] << 0x18 | (local_64[0] >> 8 & 0xff) << 0x10 |
              (local_64[0] >> 0x10 & 0xff) << 8 | local_64[0] >> 0x18);
    in_r3 = extraout_r3_00;
    if ((undefined8 *)(param_3 - 5) < puVar8) goto LAB_10019848;
    if (param_2 != 0) {
      puVar5 = puVar8;
      if ((undefined8 *)0x3e < puVar8) {
        puVar5 = (undefined8 *)0x3f;
      }
      recovered_100038f0((undefined8 *)local_64,(undefined8 *)(param_2 + 5),puVar5);
      puVar6 = (uint *)((int)local_64 + (int)puVar5);
      in_r3 = extraout_r3_01;
    }
    *(undefined1 *)puVar6 = 0;
    local_24 = 0;
    if (3 < param_3 - ((int)puVar8 + 5)) {
      recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + (int)puVar8 + 5),
                         (undefined8 *)&UndefinedInstruction);
      iVar9 = (int)puVar8 + 9;
      uVar3 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
              local_24 >> 0x18;
      in_r3 = extraout_r3_02;
      if (uVar3 <= param_3 - iVar9) {
        iVar7 = uVar3 + iVar9;
        local_24 = 0;
        if (3 < param_3 - iVar7) {
          recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + iVar7),
                             (undefined8 *)&UndefinedInstruction);
          iVar7 = iVar7 + 4;
          uVar10 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 |
                   (local_24 >> 0x10 & 0xff) << 8 | local_24 >> 0x18;
          in_r3 = extraout_r3_03;
          if ((((uVar10 <= param_3 - iVar7) &&
               (uVar2 = recovered_100049b4(((uintptr_t)pf_module_state + 0x99eU)), in_r3 = extraout_r3_04, param_2 != 0)) &&
              (uVar2 == uVar3)) &&
             (iVar9 = recovered_100046ac((uint *)(param_2 + iVar9),(uint *)str_1001f576,uVar3),
             in_r3 = extraout_r3_05, iVar9 == 0)) {
            puVar6 = (uint *)(param_2 + iVar7);
            uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x1fbU));
            if ((uVar3 == uVar10) &&
               (iVar9 = recovered_100046ac(puVar6,(uint *)str_1001edd3,uVar10), iVar9 == 0)) {
              uVar3 = uVar10 + iVar7;
              local_24 = local_24 & 0xffffff00;
              if (uVar3 != param_3) {
                recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + uVar3),
                                   (undefined8 *)0x1);
                local_24 = 0;
                if (3 < param_3 - (uVar3 + 1)) {
                  recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + uVar3 + 1),
                                     (undefined8 *)&UndefinedInstruction);
                  uVar2 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 |
                          (local_24 >> 0x10 & 0xff) << 8 | local_24 >> 0x18;
                  if ((uVar2 <= param_3 - (uVar3 + 5)) &&
                     (((iVar9 = recovered_100049dc(&DAT_10023742,&DAT_1001ecc6), iVar9 == 0 ||
                       (iVar9 = recovered_100049dc(&DAT_10023742,(byte *)local_64), iVar9 == 0)) &&
                      (bVar1 = recovered_1001df00(param_2 + uVar3 + 5,uVar2), bVar1))))
                  goto LAB_10019a4c;
                }
              }
            }
            else {
              uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x1260U));
              if (((uVar3 == uVar10) &&
                  (iVar9 = recovered_100046ac(puVar6,(uint *)&DAT_1001fe38,uVar10), iVar9 == 0)) &&
                 (((iVar9 = recovered_100049dc(&DAT_10023742,&DAT_1001ecc6), iVar9 == 0 ||
                   (iVar9 = recovered_100049dc(&DAT_10023742,(byte *)local_64), iVar9 == 0)) &&
                  (iVar9 = recovered_100049dc(&DAT_10023782,&DAT_1001ecc6), iVar9 == 0)))) {
LAB_10019a4c:
                local_24 = CONCAT31(PF_PART3(local_24, 1),0x34);
                puVar8 = (undefined8 *)recovered_100049b4((int)local_64);
                if ((undefined8 *)0x3e < puVar8) {
                  puVar8 = (undefined8 *)0x3f;
                }
                recovered_100038f0((undefined8 *)(param_1 + 0x810),(undefined8 *)local_64,puVar8);
                *(undefined1 *)(param_1 + 0x810 + (int)puVar8) = 0;
                *(undefined1 *)(param_1 + 0x80a) = 1;
                *(undefined4 *)(param_1 + 0x10) = 3;
                recovered_100195a8((void *)param_1,str_1001f5a8,local_64);
                recovered_100136d0(param_1,&local_24,1);
                return;
              }
            }
            uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x1260U));
            if ((uVar3 != uVar10) ||
               (iVar9 = recovered_100046ac(puVar6,(uint *)&DAT_1001fe38,uVar10), iVar9 != 0)) {
              recovered_100195a8((void *)param_1,str_1001f5c0,local_64);
            }
            puVar5 = *(undefined8 **)(param_1 + 0x140);
            local_24 = CONCAT31(PF_PART3(local_24, 1),0x33);
            recovered_100038f0(puVar5,(undefined8 *)&local_24,(undefined8 *)0x1);
            puVar8 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x1fbU));
            local_24 = (int)puVar8 << 0x18 | ((uint)puVar8 >> 8 & 0xff) << 0x10 |
                       ((uint)puVar8 >> 0x10 & 0xff) << 8 | (uint)puVar8 >> 0x18;
            recovered_100038f0((undefined8 *)((int)puVar5 + 1),(undefined8 *)&local_24,
                               (undefined8 *)&UndefinedInstruction);
            if (puVar8 < (undefined8 *)0x1ffc) {
              if (puVar8 == (undefined8 *)0x0) {
                local_24 = local_24 & 0xffffff00;
                iVar9 = 5;
              }
              else {
                recovered_100038f0((undefined8 *)((int)puVar5 + 5),(undefined8 *)str_1001edd3,puVar8
                                  );
                uVar3 = 0x2000;
                local_24 = local_24 & 0xffffff00;
                iVar9 = (int)puVar8 + 5;
                if (iVar9 == 0x2000) goto LAB_10019c88;
              }
              recovered_100038f0((undefined8 *)((int)puVar5 + iVar9),(undefined8 *)&local_24,
                                 (undefined8 *)0x1);
              uVar3 = (int)puVar8 + 6;
            }
            else {
              uVar3 = 5;
            }
LAB_10019c88:
            recovered_100136d0(param_1,puVar5,uVar3);
            uVar3 = *(int *)(param_1 + 0x80c) + 1;
            *(uint *)(param_1 + 0x80c) = uVar3;
            if (uVar3 < 6) {
              return;
            }
            uVar3 = 0xe;
            pcVar4 = str_1001f5df;
            in_r3 = extraout_r3_06;
            goto LAB_10019864;
          }
        }
      }
    }
  }
  uVar3 = 7;
  pcVar4 = str_1001f585;
LAB_10019864:
  recovered_1000be98(param_1,uVar3,pcVar4,in_r3);
  return;
}

#undef DAT_1001ecc6
#undef DAT_1001fe38
#undef DAT_10023742
#undef DAT_10023782
#undef EXT_00000004
#undef str_1001edd3
#undef str_1001f576
#undef str_1001f585
#undef str_1001f5a8
#undef str_1001f5c0
#undef str_1001f5df
#undef local_64
#undef local_24

#define local_d (*(char *)(pf_stack_frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019cc4
 */

bool recovered_10019cc4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_d = '\0';
  if (((char)param_1[3] == '\0') && (param_1[1] != param_1[2])) {
    recovered_100038f0((undefined8 *)&local_d,(undefined8 *)(*param_1 + param_1[2]),
                       (undefined8 *)0x1);
    param_1[2] = param_1[2] + 1;
    return local_d != '\0';
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return false;
}

#undef local_d

#undef DAT_1001ec07
#define DAT_1001ec07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef str_1001f600
#define str_1001f600 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa28U)))
#undef str_1001f617
#define str_1001f617 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3fU)))
#undef str_1001f61f
#define str_1001f61f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa47U)))
#undef str_1001f645
#define str_1001f645 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6dU)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019d40
 */

void recovered_10019d40(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint in_r3;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  uint uVar11;
  uint extraout_r3_01 = 0;
  byte bVar12;
  uint uVar13;
  char *pcVar14;

  local_24 = local_24 & 0xffffff00;
  if (param_3 != 0) {
    recovered_100038f0((undefined8 *)&local_24,(undefined8 *)param_2,(undefined8 *)0x1);
    local_24 = 0;
    in_r3 = extraout_r3;
    if (4 < param_3) {
      recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + 1),
                         (undefined8 *)&UndefinedInstruction);
      uVar13 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
               local_24 >> 0x18;
      in_r3 = extraout_r3_00;
      if (uVar13 <= param_3 - 5) {
        local_24 = 0;
        in_r3 = extraout_r3_00;
        if (3 < param_3 - (uVar13 + 5)) {
          recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + uVar13 + 5),
                             (undefined8 *)&UndefinedInstruction);
          uVar3 = local_24;
          uVar11 = local_24 >> 8 & 0xff;
          uVar2 = local_24 >> 0x10;
          uVar1 = local_24 >> 0x18;
          local_24 = 0;
          in_r3 = uVar11;
          if (3 < param_3 - (uVar13 + 9)) {
            recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + uVar13 + 9),
                               (undefined8 *)&UndefinedInstruction);
            uVar4 = local_24;
            local_24 = 0;
            in_r3 = extraout_r3_01;
            if (3 < param_3 - (uVar13 + 0xd)) {
              recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + uVar13 + 0xd),
                                 (undefined8 *)&UndefinedInstruction);
              uVar5 = local_24;
              puVar10 = *(undefined8 **)(param_1 + 0x140);
              uVar6 = recovered_100049b4(((uintptr_t)pf_module_state + 0xa3fU));
              if (((uVar6 == uVar13) &&
                  (iVar7 = recovered_100046ac((uint *)(param_2 + 5),(uint *)str_1001f617,uVar13),
                  iVar7 == 0)) && (*(char *)(param_1 + 0x850) != '\x01')) {
                uVar13 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18;
                if (uVar13 == 0) {
                  uVar13 = 0x1000;
                }
                *(uint *)(param_1 + 0x858) =
                     uVar11 << 0x10 | uVar3 << 0x18 | (uVar2 & 0xff) << 8 | uVar1;
                *(uint *)(param_1 + 0x85c) =
                     uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                     uVar4 >> 0x18;
                *(undefined1 *)(param_1 + 0x850) = 1;
                *(uint *)(param_1 + 0x860) = uVar13;
                local_24 = CONCAT31(PF_PART3(local_24, 1),0x5b);
                *(undefined4 *)(param_1 + 0x864) = 0x20000;
                recovered_100038f0(puVar10,(undefined8 *)&local_24,(undefined8 *)0x1);
                local_24 = uVar3;
                recovered_100038f0((undefined8 *)((int)puVar10 + 1),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                local_24 = 0;
                recovered_100038f0((undefined8 *)((int)puVar10 + 5),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                local_24 = 0x200;
                recovered_100038f0((undefined8 *)((int)puVar10 + 9),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                local_24 = 0x800000;
                recovered_100038f0((undefined8 *)((int)puVar10 + 0xd),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                uVar13 = 0x11;
              }
              else {
                local_24 = CONCAT31(PF_PART3(local_24, 1),0x5c);
                bVar12 = 1;
                recovered_100038f0(puVar10,(undefined8 *)&local_24,(undefined8 *)0x1);
                local_24 = uVar3;
                recovered_100038f0((undefined8 *)((int)puVar10 + 1),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                if (*(char *)(param_1 + 0x850) != '\0') {
                  bVar12 = 4;
                }
                local_24 = (uint)bVar12 << 0x18;
                recovered_100038f0((undefined8 *)((int)puVar10 + 5),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                pcVar14 = str_1001f645;
                if (*(char *)(param_1 + 0x850) != '\0') {
                  pcVar14 = str_1001f61f;
                }
                puVar8 = (undefined8 *)recovered_100049b4((int)pcVar14);
                local_24 = (int)puVar8 << 0x18 | ((uint)puVar8 >> 8 & 0xff) << 0x10 |
                           ((uint)puVar8 >> 0x10 & 0xff) << 8 | (uint)puVar8 >> 0x18;
                recovered_100038f0((undefined8 *)((int)puVar10 + 9),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                uVar13 = 0xd;
                if (puVar8 < (undefined8 *)0x1ff4) {
                  if (puVar8 != (undefined8 *)0x0) {
                    recovered_100038f0((undefined8 *)((int)puVar10 + 0xd),(undefined8 *)pcVar14,
                                       puVar8);
                  }
                  uVar13 = (int)puVar8 + 0xd;
                }
                puVar9 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0x2fU));
                local_24 = (int)puVar9 << 0x18 | ((uint)puVar9 >> 8 & 0xff) << 0x10 |
                           ((uint)puVar9 >> 0x10 & 0xff) << 8 | (uint)puVar9 >> 0x18;
                if ((puVar8 < (undefined8 *)0x1ff4) && (3 < uVar13 - 0x1ffd)) {
                  recovered_100038f0((undefined8 *)((int)puVar10 + uVar13),(undefined8 *)&local_24,
                                     (undefined8 *)&UndefinedInstruction);
                  puVar8 = (undefined8 *)(0x1ffc - uVar13);
                  uVar13 = uVar13 + 4;
                  if (puVar9 <= puVar8) {
                    if (puVar9 != (undefined8 *)0x0) {
                      recovered_100038f0((undefined8 *)((int)puVar10 + uVar13),
                                         (undefined8 *)&DAT_1001ec07,puVar9);
                    }
                    uVar13 = uVar13 + (int)puVar9;
                  }
                }
              }
              recovered_100136d0(param_1,puVar10,uVar13);
              return;
            }
          }
        }
      }
    }
  }
  recovered_1000be98(param_1,2,str_1001f600,in_r3);
  return;
}

#undef DAT_1001ec07
#undef EXT_00000004
#undef str_1001f600
#undef str_1001f617
#undef str_1001f61f
#undef str_1001f645
#undef local_24

#undef DAT_1001ed67
#define DAT_1001ed67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1001f677
#define DAT_1001f677 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9fU)))
#undef DAT_1001f693
#define DAT_1001f693 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabbU)))
#undef DAT_1001f6a4
#define DAT_1001f6a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaccU)))
#undef DAT_10023810
#define DAT_10023810 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c38U)))
#undef DAT_10023910
#define DAT_10023910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d38U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef str_1001f1c4
#define str_1001f1c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ecU)))
#undef str_1001f669
#define str_1001f669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa91U)))
#undef str_1001f671
#define str_1001f671 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa99U)))
#undef str_1001f67c
#define str_1001f67c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa4U)))
#undef str_1001f685
#define str_1001f685 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaadU)))
#undef str_1001f697
#define str_1001f697 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabfU)))
#undef str_1001f69e
#define str_1001f69e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac6U)))
#undef str_1001f6a9
#define str_1001f6a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad1U)))
#undef str_1001f6be
#define str_1001f6be (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
#define local_238 (*(uint (*)[142])(pf_stack_frame + 24))
#define local_38 (*(int *)(pf_stack_frame + 536))
#define local_34 (*(uint *)(pf_stack_frame + 540))
#define local_30 (*(int *)(pf_stack_frame + 544))
#define local_2c (*(undefined1 *)(pf_stack_frame + 548))
#define local_28 (*(uint (*)[10])(pf_stack_frame + 552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a110
 */

void recovered_1001a110(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  uint extraout_r1 = 0;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  undefined8 *puVar20;

  local_2c = 0;
  local_30 = 0;
  local_238[0] = local_238[0] & 0xffffff00;
  if (param_3 == 0) {
    return;
  }
  local_38 = param_2;
  local_34 = param_3;
  recovered_100038f0((undefined8 *)local_238,(undefined8 *)param_2,(undefined8 *)0x1);
  local_238[0] = 0;
  if (param_3 < 5) {
    return;
  }
  recovered_100038f0((undefined8 *)local_238,(undefined8 *)(param_2 + 1),
                     (undefined8 *)&UndefinedInstruction);
  uVar5 = local_238[0];
  local_238[0] = 0;
  if (param_3 - 5 < 4) {
    return;
  }
  recovered_100038f0((undefined8 *)local_238,(undefined8 *)(param_2 + 5),
                     (undefined8 *)&UndefinedInstruction);
  uVar18 = local_238[0] << 0x18 | (local_238[0] >> 8 & 0xff) << 0x10 |
           (local_238[0] >> 0x10 & 0xff) << 8 | local_238[0] >> 0x18;
  if (param_3 - 9 < uVar18) {
    return;
  }
  local_238[0] = local_238[0] & 0xffffff00;
  if (uVar18 + 9 == param_3) {
    return;
  }
  recovered_100038f0((undefined8 *)local_238,(undefined8 *)(param_2 + uVar18 + 9),(undefined8 *)0x1)
  ;
  cVar6 = *(char *)(param_1 + 0x850);
  iVar16 = uVar18 + 10;
  uVar8 = local_238[0] & 0xff;
  uVar7 = extraout_r1;
  if (cVar6 == '\x01') {
    uVar7 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18;
  }
  local_30 = iVar16;
  if (cVar6 != '\x01' || uVar7 != 0) {
    if (uVar8 == 0 || cVar6 == '\0') {
      return;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x140);
    uVar1 = 100;
    goto LAB_1001a918;
  }
  puVar10 = (uint *)(param_2 + 9);
  uVar5 = recovered_100049b4(((uintptr_t)pf_module_state + 0xa91U));
  if ((uVar5 == uVar18) &&
     (iVar3 = recovered_100046ac(puVar10,(uint *)str_1001f669,uVar18), iVar3 == 0)) {
    local_238[0] = 0;
    if (param_3 - iVar16 < 4) {
LAB_1001a39c:
      local_238[0] = local_238[0] & 0xffffff00;
LAB_1001a3a4:
      bVar2 = false;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x86c) = 0;
    }
    else {
      puVar10 = local_238;
      recovered_100038f0((undefined8 *)puVar10,(undefined8 *)(param_2 + iVar16),
                         (undefined8 *)&UndefinedInstruction);
      iVar16 = uVar18 + 0xe;
      puVar9 = (undefined8 *)
               (local_238[0] << 0x18 | (local_238[0] >> 8 & 0xff) << 0x10 |
                (local_238[0] >> 0x10 & 0xff) << 8 | local_238[0] >> 0x18);
      if ((undefined8 *)(param_3 - iVar16) < puVar9) goto LAB_1001a39c;
      iVar3 = (int)puVar9 + iVar16;
      if (param_2 != 0) {
        if ((undefined8 *)0x1e < puVar9) {
          puVar9 = (undefined8 *)0x1f;
        }
        recovered_100038f0((undefined8 *)local_238,(undefined8 *)(param_2 + iVar16),puVar9);
        puVar10 = (uint *)((int)local_238 + (int)puVar9);
      }
      bVar2 = false;
      *(undefined1 *)puVar10 = 0;
      local_28[0] = 0;
      if (param_3 - iVar3 < 4) goto LAB_1001a3a4;
      recovered_100038f0((undefined8 *)local_28,(undefined8 *)(param_2 + iVar3),
                         (undefined8 *)&UndefinedInstruction);
      uVar5 = local_28[0];
      local_28[0] = 0;
      *(uint *)(param_1 + 0x86c) =
           uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
      ;
      uVar5 = 0;
      if (3 < param_3 - (iVar3 + 4)) {
        recovered_100038f0((undefined8 *)local_28,(undefined8 *)(param_2 + iVar3 + 4),
                           (undefined8 *)&UndefinedInstruction);
        bVar2 = true;
        uVar5 = local_28[0] << 0x18 | (local_28[0] >> 8 & 0xff) << 0x10 |
                (local_28[0] >> 0x10 & 0xff) << 8 | local_28[0] >> 0x18;
      }
    }
    *(bool *)(param_1 + 0x868) = bVar2;
    *(uint *)(param_1 + 0x870) = uVar5;
  }
  else {
    uVar5 = recovered_100049b4(((uintptr_t)pf_module_state + 0xa99U));
    if ((uVar5 == uVar18) &&
       (iVar16 = recovered_100046ac(puVar10,(uint *)str_1001f671,uVar18), iVar16 == 0)) {
      bVar2 = false;
      if (*(int *)(param_1 + 0x874) == 0) {
        *(undefined4 *)(param_1 + 0xa78) = 0;
        pcVar4 = *(char **)(param_1 + 0xb8c);
        *(undefined4 *)(param_1 + 0x874) = 1;
        if (pcVar4 + -0x8001 < (char *)0xfffffffd || pcVar4 == (char *)0x7ffe) {
          puVar9 = *(undefined8 **)(param_1 + 0xb84);
          uVar5 = (uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff;
          puVar14 = (undefined8 *)(0x8000 - uVar5);
          if ((undefined8 *)0x1 < puVar14) {
            puVar14 = (undefined8 *)0x2;
          }
          recovered_100038f0((undefined8 *)((int)puVar9 + uVar5),(undefined8 *)&DAT_1001ed67,puVar14
                            );
          if (uVar5 == 0x7fff) {
            recovered_100038f0(puVar9,(undefined8 *)((int)puVar14 + ((uintptr_t)pf_module_state + 0x18fU)),
                               (undefined8 *)(2 - (int)puVar14));
          }
          pcVar4 = (char *)(*(int *)(param_1 + 0xb8c) + 2);
          *(char **)(param_1 + 0xb8c) = pcVar4;
        }
        if (DAT_10023810 != '\0') {
          pcVar17 = &DAT_10023810;
          pcVar11 = &DAT_10023810;
          cVar6 = DAT_10023810;
          do {
            if (cVar6 == '\0') {
LAB_1001a4a4:
              if ((pcVar17 < pcVar11) &&
                 (pcVar12 = pcVar11 + -(int)pcVar17, pcVar12 <= (char *)(0x8000 - (int)pcVar4))) {
                puVar9 = *(undefined8 **)(param_1 + 0xb84);
                pcVar19 = (char *)(0x8000 - ((uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff));
                pcVar15 = pcVar12;
                if (pcVar19 < pcVar12) {
                  pcVar15 = pcVar19;
                }
                recovered_100038f0((undefined8 *)
                                   ((int)puVar9 +
                                   ((uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff)),
                                   (undefined8 *)pcVar17,(undefined8 *)pcVar15);
                if (pcVar19 < pcVar12) {
                  recovered_100038f0(puVar9,(undefined8 *)(pcVar17 + (int)pcVar15),
                                     (undefined8 *)(pcVar12 + -(int)pcVar15));
                }
                pcVar4 = pcVar12 + *(int *)(param_1 + 0xb8c);
                *(char **)(param_1 + 0xb8c) = pcVar4;
                cVar6 = *pcVar11;
              }
              if (cVar6 == '\0') goto LAB_1001a7d0;
              if (pcVar4 + -0x8001 < (char *)0xfffffffd || pcVar4 == (char *)0x7ffe) {
                puVar14 = *(undefined8 **)(param_1 + 0xb84);
                uVar5 = (uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff;
                puVar9 = (undefined8 *)(0x8000 - uVar5);
                if ((undefined8 *)0x1 < puVar9) {
                  puVar9 = (undefined8 *)0x2;
                }
                recovered_100038f0((undefined8 *)((int)puVar14 + uVar5),(undefined8 *)&DAT_1001ed67,
                                   puVar9);
                if (uVar5 == 0x7fff) {
                  recovered_100038f0(puVar14,(undefined8 *)((int)puVar9 + ((uintptr_t)pf_module_state + 0x18fU)),
                                     (undefined8 *)(2 - (int)puVar9));
                }
                pcVar4 = (char *)(*(int *)(param_1 + 0xb8c) + 2);
                *(char **)(param_1 + 0xb8c) = pcVar4;
              }
LAB_1001a484:
              pcVar17 = pcVar11 + 1;
            }
            else {
              if (cVar6 == '\r') {
                if ((pcVar17 < pcVar11) &&
                   (pcVar12 = pcVar11 + -(int)pcVar17, pcVar12 <= (char *)(0x8000 - (int)pcVar4))) {
                  puVar9 = *(undefined8 **)(param_1 + 0xb84);
                  pcVar19 = (char *)(0x8000 - ((uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff))
                  ;
                  pcVar15 = pcVar12;
                  if (pcVar19 < pcVar12) {
                    pcVar15 = pcVar19;
                  }
                  recovered_100038f0((undefined8 *)
                                     ((int)puVar9 +
                                     ((uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff)),
                                     (undefined8 *)pcVar17,(undefined8 *)pcVar15);
                  if (pcVar19 < pcVar12) {
                    recovered_100038f0(puVar9,(undefined8 *)(pcVar17 + (int)pcVar15),
                                       (undefined8 *)(pcVar12 + -(int)pcVar15));
                  }
                  pcVar4 = pcVar12 + *(int *)(param_1 + 0xb8c);
                  *(char **)(param_1 + 0xb8c) = pcVar4;
                }
                if (pcVar4 + -0x8001 < (char *)0xfffffffd || pcVar4 == (char *)0x7ffe) {
                  puVar14 = *(undefined8 **)(param_1 + 0xb84);
                  uVar5 = (uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff;
                  puVar9 = (undefined8 *)(0x8000 - uVar5);
                  if ((undefined8 *)0x1 < puVar9) {
                    puVar9 = (undefined8 *)0x2;
                  }
                  recovered_100038f0((undefined8 *)((int)puVar14 + uVar5),
                                     (undefined8 *)&DAT_1001ed67,puVar9);
                  if (uVar5 == 0x7fff) {
                    recovered_100038f0(puVar14,(undefined8 *)((int)puVar9 + ((uintptr_t)pf_module_state + 0x18fU)),
                                       (undefined8 *)(2 - (int)puVar9));
                  }
                  pcVar4 = (char *)(*(int *)(param_1 + 0xb8c) + 2);
                  *(char **)(param_1 + 0xb8c) = pcVar4;
                }
                if (pcVar11[1] == '\n') {
                  pcVar11 = pcVar11 + 1;
                }
                goto LAB_1001a484;
              }
              if (cVar6 == '\n') goto LAB_1001a4a4;
            }
            pcVar11 = pcVar11 + 1;
            cVar6 = *pcVar11;
          } while( true );
        }
        recovered_10007098((char *)local_238,0x100,str_1001f6a9,&DAT_10023910);
        puVar9 = (undefined8 *)recovered_100049b4((int)local_238);
        if (puVar9 <= (undefined8 *)(0x8000U - *(int *)(param_1 + 0xb8c))) {
          puVar20 = *(undefined8 **)(param_1 + 0xb84);
          uVar5 = *(int *)(param_1 + 0xb88) + *(int *)(param_1 + 0xb8c) & 0x7fff;
          puVar13 = (undefined8 *)(0x8000 - uVar5);
          puVar14 = puVar9;
          if (puVar13 < puVar9) {
            puVar14 = puVar13;
          }
          recovered_100038f0((undefined8 *)((int)puVar20 + uVar5),(undefined8 *)local_238,puVar14);
          if (puVar13 < puVar9) {
            recovered_100038f0(puVar20,(undefined8 *)((int)local_238 + (int)puVar14),
                               (undefined8 *)((int)puVar9 - (int)puVar14));
          }
          iVar16 = *(int *)(param_1 + 0xb8c) + (int)puVar9;
          goto LAB_1001a8c8;
        }
        goto LAB_1001a8cc;
      }
    }
    else {
      uVar5 = recovered_100049b4(((uintptr_t)pf_module_state + 0xa9fU));
      if ((uVar5 == uVar18) &&
         (iVar16 = recovered_100046ac(puVar10,(uint *)&DAT_1001f677,uVar18), iVar16 == 0)) {
        bVar2 = false;
        if ((*(int *)(param_1 + 0x874) == 0) &&
           (iVar16 = recovered_1001968c(&local_38,(undefined1 *)local_238,0x200), iVar16 != 0)) {
          *(undefined4 *)(param_1 + 0x874) = 2;
          recovered_100195a8((void *)param_1,str_1001f67c,local_238);
          bVar2 = recovered_1001dfa8((byte *)local_238);
          if (!bVar2) {
            recovered_1001e250(param_1,local_238);
            goto LAB_1001a8f8;
          }
          bVar2 = true;
          if (*(char *)(param_1 + 0xdab) == '\0') {
            *(undefined1 *)(param_1 + 0xdab) = 1;
            *(undefined4 *)(param_1 + 0xdb0) = 0;
          }
        }
      }
      else {
        uVar5 = recovered_100049b4(((uintptr_t)pf_module_state + 0xaadU));
        if ((uVar5 == uVar18) &&
           (iVar16 = recovered_100046ac(puVar10,(uint *)str_1001f685,uVar18), iVar16 == 0)) {
          uVar5 = recovered_10019610(&local_38);
          *(uint *)(param_1 + 0x86c) = uVar5;
          uVar5 = recovered_10019610(&local_38);
          *(uint *)(param_1 + 0x870) = uVar5;
        }
        else {
          bVar2 = recovered_1001977c((int)puVar10,uVar18,&DAT_1001f693);
          if ((!bVar2) && (bVar2 = recovered_1001977c((int)puVar10,uVar18,str_1001f697), !bVar2)) {
            bVar2 = recovered_1001977c((int)puVar10,uVar18,str_1001f69e);
            goto LAB_1001a8fc;
          }
        }
LAB_1001a8f8:
        bVar2 = true;
      }
    }
  }
LAB_1001a8fc:
  if (uVar8 == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x140);
  uVar1 = 100;
  if (bVar2) {
    uVar1 = 99;
  }
LAB_1001a918:
  local_238[0] = CONCAT31(PF_PART3(local_238[0], 1),uVar1);
  recovered_100038f0(puVar9,(undefined8 *)local_238,(undefined8 *)0x1);
  uVar5 = *(uint *)(param_1 + 0x858);
  local_238[0] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
  recovered_100038f0((undefined8 *)((int)puVar9 + 1),(undefined8 *)local_238,
                     (undefined8 *)&UndefinedInstruction);
  recovered_100136d0(param_1,puVar9,5);
  return;
LAB_1001a7d0:
  if (pcVar4 + -0x8001 < (char *)0xfffffffb || pcVar4 == (char *)0x7ffc) {
    puVar9 = *(undefined8 **)(param_1 + 0xb84);
    uVar5 = (uint)(pcVar4 + *(int *)(param_1 + 0xb88)) & 0x7fff;
    puVar14 = (undefined8 *)(0x8000 - uVar5);
    if ((undefined8 *)0x3 < puVar14) {
      puVar14 = (undefined8 *)&UndefinedInstruction;
    }
    recovered_100038f0((undefined8 *)((int)puVar9 + uVar5),(undefined8 *)&DAT_1001f6a4,puVar14);
    if (0x7ffc < uVar5) {
      recovered_100038f0(puVar9,(undefined8 *)((int)puVar14 + ((uintptr_t)pf_module_state + 0xaccU)),
                         (undefined8 *)(4 - (int)puVar14));
    }
    iVar16 = *(int *)(param_1 + 0xb8c) + 4;
LAB_1001a8c8:
    *(int *)(param_1 + 0xb8c) = iVar16;
  }
LAB_1001a8cc:
  recovered_1001948c(param_1);
  recovered_1000b728(str_1001f1c4,*(uint *)(param_1 + 4),(void *)(param_1 + 0x11c),str_1001f6be);
  goto LAB_1001a8f8;
}

#undef DAT_1001ed67
#undef DAT_1001f677
#undef DAT_1001f693
#undef DAT_1001f6a4
#undef DAT_10023810
#undef DAT_10023910
#undef EXT_00000004
#undef str_1001f1c4
#undef str_1001f669
#undef str_1001f671
#undef str_1001f67c
#undef str_1001f685
#undef str_1001f697
#undef str_1001f69e
#undef str_1001f6a9
#undef str_1001f6be
#undef local_238
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef str_1001f6dd
#define str_1001f6dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb05U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a974
 */

void recovered_1001a974(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r3 = 0;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;

  local_24 = local_24 & 0xffffff00;
  if (param_3 != 0) {
    recovered_100038f0((undefined8 *)&local_24,(undefined8 *)param_2,(undefined8 *)0x1);
    local_24 = 0;
    if (4 < param_3) {
      recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + 1),
                         (undefined8 *)&UndefinedInstruction);
      uVar4 = local_24;
      local_24 = 0;
      if (3 < param_3 - 5) {
        recovered_100038f0((undefined8 *)&local_24,(undefined8 *)(param_2 + 5),
                           (undefined8 *)&UndefinedInstruction);
        uVar7 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
                local_24 >> 0x18;
        if (uVar7 <= param_3 - 9) {
          uVar3 = (uint)*(byte *)(param_1 + 0x850);
          bVar8 = uVar3 == 1;
          if (bVar8) {
            uVar3 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                    uVar4 >> 0x18;
          }
          if (bVar8 && uVar3 == 0) {
            if (*(uint *)(param_1 + 0x864) < uVar7) {
              recovered_1000be98(param_1,2,str_1001f6dd,extraout_r3);
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x864) - uVar7;
              *(uint *)(param_1 + 0x864) = uVar4;
              if (((*(int *)(param_1 + 0x874) == 1) && (uVar7 != 0)) &&
                 ((*(byte *)(param_1 + 0xdab) & 1) == 0)) {
                uVar4 = 0;
                do {
                  cVar1 = *(char *)(param_1 + 0xb90);
                  bVar8 = cVar1 == '\0';
                  if (bVar8) {
                    cVar1 = *(char *)(param_1 + 0xb91);
                  }
                  if ((bVar8 && cVar1 == '\0') && (*(char *)(param_1 + 0xda8) != '\x01')) {
                    recovered_1001e3b8(param_1,(uint)*(byte *)(param_2 + 9 + uVar4));
                    if (*(char *)(param_1 + 0xdab) != '\0') break;
                  }
                  else {
                    uVar3 = *(uint *)(param_1 + 0xb80);
                    if (uVar3 < 0x100) {
                      uVar2 = *(undefined1 *)(param_2 + 9 + uVar4);
                      *(uint *)(param_1 + 0xb80) = uVar3 + 1;
                      *(undefined1 *)(param_1 + 0xa7e + uVar3) = uVar2;
                    }
                  }
                  uVar4 = uVar4 + 1;
                } while (uVar4 < uVar7);
                uVar4 = *(uint *)(param_1 + 0x864);
              }
              if (uVar4 >> 0x10 == 0) {
                puVar6 = *(undefined8 **)(param_1 + 0x140);
                local_24 = CONCAT31(PF_PART3(local_24, 1),0x5d);
                recovered_100038f0(puVar6,(undefined8 *)&local_24,(undefined8 *)0x1);
                uVar4 = *(uint *)(param_1 + 0x858);
                local_24 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18;
                recovered_100038f0((undefined8 *)((int)puVar6 + 1),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                uVar4 = 0x20000 - *(int *)(param_1 + 0x864);
                local_24 = *(int *)(param_1 + 0x864) * -0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 |
                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                recovered_100038f0((undefined8 *)((int)puVar6 + 5),(undefined8 *)&local_24,
                                   (undefined8 *)&UndefinedInstruction);
                iVar5 = recovered_100136d0(param_1,puVar6,9);
                if (iVar5 != 0) {
                  *(undefined4 *)(param_1 + 0x864) = 0x20000;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

#undef EXT_00000004
#undef str_1001f6dd
#undef local_24

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_15 (*(undefined1 *)(pf_stack_frame + 27))
#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ab74
 */

void recovered_1001ab74(int param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;

  puVar2 = *(undefined8 **)(param_1 + 0x140);
  local_15 = param_2;
  recovered_100038f0(puVar2,(undefined8 *)&local_15,(undefined8 *)0x1);
  uVar1 = *(uint *)(param_1 + 0x858);
  local_14 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  recovered_100038f0((undefined8 *)((int)puVar2 + 1),(undefined8 *)&local_14,
                     (undefined8 *)&UndefinedInstruction);
  recovered_100136d0(param_1,puVar2,5);
  return;
}

#undef EXT_00000004
#undef local_15
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001abd0
 */

undefined4 recovered_1001abd0(int param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  uVar2 = recovered_100049b4((int)param_3);
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      if (param_2 < uVar3) {
        return 0;
      }
      bVar1 = false;
      uVar6 = uVar3;
      if ((uVar3 < param_2) && (bVar1 = true, uVar5 = uVar3, *(char *)(param_1 + uVar3) != ',')) {
        do {
          uVar5 = uVar5 + 1;
          if (param_2 == uVar5) {
            uVar6 = param_2;
            goto LAB_1001ac64;
          }
        } while (*(char *)(param_1 + uVar5) != ',');
        uVar6 = uVar5;
LAB_1001ac64:
        bVar1 = false;
        if (uVar5 < param_2) {
          bVar1 = true;
        }
      }
      if ((uVar6 - uVar3 == uVar2) &&
         (iVar4 = recovered_100046ac((uint *)(param_1 + uVar3),param_3,uVar2), iVar4 == 0)) {
        return 1;
      }
      uVar3 = uVar6 + 1;
    } while (bVar1);
  }
  return 0;
}


#undef str_1001f46b
#define str_1001f46b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x893U)))
#undef str_1001f489
#define str_1001f489 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b1U)))
#undef str_1001f494
#define str_1001f494 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001acac
 */

int recovered_1001acac(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;

  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    bVar1 = 0;
    uVar5 = uVar3;
    if ((uVar3 < param_2) && (bVar1 = 1, uVar4 = uVar3, *(char *)(param_1 + uVar3) != ',')) {
      do {
        uVar4 = uVar4 + 1;
        if (param_2 == uVar4) {
          uVar5 = param_2;
          goto LAB_1001ad5c;
        }
      } while (*(char *)(param_1 + uVar4) != ',');
      uVar5 = uVar4;
LAB_1001ad5c:
      bVar1 = 0;
      if (uVar4 < param_2) {
        bVar1 = 1;
      }
    }
    uVar4 = uVar5 - uVar3;
    puVar6 = (uint *)(param_1 + uVar3);
    uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x893U));
    if ((uVar3 == uVar4) &&
       (iVar2 = recovered_100046ac(puVar6,(uint *)str_1001f46b,uVar4), iVar2 == 0)) {
      return 1;
    }
    uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x8b1U));
    if ((uVar3 == uVar4) &&
       (iVar2 = recovered_100046ac(puVar6,(uint *)str_1001f489,uVar4), iVar2 == 0)) {
      return 3;
    }
    uVar3 = recovered_100049b4(((uintptr_t)pf_module_state + 0x8bcU));
    if (uVar3 == uVar4) {
      iVar2 = recovered_100046ac(puVar6,(uint *)str_1001f494,uVar4);
      if (!(bool)(iVar2 != 0 & bVar1)) {
        return (uint)(iVar2 == 0) << 1;
      }
      uVar3 = uVar5 + 1;
      if (param_2 < uVar3) {
        return 0;
      }
    }
    else {
      uVar3 = uVar5 + 1;
      if (!(bool)(uVar3 <= param_2 & bVar1)) {
        return 0;
      }
    }
  } while( true );
}

#undef str_1001f46b
#undef str_1001f489
#undef str_1001f494

#undef str_1001f49f
#define str_1001f49f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c7U)))
#undef str_1001f4ad
#define str_1001f4ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ae58
 */

int recovered_1001ae58(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    bVar1 = 0;
    uVar5 = uVar3;
    if ((uVar3 < param_2) && (bVar1 = 1, uVar4 = uVar3, *(char *)(param_1 + uVar3) != ',')) {
      do {
        uVar4 = uVar4 + 1;
        if (param_2 == uVar4) {
          uVar5 = param_2;
          goto LAB_1001af04;
        }
      } while (*(char *)(param_1 + uVar4) != ',');
      uVar5 = uVar4;
LAB_1001af04:
      bVar1 = 0;
      if (uVar4 < param_2) {
        bVar1 = 1;
      }
    }
    uVar6 = uVar5 - uVar3;
    uVar4 = recovered_100049b4(((uintptr_t)pf_module_state + 0x8c7U));
    if ((uVar4 == uVar6) &&
       (iVar2 = recovered_100046ac((uint *)(param_1 + uVar3),(uint *)str_1001f49f,uVar6), iVar2 == 0
       )) {
      return 1;
    }
    uVar4 = recovered_100049b4(((uintptr_t)pf_module_state + 0x8d5U));
    if (uVar4 == uVar6) {
      iVar2 = recovered_100046ac((uint *)(param_1 + uVar3),(uint *)str_1001f4ad,uVar6);
      if (!(bool)(iVar2 != 0 & bVar1)) {
        return (uint)(iVar2 == 0) << 1;
      }
      uVar3 = uVar5 + 1;
      if (param_2 < uVar3) {
        return 0;
      }
    }
    else {
      uVar3 = uVar5 + 1;
      if (!(bool)(uVar3 <= param_2 & bVar1)) {
        return 0;
      }
    }
  } while( true );
}

#undef str_1001f49f
#undef str_1001f4ad

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001afc4
 */

bool recovered_1001afc4(int param_1,int param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar2 = recovered_100049b4((int)param_3);
  bVar1 = false;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      if (*(char *)(param_1 + uVar4) == ',') goto LAB_1001b010;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    uVar4 = param_2;
  }
LAB_1001b010:
  if (uVar4 == uVar2) {
    iVar3 = recovered_100046ac((uint *)param_1,param_3,uVar2);
    bVar1 = iVar3 == 0;
  }
  return bVar1;
}


/* Recovered clamped Montgomery ladder over the native sixteen-limb field.
 * Pooka's Free Software License. */
static void pf_curve_product(int64_t out[16],const int64_t a[16],const int64_t b[16]) {
    recovered_1000e2e0((uint *)out,(int)(uintptr_t)a,(uint128 *)b);
}
static void pf_curve_swap(int64_t a[16],int64_t b[16],unsigned bit) {
    int64_t mask=-(int64_t)bit;
    for(unsigned i=0;i<16;i++){int64_t change=(a[i]^b[i])&mask;a[i]^=change;b[i]^=change;}
}
void recovered_1001b030(undefined4 output,uint *key,int point) {
    uint8_t scalar[32];
    int64_t x[16],a[16]={1},b[16],c[16]={0},d[16]={1},e[16],f[16];
    const int64_t constant[16]={121665};
    for(unsigned i=0;i<32;i++)scalar[i]=((const uint8_t *)key)[i];
    scalar[0]&=248;scalar[31]=(scalar[31]&127)|64;
    for(unsigned i=0;i<16;i++) {
        const uint8_t *p=(const uint8_t *)(uintptr_t)point+2*i;
        x[i]=b[i]=(int64_t)p[0]+((int64_t)p[1]<<8);
    }
    x[15]&=0x7fff;b[15]&=0x7fff;
    for(int index=254;index>=0;index--) {
        unsigned bit=(scalar[index>>3]>>(index&7))&1;
        pf_curve_swap(a,b,bit);pf_curve_swap(c,d,bit);
        for(unsigned i=0;i<16;i++){e[i]=a[i]+c[i];a[i]-=c[i];c[i]=b[i]+d[i];b[i]-=d[i];}
        pf_curve_product(d,e,e);pf_curve_product(f,a,a);
        pf_curve_product(a,c,a);pf_curve_product(c,b,e);
        for(unsigned i=0;i<16;i++){e[i]=a[i]+c[i];a[i]-=c[i];}
        pf_curve_product(b,a,a);
        for(unsigned i=0;i<16;i++)c[i]=d[i]-f[i];
        pf_curve_product(a,c,constant);
        for(unsigned i=0;i<16;i++)a[i]+=d[i];
        pf_curve_product(c,c,a);pf_curve_product(a,d,f);
        pf_curve_product(d,b,x);pf_curve_product(b,e,e);
        pf_curve_swap(a,b,bit);pf_curve_swap(c,d,bit);
    }
    int64_t inverse[16];
    for(unsigned i=0;i<16;i++)inverse[i]=c[i];
    for(int index=253;index>=0;index--) {
        pf_curve_product(inverse,inverse,inverse);
        if(index!=2 && index!=4)pf_curve_product(inverse,inverse,c);
    }
    pf_curve_product(a,a,inverse);
    recovered_10010704((uint8_t *)(uintptr_t)output,a);
    for(unsigned i=0;i<32;i++)((volatile uint8_t *)scalar)[i]=0;
}


#undef DAT_1001fd38
#define DAT_1001fd38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1160U)))
#undef DAT_1001ffe0
#define DAT_1001ffe0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1408U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_64 (*(undefined8 (*)[12])(pf_stack_frame + 156))
#define local_a4 (*(undefined8 (*)[20])(pf_stack_frame + 92))
#define local_e4 (*(undefined8 (*)[28])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cf60
 */

void recovered_1001cf60(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                       int param_7,int param_8)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  byte bVar17;

  recovered_10004080((byte *)param_1,0,0x19c);
  uVar11 = 0x43;
  if (param_8 != 0) {
    uVar11 = 0x44;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[1] = param_3;
  *param_1 = param_2;
  if (param_2 == 1) {
    recovered_1001d9e0(param_4,param_5,param_6,param_7,uVar11,(int)param_1 + 9);
    param_1[0x65] = 0x10;
    param_1[0x66] = 8;
  }
  else {
    uVar4 = 0x41;
    if (param_8 != 0) {
      uVar4 = 0x42;
    }
    recovered_1001d9e0(param_4,param_5,param_6,param_7,uVar4,(int)local_64);
    recovered_1001d9e0(param_4,param_5,param_6,param_7,uVar11,(int)local_a4);
    uVar11 = 0x45;
    if (param_8 != 0) {
      uVar11 = 0x46;
    }
    recovered_1001d9e0(param_4,param_5,param_6,param_7,uVar11,(int)local_e4);
    puVar8 = (undefined8 *)&DataAbort;
    if (param_2 == 3) {
      puVar8 = (undefined8 *)0x20;
    }
    param_1[0x4f] = ((uint)puVar8 >> 2) + 6;
    recovered_100038f0((undefined8 *)(param_1 + 0x13),local_a4,puVar8);
    iVar16 = 0;
    do {
      iVar12 = (int)param_1 + (int)puVar8 + iVar16 * 4;
      uVar5 = ((uint)puVar8 >> 2) + iVar16;
      uVar6 = uVar5 & ((uint)puVar8 >> 2) - 1;
      bVar14 = *(byte *)(iVar12 + 0x48);
      uVar10 = (uint)bVar14;
      bVar13 = *(byte *)(iVar12 + 0x49);
      bVar7 = *(byte *)(iVar12 + 0x4a);
      uVar9 = (uint)bVar7;
      bVar17 = *(byte *)(iVar12 + 0x4b);
      if (uVar6 == 0) {
        bVar14 = (&DAT_1001fd38)[bVar13];
        uVar5 = recovered_10001d50(uVar5,(uint)puVar8 >> 2);
        bVar14 = (&DAT_1001ffe0)[uVar5] ^ bVar14;
        uVar5 = (uint)bVar17;
LAB_1001d1b4:
        bVar17 = (&DAT_1001fd38)[uVar10];
        bVar7 = (&DAT_1001fd38)[uVar5];
        bVar13 = (&DAT_1001fd38)[uVar9];
      }
      else if ((param_2 == 3) && (uVar6 == 4)) {
        bVar14 = (&DAT_1001fd38)[uVar10];
        uVar5 = uVar9;
        uVar10 = (uint)bVar17;
        uVar9 = (uint)bVar13;
        goto LAB_1001d1b4;
      }
      iVar15 = iVar16 + 1;
      bVar1 = *(byte *)(param_1 + iVar16 + 0x13);
      bVar2 = *(byte *)((int)param_1 + iVar16 * 4 + 0x4d);
      bVar3 = *(byte *)((int)param_1 + iVar16 * 4 + 0x4f);
      *(byte *)(iVar12 + 0x4e) = *(byte *)((int)param_1 + iVar16 * 4 + 0x4e) ^ bVar7;
      *(byte *)(iVar12 + 0x4d) = bVar2 ^ bVar13;
      *(byte *)(iVar12 + 0x4f) = bVar3 ^ bVar17;
      *(byte *)(iVar12 + 0x4c) = bVar1 ^ bVar14;
      iVar16 = iVar15;
    } while ((int)puVar8 + (0x1c - ((uint)puVar8 >> 2)) != iVar15);
    recovered_100038f0((undefined8 *)(param_1 + 0x50),local_64,(undefined8 *)&DataAbort);
    puVar8 = (undefined8 *)0x20;
    if (param_3 == 2) {
      puVar8 = (undefined8 *)0x40;
    }
    param_1[100] = (int)puVar8;
    recovered_100038f0((undefined8 *)(param_1 + 0x54),local_e4,puVar8);
    param_1[0x65] = param_1[100];
    param_1[0x66] = 0x10;
  }
  return;
}

#undef DAT_1001fd38
#undef DAT_1001ffe0
#undef EXT_00000010
#undef local_64
#undef local_a4
#undef local_e4

#define local_210 (*(undefined8 (*)[66])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d518
 */

void recovered_1001d518(undefined4 *param_1)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 in_q8 [16];
  uint128 auVar7;

  puVar6 = local_210;
  iVar5 = 0;
  do {
    puVar4 = (undefined2 *)((int)param_1 + iVar5);
    iVar5 = iVar5 + 2;
    PF_PART14(auVar7, 2) = PF_PART14(in_q8, 2);
    PF_PART2(auVar7, 0) = *puVar4;
    auVar7 = VectorCopyLong(PF_PART8(auVar7, 0),1,1);
    auVar7 = VectorCopyLong(PF_PART8(auVar7, 0),2,1);
    PF_PART16(in_q8,0) = VectorCopyLong(PF_PART8(auVar7, 0),4,1);
    *puVar6 = PF_PART8(in_q8, 0);
    puVar6[1] = PF_PART8(in_q8, 8);
    puVar6 = puVar6 + 2;
  } while (iVar5 != 0x40);
  uVar1 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uVar2 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uVar3 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[0xc] = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  recovered_1001d588((undefined1 *)param_1,(uint128 *)local_210);
  return;
}

#undef local_210

#undef DAT_1001fee0
#define DAT_1001fee0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_1001fee4
#define DAT_1001fee4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x130cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d588
 */

void recovered_1001d588(undefined1 *param_1,uint128 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint128 auVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint128 *pauVar19;
  bool bVar20;
  bool bVar21;
  undefined1 in_q8 [16];
  uint128 auVar22;
  undefined1 in_q9 [16];
  uint128 auVar23;
  ulonglong in_d20;
  ulonglong in_d21;
  undefined1 in_q11 [16];
  uint128 auVar24;
  undefined1 in_q12 [16];
  uint128 auVar25;
  undefined1 in_q13 [16];
  uint128 auVar26;
  uint128 auVar27;
  undefined1 in_q14 [16];
  uint128 auVar28;
  uint128 auVar29;

  pauVar19 = param_2 + 0xf;
  iVar12 = 0x33;
  uVar18 = 0x3f;
  do {
    puVar16 = (uint *)(((uint8_t *)(void *)param_2) + uVar18 * 8);
    iVar13 = 0;
    uVar11 = 0;
    iVar15 = 0;
    do {
      puVar17 = (uint *)((int)&DAT_1001fee0 + iVar13);
      piVar1 = (int *)((int)&DAT_1001fee4 + iVar13);
      lVar3 = (ulonglong)*puVar17 * (ulonglong)*puVar16;
      uVar6 = (uint)lVar3;
      puVar9 = (uint *)(((uint8_t *)(void *)pauVar19) + 8 + iVar13);
      iVar13 = iVar13 + 8;
      uVar7 = uVar11 + uVar6 * -0x10;
      uVar8 = uVar7 + *puVar9;
      iVar5 = (iVar15 - (((puVar16[1] * *puVar17 +
                          *puVar16 * *piVar1 + (int)((ulonglong)lVar3 >> 0x20)) * 0x10 |
                         uVar6 >> 0x1c) + (uint)(uVar11 < uVar6 * 0x10))) + puVar9[1] +
              (uint)CARRY4(uVar7,*puVar9);
      uVar11 = uVar8 + 0x80 & 0xffffff00;
      iVar15 = iVar5 + (uint)(0xffffff7f < uVar8);
      *puVar9 = uVar8 - uVar11;
      puVar9[1] = iVar5 - (iVar15 + (uint)(uVar8 < uVar11));
      uVar11 = uVar8 + 0x80 >> 8 | iVar15 * 0x1000000;
      iVar15 = iVar15 >> 8;
    } while (iVar13 != 0xa0);
    pauVar19 = (uint128 *)(((uint8_t *)(void *)&pauVar19[-1]) + 8);
    puVar16[1] = 0;
    *puVar16 = 0;
    puVar16 = (uint *)(((uint8_t *)(void *)param_2) + iVar12 * 8);
    uVar6 = *puVar16;
    iVar12 = iVar12 + -1;
    *puVar16 = uVar6 + uVar11;
    puVar16[1] = puVar16[1] + iVar15 + (uint)CARRY4(uVar6,uVar11);
    bVar20 = 0x20 < uVar18;
    uVar18 = uVar18 - 1;
  } while (bVar20);
  iVar15 = 0;
  uVar18 = 0;
  iVar12 = 0;
  do {
    iVar13 = *(int *)(((uint8_t *)(void *)&param_2[0xf]) + 0xc);
    uVar14 = *(uint *)((int)&DAT_1001fee0 + iVar15);
    uVar11 = *(uint *)(((uint8_t *)(void *)&param_2[0xf]) + 8) >> 4 | iVar13 << 0x1c;
    iVar5 = *(int *)((int)&DAT_1001fee4 + iVar15);
    lVar3 = (ulonglong)uVar14 * (ulonglong)uVar11;
    uVar7 = (uint)lVar3;
    uVar8 = uVar18 - uVar7;
    puVar16 = (uint *)(((uint8_t *)(void *)param_2) + iVar15);
    iVar15 = iVar15 + 8;
    uVar6 = puVar16[1];
    puVar16[1] = 0;
    uVar10 = uVar8 + *puVar16;
    iVar12 = (iVar12 - ((iVar13 >> 4) * uVar14 + uVar11 * iVar5 + (int)((ulonglong)lVar3 >> 0x20) +
                       (uint)(uVar18 < uVar7))) + uVar6 + (uint)CARRY4(uVar8,*puVar16);
    uVar18 = uVar10 >> 8 | iVar12 * 0x1000000;
    iVar12 = iVar12 >> 8;
    *puVar16 = uVar10 & 0xff;
  } while (iVar15 != 0x100);
  PF_PART8(auVar23, 8) = PF_PART8(in_q9, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff5e & 0xffff;
  PF_PART8(auVar23, 0) = PF_PART8(in_q9, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff09 & 0xffff;
  PF_PART8(auVar24, 8) = PF_PART8(in_q11, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffffa8 & 0xffff;
  PF_PART8(auVar24, 0) = PF_PART8(in_q11, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffffee & 0xffff;
  PF_PART8(auVar25, 8) = PF_PART8(in_q12, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff9d & 0xffff;
  PF_PART8(auVar25, 0) = PF_PART8(in_q12, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffffe6 & 0xffff;
  PF_PART8(auVar26, 8) = PF_PART8(in_q13, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff2d & 0xffff;
  PF_PART8(auVar26, 0) = PF_PART8(in_q13, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff13 & 0xffff;
  auVar27 = VectorAdd(auVar26,*param_2,8);
  auVar29 = param_2[1];
  PF_PART8(auVar28, 8) = PF_PART8(in_q14, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffffa4 & 0xffff;
  PF_PART8(auVar28, 0) = PF_PART8(in_q14, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff0b & 0xffff;
  *(longlong *)(uintptr_t)param_2 = PF_PART8(auVar27, 0);
  *(longlong *)(((uint8_t *)(void *)param_2) + 8) = PF_PART8(auVar27, 8);
  auVar29 = VectorAdd(auVar28,auVar29,8);
  *(longlong *)(uintptr_t)(param_2+(1)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[1]) + 8) = PF_PART8(auVar29, 8);
  auVar27 = param_2[2];
  auVar29 = VectorAdd(auVar25,auVar27,8);
  *(longlong *)(uintptr_t)(param_2+(2)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[2]) + 8) = PF_PART8(auVar29, 8);
  auVar29 = VectorAdd(auVar24,param_2[3],8);
  *(longlong *)(uintptr_t)(param_2+(3)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[3]) + 8) = PF_PART8(auVar29, 8);
  PF_PART8(auVar29, 8) = in_d21 & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff64 & 0xffff;
  PF_PART8(auVar29, 0) = in_d20 & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff2a & 0xffff;
  auVar29 = VectorAdd(auVar29,param_2[4],8);
  uVar2 = PF_PART8(in_q8, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff22 & 0xffff;
  PF_PART8(auVar22, 8) = PF_PART8(in_q8, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffff07 & 0xffff;
  PF_PART8(auVar22, 0) = uVar2;
  *(longlong *)(uintptr_t)(param_2+(4)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[4]) + 8) = PF_PART8(auVar29, 8);
  auVar29 = VectorAdd(auVar23,param_2[5],8);
  *(longlong *)(uintptr_t)(param_2+(5)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[5]) + 8) = PF_PART8(auVar29, 8);
  auVar29 = VectorAdd(auVar22,param_2[6],8);
  *(longlong *)(uintptr_t)(param_2+(6)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[6]) + 8) = PF_PART8(auVar29, 8);
  PF_PART8(auVar27, 8) = PF_PART8(auVar27, 0) & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xffffffec & 0xffff;
  PF_PART8(auVar27, 0) = uVar2;
  auVar29 = VectorAdd(auVar27,param_2[7],8);
  *(longlong *)(uintptr_t)(param_2+(7)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[7]) + 8) = PF_PART8(auVar29, 8);
  bVar21 = param_2 <= (uint128 *)(param_1 + 0x20);
  bVar20 = (uint128 *)(param_1 + 0x20) == param_2;
  if (bVar21 && !bVar20) {
    bVar21 = param_1 <= ((uint8_t *)(void *)&param_2[0x10]) + 8;
    bVar20 = ((uint8_t *)(void *)&param_2[0x10]) + 8 == param_1;
  }
  PF_PART8(auVar4, 8) = 0;
  PF_PART8(auVar4, 0) = in_d21 & 0xffff0000ffff0000 | (ulonglong)uVar18 * 0xfffffff0 & 0xffff;
  auVar29 = VectorAdd(auVar4 << 0x40,param_2[0xf],8);
  *(longlong *)(uintptr_t)(param_2+(0xf)) = PF_PART8(auVar29, 0);
  *(longlong *)(((uint8_t *)(void *)&param_2[0xf]) + 8) = PF_PART8(auVar29, 8);
  if (bVar21 && !bVar20) {
    iVar12 = 0;
    do {
      uVar18 = *(uint *)(uintptr_t)param_2;
      iVar15 = *(int *)(((uint8_t *)(void *)param_2) + 4);
      pauVar19 = (uint128 *)(((uint8_t *)(void *)param_2) + 8);
      uVar6 = *(uint *)(uintptr_t)pauVar19;
      iVar13 = *(int *)(((uint8_t *)(void *)param_2) + 0xc);
      uVar11 = uVar18 >> 8 | iVar15 << 0x18;
      *(uint *)(uintptr_t)pauVar19 = uVar6 + uVar11;
      *(uint *)(((uint8_t *)(void *)param_2) + 0xc) = iVar13 + (iVar15 >> 8) + (uint)CARRY4(uVar6,uVar11);
      param_1[iVar12] = (char)uVar18;
      iVar12 = iVar12 + 1;
      param_2 = pauVar19;
    } while (iVar12 != 0x20);
  }
  else {
    iVar15 = 0;
    iVar12 = *(int *)(((uint8_t *)(void *)param_2) + 4);
    uVar18 = *(uint *)(uintptr_t)param_2;
    do {
      pauVar19 = (uint128 *)(((uint8_t *)(void *)param_2) + 8);
      uVar11 = *(uint *)(uintptr_t)pauVar19;
      uVar7 = uVar18 >> 8 | iVar12 << 0x18;
      iVar13 = *(int *)(((uint8_t *)(void *)param_2) + 0xc);
      uVar6 = uVar11 + uVar7;
      *(uint *)(uintptr_t)pauVar19 = uVar6;
      iVar12 = iVar13 + (iVar12 >> 8) + (uint)CARRY4(uVar11,uVar7);
      *(int *)(((uint8_t *)(void *)param_2) + 0xc) = iVar12;
      param_1[iVar15] = (char)uVar18;
      iVar15 = iVar15 + 1;
      uVar18 = uVar6;
      param_2 = pauVar19;
    } while (iVar15 != 0x20);
  }
  return;
}

#undef DAT_1001fee0
#undef DAT_1001fee4

#undef DAT_1001da60
#define DAT_1001da60 (*(uint64_t *)(0x1001da60U))
#undef DAT_1001da68
#define DAT_1001da68 (*(uint64_t *)(0x1001da68U))
#undef DAT_1001da70
#define DAT_1001da70 (*(uint64_t *)(0x1001da70U))
#undef DAT_1001da78
#define DAT_1001da78 (*(uint64_t *)(0x1001da78U))
#undef DAT_1001dee0
#define DAT_1001dee0 (*(uint64_t *)(0x1001dee0U))
#undef DAT_1001dee8
#define DAT_1001dee8 (*(uint64_t *)(0x1001dee8U))
#undef DAT_1001def0
#define DAT_1001def0 (*(uint64_t *)(0x1001def0U))
#undef DAT_1001def8
#define DAT_1001def8 (*(uint64_t *)(0x1001def8U))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_68 (*(undefined8 (*)[13])(pf_stack_frame + 88))
#define local_90 (*(undefined8 *)(pf_stack_frame + 48))
#define local_b0 (*(uint (*)[44])(pf_stack_frame + 16))
#define local_80 (*(undefined8 *)(pf_stack_frame + 64))
#define local_70 (*(uint *)(pf_stack_frame + 80))
#define local_6c (*(int *)(pf_stack_frame + 84))
#define local_28 (*(int *)(pf_stack_frame + 152))
#define local_21 (*(undefined1 *)(pf_stack_frame + 159))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d9e0
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_1001d9e0(int param_1,int param_2,uint param_3,int param_4,undefined1 param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;

  puVar4 = (undefined8 *)0x20;
  local_21 = param_5;
  local_90 = (*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
  uStack_88 = (*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
  local_80 = (*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
  uStack_78 = (*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
  local_6c = 0;
  local_28 = 0;
  local_70 = param_3;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)param_3;
    puVar2 = (undefined8 *)param_2;
    do {
      puVar5 = (undefined8 *)(0x40U - local_28);
      if (puVar1 < (undefined8 *)(0x40U - local_28)) {
        puVar5 = puVar1;
      }
      recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),puVar2,puVar5);
      local_28 = local_28 + (int)puVar5;
      if (local_28 == 0x40) {
        recovered_10010ee4((uint *)&local_90,(int)auStack_68);
        local_28 = 0;
      }
      puVar1 = (undefined8 *)((int)puVar1 - (int)puVar5);
      puVar2 = (undefined8 *)((int)puVar2 + (int)puVar5);
    } while (puVar1 != (undefined8 *)0x0);
  }
  puVar1 = (undefined8 *)param_4;
  do {
    puVar2 = (undefined8 *)(0x40U - local_28);
    if (puVar4 < (undefined8 *)(0x40U - local_28)) {
      puVar2 = puVar4;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),puVar1,puVar2);
    local_28 = local_28 + (int)puVar2;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar4 = (undefined8 *)((int)puVar4 - (int)puVar2);
    puVar1 = (undefined8 *)((int)puVar1 + (int)puVar2);
  } while (puVar4 != (undefined8 *)0x0);
  puVar4 = (undefined8 *)&local_21;
  puVar1 = (undefined8 *)0x1;
  bVar6 = 0xfffffffe < local_70;
  local_70 = local_70 + 1;
  local_6c = local_6c + (uint)bVar6;
  do {
    puVar2 = (undefined8 *)(0x40U - local_28);
    if (puVar1 < (undefined8 *)(0x40U - local_28)) {
      puVar2 = puVar1;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),puVar4,puVar2);
    local_28 = local_28 + (int)puVar2;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar1 = (undefined8 *)((int)puVar1 - (int)puVar2);
    puVar4 = (undefined8 *)((int)puVar4 + (int)puVar2);
  } while (puVar1 != (undefined8 *)0x0);
  puVar1 = (undefined8 *)0x20;
  bVar6 = 0xffffffdf < local_70;
  local_70 = local_70 + 0x20;
  local_6c = local_6c + (uint)bVar6;
  puVar4 = (undefined8 *)(param_1 + 0x484);
  do {
    puVar2 = (undefined8 *)(0x40U - local_28);
    if (puVar1 < (undefined8 *)(0x40U - local_28)) {
      puVar2 = puVar1;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),puVar4,puVar2);
    local_28 = local_28 + (int)puVar2;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar1 = (undefined8 *)((int)puVar1 - (int)puVar2);
    puVar4 = (undefined8 *)((int)puVar4 + (int)puVar2);
  } while (puVar1 != (undefined8 *)0x0);
  puVar3 = local_b0;
  recovered_1000dcc0((uint *)&local_90,puVar3);
  local_6c = 0;
  local_80 = (*(uint64_t *)(uint64_t[]){0x9b05688c510e527fULL});
  uStack_78 = (*(uint64_t *)(uint64_t[]){0x5be0cd191f83d9abULL});
  local_90 = (*(uint64_t *)(uint64_t[]){0xbb67ae856a09e667ULL});
  uStack_88 = (*(uint64_t *)(uint64_t[]){0xa54ff53a3c6ef372ULL});
  local_28 = 0;
  puVar4 = (undefined8 *)0x20;
  local_70 = param_3;
  if (param_3 != 0) {
    do {
      puVar1 = (undefined8 *)(0x40U - local_28);
      if (param_3 < (undefined8 *)(0x40U - local_28)) {
        puVar1 = (undefined8 *)param_3;
      }
      recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)param_2,puVar1);
      local_28 = local_28 + (int)puVar1;
      if (local_28 == 0x40) {
        recovered_10010ee4((uint *)&local_90,(int)auStack_68);
        local_28 = 0;
      }
      param_2 = param_2 + (int)puVar1;
      param_3 = param_3 - (int)puVar1;
    } while ((undefined8 *)param_3 != (undefined8 *)0x0);
  }
  do {
    puVar1 = (undefined8 *)(0x40U - local_28);
    if (puVar4 < (undefined8 *)(0x40U - local_28)) {
      puVar1 = puVar4;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)param_4,puVar1);
    local_28 = local_28 + (int)puVar1;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar4 = (undefined8 *)((int)puVar4 - (int)puVar1);
    param_4 = param_4 + (int)puVar1;
  } while (puVar4 != (undefined8 *)0x0);
  puVar4 = (undefined8 *)0x20;
  bVar6 = 0xffffffdf < local_70;
  local_70 = local_70 + 0x20;
  local_6c = local_6c + (uint)bVar6;
  do {
    puVar1 = (undefined8 *)(0x40U - local_28);
    if (puVar4 < (undefined8 *)(0x40U - local_28)) {
      puVar1 = puVar4;
    }
    recovered_100038f0((undefined8 *)((int)auStack_68 + local_28),(undefined8 *)puVar3,puVar1);
    local_28 = local_28 + (int)puVar1;
    if (local_28 == 0x40) {
      recovered_10010ee4((uint *)&local_90,(int)auStack_68);
      local_28 = 0;
    }
    puVar4 = (undefined8 *)((int)puVar4 - (int)puVar1);
    puVar3 = (uint *)((int)puVar3 + (int)puVar1);
  } while (puVar4 != (undefined8 *)0x0);
  recovered_1000dcc0((uint *)&local_90,(uint *)(param_6 + 0x20));
  recovered_100038f0((undefined8 *)param_6,(undefined8 *)local_b0,(undefined8 *)0x20);
  return;
}

#undef DAT_1001da60
#undef DAT_1001da68
#undef DAT_1001da70
#undef DAT_1001da78
#undef DAT_1001dee0
#undef DAT_1001dee8
#undef DAT_1001def0
#undef DAT_1001def8
#undef uStack_78
#undef auStack_68
#undef local_90
#undef local_b0
#undef local_80
#undef local_70
#undef local_6c
#undef local_28
#undef local_21
#undef uStack_88

#undef DAT_1001ecc6
#define DAT_1001ecc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef DAT_10023782
#define DAT_10023782 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4baaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001df00
 */

bool recovered_1001df00(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;

  uVar1 = recovered_100049b4(((uintptr_t)pf_module_state + 0x4baaU));
  iVar2 = recovered_100049dc(&DAT_10023782,&DAT_1001ecc6);
  if (iVar2 == 0) {
    return true;
  }
  bVar6 = uVar1 != param_2;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      bVar5 = 0;
      if (uVar3 < param_2) {
        bVar5 = *(byte *)(param_1 + uVar3);
      }
      uVar4 = uVar3 + 1;
      bVar6 = (&DAT_10023782)[uVar3] ^ bVar5 | bVar6;
      uVar3 = uVar4;
    } while (uVar1 != uVar4);
  }
  return bVar6 == 0;
}

#undef DAT_1001ecc6
#undef DAT_10023782

#undef DAT_1001f6cd
#define DAT_1001f6cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf5U)))
#undef DAT_1001f6ce
#define DAT_1001f6ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf6U)))
#undef DAT_1001f6cf
#define DAT_1001f6cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf7U)))
#undef DAT_1001f6d0
#define DAT_1001f6d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
#undef DAT_1001f6d8
#define DAT_1001f6d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_1001f6d9
#define DAT_1001f6d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb01U)))
#undef DAT_1001f6da
#define DAT_1001f6da (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb02U)))
#undef DAT_1001f6db
#define DAT_1001f6db (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb03U)))
#undef DAT_1001f6dc
#define DAT_1001f6dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb04U)))
#undef str_1001f6d1
#define str_1001f6d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001dfa8
 */

bool recovered_1001dfa8(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;

  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    pcVar4 = str_1001f6d1;
LAB_1001e168:
    if (*pcVar4 == '\0') {
      return true;
    }
    if (uVar2 == 0) {
      pcVar4 = &DAT_1001f6d8;
      goto LAB_1001e23c;
    }
  }
  else {
    uVar1 = uVar2;
    if (uVar2 - 0x41 < 0x1a) {
      uVar1 = uVar2 | 0x20;
    }
    if (uVar1 == 0x6c) {
      uVar1 = (uint)param_1[1];
      if (uVar1 == 0) {
        pcVar4 = str_1001f6d1 + 1;
      }
      else {
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x6f) goto LAB_1001e17c;
        uVar1 = (uint)param_1[2];
        if (uVar1 == 0) {
          pcVar4 = str_1001f6d1 + 2;
        }
        else {
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != 0x67) goto LAB_1001e17c;
          uVar1 = (uint)param_1[3];
          if (uVar1 == 0) {
            pcVar4 = str_1001f6d1 + 3;
          }
          else {
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 != 0x6f) goto LAB_1001e17c;
            uVar1 = (uint)param_1[4];
            if (uVar1 == 0) {
              pcVar4 = str_1001f6d1 + 4;
            }
            else {
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 != 0x75) goto LAB_1001e17c;
              uVar1 = (uint)param_1[5];
              if (uVar1 == 0) {
                pcVar4 = str_1001f6d1 + 5;
              }
              else {
                uVar3 = uVar1 - 0x41;
                if (uVar3 < 0x1a) {
                  uVar1 = uVar1 | 0x20;
                }
                if (uVar1 == 0x74) {
                  uVar3 = (uint)param_1[6];
                }
                if (uVar1 != 0x74 || uVar3 != 0) goto LAB_1001e17c;
                pcVar4 = str_1001f6d1 + 6;
              }
            }
          }
        }
      }
      goto LAB_1001e168;
    }
    if (uVar1 == 0x65) {
      uVar1 = (uint)param_1[1];
      if (uVar1 == 0) {
        pcVar4 = &DAT_1001f6cd;
      }
      else {
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 != 0x78) goto LAB_1001e17c;
        uVar1 = (uint)param_1[2];
        if (uVar1 == 0) {
          pcVar4 = &DAT_1001f6ce;
        }
        else {
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 != 0x69) goto LAB_1001e17c;
          uVar1 = (uint)param_1[3];
          if (uVar1 == 0) {
            pcVar4 = &DAT_1001f6cf;
          }
          else {
            uVar3 = uVar1 - 0x41;
            if (uVar3 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x74) {
              uVar3 = (uint)param_1[4];
            }
            if (uVar1 != 0x74 || uVar3 != 0) goto LAB_1001e17c;
            pcVar4 = &DAT_1001f6d0;
          }
        }
      }
      if (*pcVar4 == '\0') {
        return true;
      }
    }
  }
LAB_1001e17c:
  if (uVar2 - 0x41 < 0x1a) {
    uVar2 = uVar2 | 0x20;
  }
  if (uVar2 != 0x71) {
    return false;
  }
  uVar2 = (uint)param_1[1];
  if (uVar2 == 0) {
    pcVar4 = &DAT_1001f6d9;
  }
  else {
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar2 != 0x75) {
      return false;
    }
    uVar2 = (uint)param_1[2];
    if (uVar2 == 0) {
      pcVar4 = &DAT_1001f6da;
    }
    else {
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar2 != 0x69) {
        return false;
      }
      uVar2 = (uint)param_1[3];
      if (uVar2 == 0) {
        pcVar4 = &DAT_1001f6db;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        if (uVar2 == 0x74) {
          param_1 = (byte *)(uint)param_1[4];
        }
        if (uVar2 != 0x74 || param_1 != (byte *)0x0) {
          return false;
        }
        pcVar4 = &DAT_1001f6dc;
      }
    }
  }
LAB_1001e23c:
  return *pcVar4 == '\0';
}

#undef DAT_1001f6cd
#undef DAT_1001f6ce
#undef DAT_1001f6cf
#undef DAT_1001f6d0
#undef DAT_1001f6d8
#undef DAT_1001f6d9
#undef DAT_1001f6da
#undef DAT_1001f6db
#undef DAT_1001f6dc
#undef str_1001f6d1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e250
 */

void recovered_1001e250(int param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = (undefined8 *)recovered_100049b4((int)param_2);
  puVar2 = (undefined8 *)0x1ff;
  if (puVar1 < (undefined8 *)0x1ff) {
    puVar2 = puVar1;
  }
  recovered_100038f0((undefined8 *)(param_1 + 0xb92),param_2,puVar2);
  *(undefined1 *)(param_1 + 0xb92 + (int)puVar2) = 0;
  *(undefined1 *)(param_1 + 0xb90) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e2a8
 */

void recovered_1001e2a8(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;

  if (param_3 <= 0x8000U - *(int *)(param_1 + 0xb8c)) {
    puVar3 = *(undefined8 **)(param_1 + 0xb84);
    uVar1 = *(int *)(param_1 + 0xb88) + *(int *)(param_1 + 0xb8c) & 0x7fff;
    puVar4 = (undefined8 *)(0x8000 - uVar1);
    puVar2 = (undefined8 *)param_3;
    if (puVar4 < param_3) {
      puVar2 = puVar4;
    }
    recovered_100038f0((undefined8 *)((int)puVar3 + uVar1),(undefined8 *)param_2,puVar2);
    if (puVar4 < param_3) {
      recovered_100038f0(puVar3,(undefined8 *)(param_2 + (int)puVar2),
                         (undefined8 *)(param_3 - (int)puVar2));
    }
    *(uint *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e32c
 */

void recovered_1001e32c(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;

  puVar1 = (undefined8 *)recovered_100049b4(param_2);
  if (puVar1 <= (undefined8 *)(0x8000U - *(int *)(param_1 + 0xb8c))) {
    puVar4 = *(undefined8 **)(param_1 + 0xb84);
    uVar2 = *(int *)(param_1 + 0xb88) + *(int *)(param_1 + 0xb8c) & 0x7fff;
    puVar5 = (undefined8 *)(0x8000 - uVar2);
    puVar3 = puVar1;
    if (puVar5 < puVar1) {
      puVar3 = puVar5;
    }
    recovered_100038f0((undefined8 *)((int)puVar4 + uVar2),(undefined8 *)param_2,puVar3);
    if (puVar5 < puVar1) {
      recovered_100038f0(puVar4,(undefined8 *)(param_2 + (int)puVar3),
                         (undefined8 *)((int)puVar1 - (int)puVar3));
    }
    *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + (int)puVar1;
  }
  return;
}


#undef DAT_1001f6f5
#define DAT_1001f6f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1dU)))
#undef DAT_1001f6f9
#define DAT_1001f6f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb21U)))
#undef DAT_1001f707
#define DAT_1001f707 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2fU)))
#define local_21 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e3b8
 */

void recovered_1001e3b8(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;

  cVar1 = *(char *)(param_1 + 0xa7c);
  cVar2 = *(char *)(param_1 + 0xa7d);
  local_21 = (undefined1)param_2;
  *(bool *)(param_1 + 0xa7d) = param_2 == 0xd;
  if (cVar1 == '\x03') {
LAB_1001e420:
    uVar3 = 0;
LAB_1001e424:
    *(undefined1 *)(param_1 + 0xa7c) = uVar3;
    return;
  }
  if (cVar1 == '\x02') {
    if (0x3e < param_2 - 0x40U) {
      return;
    }
    goto LAB_1001e420;
  }
  if (cVar1 == '\x01') {
    if (param_2 == 0x4f) {
      uVar3 = 3;
      goto LAB_1001e424;
    }
    if (param_2 == 0x5b) {
      uVar3 = 2;
      goto LAB_1001e424;
    }
    goto LAB_1001e420;
  }
  switch((uintptr_t)(param_2)) {
  case 3:
    puVar8 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0xb21U));
    if (puVar8 <= (undefined8 *)(0x8000U - *(int *)(param_1 + 0xb8c))) {
      puVar10 = *(undefined8 **)(param_1 + 0xb84);
      uVar6 = *(int *)(param_1 + 0xb88) + *(int *)(param_1 + 0xb8c) & 0x7fff;
      puVar7 = (undefined8 *)(0x8000 - uVar6);
      puVar9 = puVar8;
      if (puVar7 < puVar8) {
        puVar9 = puVar7;
      }
      recovered_100038f0((undefined8 *)((int)puVar10 + uVar6),(undefined8 *)&DAT_1001f6f9,puVar9);
      if (puVar7 < puVar8) {
        recovered_100038f0(puVar10,(undefined8 *)((int)puVar9 + ((uintptr_t)pf_module_state + 0xb21U)),
                           (undefined8 *)((int)puVar8 - (int)puVar9));
      }
      *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + (int)puVar8;
    }
    *(undefined4 *)(param_1 + 0xa78) = 0;
    goto LAB_1001e680;
  case 4:
    if ((*(int *)(param_1 + 0xa78) == 0) &&
       (recovered_1001e32c(param_1,((uintptr_t)pf_module_state + 0xb26U)), *(char *)(param_1 + 0xdab) == '\0')) {
      *(undefined4 *)(param_1 + 0xdb0) = 0;
      *(undefined1 *)(param_1 + 0xdab) = 1;
    }
    break;
  case 8:
switchD_1001e448_caseD_8:
    if ((*(int *)(param_1 + 0xa78) != 0) &&
       (*(int *)(param_1 + 0xa78) = *(int *)(param_1 + 0xa78) + -1,
       *(char *)(param_1 + 0x868) == '\x01')) {
      recovered_1001e2a8(param_1,((uintptr_t)pf_module_state + 0xb1dU),3);
      return;
    }
    break;
  case 9:
    break;
  case 10:
    if (cVar2 == '\0') goto switchD_1001e448_caseD_d;
    break;
  case 0xc:
    puVar8 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0xb2fU));
    if (puVar8 <= (undefined8 *)(0x8000U - *(int *)(param_1 + 0xb8c))) {
      puVar10 = *(undefined8 **)(param_1 + 0xb84);
      uVar6 = *(int *)(param_1 + 0xb88) + *(int *)(param_1 + 0xb8c) & 0x7fff;
      puVar7 = (undefined8 *)(0x8000 - uVar6);
      puVar9 = puVar8;
      if (puVar7 < puVar8) {
        puVar9 = puVar7;
      }
      recovered_100038f0((undefined8 *)((int)puVar10 + uVar6),(undefined8 *)&DAT_1001f707,puVar9);
      if (puVar7 < puVar8) {
        recovered_100038f0(puVar10,(undefined8 *)((int)puVar9 + ((uintptr_t)pf_module_state + 0xb2fU)),
                           (undefined8 *)((int)puVar8 - (int)puVar9));
      }
      *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + (int)puVar8;
    }
LAB_1001e680:
    recovered_1001948c(param_1);
    return;
  case 0xd:
switchD_1001e448_caseD_d:
    recovered_1001e798(param_1);
    return;
  case 0x15:
    iVar4 = *(int *)(param_1 + 0xa78);
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      *(int *)(param_1 + 0xa78) = iVar4;
      if ((*(char *)(param_1 + 0x868) == '\x01') &&
         (iVar5 = *(int *)(param_1 + 0xb8c), iVar5 - 0x8001U < 0xfffffffc || iVar5 == 0x7ffd)) {
        puVar8 = *(undefined8 **)(param_1 + 0xb84);
        uVar6 = *(int *)(param_1 + 0xb88) + iVar5 & 0x7fff;
        puVar9 = (undefined8 *)(0x8000 - uVar6);
        if ((undefined8 *)0x2 < puVar9) {
          puVar9 = (undefined8 *)0x3;
        }
        recovered_100038f0((undefined8 *)((int)puVar8 + uVar6),(undefined8 *)&DAT_1001f6f5,puVar9);
        if (0x7ffd < uVar6) {
          recovered_100038f0(puVar8,(undefined8 *)((int)puVar9 + ((uintptr_t)pf_module_state + 0xb1dU)),
                             (undefined8 *)((uint)puVar9 ^ 3));
        }
        iVar4 = *(int *)(param_1 + 0xa78);
        *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + 3;
      }
    }
    break;
  case 0x1b:
    uVar3 = 1;
    goto LAB_1001e424;
  default:
    if (param_2 == 0x7f) goto switchD_1001e448_caseD_8;
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
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    if (param_2 - 0x20U < 0x5f) {
      iVar4 = *(int *)(param_1 + 0xa78);
      uVar6 = iVar4 + 1;
      if (uVar6 >> 9 == 0) {
        *(uint *)(param_1 + 0xa78) = uVar6;
        *(undefined1 *)(param_1 + iVar4 + 0x878) = local_21;
        if (*(char *)(param_1 + 0x868) == '\x01') {
          recovered_1001e2a8(param_1,(int)&local_21,1);
        }
      }
    }
  }
  return;
}

#undef DAT_1001f6f5
#undef DAT_1001f6f9
#undef DAT_1001f707
#undef local_21

#undef DAT_1001ed67
#define DAT_1001ed67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef str_1001f6fe
#define str_1001f6fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb26U)))
#define abStack_224 (*(byte (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e798
 */

void recovered_1001e798(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;

  if ((*(char *)(param_1 + 0x868) == '\x01') &&
     (iVar2 = *(int *)(param_1 + 0xb8c), iVar2 - 0x8001U < 0xfffffffd || iVar2 == 0x7ffe)) {
    puVar5 = *(undefined8 **)(param_1 + 0xb84);
    uVar3 = *(int *)(param_1 + 0xb88) + iVar2 & 0x7fff;
    puVar4 = (undefined8 *)(0x8000 - uVar3);
    if ((undefined8 *)0x1 < puVar4) {
      puVar4 = (undefined8 *)0x2;
    }
    recovered_100038f0((undefined8 *)((int)puVar5 + uVar3),(undefined8 *)&DAT_1001ed67,puVar4);
    if (uVar3 == 0x7fff) {
      recovered_100038f0(puVar5,(undefined8 *)((int)puVar4 + ((uintptr_t)pf_module_state + 0x18fU)),
                         (undefined8 *)(2 - (int)puVar4));
    }
    *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + 2;
  }
  if (*(undefined8 **)(param_1 + 0xa78) == (undefined8 *)0x0) {
    recovered_1001948c(param_1);
    return;
  }
  recovered_100038f0((undefined8 *)abStack_224,(undefined8 *)(param_1 + 0x878),
                     *(undefined8 **)(param_1 + 0xa78));
  iVar2 = *(int *)(param_1 + 0xa78);
  *(undefined4 *)(param_1 + 0xa78) = 0;
  abStack_224[iVar2] = 0;
  bVar1 = recovered_1001dfa8(abStack_224);
  if (bVar1) {
    puVar4 = (undefined8 *)recovered_100049b4(((uintptr_t)pf_module_state + 0xb26U));
    if (puVar4 <= (undefined8 *)(0x8000U - *(int *)(param_1 + 0xb8c))) {
      puVar6 = *(undefined8 **)(param_1 + 0xb84);
      uVar3 = *(int *)(param_1 + 0xb88) + *(int *)(param_1 + 0xb8c) & 0x7fff;
      puVar7 = (undefined8 *)(0x8000 - uVar3);
      puVar5 = puVar4;
      if (puVar7 < puVar4) {
        puVar5 = puVar7;
      }
      recovered_100038f0((undefined8 *)((int)puVar6 + uVar3),(undefined8 *)str_1001f6fe,puVar5);
      if (puVar7 < puVar4) {
        recovered_100038f0(puVar6,(undefined8 *)((int)puVar5 + ((uintptr_t)pf_module_state + 0xb26U)),
                           (undefined8 *)((int)puVar4 - (int)puVar5));
      }
      *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + (int)puVar4;
    }
    if (*(char *)(param_1 + 0xdab) == '\0') {
      *(undefined4 *)(param_1 + 0xdb0) = 0;
      *(undefined1 *)(param_1 + 0xdab) = 1;
    }
  }
  else {
    puVar5 = (undefined8 *)recovered_100049b4((int)abStack_224);
    puVar4 = (undefined8 *)0x1ff;
    if (puVar5 < (undefined8 *)0x1ff) {
      puVar4 = puVar5;
    }
    recovered_100038f0((undefined8 *)(param_1 + 0xb92),(undefined8 *)abStack_224,puVar4);
    *(undefined1 *)(param_1 + 0xb92 + (int)puVar4) = 0;
    *(undefined1 *)(param_1 + 0xb90) = 1;
  }
  return;
}

#undef DAT_1001ed67
#undef str_1001f6fe
#undef abStack_224

#undef DAT_1001ed67
#define DAT_1001ed67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1001f70f
#define DAT_1001f70f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb37U)))
#define local_21 (*(char *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001e96c
 */

void recovered_1001e96c(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;

  if (*(char *)(param_1 + 0xda8) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xb8c);
    do {
      if (0xfffffffc < iVar1 - 0x8001U && iVar1 != 0x7ffe) {
        return;
      }
      local_21 = **(char **)(param_1 + 0xda4);
      if (local_21 == '\n') {
        if ((*(char *)(param_1 + 0xda9) == '\r') || (*(char *)(param_1 + 0x868) != '\x01'))
        goto LAB_1001ea40;
        iVar6 = 2;
        puVar7 = *(undefined8 **)(param_1 + 0xb84);
        uVar2 = *(int *)(param_1 + 0xb88) + iVar1 & 0x7fff;
        puVar3 = (undefined8 *)(0x8000 - uVar2);
        if ((undefined8 *)0x1 < puVar3) {
          puVar3 = (undefined8 *)0x2;
        }
        recovered_100038f0((undefined8 *)((int)puVar7 + uVar2),(undefined8 *)&DAT_1001ed67,puVar3);
        if (uVar2 == 0x7fff) {
          recovered_100038f0(puVar7,(undefined8 *)((int)puVar3 + ((uintptr_t)pf_module_state + 0x18fU)),
                             (undefined8 *)(2 - (int)puVar3));
        }
      }
      else {
        if (local_21 == '\0') {
          if (*(char *)(param_1 + 0xda9) != '\0' && *(char *)(param_1 + 0xda9) != '\n') {
            puVar3 = (undefined8 *)0x1;
            puVar7 = (undefined8 *)&DAT_1001f70f;
            puVar5 = *(undefined8 **)(param_1 + 0xb84);
            uVar2 = *(int *)(param_1 + 0xb88) + iVar1 & 0x7fff;
            if (*(char *)(param_1 + 0x868) != '\0') {
              puVar7 = (undefined8 *)&DAT_1001ed67;
              puVar3 = (undefined8 *)0x2;
            }
            puVar8 = (undefined8 *)(0x8000 - uVar2);
            puVar4 = puVar3;
            if (puVar8 < puVar3) {
              puVar4 = puVar8;
            }
            recovered_100038f0((undefined8 *)((int)puVar5 + uVar2),puVar7,puVar4);
            if (puVar8 < puVar3) {
              recovered_100038f0(puVar5,(undefined8 *)((int)puVar7 + (int)puVar4),
                                 (undefined8 *)((int)puVar3 - (int)puVar4));
            }
            *(int *)(param_1 + 0xb8c) = *(int *)(param_1 + 0xb8c) + (int)puVar3;
          }
          *(undefined4 *)(param_1 + 0xda4) = 0;
          *(undefined1 *)(param_1 + 0xda8) = 0;
          return;
        }
LAB_1001ea40:
        iVar6 = 1;
        recovered_100038f0((undefined8 *)
                           (*(int *)(param_1 + 0xb84) +
                           (*(int *)(param_1 + 0xb88) + iVar1 & 0x7fffU)),(undefined8 *)&local_21,
                           (undefined8 *)0x1);
      }
      *(char *)(param_1 + 0xda9) = local_21;
      iVar1 = *(int *)(param_1 + 0xb8c) + iVar6;
      *(int *)(param_1 + 0xda4) = *(int *)(param_1 + 0xda4) + 1;
      *(int *)(param_1 + 0xb8c) = iVar1;
    } while (*(char *)(param_1 + 0xda8) != '\0');
  }
  return;
}

#undef DAT_1001ed67
#undef DAT_1001f70f
#undef local_21

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010898
#define DAT_40010898 (*(uint8_t *)(0x40010898U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010898
#define _DAT_40010898 (*(code * *)(0x40010898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001eb34
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1001eb34(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  **(undefined1 **)(param_1 + 0xd94) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9b < _DAT_40010808)) &&
     (_DAT_40010898 != (code *)0x0)) {
    uVar1 = (*_DAT_40010898)(param_1 + 0xb92,*(undefined4 *)(param_1 + 0xd94),0x10000);
  }
  *(undefined4 *)(param_1 + 0xd9c) = uVar1;
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_1 + 0xd98) = 1;
  return *(int *)(param_1 + 0xd9c) == 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010898
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010898
