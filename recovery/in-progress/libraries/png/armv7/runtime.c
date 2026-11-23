/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

uint recovered_100013f0(uint a,uint b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (b == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = a >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (b <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - b;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001440
 */

uint recovered_10001440(uint a,uint b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (b != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = a >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - b;
      if (uVar2 < b) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001478
 */

uint recovered_10001478(uint a,uint b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = b;
  if ((int)b < 0) {
    uVar4 = -b;
  }
  uVar3 = a;
  if ((int)a < 0) {
    uVar3 = -a;
  }
  if (b == 0) {
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
  if ((int)(b ^ a) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e8
 */

uint recovered_100014e8(uint a,uint b)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = b;
  if ((int)b < 0) {
    uVar4 = -b;
  }
  uVar5 = a;
  if ((int)a < 0) {
    uVar5 = -a;
  }
  if (b == 0) {
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
  if ((int)a < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001554
 */

undefined8 recovered_10001554(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined8 uVar1;

  uVar1 = recovered_10004cf8(SUB84((double)in_r0,0),(int)((ulonglong)(double)in_r0 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001564
 */

undefined8 recovered_10001564(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined8 uVar1;

  uVar1 = recovered_10004c38(SUB84((double)in_r0,0),(int)((ulonglong)(double)in_r0 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001574
 */

float recovered_10001574(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10004d80(param_1,param_2);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001590
 */

float recovered_10001590(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10004dc8(param_1,param_2);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10018078
#define DAT_10018078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d0U)))
#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015b0
 */

void recovered_100015b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_10018078 = 0;
  recovered_1000163c();
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return;
}

#undef DAT_10018078
#undef DAT_10018080

#undef DAT_10018078
#define DAT_10018078 (*(char *)(((uintptr_t)pf_module_state + 0x6d0U)))
#undef DAT_1001807c
#define DAT_1001807c (*(int *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018084
#define DAT_10018084 (*(int *)(((uintptr_t)pf_module_state + 0x6dcU)))
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
 * Address: 0x1000163c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000163c(void)

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
  if (DAT_10018078 != '\0') {
    return;
  }
  DAT_1001807c = 0;
  DAT_10018084 = 0;
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
        if (iVar11 == 0) goto LAB_1000183c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10006768((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_1001807c != 0) goto LAB_1000186c;
    }
  }
LAB_1000183c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10006768((int *)0x300000,piVar4,&local_24);
LAB_1000186c:
  if (DAT_10018084 == 0) {
    DAT_10018084 = DAT_1001807c;
  }
  DAT_10018078 = 1;
  return;
}

#undef DAT_10018078
#undef DAT_1001807c
#undef DAT_10018084
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_24
#undef local_ac

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018bc
 */

bool recovered_100018bc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10001938(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return bVar1;
}

#undef DAT_10018080

#undef DAT_1001807c
#define DAT_1001807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018084
#define DAT_10018084 (*(int * *)(((uintptr_t)pf_module_state + 0x6dcU)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001938
 */

bool recovered_10001938(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_1000163c();
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
        piVar1 = DAT_1001807c;
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
      piVar3 = (int *)&DAT_1001807c;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10006768((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_10018084 == (int *)0x0) {
        DAT_10018084 = DAT_1001807c;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_1001807c
#undef DAT_10018084
#undef DAT_68000000
#undef local_24

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b80
 */

bool recovered_10001b80(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  bVar1 = recovered_10001938(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return bVar1;
}

#undef DAT_10018080
#undef local_14
#undef local_10

#undef DAT_1001807c
#define DAT_1001807c (*(uint * *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c18
 */

int recovered_10001c18(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000163c();
  iVar1 = 0;
  puVar3 = DAT_1001807c;
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
  DAT_10018080 = 0;
  return iVar1;
}

#undef DAT_1001807c
#undef DAT_10018080

#undef DAT_1001807c
#define DAT_1001807c (*(int * *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc8
 */

long recovered_10001cc8(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000163c();
  iVar1 = 0;
  for (piVar3 = DAT_1001807c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      iVar1 = iVar1 + *piVar3;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return iVar1;
}

#undef DAT_1001807c
#undef DAT_10018080

#undef DAT_1001807c
#define DAT_1001807c (*(int * *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d84
 */

int recovered_10001d84(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000163c();
  iVar1 = 0;
  for (piVar3 = DAT_1001807c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return iVar1;
}

#undef DAT_1001807c
#undef DAT_10018080

#undef DAT_1001807c
#define DAT_1001807c (*(int * *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e2c
 */

long recovered_10001e2c(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000163c();
  iVar1 = 0;
  for (piVar3 = DAT_1001807c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = iVar1 + *piVar3;
  }
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return iVar1;
}

#undef DAT_1001807c
#undef DAT_10018080

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001edc
 */

uint * recovered_10001edc(int param_1,int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_10001f60(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return puVar1;
}

#undef DAT_10018080

#undef DAT_1001807c
#define DAT_1001807c (*(uint * *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018084
#define DAT_10018084 (*(uint * *)(((uintptr_t)pf_module_state + 0x6dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f60
 */

uint * recovered_10001f60(int param_1,uint *param_2,uint *param_3)

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
    recovered_1000163c();
    puVar4 = DAT_1001807c;
    puVar5 = DAT_10018084;
    if (DAT_10018084 == (uint *)0x0) {
      puVar5 = DAT_1001807c;
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
              if (uVar7 < uVar8) goto joined_r0x10002040;
            }
          }
          else {
joined_r0x10002040:
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
LAB_10002138:
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
                    DAT_10018084 = DAT_1001807c;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_10018084 = puVar4;
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
                      puVar2 = recovered_10006968(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10002138;
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

#undef DAT_1001807c
#undef DAT_10018084

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b8
 */

void recovered_100021b8(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001f60(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return;
}

#undef DAT_10018080

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002240
 */

uint * recovered_10002240(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001f60(param_1,param_2,param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return puVar2;
}

#undef DAT_10018080

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022d0
 */

void recovered_100022d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000234c(param_1);
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return;
}

#undef DAT_10018080

#undef DAT_10018084
#define DAT_10018084 (*(uint * *)(((uintptr_t)pf_module_state + 0x6dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000234c
 */

void recovered_1000234c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_1000163c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_10018084 == puVar1) {
        DAT_10018084 = puVar4;
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
          if (DAT_10018084 == puVar4) {
            DAT_10018084 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_10018084 = puVar4;
  return;
}

#undef DAT_10018084

#undef DAT_10018080
#define DAT_10018080 (*(int *)(((uintptr_t)pf_module_state + 0x6d8U)))
#undef DAT_10018084
#define DAT_10018084 (*(uint * *)(((uintptr_t)pf_module_state + 0x6dcU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b8
 */

uint * recovered_100024b8(uint *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10018080 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x6d8U));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x6d8U),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (uint *)0x0) {
    puVar3 = recovered_10001f60(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_100026ec;
  }
  if (param_2 == 0) {
    recovered_1000234c((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_100026ec;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_100026ec;
  recovered_1000163c();
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
          DAT_10018084 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_10018084 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = param_1[-3];
          *(undefined1 *)(DAT_10018084 + 3) = 1;
          DAT_10018084[2] = (uint)puVar6;
          DAT_10018084[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_10018084;
          }
          param_1[-3] = (uint)DAT_10018084;
          param_1[-4] = (uint)puVar12;
          puVar3 = param_1;
        }
      }
    }
    goto LAB_100026ec;
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
      puVar3 = DAT_10018084;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_10018084 = puVar6;
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
        iVar4 = recovered_100069ec(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_10018084 = (uint *)param_1[-3];
        }
        *(undefined1 *)(param_1 + -1) = 0;
        puVar3 = param_1;
      }
      goto LAB_100026ec;
    }
  }
  puVar7 = recovered_10001f60((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_100026ec;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = param_1;
  if (puVar12 < &SupervisorCall) {
LAB_100027bc:
    if (puVar12 != (uint *)0x0) goto LAB_100027c4;
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
            if (uVar14 == uVar11) goto LAB_100029a4;
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
LAB_100029a4:
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
          if (uVar14 == uVar11) goto LAB_100027bc;
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
      goto LAB_100027bc;
    }
LAB_100027c4:
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
      if (puVar12 == puVar13) goto LAB_10002820;
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
LAB_10002820:
  recovered_1000234c((int)param_1);
  puVar3 = puVar7;
LAB_100026ec:
  DataMemoryBarrier(0xb);
  DAT_10018080 = 0;
  return puVar3;
}

#undef DAT_10018080
#undef DAT_10018084
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a58
 */

longlong recovered_10002a58(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10002aac
 */

undefined8 recovered_10002aac(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002b00
 */

undefined8 recovered_10002b00(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10002b4c
 */

undefined8 recovered_10002b4c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002c30
 */

undefined8 recovered_10002c30(uint in_r0,uint in_r1,uint in_r2,uint in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (in_r2 == 0 && in_r3 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = in_r0 >> (uVar5 & 0xff) | in_r1 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = in_r1 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - in_r2;
    uVar4 = uVar3 - (in_r3 + (in_r2 > uVar2));
    if (uVar3 <= in_r3 && (uint)(in_r2 <= uVar2) <= uVar3 - in_r3) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb0
 */

undefined8 recovered_10002cb0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002dc8
 */

undefined8 recovered_10002dc8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002e84
 */

void recovered_10002e84(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e8c
 */

int recovered_10002e8c(int param_1)

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
 * Address: 0x10002e98
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10002e98(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*_DAT_4001084c)(size);
    return pvVar1;
  }
  return (void *)0x0;
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
 * Address: 0x10002eec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002eec(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002f38. Too many branches */
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
 * Address: 0x10002f3c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10002f3c(void *pointer,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x57 < _DAT_40010808)) &&
     (_DAT_40010854 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*_DAT_40010854)(pointer);
    return pvVar1;
  }
  return (void *)0x0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010854
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

void * recovered_10002f90(void *dst,void *src,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;

  uVar8 = bytes;
  puVar3 = dst;
  if (bytes < 8) {
  }
  else {
    if ((((uint)src ^ (uint)dst) & 3) != 0) goto LAB_10002fcc;
    if (((uint)dst & 3) == 0) {
      puVar2 = src;
      puVar4 = dst;
    }
    else {
      *(undefined1 *)dst = *(undefined1 *)src;
      if (bytes - 1 == 0 || ((uint)((int)dst + 1) & 3) == 0) {
        puVar2 = (undefined8 *)((int)src + 1);
        uVar8 = bytes - 1;
        puVar4 = (undefined8 *)((int)dst + 1);
      }
      else {
        *(undefined1 *)((int)dst + 1) = *(undefined1 *)((int)src + 1);
        puVar2 = (undefined8 *)((int)src + 2);
        uVar8 = bytes - 2;
        puVar4 = (undefined8 *)((int)dst + 2);
        if (bytes - 2 != 0 && ((uint)((int)dst + 2) & 3) != 0) {
          uVar8 = bytes - 3;
          *(undefined1 *)((int)dst + 2) = *(undefined1 *)((int)src + 2);
          puVar2 = (undefined8 *)((int)src + 3);
          puVar4 = (undefined8 *)((int)dst + 3);
          if ((uVar8 != 0) && (((uint)puVar4 & 3) != 0)) {
            uVar8 = bytes - 4;
            *(undefined1 *)((int)dst + 3) = *(undefined1 *)((int)src + 3);
            puVar4 = (undefined8 *)((int)dst + 4);
            puVar2 = (undefined8 *)((int)src + 4);
          }
        }
      }
    }
    puVar5 = puVar2;
    if (uVar8 < 0x10) {
      src = puVar2;
      puVar3 = puVar4;
    }
    else {
      if (0x2f < uVar8 - 0x10) {
        puVar3 = (undefined8 *)(uVar8 & 0xfffffff0);
        bVar10 = puVar4 < (undefined8 *)((int)puVar2 + (int)puVar3);
        if (bVar10) {
          puVar3 = (undefined8 *)((int)puVar4 + (int)puVar3);
        }
        if (!(bVar10 && puVar2 < puVar3)) {
          uVar6 = (uVar8 - 0x10 >> 4) + 1;
          uVar9 = uVar6 & 0xfffffffc;
          uVar8 = uVar8 + uVar9 * -0x10;
          puVar3 = puVar4 + uVar9 * 2;
          src = puVar2 + uVar9 * 2;
          uVar7 = uVar9;
          do {
            puVar5 = puVar2 + 8;
            uVar11 = puVar2[1];
            uVar7 = uVar7 - 4;
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            uVar14 = puVar2[4];
            uVar15 = puVar2[5];
            uVar16 = puVar2[6];
            uVar17 = puVar2[7];
            *puVar4 = *puVar2;
            puVar4[1] = uVar11;
            puVar4[2] = uVar12;
            puVar4[3] = uVar13;
            puVar4[4] = uVar14;
            puVar4[5] = uVar15;
            puVar4[6] = uVar16;
            puVar4[7] = uVar17;
            puVar2 = puVar5;
            puVar4 = puVar4 + 8;
          } while (uVar7 != 0);
          puVar2 = src;
          puVar4 = puVar3;
          if (uVar6 == uVar9) goto LAB_10003160;
        }
      }
      do {
        uVar8 = uVar8 - 0x10;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar2 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        puVar1 = (undefined4 *)((int)puVar2 + 0xc);
        puVar2 = puVar2 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        src = puVar2;
        puVar3 = puVar4;
      } while (0xf < uVar8);
    }
LAB_10003160:
    bytes = (uint)src;
    if (uVar8 < 4) {
    }
    else {
      uVar7 = uVar8 - 4;
      bVar10 = uVar7 == 0xc;
      if (0xb < uVar7) {
        puVar5 = (undefined8 *)((int)puVar3 - (int)src);
        bVar10 = puVar5 == (undefined8 *)0xf;
      }
      if ((0xb < uVar7 && (undefined8 *)0xe < puVar5) && !bVar10) {
        uVar9 = (uVar7 >> 2) + 1;
        uVar6 = uVar9 & 0xfffffffc;
        uVar8 = uVar8 + uVar6 * -4;
        puVar4 = (undefined8 *)((int)puVar3 + uVar6 * 4);
        puVar2 = (undefined8 *)((int)src + uVar6 * 4);
        uVar7 = uVar6;
        do {
          uVar11 = *(undefined8 *)bytes;
          uVar12 = *(undefined8 *)(bytes + 8);
          bytes = bytes + 0x10;
          uVar7 = uVar7 - 4;
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = puVar3 + 2;
        } while (uVar7 != 0);
        src = puVar2;
        puVar3 = puVar4;
        if (uVar9 == uVar6) goto LAB_10002fc4;
      }
      else {
        puVar2 = src;
        puVar4 = puVar3;
      }
      do {
        src = (void *)((int)puVar2 + 4);
        bytes = *(uint *)puVar2;
        uVar8 = uVar8 - 4;
        puVar3 = (undefined8 *)((int)puVar4 + 4);
        *(uint *)puVar4 = bytes;
        puVar2 = src;
        puVar4 = puVar3;
      } while (3 < uVar8);
    }
  }
LAB_10002fc4:
  if (uVar8 == 0) {
    return dst;
  }
LAB_10002fcc:
  if (0xf < uVar8) {
    bytes = (int)puVar3 - (int)src;
  }
  if (0xf < uVar8 && (undefined8 *)0xf < bytes) {
    uVar6 = uVar8 & 0xfffffff0;
    uVar9 = uVar8 & 0xf;
    puVar2 = (undefined8 *)((int)src + uVar6);
    puVar4 = (undefined8 *)((int)puVar3 + uVar6);
    uVar7 = uVar6;
    do {
      uVar11 = *(undefined8 *)src;
      uVar12 = *(undefined8 *)((int)src + 8);
      src = (void *)((int)src + 0x10);
      uVar7 = uVar7 - 0x10;
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      puVar3 = puVar3 + 2;
    } while (uVar7 != 0);
    if (uVar8 == uVar6) {
      return dst;
    }
  }
  else {
    puVar2 = src;
    puVar4 = puVar3;
    uVar9 = uVar8;
  }
  do {
    uVar9 = uVar9 - 1;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 1);
    puVar4 = (undefined8 *)((int)puVar4 + 1);
  } while (uVar9 != 0);
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003214
 */

void * recovered_10003214(void *dst,void *src,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_r5;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *in_r12;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;

  if (dst == src || bytes == 0) {
    return dst;
  }
  puVar10 = src;
  if (src <= dst) {
    puVar10 = (undefined8 *)((int)src + bytes);
    in_r12 = puVar10;
  }
  if ((src > dst || in_r12 < dst) || dst == puVar10) {
    uVar9 = bytes;
    if ((bytes < 8) || ((((uint)src ^ (uint)dst) & 3) != 0)) {
      puVar10 = dst;
      goto LAB_1000325c;
    }
    if (((uint)dst & 3) == 0) {
      puVar2 = src;
      puVar4 = dst;
    }
    else {
      *(undefined1 *)dst = *(undefined1 *)src;
      if (bytes - 1 == 0 || ((uint)((int)dst + 1) & 3) == 0) {
        puVar2 = (undefined8 *)((int)src + 1);
        uVar9 = bytes - 1;
        puVar4 = (undefined8 *)((int)dst + 1);
      }
      else {
        *(undefined1 *)((int)dst + 1) = *(undefined1 *)((int)src + 1);
        puVar2 = (undefined8 *)((int)src + 2);
        uVar9 = bytes - 2;
        puVar4 = (undefined8 *)((int)dst + 2);
        if (bytes - 2 != 0 && ((uint)((int)dst + 2) & 3) != 0) {
          uVar9 = bytes - 3;
          puVar2 = (undefined8 *)((int)src + 3);
          puVar4 = (undefined8 *)((int)dst + 3);
          *(undefined1 *)((int)dst + 2) = *(undefined1 *)((int)src + 2);
          if ((uVar9 != 0) && (((uint)puVar4 & 3) != 0)) {
            uVar9 = bytes - 4;
            *(undefined1 *)((int)dst + 3) = *(undefined1 *)((int)src + 3);
            puVar4 = (undefined8 *)((int)dst + 4);
            puVar2 = (undefined8 *)((int)src + 4);
          }
        }
      }
    }
    if (uVar9 < 0x10) {
      src = puVar2;
      puVar10 = puVar4;
    }
    else {
      if (0x2f < uVar9 - 0x10) {
        bytes = uVar9 & 0xfffffff0;
        bVar11 = puVar4 < (undefined8 *)((int)puVar2 + bytes);
        if (bVar11) {
          bytes = (int)puVar4 + bytes;
        }
        if (!(bVar11 && puVar2 < bytes)) {
          puVar8 = (undefined8 *)((uVar9 - 0x10 >> 4) + 1);
          bytes = (uint)puVar8 & 0xfffffffc;
          uVar9 = uVar9 + bytes * -0x10;
          puVar10 = puVar4 + bytes * 2;
          src = puVar2 + bytes * 2;
          puVar6 = (undefined8 *)bytes;
          do {
            uVar12 = puVar2[1];
            puVar6 = (undefined8 *)((int)puVar6 + -4);
            uVar13 = puVar2[2];
            uVar14 = puVar2[3];
            uVar15 = puVar2[4];
            uVar16 = puVar2[5];
            uVar17 = puVar2[6];
            uVar18 = puVar2[7];
            *puVar4 = *puVar2;
            puVar4[1] = uVar12;
            puVar4[2] = uVar13;
            puVar4[3] = uVar14;
            puVar4[4] = uVar15;
            puVar4[5] = uVar16;
            puVar4[6] = uVar17;
            puVar4[7] = uVar18;
            puVar2 = puVar2 + 8;
            puVar4 = puVar4 + 8;
          } while (puVar6 != (undefined8 *)0x0);
          puVar2 = src;
          puVar4 = puVar10;
          if (puVar8 == (undefined8 *)bytes) goto LAB_100034e8;
        }
      }
      do {
        uVar9 = uVar9 - 0x10;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar2 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        puVar1 = (undefined4 *)((int)puVar2 + 0xc);
        puVar2 = puVar2 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        src = puVar2;
        puVar10 = puVar4;
      } while (0xf < uVar9);
    }
LAB_100034e8:
    if (3 < uVar9) {
      uVar3 = uVar9 - 4;
      bVar11 = uVar3 == 0xc;
      if (0xb < uVar3) {
        bytes = (int)puVar10 - (int)src;
        bVar11 = (undefined8 *)bytes == (undefined8 *)0xf;
      }
      if ((0xb < uVar3 && (undefined8 *)0xe < bytes) && !bVar11) {
        bytes = (uVar3 >> 2) + 1;
        puVar8 = (undefined8 *)(bytes & 0xfffffffc);
        uVar9 = uVar9 + (int)puVar8 * -4;
        puVar6 = (undefined8 *)((int)puVar10 + (int)(uintptr_t)puVar8 * 4);
        puVar2 = (undefined8 *)((int)src + (int)(uintptr_t)puVar8 * 4);
        puVar4 = puVar8;
        do {
          uVar12 = *(undefined8 *)src;
          uVar13 = *(undefined8 *)((int)src + 8);
          src = (void *)((int)src + 0x10);
          puVar4 = (undefined8 *)((int)puVar4 + -4);
          *puVar10 = uVar12;
          puVar10[1] = uVar13;
          puVar10 = puVar10 + 2;
        } while (puVar4 != (undefined8 *)0x0);
        src = puVar2;
        puVar10 = puVar6;
        if ((undefined8 *)bytes == puVar8) goto LAB_10003564;
      }
      else {
        puVar2 = src;
        puVar6 = puVar10;
      }
      do {
        bytes = *(uint *)puVar2;
        uVar9 = uVar9 - 4;
        *(uint *)puVar6 = bytes;
        src = (undefined8 *)((int)puVar2 + 4);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
        puVar10 = (undefined8 *)((int)puVar6 + 4);
        puVar6 = (undefined8 *)((int)puVar6 + 4);
      } while (3 < uVar9);
    }
LAB_10003564:
    if (uVar9 == 0) {
      return dst;
    }
LAB_1000325c:
    if (0xf < uVar9) {
      bytes = (int)puVar10 - (int)src;
    }
    if (0xf < uVar9 && (undefined8 *)0xf < bytes) {
      uVar7 = uVar9 & 0xfffffff0;
      uVar3 = uVar9 & 0xf;
      puVar4 = (undefined8 *)((int)src + uVar7);
      puVar2 = (undefined8 *)((int)puVar10 + uVar7);
      uVar5 = uVar7;
      do {
        uVar12 = *(undefined8 *)src;
        uVar13 = *(undefined8 *)((int)src + 8);
        src = (void *)((int)src + 0x10);
        uVar5 = uVar5 - 0x10;
        *puVar10 = uVar12;
        puVar10[1] = uVar13;
        puVar10 = puVar10 + 2;
      } while (uVar5 != 0);
      if (uVar9 == uVar7) {
        return dst;
      }
    }
    else {
      puVar2 = puVar10;
      uVar3 = uVar9;
      puVar4 = src;
    }
    do {
      uVar3 = uVar3 - 1;
      *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
      puVar2 = (undefined8 *)((int)puVar2 + 1);
      puVar4 = (undefined8 *)((int)puVar4 + 1);
    } while (uVar3 != 0);
    return dst;
  }
  puVar10 = (undefined8 *)((int)dst + bytes);
  if ((bytes < 8) || ((((uint)in_r12 ^ (uint)puVar10) & 3) != 0)) {
    uVar9 = bytes;
    goto LAB_100032d8;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10003574:
    uVar9 = bytes;
    puVar4 = in_r12;
  }
  else {
    puVar2 = (undefined8 *)((int)puVar10 + -1);
    *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -1);
    uVar9 = bytes - 1;
    puVar4 = (undefined8 *)((int)in_r12 + -1);
    if (bytes - 1 != 0 && ((uint)puVar2 & 3) != 0) {
      puVar2 = (undefined8 *)((int)puVar10 + -2);
      *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -2);
      uVar9 = bytes - 2;
      puVar4 = (undefined8 *)((int)in_r12 + -2);
      if (bytes - 2 != 0 && ((uint)puVar2 & 3) != 0) {
        puVar2 = (undefined8 *)((int)puVar10 + -3);
        *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -3);
        uVar9 = bytes - 3;
        puVar4 = (undefined8 *)((int)in_r12 + -3);
        if (bytes - 3 != 0 && ((uint)puVar2 & 3) != 0) {
          in_r12 = (undefined8 *)((int)in_r12 + -4);
          *(undefined1 *)((int)puVar10 + -4) = *(undefined1 *)in_r12;
          bytes = bytes - 4;
          puVar2 = (undefined8 *)((int)puVar10 + -4);
          goto LAB_10003574;
        }
      }
    }
  }
  in_r12 = puVar4;
  if (uVar9 < 0x10) {
    bytes = (uint)puVar2;
  }
  else {
    if (0x2f < uVar9 - 0x10) {
      puVar10 = (undefined8 *)(uVar9 & 0xfffffff0);
      bVar11 = (undefined8 *)((int)puVar2 - (int)puVar10) < in_r12;
      if (bVar11) {
        puVar10 = (undefined8 *)((int)in_r12 - (int)puVar10);
      }
      if (!(bVar11 && puVar10 < puVar2)) {
        uVar5 = (uVar9 - 0x10 >> 4) + 1;
        uVar7 = uVar5 & 0xfffffffc;
        puVar10 = in_r12 + -8;
        bytes = (uint)(puVar2 + uVar7 * -2);
        in_r12 = in_r12 + uVar7 * -2;
        uVar9 = uVar9 + uVar7 * -0x10;
        uVar3 = uVar7;
        do {
          unaff_r5 = puVar10 + -8;
          uVar12 = puVar10[1];
          uVar3 = uVar3 - 4;
          uVar13 = puVar10[2];
          uVar14 = puVar10[3];
          uVar15 = puVar10[4];
          uVar16 = puVar10[5];
          uVar17 = puVar10[6];
          uVar18 = puVar10[7];
          puVar2[-8] = *puVar10;
          puVar2[-7] = uVar12;
          puVar2[-6] = uVar13;
          puVar2[-5] = uVar14;
          puVar2[-4] = uVar15;
          puVar2[-3] = uVar16;
          puVar2[-2] = uVar17;
          puVar2[-1] = uVar18;
          puVar10 = unaff_r5;
          puVar2 = puVar2 + -8;
        } while (uVar3 != 0);
        puVar2 = (undefined8 *)bytes;
        if (uVar5 == uVar7) goto LAB_10003650;
      }
    }
    do {
      uVar9 = uVar9 - 0x10;
      *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)((int)in_r12 + -4);
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(in_r12 + -1);
      *(undefined4 *)((int)puVar2 + -0xc) = *(undefined4 *)((int)in_r12 + -0xc);
      in_r12 = in_r12 + -2;
      puVar2 = puVar2 + -2;
      *(undefined4 *)puVar2 = *(undefined4 *)in_r12;
      bytes = (uint)puVar2;
    } while (0xf < uVar9);
  }
LAB_10003650:
  puVar10 = (undefined8 *)bytes;
  if (3 < uVar9) {
    uVar3 = uVar9 - 4;
    bVar11 = uVar3 == 0xc;
    if (0xb < uVar3) {
      unaff_r5 = (undefined8 *)((int)in_r12 - bytes);
      bVar11 = unaff_r5 == (undefined8 *)0xf;
    }
    if ((0xb < uVar3 && (undefined8 *)0xe < unaff_r5) && !bVar11) {
      uVar7 = (uVar3 >> 2) + 1;
      uVar5 = uVar7 & 0xfffffffc;
      puVar10 = (undefined8 *)(bytes + uVar5 * -4);
      puVar2 = (undefined8 *)((int)in_r12 + uVar5 * -4);
      uVar9 = uVar9 + uVar5 * -4;
      bytes = bytes + -0x10;
      uVar3 = uVar5;
      do {
        uVar12 = in_r12[-1];
        uVar3 = uVar3 - 4;
        *(undefined8 *)bytes = in_r12[-2];
        *(undefined8 *)(bytes + 8) = uVar12;
        bytes = bytes + -0x10;
        in_r12 = in_r12 + -2;
      } while (uVar3 != 0);
      in_r12 = puVar2;
      if (uVar7 == uVar5) goto LAB_1000370c;
    }
    else {
      puVar2 = in_r12;
    }
    do {
      puVar2 = (undefined8 *)((int)puVar2 + -4);
      bytes = *(uint *)puVar2;
      uVar9 = uVar9 - 4;
      puVar10 = (undefined8 *)((int)puVar10 + -4);
      *(uint *)puVar10 = bytes;
      in_r12 = puVar2;
    } while (3 < uVar9);
  }
LAB_1000370c:
  if (uVar9 == 0) {
    return dst;
  }
LAB_100032d8:
  if (0xf < uVar9) {
    bytes = (int)in_r12 - (int)puVar10;
  }
  if (0xf < uVar9 && (undefined8 *)0xf < bytes) {
    uVar5 = uVar9 & 0xfffffff0;
    uVar3 = uVar5;
    puVar2 = puVar10;
    puVar4 = in_r12;
    do {
      uVar12 = puVar4[-1];
      uVar3 = uVar3 - 0x10;
      puVar2[-2] = puVar4[-2];
      puVar2[-1] = uVar12;
      puVar2 = puVar2 + -2;
      puVar4 = puVar4 + -2;
    } while (uVar3 != 0);
    bVar11 = uVar9 == uVar5;
    uVar9 = uVar9 & 0xf;
    puVar10 = (undefined8 *)((int)puVar10 - uVar5);
    in_r12 = (undefined8 *)((int)in_r12 - uVar5);
    if (bVar11) {
      return dst;
    }
  }
  do {
    uVar9 = uVar9 - 1;
    *(undefined1 *)((int)puVar10 + -1) = *(undefined1 *)((int)in_r12 + -1);
    puVar10 = (undefined8 *)((int)puVar10 + -1);
    in_r12 = (undefined8 *)((int)in_r12 + -1);
  } while (uVar9 != 0);
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003720
 */

void * recovered_10003720(void *dst,int byte,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;

  uVar2 = (undefined1)byte;
  uVar9 = bytes;
  piVar4 = dst;
  if (bytes < 8) goto joined_r0x100038a8;
  iVar8 = (byte & 0xffU) * 0x1010101;
  piVar10 = dst;
  if (((uint)dst & 3) == 0) {
joined_r0x100037c0:
    if (0xf < uVar9) {
      if (uVar9 - 0x10 < 0x30) {
        piVar4 = piVar10;
      }
      else {
        uVar6 = (uVar9 - 0x10 >> 4) + 1;
        uVar7 = uVar6 & 0xfffffffc;
        uVar1 = CONCAT44(iVar8,iVar8);
        uVar9 = uVar9 + uVar7 * -0x10;
        piVar4 = piVar10 + uVar7 * 4;
        uVar5 = uVar7;
        do {
          *(undefined8 *)piVar10 = uVar1;
          *(undefined8 *)(piVar10 + 2) = uVar1;
          uVar5 = uVar5 - 4;
          *(undefined8 *)(piVar10 + 4) = uVar1;
          *(undefined8 *)(piVar10 + 6) = uVar1;
          *(undefined8 *)(piVar10 + 8) = uVar1;
          *(undefined8 *)(piVar10 + 10) = uVar1;
          *(undefined8 *)(piVar10 + 0xc) = uVar1;
          *(undefined8 *)(piVar10 + 0xe) = uVar1;
          piVar10 = piVar10 + 0x10;
        } while (uVar5 != 0);
        piVar10 = piVar4;
        if (uVar6 == uVar7) goto joined_r0x1000384c;
      }
      do {
        uVar9 = uVar9 - 0x10;
        piVar4[3] = iVar8;
        piVar4[2] = iVar8;
        piVar4[1] = iVar8;
        piVar10 = piVar4 + 4;
        *piVar4 = iVar8;
        piVar4 = piVar10;
      } while (0xf < uVar9);
    }
  }
  else {
    piVar10 = (int *)((int)dst + 1);
    uVar9 = bytes - 1;
    *(undefined1 *)dst = uVar2;
    if (uVar9 != 0) {
      if (((uint)piVar10 & 3) != 0) {
        uVar9 = bytes - 2;
        piVar10 = (int *)((int)dst + 2);
        *(undefined1 *)((int)dst + 1) = uVar2;
        if (uVar9 != 0 && ((uint)piVar10 & 3) != 0) {
          uVar9 = bytes - 3;
          piVar10 = (int *)((int)dst + 3);
          *(undefined1 *)((int)dst + 2) = uVar2;
          if ((uVar9 != 0) && (((uint)piVar10 & 3) != 0)) {
            *(undefined1 *)((int)dst + 3) = uVar2;
            uVar9 = bytes - 4;
            piVar10 = (int *)((int)dst + 4);
          }
        }
      }
      goto joined_r0x100037c0;
    }
  }
joined_r0x1000384c:
  piVar4 = piVar10;
  if (3 < uVar9) {
    if (uVar9 - 4 < 0xc) {
    }
    else {
      uVar7 = (uVar9 - 4 >> 2) + 1;
      uVar6 = uVar7 & 0xfffffffc;
      uVar9 = uVar9 + uVar6 * -4;
      piVar4 = piVar10 + uVar6;
      uVar5 = uVar6;
      do {
        *(ulonglong *)piVar10 = CONCAT44(iVar8,iVar8);
        *(ulonglong *)(piVar10 + 2) = CONCAT44(iVar8,iVar8);
        piVar10 = piVar10 + 4;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0);
      if (uVar7 == uVar6) goto joined_r0x100038a8;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x100038a8:
  if (uVar9 != 0) {
    if (uVar9 < 0x10) {
      uVar5 = uVar9;
      piVar10 = piVar4;
    }
    else {
      uVar6 = uVar9 & 0xfffffff0;
      uVar3 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
      uVar1 = CONCAT44(uVar3,uVar3);
      piVar10 = (int *)((int)piVar4 + uVar6);
      uVar5 = uVar9 & 0xf;
      uVar7 = uVar6;
      do {
        *(undefined8 *)piVar4 = uVar1;
        *(undefined8 *)(piVar4 + 2) = uVar1;
        piVar4 = piVar4 + 4;
        uVar7 = uVar7 - 0x10;
      } while (uVar7 != 0);
      if (uVar9 == uVar6) {
        return dst;
      }
    }
    do {
      *(undefined1 *)piVar10 = uVar2;
      uVar5 = uVar5 - 1;
      piVar10 = (int *)((int)piVar10 + 1);
    } while (uVar5 != 0);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003920
 */

void recovered_10003920(undefined1 *param_1,int param_2)

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

  puVar6 = (undefined4 *)param_1;
  uVar9 = param_2;
  if ((uint)param_2 < 8) goto joined_r0x10003aa0;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100039bc:
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
        if (uVar7 == uVar8) goto joined_r0x10003a40;
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
    puVar6 = (undefined4 *)(param_1 + 1);
    uVar9 = param_2 - 1;
    *param_1 = 0;
    if (uVar9 != 0) {
      if (((uint)puVar6 & 3) != 0) {
        uVar9 = param_2 - 2;
        puVar6 = (undefined4 *)(param_1 + 2);
        param_1[1] = 0;
        if (uVar9 != 0 && ((uint)puVar6 & 3) != 0) {
          uVar9 = param_2 - 3;
          puVar6 = (undefined4 *)(param_1 + 3);
          param_1[2] = 0;
          if ((uVar9 != 0) && (((uint)puVar6 & 3) != 0)) {
            uVar9 = param_2 - 4;
            param_1[3] = 0;
            puVar6 = (undefined4 *)(param_1 + 4);
          }
        }
      }
      goto joined_r0x100039bc;
    }
  }
joined_r0x10003a40:
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
      if (uVar7 == uVar8) goto joined_r0x10003aa0;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10003aa0:
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
 * Address: 0x10003b1c
 */

void recovered_10003b1c(undefined1 *param_1,int param_2)

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

  puVar6 = (undefined4 *)param_1;
  uVar9 = param_2;
  if ((uint)param_2 < 8) goto joined_r0x10003c9c;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10003bb8:
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
        if (uVar7 == uVar8) goto joined_r0x10003c3c;
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
    puVar6 = (undefined4 *)(param_1 + 1);
    uVar9 = param_2 - 1;
    *param_1 = 0;
    if (uVar9 != 0) {
      if (((uint)puVar6 & 3) != 0) {
        uVar9 = param_2 - 2;
        puVar6 = (undefined4 *)(param_1 + 2);
        param_1[1] = 0;
        if (uVar9 != 0 && ((uint)puVar6 & 3) != 0) {
          uVar9 = param_2 - 3;
          puVar6 = (undefined4 *)(param_1 + 3);
          param_1[2] = 0;
          if ((uVar9 != 0) && (((uint)puVar6 & 3) != 0)) {
            uVar9 = param_2 - 4;
            param_1[3] = 0;
            puVar6 = (undefined4 *)(param_1 + 4);
          }
        }
      }
      goto joined_r0x10003bb8;
    }
  }
joined_r0x10003c3c:
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
      if (uVar7 == uVar8) goto joined_r0x10003c9c;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10003c9c:
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
 * Address: 0x10003d18
 */

char * recovered_10003d18(int param_1,char param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 == 0) {
    return (char *)0x0;
  }
  do {
    if (*(char *)param_1 == param_2) {
      return (char *)param_1;
    }
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d4c
 */

int recovered_10003d4c(char *param_1,char *param_2,int param_3)

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

  if ((uint)param_3 < 8) {
LAB_10003e44:
    if (param_3 == 0) {
      return 0;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 3) == 0) {
    uVar5 = param_3;
    puVar1 = (uint *)param_2;
    puVar7 = (uint *)param_1;
    if (((uint)param_1 & 3) != 0) {
      uVar6 = (uint)(byte)*param_2;
      uVar5 = (uint)(byte)*param_1;
      if (uVar5 != uVar6) goto LAB_10003f3c;
      puVar7 = (uint *)(param_1 + 1);
      uVar5 = param_3 - 1U;
      puVar1 = (uint *)(param_2 + 1);
      if (param_3 - 1U != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)(byte)*(uint *)(param_2 + 1);
        uVar5 = (uint)(byte)*puVar7;
        if (uVar5 != uVar6) goto LAB_10003f3c;
        puVar7 = (uint *)(param_1 + 2);
        uVar5 = param_3 - 2U;
        puVar1 = (uint *)(param_2 + 2);
        if (param_3 - 2U != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)(byte)*(uint *)(param_2 + 2);
          uVar5 = (uint)(byte)*puVar7;
          if (uVar5 != uVar6) goto LAB_10003f3c;
          puVar7 = (uint *)(param_1 + 3);
          uVar5 = param_3 - 3U;
          puVar1 = (uint *)(param_2 + 3);
          if (param_3 - 3U != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)(byte)*(uint *)(param_2 + 3);
            uVar5 = (uint)(byte)*puVar7;
            if (uVar5 != uVar6) goto LAB_10003f3c;
            uVar5 = param_3 - 4;
            puVar1 = (uint *)(param_2 + 4);
            puVar7 = (uint *)(param_1 + 4);
          }
        }
      }
    }
    while (param_1 = (char *)puVar7, param_2 = (char *)puVar1, param_3 = uVar5, 0xf < (uint)param_3)
    {
      uVar6 = *(uint *)param_2;
      uVar5 = *(uint *)param_1;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        uVar6 = *(uint *)((int)param_2 + 4);
        uVar5 = *(uint *)((int)param_1 + 4);
      }
      bVar9 = bVar8 && uVar5 == uVar6;
      if (bVar8 && uVar5 == uVar6) {
        uVar6 = *(uint *)((int)param_2 + 8);
        uVar5 = *(uint *)((int)param_1 + 8);
        bVar9 = uVar5 == uVar6;
      }
      if (!bVar9) {
LAB_10003e74:
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
      uVar6 = *(uint *)((int)param_2 + 0xc);
      uVar5 = *(uint *)((int)param_1 + 0xc);
      if (uVar5 != uVar6) goto LAB_10003e74;
      puVar1 = (uint *)((int)param_2 + 0x10);
      puVar7 = (uint *)((int)param_1 + 0x10);
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < (uint)param_3; param_3 = param_3 - 4) {
      if (*(uint *)param_1 != *(uint *)param_2) {
        iVar2 = recovered_10003f44((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = (char *)((int)param_2 + 4);
      param_1 = (char *)((int)param_1 + 4);
    }
    goto LAB_10003e44;
  }
  while( true ) {
    uVar6 = (uint)(byte)*(uint *)param_2;
    uVar5 = (uint)(byte)*(uint *)param_1;
    if (uVar5 != uVar6) break;
    param_3 = param_3 - 1;
    param_2 = (char *)((int)param_2 + 1);
    param_1 = (char *)((int)param_1 + 1);
    if (param_3 == 0) {
      return 0;
    }
  }
LAB_10003f3c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f44
 */

int recovered_10003f44(byte *param_1,byte *param_2)

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
 * Address: 0x10003f94
 */

uchar recovered_10003f94(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fa8
 */

uchar recovered_10003fa8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fbc
 */

uchar recovered_10003fbc(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd4
 */

uchar recovered_10003fd4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004000
 */

uchar recovered_10004000(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

uchar recovered_10004020(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004034
 */

int recovered_10004034(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004044
 */

int recovered_10004044(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004054
 */

uint recovered_10004054(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if (text == (char *)0x0) {
    return 0;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (text[uVar2] != '\0');
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000407c
 */

int recovered_1000407c(byte *param_1,byte *param_2)

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
LAB_100040b4:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_100040b4;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040c0
 */

int recovered_100040c0(byte *param_1,byte *param_2)

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
LAB_100040f8:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_100040f8;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004104
 */

void recovered_10004104(int param_1,int param_2)

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
 * Address: 0x10004120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10004120(int param_1)

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

  if (param_1 == 0) {
    return (void *)0x0;
  }
  uVar10 = 0xfffffffc;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)(param_1 + uVar4 + 4) != '\0');
  if (_DAT_40010800 != 0x50414d57) {
    return (void *)0x0;
  }
  if (_DAT_40010804 == 0) {
    return (void *)0x0;
  }
  if (_DAT_40010808 < 0x50) {
    return (void *)0x0;
  }
  if (_DAT_4001084c == (code *)0x0) {
    return (void *)0x0;
  }
  uVar10 = uVar4 + 5;
  uVar20 = (*_DAT_4001084c)(uVar10);
  puVar3 = (undefined8 *)uVar20;
  if (puVar3 == (undefined8 *)0x0) {
    return (void *)0x0;
  }
  if (7 < uVar10) {
    uVar2 = CONCAT44((uint)puVar3 ^ param_1,puVar3);
    if ((((uint)puVar3 ^ param_1) & 3) != 0) goto LAB_100041e8;
    if ((uVar20 & 3) == 0) {
      puVar7 = puVar3;
      puVar5 = (undefined8 *)param_1;
    }
    else {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      if (uVar4 == 0xfffffffc || ((uint)((int)puVar3 + 1) & 3) == 0) {
        puVar7 = (undefined8 *)((int)puVar3 + 1);
        puVar5 = (undefined8 *)(param_1 + 1);
        uVar10 = uVar4 + 4;
      }
      else {
        *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)(param_1 + 1);
        puVar7 = (undefined8 *)((int)puVar3 + 2);
        puVar5 = (undefined8 *)(param_1 + 2);
        uVar10 = uVar4 + 3;
        if (uVar4 != 0xfffffffd && ((uint)((int)puVar3 + 2) & 3) != 0) {
          puVar5 = (undefined8 *)(param_1 + 3);
          puVar7 = (undefined8 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)(param_1 + 2);
          uVar10 = uVar4 + 2;
          if ((uVar4 != 0xfffffffe) && (((uint)puVar7 & 3) != 0)) {
            puVar7 = (undefined8 *)((int)puVar3 + 4);
            *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)(param_1 + 3);
            puVar5 = (undefined8 *)(param_1 + 4);
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
        param_1 = (int)puVar5 + (int)puVar9;
        if (puVar7 < (uint)param_1) {
          puVar9 = (undefined8 *)((int)puVar7 + (int)puVar9);
        }
        if (!(puVar7 < (uint)param_1 && puVar5 < puVar9)) {
          uVar8 = (uVar10 - 0x10 >> 4) + 1;
          uVar11 = uVar8 & 0xfffffffc;
          uVar10 = uVar10 + uVar11 * -0x10;
          puVar9 = puVar7 + uVar11 * 2;
          puVar6 = puVar5 + uVar11 * 2;
          uVar4 = uVar11;
          do {
            uVar13 = puVar5[1];
            param_1 = (int)(puVar7 + 8);
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
            puVar7 = (undefined8 *)param_1;
            puVar5 = puVar5 + 8;
          } while (uVar4 != 0);
          puVar7 = puVar9;
          puVar5 = puVar6;
          if (uVar8 == uVar11) goto LAB_1000437c;
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
LAB_1000437c:
    uVar20 = CONCAT44(puVar9,puVar9);
    if (uVar10 < 4) {
      param_1 = (int)puVar6;
    }
    else {
      uVar4 = uVar10 - 4;
      bVar12 = uVar4 == 0xc;
      if (0xb < uVar4) {
        param_1 = (int)puVar9 - (int)puVar6;
        bVar12 = (undefined8 *)param_1 == (undefined8 *)0xf;
      }
      if ((0xb < uVar4 && (undefined8 *)0xe < (uint)param_1) && !bVar12) {
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
        param_1 = (int)puVar5;
        if (uVar11 == uVar8) goto LAB_100041e0;
      }
      else {
        puVar7 = puVar9;
        puVar5 = puVar6;
      }
      do {
        param_1 = (int)puVar5 + 4;
        uVar10 = uVar10 - 4;
        uVar20 = CONCAT44(*(undefined4 *)puVar5,(undefined8 *)((int)puVar7 + 4));
        *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
        puVar7 = (undefined8 *)((int)puVar7 + 4);
        puVar5 = (undefined8 *)param_1;
      } while (3 < uVar10);
    }
  }
LAB_100041e0:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_100041e8:
  uVar4 = (uint)(uVar2 >> 0x20);
  puVar7 = (undefined8 *)uVar2;
  if (0xf < uVar10) {
    uVar4 = (int)puVar7 - param_1;
  }
  if (0xf < uVar10 && 0xf < uVar4) {
    uVar11 = uVar10 & 0xfffffff0;
    uVar4 = uVar10 & 0xf;
    puVar9 = (undefined8 *)(param_1 + uVar11);
    puVar5 = (undefined8 *)((int)puVar7 + uVar11);
    uVar8 = uVar11;
    do {
      uVar13 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)(param_1 + 8);
      param_1 = param_1 + 0x10;
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
    puVar9 = (undefined8 *)param_1;
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
 * Address: 0x10004434
 */

char * recovered_10004434(char *param_1,char param_2)

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
 * Address: 0x10004468
 */

int recovered_10004468(int param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  char cVar4;

  cVar4 = *(char *)param_1;
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
      cVar4 = *(char *)(param_1 + iVar3);
      if (cVar4 == '\0') {
        return iVar3;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044cc
 */

int recovered_100044cc(char *param_1,char *param_2)

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
 * Address: 0x10004534
 */

char * recovered_10004534(char *param_1,char *param_2)

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
 * Address: 0x10004594
 */

char * recovered_10004594(char *param_1,char *param_2)

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


#undef DAT_100179cc
#define DAT_100179cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045f8
 */

undefined * recovered_100045f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100179cc;
}

#undef DAT_100179cc

#undef PTR_DAT_10018008
#define PTR_DAT_10018008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x660U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004608
 */

undefined ** recovered_10004608(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10018008;
}

#undef PTR_DAT_10018008

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
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_14 (*(undefined4 *)(pf_stack_frame + 44))
#define local_10 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_20 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004618
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004618(undefined4 *param_1)

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
  return CONCAT44(local_1c,local_1c);
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef local_1c
#undef local_14
#undef local_10
#undef uStack_20
#undef uStack_18
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046c8
 */

double recovered_100046c8(double value,int exponent)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_r2;
  bool bVar2;

  if ((int)in_r2 < 1) {
    if (0x7fffffff < in_r2) {
      do {
        bVar2 = in_r2 != 0xffffffff;
        in_r2 = in_r2 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = in_r2 + 1;
    do {
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000470c
 */

double recovered_1000470c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double in_d0;
  double dVar2;

  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (dVar2 == 0.0) {
    return in_d0;
  }
  iVar1 = 0;
  if (dVar2 < 0.0) {
    dVar2 = -dVar2;
  }
  for (; 1.0 <= dVar2; dVar2 = dVar2 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; (0.0 < dVar2 && (dVar2 < 0.5)); dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return in_d0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047c4
 */

double recovered_100047c4(double left,double right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  uint in_fpscr;
  undefined4 uVar1;

  if (pf_bits_double(CONCAT44(in_r3,in_r2)) == 0.0) {
    return left;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(in_r1,in_r0)) / pf_bits_double(CONCAT44(in_r3,in_r2)),3);
  VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)left >> 0x20),uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047fc
 */

double recovered_100047fc(double left,double right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r2;
  undefined4 in_r3;
  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  uint uVar3;
  double dVar4;

  uVar3 = (uint)((ulonglong)left >> 0x20);
  uVar2 = VectorFloatToSigned(CONCAT44(in_r3,in_r2),3);
  dVar4 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar4 != pf_bits_double(CONCAT44(in_r3,in_r2))) {
    return pf_bits_double(CONCAT44(uVar3,uVar2));
  }
  if (uVar2 == 0) {
    return (double)((ulonglong)uVar3 << 0x20);
  }
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
  }
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return pf_bits_double(CONCAT44(uVar3,uVar2));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000487c
 */

double recovered_1000487c(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048ac
 */

double recovered_100048ac(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048f0
 */

double recovered_100048f0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;

  if (0.0 < pf_bits_double(CONCAT44(in_r1,in_r0))) {
    iVar1 = 0x18;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return value;
}


static const unsigned char pf_literal_10004938_DAT_10004a68[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff};
#undef DAT_10004a68
#define DAT_10004a68 (*(uint64_t *)((uintptr_t)pf_literal_10004938_DAT_10004a68))
static const unsigned char pf_literal_10004938_DAT_10004a70[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_10004a70
#define DAT_10004a70 (*(uint64_t *)((uintptr_t)pf_literal_10004938_DAT_10004a70))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004938
 */

double recovered_10004938(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 in_r0;
  int iVar2;
  undefined4 in_r1;
  uint in_fpscr;
  uint uVar3;
  double dVar4;

  dVar4 = pf_bits_double(CONCAT44(in_r1,in_r0));
  if (dVar4 < 0.0) {
    return value;
  }
  iVar2 = 0;
  uVar3 = in_fpscr & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4)) {
    do {
      dVar4 = dVar4 * 0.5;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
      bVar1 = (byte)(uVar3 >> 0x18);
    } while (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4));
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar2 = iVar2 + -1;
  }
  VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar2));
}

#undef DAT_10004a68
#undef DAT_10004a70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a78
 */

undefined8 recovered_10004a78(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10004c38(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


static const unsigned char pf_literal_10004aa8_DAT_10004b38[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10004b38
#define DAT_10004b38 (*(double *)((uintptr_t)pf_literal_10004aa8_DAT_10004b38))
static const unsigned char pf_literal_10004aa8_DAT_10004b40[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10004b40
#define DAT_10004b40 (*(double *)((uintptr_t)pf_literal_10004aa8_DAT_10004b40))
static const unsigned char pf_literal_10004aa8_DAT_10004b48[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10004b48
#define DAT_10004b48 (*(double *)((uintptr_t)pf_literal_10004aa8_DAT_10004b48))
static const unsigned char pf_literal_10004aa8_DAT_10004b50[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10004b50
#define DAT_10004b50 (*(double *)((uintptr_t)pf_literal_10004aa8_DAT_10004b50))
static const unsigned char pf_literal_10004aa8_DAT_10004b58[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_10004b58
#define DAT_10004b58 (*(uint64_t *)((uintptr_t)pf_literal_10004aa8_DAT_10004b58))
static const unsigned char pf_literal_10004aa8_DAT_10004b60[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_10004b60
#define DAT_10004b60 (*(uint64_t *)((uintptr_t)pf_literal_10004aa8_DAT_10004b60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa8
 */

double recovered_10004aa8(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0)); DAT_10004b38 < dVar1; dVar1 = dVar1 + DAT_10004b40) {
  }
  for (; dVar1 < DAT_10004b48; dVar1 = dVar1 + DAT_10004b50) {
  }
  return value;
}

#undef DAT_10004b38
#undef DAT_10004b40
#undef DAT_10004b48
#undef DAT_10004b50
#undef DAT_10004b58
#undef DAT_10004b60

static const unsigned char pf_literal_10004b68_DAT_10004bf0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10004bf0
#define DAT_10004bf0 (*(double *)((uintptr_t)pf_literal_10004b68_DAT_10004bf0))
static const unsigned char pf_literal_10004b68_DAT_10004bf8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10004bf8
#define DAT_10004bf8 (*(double *)((uintptr_t)pf_literal_10004b68_DAT_10004bf8))
static const unsigned char pf_literal_10004b68_DAT_10004c00[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10004c00
#define DAT_10004c00 (*(double *)((uintptr_t)pf_literal_10004b68_DAT_10004c00))
static const unsigned char pf_literal_10004b68_DAT_10004c08[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10004c08
#define DAT_10004c08 (*(double *)((uintptr_t)pf_literal_10004b68_DAT_10004c08))
static const unsigned char pf_literal_10004b68_DAT_10004c10[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_10004c10
#define DAT_10004c10 (*(uint64_t *)((uintptr_t)pf_literal_10004b68_DAT_10004c10))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b68
 */

double recovered_10004b68(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0)); DAT_10004bf0 < dVar1; dVar1 = dVar1 + DAT_10004bf8) {
  }
  for (; dVar1 < DAT_10004c00; dVar1 = dVar1 + DAT_10004c08) {
  }
  return value;
}

#undef DAT_10004bf0
#undef DAT_10004bf8
#undef DAT_10004c00
#undef DAT_10004c08
#undef DAT_10004c10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c18
 */

double recovered_10004c18(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return value;
}


static const unsigned char pf_literal_10004c38_DAT_10004cf0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_10004cf0
#define DAT_10004cf0 (*(double *)((uintptr_t)pf_literal_10004c38_DAT_10004cf0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c38
 */

undefined8 recovered_10004c38(undefined4 param_1,undefined4 param_2)

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
  dVar8 = DAT_10004cf0;
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

#undef DAT_10004cf0

static const unsigned char pf_literal_10004cf8_DAT_10004d78[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_10004d78
#define DAT_10004d78 (*(double *)((uintptr_t)pf_literal_10004cf8_DAT_10004d78))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cf8
 */

undefined8 recovered_10004cf8(undefined4 param_1,undefined4 param_2)

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
  dVar8 = DAT_10004d78;
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

#undef DAT_10004d78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d80
 */

void recovered_10004d80(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0 && param_2 == 0) {
    return;
  }
  do {
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dc8
 */

void recovered_10004dc8(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 < 0) {
    uVar2 = -param_1;
    uVar3 = -(param_2 + (uint)(param_1 != 0));
    do {
      bVar1 = (byte)uVar3;
      uVar3 = uVar3 >> 1;
      uVar2 = (uint)(bVar1 & 1) << 0x1f | uVar2 >> 1;
    } while (uVar2 != 0 || uVar3 != 0);
    return;
  }
  if (param_1 == 0 && param_2 == 0) {
    return;
  }
  do {
    bVar1 = (byte)param_2;
    param_2 = (uint)param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | (uint)param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return;
}


static const unsigned char pf_literal_10004e58_DAT_10004e98[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10004e98
#define DAT_10004e98 (*(float *)((uintptr_t)pf_literal_10004e58_DAT_10004e98))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e58
 */

float recovered_10004e58(float left,float right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (in_r1 == 0.0) {
    return DAT_10004e98;
  }
  uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)in_r0 - dVar2 * (double)in_r1);
}

#undef DAT_10004e98

/* Native soft-float frexpf behavior; Pooka's Free Software License. */
float recovered_10004e9c(float value,int *exponent){
 if(exponent)*exponent=0;
 if(value==0)return 0;
 float magnitude=value<0?-value:value;int shift=0;
 while(magnitude>=1){magnitude*=0.5f;shift++;}
 while(magnitude>0 && magnitude<0.5f){magnitude+=magnitude;shift--;}
 if(exponent)*exponent=shift;
 return value<0?-magnitude:magnitude;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f58
 */

float recovered_10004f58(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_r1;
  bool bVar2;

  if ((int)in_r1 < 1) {
    if (0x7fffffff < in_r1) {
      do {
        param_2 = (int)((float)param_2 * 0.5);
        bVar2 = in_r1 != 0xffffffff;
        in_r1 = in_r1 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = in_r1 + 1;
    do {
      param_2 = (int)((float)param_2 + (float)param_2);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return (float)param_2;
}


static const unsigned char pf_literal_10004fa4_DAT_10005028[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10005028
#define DAT_10005028 (*(float *)((uintptr_t)pf_literal_10004fa4_DAT_10005028))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa4
 */

float recovered_10004fa4(float left,float right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float in_r0;
  uint uVar3;
  float in_r1;
  uint in_fpscr;
  uint uVar4;
  double dVar5;

  uVar4 = (uint)in_r1;
  dVar5 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar5 != (double)in_r1) {
    return DAT_10005028;
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
    fVar1 = fVar2 * in_r0;
    in_r0 = in_r0 * in_r0;
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

#undef DAT_10005028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000502c
 */

float recovered_1000502c(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)in_r0;
  dVar3 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005064
 */

float recovered_10005064(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)in_r0;
  dVar3 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  if (dVar3 < dVar5) {
    dVar3 = dVar3 + 1.0;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b0
 */

double recovered_100050b0(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005104
 */

float recovered_10005104(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)in_r0;
  dVar3 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  dVar4 = dVar3;
  if (dVar3 < dVar5) {
    dVar4 = dVar3 + 1.0;
  }
  if (in_r0 < 0.0) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


static const unsigned char pf_literal_10005160_DAT_100051b4[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_100051b4
#define DAT_100051b4 (*(float *)((uintptr_t)pf_literal_10005160_DAT_100051b4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005160
 */

float recovered_10005160(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float in_r0;
  int iVar2;

  if (0.0 < in_r0) {
    iVar2 = 0x18;
    fVar1 = 1.0;
    if (1.0 <= in_r0) {
      fVar1 = in_r0;
    }
    do {
      iVar2 = iVar2 + -1;
      fVar1 = (fVar1 + in_r0 / fVar1) * 0.5;
    } while (iVar2 != 0);
    return fVar1;
  }
  return DAT_100051b4;
}

#undef DAT_100051b4

static const unsigned char pf_literal_100051b8_DAT_100052f0[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_100052f0
#define DAT_100052f0 (*(double *)((uintptr_t)pf_literal_100051b8_DAT_100052f0))
static const unsigned char pf_literal_100051b8_DAT_100052f8[] __attribute__((aligned(16)))={0x00,0x00,0x80,0xff};
#undef DAT_100052f8
#define DAT_100052f8 (*(float *)((uintptr_t)pf_literal_100051b8_DAT_100052f8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b8
 */

float recovered_100051b8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  float in_r0;
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

  if (in_r0 < 0.0) {
    return DAT_100052f8;
  }
  iVar2 = 0;
  dVar4 = (double)in_r0;
  uVar3 = in_fpscr & 0xfffffff | (uint)(in_r0 < 1.5) << 0x1f | (uint)(in_r0 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(in_r0)) {
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_100052f0);
}

#undef DAT_100052f0
#undef DAT_100052f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052fc
 */

long recovered_100052fc(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(in_r1,in_r0));
  uVar2 = recovered_10004c38(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return (long)uVar2;
}


static const unsigned char pf_literal_10005330_DAT_100053c8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_100053c8
#define DAT_100053c8 (*(double *)((uintptr_t)pf_literal_10005330_DAT_100053c8))
static const unsigned char pf_literal_10005330_DAT_100053d0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_100053d0
#define DAT_100053d0 (*(double *)((uintptr_t)pf_literal_10005330_DAT_100053d0))
static const unsigned char pf_literal_10005330_DAT_100053d8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_100053d8
#define DAT_100053d8 (*(double *)((uintptr_t)pf_literal_10005330_DAT_100053d8))
static const unsigned char pf_literal_10005330_DAT_100053e0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_100053e0
#define DAT_100053e0 (*(double *)((uintptr_t)pf_literal_10005330_DAT_100053e0))
static const unsigned char pf_literal_10005330_DAT_100053e8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_100053e8
#define DAT_100053e8 (*(double *)((uintptr_t)pf_literal_10005330_DAT_100053e8))
static const unsigned char pf_literal_10005330_DAT_100053f0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_100053f0
#define DAT_100053f0 (*(double *)((uintptr_t)pf_literal_10005330_DAT_100053f0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005330
 */

float recovered_10005330(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  double dVar1;
  double dVar2;

  for (dVar1 = (double)in_r0; DAT_100053c8 < dVar1; dVar1 = dVar1 + DAT_100053d0) {
  }
  for (; dVar1 < DAT_100053d8; dVar1 = dVar1 + DAT_100053e0) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100053e8 +
                         (dVar2 * dVar2 * dVar2) / DAT_100053f0));
}

#undef DAT_100053c8
#undef DAT_100053d0
#undef DAT_100053d8
#undef DAT_100053e0
#undef DAT_100053e8
#undef DAT_100053f0

static const unsigned char pf_literal_100053f8_DAT_10005488[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10005488
#define DAT_10005488 (*(double *)((uintptr_t)pf_literal_100053f8_DAT_10005488))
static const unsigned char pf_literal_100053f8_DAT_10005490[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10005490
#define DAT_10005490 (*(double *)((uintptr_t)pf_literal_100053f8_DAT_10005490))
static const unsigned char pf_literal_100053f8_DAT_10005498[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10005498
#define DAT_10005498 (*(double *)((uintptr_t)pf_literal_100053f8_DAT_10005498))
static const unsigned char pf_literal_100053f8_DAT_100054a0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_100054a0
#define DAT_100054a0 (*(double *)((uintptr_t)pf_literal_100053f8_DAT_100054a0))
static const unsigned char pf_literal_100053f8_DAT_100054a8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_100054a8
#define DAT_100054a8 (*(double *)((uintptr_t)pf_literal_100053f8_DAT_100054a8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053f8
 */

float recovered_100053f8(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  double dVar1;

  for (dVar1 = (double)in_r0; DAT_10005488 < dVar1; dVar1 = dVar1 + DAT_10005490) {
  }
  for (; dVar1 < DAT_10005498; dVar1 = dVar1 + DAT_100054a0) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_100054a8);
}

#undef DAT_10005488
#undef DAT_10005490
#undef DAT_10005498
#undef DAT_100054a0
#undef DAT_100054a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b0
 */

float recovered_100054b0(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;

  if (in_r0 < 0.0) {
    in_r0 = -in_r0;
  }
  return in_r0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054cc
 */

int recovered_100054cc(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10005620
 */

int recovered_10005620(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x1000569c;
  }
  bVar2 = false;
joined_r0x1000569c:
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
 * Address: 0x10005780
 */

double recovered_10005780(char *text,char **end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  int in_s0;
  undefined4 in_s1;

  for (pbVar2 = (byte *)text; (uVar1 = (uint)*pbVar2, uVar1 - 9 < 5 || (uVar1 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  pbVar2 = pbVar2 + ((uVar1 - 0x2b & 0xfffffffd) == 0);
  uVar1 = (uint)*pbVar2;
  uVar7 = uVar1 - 0x30;
  uVar4 = uVar7;
  while (uVar4 < 10) {
    in_s0 = uVar1 - 0x30;
    pbVar2 = pbVar2 + 1;
    uVar1 = (uint)*pbVar2;
    uVar4 = uVar1 - 0x30;
    VectorUnsignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
  }
  if (uVar1 == 0x2e) {
    uVar1 = (uint)pbVar2[1];
    pbVar5 = pbVar2 + 1;
    if (9 < uVar1 - 0x30) goto LAB_10005860;
    pbVar2 = pbVar2 + 2;
    do {
      pbVar5 = pbVar2;
      in_s0 = uVar1 - 0x30;
      uVar1 = (uint)*pbVar5;
      VectorUnsignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
      pbVar2 = pbVar5 + 1;
    } while (uVar1 - 0x30 < 10);
  }
  else {
    pbVar5 = pbVar2;
LAB_10005860:
    if (9 < uVar7) {
      if (end != (char **)0x0) {
        *end = text;
        return pf_bits_double(CONCAT44(in_s1,in_s0));
      }
      goto LAB_1000594c;
    }
  }
  if ((uVar1 | 0x20) == 0x65) {
    iVar6 = 1;
    pbVar2 = pbVar5 + 1;
    if (*pbVar2 == 0x2b) {
      pbVar2 = pbVar5 + 2;
    }
    else if (*pbVar2 == 0x2d) {
      pbVar2 = pbVar5 + 2;
      iVar6 = -1;
    }
    uVar1 = *pbVar2 - 0x30U;
    if (uVar1 < 10) {
      iVar3 = 0;
      uVar4 = (uint)*pbVar2;
      do {
        pbVar2 = pbVar2 + 1;
        iVar3 = uVar4 + iVar3 * 10 + -0x30;
        uVar4 = (uint)*pbVar2;
      } while (*pbVar2 - 0x30U < 10);
      if (uVar1 < 10) {
        uVar1 = iVar3 * iVar6;
        if ((int)uVar1 < 1) {
          if (0x7fffffff < uVar1) {
            do {
              bVar8 = uVar1 != 0xffffffff;
              uVar1 = uVar1 + 1;
            } while (bVar8);
          }
        }
        else {
          uVar1 = uVar1 + 1;
          do {
            uVar1 = uVar1 - 1;
          } while (1 < uVar1);
        }
        pbVar5 = pbVar2;
      }
    }
  }
  if (end != (char **)0x0) {
    *end = (char *)pbVar5;
  }
LAB_1000594c:
  return pf_bits_double(CONCAT44(in_s1,in_s0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005954
 */

float recovered_10005954(char *text,char **end)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10005780(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_100179ce
#define DAT_100179ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_100179d8
#define str_100179d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_100179e9
#define str_100179e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005970
 */

int recovered_10005970(char *out,uint capacity,char *format,void *args)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  double *pdVar20;
  bool bVar21;
  uint in_fpscr;
  double dVar22;
  double dVar23;

  if (capacity != 0) {
    *out = '\0';
  }
  local_6c = 0;
  local_68 = capacity;
  local_70 = args;
LAB_100059f0:
  while( true ) {
    pcVar7 = str_100179e9;
    bVar13 = *format;
    pbVar10 = (byte *)out;
    if (bVar13 == 0x25) break;
    if (bVar13 == 0) {
      if (capacity != 0) {
        *out = 0;
      }
      return local_6c;
    }
    pdVar20 = local_70;
    if (1 < local_68) {
      *out = bVar13;
      local_68 = local_68 - 1;
      pbVar10 = (byte *)(out + 1);
    }
LAB_10005a10:
    local_70 = pdVar20;
    local_6c = local_6c + 1;
    format = format + 1;
    out = (char *)pbVar10;
  }
  uVar11 = (uint)(byte)format[1];
  if (uVar11 == 0x25) goto code_r0x10005a30;
  pbVar9 = (byte *)(format + 2);
  while (uVar11 = uVar11 - 0x20, uVar11 < 0x11) {
    if ((1 << (uVar11 & 0xff) & 0x12809U) == 0) {
      if (uVar11 == 10) {
        bVar13 = *pbVar9;
        local_70 = (double *)((int)local_70 + 4);
        format = (char *)pbVar9;
        goto LAB_10005a9c;
      }
      break;
    }
    format = format + 1;
    uVar11 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  }
  do {
    format = format + 1;
    bVar13 = *format;
  } while ((byte)(bVar13 - 0x30U) < 10);
LAB_10005a9c:
  uVar11 = 0xffffffff;
  pbVar9 = (byte *)format;
  pdVar20 = local_70;
  if (bVar13 == 0x2e) {
    pbVar9 = (byte *)(format + 1);
    bVar13 = *pbVar9;
    if (bVar13 == 0x2a) {
      pbVar9 = (byte *)(format + 2);
      bVar13 = *pbVar9;
      pdVar20 = (double *)((int)local_70 + 4);
      uVar11 = *(uint *)local_70;
      goto LAB_10005ac8;
    }
    uVar11 = 0;
    if ((byte)(bVar13 - 0x30U) < 10) {
      uVar11 = 0;
      pbVar2 = (byte *)(format + 2);
      do {
        pbVar9 = pbVar2;
        bVar3 = bVar13 - 0x30U;
        bVar13 = *pbVar9;
        bVar21 = (int)((bVar3 ^ 0x7ffffffe) / 10) < (int)uVar11;
        uVar11 = uVar11 * 10 + (uint)bVar3;
        if (bVar21) {
          uVar11 = 0x7fffffff;
        }
        pbVar2 = pbVar9 + 1;
      } while ((byte)(bVar13 - 0x30U) < 10);
    }
  }
  else {
LAB_10005ac8:
    local_70 = pdVar20;
  }
  uVar14 = 0;
  bVar21 = false;
  format = (char *)pbVar9;
  switch((uintptr_t)(bVar13)) {
  case 0x4c:
    format = (char *)(pbVar9 + 1);
    uVar14 = 8;
    bVar21 = true;
    break;
  case 0x68:
    format = (char *)(pbVar9 + 1);
    uVar14 = 2;
    if (*format == 0x68) {
      uVar14 = 1;
      format = (char *)(pbVar9 + 2);
    }
    break;
  case 0x6a:
    format = (char *)(pbVar9 + 1);
    uVar14 = 7;
    break;
  case 0x6c:
    format = (char *)(pbVar9 + 1);
    uVar14 = 3;
    if (*format == 0x6c) {
      uVar14 = 4;
      format = (char *)(pbVar9 + 2);
    }
    break;
  case 0x74:
    format = (char *)(pbVar9 + 1);
    uVar14 = 6;
    break;
  case 0x7a:
    format = (char *)(pbVar9 + 1);
    uVar14 = 5;
  }
  uVar17 = (uint)(byte)*format;
  if (0x2f < uVar17 - 0x49) {
switchD_10005c9c_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar10 = (byte *)(out + 1);
      *out = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10006550;
  }
  pdVar20 = (double *)((int)local_70 + 4);
  local_64 = (byte *)out;
  switch((uintptr_t)(uVar17)) {
  case 0x49:
  case 100:
  case 0x69:
    switch((uintptr_t)(uVar14)) {
    case 1:
      uVar17 = (uint)(char)*(byte *)local_70;
      break;
    case 2:
      uVar17 = (uint)(short)*(ushort *)local_70;
      break;
    default:
      uVar17 = *(uint *)local_70;
      break;
    case 4:
    case 7:
      uVar17 = *(uint *)local_70;
      pdVar20 = local_70 + 1;
      uVar11 = *(uint *)((int)local_70 + 4);
      goto LAB_10005f6c;
    }
    uVar11 = (int)uVar17 >> 0x1f;
LAB_10005f6c:
    if (0x7fffffff < uVar11) {
      if (1 < local_68) {
        local_68 = local_68 - 1;
        local_64 = (byte *)(out + 1);
        *out = 0x2d;
      }
      bVar21 = uVar17 != 0;
      uVar17 = -uVar17;
      uVar11 = -(uVar11 + bVar21);
      local_6c = local_6c + 1;
    }
    iVar8 = 0;
    iVar6 = -1;
    do {
      iVar18 = iVar6;
      uVar4 = uVar17 >> 1 | uVar11 << 0x1f;
      uVar16 = uVar4 + (uVar11 >> 1) + (uint)CARRY4(uVar4,uVar11 >> 1);
      uVar16 = uVar16 - (((uint)((ulonglong)uVar16 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar16 / 5)
      ;
      uVar5 = uVar4 - uVar16;
      lVar1 = (ulonglong)uVar5 * 0xcccccccd;
      uVar12 = (uint)lVar1;
      local_60[-iVar8] = str_100179e9[uVar17 + uVar12 * -10];
      bVar21 = uVar17 < 10;
      iVar8 = iVar8 + -1;
      uVar15 = -uVar11;
      iVar6 = iVar18 + -1;
      uVar11 = ((uVar11 >> 1) - (uint)(uVar4 < uVar16)) * -0x33333333 +
               uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      uVar17 = uVar12;
    } while (bVar21 <= uVar15);
    local_70 = pdVar20;
    if (iVar8 != 0) {
      local_6c = local_6c - iVar8;
      do {
        pbVar10 = local_64;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          pbVar10 = local_64 + 1;
          *local_64 = local_60[-1 - iVar18];
        }
        bVar21 = iVar18 != -1;
        iVar18 = iVar18 + 1;
        local_64 = pbVar10;
      } while (bVar21);
      goto LAB_10006550;
    }
    break;
  default:
    goto switchD_10005c9c_caseD_4a;
  case 0x58:
  case 0x78:
    switch((uintptr_t)(uVar14)) {
    case 1:
      uVar15 = (uint)*(byte *)local_70;
      uVar11 = 0;
      local_70 = pdVar20;
      break;
    case 2:
      uVar15 = (uint)*(ushort *)local_70;
      uVar11 = 0;
      local_70 = pdVar20;
      break;
    case 3:
    case 5:
      uVar15 = *(uint *)local_70;
      uVar11 = 0;
      local_70 = pdVar20;
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
      local_70 = pdVar20;
      break;
    default:
      uVar15 = *(uint *)local_70;
      uVar11 = 0;
      local_70 = pdVar20;
    }
    iVar6 = 0;
    if (uVar17 == 0x58) {
      pcVar7 = str_100179d8;
    }
    do {
      iVar8 = iVar6;
      local_60[iVar8] = pcVar7[uVar15 & 0xf];
      uVar15 = uVar15 >> 4 | uVar11 << 0x1c;
      uVar17 = uVar11 >> 4;
      uVar11 = uVar11 >> 4;
      iVar6 = iVar8 + 1;
    } while (uVar15 != 0 || uVar17 != 0);
    local_6c = local_6c + iVar8 + 1;
    iVar8 = -iVar8;
    do {
      pbVar10 = (byte *)out;
      if (1 < local_68) {
        local_68 = local_68 - 1;
        pbVar10 = (byte *)(out + 1);
        *out = local_60[-iVar8];
      }
      iVar8 = iVar8 + 1;
      out = (char *)pbVar10;
    } while (iVar8 != 1);
    goto LAB_10006550;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar10 = (byte *)(out + 1);
      *out = (byte)*(uint *)local_70;
    }
    goto LAB_10005a10;
  case 0x66:
    if (bVar21) {
      if (local_68 < 2) {
      }
      else {
        pbVar10 = (byte *)(out + 1);
        *out = 0x30;
        if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
          uVar11 = local_68 & 0xfffffffe;
          out[1] = 0x2e;
          if (uVar11 == 2) {
            pbVar10 = (byte *)(out + 2);
          }
          else {
            out[2] = 0x30;
            if (local_68 - 5 < 0xfffffffd || local_68 == 2) {
              out[3] = 0x30;
              if (uVar11 == 4) {
                pbVar10 = (byte *)(out + 4);
              }
              else {
                out[4] = 0x30;
                if (local_68 - 7 < 0xfffffffd || local_68 == 4) {
                  out[5] = 0x30;
                  if (uVar11 == 6) {
                    pbVar10 = (byte *)(out + 6);
                  }
                  else {
                    out[6] = 0x30;
                    if (local_68 - 9 < 0xfffffffd || local_68 == 6) {
                      out[7] = 0x30;
                      local_68 = local_68 - 8;
                      pbVar10 = (byte *)(out + 8);
                      goto LAB_10006444;
                    }
                    pbVar10 = (byte *)(out + 7);
                  }
                }
                else {
                  pbVar10 = (byte *)(out + 5);
                }
              }
            }
            else {
              pbVar10 = (byte *)(out + 3);
            }
          }
        }
        local_68 = 1;
      }
LAB_10006444:
      local_6c = local_6c + 8;
      format = format + 1;
      out = (char *)pbVar10;
      local_70 = local_70 + 1;
    }
    else {
      dVar22 = *local_70;
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar22 < 0.0) {
        if (1 < local_68) {
          local_68 = local_68 - 1;
          local_64 = (byte *)(out + 1);
          *out = 0x2d;
        }
        dVar22 = -dVar22;
        local_6c = local_6c + 1;
      }
      uVar15 = VectorFloatToSigned(dVar22,3);
      iVar8 = 0;
      uVar11 = uVar15;
      iVar6 = -1;
      uVar17 = 0;
      do {
        iVar18 = iVar6;
        uVar19 = uVar11 >> 1 | uVar17 << 0x1f;
        uVar5 = uVar19 + (uVar17 >> 1) + (uint)CARRY4(uVar19,uVar17 >> 1);
        uVar5 = uVar5 - (((uint)((ulonglong)uVar5 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar5 / 5);
        uVar16 = uVar19 - uVar5;
        lVar1 = (ulonglong)uVar16 * 0xcccccccd;
        uVar12 = (uint)lVar1;
        bVar21 = uVar11 < 10;
        uVar4 = -uVar17;
        local_60[-iVar8] = str_100179e9[uVar11 + uVar12 * -10];
        iVar8 = iVar8 + -1;
        uVar11 = uVar12;
        iVar6 = iVar18 + -1;
        uVar17 = ((uVar17 >> 1) - (uint)(uVar19 < uVar5)) * -0x33333333 +
                 uVar16 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      } while (bVar21 <= uVar4);
      if (iVar8 != 0) {
        local_6c = local_6c - iVar8;
        pbVar10 = local_64;
        do {
          local_64 = pbVar10;
          if (1 < local_68) {
            local_68 = local_68 - 1;
            local_64 = pbVar10 + 1;
            *pbVar10 = local_60[-1 - iVar18];
          }
          bVar21 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          pbVar10 = local_64;
        } while (bVar21);
      }
      if (local_68 < 2) {
        uVar11 = local_68;
LAB_1000640c:
        out = (char *)local_64;
      }
      else {
        *local_64 = 0x2e;
        uVar11 = local_68 - 1;
        out = (char *)(local_64 + 1);
        if (1 < uVar11) {
          dVar23 = (double)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
          uVar17 = local_68 & 0xfffffffe;
          uVar11 = 1;
          dVar22 = (dVar22 - dVar23) * 10.0;
          uVar14 = VectorFloatToSigned(dVar22,3);
          local_64[1] = (char)uVar14 + 0x30;
          if (uVar17 == 2) {
            out = (char *)(local_64 + 2);
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
              if (uVar17 == 4) {
                out = (char *)(local_64 + 4);
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
                  if (uVar17 != 6) {
                    dVar23 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
                    uVar14 = VectorFloatToSigned((dVar22 - dVar23) * 10.0,3);
                    local_64[6] = (char)uVar14 + 0x30;
                    local_64 = local_64 + 7;
                    uVar11 = local_68 - 7;
                    goto LAB_1000640c;
                  }
                  out = (char *)(local_64 + 6);
                }
                else {
                  out = (char *)(local_64 + 5);
                }
              }
            }
            else {
              out = (char *)(local_64 + 3);
            }
          }
        }
      }
      local_6c = local_6c + 7;
      format = format + 1;
      local_68 = uVar11;
      local_70 = local_70 + 1;
    }
    goto LAB_100059f0;
  case 0x70:
    uVar11 = *(uint *)local_70;
    if (local_68 < 2) {
      uVar17 = local_68;
    }
    else {
      pbVar10 = (byte *)(out + 1);
      *out = 0x30;
      uVar17 = 1;
      if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
        uVar17 = local_68 - 2;
        pbVar10 = (byte *)(out + 2);
        out[1] = 0x78;
      }
    }
    iVar6 = 0;
    do {
      iVar8 = iVar6;
      local_60[iVar8] = str_100179e9[uVar11 & 0xf];
      uVar11 = uVar11 >> 4;
      iVar6 = iVar8 + 1;
    } while (uVar11 != 0);
    iVar6 = -iVar8;
    local_6c = local_6c + iVar8 + 1 + 2;
    do {
      out = (char *)pbVar10;
      if (1 < uVar17) {
        uVar17 = uVar17 - 1;
        out = (char *)(pbVar10 + 1);
        *pbVar10 = local_60[-iVar6];
      }
      iVar6 = iVar6 + 1;
      pbVar10 = (byte *)out;
    } while (iVar6 != 1);
    format = format + 1;
    local_68 = uVar17;
    local_70 = pdVar20;
    goto LAB_100059f0;
  case 0x73:
    if (uVar11 == 0) {
      format = format + 1;
      local_70 = pdVar20;
      goto LAB_100059f0;
    }
    pbVar10 = *(byte **)local_70;
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &DAT_100179ce;
    }
    do {
      bVar13 = *pbVar10;
      local_70 = pdVar20;
      if (bVar13 == 0) break;
      pbVar10 = pbVar10 + 1;
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *local_64 = bVar13;
        local_64 = local_64 + 1;
      }
      local_6c = local_6c + 1;
      if (0 < (int)uVar11) {
        uVar11 = uVar11 - 1;
      }
    } while (uVar11 != 0);
    break;
  case 0x75:
    switch((uintptr_t)(uVar14)) {
    case 1:
      uVar17 = (uint)*(byte *)local_70;
      break;
    case 2:
      uVar17 = (uint)*(ushort *)local_70;
      break;
    default:
      uVar17 = *(uint *)local_70;
      break;
    case 4:
    case 7:
      uVar17 = *(uint *)local_70;
      uVar11 = *(uint *)((int)local_70 + 4);
      local_70 = local_70 + 1;
      goto LAB_10006468;
    case 6:
      uVar17 = *(uint *)local_70;
      uVar11 = (int)uVar17 >> 0x1f;
      local_70 = pdVar20;
      goto LAB_10006468;
    }
    uVar11 = 0;
    local_70 = pdVar20;
LAB_10006468:
    iVar8 = 0;
    iVar6 = -1;
    do {
      iVar18 = iVar6;
      uVar4 = uVar17 >> 1 | uVar11 << 0x1f;
      uVar16 = uVar4 + (uVar11 >> 1) + (uint)CARRY4(uVar4,uVar11 >> 1);
      uVar16 = uVar16 - (((uint)((ulonglong)uVar16 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar16 / 5)
      ;
      uVar5 = uVar4 - uVar16;
      lVar1 = (ulonglong)uVar5 * 0xcccccccd;
      uVar12 = (uint)lVar1;
      local_60[-iVar8] = str_100179e9[uVar17 + uVar12 * -10];
      bVar21 = uVar17 < 10;
      iVar8 = iVar8 + -1;
      uVar15 = -uVar11;
      iVar6 = iVar18 + -1;
      uVar11 = ((uVar11 >> 1) - (uint)(uVar4 < uVar16)) * -0x33333333 +
               uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      uVar17 = uVar12;
    } while (bVar21 <= uVar15);
    if (iVar8 != 0) {
      local_6c = local_6c - iVar8;
      do {
        pbVar10 = (byte *)out;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          pbVar10 = (byte *)(out + 1);
          *out = local_60[-1 - iVar18];
        }
        bVar21 = iVar18 != -1;
        iVar18 = iVar18 + 1;
        out = (char *)pbVar10;
      } while (bVar21);
LAB_10006550:
      format = format + 1;
      out = (char *)pbVar10;
      goto LAB_100059f0;
    }
  }
  format = format + 1;
  out = (char *)local_64;
  goto LAB_100059f0;
code_r0x10005a30:
  if (local_68 < 2) {
  }
  else {
    local_68 = local_68 - 1;
    pbVar10 = (byte *)(out + 1);
    *out = 0x25;
  }
  local_6c = local_6c + 1;
  format = format + 2;
  out = (char *)pbVar10;
  goto LAB_100059f0;
}

#undef DAT_100179ce
#undef str_100179d8
#undef str_100179e9
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native variadic formatter; Pooka's Free Software License. */
int recovered_10006738(char *out,uint capacity,char *format,...){__builtin_va_list arguments;__builtin_va_start(arguments,format);int count=recovered_10005970(out,capacity,format,(void *)arguments);__builtin_va_end(arguments);return count;}


#undef DAT_1001807c
#define DAT_1001807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6d4U)))
#undef DAT_10018084
#define DAT_10018084 (*(int * *)(((uintptr_t)pf_module_state + 0x6dcU)))
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
 * Address: 0x10006768
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006768(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_1001807c != 0;
          puVar4 = &DAT_1001807c;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_10018084;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_10018084 = piVar3;
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
      puVar4 = &DAT_1001807c;
      if (DAT_1001807c != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_10018084;
      goto LAB_1000694c;
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
      bVar7 = DAT_1001807c != 0;
      puVar4 = &DAT_1001807c;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_10018084;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_1000694c:
      if (piVar5 == (int *)0x0) {
        DAT_10018084 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1001807c
#undef DAT_10018084
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006968
 */

uint * recovered_10006968(uint *param_1,uint *param_2)

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
 * Address: 0x100069ec
 */

undefined4 recovered_100069ec(uint *param_1,int param_2)

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


#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4U)))
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
#define local_224 (*(undefined1 (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006a4c(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == '\b') {
        if (DAT_10018088 != 0) {
          DAT_10018088 = DAT_10018088 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_10018088 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10002f90(local_224,&DAT_1001808c,DAT_10018088);
            uVar2 = DAT_10018088;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_10018088 = 0;
        }
        else {
          if (DAT_10018088 - 0x1ff < 0xfffffe00) {
            recovered_10002f90(local_224,&DAT_1001808c,DAT_10018088);
            local_224[DAT_10018088] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_10018088 = 0;
          }
          (&DAT_1001808c)[DAT_10018088] = cVar1;
          DAT_10018088 = DAT_10018088 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_10018088
#undef DAT_1001808c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4U)))
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
#define local_210 (*(undefined1 (*)[528])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006c30(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (DAT_10018088 != 0) {
    recovered_10002f90(local_210,&DAT_1001808c,DAT_10018088);
    uVar1 = DAT_10018088;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_10018088 = 0;
  return;
}

#undef DAT_10018088
#undef DAT_1001808c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4U)))
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
#define auStack_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006cf0(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_10018088 == 0) {
    return;
  }
  recovered_10002f90(auStack_214,&DAT_1001808c,DAT_10018088);
  auStack_214[DAT_10018088] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_10018088 = 0;
  return;
}

#undef DAT_10018088
#undef DAT_1001808c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_100179d7
#define DAT_100179d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_100179fa
#define DAT_100179fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dac
 */

void recovered_10006dac(int param_1,int param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_100179fa;
  if (param_1 != 0) {
    format = (char *)param_1;
  }
  puVar2 = &DAT_100179d7;
  if (param_2 != 0) {
    puVar2 = (undefined *)param_2;
  }
  iVar1 = recovered_10006738(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10006a4c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_100179d7
#undef DAT_100179fa
#undef acStack_14c

#undef DAT_10017a18
#define DAT_10017a18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_100179fd
#define str_100179fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e04
 */

void recovered_10006e04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10004054(str_100179fd);
  recovered_10006a4c(str_100179fd,uVar1);
  uVar1 = recovered_10004054(&DAT_10017a18);
  recovered_10006a4c(&DAT_10017a18,uVar1);
  return;
}

#undef DAT_10017a18
#undef str_100179fd

#undef DAT_10017a18
#define DAT_10017a18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_10017a1b
#define str_10017a1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e50
 */

void recovered_10006e50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10004054(str_10017a1b);
  recovered_10006a4c(str_10017a1b,uVar1);
  uVar1 = recovered_10004054(&DAT_10017a18);
  recovered_10006a4c(&DAT_10017a18,uVar1);
  return;
}

#undef DAT_10017a18
#undef str_10017a1b

#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4U)))
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
#define auStack_224 (*(undefined1 (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10006e9c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return '\0';
  }
  if (DAT_10018088 != 0) {
    recovered_10002f90(auStack_224,&DAT_1001808c,DAT_10018088);
    auStack_224[DAT_10018088] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_10018088 = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10018088
#undef DAT_1001808c
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
 * Address: 0x10006ff0
 */

undefined4 recovered_10006ff0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff8
 */

void recovered_10006ff8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ffc
 */

undefined4 recovered_10006ffc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_100179fa
#define DAT_100179fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
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
#undef str_10017a9c
#define str_10017a9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10017aa9
#define str_10017aa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_10017ab7
#define str_10017ab7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007004
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007004(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint size;
  void *dst;
  undefined4 uVar7;
  undefined1 uVar8;
  char *unaff_r8;

  if (param_1 != 0) {
    unaff_r8 = (char *)param_2;
  }
  if (param_1 == 0 || param_2 == 0) {
    uVar7 = 0x16;
    goto LAB_10007278;
  }
  iVar2 = recovered_1000407c((byte *)param_1,(byte *)str_10017a9c);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10007204:
    puVar4 = recovered_10002e98(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10003720(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      recovered_10006738((char *)(puVar4 + 1),0xf1,&DAT_100179fa,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_1000407c((byte *)param_1,(byte *)str_10017aa9);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10007204;
    }
    iVar3 = recovered_1000407c((byte *)param_1,(byte *)str_10017ab7);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10007204;
    }
    puVar4 = recovered_10002e98(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10003720(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10004434(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10004434(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10004434(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10004434(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10004434(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10004434(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10004434(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      recovered_10006738((char *)(puVar4 + 1),0xf1,&DAT_100179fa,param_1);
      recovered_10003720(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10004434(unaff_r8,'w');
        if ((pcVar5 == (char *)0x0) && (local_20 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            uVar6 = puVar4[0x41];
            if (uVar6 < local_20) {
              if (uVar6 == 0) {
                uVar6 = 0x100;
              }
              do {
                size = uVar6;
                uVar6 = size << 1;
              } while (size < local_20);
              dst = recovered_10002f3c((void *)puVar4[0x3f],size);
              if (dst == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_100072a0;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = dst;
              puVar4[0x3e] = dst;
            }
            else {
              dst = (void *)puVar4[0x3f];
            }
            recovered_10002f90(dst,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_100072a0:
        *DAT_1001c004 = uVar7;
        recovered_10002eec(puVar4);
        return (undefined4 *)0x0;
      }
      if (*(char *)((int)puVar4 + 0x112) == '\x01') {
        puVar4[0x42] = puVar4[0x40];
        return puVar4;
      }
      return puVar4;
    }
  }
  uVar7 = 0xc;
LAB_10007278:
  *DAT_1001c004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_100179fa
#undef DAT_1001c004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_10017a9c
#undef str_10017aa9
#undef str_10017ab7
#undef local_24
#undef local_20

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
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
 * Address: 0x10007388
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007388(int param_1,int param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  if (param_3 != (uint *)0x0) {
    uVar3 = *param_3;
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = (uint)*(byte *)((int)param_3 + 0x113);
    }
    if (bVar4 && uVar3 == 1) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
         ((_DAT_40010838 != (code *)0x0 &&
          (iVar2 = (*_DAT_40010838)(param_3 + 1,param_3[0x3e],param_3[0x40]), iVar2 != 0)))) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
      }
      else {
        *(undefined1 *)((int)param_3 + 0x115) = 1;
        *DAT_1001c004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_10002eec((void *)param_3[0x3f]);
    }
    recovered_10002eec(param_3);
  }
  puVar1 = recovered_10007004(param_1,param_2);
  return puVar1;
}

#undef DAT_1001c004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
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
 * Address: 0x10007488
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007488(uint *param_1)

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
      *DAT_1001c004 = 5;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002eec((void *)param_1[0x3f]);
  }
  recovered_10002eec(param_1);
  return uVar3;
}

#undef DAT_1001c004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007580
 */

int recovered_10007580(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;
  uint uVar3;
  uint bytes;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      unaff_r4 = param_4;
    }
    if ((param_1 != (undefined1 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r4[0x44] == '\x01'))
    {
      iVar2 = *unaff_r4;
      bVar6 = iVar2 == 0;
      if (bVar6) {
        iVar2 = unaff_r4[0x43];
      }
      if (bVar6 && iVar2 == -1) {
        uVar1 = unaff_r4[0x42];
        if (uVar1 < (uint)unaff_r4[0x40]) {
          uVar3 = (uint)((ulonglong)(uint)param_3 * (ulonglong)(uint)param_2);
          uVar5 = unaff_r4[0x40] - uVar1;
          if ((int)((ulonglong)(uint)param_3 * (ulonglong)(uint)param_2 >> 0x20) != 0) {
            uVar3 = 0xffffffff;
          }
          bytes = uVar3;
          if (uVar5 < uVar3) {
            bytes = uVar5;
          }
          recovered_10002f90(param_1,(void *)(unaff_r4[0x3e] + uVar1),bytes);
          unaff_r4[0x42] = unaff_r4[0x42] + bytes;
          if (uVar5 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_100013f0(bytes,param_2);
        }
        else {
          *(undefined1 *)(unaff_r4 + 0x45) = 1;
        }
      }
      else {
        do {
          puVar4 = param_1;
          iVar2 = param_2;
          do {
            uVar1 = recovered_100076ac(unaff_r4);
            if (uVar1 == 0xffffffff) {
              return uVar3;
            }
            *puVar4 = (char)uVar1;
            iVar2 = iVar2 + -1;
            puVar4 = puVar4 + 1;
          } while (iVar2 != 0);
          uVar3 = uVar3 + 1;
          param_1 = param_1 + param_2;
        } while (uVar3 != param_3);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


#undef DAT_100179d7
#define DAT_100179d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10018088
#define DAT_10018088 (*(uint *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef DAT_1001808c
#define DAT_1001808c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4U)))
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
#define auStack_220 (*(undefined1 (*)[544])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100076ac(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  char *text;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar3 = param_1[0x43];
  if (uVar3 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar3;
  }
  if (*param_1 == 1) {
    uVar3 = param_1[199];
    if (uVar3 < (uint)param_1[0xc6]) {
LAB_10007708:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_10018088 != 0) {
      recovered_10002f90(auStack_220,&DAT_1001808c,DAT_10018088);
      auStack_220[DAT_10018088] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_10018088 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_100179d7,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10004054(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10007708;
      }
    }
  }
  else {
    uVar3 = param_1[0x42];
    if (uVar3 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar3 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  return 0xffffffff;
}

#undef DAT_100179d7
#undef DAT_10018088
#undef DAT_1001808c
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

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078ac
 */

int recovered_100078ac(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint size;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
    param_3 = 0;
  }
  else {
    uVar4 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10006a4c((char *)param_1,uVar4);
      param_4[0x42] = param_4[0x42] + uVar4;
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
      if (uVar3 < uVar2 + uVar4) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size = uVar3;
          uVar3 = size << 1;
        } while (size < uVar2 + uVar4);
        pvVar1 = recovered_10002f3c((void *)param_4[0x3f],size);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_1001c004 = 0xc;
          return 0;
        }
        uVar2 = param_4[0x42];
        param_4[0x3f] = (uint)pvVar1;
        param_4[0x3e] = (uint)pvVar1;
        param_4[0x41] = size;
      }
      uVar3 = param_4[0x40];
      if (uVar3 < uVar2) {
        recovered_10003720((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10002f90((void *)(param_4[0x3f] + uVar2),(void *)param_1,uVar4);
      uVar4 = param_4[0x42] + uVar4;
      param_4[0x42] = uVar4;
      if (param_4[0x40] < uVar4) {
        param_4[0x40] = uVar4;
      }
      *(undefined2 *)((int)param_4 + 0x113) = 1;
    }
  }
  return param_3;
}

#undef DAT_1001c004

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a24
 */

undefined4 recovered_10007a24(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *DAT_1001c004 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10007a38;
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
LAB_10007a38:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_1001c004 = 0x16;
  return 0xffffffff;
}

#undef DAT_1001c004

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ad4
 */

undefined4 recovered_10007ad4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *DAT_1001c004 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef DAT_1001c004

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
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
 * Address: 0x10007afc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007afc(uint *param_1)

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
        *DAT_1001c004 = 5;
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_1001c004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bd4
 */

undefined1 recovered_10007bd4(int param_1)

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
 * Address: 0x10007be4
 */

undefined1 recovered_10007be4(int param_1)

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
 * Address: 0x10007bf4
 */

void recovered_10007bf4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c10
 */

uint recovered_10007c10(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
  }
  return uVar1;
}


#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
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
 * Address: 0x10007c34
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007c34(int param_1)

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
  *DAT_1001c004 = uVar2;
  return 0xffffffff;
}

#undef DAT_1001c004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c

#undef DAT_1001c004
#define DAT_1001c004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x465cU)))
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
 * Address: 0x10007cc4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007cc4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_1001c004 = 0x16;
    return 0xffffffff;
  }
  recovered_10003720(&local_28,0,0xc);
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
  *DAT_1001c004 = uVar2;
  return 0xffffffff;
}

#undef DAT_1001c004
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
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007e38(int param_1,int *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *dst;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (int *)0x0 && param_3 != (uint *)0x0)) &&
      (recovered_10003720(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    dst = recovered_10002e98(size);
    if (dst != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_10002f90(dst,local_24,local_20);
      }
      uVar2 = 1;
      *param_3 = local_20;
      *param_2 = (int)dst;
    }
  }
  return uVar2;
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
 * Address: 0x10007f38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10007f38(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 == 0) || (((param_2 == 0 && (param_3 != 0)) || (_DAT_40010800 != 0x50414d57)))) ||
     ((_DAT_40010804 == 0 || (_DAT_40010808 < 0x3c)))) {
    return '\0';
  }
  if (_DAT_40010838 == (code *)0x0) {
    return '\0';
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
 * Address: 0x10007fc0
 */

undefined4 recovered_10007fc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fc8
 */

void recovered_10007fc8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fcc
 */

undefined4 recovered_10007fcc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fd4
 */

undefined4 recovered_10007fd4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fdc
 */

undefined4 recovered_10007fdc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fe4
 */

int recovered_10007fe4(byte *param_1,byte *param_2,int param_3)

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


#undef DAT_10017a2b
#define DAT_10017a2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_10017a2e
#define str_10017a2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10017a3b
#define str_10017a3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_10017a45
#define str_10017a45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_10017a59
#define str_10017a59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_10017a67
#define str_10017a67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_10017a79
#define str_10017a79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_10017a85
#define str_10017a85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_10017a96
#define str_10017a96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008028
 */

char * recovered_10008028(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_10017a2b;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10008048_caseD_0;
  default:
    pcVar1 = str_10017a96;
switchD_10008048_caseD_0:
    return pcVar1;
  case 2:
    return str_10017a2e;
  case 5:
    return str_10017a3b;
  case 9:
    return str_10017a45;
  case 0xc:
    return str_10017a59;
  case 0xd:
    return str_10017a67;
  case 0x11:
    return str_10017a79;
  case 0x16:
    return str_10017a85;
  }
}

#undef DAT_10017a2b
#undef str_10017a2e
#undef str_10017a3b
#undef str_10017a45
#undef str_10017a59
#undef str_10017a67
#undef str_10017a79
#undef str_10017a85
#undef str_10017a96

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008128
 */

undefined4 recovered_10008128(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008130
 */

undefined4 recovered_10008130(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1001828c
#define DAT_1001828c (*(int *)(((uintptr_t)pf_module_state + 0x8e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008138
 */

void recovered_10008138(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001828c = DAT_1001828c + 1;
  return;
}

#undef DAT_1001828c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008160
 */

void recovered_10008160(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x1000816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10008170(void *context){__asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100081c0(void *context,int value){__asm__ volatile("cmp r1, #0\nmoveq r1,#1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr");}


static const unsigned char pf_literal_10008218_DAT_1000829c[] __attribute__((aligned(16)))={0xdc,0xf8,0x00,0x00};
#undef DAT_1000829c
#define DAT_1000829c (*(int *)((uintptr_t)pf_literal_10008218_DAT_1000829c))
static const unsigned char pf_literal_10008218_DAT_100082a0[] __attribute__((aligned(16)))={0x1c,0x00,0x00,0x00};
#undef DAT_100082a0
#define DAT_100082a0 (*(int *)((uintptr_t)pf_literal_10008218_DAT_100082a0))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008218
 */

void recovered_10008218(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_100082a4;
  local_20 = ((uintptr_t)pf_module_state+0x174U);
  local_18 = DAT_100082a0 + 0x10008250;
  local_38 = 1;
  recovered_100089f8(&uStack_3c);
  recovered_10002e84();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10008278);
  (*pcVar1)();
}

#undef DAT_1000829c
#undef DAT_100082a0
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082a4
 */

undefined4 recovered_100082a4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082ac
 */

void recovered_100082ac(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100082bc(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10008218();
}


#undef DAT_10018290
#define DAT_10018290 (*(int *)(((uintptr_t)pf_module_state + 0x8e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082bc
 */

long recovered_100082bc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  undefined4 in_r1;
  int in_r2;

  recovered_10008810(param_1,in_r1,in_r2);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_10008218();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_10018290;
  DAT_10018290 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_10018290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082fc
 */

void * recovered_100082fc(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002e98(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002e84();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008328
 */

void * recovered_10008328(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002e98(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002e84();
    return (void *)0x0;
  }
  return pvVar1;
}


static const unsigned char pf_literal_10008354_DAT_10008414[] __attribute__((aligned(16)))={0x94,0xf7,0x00,0x00};
#undef DAT_10008414
#define DAT_10008414 (*(int *)((uintptr_t)pf_literal_10008354_DAT_10008414))
static const unsigned char pf_literal_10008354_DAT_10008418[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10008418
#define DAT_10008418 (*(int *)((uintptr_t)pf_literal_10008354_DAT_10008418))
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
 * Address: 0x10008354
 */

void recovered_10008354(void *pointer)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100082a4;
  local_78 = ((uintptr_t)pf_module_state+0x184U);
  local_70 = DAT_10008418 + 0x100083a8;
  local_90 = 1;
  recovered_100089f8(&uStack_94);
  recovered_10002eec(pointer);
  recovered_10008a1c(&uStack_94);
  return;
}

#undef DAT_10008414
#undef DAT_10008418
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

static const unsigned char pf_literal_1000841c_DAT_100084dc[] __attribute__((aligned(16)))={0xdc,0xf6,0x00,0x00};
#undef DAT_100084dc
#define DAT_100084dc (*(int *)((uintptr_t)pf_literal_1000841c_DAT_100084dc))
static const unsigned char pf_literal_1000841c_DAT_100084e0[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_100084e0
#define DAT_100084e0 (*(int *)((uintptr_t)pf_literal_1000841c_DAT_100084e0))
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
 * Address: 0x1000841c
 */

void recovered_1000841c(void *pointer)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100082a4;
  local_78 = ((uintptr_t)pf_module_state+0x194U);
  local_70 = DAT_100084e0 + 0x10008470;
  local_90 = 1;
  recovered_100089f8(&uStack_94);
  recovered_10002eec(pointer);
  recovered_10008a1c(&uStack_94);
  return;
}

#undef DAT_100084dc
#undef DAT_100084e0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68

static const unsigned char pf_literal_100084e4_DAT_100085a4[] __attribute__((aligned(16)))={0x24,0xf6,0x00,0x00};
#undef DAT_100085a4
#define DAT_100085a4 (*(int *)((uintptr_t)pf_literal_100084e4_DAT_100085a4))
static const unsigned char pf_literal_100084e4_DAT_100085a8[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_100085a8
#define DAT_100085a8 (*(int *)((uintptr_t)pf_literal_100084e4_DAT_100085a8))
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
 * Address: 0x100084e4
 */

void recovered_100084e4(void *pointer,uint size)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100082a4;
  local_78 = ((uintptr_t)pf_module_state+0x1a4U);
  local_70 = DAT_100085a8 + 0x10008538;
  local_90 = 1;
  recovered_100089f8(&uStack_94);
  recovered_10002eec(pointer);
  recovered_10008a1c(&uStack_94);
  return;
}

#undef DAT_100085a4
#undef DAT_100085a8
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef auStack_68
#undef local_7c
#undef local_78

static const unsigned char pf_literal_100085ac_DAT_1000866c[] __attribute__((aligned(16)))={0x6c,0xf5,0x00,0x00};
#undef DAT_1000866c
#define DAT_1000866c (*(int *)((uintptr_t)pf_literal_100085ac_DAT_1000866c))
static const unsigned char pf_literal_100085ac_DAT_10008670[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10008670
#define DAT_10008670 (*(int *)((uintptr_t)pf_literal_100085ac_DAT_10008670))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085ac
 */

void recovered_100085ac(void *pointer,uint size)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100082a4;
  local_78 = ((uintptr_t)pf_module_state+0x1b4U);
  local_70 = DAT_10008670 + 0x10008600;
  local_90 = 1;
  recovered_100089f8(&uStack_94);
  recovered_10002eec(pointer);
  recovered_10008a1c(&uStack_94);
  return;
}

#undef DAT_1000866c
#undef DAT_10008670
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008674
 */

undefined4 recovered_10008674(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000867c
 */

uint recovered_1000867c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000868c
 */

void recovered_1000868c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000869c
 */

void recovered_1000869c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10018298
#define DAT_10018298 (*(uint *)(((uintptr_t)pf_module_state + 0x8f0U)))
#undef DAT_1001829c
#define DAT_1001829c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086a0
 */

undefined1 * recovered_100086a0(uint param_1)

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
  puVar1 = recovered_10002e98(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008218();
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
      if (size == uVar6) goto LAB_1000871c;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_1000871c:
  DAT_10018298 = DAT_10018298 + 1;
  if (DAT_10018298 < 2) {
    DAT_10018298 = 1;
  }
  if (DAT_1001829c == (undefined4 *)0x0) {
LAB_10008778:
    puVar1[7] = DAT_10018298;
    puVar1[3] = DAT_1001829c;
    DAT_1001829c = puVar1;
    return (undefined1 *)(puVar1 + 9);
  }
  do {
    iVar3 = (int)DAT_1001829c;
    while (*(uint *)(iVar3 + 0x1c) != DAT_10018298) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10008778;
    }
    DAT_10018298 = DAT_10018298 + 1;
    if (DAT_10018298 < 2) {
      DAT_10018298 = 1;
    }
  } while( true );
}

#undef DAT_10018298
#undef DAT_1001829c

#undef DAT_1001829c
#define DAT_1001829c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087ac
 */

void recovered_100087ac(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;

  if (param_1 == 0) {
    return;
  }
  pointer = (void *)(param_1 + -0x24);
  pvVar1 = DAT_1001829c;
  if (DAT_1001829c == pointer) {
    puVar3 = &DAT_1001829c;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_10008808;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10008808:
  recovered_10002eec(pointer);
  return;
}

#undef DAT_1001829c

#undef DAT_1001829c
#define DAT_1001829c (*(int *)(((uintptr_t)pf_module_state + 0x8f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008810
 */

void recovered_10008810(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001829c;
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

#undef DAT_1001829c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008844
 */

int recovered_10008844(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x24;
}


#undef DAT_10018290
#define DAT_10018290 (*(void * *)(((uintptr_t)pf_module_state + 0x8e8U)))
#undef DAT_1001829c
#define DAT_1001829c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000884c
 */

void recovered_1000884c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_10018290;
  if (DAT_10018290 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_10018290 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_10018290 + 8);
  *(undefined4 *)((int)DAT_10018290 + 8) = 0;
  DAT_10018290 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_1001829c;
  if (DAT_1001829c == pointer) {
    puVar3 = &DAT_1001829c;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_100088f8;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_100088f8:
  recovered_10002eec(pointer);
  return;
}

#undef DAT_10018290
#undef DAT_1001829c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008904
 */

void recovered_10008904(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_1000892c((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_10018290
#define DAT_10018290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8e8U)))
#undef DAT_10018294
#define DAT_10018294 (*(int * *)(((uintptr_t)pf_module_state + 0x8ecU)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000892c
 */

void recovered_1000892c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  int *extraout_r0 = 0;
  int *piVar3;
  int *piVar4;

  if (DAT_10018294 != (int *)0x0) {
    piVar4 = (int *)*param_1;
    piVar3 = DAT_10018294;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar2 = recovered_10009280((int)piVar3,piVar4,(undefined2 *)&local_28);
      if ((iVar2 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar3;
        param_1[6] = local_20;
        recovered_10008aec(param_1);
        puVar1 = DAT_10018290;
                    /* WARNING: Subroutine does not return */
        if (DAT_10018290 == (undefined4 *)0x0) {
          recovered_10008218();
        }
        DAT_10018290[6] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        *(undefined1 *)(puVar1 + 8) = 1;
        recovered_1000892c(puVar1);
        *extraout_r0 = (int)DAT_10018294;
        DAT_10018294 = extraout_r0;
        return;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10008218();
}

#undef DAT_10018290
#undef DAT_10018294
#undef local_20
#undef local_28
#undef local_24

#undef DAT_10018290
#define DAT_10018290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8e8U)))
#undef DAT_10018294
#define DAT_10018294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089c0
 */

void recovered_100089c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_10018290;
                    /* WARNING: Subroutine does not return */
  if (DAT_10018290 == (undefined4 *)0x0) {
    recovered_10008218();
  }
  DAT_10018290[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_1000892c(puVar1);
  *extraout_r0 = DAT_10018294;
  DAT_10018294 = extraout_r0;
  return;
}

#undef DAT_10018290
#undef DAT_10018294

#undef DAT_10018294
#define DAT_10018294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089f8
 */

void recovered_100089f8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10018294;
  DAT_10018294 = param_1;
  return;
}

#undef DAT_10018294

#undef DAT_10018294
#define DAT_10018294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a1c
 */

void recovered_10008a1c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10018294;
  if (DAT_10018294 == param_1) {
    puVar2 = &DAT_10018294;
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

#undef DAT_10018294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a64
 */

void recovered_10008a64(undefined4 *in_r0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000892c(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_10008218();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a70
 */

void recovered_10008a70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008218();
}


#undef DAT_10018294
#define DAT_10018294 (*(int * *)(((uintptr_t)pf_module_state + 0x8ecU)))
#undef DAT_1001829c
#define DAT_1001829c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a7c
 */

void recovered_10008a7c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_1001829c; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_10008ac0;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10008218();
  }
LAB_10008ac0:
  if (DAT_10018294 != (int *)0x0) {
    DAT_10018294 = (int *)*DAT_10018294;
  }
  recovered_10008aec(puVar1);
  return;
}

#undef DAT_10018294
#undef DAT_1001829c

#undef DAT_10018294
#define DAT_10018294 (*(int * *)(((uintptr_t)pf_module_state + 0x8ecU)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008aec
 */

void recovered_10008aec(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_10018294 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_10018294;
      if (DAT_10018294 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_10018294[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_10008ba0:
        piVar1[1] = iVar3;
        recovered_10008160((int)piVar1);
                    /* WARNING: Subroutine does not return */
        recovered_10008a7c(extraout_r0);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_10009280((int)DAT_10018294,(int *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_10008ba0;
      }
      DAT_10018294 = (int *)*piVar1;
    } while (DAT_10018294 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10008218();
}

#undef DAT_10018294
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bac
 */

void recovered_10008bac(undefined4 *in_r0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008a7c(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bb8
 */

undefined4 recovered_10008bb8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bc0
 */

void recovered_10008bc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10008218();
}


#undef DAT_10018060
#define DAT_10018060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008bcc
 */

int recovered_10008bcc(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;

  iVar3 = 0;
  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  piVar4 = *(int **)(*param_1 + -4);
  iVar8 = *(int *)(*param_1 + -8);
  if (piVar4 != param_3 && piVar4 != (int *)0x0) {
    pcVar7 = (char *)param_3[1];
    do {
      pcVar5 = (char *)piVar4[1];
      if (pcVar7 == (char *)0x0 || pcVar5 == (char *)0x0) {
        if (pcVar5 == pcVar7) {
LAB_10008cb8:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_10008cb8;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*piVar4 != &DAT_10018060) {
        return 0;
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != param_3 && piVar4 != (int *)0x0);
  }
  if (piVar4 != (int *)0x0) {
    iVar3 = (int)param_1 + iVar8;
  }
  return iVar3;
}

#undef DAT_10018060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cc0
 */

void recovered_10008cc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cc4
 */

undefined4 recovered_10008cc4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ccc
 */

uchar recovered_10008ccc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ce0
 */

uchar recovered_10008ce0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return '\x01';
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d20
 */

uchar recovered_10008d20(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d4c
 */

uchar recovered_10008d4c(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d68
 */

uchar recovered_10008d68(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d84
 */

uchar recovered_10008d84(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008da0
 */

uchar recovered_10008da0(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


static const unsigned char pf_literal_10008dc0_DAT_10008e90[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_10008e90
#define DAT_10008e90 (*(double *)((uintptr_t)pf_literal_10008dc0_DAT_10008e90))
static const unsigned char pf_literal_10008dc0_DAT_10008e98[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_10008e98
#define DAT_10008e98 (*(double *)((uintptr_t)pf_literal_10008dc0_DAT_10008e98))
static const unsigned char pf_literal_10008dc0_DAT_10008ea0[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_10008ea0
#define DAT_10008ea0 (*(double *)((uintptr_t)pf_literal_10008dc0_DAT_10008ea0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dc0
 */

double recovered_10008dc0(undefined4 param_1,undefined4 param_2)

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
  if (dVar3 <= DAT_10008e98) {
    dVar4 = 0.0;
    if (DAT_10008ea0 <= dVar3) {
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
  return DAT_10008e90;
}

#undef DAT_10008e90
#undef DAT_10008e98
#undef DAT_10008ea0

static const unsigned char pf_literal_10008ea8_DAT_10008f90[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_10008f90
#define DAT_10008f90 (*(double *)((uintptr_t)pf_literal_10008ea8_DAT_10008f90))
static const unsigned char pf_literal_10008ea8_DAT_10008f98[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_10008f98
#define DAT_10008f98 (*(double *)((uintptr_t)pf_literal_10008ea8_DAT_10008f98))
static const unsigned char pf_literal_10008ea8_DAT_10008fa0[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_10008fa0
#define DAT_10008fa0 (*(double *)((uintptr_t)pf_literal_10008ea8_DAT_10008fa0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ea8
 */

float recovered_10008ea8(float param_1)

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
  else if (dVar3 <= DAT_10008f98) {
    dVar4 = 0.0;
    if (DAT_10008fa0 <= dVar3) {
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
    dVar4 = DAT_10008f90;
  }
  return (float)dVar4;
}

#undef DAT_10008f90
#undef DAT_10008f98
#undef DAT_10008fa0

static const unsigned char pf_literal_10008fa8_DAT_10009078[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_10009078
#define DAT_10009078 (*(double *)((uintptr_t)pf_literal_10008fa8_DAT_10009078))
static const unsigned char pf_literal_10008fa8_DAT_10009080[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_10009080
#define DAT_10009080 (*(double *)((uintptr_t)pf_literal_10008fa8_DAT_10009080))
static const unsigned char pf_literal_10008fa8_DAT_10009088[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_10009088
#define DAT_10009088 (*(double *)((uintptr_t)pf_literal_10008fa8_DAT_10009088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fa8
 */

double recovered_10008fa8(undefined4 param_1,undefined4 param_2)

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
  if (dVar3 <= DAT_10009080) {
    dVar4 = 0.0;
    if (DAT_10009088 <= dVar3) {
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
  return DAT_10009078;
}

#undef DAT_10009078
#undef DAT_10009080
#undef DAT_10009088

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009090
 */

double recovered_10009090(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x100090ac
 */

double recovered_100090ac(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000487c(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009104
 */

ulonglong recovered_10009104(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10009170;
    }
  }
  bVar1 = false;
joined_r0x10009170:
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
 * Address: 0x1000927c
 */

ulonglong recovered_1000927c(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10009170;
    }
  }
  bVar1 = false;
joined_r0x10009170:
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


#undef DAT_10017cdc
#define DAT_10017cdc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef DAT_10018060
#define DAT_10018060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b8U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009280
 */

undefined4 recovered_10009280(int param_1,int *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
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
      recovered_10009634((uint)*pbVar10,(int *)&local_28);
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
          goto LAB_10009458;
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
LAB_10009458:
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
LAB_10009614:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_10017cdc + uVar14 * 4) * uVar17;
    puVar7 = recovered_10009634(uVar13,(int *)&local_24);
    if (puVar7 == (uint *)0x0) goto LAB_10009614;
    bVar23 = param_2 != (int *)0x0;
    if ((param_2 != (int *)0x0) && (puVar7 != (uint *)param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = (uint *)param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10009614;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10009614;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10018060) goto LAB_100095e8;
        puVar12 = (uint *)puVar12[2];
        bVar23 = puVar12 != (uint *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (uint *)0x0);
    }
    if (bVar23) goto LAB_10009614;
  }
LAB_100095e8:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10009458;
}

#undef DAT_10017cdc
#undef DAT_10018060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009634
 */

uint * recovered_10009634(uint param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ushort *puVar3;
  ushort uVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  uint *unaff_lr;

  puVar5 = (uint *)0x0;
  if ((param_1 != 0xff) && ((param_1 & 0xf) < 0xd)) {
    puVar7 = (ushort *)*param_2;
    puVar5 = (uint *)0x0;
    switch((uintptr_t)(param_1 & 0xf)) {
    case 0:
    case 3:
    case 0xb:
      unaff_lr = *(uint **)puVar7;
      *param_2 = (int)(puVar7 + 2);
      break;
    case 1:
      uVar6 = 0;
      unaff_lr = (uint *)0x0;
      puVar3 = puVar7;
      do {
        *param_2 = (int)puVar3 + 1;
        uVar4 = *puVar3;
        unaff_lr = (uint *)((uint)unaff_lr | ((int)(char)uVar4 & 0x7fU) << (uVar6 & 0xff));
        uVar6 = uVar6 + 7;
        puVar3 = (ushort *)((int)puVar3 + 1);
      } while ((char)uVar4 < 0);
      break;
    case 2:
      unaff_lr = (uint *)(uint)*puVar7;
      *param_2 = (int)(puVar7 + 1);
      break;
    case 4:
    case 0xc:
      *param_2 = (int)(puVar7 + 4);
      break;
    default:
      goto switchD_10009664_caseD_5;
    case 9:
      puVar5 = (uint *)0x0;
      uVar6 = 0;
      puVar3 = puVar7;
      do {
        *param_2 = (int)puVar3 + 1;
        bVar1 = (byte)*puVar3;
        puVar5 = (uint *)((uint)puVar5 | ((int)(char)bVar1 & 0x7fU) << (uVar6 & 0xff));
        uVar6 = uVar6 + 7;
        puVar3 = (ushort *)((int)puVar3 + 1);
      } while ((char)bVar1 < 0);
      unaff_lr = puVar5;
      if (0x3f < bVar1) {
        unaff_lr = (uint *)((uint)puVar5 | -1 << (uVar6 & 0xff));
      }
      if (0x1f < uVar6) {
        unaff_lr = puVar5;
      }
      break;
    case 10:
      cVar2 = *(char *)((int)puVar7 + 1);
      uVar4 = *puVar7;
      *param_2 = (int)(puVar7 + 1);
      unaff_lr = (uint *)(uVar4 | 0xffff0000);
      if ((uint)(int)cVar2 < 0x80000000) {
        unaff_lr = (uint *)(uint)uVar4;
      }
    }
    if ((param_1 & 0x70) != 0) {
      if ((param_1 & 0x70) != 0x10) {
        return (uint *)0x0;
      }
      unaff_lr = (uint *)((int)unaff_lr + (int)puVar7);
    }
    if (((uint)(int)(char)param_1 < 0x80000000) || (unaff_lr == (uint *)0x0)) {
      return unaff_lr;
    }
    puVar5 = (uint *)*unaff_lr;
  }
switchD_10009664_caseD_5:
  return puVar5;
}


#undef DAT_10017d10
#define DAT_10017d10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
#undef str_10017ac5
#define str_10017ac5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097d0
 */

undefined1 recovered_100097d0(byte *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  undefined1 uVar3;

  if (param_1 == (byte *)0x0 || param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_10009890;
  }
  else {
    iVar2 = recovered_10003d4c((char *)param_1,&DAT_10017d10,8);
    if (iVar2 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 0x42) && (param_1[1] == 0x4d)) {
    return 2;
  }
  if ((0xd < param_2) && (iVar2 = recovered_10003d4c((char *)param_1,str_10017ac5,9), iVar2 == 0)) {
    return 4;
  }
LAB_10009890:
  uVar1 = recovered_100098bc(param_1,param_2);
  uVar3 = 0;
  if (uVar1 != '\0') {
    uVar3 = 3;
  }
  return uVar3;
}

#undef DAT_10017d10
#undef str_10017ac5

#undef str_10017adc
#define str_10017adc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098bc
 */

uchar recovered_100098bc(byte *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  if (0x11 < param_2) {
    if (0x19 < param_2) {
      uVar3 = recovered_10003d4c((char *)(param_1 + (param_2 - 0x12)),str_10017adc,0x11);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        uVar3 = (uint)param_1[param_2 - 1];
      }
      if (bVar8 && uVar3 == 0) {
        return '\x01';
      }
    }
    bVar1 = param_1[1];
    if ((bVar1 < 2) &&
       (uVar3 = (uint)param_1[2],
       (0xfffffffc < uVar3 - 4 || 0xfffffffd < uVar3 - 0xb) || uVar3 == 0xb)) {
      sVar2 = 0;
      if (*(short *)(param_1 + 0xc) != 0) {
        sVar2 = *(short *)(param_1 + 0xe);
      }
      if (*(short *)(param_1 + 0xc) != 0 && sVar2 != 0) {
        uVar6 = (uint)*param_1;
        uVar7 = (uint)param_1[0x10];
        uVar4 = (uint)*(ushort *)(param_1 + 5);
        if (((bVar1 != 0) || (uVar4 == 0)) &&
           ((bVar1 != 1 ||
            (((uVar4 != 0 && (uVar5 = param_1[7] - 0xf, uVar5 < 0x12)) &&
             ((1 << (uVar5 & 0xff) & 0x20203U) != 0)))))) {
          if (7 < uVar3) {
            uVar3 = uVar3 - 8;
          }
          if (uVar3 == 3) {
            if (uVar7 == 0x10 || uVar7 == 8) goto LAB_10009a40;
          }
          else if (uVar3 == 2) {
            if ((uVar7 - 0xf < 0x12) && ((1 << (uVar7 - 0xf & 0xff) & 0x20203U) != 0))
            goto LAB_10009a40;
          }
          else if ((uVar3 != 1) || ((uVar7 == 8 || (uVar7 == 0x10)))) {
LAB_10009a40:
            if (bVar1 == 1) {
              uVar6 = (param_1[7] + 7 >> 3) * uVar4 + uVar6;
            }
            return uVar6 + 0x12 < param_2;
          }
        }
      }
    }
  }
  return '\0';
}

#undef str_10017adc

static const unsigned char pf_literal_10009a68_DAT_1000aab8[] __attribute__((aligned(16)))={0x88,0xe0,0x00,0x00};
#undef DAT_1000aab8
#define DAT_1000aab8 (*(int *)((uintptr_t)pf_literal_10009a68_DAT_1000aab8))
static const unsigned char pf_literal_10009a68_DAT_1000aae0[] __attribute__((aligned(16)))={0x38,0x21,0x00,0x00};
#undef DAT_1000aae0
#define DAT_1000aae0 (*(int *)((uintptr_t)pf_literal_10009a68_DAT_1000aae0))
#undef DAT_10017ad2
#define DAT_10017ad2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_10017ad7
#define DAT_10017ad7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_10017aee
#define DAT_10017aee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x146U)))
#undef DAT_10017af3
#define DAT_10017af3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef DAT_10017af8
#define DAT_10017af8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef DAT_10017afd
#define DAT_10017afd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155U)))
#undef DAT_10017b02
#define DAT_10017b02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#undef DAT_10017b07
#define DAT_10017b07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef DAT_10017b0c
#define DAT_10017b0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x164U)))
#undef DAT_10017d10
#define DAT_10017d10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368U)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef str_10017ac5
#define str_10017ac5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#define local_11c (*(undefined4 *)(pf_stack_frame + 324))
#define local_118 (*(void * *)(pf_stack_frame + 328))
#define local_114 (*(int *)(pf_stack_frame + 332))
#define local_110 (*(undefined4 *)(pf_stack_frame + 336))
#define local_10c (*(ulonglong ****** *)(pf_stack_frame + 340))
#define local_108 (*(ulonglong ****** *)(pf_stack_frame + 344))
#define local_104 (*(uint *)(pf_stack_frame + 348))
#define local_100 (*(uint *)(pf_stack_frame + 352))
#define local_fc (*(uint *)(pf_stack_frame + 356))
#define local_f8 (*(uint *)(pf_stack_frame + 360))
#define local_f4 (*(void * *)(pf_stack_frame + 364))
#define local_f0 (*(undefined4 *)(pf_stack_frame + 368))
#define local_ec (*(undefined4 *)(pf_stack_frame + 372))
#define local_e8 (*(ulonglong ****** *)(pf_stack_frame + 376))
#define local_e4 (*(uint *)(pf_stack_frame + 380))
#define local_e0 (*(uint *)(pf_stack_frame + 384))
#define local_dc (*(ulonglong ****** *)(pf_stack_frame + 388))
#define local_d8 (*(uint *)(pf_stack_frame + 392))
#define local_d4 (*(uint *)(pf_stack_frame + 396))
#define local_d0 (*(ulonglong * *)(pf_stack_frame + 400))
#define local_cc (*(int *)(pf_stack_frame + 404))
#define local_c8 (*(ulonglong ******* *)(pf_stack_frame + 408))
#define local_c4 (*(ulonglong ******* *)(pf_stack_frame + 412))
#define local_bc (*(ulonglong ****** *)(pf_stack_frame + 420))
#define local_b8 (*(uint *)(pf_stack_frame + 424))
#define local_b4 (*(uint *)(pf_stack_frame + 428))
#define local_b0 (*(uint *)(pf_stack_frame + 432))
#define local_ac (*(undefined4 *)(pf_stack_frame + 436))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 440))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 444))
#define local_9c (*(ulonglong ******* *)(pf_stack_frame + 452))
#define local_98 (*(ulonglong ******* *)(pf_stack_frame + 456))
#define local_90 (*(undefined4 *)(pf_stack_frame + 464))
#define local_7c (*(undefined4 *)(pf_stack_frame + 484))
#define local_78 (*(int *)(pf_stack_frame + 488))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 492))
#define local_70 (*(int *)(pf_stack_frame + 496))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 500))
#define auStackY_250 (*(undefined1 (*)[592])(pf_stack_frame + 16))
#define ppppppuStack_160 (*(ulonglong ****** *)(pf_stack_frame + 256))
#define pppppppuStack_c0 (*(ulonglong ******* *)(pf_stack_frame + 416))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 460))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 504))
#define local_1b8 (*(uint *)(pf_stack_frame + 168))
#define local_1b4 (*(uint *)(pf_stack_frame + 172))
#define local_1a0 (*(int *)(pf_stack_frame + 192))
#define local_194 (*(uint *)(pf_stack_frame + 204))
#define local_190 (*(uint *)(pf_stack_frame + 208))
#define local_18c (*(int *)(pf_stack_frame + 212))
#define local_180 (*(uint *)(pf_stack_frame + 224))
#define local_17c (*(uint *)(pf_stack_frame + 228))
#define local_170 (*(ulonglong * *)(pf_stack_frame + 240))
#define local_164 (*(ulonglong ******* *)(pf_stack_frame + 252))
#define local_15c (*(uint * *)(pf_stack_frame + 260))
#define local_158 (*(uint * *)(pf_stack_frame + 264))
#define local_154 (*(ulonglong ****** *)(pf_stack_frame + 268))
#define local_150 (*(void ** *)(pf_stack_frame + 272))
#define local_14c (*(ulonglong ******* *)(pf_stack_frame + 276))
#define local_148 (*(undefined4 *)(pf_stack_frame + 280))
#define local_144 (*(ulonglong ** *)(pf_stack_frame + 284))
#define local_140 (*(uint * *)(pf_stack_frame + 288))
#define local_13c (*(ulonglong ****** *)(pf_stack_frame + 292))
#define local_138 (*(uint * *)(pf_stack_frame + 296))
#define local_134 (*(undefined4 *)(pf_stack_frame + 300))
#define local_130 (*(ulonglong ***** *)(pf_stack_frame + 304))
#define local_12c (*(uint * *)(pf_stack_frame + 308))
#define local_128 (*(undefined4 *)(pf_stack_frame + 312))
#define local_124 (*(void * *)(pf_stack_frame + 316))
#define local_120 (*(undefined4 *)(pf_stack_frame + 320))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a68
 */

/* WARNING: Type propagation algorithm not settling */

ulonglong * recovered_10009a68(byte *param_1,ulonglong *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint128 auVar2;
  short sVar3;
  ulonglong ******ppppppuVar4;
  ulonglong *****pppppuVar5;
  ulonglong *****pppppuVar6;
  ulonglong *****pppppuVar7;
  ulonglong *****pppppuVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  uchar uVar12;
  ulonglong *******pppppppuVar13;
  byte *pbVar14;
  ulonglong *******pppppppuVar15;
  int *piVar16;
  ulonglong ******ppppppuVar17;
  ulonglong *puVar18;
  int iVar19;
  uint uVar20;
  ulonglong *******pppppppuVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  uint **ppuVar25;
  ushort *puVar26;
  byte *pbVar27;
  uint extraout_r2 = 0;
  uint uVar28;
  ulonglong *******pppppppuVar29;
  byte *pbVar30;
  uint *puVar31;
  uint extraout_r2_00 = 0;
  ulonglong *******pppppppuVar32;
  ulonglong ******ppppppuVar33;
  void *pvVar34;
  uint uVar35;
  int iVar36;
  byte bVar37;
  ulonglong *puVar38;
  ulonglong *******pppppppuVar39;
  uint uVar40;
  ulonglong *******pppppppuVar41;
  ulonglong ******ppppppuVar42;
  ulonglong *******pppppppuVar43;
  uint uVar44;
  undefined1 *puVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  bool bVar50;
  bool bVar51;

  pppppppuVar41 = (ulonglong *******)(param_3 + 2);
  local_190 = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  recovered_10008354(*pppppppuVar41);
  param_3[4] = 0;
  param_3[3] = 0;
  *pppppppuVar41 = (ulonglong ******)0x0;
  recovered_10008354((void *)0x0);
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x1c4U);
  local_70 = DAT_1000aae0 + 0x10009af4;
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_250 + 0x80;
  recovered_100089f8(&uStack_94);
  if (param_1 == (byte *)0x0 || param_2 == (ulonglong *)0x0) goto LAB_10009b0c;
  if (param_2 < &SupervisorCall) {
    if ((ulonglong *)0x1 < param_2) goto LAB_10009b6c;
    goto LAB_10009bb0;
  }
  local_90 = 0xffffffff;
  iVar22 = recovered_10003d4c((char *)param_1,&DAT_10017d10,8);
  if (iVar22 != 0) {
LAB_10009b6c:
    bVar37 = *param_1;
    bVar50 = bVar37 == 0x42;
    if (bVar50) {
      bVar37 = param_1[1];
    }
    if (!bVar50 || bVar37 != 0x4d) {
      if ((ulonglong *)0xd < param_2) {
        local_90 = 0xffffffff;
        iVar22 = recovered_10003d4c((char *)param_1,str_10017ac5,9);
        if (iVar22 == 0) {
          param_3[1] = 0;
          *param_3 = 0;
          param_3[3] = 0;
          recovered_10008354((void *)param_3[2]);
          param_3[4] = 0;
          param_3[3] = 0;
          param_3[2] = 0;
          recovered_10008354((void *)0x0);
          if (param_2 < (ulonglong *)0x1e) goto LAB_10009b0c;
          local_90 = 0xffffffff;
          uVar48 = recovered_10003d4c((char *)param_1,str_10017ac5,9);
          bVar50 = uVar48 != 0;
          if (!bVar50) {
            uVar48 = (uint)param_1[0xd];
          }
          if (bVar50 || uVar48 != 0) goto LAB_10009b0c;
          local_144 = (ulonglong **)0x0;
          local_148 = (uint *)0x0;
          local_14c = (ulonglong *******)0x0;
          local_150 = (void **)0x0;
          local_90 = 9;
          iVar22 = recovered_10003d4c((char *)(param_1 + 9),&DAT_10017aee,4);
          if (iVar22 == 0) {
            bVar50 = false;
            local_154 = (ulonglong ******)&UndefinedInstruction;
            local_158 = (uint *)0x0;
LAB_1000af8c:
            local_1b8 = 0;
            uVar48 = *(uint *)(param_1 + 0xe);
            uVar49 = *(uint *)(param_1 + 0x12);
            uVar44 = *(uint *)(param_1 + 0x16);
            local_d0 = (ulonglong *)0x1a;
            local_164 = (ulonglong *******)
                        (uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 |
                         (uVar48 >> 0x10 & 0xff) << 8 | uVar48 >> 0x18);
            ppppppuStack_160 =
                 (ulonglong ******)
                 (uVar49 << 0x18 | (uVar49 >> 8 & 0xff) << 0x10 | (uVar49 >> 0x10 & 0xff) << 8 |
                 uVar49 >> 0x18);
            local_15c = (uint *)(uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 |
                                 (uVar44 >> 0x10 & 0xff) << 8 | uVar44 >> 0x18);
            local_cc = 0;
            if ((local_164 != (ulonglong *******)0x0 && ppppppuStack_160 != (ulonglong ******)0x0)
               && (local_15c < (uint *)0x3)) {
              if (bVar50) {
                uVar48 = *(uint *)(param_1 + 0x1a);
                local_d0 = (ulonglong *)0x1e;
                uVar48 = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 |
                         (uVar48 >> 0x10 & 0xff) << 8 | uVar48 >> 0x18;
                local_cc = 0;
                if ((uVar48 != 0 && uVar48 != 0x96) && (uVar48 != 100)) goto LAB_1000afd0;
              }
              local_cc = 0;
              local_90 = 10;
              bVar50 = recovered_10012b68((int)param_1,(uint)param_2,(uint *)&local_d0,
                                          (int)&local_164);
              ppppppuVar17 = local_154;
              local_1b8 = 0;
              if (bVar50) {
                local_d4 = 0;
                local_d8 = 0;
                local_dc = (ulonglong ******)0x0;
                iVar22 = local_cc;
                puVar38 = local_d0;
                while( true ) {
                  ppppppuVar33 = ppppppuStack_160;
                  pppppppuVar15 = local_164;
                  if (ppppppuVar17 == (ulonglong ******)&UndefinedInstruction) {
                    bVar50 = (uint)(puVar38 <= param_2) <= (uint)-iVar22;
                    uVar48 = -(iVar22 + (uint)(puVar38 > param_2));
                    if (!bVar50) {
                      uVar48 = (int)param_2 - (int)puVar38;
                    }
                    if (bVar50 || uVar48 < 4) goto LAB_1000b840;
                    uVar48 = *(uint *)(param_1 + (int)puVar38);
                    local_c8 = (ulonglong *******)
                               (uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 |
                                (uVar48 >> 0x10 & 0xff) << 8 | uVar48 >> 0x18);
                    local_c4 = (ulonglong *******)0x0;
                  }
                  else {
                    bVar50 = (uint)(puVar38 <= param_2) <= (uint)-iVar22;
                    uVar48 = -(iVar22 + (uint)(puVar38 > param_2));
                    if (!bVar50) {
                      uVar48 = (int)param_2 - (int)puVar38;
                    }
                    if (bVar50 || uVar48 < 8) goto LAB_1000b840;
                    uVar48 = *(uint *)(param_1 + (int)puVar38);
                    uVar49 = *(uint *)((int)(param_1 + (int)puVar38) + 4);
                    local_c4 = (ulonglong *******)
                               (uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 |
                                (uVar48 >> 0x10 & 0xff) << 8 | uVar48 >> 0x18);
                    local_c8 = (ulonglong *******)
                               (uVar49 << 0x18 | (uVar49 >> 8 & 0xff) << 0x10 |
                                (uVar49 >> 0x10 & 0xff) << 8 | uVar49 >> 0x18);
                  }
                  bVar50 = CARRY4((uint)puVar38,(uint)ppppppuVar17);
                  puVar38 = (ulonglong *)((int)puVar38 + (int)ppppppuVar17);
                  iVar22 = iVar22 + (uint)bVar50;
                  if (local_c8 == (ulonglong *******)0x0 && local_c4 == (ulonglong *******)0x0)
                  break;
                  if (local_c4 != (ulonglong *******)0x0 || local_c4 < (uint)(param_2 <= local_c8))
                  goto LAB_1000b840;
                  local_90 = 0xb;
                  recovered_10012e30((int *)&local_dc,&local_c8);
                }
                if ((local_d8 != 0) &&
                   ((local_164 == (ulonglong *******)0x0 ||
                    ((int)(ZEXT48(ppppppuStack_160) * ZEXT48(local_164) >> 0x20) == 0)))) {
                  local_1b8 = 0;
                  if (0x3fffffff < (uint)((int)ppppppuStack_160 * (int)local_164))
                  goto LAB_1000b844;
                  local_90 = 0xc;
                  local_c8 = (ulonglong *******)((uint)local_c8 & 0xffffff00);
                  recovered_10012f20((int *)&local_e8,(int)ppppppuStack_160 * (int)local_164 * 4,
                                     (undefined1 *)&local_c8);
                  if (local_d8 == 0) goto LAB_1000bac0;
                  uVar48 = local_d8;
                  goto LAB_1000b8d4;
                }
LAB_1000b840:
                local_1b8 = 0;
                goto LAB_1000b844;
              }
            }
            goto LAB_1000afd0;
          }
          local_1b8 = 0;
          pppppppuVar15 = (ulonglong *******)0x0;
          if ((((param_1[9] == 0x76) && (param_1[10] - 0x30U < 10)) && (param_1[0xb] - 0x30U < 10)) &&
             (param_1[0xc] - 0x30U < 10)) {
            local_158 = (uint *)((short)(ushort)param_1[10] * 100 + (uint)param_1[0xb] * 10 +
                                 (uint)param_1[0xc] + -0x14d0);
            local_154 = (ulonglong ******)&UndefinedInstruction;
            bVar50 = (uint *)0x3 < local_158;
            if ((uint *)0xa < local_158) {
              local_154 = (ulonglong ******)&SupervisorCall;
            }
            goto LAB_1000af8c;
          }
          goto LAB_1000ae88;
        }
      }
LAB_10009bb0:
      local_90 = 0xffffffff;
      uVar12 = recovered_100098bc(param_1,(uint)param_2);
      if (uVar12 == '\0') goto LAB_10009b0c;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      recovered_10008354((void *)param_3[2]);
      param_3[4] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      recovered_10008354((void *)0x0);
      local_90 = 0xffffffff;
      uVar12 = recovered_100098bc(param_1,(uint)param_2);
      if (uVar12 == '\0') goto LAB_10009b0c;
      uVar48 = (uint)param_1[2];
      local_e8 = (ulonglong ******)(uint)*(ushort *)(param_1 + 3);
      local_fc = (uint)param_1[0x10];
      local_100 = (uint)param_1[0x11];
      puVar38 = (ulonglong *)(*param_1 + 0x12);
      local_f4 = (void *)(uint)*(ushort *)(param_1 + 5);
      local_d0 = (ulonglong *)(uint)*(ushort *)(param_1 + 0xc);
      local_f8 = (uint)*(ushort *)(param_1 + 0xe);
      local_104 = uVar48;
      if (7 < uVar48) {
        local_104 = uVar48 - 8;
      }
      uVar49 = (uint)param_1[7];
      pppppppuStack_c0 = (ulonglong *******)0x0;
      local_c4 = (ulonglong *******)0x0;
      local_c8 = (ulonglong *******)0x0;
      if (param_1[1] == 1) {
        local_1b8 = local_190;
        if (puVar38 <= param_2) {
          uVar44 = uVar49 + 7 >> 3;
          uVar46 = uVar44 * (int)local_f4;
          if (uVar46 <= (uint)((int)param_2 - (int)puVar38)) {
            pppppppuVar15 = (ulonglong *******)((int)local_f4 << 2);
            if (local_f4 == (void *)0x0) {
              pppppppuVar43 = (ulonglong *******)0x0;
            }
            else {
              local_90 = 4;
              pppppppuVar13 = recovered_100082fc((uint)pppppppuVar15);
              pppppppuVar43 = local_c4;
              if (local_c4 != (ulonglong *******)0x0) {
                bVar50 = local_c4 == (ulonglong *******)&DataAbort;
                pppppppuVar21 = (ulonglong *******)0x0;
                uVar28 = extraout_r2;
                if ((ulonglong *******)0xf < local_c4) {
                  uVar28 = (int)pppppppuVar13 - (int)local_c8;
                  bVar50 = uVar28 == 0xf;
                }
                if (((ulonglong *******)0xf < local_c4 && 0xe < uVar28) && !bVar50) {
                  pppppppuVar21 = (ulonglong *******)((uint)local_c4 & 0xfffffff0);
                  pppppppuVar29 = pppppppuVar21;
                  pppppppuVar32 = local_c8;
                  pppppppuVar39 = pppppppuVar13;
                  do {
                    ppppppuVar17 = *pppppppuVar32;
                    ppppppuVar33 = pppppppuVar32[1];
                    ppppppuVar42 = pppppppuVar32[2];
                    ppppppuVar4 = pppppppuVar32[3];
                    pppppppuVar32 = pppppppuVar32 + 4;
                    pppppppuVar29 = pppppppuVar29 + -4;
                    *pppppppuVar39 = ppppppuVar17;
                    pppppppuVar39[1] = ppppppuVar33;
                    pppppppuVar39[2] = ppppppuVar42;
                    pppppppuVar39[3] = ppppppuVar4;
                    pppppppuVar39 = pppppppuVar39 + 4;
                  } while (pppppppuVar29 != (ulonglong *******)0x0);
                  if (local_c4 == pppppppuVar21) goto LAB_10009d50;
                }
                iVar22 = (int)local_c4 - (int)pppppppuVar21;
                puVar45 = (undefined1 *)((int)pppppppuVar13 + (int)pppppppuVar21);
                puVar23 = (undefined1 *)((int)local_c8 + (int)pppppppuVar21);
                do {
                  iVar22 = iVar22 + -1;
                  *puVar45 = *puVar23;
                  puVar45 = puVar45 + 1;
                  puVar23 = puVar23 + 1;
                } while (iVar22 != 0);
              }
LAB_10009d50:
              recovered_10008354(local_c8);
              pppppppuStack_c0 = pppppppuVar15;
              local_c8 = pppppppuVar13;
            }
            while (pppppppuVar43 < pppppppuVar15) {
              *(undefined1 *)((int)local_c8 + (int)pppppppuVar43) = 0xff;
              pppppppuVar43 = (ulonglong *******)((int)local_c4 + 1);
              local_c4 = pppppppuVar43;
            }
            if (local_f4 != (void *)0x0) {
              pvVar34 = (void *)0x0;
              iVar22 = 3;
              puVar26 = (ushort *)(param_1 + (int)puVar38);
              do {
                if (uVar49 == 8) {
                  uVar10 = *puVar26;
                  *(byte *)((int)local_c8 + iVar22 + -3) = (byte)uVar10;
                  *(byte *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 1) = (byte)uVar10;
                  *(byte *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 2) = (byte)*puVar26;
LAB_1000a9e8:
                  bVar37 = 0xff;
                }
                else {
                  if (uVar49 - 0xf < 2) {
                    uVar11 = *puVar26;
                    uVar10 = *puVar26;
                    *(char *)((int)local_c8 + iVar22 + -3) =
                         (char)((uint)((short)((short)((*(byte *)((int)puVar26 + 1) & 0x7f) >> 2) *
                                              0xff) * 0x2109) >> 0x12);
                    *(char *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 2) =
                         (char)((uint)((short)(((byte)uVar11 & 0x1f) * 0xff) * 0x2109) >> 0x12);
                    *(char *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 1) =
                         (char)((uint)((short)((short)((uVar10 & 0x3ff) >> 5) * 0xff) * 0x2109) >>
                               0x12);
                    goto LAB_1000a9e8;
                  }
                  if (uVar49 == 0x20) {
                    *(byte *)((int)local_c8 + iVar22 + -3) = (byte)puVar26[1];
                    *(byte *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 1) = *(byte *)((int)puVar26 + 1);
                    *(byte *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 2) = (byte)*puVar26;
                    bVar37 = *(byte *)((int)puVar26 + 3);
                  }
                  else {
                    if (uVar49 != 0x18) {
                      local_1b8 = 0;
                      goto LAB_1000ae80;
                    }
                    *(byte *)((int)local_c8 + iVar22 + -3) = (byte)puVar26[1];
                    bVar37 = 0xff;
                    *(byte *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 1) = *(byte *)((int)puVar26 + 1);
                    *(byte *)((int)local_c8 + (int)(uintptr_t)pvVar34 * 4 + 2) = (byte)*puVar26;
                  }
                }
                *(byte *)((int)local_c8 + iVar22) = bVar37;
                puVar26 = (ushort *)((int)puVar26 + uVar44);
                iVar22 = iVar22 + 4;
                pvVar34 = (void *)((int)pvVar34 + 1);
              } while (pvVar34 < local_f4);
            }
            puVar38 = (ulonglong *)(uVar46 + (int)puVar38);
            goto joined_r0x1000a168;
          }
        }
      }
      else {
joined_r0x1000a168:
        if ((local_d0 == (ulonglong *)0x0) ||
           (local_1b8 = 0, (int)((ulonglong)local_f8 * ZEXT48(local_d0) >> 0x20) == 0)) {
          local_108 = (ulonglong ******)((int)local_d0 * local_f8);
          local_1b8 = 0;
          if (local_108 < (ulonglong ******)0x40000000) {
            local_d4 = 0;
            local_d8 = 0;
            local_dc = (ulonglong ******)0x0;
            if (local_108 != (ulonglong ******)0x0) {
              uVar49 = (int)local_108 * 4;
              local_90 = 5;
              ppppppuVar17 = recovered_100082fc(uVar49);
              uVar44 = local_d8;
              if (local_d8 != 0) {
                uVar28 = 0;
                uVar46 = extraout_r2_00;
                if (0xf < local_d8) {
                  uVar46 = (int)ppppppuVar17 - (int)local_dc;
                }
                if (0xf < local_d8 && 0xf < uVar46) {
                  uVar28 = local_d8 & 0xfffffff0;
                  uVar46 = uVar28;
                  ppppppuVar33 = local_dc;
                  ppppppuVar42 = ppppppuVar17;
                  do {
                    pppppuVar5 = *ppppppuVar33;
                    pppppuVar6 = ppppppuVar33[1];
                    pppppuVar7 = ppppppuVar33[2];
                    pppppuVar8 = ppppppuVar33[3];
                    ppppppuVar33 = ppppppuVar33 + 4;
                    uVar46 = uVar46 - 0x10;
                    *ppppppuVar42 = pppppuVar5;
                    ppppppuVar42[1] = pppppuVar6;
                    ppppppuVar42[2] = pppppuVar7;
                    ppppppuVar42[3] = pppppuVar8;
                    ppppppuVar42 = ppppppuVar42 + 4;
                  } while (uVar46 != 0);
                  if (local_d8 == uVar28) goto LAB_1000abac;
                }
                iVar22 = local_d8 - uVar28;
                puVar45 = (undefined1 *)((int)ppppppuVar17 + uVar28);
                puVar23 = (undefined1 *)((int)local_dc + uVar28);
                do {
                  iVar22 = iVar22 + -1;
                  *puVar45 = *puVar23;
                  puVar45 = puVar45 + 1;
                  puVar23 = puVar23 + 1;
                } while (iVar22 != 0);
              }
LAB_1000abac:
              recovered_10008354(local_dc);
              while( true ) {
                local_dc = ppppppuVar17;
                local_d4 = uVar49;
                if (uVar49 <= uVar44) break;
                *(undefined1 *)((int)ppppppuVar17 + uVar44) = 0;
                uVar44 = local_d8 + 1;
                local_d8 = uVar44;
              }
            }
            local_10c = (ulonglong ******)0x0;
            local_13c = (ulonglong ******)&local_dc;
            local_140 = &local_f8;
            local_144 = &local_d0;
            local_148 = &local_100;
            local_14c = (ulonglong *******)&local_c8;
            local_150 = &local_f4;
            local_154 = (ulonglong ******)&local_e8;
            local_158 = &local_fc;
            local_15c = &local_104;
            uVar49 = local_fc + 7 >> 3;
            ppppppuStack_160 = (ulonglong ******)&local_108;
            local_164 = &local_10c;
            if (uVar48 < 8) {
              if (local_108 == (ulonglong ******)0x0) {
                local_1b8 = 0;
                if (puVar38 <= param_2) goto LAB_1000ae18;
              }
              else {
                local_1b8 = 0;
                if ((((int)((ulonglong)uVar49 * ZEXT48(local_108) >> 0x20) == 0) &&
                    (puVar38 <= param_2)) &&
                   ((int)local_108 * uVar49 <= (uint)((int)param_2 - (int)puVar38))) {
                  pbVar27 = param_1 + (int)puVar38;
                  ppppppuVar17 = (ulonglong ******)0x0;
                  do {
                    local_90 = 6;
                    iVar22 = recovered_1001290c(&local_164,pbVar27);
                    if (iVar22 == 0) {
                      local_1b8 = 0;
                      goto LAB_1000ae6c;
                    }
                    ppppppuVar17 = (ulonglong ******)((int)ppppppuVar17 + 1);
                    pbVar27 = pbVar27 + uVar49;
                  } while (ppppppuVar17 < local_108);
                  goto LAB_1000ae18;
                }
              }
            }
            else {
              if (local_108 != (ulonglong ******)0x0) {
                do {
                  local_1b8 = 0;
                  if (param_2 <= puVar38) goto LAB_1000ae6c;
                  iVar22 = ((int)(char)param_1[(int)puVar38] & 0x7fU) + 1;
                  puVar18 = (ulonglong *)((int)puVar38 + 1);
                  if ((char)param_1[(int)puVar38] < 0) {
                    if ((uint)((int)param_2 - (int)puVar18) < uVar49) goto LAB_1000ae6c;
                    puVar38 = (ulonglong *)((int)puVar18 + uVar49);
                    do {
                      local_90 = 7;
                      iVar19 = recovered_1001290c(&local_164,param_1 + (int)puVar18);
                      local_1b8 = 0;
                      if (iVar19 == 0) goto LAB_1000ae6c;
                      iVar22 = iVar22 + -1;
                    } while (iVar22 != 0);
                  }
                  else {
                    uVar48 = (int)param_2 + (-1 - (int)puVar38);
                    puVar38 = puVar18;
                    do {
                      local_1b8 = 0;
                      if ((param_2 < puVar38) || (uVar48 < uVar49)) goto LAB_1000ae6c;
                      local_90 = 8;
                      iVar19 = recovered_1001290c(&local_164,param_1 + (int)puVar38);
                      local_1b8 = 0;
                      if (iVar19 == 0) goto LAB_1000ae6c;
                      iVar22 = iVar22 + -1;
                      uVar48 = uVar48 - uVar49;
                      puVar38 = (ulonglong *)((int)puVar38 + uVar49);
                    } while (iVar22 != 0);
                  }
                } while (local_10c < local_108);
              }
LAB_1000ae18:
              local_1b8 = 1;
              param_3[1] = local_f8;
              *param_3 = (uint)local_d0;
              if (pppppppuVar41 != &local_dc) {
                param_3[3] = 0;
                recovered_10008354((void *)param_3[2]);
                param_3[2] = (uint)local_dc;
                param_3[3] = local_d8;
                param_3[4] = local_d4;
                local_d4 = 0;
                local_dc = (ulonglong ******)0x0;
              }
            }
LAB_1000ae6c:
            local_d8 = 0;
            recovered_10008354(local_dc);
          }
        }
      }
LAB_1000ae80:
      local_c4 = (ulonglong *******)0x0;
      pppppppuVar15 = local_c8;
      goto LAB_1000ae88;
    }
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    recovered_10008354((void *)param_3[2]);
    param_3[4] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    recovered_10008354((void *)0x0);
    if (param_2 < (ulonglong *)0x1a) goto LAB_10009b0c;
    bVar37 = *param_1;
    bVar50 = bVar37 != 0x42;
    if (!bVar50) {
      bVar37 = param_1[1];
    }
    if (bVar50 || bVar37 != 0x4d) goto LAB_10009b0c;
    uVar48 = *(uint *)(param_1 + 0xe);
    puVar38 = *(ulonglong **)(param_1 + 10);
    if ((uVar48 != 0xc) && (uVar48 < 0x28)) goto LAB_10009b0c;
    if (uVar48 == 0xc) {
      uVar49 = (uint)*(ushort *)(param_1 + 0x12);
      local_170 = (ulonglong *)0x1a;
      uVar46 = 0;
      uVar10 = *(ushort *)(param_1 + 0x18);
      iVar22 = 0;
      sVar3 = *(short *)(param_1 + 0x16);
      uVar44 = (uint)*(ushort *)(param_1 + 0x14);
      local_17c = 0;
    }
    else {
      puVar18 = (ulonglong *)(uVar48 + 0xe);
      if (((param_2 < puVar18) || (uVar49 = *(uint *)(param_1 + 0x12), (int)uVar49 < 1)) ||
         (local_17c = *(uint *)(param_1 + 0x16), local_17c == 0)) goto LAB_10009b0c;
      iVar22 = *(int *)(param_1 + 0x1e);
      sVar3 = *(short *)(param_1 + 0x1a);
      uVar44 = local_17c;
      if ((int)local_17c < 0) {
        uVar44 = -local_17c;
      }
      uVar46 = *(uint *)(param_1 + 0x2e);
      uVar10 = *(ushort *)(param_1 + 0x1c);
      if (uVar48 == 0x28) {
        if (iVar22 != 6) {
          local_170 = (ulonglong *)0x36;
        }
        if (iVar22 == 6 || iVar22 == 3) {
          iVar19 = 0xc;
          if (iVar22 == 6) {
            iVar19 = 0x10;
          }
          puVar18 = (ulonglong *)(iVar19 + 0x36);
          goto LAB_1000af40;
        }
      }
      else {
LAB_1000af40:
        local_170 = puVar18;
      }
      local_17c = local_17c >> 0x1f;
    }
    if (((sVar3 != 1) || (uVar28 = (uint)uVar10, uVar49 == 0)) ||
       (uVar44 == 0 || param_2 <= puVar38)) goto LAB_10009b0c;
    if (iVar22 == 0) {
      uVar47 = 0;
      local_194 = 0;
      uVar40 = 0;
      local_190 = 0;
    }
    else {
      if (iVar22 != 6 && iVar22 != 3) goto LAB_10009b0c;
      if (uVar48 < 0x34) {
        puVar18 = (ulonglong *)0x42;
        if (iVar22 == 6) {
          puVar18 = (ulonglong *)0x46;
        }
        if (param_2 < puVar18) goto LAB_10009b0c;
        uVar47 = *(uint *)(param_1 + 0x36);
        local_194 = *(uint *)(param_1 + 0x3a);
        uVar40 = *(uint *)(param_1 + 0x3e);
        if (iVar22 == 6) {
          local_190 = *(uint *)(param_1 + 0x42);
        }
      }
      else {
        uVar47 = *(uint *)(param_1 + 0x36);
        local_194 = *(uint *)(param_1 + 0x3a);
        uVar40 = *(uint *)(param_1 + 0x3e);
        if (0x37 < uVar48) {
          local_190 = *(uint *)(param_1 + 0x42);
        }
      }
    }
    local_15c = (uint *)0x0;
    ppppppuStack_160 = (ulonglong ******)0x0;
    local_164 = (ulonglong *******)0x0;
    if (((uVar28 == 0x10 && uVar47 == 0) && local_194 == 0) && uVar40 == 0) {
      uVar47 = 0x7c00;
      local_194 = 0x3e0;
      uVar40 = 0x1f;
    }
    if ((uVar28 == 0x20 && uVar47 == 0) && (local_194 == 0 && uVar40 == 0)) {
      uVar40 = 0xff;
      local_190 = 0xff000000;
      local_194 = 0xff00;
      uVar47 = 0xff0000;
LAB_1000b464:
      local_1b8 = 0;
      if (((((int)((ulonglong)uVar28 * (ulonglong)uVar49 >> 0x20) == 0) &&
           ((uVar48 = uVar49 * uVar28 + 0x1f >> 3 & 0xfffffffc, uVar48 != 0 &&
            ((int)((ulonglong)uVar44 * (ulonglong)uVar48 >> 0x20) == 0)))) &&
          (uVar48 * uVar44 <= (uint)((int)param_2 - (int)puVar38))) &&
         (((int)((ulonglong)uVar44 * (ulonglong)uVar49 >> 0x20) == 0 &&
          (uVar49 * uVar44 < 0x40000000)))) {
        local_90 = 2;
        recovered_1001279c((int *)&local_c8,uVar49 * (uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 4);
        pbVar27 = param_1 + (int)puVar38;
        local_1a0 = 0;
        local_1b8 = 0;
        local_1b4 = 0;
        bVar37 = 0;
        do {
          iVar19 = 2;
          iVar22 = 0;
          uVar35 = 0;
          uVar46 = local_1b4;
          if (local_17c == 0) {
            uVar46 = uVar44 + ~local_1b4;
          }
          iVar24 = uVar46 * uVar48;
          iVar36 = local_1a0;
          do {
            pppppppuVar15 = local_c8;
            puVar45 = (undefined1 *)((int)local_c8 + iVar36);
            switch((uintptr_t)(uVar28)) {
            case 1:
              uVar46 = pbVar27[(uVar35 >> 3) + iVar24] >> (~uVar35 & 7) & 1;
              break;
            default:
              if (uVar28 == 0x10) {
                uVar46 = (uint)*(ushort *)(pbVar27 + iVar22 + iVar24);
              }
              else {
                uVar46 = *(uint *)(pbVar27 + iVar22 + iVar24);
              }
              uVar20 = recovered_10012884(uVar46,uVar47);
              *puVar45 = (char)uVar20;
              uVar20 = recovered_10012884(uVar46,local_194);
              iVar9 = (uintptr_t)uVar35 * 4 + local_1a0;
              *(char *)((int)pppppppuVar15 + iVar9 + 1) = (char)uVar20;
              uVar20 = recovered_10012884(uVar46,uVar40);
              *(char *)((int)pppppppuVar15 + iVar9 + 2) = (char)uVar20;
              if (local_190 == 0) {
                uVar46 = 0xff;
              }
              else {
                uVar46 = recovered_10012884(uVar46,local_190);
                uVar46 = uVar46 & 0xff;
              }
              puVar45[3] = (char)uVar46;
              bVar37 = bVar37 | uVar46 != 0;
              goto LAB_1000b620;
            case 4:
              uVar46 = pbVar27[(uVar35 >> 1) + iVar24] & 0xf;
              if ((uVar35 & 1) == 0) {
                uVar46 = (uint)(pbVar27[(uVar35 >> 1) + iVar24] >> 4);
              }
              break;
            case 8:
              uVar46 = (uint)pbVar27[uVar35 + iVar24];
              break;
            case 0x18:
              iVar9 = (uintptr_t)uVar35 * 4 + local_1a0;
              *(byte *)((int)local_c8 + iVar36) = pbVar27[iVar19 + iVar24];
              *(byte *)((int)local_c8 + iVar9 + 1) = pbVar27[(uintptr_t)uVar35 * 3 + iVar24 + 1];
              *(byte *)((int)local_c8 + iVar9 + 2) = (pbVar27 + iVar19 + iVar24)[-2];
              ((byte *)((int)local_c8 + iVar36))[3] = 0xff;
              goto LAB_1000b620;
            }
            if (ppppppuStack_160 <= (uVar46 << 2 | 3)) goto LAB_1000bc08;
            local_90 = 3;
            recovered_10002f90(puVar45,local_164 + uVar46,4);
LAB_1000b620:
            uVar35 = uVar35 + 1;
            iVar36 = iVar36 + 4;
            iVar19 = iVar19 + 3;
            iVar22 = iVar22 + (uint)(uVar10 >> 3);
          } while (uVar49 != uVar35);
          local_1b4 = local_1b4 + 1;
          local_1b8 = (uint)(uVar44 <= local_1b4);
          local_1a0 = local_1a0 + (uintptr_t)uVar49 * 4;
        } while (local_1b4 != uVar44);
        if ((!(bool)((uVar28 != 0x20 || local_190 == 0) | bVar37)) && (3 < local_c4)) {
          uVar48 = 3;
          do {
            *(undefined1 *)((int)local_c8 + uVar48) = 0xff;
            uVar48 = uVar48 + 4;
          } while (uVar48 < local_c4);
        }
        param_3[1] = uVar44;
        *param_3 = uVar49;
        if ((ulonglong ********)pppppppuVar41 != &local_c8) {
          param_3[3] = 0;
          recovered_10008354((void *)param_3[2]);
          param_3[2] = (uint)local_c8;
          param_3[3] = (uint)local_c4;
          param_3[4] = (uint)pppppppuStack_c0;
          pppppppuStack_c0 = (ulonglong *******)0x0;
          local_c8 = (ulonglong *******)0x0;
        }
        local_1b8 = 1;
LAB_1000bc08:
        local_c4 = (ulonglong *******)0x0;
        recovered_10008354(local_c8);
      }
    }
    else if (uVar28 < 9) {
      uVar35 = 4;
      local_1b8 = 0;
      if (uVar46 == 0) {
        uVar46 = 1 << (uVar28 & 0xff);
      }
      if (uVar48 == 0xc) {
        uVar35 = 3;
      }
      if ((((int)((ulonglong)uVar35 * (ulonglong)uVar46 >> 0x20) == 0) && (local_170 <= param_2)) &&
         (uVar46 * uVar35 <= (uint)((int)param_2 - (int)local_170))) {
        local_90 = 1;
        local_c8 = (ulonglong *******)CONCAT31(PF_PART3(local_c8, 1),0xff);
        recovered_100126c0((int *)&local_164,uVar46 << 2,(undefined1 *)&local_c8);
        pbVar27 = (byte *)((int)local_170 + (int)param_1) + 2;
        uVar48 = 1;
        if (1 < uVar46) {
          uVar48 = uVar46;
        }
        iVar22 = 0;
        do {
          *(byte *)(local_164 + -iVar22) = *pbVar27;
          *(byte *)((int)local_164 + iVar22 * -4 + 1) = pbVar27[-1];
          pbVar30 = pbVar27 + -2;
          pbVar27 = pbVar27 + uVar35;
          iVar19 = iVar22 * -4;
          iVar22 = iVar22 + -1;
          *(byte *)((int)local_164 + iVar19 + 2) = *pbVar30;
        } while (-iVar22 != uVar48);
        goto LAB_1000b3d8;
      }
    }
    else {
LAB_1000b3d8:
      local_1b8 = 0;
      if ((uVar28 - 1 < 0x20) && ((1 << (uVar28 - 1 & 0xff) & 0x80808089U) != 0)) goto LAB_1000b464;
    }
    ppppppuStack_160 = (ulonglong ******)0x0;
    pppppppuVar15 = local_164;
    goto LAB_1000ae88;
  }
  puVar38 = (ulonglong *)&UndefinedInstruction;
  do {
    puVar18 = puVar38;
    puVar38 = (ulonglong *)((int)puVar18 << 1);
  } while (puVar18 < param_2);
  local_90 = 0xffffffff;
  local_9c = recovered_100082fc((uint)puVar18);
  puVar38 = (ulonglong *)0x0;
  recovered_10008354((void *)0x0);
  if (param_2 < (ulonglong *)0x10) {
    pbVar27 = param_1;
LAB_10009ec8:
    pbVar30 = (byte *)((int)local_9c + (int)puVar38);
    do {
      pbVar14 = pbVar27 + 1;
      *pbVar30 = *pbVar27;
      pbVar27 = pbVar14;
      pbVar30 = pbVar30 + 1;
    } while (pbVar14 != param_1 + (int)param_2);
  }
  else {
    puVar38 = (ulonglong *)((uint)param_2 & 0xfffffff0);
    pbVar27 = param_1 + (int)puVar38;
    pppppppuVar41 = local_9c;
    puVar18 = puVar38;
    puVar31 = (uint *)param_1;
    do {
      ppppppuVar17 = (ulonglong ******)*puVar31;
      ppppppuVar33 = (ulonglong ******)puVar31[1];
      ppppppuVar42 = (ulonglong ******)puVar31[2];
      ppppppuVar4 = (ulonglong ******)puVar31[3];
      puVar31 = puVar31 + 4;
      puVar18 = puVar18 + -2;
      *pppppppuVar41 = ppppppuVar17;
      pppppppuVar41[1] = ppppppuVar33;
      pppppppuVar41[2] = ppppppuVar42;
      pppppppuVar41[3] = ppppppuVar4;
      pppppppuVar41 = pppppppuVar41 + 4;
    } while (puVar18 != (ulonglong *)0x0);
    if (puVar38 != param_2) goto LAB_10009ec8;
  }
  ppppppuStack_160 = *(ulonglong *******)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_15c = *(uint **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_158 = *(uint **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_140 = (uint *)0x0;
  local_164 = (ulonglong *******)0x0;
  local_154 = (ulonglong ******)0x0;
  local_144 = (ulonglong **)0x0;
  local_148 = (uint *)((uint)PF_PART1(local_148, 3) << 0x18);
  local_14c = (ulonglong *******)0x0;
  local_150 = (void **)0x0;
  recovered_10008354((void *)0x0);
  local_134 = 0;
  local_138 = (uint *)0x0;
  local_13c = (ulonglong ******)0x0;
  recovered_10008354((void *)0x0);
  local_128 = 0;
  local_12c = (uint *)0x0;
  local_130 = (ulonglong *****)0x0;
  recovered_10008354((void *)0x0);
  local_11c = 0;
  local_120 = 0;
  local_124 = (void *)0x0;
  recovered_10008354((void *)0x0);
  local_110 = 0;
  local_114 = 0;
  local_118 = (void *)0x0;
  recovered_10008354((void *)0x0);
  recovered_10008354((void *)0x0);
  recovered_10008354((void *)0x0);
  recovered_10008354((void *)0x0);
  local_90 = 0x10;
  iVar22 = recovered_10003d4c((char *)local_9c,&DAT_10017d10,8);
  if (iVar22 != 0) goto LAB_10009fac;
  if ((ulonglong *)0x13 < param_2) {
    iVar22 = 8;
    local_180 = 0;
LAB_1000a3c8:
    pppppppuVar41 = local_9c;
    local_1b8 = 0;
    iVar19 = iVar22 + 8;
    uVar48 = *(uint *)((int)local_9c + iVar22);
    uVar48 = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
             uVar48 >> 0x18;
    if ((uint)((int)param_2 - iVar19) < uVar48 + 4) goto LAB_10009fb4;
    puVar31 = (uint *)((int)local_9c + iVar22) + 1;
    iVar24 = uVar48 + iVar19;
    uVar44 = *(uint *)((int)local_9c + iVar24);
    uVar49 = recovered_10016c90(0,(byte *)puVar31,4);
    pppppppuVar41 = (ulonglong *******)((int)pppppppuVar41 + iVar19);
    if (uVar48 != 0) {
      uVar49 = recovered_10016c90(uVar49,(byte *)pppppppuVar41,uVar48);
    }
    if (uVar49 != (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                  uVar44 >> 0x18)) goto LAB_10009fb4;
    if ((char)local_148 == '\0') {
      local_90 = 0x11;
      iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017ad2,4);
      local_1b8 = 0;
      if (uVar48 != 0xd || iVar22 != 0) goto LAB_10009fb4;
      ppppppuVar17 = *pppppppuVar41;
      local_164 = (ulonglong *******)
                  ((int)ppppppuVar17 << 0x18 | ((uint)ppppppuVar17 >> 8 & 0xff) << 0x10 |
                   ((uint)ppppppuVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar17 >> 0x18);
      ppppppuVar17 = pppppppuVar41[1];
      ppppppuStack_160 =
           (ulonglong ******)
           ((int)ppppppuVar17 << 0x18 | ((uint)ppppppuVar17 >> 8 & 0xff) << 0x10 |
            ((uint)ppppppuVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar17 >> 0x18);
      local_15c = (uint *)(uint)*(byte *)(pppppppuVar41 + 2);
      local_158 = (uint *)(uint)*(byte *)((int)pppppppuVar41 + 9);
      local_154 = (ulonglong ******)(uint)*(byte *)((int)pppppppuVar41 + 10);
      local_150 = (void **)(uint)*(byte *)((int)pppppppuVar41 + 0xb);
      local_14c = (ulonglong *******)(uint)*(byte *)(pppppppuVar41 + 3);
      local_148 = (uint *)CONCAT31(PF_PART3(local_148, 1),1);
      if ((local_164 == (ulonglong *******)0x0 || ppppppuStack_160 == (ulonglong ******)0x0) ||
         ((uint *)0x6 < local_158)) goto LAB_10009fb4;
      if ((1 << (int)local_158 & 0x55U) == 0) {
        if (local_158 != (uint *)0x3) goto LAB_10009fb4;
        puVar31 = local_15c + -2;
      }
      else {
        puVar31 = (uint *)((uint)(local_15c + -2) & 0xfffffff7);
      }
      if (((puVar31 != (uint *)0x0) ||
          (local_154 != (ulonglong ******)0x0 || local_150 != (void **)0x0)) ||
         ((ulonglong *******)0x1 < local_14c)) goto LAB_10009fb4;
    }
    else {
      local_90 = 0x12;
      iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017af3,4);
      local_1b8 = 0;
      if (iVar22 == 0) {
        local_180 = uVar48 != 8 | local_180;
        bVar50 = local_180 != 0;
        if (!bVar50) {
          local_180 = (uint)local_148 >> 0x10 & 0xff;
        }
        if (bVar50 || local_180 != 0) goto LAB_10009fb4;
        PF_PART3(local_148, 0) = CONCAT12(1,(undefined2)local_148);
        ppppppuVar17 = *pppppppuVar41;
        local_144 = (ulonglong **)
                    ((int)ppppppuVar17 << 0x18 | ((uint)ppppppuVar17 >> 8 & 0xff) << 0x10 |
                     ((uint)ppppppuVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar17 >> 0x18);
        local_180 = 0;
      }
      else {
        local_90 = 0x13;
        iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017af8,4);
        local_1b8 = 0;
        if (iVar22 == 0) {
          bVar50 = uVar48 != 0x1a;
          if (!bVar50) {
            uVar48 = (uint)local_148 >> 0x10 & 0xff;
          }
          if (bVar50 || uVar48 != 1) goto LAB_10009fb4;
          ppppppuVar17 = pppppppuVar41[1];
          ppppppuVar33 = pppppppuVar41[2];
          ppppppuVar42 = pppppppuVar41[4];
          local_c8 = (ulonglong *******)
                     ((int)ppppppuVar17 << 0x18 | ((uint)ppppppuVar17 >> 8 & 0xff) << 0x10 |
                      ((uint)ppppppuVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar17 >> 0x18);
          ppppppuVar17 = pppppppuVar41[3];
          local_c4 = (ulonglong *******)
                     ((int)ppppppuVar33 << 0x18 | ((uint)ppppppuVar33 >> 8 & 0xff) << 0x10 |
                      ((uint)ppppppuVar33 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar33 >> 0x18);
          local_bc = (ulonglong ******)
                     ((int)ppppppuVar42 << 0x18 | ((uint)ppppppuVar42 >> 8 & 0xff) << 0x10 |
                      ((uint)ppppppuVar42 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar42 >> 0x18);
          local_b4 = (uint)*(byte *)((int)pppppppuVar41 + 0x19);
          local_b8 = (uint)*(byte *)(pppppppuVar41 + 6);
          pppppppuStack_c0 =
               (ulonglong *******)
               ((int)ppppppuVar17 << 0x18 | ((uint)ppppppuVar17 >> 8 & 0xff) << 0x10 |
                ((uint)ppppppuVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppuVar17 >> 0x18);
          local_a4 = 0;
          local_a8 = 0;
          local_ac = 0;
          local_b0 = CONCAT31(PF_PART3(local_b0, 1),local_114 == 0 & ~(byte)local_180);
          if (((local_c8 != (ulonglong *******)0x0 && local_c4 != (ulonglong *******)0x0) &&
              (pppppppuStack_c0 <= local_164)) &&
             ((local_c8 <= (ulonglong *******)((int)local_164 - (int)pppppppuStack_c0) &&
              ((local_bc <= ppppppuStack_160 &&
               (local_c4 <= (uint)((int)ppppppuStack_160 - (int)local_bc))))))) {
            bVar51 = 1 < local_b8;
            bVar50 = local_b8 == 2;
            if (local_b8 < 3) {
              bVar51 = local_b4 != 0;
              bVar50 = local_b4 == 1;
            }
            if (!bVar51 || bVar50) {
              local_90 = 0x14;
              recovered_10016dd0((int *)&local_118,(undefined8 *)&local_c8);
              recovered_10008354((void *)0x0);
              goto LAB_1000a8fc;
            }
          }
          pppppppuVar41 = (ulonglong *******)0x0;
          goto LAB_1000b25c;
        }
        local_90 = 0x15;
        iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017afd,4);
        local_1b8 = 0;
        if (iVar22 == 0) {
          if ((uVar48 == 0) || (0x300 < uVar48)) goto LAB_10009fb4;
          ppppppuVar17 = (ulonglong ******)&local_13c;
          ppuVar25 = &local_138;
          if (uVar48 != (uVar48 / 3) * 3) goto LAB_10009fb4;
        }
        else {
          local_90 = 0x17;
          iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017b02,4);
          local_1b8 = 0;
          if (iVar22 != 0) {
            local_90 = 0x18;
            iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017b07,4);
            if (iVar22 == 0) {
              local_180 = 1;
              if (uVar48 != 0) {
                local_90 = 0x19;
                local_c8 = pppppppuVar41;
                local_c4 = (ulonglong *******)uVar48;
                recovered_10017014((int *)&local_124,&local_c8);
                if ((local_114 != 0) &&
                   (*(char *)((int)local_118 + local_114 * 0x28 + -0x10) == '\x01')) {
                  local_90 = 0x1a;
                  recovered_10017014((int *)((int)local_118 + local_114 * 0x28 + -0xc),&local_c8);
                }
                local_140 = (uint *)((int)local_140 + uVar48);
              }
            }
            else {
              local_90 = 0x1b;
              iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017b0c,4);
              local_1b8 = 0;
              if (iVar22 == 0) {
                if (((PF_PART1(local_148, 2) == '\x01') && (4 < uVar48)) && (local_114 != 0)) {
                  local_90 = 0x1c;
                  local_c4 = (ulonglong *******)(uVar48 - 4);
                  local_c8 = pppppppuVar41 + 1;
                  recovered_10017108((int *)((int)local_118 + local_114 * 0x28 + -0xc),&local_c8);
                  goto LAB_1000a8fc;
                }
                goto LAB_10009fb4;
              }
              local_90 = 0x1d;
              iVar22 = recovered_10003d4c((char *)puVar31,&DAT_10017ad7,4);
              local_1b8 = 0;
              if (iVar22 == 0) {
                if (uVar48 != 0) goto LAB_10009fb4;
                PF_PART2(local_148, 0) = CONCAT11(1,(char)local_148);
                goto LAB_1000a188;
              }
              if ((*puVar31 & 0x20) == 0) goto LAB_10009fb4;
            }
            goto LAB_1000a8fc;
          }
          if (((uVar48 != 2) && (local_158 == (uint *)0x0)) ||
             ((uVar48 != 6 && (local_158 == (uint *)0x2)))) goto LAB_10009fb4;
          ppppppuVar17 = &local_130;
          ppuVar25 = &local_12c;
          if (local_158 == (uint *)0x3) {
            if ((uint)local_138 / 3 < uVar48) goto LAB_10009fb4;
          }
          else if ((local_158 == (uint *)&UndefinedInstruction) || (local_158 == (uint *)0x6))
          goto LAB_10009fb4;
        }
        *ppuVar25 = (uint *)0x0;
        local_90 = 0x16;
        recovered_1001440c((int *)ppppppuVar17,(int)*ppppppuVar17,(undefined1 *)pppppppuVar41,
                           (undefined1 *)((int)pppppppuVar41 + uVar48));
      }
    }
LAB_1000a8fc:
    iVar22 = iVar24 + 4;
    if (param_2 < (ulonglong *)(iVar24 + 0x10)) goto LAB_1000a188;
    goto LAB_1000a3c8;
  }
LAB_1000a188:
  if ((((char)local_148 == '\x01') && (PF_PART1(local_148, 1) == '\x01')) && (local_140 != (uint *)0x0)) {
    puVar31 = local_158;
    if (local_158 == (uint *)0x3) {
      puVar31 = local_138;
    }
    if (local_158 == (uint *)0x3 && puVar31 == (uint *)0x0) goto LAB_10009fac;
    if (PF_PART1(local_148, 2) == '\x01') {
      local_1b8 = 0;
      if ((local_144 != (ulonglong **)0x0) && ((ulonglong **)(local_114 - 1U) < local_144)) {
        iVar22 = local_114 * 0x28;
        piVar16 = (int *)((int)local_118 + 0x20);
        do {
          if (*piVar16 == 0) goto LAB_10009fac;
          iVar22 = iVar22 + -0x28;
          piVar16 = piVar16 + 10;
        } while (iVar22 != 0);
        goto LAB_1000a210;
      }
    }
    else {
LAB_1000a210:
      pppppppuVar41 = (ulonglong *******)0x0;
      recovered_10008354((void *)0x0);
      pppppppuStack_c0 = *(ulonglong ********)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      local_bc = *(ulonglong *******)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      local_b8 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      local_b0 = 0;
      local_c4 = (ulonglong *******)0x0;
      local_b4 = 0;
      local_ac = local_ac & 0xffff0000;
      local_c8 = (ulonglong *******)0x0;
      recovered_10008354((void *)0x0);
      puVar31 = local_138;
      if (local_158 == (uint *)0x0) {
        if (local_12c != (uint *)0x0) {
          local_1b8 = 0;
          if (local_12c != (uint *)0x2) goto LAB_1000b250;
          local_ac = CONCAT31(PF_PART3(local_ac, 1),1);
          local_bc = (ulonglong ******)
                     ((*(ushort *)local_130 & 0xff) << 8 | (uint)(*(ushort *)local_130 >> 8));
        }
LAB_1000b194:
        local_d4 = 0;
        local_d8 = 0;
        local_dc = (ulonglong ******)0x0;
        local_98 = pppppppuVar41;
        if ((PF_PART1(local_148, 2) == '\x01') && (local_114 != 0)) {
          local_90 = 0x1f;
          local_1b8 = recovered_1000be3c((uint *)&local_164,(int *)&local_c8,(uint *)&local_dc);
        }
        else {
          local_90 = 0x20;
          bVar50 = recovered_1000c300((uint *)&local_164,&local_124,(int *)&local_c8,
                                      (int *)&local_dc);
          local_1b8 = (uint)bVar50;
        }
        if (local_1b8 == 0) {
          ppppppuVar17 = local_dc;
        }
        else {
          *param_3 = (uint)local_164;
          param_3[3] = 0;
          param_3[1] = (uint)ppppppuStack_160;
          recovered_10008354((void *)param_3[2]);
          param_3[2] = (uint)local_dc;
          param_3[3] = local_d8;
          param_3[4] = local_d4;
          ppppppuVar17 = (ulonglong ******)0x0;
        }
        recovered_10008354(ppppppuVar17);
        pppppppuVar41 = local_98;
      }
      else {
        if (local_158 == (uint *)0x2) {
          if (local_12c != (uint *)0x0) {
            local_1b8 = 0;
            if (local_12c != (uint *)0x6) goto LAB_1000b250;
            PF_PART2(local_ac, 0) = CONCAT11(1,(undefined1)local_ac);
            local_b8 = (*(ushort *)local_130 & 0xff) << 8 | (uint)(*(ushort *)local_130 >> 8);
            local_b4 = (*(ushort *)((int)local_130 + 2) & 0xff) << 8 |
                       (uint)(*(ushort *)((int)local_130 + 2) >> 8);
            local_b0 = (*(ushort *)(local_130 + 1) & 0xff) << 8 |
                       (uint)(*(ushort *)(local_130 + 1) >> 8);
          }
          goto LAB_1000b194;
        }
        if (local_158 == (uint *)0x3) {
          if (local_138 == (uint *)0x0) {
            local_1b8 = 0;
          }
          else {
            local_1b8 = 0;
            uVar48 = (uint)local_138 / 3;
            if (local_138 == (uint *)((uintptr_t)uVar48 * 3)) {
              pppppppuVar15 = (ulonglong *******)(uVar48 << 2);
              local_c4 = (ulonglong *******)0x0;
              if (pppppppuVar15 != (ulonglong *******)0x0) {
                local_90 = 0x1e;
                pppppppuVar41 = recovered_100082fc((uint)pppppppuVar15);
                pppppppuVar43 = (ulonglong *******)0x0;
                recovered_10008354((void *)0x0);
                if (pppppppuVar15 < &DataAbort) {
LAB_1000a308:
                  do {
                    *(undefined1 *)((int)pppppppuVar41 + (int)pppppppuVar43) = 0xff;
                    pppppppuVar43 = (ulonglong *******)((int)pppppppuVar43 + 1);
                  } while (pppppppuVar43 < pppppppuVar15);
                }
                else {
                  pppppppuVar43 = (ulonglong *******)((uint)pppppppuVar15 & 0xfffffff0);
                  PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
                  PF_PART8(auVar2, 0) = 0xffffffffffffffff;
                  auVar2 = auVar2 << 0x40 | auVar2;
                  pppppppuVar13 = pppppppuVar43;
                  pppppppuVar21 = pppppppuVar41;
                  do {
                    *pppppppuVar21 = *(ulonglong *******)auVar2;
                    pppppppuVar21[1] = *(ulonglong *******)(auVar2 + (uint128)0x4);
                    pppppppuVar21[2] = *(ulonglong *******)(auVar2 + (uint128)0x8);
                    pppppppuVar21[3] = *(ulonglong *******)(auVar2 + (uint128)0xc);
                    pppppppuVar21 = pppppppuVar21 + 4;
                    pppppppuVar13 = pppppppuVar13 + -4;
                  } while (pppppppuVar13 != (ulonglong *******)0x0);
                  if (pppppppuVar15 != pppppppuVar43) goto LAB_1000a308;
                }
                local_c8 = pppppppuVar41;
                local_c4 = pppppppuVar43;
                pppppppuStack_c0 = pppppppuVar15;
              }
              if ((uint *)0x2 < puVar31) {
                puVar45 = (undefined1 *)((int)pppppppuVar41 + 2);
                puVar23 = (undefined1 *)((int)local_13c + 1);
                do {
                  uVar48 = uVar48 - 1;
                  puVar45[-2] = puVar23[-1];
                  puVar45[-1] = *puVar23;
                  puVar1 = puVar23 + 1;
                  puVar23 = puVar23 + 3;
                  *puVar45 = *puVar1;
                  puVar45 = puVar45 + 4;
                } while (uVar48 != 0);
              }
              if (local_12c != (uint *)0x0) {
                puVar31 = (uint *)0x0;
                do {
                  puVar45 = (undefined1 *)((int)local_130 + (int)puVar31);
                  iVar22 = (int)(uintptr_t)puVar31 * 4;
                  puVar31 = (uint *)((int)puVar31 + 1);
                  *(undefined1 *)((int)pppppppuVar41 + iVar22 + 3) = *puVar45;
                } while (puVar31 < local_12c);
              }
              goto LAB_1000b194;
            }
          }
        }
        else {
          local_1b8 = 0;
          if (local_12c == (uint *)0x0) goto LAB_1000b194;
        }
      }
LAB_1000b250:
      local_c4 = (ulonglong *******)0x0;
LAB_1000b25c:
      recovered_10008354(pppppppuVar41);
    }
  }
  else {
LAB_10009fac:
    local_1b8 = 0;
  }
LAB_10009fb4:
  if (local_114 != 0) {
    iVar19 = local_114 * 0x28 + -0xc;
    iVar22 = local_114;
    do {
      ((undefined4 *)((int)local_118 + iVar19))[1] = 0;
      recovered_10008354(*(void **)((int)local_118 + iVar19));
      iVar19 = iVar19 + -0x28;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  local_114 = 0;
  recovered_10008354(local_118);
  local_120 = 0;
  recovered_10008354(local_124);
  local_12c = (uint *)0x0;
  recovered_10008354(local_130);
  local_138 = (uint *)0x0;
  recovered_10008354(local_13c);
  pppppppuVar15 = local_9c;
  goto LAB_1000ae88;
LAB_1000b8d4:
  do {
    uVar48 = uVar48 + -1;
    local_b0 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_b8 = 0xff;
    local_bc = (ulonglong ******)CONCAT31(PF_PART3(local_bc, 1),1);
    pppppppuStack_c0 = (ulonglong *******)0x0;
    local_c4 = (ulonglong *******)0x0;
    local_c8 = (ulonglong *******)0x0;
    local_90 = 0xd;
    bVar50 = recovered_10013004((int)param_1,(uint)param_2,(int)&local_164,
                                (uint)local_dc[(uintptr_t)uVar48 * 2],(int)(local_dc + (uintptr_t)uVar48 * 2)[1],
                                (uint *)&local_c8);
    if (!bVar50) {
      local_1b8 = 0;
      goto LAB_1000bbe8;
    }
    if (((char)local_bc == '\x01') && (local_b8 != 0)) {
      local_ec = 0;
      local_f0 = 0;
      local_f4 = (void *)0x0;
      local_90 = 0xe;
      iVar22 = recovered_100133c8((int)param_1,(uint)param_2,(int)&local_164,(uint *)&local_c8,
                                  (int *)&local_f4);
      uVar44 = local_b0;
      uVar49 = local_b4;
      pppppppuVar13 = local_c4;
      pppppppuVar43 = local_c8;
      if (iVar22 == 0) {
        local_1b8 = 0;
        local_f0 = 0;
        recovered_10008354(local_f4);
        goto LAB_1000bbe8;
      }
      if (local_c4 != (ulonglong *******)0x0) {
        local_18c = ((int)pppppppuVar15 * local_b0 + local_b4) * 4;
        iVar22 = (int)local_c8 * 4;
        uVar46 = 0;
        local_190 = 0;
        do {
          if (((-1 < (int)(uVar46 + uVar44)) && ((int)(uVar46 + uVar44) < (int)ppppppuVar33)) &&
             (pppppppuVar43 != (ulonglong *******)0x0)) {
            uVar28 = uVar49;
            pppppppuVar21 = pppppppuVar43;
            iVar19 = local_18c;
            uVar47 = local_190;
            do {
              if ((-1 < (int)uVar28) && ((int)uVar28 < (int)pppppppuVar15)) {
                local_90 = 0xf;
                recovered_10013cf0((int)local_e8 + iVar19,(int)local_f4 + uVar47);
              }
              uVar28 = uVar28 + 1;
              iVar19 = iVar19 + 4;
              pppppppuVar21 = (ulonglong *******)((int)pppppppuVar21 + -1);
              uVar47 = uVar47 + 4;
            } while (pppppppuVar21 != (ulonglong *******)0x0);
          }
          local_18c = local_18c + (int)(uintptr_t)pppppppuVar15 * 4;
          local_190 = local_190 + iVar22;
          uVar46 = uVar46 + 1;
        } while ((ulonglong *******)uVar46 != pppppppuVar13);
      }
      local_f0 = 0;
      recovered_10008354(local_f4);
    }
  } while (uVar48 != 0);
LAB_1000bac0:
  local_1b8 = 1;
  param_3[1] = (uint)ppppppuVar33;
  *param_3 = (uint)pppppppuVar15;
  if (pppppppuVar41 != &local_e8) {
    param_3[3] = 0;
    recovered_10008354((void *)param_3[2]);
    param_3[2] = (uint)local_e8;
    param_3[3] = local_e4;
    param_3[4] = local_e0;
    local_e0 = 0;
    local_e8 = (ulonglong ******)0x0;
  }
LAB_1000bbe8:
  local_e4 = 0;
  recovered_10008354(local_e8);
LAB_1000b844:
  local_d8 = 0;
  recovered_10008354(local_dc);
LAB_1000afd0:
  pppppppuVar15 = local_14c;
LAB_1000ae88:
  recovered_10008354(pppppppuVar15);
  local_190 = local_1b8;
LAB_10009b0c:
  recovered_10008a1c(&uStack_94);
  return (ulonglong *)(local_190 & 1);
}

#undef DAT_1000aab8
#undef DAT_1000aae0
#undef DAT_10017ad2
#undef DAT_10017ad7
#undef DAT_10017aee
#undef DAT_10017af3
#undef DAT_10017af8
#undef DAT_10017afd
#undef DAT_10017b02
#undef DAT_10017b07
#undef DAT_10017b0c
#undef DAT_10017d10
#undef DAT_1001c00c
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_00000010
#undef str_10017ac5
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
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_250
#undef ppppppuStack_160
#undef pppppppuStack_c0
#undef uStack_94
#undef auStack_68
#undef local_1b8
#undef local_1b4
#undef local_1a0
#undef local_194
#undef local_190
#undef local_18c
#undef local_180
#undef local_17c
#undef local_170
#undef local_164
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

static const unsigned char pf_literal_1000be3c_DAT_1000c2ec[] __attribute__((aligned(16)))={0x24,0xbd,0x00,0x00};
#undef DAT_1000c2ec
#define DAT_1000c2ec (*(int *)((uintptr_t)pf_literal_1000be3c_DAT_1000c2ec))
static const unsigned char pf_literal_1000be3c_DAT_1000c2f0[] __attribute__((aligned(16)))={0xe0,0x03,0x00,0x00};
#undef DAT_1000c2f0
#define DAT_1000c2f0 (*(int *)((uintptr_t)pf_literal_1000be3c_DAT_1000c2f0))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define local_fc (*(int * *)(pf_stack_frame + 20))
#define local_f8 (*(int * *)(pf_stack_frame + 24))
#define local_f4 (*(uint * *)(pf_stack_frame + 28))
#define local_f0 (*(uint * *)(pf_stack_frame + 32))
#define local_ec (*(int *)(pf_stack_frame + 36))
#define local_e8 (*(int *)(pf_stack_frame + 40))
#define local_e4 (*(int *)(pf_stack_frame + 44))
#define local_e0 (*(int *)(pf_stack_frame + 48))
#define local_dc (*(int *)(pf_stack_frame + 52))
#define local_d8 (*(void * *)(pf_stack_frame + 56))
#define local_d4 (*(int * *)(pf_stack_frame + 60))
#define local_d0 (*(void * *)(pf_stack_frame + 64))
#define local_cc (*(void * *)(pf_stack_frame + 68))
#define local_c8 (*(int *)(pf_stack_frame + 72))
#define local_c4 (*(void * *)(pf_stack_frame + 76))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 80))
#define local_bc (*(undefined4 *)(pf_stack_frame + 84))
#define local_b8 (*(undefined8 *)(pf_stack_frame + 88))
#define local_b0 (*(uint *)(pf_stack_frame + 96))
#define local_ac (*(undefined4 *)(pf_stack_frame + 100))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define local_98 (*(void * *)(pf_stack_frame + 120))
#define local_90 (*(undefined4 *)(pf_stack_frame + 128))
#define local_7c (*(undefined4 *)(pf_stack_frame + 148))
#define local_78 (*(int *)(pf_stack_frame + 152))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 156))
#define local_70 (*(int *)(pf_stack_frame + 160))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 164))
#define uStack_a8 (*(undefined4 *)(pf_stack_frame + 104))
#define uStack_a4 (*(undefined8 *)(pf_stack_frame + 108))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 124))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be3c
 */

undefined4 recovered_1000be3c(uint *param_1,int *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *pointer;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  void *dst;
  byte bVar9;
  uint extraout_r3 = 0;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  uint uVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  uVar15 = *param_1;
  uVar11 = param_1[1];
  local_78 = ((uintptr_t)pf_module_state+0x208U);
  local_7c = DAT_1001c00c;
  local_70 = DAT_1000c2f0 + 0x1000bea0;
  local_f8 = param_2;
  local_f4 = param_1;
  recovered_100089f8(&uStack_94);
  if ((uVar15 != 0) && (uVar6 = 0, (int)((ulonglong)uVar11 * (ulonglong)uVar15 >> 0x20) != 0))
  goto LAB_1000c258;
  uVar11 = uVar11 * uVar15;
  uVar6 = 0;
  if (0x3fffffff < uVar11) goto LAB_1000c258;
  uVar2 = 0;
  uVar15 = uVar11 * 4;
  param_3[1] = 0;
  if (param_3[2] < uVar11 * 4) {
    local_90 = 0xffffffff;
    puVar3 = recovered_100082fc(uVar15);
    uVar11 = param_3[1];
    pointer = (undefined8 *)*param_3;
    if (uVar11 != 0) {
      bVar17 = uVar11 == 0x10;
      uVar7 = 0;
      uVar2 = extraout_r3;
      if (0xf < uVar11) {
        uVar2 = (int)puVar3 - (int)pointer;
        bVar17 = uVar2 == 0xf;
      }
      if ((0xf < uVar11 && 0xe < uVar2) && !bVar17) {
        uVar7 = uVar11 & 0xfffffff0;
        uVar2 = uVar7;
        puVar12 = pointer;
        puVar16 = puVar3;
        do {
          uVar18 = *puVar12;
          uVar19 = puVar12[1];
          puVar12 = puVar12 + 2;
          uVar2 = uVar2 - 0x10;
          *puVar16 = uVar18;
          puVar16[1] = uVar19;
          puVar16 = puVar16 + 2;
        } while (uVar2 != 0);
        if (uVar11 == uVar7) goto LAB_1000bf68;
      }
      iVar4 = uVar11 - uVar7;
      puVar10 = (undefined1 *)((int)puVar3 + uVar7);
      puVar13 = (undefined1 *)((int)pointer + uVar7);
      do {
        iVar4 = iVar4 + -1;
        *puVar10 = *puVar13;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar4 != 0);
    }
LAB_1000bf68:
    recovered_10008354(pointer);
    uVar2 = param_3[1];
    param_3[2] = uVar15;
    *param_3 = (uint)puVar3;
  }
  while (uVar2 < uVar15) {
    *(undefined1 *)(*param_3 + uVar2) = 0;
    uVar2 = param_3[1] + 1;
    param_3[1] = uVar2;
  }
  uVar11 = local_f4[0x14];
  local_f0 = param_3;
  if (uVar11 == 0) {
LAB_1000c004:
    local_b0 = 0;
    local_b8 = 0;
    local_90 = 1;
    bVar17 = recovered_1000c300(local_f4,local_f4 + 0x10,local_f8,(int *)&local_b8);
    puVar1 = local_f0;
    if ((!bVar17) || (uVar11 = PF_PART4(local_b8, 4), PF_PART4(local_b8, 4) != local_f0[1])) {
      pvVar5 = (void *)local_b8;
LAB_1000c248:
      recovered_10008354(pvVar5);
      uVar6 = 0;
      goto LAB_1000c258;
    }
    local_f0[1] = 0;
    recovered_10008354((void *)*local_f0);
    *puVar1 = (uint)(void *)local_b8;
    puVar1[1] = uVar11;
    puVar1[2] = local_b0;
    recovered_10008354((void *)0x0);
    piVar14 = (int *)local_f4[0x13];
    uVar11 = local_f4[0x14];
  }
  else {
    bVar9 = 0;
    piVar14 = (int *)local_f4[0x13];
    piVar8 = piVar14;
    do {
      while ((bVar9 & 1) != 0) {
        piVar8 = piVar8 + 10;
        bVar9 = 1;
        if (piVar8 == piVar14 + uVar11 * 10) goto LAB_1000c084;
      }
      bVar9 = *(byte *)(piVar8 + 6);
      piVar8 = piVar8 + 10;
    } while (piVar8 != piVar14 + uVar11 * 10);
    if (bVar9 == 0) goto LAB_1000c004;
  }
LAB_1000c084:
  uVar6 = 1;
  if (uVar11 != 0) {
    local_fc = piVar14 + uVar11 * 10;
    do {
      local_e4 = piVar14[1];
      uStack_a4 = *(undefined8 *)(local_f4 + 5);
      local_e0 = *piVar14;
      local_b8 = *(undefined8 *)piVar14;
      uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)(local_f4 + 3) >> 0x20);
      local_b0 = (uint)*(undefined8 *)(local_f4 + 2);
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(local_f4 + 2) >> 0x20);
      local_90 = 2;
      local_bc = 0;
      local_c0 = 0;
      local_c4 = (void *)0x0;
      local_d4 = piVar14;
      bVar17 = recovered_1000c300((uint *)&local_b8,piVar14 + 7,local_f8,(int *)&local_c4);
      if (!bVar17) {
        pvVar5 = local_c4;
        goto LAB_1000c248;
      }
      local_98 = local_c4;
      piVar14 = local_d4;
      if (local_e4 != 0) {
        local_e8 = local_e0 << 2;
        local_ec = *local_f4 << 2;
        local_d8 = local_c4;
        local_dc = 0;
        do {
          if (local_e0 != 0) {
            dst = (void *)(*local_f0 + local_ec * (piVar14[3] + local_dc) + piVar14[2] * 4);
            iVar4 = local_e0;
            pvVar5 = local_d8;
            do {
              local_d0 = pvVar5;
              local_cc = dst;
              local_c8 = iVar4;
              if (piVar14[5] == 0) {
                local_90 = 3;
                recovered_10002f90(dst,pvVar5,4);
              }
              else {
                local_90 = 4;
                recovered_10013cf0((int)dst,(int)pvVar5);
              }
              pvVar5 = (void *)((int)local_d0 + 4);
              dst = (void *)((int)local_cc + 4);
              iVar4 = local_c8 + -1;
              piVar14 = local_d4;
            } while (iVar4 != 0);
          }
          local_d8 = (void *)((int)local_d8 + local_e8);
          local_dc = local_dc + 1;
        } while (local_dc != local_e4);
      }
      recovered_10008354(local_98);
      piVar14 = piVar14 + 10;
    } while (piVar14 != local_fc);
    uVar6 = 1;
  }
LAB_1000c258:
  recovered_10008a1c(&uStack_94);
  return uVar6;
}

#undef DAT_1000c2ec
#undef DAT_1000c2f0
#undef DAT_1001c00c
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
#undef local_b0
#undef local_ac
#undef auStack_100
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_a8
#undef uStack_a4
#undef uStack_94
#undef auStack_68

static const unsigned char pf_literal_1000c300_DAT_1000d160[] __attribute__((aligned(16)))={0x64,0xb8,0x00,0x00};
#undef DAT_1000d160
#define DAT_1000d160 (*(int *)((uintptr_t)pf_literal_1000c300_DAT_1000d160))
static const unsigned char pf_literal_1000c300_DAT_1000d164[] __attribute__((aligned(16)))={0x2c,0x1a,0x00,0x00};
#undef DAT_1000d164
#define DAT_1000d164 (*(int *)((uintptr_t)pf_literal_1000c300_DAT_1000d164))
static const unsigned char pf_literal_1000c300_DAT_1000de10[] __attribute__((aligned(16)))={0x0c,0x00,0x00,0x00,0x0d,0x00,0x00,0x00};
#undef DAT_1000de10
#define DAT_1000de10 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de10))
static const unsigned char pf_literal_1000c300_DAT_1000de18[] __attribute__((aligned(16)))={0x0e,0x00,0x00,0x00,0x0f,0x00,0x00,0x00};
#undef DAT_1000de18
#define DAT_1000de18 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de18))
static const unsigned char pf_literal_1000c300_DAT_1000de20[] __attribute__((aligned(16)))={0x08,0x00,0x00,0x00,0x09,0x00,0x00,0x00};
#undef DAT_1000de20
#define DAT_1000de20 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de20))
static const unsigned char pf_literal_1000c300_DAT_1000de28[] __attribute__((aligned(16)))={0x0a,0x00,0x00,0x00,0x0b,0x00,0x00,0x00};
#undef DAT_1000de28
#define DAT_1000de28 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de28))
static const unsigned char pf_literal_1000c300_DAT_1000de30[] __attribute__((aligned(16)))={0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00};
#undef DAT_1000de30
#define DAT_1000de30 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de30))
static const unsigned char pf_literal_1000c300_DAT_1000de38[] __attribute__((aligned(16)))={0x06,0x00,0x00,0x00,0x07,0x00,0x00,0x00};
#undef DAT_1000de38
#define DAT_1000de38 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de38))
static const unsigned char pf_literal_1000c300_DAT_1000de40[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00};
#undef DAT_1000de40
#define DAT_1000de40 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de40))
static const unsigned char pf_literal_1000c300_DAT_1000de48[] __attribute__((aligned(16)))={0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00};
#undef DAT_1000de48
#define DAT_1000de48 (*(uint64_t *)((uintptr_t)pf_literal_1000c300_DAT_1000de48))
#undef DAT_10017f3c
#define DAT_10017f3c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x594U)))
#undef DAT_10017f58
#define DAT_10017f58 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b0U)))
#undef DAT_10017f74
#define DAT_10017f74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ccU)))
#undef DAT_10017f90
#define DAT_10017f90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e8U)))
#undef DAT_10017fc8
#define DAT_10017fc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x620U)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define auStackY_1c0 (*(undefined1 (*)[448])(pf_stack_frame + 16))
#define local_114 (*(uint *)(pf_stack_frame + 188))
#define local_110 (*(uint *)(pf_stack_frame + 192))
#define local_10c (*(byte * *)(pf_stack_frame + 196))
#define local_108 (*(int *)(pf_stack_frame + 200))
#define local_100 (*(uint *)(pf_stack_frame + 208))
#define local_e0 (*(int *)(pf_stack_frame + 240))
#define local_dc (*(uint128 * *)(pf_stack_frame + 244))
#define local_d8 (*(byte * *)(pf_stack_frame + 248))
#define local_d4 (*(undefined4 *)(pf_stack_frame + 252))
#define local_d0 (*(uint128 * *)(pf_stack_frame + 256))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 316))
#define local_cc (*(byte * *)(pf_stack_frame + 260))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 264))
#define local_c4 (*(void * *)(pf_stack_frame + 268))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 272))
#define local_bc (*(undefined4 *)(pf_stack_frame + 276))
#define local_b8 (*(void * *)(pf_stack_frame + 280))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 360))
#define local_b4 (*(byte * *)(pf_stack_frame + 284))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 288))
#define local_ac (*(byte * *)(pf_stack_frame + 292))
#define local_a8 (*(byte * *)(pf_stack_frame + 296))
#define local_a4 (*(byte * *)(pf_stack_frame + 300))
#define local_a0 (*(uint128 * *)(pf_stack_frame + 304))
#define local_9c (*(uint128 * *)(pf_stack_frame + 308))
#define local_98 (*(uint128 * *)(pf_stack_frame + 312))
#define local_90 (*(undefined4 *)(pf_stack_frame + 320))
#define local_7c (*(undefined4 *)(pf_stack_frame + 340))
#define local_78 (*(int *)(pf_stack_frame + 344))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 348))
#define local_70 (*(int *)(pf_stack_frame + 352))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 356))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c300
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool recovered_1000c300(uint *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint128 *pauVar8;
  bool bVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *pointer;
  byte *pbVar12;
  int iVar13;
  undefined8 *puVar14;
  void *dst;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint128 *pauVar19;
  byte *pbVar20;
  int iVar21;
  undefined1 *puVar22;
  uint uVar23;
  byte *pbVar24;
  int iVar25;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  void *pvVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined4 *puVar29;
  uint128 *pauVar30;
  undefined8 *puVar31;
  void *pvVar32;
  undefined1 uVar33;
  uint uVar34;
  uint128 *pauVar35;
  void *pvVar36;
  byte bVar37;
  uint uVar38;
  uint *puVar39;
  undefined4 *puVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  undefined1 *puVar48;
  longlong lVar49;
  uint128 auVar50;
  undefined4 uVar51;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  uint128 auVar52;
  uint128 auVar56;
  uint128 auVar57;
  uint128 auVar58;
  uint128 auVar59;
  uint128 auVar60;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1c0 + 0x80;
  uVar44 = *param_1;
  uVar28 = param_1[6];
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x214U);
  local_70 = DAT_1000d164 + 0x1000c368;
  recovered_100089f8(&uStack_94);
  if (uVar28 == 0) {
    uVar41 = param_1[3];
    uVar28 = 0;
    if ((uVar41 < 7) && ((0x5dU >> (uVar41 & 0xff) & 1) != 0)) {
      uVar28 = param_1[2] * *(int *)(&DAT_10017fc8 + (uintptr_t)(uintptr_t)uVar41 * 4);
    }
    if (uVar44 == 0) {
      uVar41 = param_1[1];
      uVar28 = 0;
    }
    else {
      bVar45 = false;
      if (((int)((ulonglong)uVar28 * (ulonglong)uVar44 >> 0x20) != 0) ||
         (uVar41 = param_1[1], (int)((ulonglong)uVar41 * (ulonglong)uVar44 >> 0x20) != 0))
      goto LAB_1000dd48;
      uVar28 = uVar28 * uVar44 + 7 >> 3;
    }
    puVar39 = param_1 + 1;
    bVar45 = false;
    if ((0x3fffffff < uVar41 * uVar44) ||
       (uVar23 = uVar28 + 1, (int)((ulonglong)uVar41 * (ulonglong)uVar23 >> 0x20) != 0))
    goto LAB_1000dd48;
    local_ac = (byte *)0x0;
    local_b0 = 0;
    local_b4 = (byte *)0x0;
    local_b8 = (void *)0x0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = (void *)0x0;
    local_90 = 1;
    bVar9 = recovered_100171fc((int *)&local_c4,param_2,uVar23 * uVar41);
    bVar45 = false;
    if (!bVar9) goto LAB_1000dd2c;
    uVar44 = uVar41 * (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 4;
    uVar41 = param_4[1];
    if (uVar44 < uVar41) {
      param_4[1] = uVar44;
    }
    else if (uVar41 < uVar44) {
      if ((uint)param_4[2] < uVar44) {
        local_90 = 2;
        puVar14 = recovered_100082fc(uVar44);
        uVar41 = param_4[1];
        pauVar30 = (uint128 *)*param_4;
        if (uVar41 != 0) {
          bVar45 = uVar41 == 0x10;
          uVar38 = 0;
          uVar34 = extraout_r3_00;
          if (0xf < uVar41) {
            uVar34 = (int)puVar14 - (int)pauVar30;
            bVar45 = uVar34 == 0xf;
          }
          if ((0xf < uVar41 && 0xe < uVar34) && !bVar45) {
            uVar38 = uVar41 & 0xfffffff0;
            uVar34 = uVar38;
            puVar31 = puVar14;
            pauVar35 = pauVar30;
            do {
              auVar52 = *pauVar35;
              pauVar35 = pauVar35 + 1;
              uVar34 = uVar34 - 0x10;
              *puVar31 = PF_PART8(auVar52, 0);
              puVar31[1] = PF_PART8(auVar52, 8);
              puVar31 = puVar31 + 2;
            } while (uVar34 != 0);
            if (uVar41 == uVar38) goto LAB_1000d200;
          }
          iVar42 = uVar41 - uVar38;
          puVar22 = (undefined1 *)((int)puVar14 + uVar38);
          puVar27 = ((uint8_t *)(void *)pauVar30) + uVar38;
          do {
            iVar42 = iVar42 + -1;
            *puVar22 = *puVar27;
            puVar22 = puVar22 + 1;
            puVar27 = puVar27 + 1;
          } while (iVar42 != 0);
        }
LAB_1000d200:
        recovered_10008354(pauVar30);
        uVar41 = param_4[1];
        param_4[2] = uVar44;
        *param_4 = (int)puVar14;
      }
      while (uVar41 < uVar44) {
        *(undefined1 *)(*param_4 + uVar41) = 0;
        uVar41 = param_4[1] + 1;
        param_4[1] = uVar41;
      }
    }
    uVar44 = param_1[3];
    local_110 = 1;
    if (uVar44 < 7) {
      local_110 = 1;
      if ((((0x5dU >> (uVar44 & 0xff) & 1) != 0) &&
          (7 < param_1[2] * *(int *)(&DAT_10017fc8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 4))) &&
         (local_110 = 0, (0x5dU >> (uVar44 & 0xff) & 1) != 0)) {
        local_110 = *(int *)(&DAT_10017fc8 + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 4) * param_1[2] + 7 >> 3;
      }
    }
    local_90 = 3;
    local_a8 = recovered_100082fc(uVar23);
    pvVar32 = (void *)0x0;
    recovered_10008354((void *)0x0);
    uVar44 = 0;
    if (uVar28 < 0xf) {
LAB_1000d314:
      iVar42 = (uVar28 - uVar44) + 1;
      pbVar24 = local_a8 + uVar44;
      do {
        pbVar12 = pbVar24 + 1;
        *pbVar24 = 0;
        iVar42 = iVar42 + -1;
        pbVar24 = pbVar12;
      } while (iVar42 != 0);
    }
    else {
      uVar44 = uVar23 & 0xfffffff0;
      uVar41 = uVar44;
      pbVar12 = local_a8;
      do {
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12[4] = 0;
        pbVar12[5] = 0;
        pbVar12[6] = 0;
        pbVar12[7] = 0;
        pbVar12[8] = 0;
        pbVar12[9] = 0;
        pbVar12[10] = 0;
        pbVar12[0xb] = 0;
        pbVar12[0xc] = 0;
        pbVar12[0xd] = 0;
        pbVar12[0xe] = 0;
        pbVar12[0xf] = 0;
        pbVar12 = pbVar12 + 0x10;
        uVar41 = uVar41 - 0x10;
      } while (uVar41 != 0);
      if (uVar23 != uVar44) goto LAB_1000d314;
    }
    uVar44 = param_1[3];
    bVar45 = uVar44 == 6;
    if (bVar45) {
      uVar44 = param_1[2];
    }
    if (bVar45 && uVar44 == 8) {
      if (*puVar39 == 0) {
LAB_1000dcdc:
        bVar45 = local_ac == local_b4;
      }
      else {
        pbVar12 = (byte *)(-2 - uVar28);
        bVar45 = false;
        if ((local_ac <= pbVar12) && (pbVar24 = local_ac + uVar23, pbVar24 <= local_b4)) {
          local_90 = 4;
          recovered_10002f90(local_a8,(byte *)((int)local_b8 + (int)local_ac),uVar23);
          pauVar30 = (uint128 *)(local_a8 + 1);
          local_90 = 5;
          local_ac = pbVar24;
          iVar42 = recovered_100173dc((uint)*local_a8,(undefined8 *)*param_4,pauVar30,
                                      (uint128 *)0x0,uVar28,4);
          bVar45 = false;
          if (iVar42 != 0) {
            if (1 < *puVar39) {
              uVar44 = 1;
              local_e0 = 0;
              do {
                bVar45 = false;
                bVar46 = pbVar12 <= local_ac;
                bVar9 = local_ac == pbVar12;
                pbVar24 = pbVar12;
                if (!bVar46 || bVar9) {
                  pbVar24 = local_ac + uVar23;
                  bVar46 = local_b4 <= pbVar24;
                  bVar9 = pbVar24 == local_b4;
                }
                if (bVar46 && !bVar9) goto LAB_1000dd24;
                local_90 = 6;
                recovered_10002f90(local_a8,(byte *)((int)local_b8 + (int)local_ac),uVar23);
                local_90 = 7;
                local_ac = pbVar24;
                iVar42 = recovered_100173dc((uint)*local_a8,
                                            (undefined8 *)
                                            ((uint8_t *)(*param_4 + local_e0) + uVar28),
                                            pauVar30,(uint128 *)(*param_4 + local_e0),
                                            uVar28,4);
                if (iVar42 == 0) {
                  bVar45 = false;
                  goto LAB_1000dd24;
                }
                uVar44 = uVar44 + 1;
                local_e0 = local_e0 + uVar28;
              } while (uVar44 < *puVar39);
            }
            goto LAB_1000dcdc;
          }
        }
      }
    }
    else {
      local_90 = 8;
      recovered_1001279c((int *)&local_d0,uVar28);
      local_90 = 9;
      recovered_1001279c((int *)&local_dc,uVar28);
      if (*puVar39 != 0) {
        PF_PART8(auVar52, 8) = SUB168((uint128)0x0,8);
        PF_PART8(auVar52, 0) = 0x1000000010;
        auVar52 = (auVar52 << 64 | auVar52);
        pauVar30 = (uint128 *)(local_a8 + 1);
        bVar9 = false;
        local_108 = 0;
        local_100 = 0;
        uVar44 = uVar28;
        do {
          bVar45 = false;
          bVar47 = (byte *)(-2 - uVar28) <= local_ac;
          bVar46 = local_ac == (byte *)(-2 - uVar28);
          if (!bVar47 || bVar46) {
            pbVar12 = local_ac + uVar23;
            bVar47 = local_b4 <= pbVar12;
            bVar46 = pbVar12 == local_b4;
            uVar44 = uVar23;
          }
          if (bVar47 && !bVar46) goto switchD_1000d474_caseD_1;
          local_90 = 10;
          recovered_10002f90(local_a8,(byte *)((int)local_b8 + (int)local_ac),uVar44);
          local_90 = 0xb;
          pauVar35 = (uint128 *)0x0;
          if (bVar9) {
            pauVar35 = local_d0;
          }
          local_ac = pbVar12;
          iVar42 = recovered_100173dc((uint)*local_a8,(undefined8 *)local_dc,pauVar30,pauVar35,
                                      uVar28,local_110);
          if (iVar42 == 0) {
LAB_1000dd84:
            bVar45 = false;
            goto switchD_1000d474_caseD_1;
          }
          bVar45 = false;
          if (6 < param_1[3]) goto switchD_1000d474_caseD_1;
          uVar44 = *param_1;
          pvVar26 = (void *)(local_100 * uVar44);
          iVar42 = *param_4;
          dst = (void *)(iVar42 + (int)(uintptr_t)pvVar26 * 4);
          switch((uintptr_t)(param_1[3])) {
          case 0:
            if (param_1[2] == 8) {
              if (uVar44 != 0) {
                pbVar12 = (byte *)(uVar44 * local_108 + iVar42 + 1);
                pauVar35 = local_dc;
                do {
                  bVar37 = ((uint8_t *)(void *)pauVar35)[0];
                  uVar41 = param_3[3];
                  bVar5 = *(byte *)(param_3 + 7);
                  pbVar12[1] = bVar37;
                  *pbVar12 = bVar37;
                  pbVar12[-1] = bVar37;
                  uVar44 = uVar44 - 1;
                  pbVar12[2] = -(~bVar5 & 1 | uVar41 != bVar37);
                  pbVar12 = pbVar12 + 4;
                  pauVar35 = (uint128 *)(((uint8_t *)(void *)pauVar35) + 1);
                } while (uVar44 != 0);
              }
            }
            else if (uVar44 != 0) {
              puVar27 = ((uint8_t *)(void *)local_dc) + 1;
              puVar22 = (undefined1 *)(uVar44 * local_108 + iVar42 + 1);
              do {
                pauVar35 = (uint128 *)(puVar27 + -1);
                puVar27 = puVar27 + 2;
                uVar41 = (*(ushort *)(uintptr_t)pauVar35 & 0xff) << 8 | (uint)(*(ushort *)(uintptr_t)pauVar35 >> 8);
                uVar34 = (uintptr_t)(uintptr_t)uVar41 * 0xff + 0x7fff;
                pvVar32 = (void *)((ulonglong)uVar34 * 0x2000201 >> 0x20);
                puVar22[2] = -(~*(byte *)(param_3 + 7) & 1 | uVar41 != param_3[3]);
                uVar44 = uVar44 - 1;
                uVar33 = (undefined1)(uVar34 / 0xffff);
                puVar22[1] = uVar33;
                *puVar22 = uVar33;
                puVar22[-1] = uVar33;
                puVar22 = puVar22 + 4;
              } while (uVar44 != 0);
            }
            break;
          default:
            goto switchD_1000d474_caseD_1;
          case 2:
            if (param_1[2] == 8) {
              if (uVar44 != 0) {
                iVar17 = 0;
                iVar13 = 2;
                iVar42 = uVar44 * local_108 + iVar42;
                puVar22 = (undefined1 *)(iVar42 + 3);
                do {
                  pvVar26 = (void *)(uint)*(byte *)((int)param_3 + 0x1d);
                  bVar45 = pvVar26 == (void *)0x1;
                  pvVar32 = (void *)(uint)(byte)((uint8_t *)(void *)&local_dc[-1])[iVar13 + 0xe];
                  if (bVar45) {
                    pvVar26 = (void *)param_3[4];
                  }
                  uVar33 = 0xff;
                  if (((bVar45 && pvVar26 == pvVar32) &&
                      (param_3[5] == (uint)*(byte *)((int)local_dc + iVar17 * -3 + 1))) &&
                     (uVar33 = 0, param_3[6] != (uint)(byte)((uint8_t *)(void *)local_dc)[iVar13])) {
                    uVar33 = 0xff;
                  }
                  iVar21 = iVar17 * -3;
                  iVar25 = iVar42 + iVar17 * -4;
                  puVar22[-3] = ((uint8_t *)(void *)&local_dc[-1])[iVar13 + 0xe];
                  iVar17 = iVar17 + -1;
                  *(undefined1 *)(iVar25 + 1) = *(undefined1 *)((int)local_dc + iVar21 + 1);
                  puVar27 = ((uint8_t *)(void *)local_dc) + iVar13;
                  iVar13 = iVar13 + 3;
                  *(undefined1 *)(iVar25 + 2) = *puVar27;
                  *puVar22 = uVar33;
                  puVar22 = puVar22 + 4;
                } while (-iVar17 != uVar44);
              }
            }
            else if (uVar44 != 0) {
              puVar27 = ((uint8_t *)(void *)local_dc) + 5;
              puVar22 = (undefined1 *)(uVar44 * local_108 + iVar42 + 1);
              do {
                uVar34 = (*(ushort *)(puVar27 + -3) & 0xff) << 8 |
                         (uint)(*(ushort *)(puVar27 + -3) >> 8);
                uVar38 = (*(ushort *)*(uint128 *)(puVar27 + -5) & 0xff) << 8 |
                         (uint)(*(ushort *)*(uint128 *)(puVar27 + -5) >> 8);
                puVar1 = (ushort *)(puVar27 + -1);
                puVar27 = puVar27 + 6;
                uVar43 = (*puVar1 & 0xff) << 8 | (uint)(*puVar1 >> 8);
                uVar41 = (uintptr_t)uVar43 * 0xff + 0x7fff;
                pvVar32 = (void *)((uintptr_t)(uintptr_t)uVar41 * 0x2000201);
                puVar22[2] = -(~*(byte *)((int)param_3 + 0x1d) & 1 | uVar38 != param_3[4] |
                               uVar34 != param_3[5] | uVar43 != param_3[6]);
                puVar22[1] = (char)(uVar41 / 0xffff);
                *puVar22 = (char)((uVar34 * 0xff + 0x7fff) / 0xffff);
                puVar22[-1] = (char)((uVar38 * 0xff + 0x7fff) / 0xffff);
                puVar22 = puVar22 + 4;
                uVar44 = uVar44 - 1;
              } while (uVar44 != 0);
            }
            break;
          case 3:
            if (uVar44 != 0) {
              uVar41 = param_3[1];
              pvVar26 = (void *)(uVar44 * local_108 + iVar42);
              pauVar35 = local_dc;
              do {
                if (uVar41 >> 2 <= (uint)(byte)((uint8_t *)(void *)pauVar35)[0]) goto LAB_1000dd84;
                local_90 = 0xc;
                recovered_10002f90(pvVar26,(void *)(*param_3 + (uint)(byte)((uint8_t *)(void *)pauVar35)[0] * 4),4);
                pvVar26 = (void *)((int)pvVar26 + 4);
                uVar44 = uVar44 - 1;
                pauVar35 = (uint128 *)(((uint8_t *)(void *)pauVar35) + 1);
              } while (uVar44 != 0);
            }
            break;
          case 4:
            if (param_1[2] == 8) {
              if (uVar44 != 0) {
                uVar41 = 0;
                if (0x3f < uVar44) {
                  uVar34 = uVar44 - 1;
                  pvVar36 = (void *)((int)dst + uVar34 * 4);
                  bVar45 = dst <= pvVar36;
                  if (bVar45) {
                    pvVar26 = (void *)(iVar42 + (int)(uintptr_t)pvVar26 * 4);
                    pvVar36 = (void *)((int)pvVar26 + 1);
                    pvVar32 = (void *)((int)pvVar36 + uVar34 * 4);
                  }
                  if (bVar45 && pvVar36 <= pvVar32) {
                    pvVar36 = (void *)((int)pvVar26 + 2);
                    pvVar32 = (void *)((int)pvVar36 + uVar34 * 4);
                    bVar45 = pvVar36 <= pvVar32;
                    if (bVar45) {
                      pvVar26 = (void *)((int)pvVar26 + 3);
                      pvVar36 = (void *)((int)pvVar26 + uVar34 * 4);
                    }
                    if (((bVar45 && pvVar26 <= pvVar36) &&
                        (uVar34 < 0x3fffffff || uVar44 == 0x40000000)) &&
                       ((((uint8_t *)(void *)local_dc) + (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 2 <= dst ||
                        ((uint128 *)(uVar44 * ((uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)local_100 * 4 + 4) + iVar42) <= local_dc)))
                       ) {
                      uVar41 = uVar44 & 0x7ffffff0;
                      PF_PART8(auVar56, 8) = DAT_1000de18;
                      PF_PART8(auVar56, 0) = DAT_1000de10;
                      PF_PART8(auVar57, 8) = DAT_1000de28;
                      PF_PART8(auVar57, 0) = DAT_1000de20;
                      PF_PART8(auVar58, 8) = DAT_1000de38;
                      PF_PART8(auVar58, 0) = DAT_1000de30;
                      puVar22 = (undefined1 *)(uVar44 * local_108 + iVar42);
                      PF_PART8(auVar59, 8) = DAT_1000de48;
                      PF_PART8(auVar59, 0) = DAT_1000de40;
                      uVar34 = uVar41;
                      do {
                        auVar60 = VectorShiftLeft(auVar59,1,0x20,0);
                        VectorShiftLeft(auVar57,1,0x20,0);
                        uVar34 = uVar34 - 0x10;
                        auVar50 = VectorShiftLeft(auVar56,1,0x20,0);
                        auVar59 = VectorAdd(auVar59,auVar52,4);
                        auVar57 = VectorAdd(auVar57,auVar52,4);
                        auVar56 = VectorAdd(auVar56,auVar52,4);
                        VectorShiftLeft(auVar58,1,0x20,0);
                        auVar58 = VectorAdd(auVar58,auVar52,4);
                        pvVar32 = PF_PART4(auVar50, 8);
                        auVar50 = *(uint128 *)(((uint8_t *)(void *)local_dc) + PF_PART4(auVar60, 0));
                        auVar60 = ((uint128 *)(((uint8_t *)(void *)local_dc) + PF_PART4(auVar60, 0)))[1];
                        PFVectorUnzipLow(auVar50,auVar60,1,0x10);
                        PFVectorUnzipHigh(auVar50,auVar60,1,0x10);
                        puVar27 = (undefined1 *)0x3b0;
                        puVar2 = (undefined1 *)0x3c0;
                        puVar3 = (undefined1 *)0x3d0;
                        puVar4 = (undefined1 *)0x3e0;
                        lVar49 = 8;
                        puVar48 = puVar22;
                        while( true ) {
                          *puVar48 = *puVar27;
                          puVar48[1] = *puVar2;
                          puVar48[2] = *puVar3;
                          puVar48[3] = *puVar4;
                          puVar48 = puVar48 + 4;
                          lVar49 = lVar49 + -1;
                          if (lVar49 == 0) break;
                          puVar27 = puVar27 + 1;
                          puVar2 = puVar2 + 1;
                          puVar3 = puVar3 + 1;
                          puVar4 = puVar4 + 1;
                        }
                        puVar48 = puVar22 + 0x20;
                        puVar27 = (undefined1 *)0x3b8;
                        puVar2 = (undefined1 *)0x3c8;
                        puVar3 = (undefined1 *)0x3d8;
                        puVar4 = (undefined1 *)0x3e8;
                        lVar49 = 8;
                        while( true ) {
                          *puVar48 = *puVar27;
                          puVar48[1] = *puVar2;
                          puVar48[2] = *puVar3;
                          puVar48[3] = *puVar4;
                          puVar48 = puVar48 + 4;
                          lVar49 = lVar49 + -1;
                          if (lVar49 == 0) break;
                          puVar27 = puVar27 + 1;
                          puVar2 = puVar2 + 1;
                          puVar3 = puVar3 + 1;
                          puVar4 = puVar4 + 1;
                        }
                        puVar22 = puVar22 + 0x40;
                      } while (uVar34 != 0);
                      if (uVar44 == uVar41) break;
                    }
                  }
                }
                puVar27 = ((uint8_t *)(void *)local_dc) + (uintptr_t)(uintptr_t)uVar41 * 2 + 1;
                iVar17 = uVar44 - uVar41;
                puVar22 = (undefined1 *)(iVar42 + uVar44 * local_108 + (uintptr_t)(uintptr_t)uVar41 * 4 + 1);
                do {
                  uVar33 = puVar27[-1];
                  iVar17 = iVar17 + -1;
                  *puVar22 = uVar33;
                  puVar22[-1] = uVar33;
                  puVar22[1] = puVar27[-1];
                  uVar33 = *puVar27;
                  puVar27 = puVar27 + 2;
                  puVar22[2] = uVar33;
                  puVar22 = puVar22 + 4;
                } while (iVar17 != 0);
              }
            }
            else if (uVar44 != 0) {
              iVar17 = uVar44 * local_108;
              iVar13 = 0;
              do {
                uVar7 = *(ushort *)(((uint8_t *)(void *)local_dc) + iVar13);
                pvVar32 = (void *)0x2000201;
                uVar44 = uVar44 - 1;
                uVar6 = *(ushort *)((int)(((uint8_t *)(void *)local_dc) + iVar13) + 2);
                puVar22 = (undefined1 *)(iVar17 + iVar42 + iVar13);
                uVar33 = (undefined1)
                         ((ulonglong)
                          ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                           (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)) + 0x7fff) *
                          0x2000201 >> 0x29);
                *puVar22 = uVar33;
                iVar13 = iVar13 + 4;
                puVar22[2] = uVar33;
                puVar22[1] = uVar33;
                puVar22[3] = (char)((ulonglong)
                                    ((((uVar6 & 0xff) << 8 | (uint)(uVar6 >> 8)) * 0x100 -
                                     (((uint)uVar6 << 0x18 | (uint)(uVar6 >> 8) << 0x10) >> 0x10)) +
                                    0x7fff) * 0x2000201 >> 0x29);
              } while (uVar44 != 0);
            }
            break;
          case 6:
            if (param_1[2] == 8) {
              local_90 = 0xd;
              recovered_10002f90(dst,local_dc,uVar44 << 2);
            }
            else if (uVar44 != 0) {
              iVar13 = 7;
              iVar42 = uVar44 * local_108 + iVar42;
              puVar22 = (undefined1 *)(iVar42 + 3);
              iVar17 = 0;
              do {
                puVar22[-3] = (char)(((uint)CONCAT11(((uint8_t *)(void *)&local_dc[-1])[iVar13 + 9],
                                                     *(undefined1 *)
                                                      ((int)local_dc + iVar17 * -8 + 1)) * 0xff +
                                     0x7fff) / 0xffff);
                uVar7 = *(ushort *)((int)local_dc + iVar17 * -8 + 2);
                pvVar32 = (void *)(iVar42 + iVar17 * -4);
                iVar21 = iVar17 + -1;
                *(char *)((int)pvVar32 + 1) =
                     (char)((ulonglong)
                            ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                             (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)) + 0x7fff)
                            * 0x2000201 >> 0x29);
                uVar7 = *(ushort *)((int)local_dc + iVar17 * -8 + 4);
                *(char *)((int)pvVar32 + 2) =
                     (char)((ulonglong)
                            ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                             (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)) + 0x7fff)
                            * 0x2000201 >> 0x29);
                puVar27 = ((uint8_t *)(void *)local_dc) + iVar13;
                iVar13 = iVar13 + 8;
                *puVar22 = (char)(((uint)CONCAT11(*(undefined1 *)((int)local_dc + iVar17 * -8 + 6),
                                                  *puVar27) * 0xff + 0x7fff) / 0xffff);
                puVar22 = puVar22 + 4;
                iVar17 = iVar21;
              } while (-iVar21 != uVar44);
            }
          }
          uVar51 = local_d4;
          pbVar12 = local_d8;
          pauVar35 = local_dc;
          local_dc = local_d0;
          local_d8 = local_cc;
          local_d4 = local_c8;
          local_d0 = pauVar35;
          local_cc = pbVar12;
          bVar9 = true;
          local_108 = local_108 + 4;
          uVar44 = local_100 + 1;
          local_c8 = uVar51;
          local_100 = uVar44;
        } while (uVar44 < *puVar39);
      }
      bVar45 = local_ac == local_b4;
switchD_1000d474_caseD_1:
      local_d8 = (byte *)0x0;
      recovered_10008354(local_dc);
      local_cc = (byte *)0x0;
      recovered_10008354(local_d0);
    }
LAB_1000dd24:
    recovered_10008354(local_a8);
  }
  else {
    uVar28 = param_1[1];
    if ((uVar44 != 0) && (bVar45 = false, (int)((ulonglong)uVar28 * (ulonglong)uVar44 >> 0x20) != 0)
       ) goto LAB_1000dd48;
    bVar45 = false;
    if (0x3fffffff < uVar28 * uVar44) goto LAB_1000dd48;
    uVar41 = uVar28 * (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 4;
    iVar42 = 0;
    uVar34 = 0;
    uVar38 = param_1[3];
    uVar23 = param_1[2];
    do {
      uVar43 = 0;
      if ((uint)(&DAT_10017f3c)[iVar42] < uVar44) {
        uVar43 = recovered_100013f0(uVar44 + ~(&DAT_10017f3c)[iVar42],(&DAT_10017f58)[iVar42]);
        uVar43 = uVar43 + 1;
      }
      if ((uint)(&DAT_10017f74)[iVar42] < uVar28) {
        uVar10 = recovered_100013f0(uVar28 + ~(&DAT_10017f74)[iVar42],(&DAT_10017f90)[iVar42]);
        if ((uVar43 != 0) && (uVar10 != 0xffffffff)) {
          uVar15 = 0;
          if ((uVar38 < 7) && (uVar15 = 0, (0x5dU >> (uVar38 & 0xff) & 1) != 0)) {
            uVar15 = *(int *)(&DAT_10017fc8 + uVar38 * 4) * uVar23;
          }
          if (((int)((ulonglong)uVar15 * (ulonglong)uVar43 >> 0x20) != 0) ||
             (uVar43 = (uVar15 * uVar43 + 7 >> 3) + 1,
             (int)((ulonglong)(uVar10 + 1) * (ulonglong)uVar43 >> 0x20) != 0)) {
            bVar45 = false;
            goto LAB_1000dd48;
          }
          uVar43 = uVar43 * (uVar10 + 1);
          bVar45 = false;
          if (CARRY4(uVar43,uVar34)) goto LAB_1000dd48;
          uVar34 = uVar43 + uVar34;
        }
      }
      iVar42 = iVar42 + 1;
    } while (iVar42 != 7);
    local_ac = (byte *)0x0;
    local_b0 = 0;
    local_b4 = (byte *)0x0;
    local_b8 = (void *)0x0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = (void *)0x0;
    local_90 = 0xe;
    bVar9 = recovered_100171fc((int *)&local_c4,param_2,uVar34);
    bVar45 = false;
    if (!bVar9) goto LAB_1000dd2c;
    uVar28 = 0;
    param_4[1] = 0;
    if ((uint)param_4[2] < uVar41) {
      local_90 = 0xf;
      puVar11 = recovered_100082fc(uVar41);
      uVar28 = param_4[1];
      pointer = (undefined4 *)*param_4;
      if (uVar28 != 0) {
        bVar45 = uVar28 == 0x10;
        uVar23 = 0;
        uVar44 = extraout_r3;
        if (0xf < uVar28) {
          uVar44 = (int)puVar11 - (int)pointer;
          bVar45 = uVar44 == 0xf;
        }
        if ((0xf < uVar28 && 0xe < uVar44) && !bVar45) {
          uVar23 = uVar28 & 0xfffffff0;
          uVar44 = uVar23;
          puVar29 = puVar11;
          puVar40 = pointer;
          do {
            uVar51 = *puVar40;
            uVar53 = puVar40[1];
            uVar54 = puVar40[2];
            uVar55 = puVar40[3];
            puVar40 = puVar40 + 4;
            uVar44 = uVar44 - 0x10;
            *puVar29 = uVar51;
            puVar29[1] = uVar53;
            puVar29[2] = uVar54;
            puVar29[3] = uVar55;
            puVar29 = puVar29 + 4;
          } while (uVar44 != 0);
          if (uVar28 == uVar23) goto LAB_1000c6e4;
        }
        iVar42 = uVar28 - uVar23;
        puVar22 = (undefined1 *)((int)puVar11 + uVar23);
        puVar27 = (undefined1 *)((int)pointer + uVar23);
        do {
          iVar42 = iVar42 + -1;
          *puVar22 = *puVar27;
          puVar22 = puVar22 + 1;
          puVar27 = puVar27 + 1;
        } while (iVar42 != 0);
      }
LAB_1000c6e4:
      recovered_10008354(pointer);
      uVar28 = param_4[1];
      param_4[2] = uVar41;
      *param_4 = (int)puVar11;
    }
    while (uVar28 < uVar41) {
      *(undefined1 *)(*param_4 + uVar28) = 0;
      uVar28 = param_4[1] + 1;
      param_4[1] = uVar28;
    }
    uVar28 = param_1[3];
    local_114 = 1;
    if (uVar28 < 7) {
      local_114 = 1;
      if ((((0x5dU >> (uVar28 & 0xff) & 1) != 0) &&
          (7 < param_1[2] * *(int *)(&DAT_10017fc8 + uVar28 * 4))) &&
         (local_114 = 0, (0x5dU >> (uVar28 & 0xff) & 1) != 0)) {
        local_114 = *(int *)(&DAT_10017fc8 + uVar28 * 4) * param_1[2] + 7 >> 3;
      }
    }
    uVar51 = 0;
    uVar53 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uVar54 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    uVar55 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    iVar42 = 0;
    do {
      uVar41 = 0;
      uVar28 = (&DAT_10017f90)[iVar42];
      uVar44 = (&DAT_10017f58)[iVar42];
      uVar23 = (&DAT_10017f3c)[iVar42];
      local_100 = (&DAT_10017f74)[iVar42];
      if (uVar23 < *param_1) {
        uVar41 = recovered_100013f0(*param_1 + ~uVar23,uVar44);
        uVar41 = uVar41 + 1;
      }
      if (local_100 < param_1[1]) {
        uVar34 = recovered_100013f0(param_1[1] + ~local_100,uVar28);
        if ((uVar41 != 0) && (uVar34 != 0xffffffff)) {
          uVar43 = param_1[3];
          bVar45 = false;
          uVar38 = 0;
          if ((uVar43 < 7) && (uVar38 = 0, (0x5dU >> (uVar43 & 0xff) & 1) != 0)) {
            uVar38 = param_1[2] * *(int *)(&DAT_10017fc8 + (uintptr_t)uVar43 * 4);
          }
          if ((int)((ulonglong)uVar38 * (ulonglong)uVar41 >> 0x20) != 0) goto LAB_1000dd2c;
          local_90 = 0x10;
          uVar43 = uVar38 * uVar41 + 7;
          uVar10 = (uVar43 >> 3) + 1;
          local_a4 = recovered_100082fc(uVar10);
          uVar15 = 0;
          uVar38 = uVar43 >> 3;
          recovered_10008354((void *)0x0);
          if (uVar43 < 0x78) {
LAB_1000c94c:
            iVar17 = (uVar38 - uVar15) + 1;
            pbVar12 = local_a4 + uVar15;
            do {
              *pbVar12 = 0;
              iVar17 = iVar17 + -1;
              pbVar12 = pbVar12 + 1;
            } while (iVar17 != 0);
          }
          else {
            uVar15 = uVar10 & 0xfffffff0;
            pbVar12 = local_a4;
            uVar16 = uVar15;
            do {
              *(undefined4 *)pbVar12 = uVar51;
              *(undefined4 *)(pbVar12 + 4) = uVar53;
              *(undefined4 *)(pbVar12 + 8) = uVar54;
              *(undefined4 *)(pbVar12 + 0xc) = uVar55;
              pbVar12 = pbVar12 + 0x10;
              uVar16 = uVar16 - 0x10;
            } while (uVar16 != 0);
            if (uVar10 != uVar15) goto LAB_1000c94c;
          }
          pauVar30 = (uint128 *)0x0;
          local_10c = (byte *)0x0;
          pauVar35 = (uint128 *)0x0;
          if (7 < uVar43) {
            local_90 = 0x11;
            local_a0 = recovered_100082fc(uVar38);
            uVar16 = 0;
            recovered_10008354((void *)0x0);
            uVar15 = 1;
            if (1 < uVar38) {
              uVar15 = uVar38;
            }
            if (uVar43 < 0x80) {
LAB_1000c9e4:
              iVar17 = uVar15 - uVar16;
              puVar22 = (undefined1 *)((int)((uint8_t *)(void *)local_a0) + uVar16);
              do {
                *puVar22 = 0;
                iVar17 = iVar17 + -1;
                puVar22 = puVar22 + 1;
              } while (iVar17 != 0);
            }
            else {
              uVar16 = uVar15 & 0xfffffff0;
              pauVar30 = local_a0;
              uVar18 = uVar16;
              do {
                *(undefined4 *)(uintptr_t)pauVar30 = uVar51;
                *(undefined4 *)((int)((uint8_t *)(void *)pauVar30) + 4) = uVar53;
                *(undefined4 *)((int)((uint8_t *)(void *)pauVar30) + 8) = uVar54;
                *(undefined4 *)((int)((uint8_t *)(void *)pauVar30) + 0xc) = uVar55;
                pauVar30 = pauVar30 + 1;
                uVar18 = uVar18 - 0x10;
              } while (uVar18 != 0);
              if (uVar38 != uVar16) goto LAB_1000c9e4;
            }
            local_90 = 0x12;
            pauVar30 = recovered_100082fc(uVar38);
            uVar16 = 0;
            recovered_10008354((void *)0x0);
            if (0x7f < uVar43) {
              uVar16 = uVar15 & 0xfffffff0;
              uVar43 = 0;
              do {
                puVar11 = (undefined4 *)((int)((uint8_t *)(void *)pauVar30) + uVar43);
                uVar43 = uVar43 + 0x10;
                *puVar11 = uVar51;
                puVar11[1] = uVar53;
                puVar11[2] = uVar54;
                puVar11[3] = uVar55;
              } while (uVar16 != uVar43);
              pauVar35 = local_a0;
              if (uVar38 == uVar16) goto LAB_1000ca74;
            }
            do {
              *(undefined1 *)((int)((uint8_t *)(void *)pauVar30) + uVar16) = 0;
              uVar16 = uVar16 + 1;
              pauVar35 = local_a0;
            } while (uVar15 != uVar16);
          }
LAB_1000ca74:
          local_9c = pauVar35;
          pauVar19 = (uint128 *)(local_a4 + 1);
          iVar17 = (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar44 * 4;
          local_100 = local_100 << 2;
          pbVar12 = (byte *)(uVar23 * 4);
          pbVar24 = pbVar12;
          pauVar35 = (uint128 *)0x0;
          do {
            bVar9 = (byte *)(-2 - uVar38) <= local_ac;
            bVar45 = local_ac == (byte *)(-2 - uVar38);
            if (!bVar9 || bVar45) {
              pbVar24 = local_ac + uVar10;
              bVar9 = local_b4 <= pbVar24;
              bVar45 = pbVar24 == local_b4;
            }
            pauVar8 = pauVar30;
            local_98 = local_9c;
            if (bVar9 && !bVar45) {
switchD_1000cb7c_caseD_1:
              local_9c = pauVar8;
              recovered_10008354(local_9c);
              recovered_10008354(local_98);
              recovered_10008354(local_a4);
              bVar45 = false;
              goto LAB_1000dd2c;
            }
            local_90 = 0x13;
            local_9c = pauVar30;
            recovered_10002f90(local_a4,(byte *)((int)local_b8 + (int)local_ac),uVar10);
            local_90 = 0x14;
            local_ac = pbVar24;
            iVar13 = recovered_100173dc((uint)*local_a4,(undefined8 *)local_9c,pauVar19,pauVar35,
                                        uVar38,local_114);
            pauVar8 = local_9c;
            if ((iVar13 == 0) || (6 < param_1[3])) goto switchD_1000cb7c_caseD_1;
            uVar44 = *param_1;
            iVar13 = *param_4;
            switch((uintptr_t)(param_1[3])) {
            case 0:
              if (param_1[2] == 8) {
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 1;
                pauVar30 = local_9c;
                uVar44 = uVar41;
                do {
                  bVar37 = ((uint8_t *)(void *)pauVar30)[0];
                  uVar23 = param_3[3];
                  bVar5 = *(byte *)(param_3 + 7);
                  pbVar24[1] = bVar37;
                  *pbVar24 = bVar37;
                  pbVar24[-1] = bVar37;
                  uVar44 = uVar44 - 1;
                  pbVar24[2] = -(~bVar5 & 1 | uVar23 != bVar37);
                  pbVar24 = pbVar24 + iVar17;
                  pauVar30 = (uint128 *)((int)((uint8_t *)(void *)pauVar30) + 1);
                } while (uVar44 != 0);
              }
              else {
                iVar21 = (int)((uint8_t *)(void *)local_9c) + 1;
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 1;
                uVar44 = uVar41;
                do {
                  puVar1 = (ushort *)(iVar21 + -1);
                  iVar21 = iVar21 + 2;
                  uVar23 = (*puVar1 & 0xff) << 8 | (uint)(*puVar1 >> 8);
                  pbVar24[2] = -(~*(byte *)(param_3 + 7) & 1 | uVar23 != param_3[3]);
                  uVar44 = uVar44 - 1;
                  bVar37 = (byte)((uVar23 * 0xff + 0x7fff) / 0xffff);
                  pbVar24[1] = bVar37;
                  *pbVar24 = bVar37;
                  pbVar24[-1] = bVar37;
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
              break;
            default:
              goto switchD_1000cb7c_caseD_1;
            case 2:
              if (param_1[2] == 8) {
                pbVar20 = (byte *)((int)((uint8_t *)(void *)local_9c) + 1);
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 3;
                uVar44 = uVar41;
                do {
                  bVar37 = 0xff;
                  if (*(char *)((int)param_3 + 0x1d) == '\x01') {
                    pauVar35 = (uint128 *)param_3[4];
                    bVar45 = pauVar35 == (uint128 *)(uint)pbVar20[-1];
                    if (bVar45) {
                      pauVar35 = (uint128 *)(uint)*pbVar20;
                      pauVar30 = (uint128 *)param_3[5];
                    }
                    if ((bVar45 && pauVar30 == pauVar35) &&
                       (bVar37 = 0, param_3[6] != (uint)pbVar20[1])) {
                      bVar37 = 0xff;
                    }
                  }
                  pbVar24[-3] = pbVar20[-1];
                  uVar44 = uVar44 - 1;
                  pbVar24[-2] = *pbVar20;
                  bVar5 = pbVar20[1];
                  pbVar20 = pbVar20 + 3;
                  *pbVar24 = bVar37;
                  pbVar24[-1] = bVar5;
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
              else {
                iVar21 = (int)((uint8_t *)(void *)local_9c) + 5;
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 1;
                uVar44 = uVar41;
                do {
                  uVar15 = (*(ushort *)(iVar21 + -3) & 0xff) << 8 |
                           (uint)(*(ushort *)(iVar21 + -3) >> 8);
                  uVar23 = (*(ushort *)(iVar21 + -5) & 0xff) << 8 |
                           (uint)(*(ushort *)(iVar21 + -5) >> 8);
                  puVar1 = (ushort *)(iVar21 + -1);
                  iVar21 = iVar21 + 6;
                  uVar43 = (*puVar1 & 0xff) << 8 | (uint)(*puVar1 >> 8);
                  uVar44 = uVar44 - 1;
                  pbVar24[2] = -(~*(byte *)((int)param_3 + 0x1d) & 1 | uVar23 != param_3[4] |
                                 uVar15 != param_3[5] | uVar43 != param_3[6]);
                  pbVar24[1] = (byte)(((uintptr_t)uVar43 * 0xff + 0x7fff) / 0xffff);
                  *pbVar24 = (byte)((uVar15 * 0xff + 0x7fff) / 0xffff);
                  pbVar24[-1] = (byte)((uVar23 * 0xff + 0x7fff) / 0xffff);
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
              break;
            case 3:
              uVar23 = param_3[1];
              pbVar24 = pbVar12 + uVar44 * local_100 + iVar13;
              pauVar30 = local_9c;
              uVar44 = uVar41;
              do {
                pauVar8 = local_9c;
                if (uVar23 >> 2 <= (uint)(byte)((uint8_t *)(void *)pauVar30)[0]) goto switchD_1000cb7c_caseD_1;
                local_90 = 0x15;
                recovered_10002f90(pbVar24,(void *)(*param_3 + (uint)(byte)((uint8_t *)(void *)pauVar30)[0] * 4),4);
                uVar44 = uVar44 - 1;
                pbVar24 = pbVar24 + iVar17;
                pauVar30 = (uint128 *)((int)((uint8_t *)(void *)pauVar30) + 1);
              } while (uVar44 != 0);
              break;
            case 4:
              if (param_1[2] == 8) {
                pbVar20 = (byte *)((int)((uint8_t *)(void *)local_9c) + 1);
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 1;
                uVar44 = uVar41;
                do {
                  bVar37 = pbVar20[-1];
                  uVar44 = uVar44 - 1;
                  *pbVar24 = bVar37;
                  pbVar24[-1] = bVar37;
                  pbVar24[1] = pbVar20[-1];
                  bVar37 = *pbVar20;
                  pbVar20 = pbVar20 + 2;
                  pbVar24[2] = bVar37;
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
              else {
                iVar21 = (int)((uint8_t *)(void *)local_9c) + 1;
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 1;
                uVar44 = uVar41;
                do {
                  uVar7 = *(ushort *)(iVar21 + 1);
                  uVar6 = *(ushort *)(iVar21 + -1);
                  uVar44 = uVar44 - 1;
                  iVar21 = iVar21 + 4;
                  pbVar24[2] = (byte)((ulonglong)
                                      ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                                       (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10))
                                      + 0x7fff) * 0x2000201 >> 0x29);
                  bVar37 = (byte)((ulonglong)
                                  ((((uVar6 & 0xff) << 8 | (uint)(uVar6 >> 8)) * 0x100 -
                                   (((uint)uVar6 << 0x18 | (uint)(uVar6 >> 8) << 0x10) >> 0x10)) +
                                  0x7fff) * 0x2000201 >> 0x29);
                  pbVar24[1] = bVar37;
                  *pbVar24 = bVar37;
                  pbVar24[-1] = bVar37;
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
              break;
            case 6:
              if (param_1[2] == 8) {
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13;
                uVar44 = uVar41;
                pauVar30 = local_9c;
                do {
                  local_90 = 0x16;
                  recovered_10002f90(pbVar24,pauVar30,4);
                  pauVar30 = (uint128 *)((int)((uint8_t *)(void *)pauVar30) + 4);
                  uVar44 = uVar44 - 1;
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
              else {
                iVar21 = (int)((uint8_t *)(void *)local_9c) + 7;
                pbVar24 = pbVar12 + uVar44 * local_100 + iVar13 + 3;
                uVar44 = uVar41;
                do {
                  uVar7 = *(ushort *)(iVar21 + -7);
                  uVar44 = uVar44 - 1;
                  pbVar24[-3] = (byte)((ulonglong)
                                       ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                                        (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)
                                        ) + 0x7fff) * 0x2000201 >> 0x29);
                  uVar7 = *(ushort *)(iVar21 + -5);
                  pbVar24[-2] = (byte)((ulonglong)
                                       ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                                        (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)
                                        ) + 0x7fff) * 0x2000201 >> 0x29);
                  uVar7 = *(ushort *)(iVar21 + -3);
                  pbVar24[-1] = (byte)((ulonglong)
                                       ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                                        (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)
                                        ) + 0x7fff) * 0x2000201 >> 0x29);
                  uVar7 = *(ushort *)(iVar21 + -1);
                  iVar21 = iVar21 + 8;
                  *pbVar24 = (byte)((ulonglong)
                                    ((((uVar7 & 0xff) << 8 | (uint)(uVar7 >> 8)) * 0x100 -
                                     (((uint)uVar7 << 0x18 | (uint)(uVar7 >> 8) << 0x10) >> 0x10)) +
                                    0x7fff) * 0x2000201 >> 0x29);
                  pbVar24 = pbVar24 + iVar17;
                } while (uVar44 != 0);
              }
            }
            local_100 = local_100 + uVar28 * 4;
            pbVar24 = local_10c + 1;
            pauVar35 = local_9c;
            pauVar30 = local_98;
            local_10c = pbVar24;
          } while (pbVar24 < (byte *)(uVar34 + 1));
          recovered_10008354(local_98);
          recovered_10008354(local_9c);
          recovered_10008354(local_a4);
        }
      }
      iVar42 = iVar42 + 1;
    } while (iVar42 != 7);
    bVar45 = local_ac == local_b4;
  }
LAB_1000dd2c:
  local_b4 = (byte *)0x0;
  recovered_10008354(local_b8);
  local_c0 = 0;
  recovered_10008354(local_c4);
LAB_1000dd48:
  recovered_10008a1c(&uStack_94);
  return bVar45;
}

#undef DAT_1000d160
#undef DAT_1000d164
#undef DAT_1000de10
#undef DAT_1000de18
#undef DAT_1000de20
#undef DAT_1000de28
#undef DAT_1000de30
#undef DAT_1000de38
#undef DAT_1000de40
#undef DAT_1000de48
#undef DAT_10017f3c
#undef DAT_10017f58
#undef DAT_10017f74
#undef DAT_10017f90
#undef DAT_10017fc8
#undef DAT_1001c00c
#undef auStackY_1c0
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_100
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef uStack_94
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef auStack_68
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df34
 */

int recovered_1000df34(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 0x28 + -0xc;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x4c) + iVar3);
      puVar1[1] = 0;
      recovered_10008354((void *)*puVar1);
      iVar3 = iVar3 + -0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  recovered_10008354(*(void **)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x44) = 0;
  recovered_10008354(*(void **)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x38) = 0;
  recovered_10008354(*(void **)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  recovered_10008354(*(void **)(param_1 + 0x28));
  return param_1;
}


static const unsigned char pf_literal_1000dfbc_DAT_1000e2e4[] __attribute__((aligned(16)))={0xbc,0x9b,0x00,0x00};
#undef DAT_1000e2e4
#define DAT_1000e2e4 (*(int *)((uintptr_t)pf_literal_1000dfbc_DAT_1000e2e4))
static const unsigned char pf_literal_1000dfbc_DAT_1000e2e8[] __attribute__((aligned(16)))={0x44,0x02,0x00,0x00};
#undef DAT_1000e2e8
#define DAT_1000e2e8 (*(int *)((uintptr_t)pf_literal_1000dfbc_DAT_1000e2e8))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define local_ac (*(uint *)(pf_stack_frame + 20))
#define local_a8 (*(byte * *)(pf_stack_frame + 24))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_a4 (*(ulonglong * *)(pf_stack_frame + 28))
#define local_a0 (*(uint * *)(pf_stack_frame + 32))
#define local_9c (*(uint * *)(pf_stack_frame + 36))
#define local_98 (*(byte * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dfbc
 */

ulonglong * recovered_1000dfbc(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;

  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  recovered_10008354((void *)param_2[2]);
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  recovered_10008354((void *)0x0);
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x244U);
  local_70 = DAT_1000e2e8 + 0x1000e040;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100089f8(&uStack_94);
  if (param_1 != 0) {
    local_90 = 1;
    local_98 = (byte *)0x0;
    local_a0 = param_2;
    puVar1 = recovered_10007004(param_1,((uintptr_t)pf_module_state+0x169U));
    if (puVar1 != (uint *)0x0) {
      local_90 = 2;
      local_98 = (byte *)0x0;
      local_9c = puVar1;
      iVar2 = recovered_10007a24((int *)puVar1,0,2);
      if (iVar2 == 0) {
        local_90 = 3;
        local_98 = (byte *)0x0;
        puVar7 = (ulonglong *)recovered_10007ad4((int)local_9c);
        if (-1 < (int)puVar7) {
          local_90 = 4;
          local_98 = (byte *)0x0;
          local_a4 = puVar7;
          iVar2 = recovered_10007a24((int *)local_9c,0,0);
          if (iVar2 == 0) {
            if (local_a4 == (ulonglong *)0x0) {
              local_ac = 1;
              local_a8 = (byte *)0x0;
            }
            else {
              local_90 = 5;
              local_98 = (byte *)0x0;
              pbVar3 = recovered_100082fc((uint)local_a4);
              puVar1 = local_9c;
              puVar7 = local_a4;
              recovered_10008354((void *)0x0);
              puVar6 = (ulonglong *)0x0;
              if (puVar7 < &DataAbort) {
LAB_1000e1c4:
                iVar2 = (int)puVar7 - (int)puVar6;
                pbVar5 = pbVar3 + (int)puVar6;
                do {
                  *pbVar5 = 0;
                  iVar2 = iVar2 + -1;
                  pbVar5 = pbVar5 + 1;
                } while (iVar2 != 0);
              }
              else {
                puVar6 = (ulonglong *)((uint)puVar7 & 0x7ffffff0);
                puVar4 = puVar6;
                pbVar5 = pbVar3;
                do {
                  pbVar5[0] = 0;
                  pbVar5[1] = 0;
                  pbVar5[2] = 0;
                  pbVar5[3] = 0;
                  *(undefined4 *)(pbVar5 + 4) =
                       *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
                  *(undefined4 *)(pbVar5 + 8) =
                       *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
                  *(undefined4 *)(pbVar5 + 0xc) =
                       *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
                  pbVar5 = pbVar5 + 0x10;
                  puVar4 = puVar4 + -2;
                } while (puVar4 != (ulonglong *)0x0);
                if (puVar7 != puVar6) goto LAB_1000e1c4;
              }
              local_90 = 6;
              local_a8 = pbVar3;
              local_98 = pbVar3;
              puVar7 = (ulonglong *)recovered_10007580(pbVar3,1,(int)puVar7,(int *)puVar1);
              local_ac = (uint)(puVar7 == local_a4);
            }
            local_90 = 8;
            local_98 = local_a8;
            iVar2 = recovered_10007488(local_9c);
            puVar7 = (ulonglong *)0x0;
            pbVar3 = local_a8;
            if ((local_ac & iVar2 == 0) != 0) {
              local_90 = 9;
              local_98 = local_a8;
              puVar7 = recovered_10009a68(local_a8,local_a4,local_a0);
              pbVar3 = local_a8;
            }
            goto LAB_1000e0d8;
          }
        }
      }
      local_90 = 7;
      local_98 = (byte *)0x0;
      recovered_10007488(local_9c);
      puVar7 = (ulonglong *)0x0;
      pbVar3 = (byte *)0x0;
      goto LAB_1000e0d8;
    }
  }
  pbVar3 = (byte *)0x0;
  puVar7 = (ulonglong *)0x0;
LAB_1000e0d8:
  recovered_10008354(pbVar3);
  recovered_10008a1c(&uStack_94);
  return puVar7;
}

#undef DAT_1000e2e4
#undef DAT_1000e2e8
#undef DAT_1001c00c
#undef EXT_00000010
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_b0
#undef local_ac
#undef local_a8
#undef uStack_94
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98

static const unsigned char pf_literal_1000e2ec_DAT_1000f2fc[] __attribute__((aligned(16)))={0xc8,0x98,0x00,0x00};
#undef DAT_1000f2fc
#define DAT_1000f2fc (*(int *)((uintptr_t)pf_literal_1000e2ec_DAT_1000f2fc))
static const unsigned char pf_literal_1000e2ec_DAT_1000f300[] __attribute__((aligned(16)))={0x00,0x0f,0x00,0x00};
#undef DAT_1000f300
#define DAT_1000f300 (*(int *)((uintptr_t)pf_literal_1000e2ec_DAT_1000f300))
#undef DAT_10017ad2
#define DAT_10017ad2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_10017ad7
#define DAT_10017ad7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_10017b07
#define DAT_10017b07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_118 (*(uint128 * *)(pf_stack_frame + 24))
#define local_114 (*(uint128 * *)(pf_stack_frame + 28))
#define local_110 (*(uint * *)(pf_stack_frame + 32))
#define local_10c (*(undefined1 * *)(pf_stack_frame + 36))
#define local_108 (*(undefined1 * *)(pf_stack_frame + 40))
#define local_104 (*(int *)(pf_stack_frame + 44))
#define local_100 (*(undefined1 * *)(pf_stack_frame + 48))
#define local_fc (*(uint *)(pf_stack_frame + 52))
#define local_f8 (*(int *)(pf_stack_frame + 56))
#define local_f4 (*(int *)(pf_stack_frame + 60))
#define local_f0 (*(int *)(pf_stack_frame + 64))
#define local_ec (*(int *)(pf_stack_frame + 68))
#define local_e8 (*(byte * *)(pf_stack_frame + 72))
#define local_e4 (*(uint128 * *)(pf_stack_frame + 76))
#define local_e0 (*(uint128 * *)(pf_stack_frame + 80))
#define local_dc (*(uint128 * *)(pf_stack_frame + 84))
#define local_d8 (*(undefined8 * *)(pf_stack_frame + 88))
#define local_d4 (*(uint128 * *)(pf_stack_frame + 92))
#define local_d0 (*(uint128 * *)(pf_stack_frame + 96))
#define local_cc (*(uint128 * *)(pf_stack_frame + 100))
#define local_c8 (*(uint128 * *)(pf_stack_frame + 104))
#define local_c4 (*(undefined8 * *)(pf_stack_frame + 108))
#define local_c0 (*(uint128 * *)(pf_stack_frame + 112))
#define local_bc (*(uint128 * *)(pf_stack_frame + 116))
#define local_b8 (*(uint128 * *)(pf_stack_frame + 120))
#define local_b1 (*(byte *)(pf_stack_frame + 127))
#define local_b0 (*(undefined1 *)(pf_stack_frame + 128))
#define local_af (*(undefined1 *)(pf_stack_frame + 129))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 16))
#define local_ae (*(undefined1 *)(pf_stack_frame + 130))
#define local_ad (*(undefined1 *)(pf_stack_frame + 131))
#define local_ac (*(undefined1 *)(pf_stack_frame + 132))
#define local_ab (*(undefined1 *)(pf_stack_frame + 133))
#define local_aa (*(undefined1 *)(pf_stack_frame + 134))
#define local_a9 (*(undefined4 *)(pf_stack_frame + 135))
#define local_a5 (*(undefined1 *)(pf_stack_frame + 139))
#define local_a4 (*(uint128 * *)(pf_stack_frame + 140))
#define local_a0 (*(uint128 * *)(pf_stack_frame + 144))
#define local_9c (*(uint128 * *)(pf_stack_frame + 148))
#define local_98 (*(uint128 * *)(pf_stack_frame + 152))
#define local_90 (*(undefined4 *)(pf_stack_frame + 160))
#define local_7c (*(undefined4 *)(pf_stack_frame + 180))
#define local_78 (*(int *)(pf_stack_frame + 184))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 188))
#define local_70 (*(int *)(pf_stack_frame + 192))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 196))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 156))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e2ec
 */

byte recovered_1000e2ec(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint128 *pauVar11;
  uint128 *pauVar12;
  undefined1 *puVar13;
  uint128 *pauVar14;
  uint128 *pauVar15;
  undefined8 *puVar16;
  uint128 *pauVar17;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint uVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint128 *pauVar23;
  uint128 *pauVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint128 *pauVar34;
  byte *pbVar35;
  byte *pbVar36;
  bool bVar37;
  uint128 auVar38;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x25cU);
  local_70 = DAT_1000f300 + 0x1000e34c;
  recovered_100089f8(&uStack_94);
  bVar25 = 0;
  bVar26 = 0;
  if (param_1 == 0 || param_2 == 0) goto LAB_1000e378;
  uVar8 = param_3;
  if (0 < (int)param_3) {
    uVar8 = param_4;
  }
  if ((int)uVar8 < 1) goto LAB_1000e378;
  local_90 = 0xffffffff;
  local_d4 = (uint128 *)param_2;
  puVar6 = recovered_10007004(param_1,((uintptr_t)pf_module_state+0x127U));
  if (puVar6 == (uint *)0x0) goto LAB_1000e378;
  local_90 = 0xffffffff;
  iVar7 = recovered_100078ac(((uintptr_t)pf_module_state+0x368U),1,8,puVar6);
  if (iVar7 == 8) {
    local_a9 = 0x608;
    local_a5 = 0;
    local_aa = (undefined1)param_4;
    local_ae = (undefined1)param_3;
    local_90 = 0xffffffff;
    local_ab = (undefined1)(param_4 >> 8);
    local_ac = (undefined1)(param_4 >> 0x10);
    local_ad = (undefined1)(param_4 >> 0x18);
    local_af = (undefined1)(param_3 >> 8);
    local_b0 = (undefined1)(param_3 >> 0x10);
    local_b1 = (byte)(param_3 >> 0x18);
    uVar8 = recovered_1000f304(puVar6,&DAT_10017ad2,&local_b1,0xd);
    if (uVar8 != 0) {
      if ((param_3 < 0x40000000) &&
         (uVar8 = param_3 << 2 | 1, (int)((ulonglong)param_4 * (ulonglong)uVar8 >> 0x20) == 0)) {
        local_b8 = (uint128 *)(uVar8 * param_4);
        local_90 = 1;
        local_110 = puVar6;
        local_fc = uVar8;
        local_e0 = (uint128 *)param_4;
        local_dc = (uint128 *)param_3;
        local_a4 = recovered_100082fc((uint)local_b8);
        pauVar12 = local_dc;
        pauVar23 = (uint128 *)((int)(uintptr_t)local_dc * 4);
        recovered_10008354((void *)0x0);
        puVar9 = (undefined8 *)0x0;
        local_d8 = (undefined8 *)local_b8;
        if (local_b8 < (undefined8 *)0x2) {
          local_d8 = (undefined8 *)0x1;
        }
        if (local_b8 < &DataAbort) {
LAB_1000e518:
          iVar7 = (int)local_d8 - (int)puVar9;
          puVar10 = ((uint8_t *)(void *)local_a4) + (int)puVar9;
          do {
            *puVar10 = 0;
            iVar7 = iVar7 + -1;
            puVar10 = puVar10 + 1;
          } while (iVar7 != 0);
        }
        else {
          puVar9 = (undefined8 *)((uint)local_d8 & 0xfffffff0);
          pauVar11 = local_a4;
          puVar33 = puVar9;
          do {
            *(undefined8 *)(uintptr_t)pauVar11 = 0;
            *(undefined8 *)(((uint8_t *)(void *)pauVar11) + 8) = 0;
            pauVar11 = pauVar11 + 1;
            puVar33 = puVar33 + -2;
          } while (puVar33 != (undefined8 *)0x0);
          if (local_b8 != (uint128 *)puVar9) goto LAB_1000e518;
        }
        local_100 = ((uint8_t *)(void *)pauVar23) + 1;
        local_114 = (uint128 *)((uint)pauVar23 & 0xfffffff0);
        pauVar34 = (uint128 *)0x0;
        puVar9 = (undefined8 *)(((uint8_t *)(void *)local_a4) + 1);
        local_108 = ((uint8_t *)(void *)&pauVar23[-1]) + 0xc;
        pbVar36 = ((uint8_t *)(void *)local_d4) + 4;
        local_10c = (undefined1 *)((uint)local_108 & 0xfffffff0);
        pauVar17 = (uint128 *)(((uint8_t *)(void *)local_a4) + 5);
        local_104 = (int)pauVar12 * -4;
        local_118 = (uint128 *)((uint)local_10c | 4);
        pauVar11 = local_d4;
        local_e4 = pauVar23;
        do {
          local_e8 = ((uint8_t *)(void *)local_d4) + (int)pauVar34 * (int)local_e4;
          bVar25 = *local_e8;
          uVar8 = (uint)bVar25;
          local_ec = (int)(char)bVar25;
          if (local_ec < 0) {
            uVar8 = 0x100 - uVar8;
          }
          local_bc = (uint128 *)0x0;
          if (pauVar34 != (uint128 *)0x0) {
            local_bc = (uint128 *)(local_e8 + local_104);
          }
          if (local_bc == (uint128 *)0x0) {
            uVar27 = (uint)local_e8[2];
            uVar22 = (uint)local_e8[1];
            uVar18 = (uint)local_e8[3];
            local_f0 = (int)(char)local_e8[2];
            local_f4 = (int)(char)local_e8[1];
            if (local_f0 < 0) {
              uVar27 = 0x100 - uVar27;
            }
            if (local_f4 < 0) {
              uVar22 = 0x100 - uVar22;
            }
            local_f8 = (int)(char)local_e8[3];
            if (local_f8 < 0) {
              uVar18 = 0x100 - uVar18;
            }
            uVar18 = uVar22 + uVar8 + uVar27 + uVar18;
            local_b8 = (uint128 *)0xffffffff;
            uVar8 = 0xffffffff;
          }
          else {
            uVar32 = (uint)local_e8[1];
            uVar27 = uVar32 - (byte)((uint8_t *)(void *)local_bc)[1];
            uVar18 = (uint)local_e8[3];
            uVar22 = (uint)local_e8[2];
            uVar30 = local_ec - (uint)(byte)((uint8_t *)(void *)local_bc)[0];
            uVar28 = uVar27 & 0xff;
            local_f8 = (int)(char)local_e8[3];
            if ((char)uVar27 < '\0') {
              uVar28 = 0x100 - uVar28;
            }
            uVar27 = uVar30 & 0xff;
            if ((char)uVar30 < '\0') {
              uVar27 = 0x100 - uVar27;
            }
            uVar30 = uVar22 - (byte)((uint8_t *)(void *)local_bc)[2];
            uVar29 = uVar30 & 0xff;
            if ((char)uVar30 < '\0') {
              uVar29 = 0x100 - uVar29;
            }
            uVar30 = uVar18 - (byte)((uint8_t *)(void *)local_bc)[3];
            uVar31 = uVar30 & 0xff;
            if ((char)uVar30 < '\0') {
              uVar31 = 0x100 - uVar31;
            }
            local_b8 = (uint128 *)(uVar27 + uVar28 + uVar29 + uVar31);
            local_f0 = (int)(char)local_e8[2];
            local_f4 = (int)(char)local_e8[1];
            if (local_f0 < 0) {
              uVar22 = 0x100 - uVar22;
            }
            if (local_f4 < 0) {
              uVar32 = 0x100 - uVar32;
            }
            if (local_f8 < 0) {
              uVar18 = 0x100 - uVar18;
            }
            uVar18 = uVar32 + uVar8 + uVar22 + uVar18;
            uVar8 = 0;
          }
          uVar22 = uVar18;
          if (pauVar12 == (uint128 *)0x1) {
            uVar28 = 0;
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            pbVar20 = ((uint8_t *)(void *)local_bc) + 4;
            uVar28 = 0;
            pbVar35 = pbVar36;
            puVar10 = local_108;
            do {
              bVar26 = *pbVar35;
              uVar32 = (uint)bVar26;
              uVar30 = uVar32 - pbVar35[-4];
              if ((char)bVar26 < 0) {
                uVar32 = 0x100 - uVar32;
              }
              bVar37 = CARRY4(uVar22,uVar32);
              uVar22 = uVar22 + uVar32;
              uVar32 = uVar30 & 0xff;
              uVar27 = uVar27 + bVar37;
              if ((char)uVar30 < '\0') {
                uVar32 = 0x100 - uVar32;
              }
              bVar37 = CARRY4(uVar18,uVar32);
              uVar18 = uVar18 + uVar32;
              uVar28 = uVar28 + bVar37;
              if (local_bc != (uint128 *)0x0) {
                uVar30 = (int)(char)bVar26 - (uint)*pbVar20;
                uVar32 = uVar30 & 0xff;
                if ((char)uVar30 < '\0') {
                  uVar32 = 0x100 - uVar32;
                }
                bVar37 = CARRY4((uint)local_b8,uVar32);
                local_b8 = (uint128 *)((int)local_b8 + uVar32);
                uVar8 = uVar8 + bVar37;
              }
              pbVar35 = pbVar35 + 1;
              pbVar20 = pbVar20 + 1;
              puVar10 = puVar10 + -1;
            } while (puVar10 != (undefined1 *)0x0);
          }
          bVar37 = uVar28 <= uVar27 && (uint)(uVar22 <= uVar18) <= uVar28 - uVar27;
          if (bVar37) {
            uVar27 = uVar28;
          }
          if (bVar37) {
            uVar22 = uVar18;
          }
          cVar5 = '\x02';
          if (uVar27 < uVar8 || uVar8 - uVar27 < (uint)(uVar22 <= local_b8)) {
            cVar5 = bVar37;
          }
          if (local_bc == (uint128 *)0x0) {
            cVar5 = bVar37;
          }
          pcVar19 = ((uint8_t *)(void *)local_a4) + (int)pauVar34 * local_fc;
          *pcVar19 = cVar5;
          local_c0 = (uint128 *)pbVar36;
          local_d0 = pauVar17;
          local_cc = pauVar11;
          local_c8 = pauVar34;
          local_c4 = puVar9;
          if (cVar5 == '\x02') {
            if (local_bc != (uint128 *)0x0) {
              pauVar23 = (uint128 *)0x0;
              if (local_dc < (uint128 *)&UndefinedInstruction) goto LAB_1000e970;
              pauVar23 = local_114;
              puVar33 = puVar9;
              pauVar12 = local_bc;
              pauVar17 = pauVar11;
              do {
                auVar38 = *pauVar12;
                pauVar12 = pauVar12 + 1;
                pauVar23 = pauVar23 + -1;
                auVar1 = *pauVar17;
                pauVar17 = pauVar17 + 1;
                auVar38 = VectorSub(auVar1,auVar38,1);
                *puVar33 = PF_PART8(auVar38, 0);
                puVar33[1] = PF_PART8(auVar38, 8);
                puVar33 = puVar33 + 2;
              } while (pauVar23 != (uint128 *)0x0);
              for (pauVar23 = local_114; local_e4 != pauVar23;
                  pauVar23 = (uint128 *)(((uint8_t *)(void *)pauVar23) + 1)) {
LAB_1000e970:
                *(undefined1 *)((int)puVar9 + (int)pauVar23) =
                     ((uint8_t *)(void *)pauVar23)[(int)(uintptr_t)pauVar11] - ((uint8_t *)(void *)pauVar23)[(int)(uintptr_t)local_bc];
              }
              goto LAB_1000e5c0;
            }
LAB_1000e58c:
            local_90 = 2;
            recovered_10002f90(pcVar19 + 1,local_e8,(uint)local_e4);
          }
          else {
            if (cVar5 != '\x01') goto LAB_1000e58c;
            pcVar19[4] = (char)local_f8;
            pcVar19[3] = (char)local_f0;
            pcVar19[2] = (char)local_f4;
            pcVar19[1] = bVar25;
            if (local_dc != (uint128 *)0x1) {
              pauVar23 = (uint128 *)&UndefinedInstruction;
              if ((undefined1 *)0xf < local_108) {
                puVar10 = (undefined1 *)0x0;
                do {
                  puVar33 = (undefined8 *)(puVar10 + (int)(uintptr_t)pauVar17);
                  auVar38 = VectorSub(*(uint128 *)(pbVar36 + (int)puVar10),
                                      *(uint128 *)(puVar10 + (int)(uintptr_t)pauVar11),1);
                  puVar10 = puVar10 + 0x10;
                  *puVar33 = PF_PART8(auVar38, 0);
                  puVar33[1] = PF_PART8(auVar38, 8);
                } while (local_10c != puVar10);
                pauVar23 = local_118;
                if (local_108 == local_10c) goto LAB_1000e5c0;
              }
              do {
                *(undefined1 *)((int)puVar9 + (int)pauVar23) =
                     ((uint8_t *)(void *)pauVar23)[(int)(uintptr_t)pauVar11] - (((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11)[-4];
                pauVar23 = (uint128 *)(((uint8_t *)(void *)pauVar23) + 1);
              } while (local_e4 != pauVar23);
            }
          }
LAB_1000e5c0:
          pauVar34 = (uint128 *)(((uint8_t *)(void *)local_c8) + 1);
          pauVar11 = (uint128 *)(((uint8_t *)(void *)local_e4) + (int)(uintptr_t)local_cc);
          puVar9 = (undefined8 *)((int)local_c4 + (int)local_100);
          pbVar36 = (byte *)((int)local_c0 + (int)local_e4);
          pauVar17 = (uint128 *)(local_100 + (int)(uintptr_t)local_d0);
          pauVar12 = local_dc;
        } while (pauVar34 != local_e0);
        local_90 = 3;
        local_9c = (uint128 *)0x0;
        pauVar11 = recovered_100082fc(4);
        recovered_10008354((void *)0x0);
        pauVar23 = (uint128 *)&UndefinedInstruction;
        *(undefined2 *)(uintptr_t)pauVar11 = 0x178;
        pauVar12 = (uint128 *)0x2;
        local_bc = (uint128 *)(undefined8 *)0x0;
        puVar9 = local_d8;
LAB_1000e9dc:
        do {
          local_c8 = (uint128 *)((int)puVar9 - (int)local_bc);
          local_c0 = (uint128 *)0xffff;
          if (local_c8 < 0xffff) {
            local_c0 = local_c8;
          }
          local_b8 = pauVar12;
          if (pauVar12 == pauVar23) {
            pauVar17 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar17 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar17 <= pauVar23) goto LAB_1000eacc;
            local_90 = 4;
            local_d4 = pauVar17;
            local_d0 = pauVar23;
            local_cc = pauVar11;
            local_98 = pauVar11;
            pauVar11 = recovered_100082fc((uint)pauVar17);
            pauVar17 = local_b8;
            pauVar23 = local_d4;
            if (local_d0 != (uint128 *)0x0) {
              bVar37 = local_d0 == (uint128 *)&DataAbort;
              pauVar12 = (uint128 *)0x0;
              uVar8 = extraout_r1;
              if ((uint128 *)0xf < local_d0) {
                uVar8 = (int)pauVar11 - (int)local_cc;
                bVar37 = uVar8 == 0xf;
              }
              if (((uint128 *)0xf < local_d0 && 0xe < uVar8) && !bVar37) {
                pauVar12 = (uint128 *)((uint)local_d0 & 0xfffffff0);
                pauVar34 = pauVar12;
                pauVar14 = local_cc;
                pauVar15 = pauVar11;
                do {
                  auVar38 = *pauVar14;
                  pauVar14 = pauVar14 + 1;
                  pauVar34 = pauVar34 + -1;
                  *(longlong *)(uintptr_t)pauVar15 = PF_PART8(auVar38, 0);
                  *(longlong *)(((uint8_t *)(void *)pauVar15) + 8) = PF_PART8(auVar38, 8);
                  pauVar15 = pauVar15 + 1;
                } while (pauVar34 != (uint128 *)0x0);
                if (local_d0 == pauVar12) goto LAB_1000eab4;
              }
              iVar7 = (int)local_d0 - (int)pauVar12;
              puVar10 = ((uint8_t *)(void *)pauVar12) + (int)(uintptr_t)pauVar11;
              puVar21 = ((uint8_t *)(void *)pauVar12) + (int)(uintptr_t)local_cc;
              do {
                iVar7 = iVar7 + -1;
                *puVar10 = *puVar21;
                puVar10 = puVar10 + 1;
                puVar21 = puVar21 + 1;
              } while (iVar7 != 0);
            }
LAB_1000eab4:
            recovered_10008354(local_cc);
            puVar9 = local_d8;
          }
          else {
LAB_1000eacc:
            pauVar17 = pauVar12;
          }
          local_c4 = (undefined8 *)((int)local_c0 + (int)local_bc);
          pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 1);
          ((uint8_t *)(void *)pauVar17)[(int)(uintptr_t)pauVar11] = local_c4 == puVar9;
          if (pauVar12 == pauVar23) {
            pauVar34 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar34 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar34) {
              local_90 = 5;
              local_dc = pauVar12;
              local_d4 = pauVar23;
              local_d0 = pauVar11;
              local_cc = pauVar34;
              local_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar34);
              pauVar17 = local_b8;
              pauVar23 = local_cc;
              pauVar12 = local_dc;
              if (local_d4 != (uint128 *)0x0) {
                bVar37 = local_dc == (uint128 *)&DataAbort;
                pauVar34 = (uint128 *)0x0;
                uVar8 = extraout_r1_00;
                if ((uint128 *)0xf < local_dc) {
                  uVar8 = (int)pauVar11 - (int)local_d0;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < local_dc && 0xe < uVar8) && !bVar37) {
                  pauVar34 = (uint128 *)((uint)local_dc & 0xfffffff0);
                  pauVar14 = pauVar34;
                  pauVar15 = local_d0;
                  pauVar24 = pauVar11;
                  do {
                    auVar38 = *pauVar15;
                    pauVar15 = pauVar15 + 1;
                    pauVar14 = pauVar14 + -1;
                    *(longlong *)(uintptr_t)pauVar24 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar24) + 8) = PF_PART8(auVar38, 8);
                    pauVar24 = pauVar24 + 1;
                  } while (pauVar14 != (uint128 *)0x0);
                  if (local_dc == pauVar34) goto LAB_1000eba8;
                }
                puVar13 = (undefined1 *)((int)local_b8 + (1 - (int)pauVar34));
                puVar10 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)local_d0;
                do {
                  puVar13 = puVar13 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (puVar13 != (undefined1 *)0x0);
              }
LAB_1000eba8:
              recovered_10008354(local_d0);
              puVar9 = local_d8;
            }
          }
          pauVar34 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 2);
          ((uint8_t *)(void *)pauVar12)[(int)(uintptr_t)pauVar11] = (char)local_c0;
          if (pauVar34 == pauVar23) {
            pauVar12 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar12 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar12) {
              local_90 = 6;
              local_dc = pauVar34;
              local_d4 = pauVar11;
              local_d0 = pauVar12;
              local_cc = pauVar23;
              local_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar12);
              pauVar17 = local_b8;
              if (local_cc != (uint128 *)0x0) {
                bVar37 = local_cc == (uint128 *)&DataAbort;
                pauVar23 = (uint128 *)0x0;
                uVar8 = extraout_r1_01;
                if ((uint128 *)0xf < local_cc) {
                  uVar8 = (int)pauVar11 - (int)local_d4;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < local_cc && 0xe < uVar8) && !bVar37) {
                  pauVar23 = (uint128 *)((uint)local_cc & 0xfffffff0);
                  pauVar12 = pauVar23;
                  pauVar34 = local_d4;
                  pauVar14 = pauVar11;
                  do {
                    auVar38 = *pauVar34;
                    pauVar34 = pauVar34 + 1;
                    pauVar12 = pauVar12 + -1;
                    *(longlong *)(uintptr_t)pauVar14 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar14) + 8) = PF_PART8(auVar38, 8);
                    pauVar14 = pauVar14 + 1;
                  } while (pauVar12 != (uint128 *)0x0);
                  if (local_cc == pauVar23) goto LAB_1000ec78;
                }
                iVar7 = (int)local_cc - (int)pauVar23;
                puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)local_d4;
                do {
                  iVar7 = iVar7 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar7 != 0);
              }
LAB_1000ec78:
              recovered_10008354(local_d4);
              pauVar34 = local_dc;
              pauVar23 = local_d0;
              puVar9 = local_d8;
            }
          }
          pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 3);
          ((uint8_t *)(void *)pauVar34)[(int)(uintptr_t)pauVar11] = (char)((uint)local_c0 >> 8);
          if (pauVar12 == pauVar23) {
            pauVar34 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar34 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar34) {
              local_90 = 7;
              local_dc = pauVar12;
              local_d4 = pauVar11;
              local_d0 = pauVar23;
              local_cc = pauVar34;
              local_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar34);
              pauVar17 = local_b8;
              if (local_d0 != (uint128 *)0x0) {
                bVar37 = local_d0 == (uint128 *)&DataAbort;
                pauVar23 = (uint128 *)0x0;
                uVar8 = extraout_r1_02;
                if ((uint128 *)0xf < local_d0) {
                  uVar8 = (int)pauVar11 - (int)local_d4;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < local_d0 && 0xe < uVar8) && !bVar37) {
                  pauVar23 = (uint128 *)((uint)local_d0 & 0xfffffff0);
                  pauVar12 = pauVar23;
                  pauVar34 = local_d4;
                  pauVar14 = pauVar11;
                  do {
                    auVar38 = *pauVar34;
                    pauVar34 = pauVar34 + 1;
                    pauVar12 = pauVar12 + -1;
                    *(longlong *)(uintptr_t)pauVar14 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar14) + 8) = PF_PART8(auVar38, 8);
                    pauVar14 = pauVar14 + 1;
                  } while (pauVar12 != (uint128 *)0x0);
                  if (local_d0 == pauVar23) goto LAB_1000ed54;
                }
                iVar7 = (int)local_d0 - (int)pauVar23;
                puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)local_d4;
                do {
                  iVar7 = iVar7 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar7 != 0);
              }
LAB_1000ed54:
              recovered_10008354(local_d4);
              pauVar23 = local_cc;
              pauVar12 = local_dc;
              puVar9 = local_d8;
            }
          }
          pauVar34 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 4);
          pauVar14 = (uint128 *)((uint)local_c0 ^ 0xffff);
          ((uint8_t *)(void *)pauVar12)[(int)(uintptr_t)pauVar11] = (char)pauVar14;
          if (pauVar34 == pauVar23) {
            pauVar12 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar12 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar12) {
              local_90 = 8;
              local_e0 = pauVar34;
              local_dc = pauVar14;
              local_d4 = pauVar11;
              local_d0 = pauVar12;
              local_cc = pauVar23;
              local_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar12);
              pauVar17 = local_b8;
              pauVar34 = local_e0;
              if (local_cc != (uint128 *)0x0) {
                bVar37 = local_cc == (uint128 *)&DataAbort;
                pauVar23 = (uint128 *)0x0;
                uVar8 = extraout_r1_03;
                if ((uint128 *)0xf < local_cc) {
                  uVar8 = (int)pauVar11 - (int)local_d4;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < local_cc && 0xe < uVar8) && !bVar37) {
                  pauVar23 = (uint128 *)((uint)local_cc & 0xfffffff0);
                  pauVar12 = pauVar23;
                  pauVar14 = local_d4;
                  pauVar15 = pauVar11;
                  do {
                    auVar38 = *pauVar14;
                    pauVar14 = pauVar14 + 1;
                    pauVar12 = pauVar12 + -1;
                    *(longlong *)(uintptr_t)pauVar15 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar15) + 8) = PF_PART8(auVar38, 8);
                    pauVar15 = pauVar15 + 1;
                  } while (pauVar12 != (uint128 *)0x0);
                  if (local_cc == pauVar23) goto LAB_1000ee44;
                }
                iVar7 = (int)local_cc - (int)pauVar23;
                puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)local_d4;
                do {
                  iVar7 = iVar7 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar7 != 0);
              }
LAB_1000ee44:
              recovered_10008354(local_d4);
              pauVar14 = local_dc;
              pauVar23 = local_d0;
              puVar9 = local_d8;
            }
          }
          pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 5);
          ((uint8_t *)(void *)pauVar34)[(int)(uintptr_t)pauVar11] = (char)((uint)pauVar14 >> 8);
          if ((uint128 *)puVar9 != local_bc) {
            pauVar34 = (uint128 *)(((uint8_t *)(void *)pauVar12) + (int)local_c0);
            local_d0 = local_a4;
            if (pauVar23 < pauVar34) {
              local_e4 = local_a4;
              if (pauVar23 == (uint128 *)0x0) {
                pauVar23 = (uint128 *)&UndefinedInstruction;
              }
              do {
                local_e0 = pauVar23;
                pauVar23 = (uint128 *)((int)local_e0 << 1);
              } while (local_e0 < pauVar34);
              local_90 = 9;
              local_dc = pauVar34;
              local_d4 = pauVar12;
              local_cc = pauVar11;
              local_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)local_e0);
              pauVar17 = local_b8;
              pauVar12 = local_d4;
              pauVar23 = local_e0;
              if (local_d4 != (uint128 *)0x0) {
                bVar37 = local_d4 == (uint128 *)&DataAbort;
                pauVar34 = (uint128 *)0x0;
                uVar8 = extraout_r1_04;
                if ((uint128 *)0xf < local_d4) {
                  uVar8 = (int)pauVar11 - (int)local_cc;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < local_d4 && 0xe < uVar8) && !bVar37) {
                  pauVar34 = (uint128 *)((uint)local_d4 & 0xfffffff0);
                  pauVar14 = pauVar34;
                  pauVar15 = local_cc;
                  pauVar24 = pauVar11;
                  do {
                    auVar38 = *pauVar15;
                    pauVar15 = pauVar15 + 1;
                    pauVar14 = pauVar14 + -1;
                    *(longlong *)(uintptr_t)pauVar24 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar24) + 8) = PF_PART8(auVar38, 8);
                    pauVar24 = pauVar24 + 1;
                  } while (pauVar14 != (uint128 *)0x0);
                  if (local_d4 == pauVar34) goto LAB_1000ef48;
                }
                puVar13 = (undefined1 *)((int)local_b8 + (5 - (int)pauVar34));
                puVar10 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)local_cc;
                do {
                  puVar13 = puVar13 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (puVar13 != (undefined1 *)0x0);
              }
LAB_1000ef48:
              recovered_10008354(local_cc);
              pauVar14 = local_e4;
              pauVar34 = local_dc;
              puVar9 = local_d8;
            }
            else {
              pauVar14 = local_a4;
            }
            pauVar14 = (uint128 *)(((uint8_t *)(void *)pauVar14) + (int)local_bc);
            if ((local_c8 < 0x10) ||
               (((uint8_t *)(void *)pauVar17) + (5 - (int)((int)local_bc + (int)local_a4)) + (int)(uintptr_t)pauVar11 <
                (undefined1 *)0x10)) {
              pauVar15 = pauVar14;
LAB_1000efa0:
              do {
                puVar10 = (uint8_t *)(void *)pauVar15;
                ((uint8_t *)(void *)pauVar12)[(int)(uintptr_t)pauVar11] = ((uint8_t *)(void *)pauVar15)[0];
                pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar12) + 1);
                pauVar15 = (uint128 *)(puVar10 + 1);
              } while ((uint128 *)(puVar10 + 1) !=
                       (uint128 *)(((uint8_t *)(void *)local_d0) + (int)local_c4));
            }
            else {
              uVar18 = (uint)local_c0 & 0xfff0;
              pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar12) + uVar18);
              pauVar15 = (uint128 *)(((uint8_t *)(void *)pauVar14) + uVar18);
              puVar33 = (undefined8 *)(((uint8_t *)(void *)pauVar11) + (int)(((uint8_t *)(void *)pauVar17) + 5));
              uVar8 = uVar18;
              do {
                auVar38 = *pauVar14;
                pauVar14 = pauVar14 + 1;
                uVar8 = uVar8 - 0x10;
                *puVar33 = PF_PART8(auVar38, 0);
                puVar33[1] = PF_PART8(auVar38, 8);
                puVar33 = puVar33 + 2;
              } while (uVar8 != 0);
              if (local_c8 != (uint128 *)uVar18) goto LAB_1000efa0;
            }
            pauVar12 = pauVar34;
            local_bc = (uint128 *)local_c4;
            if (puVar9 <= local_c4) break;
            goto LAB_1000e9dc;
          }
          pauVar34 = pauVar12;
          local_bc = (uint128 *)local_c4;
        } while (local_c4 < puVar9);
        puVar16 = (undefined8 *)0x0;
        puVar33 = (undefined8 *)0x1;
        local_bc = (uint128 *)0x0;
        do {
          uVar8 = (int)puVar9 - (int)puVar16;
          if (0x15af < uVar8) {
            uVar8 = 0x15b0;
          }
          if (puVar9 != puVar16) {
            pbVar36 = ((uint8_t *)(void *)local_a4) + (int)puVar16;
            uVar18 = 1;
            if (1 < uVar8) {
              uVar18 = uVar8;
            }
            do {
              uVar18 = uVar18 - 1;
              puVar33 = (undefined8 *)((int)puVar33 + (uint)*pbVar36);
              local_bc = (uint128 *)((int)puVar33 + (int)local_bc);
              pbVar36 = pbVar36 + 1;
            } while (uVar18 != 0);
            local_bc = (uint128 *)((uint)local_bc % 0xfff1);
            puVar33 = (undefined8 *)((uint)puVar33 % 0xfff1);
          }
          puVar16 = (undefined8 *)(uVar8 + (int)puVar16);
        } while (puVar16 < puVar9);
        local_c0 = (uint128 *)(((uint8_t *)(void *)pauVar34) + 4);
        puVar6 = local_110;
        if (pauVar34 < (uint128 *)0xfffffffc) {
          if (pauVar23 < local_c0) {
            local_90 = 10;
            local_cc = pauVar11;
            local_c4 = puVar33;
            local_b8 = pauVar34;
            local_9c = pauVar11;
            pauVar11 = recovered_100082fc((uint)local_c0);
            pauVar34 = local_b8;
            puVar33 = local_c4;
            puVar6 = local_110;
            if (local_b8 != (uint128 *)0x0) {
              bVar37 = local_b8 == (uint128 *)&DataAbort;
              pauVar23 = (uint128 *)0x0;
              uVar8 = extraout_r1_05;
              if ((uint128 *)0xf < local_b8) {
                uVar8 = (int)pauVar11 - (int)local_cc;
                bVar37 = uVar8 == 0xf;
              }
              if (((uint128 *)0xf < local_b8 && 0xe < uVar8) && !bVar37) {
                pauVar23 = (uint128 *)((uint)local_b8 & 0xfffffff0);
                pauVar12 = pauVar23;
                pauVar17 = local_cc;
                pauVar14 = pauVar11;
                do {
                  puVar10 = (uint8_t *)(void *)pauVar17;
                  uVar2 = *(undefined4 *)(((uint8_t *)(void *)pauVar17) + 4);
                  uVar3 = *(undefined4 *)(((uint8_t *)(void *)pauVar17) + 8);
                  uVar4 = *(undefined4 *)(((uint8_t *)(void *)pauVar17) + 0xc);
                  pauVar17 = pauVar17 + 1;
                  pauVar12 = pauVar12 + -1;
                  *(undefined4 *)(uintptr_t)pauVar14 = *(undefined4 *)puVar10;
                  *(undefined4 *)(((uint8_t *)(void *)pauVar14) + 4) = uVar2;
                  *(undefined4 *)(((uint8_t *)(void *)pauVar14) + 8) = uVar3;
                  *(undefined4 *)(((uint8_t *)(void *)pauVar14) + 0xc) = uVar4;
                  pauVar14 = pauVar14 + 1;
                } while (pauVar12 != (uint128 *)0x0);
                if (local_b8 == pauVar23) goto LAB_1000f14c;
              }
              iVar7 = (int)local_b8 - (int)pauVar23;
              puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
              puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)local_cc;
              do {
                iVar7 = iVar7 + -1;
                *puVar10 = *puVar21;
                puVar10 = puVar10 + 1;
                puVar21 = puVar21 + 1;
              } while (iVar7 != 0);
            }
LAB_1000f14c:
            recovered_10008354(local_cc);
          }
          *(undefined4 *)(((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11) = 0;
        }
        puVar10 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11;
        *puVar10 = (char)((uint)(puVar33 + (int)(uintptr_t)local_bc * 0x2000) >> 0x18);
        puVar10[2] = (char)((uint)puVar33 >> 8);
        puVar10[1] = (char)((uint)(puVar33 + (int)(uintptr_t)local_bc * 0x2000) >> 0x10);
        pauVar23 = (uint128 *)0x0;
        puVar10[3] = (char)puVar33;
        local_a0 = pauVar11;
        do {
          if (local_c0 <= pauVar23) {
            recovered_10008354(local_a0);
            recovered_10008354(local_a4);
            local_90 = 0xffffffff;
            uVar8 = recovered_1000f304(puVar6,&DAT_10017ad7,(byte *)0x0,0);
            bVar25 = (byte)uVar8;
            goto LAB_1000e480;
          }
          local_90 = 0xb;
          local_bc = (uint128 *)((int)local_c0 - (int)pauVar23);
          if ((undefined1 *)0x3ffff < local_bc) {
            local_bc = (uint128 *)0x40000;
          }
          local_b8 = pauVar23;
          uVar8 = recovered_1000f304(puVar6,&DAT_10017b07,((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)local_a0,(uint)local_bc)
          ;
          puVar6 = local_110;
          pauVar23 = (uint128 *)((int)local_bc + (int)local_b8);
        } while (uVar8 != 0);
        recovered_10008354(local_a0);
        recovered_10008354(local_a4);
        bVar25 = 0;
      }
      else {
        recovered_10008354((void *)0x0);
      }
    }
  }
LAB_1000e480:
  local_90 = 0xffffffff;
  iVar7 = recovered_10007488(puVar6);
  bVar26 = bVar25 & iVar7 == 0;
LAB_1000e378:
  recovered_10008a1c(&uStack_94);
  return bVar26;
}

#undef DAT_1000f2fc
#undef DAT_1000f300
#undef DAT_10017ad2
#undef DAT_10017ad7
#undef DAT_10017b07
#undef DAT_1001c00c
#undef EXT_00000004
#undef EXT_00000010
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
#undef local_b1
#undef local_b0
#undef local_af
#undef auStack_120
#undef local_ae
#undef local_ad
#undef local_ac
#undef local_ab
#undef local_aa
#undef local_a9
#undef local_a5
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
#undef uStack_94
#undef auStack_68

#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f304
 */

uint recovered_1000f304(uint *param_1,byte *param_2,byte *param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((param_3 != (byte *)0x0) || (uVar3 = 0, param_4 == 0)) {
    local_20 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
               param_4 >> 0x18;
    uVar3 = 0;
    uVar1 = recovered_10016c90(0,param_2,4);
    if (param_4 != 0) {
      uVar1 = recovered_10016c90(uVar1,param_3,param_4);
    }
    local_24 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
    iVar2 = recovered_100078ac((int)&local_20,1,4,param_1);
    if (((iVar2 == 4) && (iVar2 = recovered_100078ac((int)param_2,1,4,param_1), iVar2 == 4)) &&
       ((param_4 == 0 ||
        (uVar1 = recovered_100078ac((int)param_3,1,param_4,param_1), uVar1 == param_4)))) {
      iVar2 = recovered_100078ac((int)&local_24,1,4,param_1);
      uVar3 = (uint)(iVar2 == 4);
    }
  }
  return uVar3;
}

#undef local_24
#undef local_20

static const unsigned char pf_literal_1000f3f8_DAT_1000f2fc[] __attribute__((aligned(16)))={0xc8,0x98,0x00,0x00};
#undef DAT_1000f2fc
#define DAT_1000f2fc (*(int *)((uintptr_t)pf_literal_1000f3f8_DAT_1000f2fc))
static const unsigned char pf_literal_1000f3f8_DAT_1000f300[] __attribute__((aligned(16)))={0x00,0x0f,0x00,0x00};
#undef DAT_1000f300
#define DAT_1000f300 (*(int *)((uintptr_t)pf_literal_1000f3f8_DAT_1000f300))
#undef DAT_10017ad2
#define DAT_10017ad2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12aU)))
#undef DAT_10017ad7
#define DAT_10017ad7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
#undef DAT_10017b07
#define DAT_10017b07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 16))
#define pauStack_118 (*(uint128 * *)(pf_stack_frame + 24))
#define pauStack_114 (*(uint128 * *)(pf_stack_frame + 28))
#define puStack_110 (*(uint * *)(pf_stack_frame + 32))
#define puStack_10c (*(undefined1 * *)(pf_stack_frame + 36))
#define puStack_108 (*(undefined1 * *)(pf_stack_frame + 40))
#define iStack_104 (*(int *)(pf_stack_frame + 44))
#define puStack_100 (*(undefined1 * *)(pf_stack_frame + 48))
#define uStack_fc (*(uint *)(pf_stack_frame + 52))
#define iStack_f8 (*(int *)(pf_stack_frame + 56))
#define iStack_f4 (*(int *)(pf_stack_frame + 60))
#define iStack_f0 (*(int *)(pf_stack_frame + 64))
#define iStack_ec (*(int *)(pf_stack_frame + 68))
#define pbStack_e8 (*(byte * *)(pf_stack_frame + 72))
#define pauStack_e4 (*(uint128 * *)(pf_stack_frame + 76))
#define pauStack_e0 (*(uint128 * *)(pf_stack_frame + 80))
#define pauStack_dc (*(uint128 * *)(pf_stack_frame + 84))
#define puStack_d8 (*(undefined8 * *)(pf_stack_frame + 88))
#define pauStack_d4 (*(uint128 * *)(pf_stack_frame + 92))
#define pauStack_d0 (*(uint128 * *)(pf_stack_frame + 96))
#define pauStack_cc (*(uint128 * *)(pf_stack_frame + 100))
#define pauStack_c8 (*(uint128 * *)(pf_stack_frame + 104))
#define puStack_c4 (*(undefined8 * *)(pf_stack_frame + 108))
#define pauStack_c0 (*(uint128 * *)(pf_stack_frame + 112))
#define pauStack_bc (*(uint128 * *)(pf_stack_frame + 116))
#define pauStack_b8 (*(uint128 * *)(pf_stack_frame + 120))
#define bStack_b1 (*(byte *)(pf_stack_frame + 127))
#define uStack_b0 (*(undefined1 *)(pf_stack_frame + 128))
#define uStack_af (*(undefined1 *)(pf_stack_frame + 129))
#define uStack_ae (*(undefined1 *)(pf_stack_frame + 130))
#define uStack_ad (*(undefined1 *)(pf_stack_frame + 131))
#define uStack_ac (*(undefined1 *)(pf_stack_frame + 132))
#define uStack_ab (*(undefined1 *)(pf_stack_frame + 133))
#define uStack_aa (*(undefined1 *)(pf_stack_frame + 134))
#define uStack_a9 (*(undefined4 *)(pf_stack_frame + 135))
#define uStack_a5 (*(undefined1 *)(pf_stack_frame + 139))
#define pauStack_a4 (*(uint128 * *)(pf_stack_frame + 140))
#define pauStack_a0 (*(uint128 * *)(pf_stack_frame + 144))
#define pauStack_9c (*(uint128 * *)(pf_stack_frame + 148))
#define pauStack_98 (*(uint128 * *)(pf_stack_frame + 152))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 156))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 160))
#define uStack_7c (*(undefined4 *)(pf_stack_frame + 180))
#define iStack_78 (*(int *)(pf_stack_frame + 184))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 188))
#define iStack_70 (*(int *)(pf_stack_frame + 192))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 196))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f3f8
 */

byte recovered_1000f3f8(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint128 *pauVar11;
  uint128 *pauVar12;
  undefined1 *puVar13;
  uint128 *pauVar14;
  uint128 *pauVar15;
  undefined8 *puVar16;
  uint128 *pauVar17;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint uVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint128 *pauVar23;
  uint128 *pauVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint128 *pauVar34;
  byte *pbVar35;
  byte *pbVar36;
  bool bVar37;
  uint128 auVar38;

  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_120;
  uStack_7c = DAT_1001c00c;
  iStack_78 = ((uintptr_t)pf_module_state+0x25cU);
  iStack_70 = DAT_1000f300 + 0x1000e34c;
  recovered_100089f8(&uStack_94);
  bVar25 = 0;
  bVar26 = 0;
  if (param_1 == 0 || param_2 == 0) goto LAB_1000e378;
  uVar8 = param_3;
  if (0 < (int)param_3) {
    uVar8 = param_4;
  }
  if ((int)uVar8 < 1) goto LAB_1000e378;
  uStack_90 = 0xffffffff;
  pauStack_d4 = (uint128 *)param_2;
  puVar6 = recovered_10007004(param_1,((uintptr_t)pf_module_state+0x127U));
  if (puVar6 == (uint *)0x0) goto LAB_1000e378;
  uStack_90 = 0xffffffff;
  iVar7 = recovered_100078ac(((uintptr_t)pf_module_state+0x368U),1,8,puVar6);
  if (iVar7 == 8) {
    uStack_a9 = 0x608;
    uStack_a5 = 0;
    uStack_aa = (undefined1)param_4;
    uStack_ae = (undefined1)param_3;
    uStack_90 = 0xffffffff;
    uStack_ab = (undefined1)(param_4 >> 8);
    uStack_ac = (undefined1)(param_4 >> 0x10);
    uStack_ad = (undefined1)(param_4 >> 0x18);
    uStack_af = (undefined1)(param_3 >> 8);
    uStack_b0 = (undefined1)(param_3 >> 0x10);
    bStack_b1 = (byte)(param_3 >> 0x18);
    uVar8 = recovered_1000f304(puVar6,&DAT_10017ad2,&bStack_b1,0xd);
    if (uVar8 != 0) {
      if ((param_3 < 0x40000000) &&
         (uVar8 = param_3 << 2 | 1, (int)((ulonglong)param_4 * (ulonglong)uVar8 >> 0x20) == 0)) {
        pauStack_b8 = (uint128 *)(uVar8 * param_4);
        uStack_90 = 1;
        puStack_110 = puVar6;
        uStack_fc = uVar8;
        pauStack_e0 = (uint128 *)param_4;
        pauStack_dc = (uint128 *)param_3;
        pauStack_a4 = recovered_100082fc((uint)pauStack_b8);
        pauVar12 = pauStack_dc;
        pauVar23 = (uint128 *)((int)(uintptr_t)pauStack_dc * 4);
        recovered_10008354((void *)0x0);
        puVar9 = (undefined8 *)0x0;
        puStack_d8 = (undefined8 *)pauStack_b8;
        if (pauStack_b8 < (undefined8 *)0x2) {
          puStack_d8 = (undefined8 *)0x1;
        }
        if (pauStack_b8 < &DataAbort) {
LAB_1000e518:
          iVar7 = (int)puStack_d8 - (int)puVar9;
          puVar10 = ((uint8_t *)(void *)pauStack_a4) + (int)puVar9;
          do {
            *puVar10 = 0;
            iVar7 = iVar7 + -1;
            puVar10 = puVar10 + 1;
          } while (iVar7 != 0);
        }
        else {
          puVar9 = (undefined8 *)((uint)puStack_d8 & 0xfffffff0);
          pauVar11 = pauStack_a4;
          puVar33 = puVar9;
          do {
            *(undefined8 *)(uintptr_t)pauVar11 = 0;
            *(undefined8 *)(((uint8_t *)(void *)pauVar11) + 8) = 0;
            pauVar11 = pauVar11 + 1;
            puVar33 = puVar33 + -2;
          } while (puVar33 != (undefined8 *)0x0);
          if (pauStack_b8 != (uint128 *)puVar9) goto LAB_1000e518;
        }
        puStack_100 = ((uint8_t *)(void *)pauVar23) + 1;
        pauStack_114 = (uint128 *)((uint)pauVar23 & 0xfffffff0);
        pauVar34 = (uint128 *)0x0;
        puVar9 = (undefined8 *)(((uint8_t *)(void *)pauStack_a4) + 1);
        puStack_108 = ((uint8_t *)(void *)&pauVar23[-1]) + 0xc;
        pbVar36 = ((uint8_t *)(void *)pauStack_d4) + 4;
        puStack_10c = (undefined1 *)((uint)puStack_108 & 0xfffffff0);
        pauVar17 = (uint128 *)(((uint8_t *)(void *)pauStack_a4) + 5);
        iStack_104 = (int)pauVar12 * -4;
        pauStack_118 = (uint128 *)((uint)puStack_10c | 4);
        pauVar11 = pauStack_d4;
        pauStack_e4 = pauVar23;
        do {
          pbStack_e8 = ((uint8_t *)(void *)pauStack_d4) + (int)pauVar34 * (int)pauStack_e4;
          bVar25 = *pbStack_e8;
          uVar8 = (uint)bVar25;
          iStack_ec = (int)(char)bVar25;
          if (iStack_ec < 0) {
            uVar8 = 0x100 - uVar8;
          }
          pauStack_bc = (uint128 *)0x0;
          if (pauVar34 != (uint128 *)0x0) {
            pauStack_bc = (uint128 *)(pbStack_e8 + iStack_104);
          }
          if (pauStack_bc == (uint128 *)0x0) {
            uVar27 = (uint)pbStack_e8[2];
            uVar22 = (uint)pbStack_e8[1];
            uVar18 = (uint)pbStack_e8[3];
            iStack_f0 = (int)(char)pbStack_e8[2];
            iStack_f4 = (int)(char)pbStack_e8[1];
            if (iStack_f0 < 0) {
              uVar27 = 0x100 - uVar27;
            }
            if (iStack_f4 < 0) {
              uVar22 = 0x100 - uVar22;
            }
            iStack_f8 = (int)(char)pbStack_e8[3];
            if (iStack_f8 < 0) {
              uVar18 = 0x100 - uVar18;
            }
            uVar18 = uVar22 + uVar8 + uVar27 + uVar18;
            pauStack_b8 = (uint128 *)0xffffffff;
            uVar8 = 0xffffffff;
          }
          else {
            uVar32 = (uint)pbStack_e8[1];
            uVar27 = uVar32 - (byte)((uint8_t *)(void *)pauStack_bc)[1];
            uVar18 = (uint)pbStack_e8[3];
            uVar22 = (uint)pbStack_e8[2];
            uVar30 = iStack_ec - (uint)(byte)((uint8_t *)(void *)pauStack_bc)[0];
            uVar28 = uVar27 & 0xff;
            iStack_f8 = (int)(char)pbStack_e8[3];
            if ((char)uVar27 < '\0') {
              uVar28 = 0x100 - uVar28;
            }
            uVar27 = uVar30 & 0xff;
            if ((char)uVar30 < '\0') {
              uVar27 = 0x100 - uVar27;
            }
            uVar30 = uVar22 - (byte)((uint8_t *)(void *)pauStack_bc)[2];
            uVar29 = uVar30 & 0xff;
            if ((char)uVar30 < '\0') {
              uVar29 = 0x100 - uVar29;
            }
            uVar30 = uVar18 - (byte)((uint8_t *)(void *)pauStack_bc)[3];
            uVar31 = uVar30 & 0xff;
            if ((char)uVar30 < '\0') {
              uVar31 = 0x100 - uVar31;
            }
            pauStack_b8 = (uint128 *)(uVar27 + uVar28 + uVar29 + uVar31);
            iStack_f0 = (int)(char)pbStack_e8[2];
            iStack_f4 = (int)(char)pbStack_e8[1];
            if (iStack_f0 < 0) {
              uVar22 = 0x100 - uVar22;
            }
            if (iStack_f4 < 0) {
              uVar32 = 0x100 - uVar32;
            }
            if (iStack_f8 < 0) {
              uVar18 = 0x100 - uVar18;
            }
            uVar18 = uVar32 + uVar8 + uVar22 + uVar18;
            uVar8 = 0;
          }
          uVar22 = uVar18;
          if (pauVar12 == (uint128 *)0x1) {
            uVar28 = 0;
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            pbVar20 = ((uint8_t *)(void *)pauStack_bc) + 4;
            uVar28 = 0;
            pbVar35 = pbVar36;
            puVar10 = puStack_108;
            do {
              bVar26 = *pbVar35;
              uVar32 = (uint)bVar26;
              uVar30 = uVar32 - pbVar35[-4];
              if ((char)bVar26 < 0) {
                uVar32 = 0x100 - uVar32;
              }
              bVar37 = CARRY4(uVar22,uVar32);
              uVar22 = uVar22 + uVar32;
              uVar32 = uVar30 & 0xff;
              uVar27 = uVar27 + bVar37;
              if ((char)uVar30 < '\0') {
                uVar32 = 0x100 - uVar32;
              }
              bVar37 = CARRY4(uVar18,uVar32);
              uVar18 = uVar18 + uVar32;
              uVar28 = uVar28 + bVar37;
              if (pauStack_bc != (uint128 *)0x0) {
                uVar30 = (int)(char)bVar26 - (uint)*pbVar20;
                uVar32 = uVar30 & 0xff;
                if ((char)uVar30 < '\0') {
                  uVar32 = 0x100 - uVar32;
                }
                bVar37 = CARRY4((uint)pauStack_b8,uVar32);
                pauStack_b8 = (uint128 *)((int)pauStack_b8 + uVar32);
                uVar8 = uVar8 + bVar37;
              }
              pbVar35 = pbVar35 + 1;
              pbVar20 = pbVar20 + 1;
              puVar10 = puVar10 + -1;
            } while (puVar10 != (undefined1 *)0x0);
          }
          bVar37 = uVar28 <= uVar27 && (uint)(uVar22 <= uVar18) <= uVar28 - uVar27;
          if (bVar37) {
            uVar27 = uVar28;
          }
          if (bVar37) {
            uVar22 = uVar18;
          }
          cVar5 = '\x02';
          if (uVar27 < uVar8 || uVar8 - uVar27 < (uint)(uVar22 <= pauStack_b8)) {
            cVar5 = bVar37;
          }
          if (pauStack_bc == (uint128 *)0x0) {
            cVar5 = bVar37;
          }
          pcVar19 = ((uint8_t *)(void *)pauStack_a4) + (int)pauVar34 * uStack_fc;
          *pcVar19 = cVar5;
          pauStack_c0 = (uint128 *)pbVar36;
          pauStack_d0 = pauVar17;
          pauStack_cc = pauVar11;
          pauStack_c8 = pauVar34;
          puStack_c4 = puVar9;
          if (cVar5 == '\x02') {
            if (pauStack_bc != (uint128 *)0x0) {
              pauVar23 = (uint128 *)0x0;
              if (pauStack_dc < (uint128 *)&UndefinedInstruction) goto LAB_1000e970;
              pauVar23 = pauStack_114;
              puVar33 = puVar9;
              pauVar12 = pauStack_bc;
              pauVar17 = pauVar11;
              do {
                auVar38 = *pauVar12;
                pauVar12 = pauVar12 + 1;
                pauVar23 = pauVar23 + -1;
                auVar1 = *pauVar17;
                pauVar17 = pauVar17 + 1;
                auVar38 = VectorSub(auVar1,auVar38,1);
                *puVar33 = PF_PART8(auVar38, 0);
                puVar33[1] = PF_PART8(auVar38, 8);
                puVar33 = puVar33 + 2;
              } while (pauVar23 != (uint128 *)0x0);
              for (pauVar23 = pauStack_114; pauStack_e4 != pauVar23;
                  pauVar23 = (uint128 *)(((uint8_t *)(void *)pauVar23) + 1)) {
LAB_1000e970:
                *(undefined1 *)((int)puVar9 + (int)pauVar23) =
                     ((uint8_t *)(void *)pauVar23)[(int)(uintptr_t)pauVar11] - ((uint8_t *)(void *)pauVar23)[(int)(uintptr_t)pauStack_bc];
              }
              goto LAB_1000e5c0;
            }
LAB_1000e58c:
            uStack_90 = 2;
            recovered_10002f90(pcVar19 + 1,pbStack_e8,(uint)pauStack_e4);
          }
          else {
            if (cVar5 != '\x01') goto LAB_1000e58c;
            pcVar19[4] = (char)iStack_f8;
            pcVar19[3] = (char)iStack_f0;
            pcVar19[2] = (char)iStack_f4;
            pcVar19[1] = bVar25;
            if (pauStack_dc != (uint128 *)0x1) {
              pauVar23 = (uint128 *)&UndefinedInstruction;
              if ((undefined1 *)0xf < puStack_108) {
                puVar10 = (undefined1 *)0x0;
                do {
                  puVar33 = (undefined8 *)(puVar10 + (int)(uintptr_t)pauVar17);
                  auVar38 = VectorSub(*(uint128 *)(pbVar36 + (int)puVar10),
                                      *(uint128 *)(puVar10 + (int)(uintptr_t)pauVar11),1);
                  puVar10 = puVar10 + 0x10;
                  *puVar33 = PF_PART8(auVar38, 0);
                  puVar33[1] = PF_PART8(auVar38, 8);
                } while (puStack_10c != puVar10);
                pauVar23 = pauStack_118;
                if (puStack_108 == puStack_10c) goto LAB_1000e5c0;
              }
              do {
                *(undefined1 *)((int)puVar9 + (int)pauVar23) =
                     ((uint8_t *)(void *)pauVar23)[(int)(uintptr_t)pauVar11] - (((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11)[-4];
                pauVar23 = (uint128 *)(((uint8_t *)(void *)pauVar23) + 1);
              } while (pauStack_e4 != pauVar23);
            }
          }
LAB_1000e5c0:
          pauVar34 = (uint128 *)(((uint8_t *)(void *)pauStack_c8) + 1);
          pauVar11 = (uint128 *)(((uint8_t *)(void *)pauStack_e4) + (int)(uintptr_t)pauStack_cc);
          puVar9 = (undefined8 *)((int)puStack_c4 + (int)puStack_100);
          pbVar36 = (byte *)((int)pauStack_c0 + (int)pauStack_e4);
          pauVar17 = (uint128 *)(puStack_100 + (int)(uintptr_t)pauStack_d0);
          pauVar12 = pauStack_dc;
        } while (pauVar34 != pauStack_e0);
        uStack_90 = 3;
        pauStack_9c = (uint128 *)0x0;
        pauVar11 = recovered_100082fc(4);
        recovered_10008354((void *)0x0);
        pauVar23 = (uint128 *)&UndefinedInstruction;
        *(undefined2 *)(uintptr_t)pauVar11 = 0x178;
        pauVar12 = (uint128 *)0x2;
        pauStack_bc = (uint128 *)(undefined8 *)0x0;
        puVar9 = puStack_d8;
LAB_1000e9dc:
        do {
          pauStack_c8 = (uint128 *)((int)puVar9 - (int)pauStack_bc);
          pauStack_c0 = (uint128 *)0xffff;
          if (pauStack_c8 < 0xffff) {
            pauStack_c0 = pauStack_c8;
          }
          pauStack_b8 = pauVar12;
          if (pauVar12 == pauVar23) {
            pauVar17 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar17 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar17 <= pauVar23) goto LAB_1000eacc;
            uStack_90 = 4;
            pauStack_d4 = pauVar17;
            pauStack_d0 = pauVar23;
            pauStack_cc = pauVar11;
            pauStack_98 = pauVar11;
            pauVar11 = recovered_100082fc((uint)pauVar17);
            pauVar17 = pauStack_b8;
            pauVar23 = pauStack_d4;
            if (pauStack_d0 != (uint128 *)0x0) {
              bVar37 = pauStack_d0 == (uint128 *)&DataAbort;
              pauVar12 = (uint128 *)0x0;
              uVar8 = extraout_r1;
              if ((uint128 *)0xf < pauStack_d0) {
                uVar8 = (int)pauVar11 - (int)pauStack_cc;
                bVar37 = uVar8 == 0xf;
              }
              if (((uint128 *)0xf < pauStack_d0 && 0xe < uVar8) && !bVar37) {
                pauVar12 = (uint128 *)((uint)pauStack_d0 & 0xfffffff0);
                pauVar34 = pauVar12;
                pauVar14 = pauStack_cc;
                pauVar15 = pauVar11;
                do {
                  auVar38 = *pauVar14;
                  pauVar14 = pauVar14 + 1;
                  pauVar34 = pauVar34 + -1;
                  *(longlong *)(uintptr_t)pauVar15 = PF_PART8(auVar38, 0);
                  *(longlong *)(((uint8_t *)(void *)pauVar15) + 8) = PF_PART8(auVar38, 8);
                  pauVar15 = pauVar15 + 1;
                } while (pauVar34 != (uint128 *)0x0);
                if (pauStack_d0 == pauVar12) goto LAB_1000eab4;
              }
              iVar7 = (int)pauStack_d0 - (int)pauVar12;
              puVar10 = ((uint8_t *)(void *)pauVar12) + (int)(uintptr_t)pauVar11;
              puVar21 = ((uint8_t *)(void *)pauVar12) + (int)(uintptr_t)pauStack_cc;
              do {
                iVar7 = iVar7 + -1;
                *puVar10 = *puVar21;
                puVar10 = puVar10 + 1;
                puVar21 = puVar21 + 1;
              } while (iVar7 != 0);
            }
LAB_1000eab4:
            recovered_10008354(pauStack_cc);
            puVar9 = puStack_d8;
          }
          else {
LAB_1000eacc:
            pauVar17 = pauVar12;
          }
          puStack_c4 = (undefined8 *)((int)pauStack_c0 + (int)pauStack_bc);
          pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 1);
          ((uint8_t *)(void *)pauVar17)[(int)(uintptr_t)pauVar11] = puStack_c4 == puVar9;
          if (pauVar12 == pauVar23) {
            pauVar34 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar34 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar34) {
              uStack_90 = 5;
              pauStack_dc = pauVar12;
              pauStack_d4 = pauVar23;
              pauStack_d0 = pauVar11;
              pauStack_cc = pauVar34;
              pauStack_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar34);
              pauVar17 = pauStack_b8;
              pauVar23 = pauStack_cc;
              pauVar12 = pauStack_dc;
              if (pauStack_d4 != (uint128 *)0x0) {
                bVar37 = pauStack_dc == (uint128 *)&DataAbort;
                pauVar34 = (uint128 *)0x0;
                uVar8 = extraout_r1_00;
                if ((uint128 *)0xf < pauStack_dc) {
                  uVar8 = (int)pauVar11 - (int)pauStack_d0;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < pauStack_dc && 0xe < uVar8) && !bVar37) {
                  pauVar34 = (uint128 *)((uint)pauStack_dc & 0xfffffff0);
                  pauVar14 = pauVar34;
                  pauVar15 = pauStack_d0;
                  pauVar24 = pauVar11;
                  do {
                    auVar38 = *pauVar15;
                    pauVar15 = pauVar15 + 1;
                    pauVar14 = pauVar14 + -1;
                    *(longlong *)(uintptr_t)pauVar24 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar24) + 8) = PF_PART8(auVar38, 8);
                    pauVar24 = pauVar24 + 1;
                  } while (pauVar14 != (uint128 *)0x0);
                  if (pauStack_dc == pauVar34) goto LAB_1000eba8;
                }
                puVar13 = (undefined1 *)((int)pauStack_b8 + (1 - (int)pauVar34));
                puVar10 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauStack_d0;
                do {
                  puVar13 = puVar13 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (puVar13 != (undefined1 *)0x0);
              }
LAB_1000eba8:
              recovered_10008354(pauStack_d0);
              puVar9 = puStack_d8;
            }
          }
          pauVar34 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 2);
          ((uint8_t *)(void *)pauVar12)[(int)(uintptr_t)pauVar11] = (char)pauStack_c0;
          if (pauVar34 == pauVar23) {
            pauVar12 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar12 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar12) {
              uStack_90 = 6;
              pauStack_dc = pauVar34;
              pauStack_d4 = pauVar11;
              pauStack_d0 = pauVar12;
              pauStack_cc = pauVar23;
              pauStack_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar12);
              pauVar17 = pauStack_b8;
              if (pauStack_cc != (uint128 *)0x0) {
                bVar37 = pauStack_cc == (uint128 *)&DataAbort;
                pauVar23 = (uint128 *)0x0;
                uVar8 = extraout_r1_01;
                if ((uint128 *)0xf < pauStack_cc) {
                  uVar8 = (int)pauVar11 - (int)pauStack_d4;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < pauStack_cc && 0xe < uVar8) && !bVar37) {
                  pauVar23 = (uint128 *)((uint)pauStack_cc & 0xfffffff0);
                  pauVar12 = pauVar23;
                  pauVar34 = pauStack_d4;
                  pauVar14 = pauVar11;
                  do {
                    auVar38 = *pauVar34;
                    pauVar34 = pauVar34 + 1;
                    pauVar12 = pauVar12 + -1;
                    *(longlong *)(uintptr_t)pauVar14 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar14) + 8) = PF_PART8(auVar38, 8);
                    pauVar14 = pauVar14 + 1;
                  } while (pauVar12 != (uint128 *)0x0);
                  if (pauStack_cc == pauVar23) goto LAB_1000ec78;
                }
                iVar7 = (int)pauStack_cc - (int)pauVar23;
                puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauStack_d4;
                do {
                  iVar7 = iVar7 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar7 != 0);
              }
LAB_1000ec78:
              recovered_10008354(pauStack_d4);
              pauVar34 = pauStack_dc;
              pauVar23 = pauStack_d0;
              puVar9 = puStack_d8;
            }
          }
          pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 3);
          ((uint8_t *)(void *)pauVar34)[(int)(uintptr_t)pauVar11] = (char)((uint)pauStack_c0 >> 8);
          if (pauVar12 == pauVar23) {
            pauVar34 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar34 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar34) {
              uStack_90 = 7;
              pauStack_dc = pauVar12;
              pauStack_d4 = pauVar11;
              pauStack_d0 = pauVar23;
              pauStack_cc = pauVar34;
              pauStack_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar34);
              pauVar17 = pauStack_b8;
              if (pauStack_d0 != (uint128 *)0x0) {
                bVar37 = pauStack_d0 == (uint128 *)&DataAbort;
                pauVar23 = (uint128 *)0x0;
                uVar8 = extraout_r1_02;
                if ((uint128 *)0xf < pauStack_d0) {
                  uVar8 = (int)pauVar11 - (int)pauStack_d4;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < pauStack_d0 && 0xe < uVar8) && !bVar37) {
                  pauVar23 = (uint128 *)((uint)pauStack_d0 & 0xfffffff0);
                  pauVar12 = pauVar23;
                  pauVar34 = pauStack_d4;
                  pauVar14 = pauVar11;
                  do {
                    auVar38 = *pauVar34;
                    pauVar34 = pauVar34 + 1;
                    pauVar12 = pauVar12 + -1;
                    *(longlong *)(uintptr_t)pauVar14 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar14) + 8) = PF_PART8(auVar38, 8);
                    pauVar14 = pauVar14 + 1;
                  } while (pauVar12 != (uint128 *)0x0);
                  if (pauStack_d0 == pauVar23) goto LAB_1000ed54;
                }
                iVar7 = (int)pauStack_d0 - (int)pauVar23;
                puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauStack_d4;
                do {
                  iVar7 = iVar7 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar7 != 0);
              }
LAB_1000ed54:
              recovered_10008354(pauStack_d4);
              pauVar23 = pauStack_cc;
              pauVar12 = pauStack_dc;
              puVar9 = puStack_d8;
            }
          }
          pauVar34 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 4);
          pauVar14 = (uint128 *)((uint)pauStack_c0 ^ 0xffff);
          ((uint8_t *)(void *)pauVar12)[(int)(uintptr_t)pauVar11] = (char)pauVar14;
          if (pauVar34 == pauVar23) {
            pauVar12 = (uint128 *)((int)pauVar23 << 1);
            if (pauVar23 == (uint128 *)0x0) {
              pauVar12 = (uint128 *)&UndefinedInstruction;
            }
            if (pauVar23 < pauVar12) {
              uStack_90 = 8;
              pauStack_e0 = pauVar34;
              pauStack_dc = pauVar14;
              pauStack_d4 = pauVar11;
              pauStack_d0 = pauVar12;
              pauStack_cc = pauVar23;
              pauStack_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauVar12);
              pauVar17 = pauStack_b8;
              pauVar34 = pauStack_e0;
              if (pauStack_cc != (uint128 *)0x0) {
                bVar37 = pauStack_cc == (uint128 *)&DataAbort;
                pauVar23 = (uint128 *)0x0;
                uVar8 = extraout_r1_03;
                if ((uint128 *)0xf < pauStack_cc) {
                  uVar8 = (int)pauVar11 - (int)pauStack_d4;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < pauStack_cc && 0xe < uVar8) && !bVar37) {
                  pauVar23 = (uint128 *)((uint)pauStack_cc & 0xfffffff0);
                  pauVar12 = pauVar23;
                  pauVar14 = pauStack_d4;
                  pauVar15 = pauVar11;
                  do {
                    auVar38 = *pauVar14;
                    pauVar14 = pauVar14 + 1;
                    pauVar12 = pauVar12 + -1;
                    *(longlong *)(uintptr_t)pauVar15 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar15) + 8) = PF_PART8(auVar38, 8);
                    pauVar15 = pauVar15 + 1;
                  } while (pauVar12 != (uint128 *)0x0);
                  if (pauStack_cc == pauVar23) goto LAB_1000ee44;
                }
                iVar7 = (int)pauStack_cc - (int)pauVar23;
                puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauStack_d4;
                do {
                  iVar7 = iVar7 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar7 != 0);
              }
LAB_1000ee44:
              recovered_10008354(pauStack_d4);
              pauVar14 = pauStack_dc;
              pauVar23 = pauStack_d0;
              puVar9 = puStack_d8;
            }
          }
          pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar17) + 5);
          ((uint8_t *)(void *)pauVar34)[(int)(uintptr_t)pauVar11] = (char)((uint)pauVar14 >> 8);
          if ((uint128 *)puVar9 != pauStack_bc) {
            pauVar34 = (uint128 *)(((uint8_t *)(void *)pauVar12) + (int)pauStack_c0);
            pauStack_d0 = pauStack_a4;
            if (pauVar23 < pauVar34) {
              pauStack_e4 = pauStack_a4;
              if (pauVar23 == (uint128 *)0x0) {
                pauVar23 = (uint128 *)&UndefinedInstruction;
              }
              do {
                pauStack_e0 = pauVar23;
                pauVar23 = (uint128 *)((int)pauStack_e0 << 1);
              } while (pauStack_e0 < pauVar34);
              uStack_90 = 9;
              pauStack_dc = pauVar34;
              pauStack_d4 = pauVar12;
              pauStack_cc = pauVar11;
              pauStack_98 = pauVar11;
              pauVar11 = recovered_100082fc((uint)pauStack_e0);
              pauVar17 = pauStack_b8;
              pauVar12 = pauStack_d4;
              pauVar23 = pauStack_e0;
              if (pauStack_d4 != (uint128 *)0x0) {
                bVar37 = pauStack_d4 == (uint128 *)&DataAbort;
                pauVar34 = (uint128 *)0x0;
                uVar8 = extraout_r1_04;
                if ((uint128 *)0xf < pauStack_d4) {
                  uVar8 = (int)pauVar11 - (int)pauStack_cc;
                  bVar37 = uVar8 == 0xf;
                }
                if (((uint128 *)0xf < pauStack_d4 && 0xe < uVar8) && !bVar37) {
                  pauVar34 = (uint128 *)((uint)pauStack_d4 & 0xfffffff0);
                  pauVar14 = pauVar34;
                  pauVar15 = pauStack_cc;
                  pauVar24 = pauVar11;
                  do {
                    auVar38 = *pauVar15;
                    pauVar15 = pauVar15 + 1;
                    pauVar14 = pauVar14 + -1;
                    *(longlong *)(uintptr_t)pauVar24 = PF_PART8(auVar38, 0);
                    *(longlong *)(((uint8_t *)(void *)pauVar24) + 8) = PF_PART8(auVar38, 8);
                    pauVar24 = pauVar24 + 1;
                  } while (pauVar14 != (uint128 *)0x0);
                  if (pauStack_d4 == pauVar34) goto LAB_1000ef48;
                }
                puVar13 = (undefined1 *)((int)pauStack_b8 + (5 - (int)pauVar34));
                puVar10 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11;
                puVar21 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauStack_cc;
                do {
                  puVar13 = puVar13 + -1;
                  *puVar10 = *puVar21;
                  puVar10 = puVar10 + 1;
                  puVar21 = puVar21 + 1;
                } while (puVar13 != (undefined1 *)0x0);
              }
LAB_1000ef48:
              recovered_10008354(pauStack_cc);
              pauVar14 = pauStack_e4;
              pauVar34 = pauStack_dc;
              puVar9 = puStack_d8;
            }
            else {
              pauVar14 = pauStack_a4;
            }
            pauVar14 = (uint128 *)(((uint8_t *)(void *)pauVar14) + (int)pauStack_bc);
            if ((pauStack_c8 < 0x10) ||
               (((uint8_t *)(void *)pauVar17) + (5 - (int)((int)pauStack_bc + (int)pauStack_a4)) + (int)(uintptr_t)pauVar11 <
                (undefined1 *)0x10)) {
              pauVar15 = pauVar14;
LAB_1000efa0:
              do {
                puVar10 = (uint8_t *)(void *)pauVar15;
                ((uint8_t *)(void *)pauVar12)[(int)(uintptr_t)pauVar11] = ((uint8_t *)(void *)pauVar15)[0];
                pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar12) + 1);
                pauVar15 = (uint128 *)(puVar10 + 1);
              } while ((uint128 *)(puVar10 + 1) !=
                       (uint128 *)(((uint8_t *)(void *)pauStack_d0) + (int)puStack_c4));
            }
            else {
              uVar18 = (uint)pauStack_c0 & 0xfff0;
              pauVar12 = (uint128 *)(((uint8_t *)(void *)pauVar12) + uVar18);
              pauVar15 = (uint128 *)(((uint8_t *)(void *)pauVar14) + uVar18);
              puVar33 = (undefined8 *)(((uint8_t *)(void *)pauVar11) + (int)(((uint8_t *)(void *)pauVar17) + 5));
              uVar8 = uVar18;
              do {
                auVar38 = *pauVar14;
                pauVar14 = pauVar14 + 1;
                uVar8 = uVar8 - 0x10;
                *puVar33 = PF_PART8(auVar38, 0);
                puVar33[1] = PF_PART8(auVar38, 8);
                puVar33 = puVar33 + 2;
              } while (uVar8 != 0);
              if (pauStack_c8 != (uint128 *)uVar18) goto LAB_1000efa0;
            }
            pauVar12 = pauVar34;
            pauStack_bc = (uint128 *)puStack_c4;
            if (puVar9 <= puStack_c4) break;
            goto LAB_1000e9dc;
          }
          pauVar34 = pauVar12;
          pauStack_bc = (uint128 *)puStack_c4;
        } while (puStack_c4 < puVar9);
        puVar16 = (undefined8 *)0x0;
        puVar33 = (undefined8 *)0x1;
        pauStack_bc = (uint128 *)0x0;
        do {
          uVar8 = (int)puVar9 - (int)puVar16;
          if (0x15af < uVar8) {
            uVar8 = 0x15b0;
          }
          if (puVar9 != puVar16) {
            pbVar36 = ((uint8_t *)(void *)pauStack_a4) + (int)puVar16;
            uVar18 = 1;
            if (1 < uVar8) {
              uVar18 = uVar8;
            }
            do {
              uVar18 = uVar18 - 1;
              puVar33 = (undefined8 *)((int)puVar33 + (uint)*pbVar36);
              pauStack_bc = (uint128 *)((int)puVar33 + (int)pauStack_bc);
              pbVar36 = pbVar36 + 1;
            } while (uVar18 != 0);
            pauStack_bc = (uint128 *)((uint)pauStack_bc % 0xfff1);
            puVar33 = (undefined8 *)((uint)puVar33 % 0xfff1);
          }
          puVar16 = (undefined8 *)(uVar8 + (int)puVar16);
        } while (puVar16 < puVar9);
        pauStack_c0 = (uint128 *)(((uint8_t *)(void *)pauVar34) + 4);
        puVar6 = puStack_110;
        if (pauVar34 < (uint128 *)0xfffffffc) {
          if (pauVar23 < pauStack_c0) {
            uStack_90 = 10;
            pauStack_cc = pauVar11;
            puStack_c4 = puVar33;
            pauStack_b8 = pauVar34;
            pauStack_9c = pauVar11;
            pauVar11 = recovered_100082fc((uint)pauStack_c0);
            pauVar34 = pauStack_b8;
            puVar33 = puStack_c4;
            puVar6 = puStack_110;
            if (pauStack_b8 != (uint128 *)0x0) {
              bVar37 = pauStack_b8 == (uint128 *)&DataAbort;
              pauVar23 = (uint128 *)0x0;
              uVar8 = extraout_r1_05;
              if ((uint128 *)0xf < pauStack_b8) {
                uVar8 = (int)pauVar11 - (int)pauStack_cc;
                bVar37 = uVar8 == 0xf;
              }
              if (((uint128 *)0xf < pauStack_b8 && 0xe < uVar8) && !bVar37) {
                pauVar23 = (uint128 *)((uint)pauStack_b8 & 0xfffffff0);
                pauVar12 = pauVar23;
                pauVar17 = pauStack_cc;
                pauVar14 = pauVar11;
                do {
                  puVar10 = (uint8_t *)(void *)pauVar17;
                  uVar2 = *(undefined4 *)(((uint8_t *)(void *)pauVar17) + 4);
                  uVar3 = *(undefined4 *)(((uint8_t *)(void *)pauVar17) + 8);
                  uVar4 = *(undefined4 *)(((uint8_t *)(void *)pauVar17) + 0xc);
                  pauVar17 = pauVar17 + 1;
                  pauVar12 = pauVar12 + -1;
                  *(undefined4 *)(uintptr_t)pauVar14 = *(undefined4 *)puVar10;
                  *(undefined4 *)(((uint8_t *)(void *)pauVar14) + 4) = uVar2;
                  *(undefined4 *)(((uint8_t *)(void *)pauVar14) + 8) = uVar3;
                  *(undefined4 *)(((uint8_t *)(void *)pauVar14) + 0xc) = uVar4;
                  pauVar14 = pauVar14 + 1;
                } while (pauVar12 != (uint128 *)0x0);
                if (pauStack_b8 == pauVar23) goto LAB_1000f14c;
              }
              iVar7 = (int)pauStack_b8 - (int)pauVar23;
              puVar10 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauVar11;
              puVar21 = ((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauStack_cc;
              do {
                iVar7 = iVar7 + -1;
                *puVar10 = *puVar21;
                puVar10 = puVar10 + 1;
                puVar21 = puVar21 + 1;
              } while (iVar7 != 0);
            }
LAB_1000f14c:
            recovered_10008354(pauStack_cc);
          }
          *(undefined4 *)(((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11) = 0;
        }
        puVar10 = ((uint8_t *)(void *)pauVar34) + (int)(uintptr_t)pauVar11;
        *puVar10 = (char)((uint)(puVar33 + (int)(uintptr_t)pauStack_bc * 0x2000) >> 0x18);
        puVar10[2] = (char)((uint)puVar33 >> 8);
        puVar10[1] = (char)((uint)(puVar33 + (int)(uintptr_t)pauStack_bc * 0x2000) >> 0x10);
        pauVar23 = (uint128 *)0x0;
        puVar10[3] = (char)puVar33;
        pauStack_a0 = pauVar11;
        do {
          if (pauStack_c0 <= pauVar23) {
            recovered_10008354(pauStack_a0);
            recovered_10008354(pauStack_a4);
            uStack_90 = 0xffffffff;
            uVar8 = recovered_1000f304(puVar6,&DAT_10017ad7,(byte *)0x0,0);
            bVar25 = (byte)uVar8;
            goto LAB_1000e480;
          }
          uStack_90 = 0xb;
          pauStack_bc = (uint128 *)((int)pauStack_c0 - (int)pauVar23);
          if ((undefined1 *)0x3ffff < pauStack_bc) {
            pauStack_bc = (uint128 *)0x40000;
          }
          pauStack_b8 = pauVar23;
          uVar8 = recovered_1000f304(puVar6,&DAT_10017b07,((uint8_t *)(void *)pauVar23) + (int)(uintptr_t)pauStack_a0,
                                     (uint)pauStack_bc);
          puVar6 = puStack_110;
          pauVar23 = (uint128 *)((int)pauStack_bc + (int)pauStack_b8);
        } while (uVar8 != 0);
        recovered_10008354(pauStack_a0);
        recovered_10008354(pauStack_a4);
        bVar25 = 0;
      }
      else {
        recovered_10008354((void *)0x0);
      }
    }
  }
LAB_1000e480:
  uStack_90 = 0xffffffff;
  iVar7 = recovered_10007488(puVar6);
  bVar26 = bVar25 & iVar7 == 0;
LAB_1000e378:
  recovered_10008a1c(&uStack_94);
  return bVar26;
}

#undef DAT_1000f2fc
#undef DAT_1000f300
#undef DAT_10017ad2
#undef DAT_10017ad7
#undef DAT_10017b07
#undef DAT_1001c00c
#undef EXT_00000004
#undef EXT_00000010
#undef auStack_120
#undef pauStack_118
#undef pauStack_114
#undef puStack_110
#undef puStack_10c
#undef puStack_108
#undef iStack_104
#undef puStack_100
#undef uStack_fc
#undef iStack_f8
#undef iStack_f4
#undef iStack_f0
#undef iStack_ec
#undef pbStack_e8
#undef pauStack_e4
#undef pauStack_e0
#undef pauStack_dc
#undef puStack_d8
#undef pauStack_d4
#undef pauStack_d0
#undef pauStack_cc
#undef pauStack_c8
#undef puStack_c4
#undef pauStack_c0
#undef pauStack_bc
#undef pauStack_b8
#undef bStack_b1
#undef uStack_b0
#undef uStack_af
#undef uStack_ae
#undef uStack_ad
#undef uStack_ac
#undef uStack_ab
#undef uStack_aa
#undef uStack_a9
#undef uStack_a5
#undef pauStack_a4
#undef pauStack_a0
#undef pauStack_9c
#undef pauStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000f400_DAT_1000f928[] __attribute__((aligned(16)))={0x02,0x01,0x00,0x03,0x06,0x05,0x04,0x07};
#undef DAT_1000f928
#define DAT_1000f928 (*(uint64_t *)((uintptr_t)pf_literal_1000f400_DAT_1000f928))
static const unsigned char pf_literal_1000f400_DAT_1000f930[] __attribute__((aligned(16)))={0xd0,0x87,0x00,0x00};
#undef DAT_1000f930
#define DAT_1000f930 (*(int *)((uintptr_t)pf_literal_1000f400_DAT_1000f930))
static const unsigned char pf_literal_1000f400_DAT_1000f934[] __attribute__((aligned(16)))={0x78,0x04,0x00,0x00};
#undef DAT_1000f934
#define DAT_1000f934 (*(int *)((uintptr_t)pf_literal_1000f400_DAT_1000f934))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define local_13c (*(uint *)(pf_stack_frame + 20))
#define local_138 (*(uint *)(pf_stack_frame + 24))
#define local_134 (*(uint *)(pf_stack_frame + 28))
#define local_130 (*(uint *)(pf_stack_frame + 32))
#define local_12c (*(uint * *)(pf_stack_frame + 36))
#define local_128 (*(uint *)(pf_stack_frame + 40))
#define local_124 (*(undefined1 * *)(pf_stack_frame + 44))
#define local_120 (*(int *)(pf_stack_frame + 48))
#define local_11c (*(uint128 * *)(pf_stack_frame + 52))
#define local_118 (*(undefined4 *)(pf_stack_frame + 56))
#define local_114 (*(undefined1 *)(pf_stack_frame + 60))
#define local_113 (*(undefined1 *)(pf_stack_frame + 61))
#define local_112 (*(undefined1 *)(pf_stack_frame + 62))
#define local_111 (*(undefined1 *)(pf_stack_frame + 63))
#define local_110 (*(undefined1 *)(pf_stack_frame + 64))
#define local_10f (*(undefined1 *)(pf_stack_frame + 65))
#define local_10e (*(undefined1 *)(pf_stack_frame + 66))
#define local_10d (*(undefined1 *)(pf_stack_frame + 67))
#define local_10c (*(undefined4 *)(pf_stack_frame + 68))
#define local_108 (*(undefined4 *)(pf_stack_frame + 72))
#define local_104 (*(undefined1 *)(pf_stack_frame + 76))
#define local_103 (*(undefined1 *)(pf_stack_frame + 77))
#define local_102 (*(undefined1 *)(pf_stack_frame + 78))
#define local_101 (*(undefined1 *)(pf_stack_frame + 79))
#define local_100 (*(undefined4 *)(pf_stack_frame + 80))
#define local_fc (*(undefined4 *)(pf_stack_frame + 84))
#define local_f8 (*(undefined8 *)(pf_stack_frame + 88))
#define local_e8 (*(undefined4 *)(pf_stack_frame + 104))
#define local_dd (*(undefined1 *)(pf_stack_frame + 115))
#define local_d8 (*(undefined8 *)(pf_stack_frame + 120))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 136))
#define local_bc (*(undefined4 *)(pf_stack_frame + 148))
#define local_a6 (*(undefined2 *)(pf_stack_frame + 170))
#define local_a4 (*(undefined1 *)(pf_stack_frame + 172))
#define local_a3 (*(undefined1 *)(pf_stack_frame + 173))
#define local_a2 (*(undefined1 *)(pf_stack_frame + 174))
#define local_a1 (*(undefined1 *)(pf_stack_frame + 175))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 176))
#define auStack_140 (*(undefined1 (*)[320])(pf_stack_frame + 16))
#define local_9c (*(undefined4 *)(pf_stack_frame + 180))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 184))
#define local_90 (*(undefined4 *)(pf_stack_frame + 192))
#define local_7c (*(undefined4 *)(pf_stack_frame + 212))
#define local_78 (*(int *)(pf_stack_frame + 216))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 220))
#define local_70 (*(int *)(pf_stack_frame + 224))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 228))
#define uStack_f0 (*(undefined8 *)(pf_stack_frame + 96))
#define uStack_e4 (*(undefined1 *)(pf_stack_frame + 108))
#define uStack_e3 (*(undefined2 *)(pf_stack_frame + 109))
#define uStack_e1 (*(undefined4 *)(pf_stack_frame + 111))
#define uStack_dc (*(undefined4 *)(pf_stack_frame + 116))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_c0 (*(undefined4 *)(pf_stack_frame + 144))
#define uStack_b8 (*(undefined4 *)(pf_stack_frame + 152))
#define uStack_b4 (*(undefined8 *)(pf_stack_frame + 156))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 188))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f400
 */

uint recovered_1000f400(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint128 *pauVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_140;
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x278U);
  local_70 = DAT_1000f934 + 0x1000f460;
  recovered_100089f8(&uStack_94);
  uVar11 = 0;
  if ((0x3fffffff < param_3) || (param_1 == 0 || param_2 == 0)) goto LAB_1000f490;
  uVar13 = param_3;
  if (0 < (int)param_3) {
    uVar13 = param_4;
  }
  if ((((int)uVar13 < 1) ||
      (uVar13 = param_3 * 4, (int)((ulonglong)param_4 * (ulonglong)uVar13 >> 0x20) != 0)) ||
     (uVar12 = uVar13 * param_4, local_128 = uVar13, 0xffffff85 < uVar12)) goto LAB_1000f490;
  local_90 = 0xffffffff;
  local_11c = (uint128 *)param_2;
  puVar4 = recovered_10007004(param_1,((uintptr_t)pf_module_state+0x127U));
  if (puVar4 == (uint *)0x0) goto LAB_1000f490;
  local_9c = 0x7a;
  iVar5 = uVar12 + 0x7a;
  local_a6 = 0x4d42;
  local_a1 = (undefined1)((uint)iVar5 >> 0x18);
  local_a4 = (undefined1)iVar5;
  local_a3 = (undefined1)((uint)iVar5 >> 8);
  local_a2 = (undefined1)((uint)iVar5 >> 0x10);
  local_f8 = 0;
  local_a0 = 0;
  uStack_e3 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_e8 = 0xff;
  local_fc = 0xb13;
  local_100 = 0xb13;
  local_101 = (undefined1)(uVar12 >> 0x18);
  local_102 = (undefined1)(uVar12 >> 0x10);
  local_103 = (undefined1)(uVar12 >> 8);
  local_108 = 3;
  local_10c = 0x200001;
  iVar5 = -param_4;
  uStack_f0 = 0xff0000ff0000;
  local_110 = (undefined1)iVar5;
  local_10d = (undefined1)((uint)iVar5 >> 0x18);
  local_10e = (undefined1)((uint)iVar5 >> 0x10);
  local_dd = 0x73;
  local_111 = (undefined1)(param_3 >> 0x18);
  local_112 = (undefined1)(param_3 >> 0x10);
  local_113 = (undefined1)(param_3 >> 8);
  uStack_e1 = 0x524742ff;
  local_10f = (undefined1)((uint)iVar5 >> 8);
  local_118 = 0x6c;
  local_104 = (undefined1)uVar12;
  local_114 = (undefined1)param_3;
  uStack_e4 = 0;
  local_90 = 0xffffffff;
  local_12c = puVar4;
  iVar5 = recovered_100078ac((int)&local_a6,1,0xe,puVar4);
  bVar2 = false;
  if (iVar5 == 0xe) {
    local_90 = 0xffffffff;
    iVar5 = recovered_100078ac((int)&local_118,1,0x6c,local_12c);
    bVar2 = iVar5 == 0x6c;
  }
  uVar13 = local_128;
  local_90 = 0xffffffff;
  local_98 = recovered_100082fc(local_128);
  recovered_10008354((void *)0x0);
  if (param_3 < 4) {
LAB_1000f6a0:
    iVar5 = uVar11 - uVar13;
    puVar14 = (undefined1 *)((int)local_98 + uVar11);
    do {
      *puVar14 = 0;
      bVar15 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      puVar14 = puVar14 + 1;
    } while (bVar15);
  }
  else {
    uVar11 = uVar13 & 0xfffffff0;
    puVar6 = local_98;
    uVar12 = uVar11;
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      uVar12 = uVar12 - 0x10;
    } while (uVar12 != 0);
    if (uVar13 != uVar11) goto LAB_1000f6a0;
  }
  uVar3 = DAT_1000f928;
  pauVar7 = (uint128 *)0x0;
  if (bVar2) {
    uVar11 = param_3 - 1;
    puVar14 = ((uint8_t *)(void *)local_11c) + 1;
    iVar5 = 0;
    local_134 = (uint)((undefined8 *)((int)local_98 + uVar11 * 4) < local_98 ||
                      ((int)local_98 + 1U + uVar11 * 4 < (int)local_98 + 1U ||
                      (((int)local_98 + 3U + uVar11 * 4 < (int)local_98 + 3U ||
                       (int)local_98 + 2U + uVar11 * 4 < (int)local_98 + 2U) ||
                      0x3ffffffe < uVar11 && param_3 != 0x40000000)));
    local_138 = param_3 & 0x3ffffff0;
    local_13c = param_3;
    local_130 = param_4;
    do {
      uVar11 = 0;
      if (local_13c < 0x20 || (local_134 & 1) != 0) {
LAB_1000f7f8:
        iVar8 = local_13c - uVar11;
        iVar1 = uVar11 * 4;
        puVar9 = puVar14;
        puVar6 = local_98;
        do {
          iVar8 = iVar8 + -1;
          puVar10 = (undefined1 *)((int)puVar6 + iVar1);
          *puVar10 = puVar9[iVar1 + 1];
          puVar10[1] = puVar9[iVar1];
          puVar10[2] = puVar9[iVar1 + -1];
          puVar10[3] = puVar9[iVar1 + 2];
          puVar9 = puVar9 + 4;
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        } while (iVar8 != 0);
      }
      else {
        uVar11 = local_138;
        pauVar7 = local_11c;
        puVar6 = local_98;
        do {
          uVar11 = uVar11 - 0x10;
          uVar23 = PFVectorTableLookup(uVar3,SUB168(*pauVar7,8),0,0,0,1,0);
          uVar22 = PFVectorTableLookup(uVar3,SUB168(*pauVar7,0),0,0,0,1,0);
          uVar17 = PFVectorTableLookup(uVar3,*(undefined8 *)(((uint8_t *)(void *)&pauVar7[1]) + 8),0,0,0,1,0);
          uVar16 = PFVectorTableLookup(uVar3,*(undefined8 *)(uintptr_t)(pauVar7+(1)),0,0,0,1,0);
          uVar19 = PFVectorTableLookup(uVar3,*(undefined8 *)(((uint8_t *)(void *)&pauVar7[2]) + 8),0,0,0,1,0);
          uVar21 = *(undefined8 *)(uintptr_t)(pauVar7+(3));
          uVar18 = PFVectorTableLookup(uVar3,*(undefined8 *)(uintptr_t)(pauVar7+(2)),0,0,0,1,0);
          uVar20 = PFVectorTableLookup(uVar3,*(undefined8 *)(((uint8_t *)(void *)&pauVar7[3]) + 8),0,0,0,1,0);
          *puVar6 = uVar22;
          puVar6[1] = uVar23;
          puVar6[2] = uVar16;
          puVar6[3] = uVar17;
          uVar16 = PFVectorTableLookup(uVar3,uVar21,0,0,0,1,0);
          puVar6[4] = uVar18;
          puVar6[5] = uVar19;
          puVar6[6] = uVar16;
          puVar6[7] = uVar20;
          pauVar7 = pauVar7 + 4;
          puVar6 = puVar6 + 8;
        } while (uVar11 != 0);
        uVar11 = local_138;
        if (local_138 != local_13c) goto LAB_1000f7f8;
      }
      local_90 = 2;
      local_124 = puVar14;
      local_120 = iVar5;
      uVar11 = recovered_100078ac((int)local_98,1,uVar13,local_12c);
      pauVar7 = (uint128 *)(uint)(uVar11 == local_128);
      if (uVar11 != local_128) break;
      iVar5 = local_120 + 1;
      puVar14 = local_124 + local_128;
      local_11c = (uint128 *)(((uint8_t *)(void *)local_11c) + local_128);
      uVar13 = local_128;
    } while (iVar5 < (int)local_130);
  }
  local_90 = 1;
  local_11c = pauVar7;
  iVar5 = recovered_10007488(local_12c);
  recovered_10008354(local_98);
  uVar11 = (uint)local_11c & (uint)(iVar5 == 0);
LAB_1000f490:
  recovered_10008a1c(&uStack_94);
  return uVar11;
}

#undef DAT_1000f928
#undef DAT_1000f930
#undef DAT_1000f934
#undef DAT_1001c00c
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
#undef local_113
#undef local_112
#undef local_111
#undef local_110
#undef local_10f
#undef local_10e
#undef local_10d
#undef local_10c
#undef local_108
#undef local_104
#undef local_103
#undef local_102
#undef local_101
#undef local_100
#undef local_fc
#undef local_f8
#undef local_e8
#undef local_dd
#undef local_d8
#undef local_c8
#undef local_bc
#undef local_a6
#undef local_a4
#undef local_a3
#undef local_a2
#undef local_a1
#undef local_a0
#undef auStack_140
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_f0
#undef uStack_e4
#undef uStack_e3
#undef uStack_e1
#undef uStack_dc
#undef uStack_d0
#undef uStack_c0
#undef uStack_b8
#undef uStack_b4
#undef uStack_94
#undef auStack_68

static const unsigned char pf_literal_1000f938_DAT_1000fdb0[] __attribute__((aligned(16)))={0x02,0x01,0x00,0x03,0x06,0x05,0x04,0x07};
#undef DAT_1000fdb0
#define DAT_1000fdb0 (*(uint64_t *)((uintptr_t)pf_literal_1000f938_DAT_1000fdb0))
static const unsigned char pf_literal_1000f938_DAT_1000fdb8[] __attribute__((aligned(16)))={0xa0,0x82,0x00,0x00};
#undef DAT_1000fdb8
#define DAT_1000fdb8 (*(int *)((uintptr_t)pf_literal_1000f938_DAT_1000fdb8))
static const unsigned char pf_literal_1000f938_DAT_1000fdbc[] __attribute__((aligned(16)))={0xc0,0x03,0x00,0x00};
#undef DAT_1000fdbc
#define DAT_1000fdbc (*(int *)((uintptr_t)pf_literal_1000f938_DAT_1000fdbc))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define local_a2 (*(undefined1 *)(pf_stack_frame + 78))
#define local_a1 (*(undefined1 *)(pf_stack_frame + 79))
#define local_a0 (*(undefined2 *)(pf_stack_frame + 80))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 88))
#define local_90 (*(undefined4 *)(pf_stack_frame + 96))
#define local_7c (*(undefined4 *)(pf_stack_frame + 116))
#define local_78 (*(int *)(pf_stack_frame + 120))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 124))
#define local_70 (*(int *)(pf_stack_frame + 128))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 132))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 92))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 136))
#define local_d4 (*(uint *)(pf_stack_frame + 28))
#define local_d0 (*(uint *)(pf_stack_frame + 32))
#define local_cc (*(uint *)(pf_stack_frame + 36))
#define local_c8 (*(int *)(pf_stack_frame + 40))
#define local_c4 (*(uint * *)(pf_stack_frame + 44))
#define local_c0 (*(int *)(pf_stack_frame + 48))
#define local_bc (*(uint *)(pf_stack_frame + 52))
#define local_b8 (*(uint *)(pf_stack_frame + 56))
#define local_b4 (*(uint *)(pf_stack_frame + 60))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_ac (*(undefined4 *)(pf_stack_frame + 68))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 72))
#define local_a4 (*(undefined1 *)(pf_stack_frame + 76))
#define local_a3 (*(undefined1 *)(pf_stack_frame + 77))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f938
 */

uint recovered_1000f938(int param_1,uint param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  uint128 *pauVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x280U);
  local_70 = DAT_1000fdbc + 0x1000f998;
  recovered_100089f8(&uStack_94);
  uVar12 = 0;
  if (param_1 != 0 && param_2 != 0) {
    iVar7 = param_3;
    if (0 < param_3) {
      iVar7 = param_4;
    }
    if (0 < iVar7) {
      local_90 = 0xffffffff;
      puVar3 = recovered_10007004(param_1,((uintptr_t)pf_module_state+0x127U));
      if (puVar3 != (uint *)0x0) {
        local_b4 = 0;
        local_a0 = 0x2820;
        local_ac = 0;
        local_a8 = 0;
        local_a2 = (undefined1)param_4;
        local_a4 = (undefined1)param_3;
        local_90 = 0xffffffff;
        local_b0 = 0x20000;
        local_a1 = (undefined1)((uint)param_4 >> 8);
        local_a3 = (undefined1)((uint)param_3 >> 8);
        local_d4 = param_2;
        uVar4 = recovered_100078ac((int)&local_b0,1,0x12,puVar3);
        uVar12 = param_3 * 4;
        local_98 = (undefined8 *)0x0;
        if (uVar12 != 0) {
          local_90 = 0xffffffff;
          local_b8 = uVar4;
          local_98 = recovered_100082fc(uVar12);
          recovered_10008354((void *)0x0);
          uVar4 = 0;
          if (uVar12 < 0x10) goto LAB_1000fad0;
          uVar4 = uVar12 & 0xfffffff0;
          uVar8 = 0;
          do {
            puVar10 = (undefined8 *)((int)local_98 + uVar8);
            uVar8 = uVar8 + 0x10;
            *puVar10 = 0;
            puVar10[1] = 0;
          } while (uVar4 != uVar8);
          for (; uVar12 != uVar4; uVar4 = uVar4 + 1) {
LAB_1000fad0:
            *(undefined1 *)((int)local_98 + uVar4) = 0;
          }
          uVar4 = local_b8;
        }
        uVar2 = DAT_1000fdb0;
        if (uVar4 == 0x12) {
          uVar4 = param_3 - 1;
          uVar8 = 0;
          local_b8 = (uint)((undefined8 *)((int)local_98 + uVar4 * 4) < local_98 ||
                           ((int)local_98 + 1U + uVar4 * 4 < (int)local_98 + 1U ||
                           (((int)local_98 + 3U + uVar4 * 4 < (int)local_98 + 3U ||
                            (int)local_98 + 2U + uVar4 * 4 < (int)local_98 + 2U) ||
                           0x3ffffffe < uVar4 && param_3 != 0x40000000)));
          local_c0 = local_d4 + 1;
          local_bc = param_3 & 0x7ffffff0;
          local_d0 = uVar12;
          local_cc = param_3;
          local_c8 = param_4;
          local_c4 = puVar3;
LAB_1000fbb0:
          do {
            uVar4 = 0;
            if ((uint)param_3 < 0x20 || (local_b8 & 1) != 0) {
LAB_1000fc44:
              iVar6 = local_c0 + uVar8 * uVar12;
              iVar9 = param_3 - uVar4;
              iVar7 = uVar4 * 4;
              puVar10 = local_98;
              do {
                iVar13 = iVar6 + iVar7;
                iVar9 = iVar9 + -1;
                puVar11 = (undefined1 *)((int)puVar10 + iVar7);
                *puVar11 = *(undefined1 *)(iVar13 + 1);
                puVar1 = (undefined1 *)(iVar6 + iVar7);
                iVar6 = iVar6 + 4;
                puVar11[1] = *puVar1;
                puVar11[2] = *(undefined1 *)(iVar13 + -1);
                puVar11[3] = *(undefined1 *)(iVar13 + 2);
                puVar10 = (undefined8 *)((int)puVar10 + 4);
              } while (iVar9 != 0);
            }
            else {
              pauVar5 = (uint128 *)(uVar8 * uVar12 + local_d4);
              uVar4 = local_bc;
              puVar10 = local_98;
              do {
                uVar4 = uVar4 - 0x10;
                uVar21 = PFVectorTableLookup(uVar2,SUB168(*pauVar5,8),0,0,0,1,0);
                uVar20 = PFVectorTableLookup(uVar2,SUB168(*pauVar5,0),0,0,0,1,0);
                uVar15 = PFVectorTableLookup(uVar2,*(undefined8 *)(((uint8_t *)(void *)&pauVar5[1]) + 8),0,0,0,1,0);
                uVar14 = PFVectorTableLookup(uVar2,*(undefined8 *)(uintptr_t)(pauVar5+(1)),0,0,0,1,0);
                uVar17 = PFVectorTableLookup(uVar2,*(undefined8 *)(((uint8_t *)(void *)&pauVar5[2]) + 8),0,0,0,1,0);
                uVar19 = *(undefined8 *)(uintptr_t)(pauVar5+(3));
                uVar16 = PFVectorTableLookup(uVar2,*(undefined8 *)(uintptr_t)(pauVar5+(2)),0,0,0,1,0);
                uVar18 = PFVectorTableLookup(uVar2,*(undefined8 *)(((uint8_t *)(void *)&pauVar5[3]) + 8),0,0,0,1,0);
                *puVar10 = uVar20;
                puVar10[1] = uVar21;
                puVar10[2] = uVar14;
                puVar10[3] = uVar15;
                uVar14 = PFVectorTableLookup(uVar2,uVar19,0,0,0,1,0);
                puVar10[4] = uVar16;
                puVar10[5] = uVar17;
                puVar10[6] = uVar14;
                puVar10[7] = uVar18;
                pauVar5 = pauVar5 + 4;
                puVar10 = puVar10 + 8;
              } while (uVar4 != 0);
              uVar4 = local_bc;
              if (local_bc != param_3) goto LAB_1000fc44;
            }
            if (uVar12 != 0) {
              local_90 = 1;
              local_b4 = uVar8;
              uVar4 = recovered_100078ac((int)local_98,1,uVar12,puVar3);
              puVar3 = local_c4;
              if ((uVar4 != local_d0) ||
                 (uVar8 = local_b4 + 1, param_4 = local_c8, uVar12 = local_d0, param_3 = local_cc,
                 local_c8 <= (int)uVar8)) {
                local_b4 = 0;
                if (uVar4 != local_d0) goto LAB_1000fd28;
                break;
              }
              goto LAB_1000fbb0;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < param_4);
          local_90 = 2;
          iVar7 = recovered_100078ac(((uintptr_t)pf_module_state+0x604U),1,0x1a,puVar3);
          local_b4 = (uint)(iVar7 == 0x1a);
          puVar3 = local_c4;
        }
LAB_1000fd28:
        local_90 = 3;
        iVar7 = recovered_10007488(puVar3);
        recovered_10008354(local_98);
        uVar12 = local_b4 & iVar7 == 0;
      }
    }
  }
  recovered_10008a1c(&uStack_94);
  return uVar12;
}

#undef DAT_1000fdb0
#undef DAT_1000fdb8
#undef DAT_1000fdbc
#undef DAT_1001c00c
#undef local_a2
#undef local_a1
#undef local_a0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_e0
#undef uStack_94
#undef auStack_68
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
#undef local_a3

static const unsigned char pf_literal_1000fdc0_DAT_10010b40[] __attribute__((aligned(16)))={0x24,0x7e,0x00,0x00};
#undef DAT_10010b40
#define DAT_10010b40 (*(int *)((uintptr_t)pf_literal_1000fdc0_DAT_10010b40))
static const unsigned char pf_literal_1000fdc0_DAT_10010b44[] __attribute__((aligned(16)))={0xe8,0x24,0x00,0x00};
#undef DAT_10010b44
#define DAT_10010b44 (*(int *)((uintptr_t)pf_literal_1000fdc0_DAT_10010b44))
#undef DAT_10017b1c
#define DAT_10017b1c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef str_10017b14
#define str_10017b14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#define auStack_160 (*(undefined1 (*)[352])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 220))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 264))
#define local_150 (*(int *)(pf_stack_frame + 32))
#define local_14c (*(int *)(pf_stack_frame + 36))
#define local_148 (*(int *)(pf_stack_frame + 40))
#define local_144 (*(uint *)(pf_stack_frame + 44))
#define local_140 (*(uint *)(pf_stack_frame + 48))
#define local_13c (*(undefined8 * *)(pf_stack_frame + 52))
#define local_138 (*(uint *)(pf_stack_frame + 56))
#define local_134 (*(undefined8 * *)(pf_stack_frame + 60))
#define local_130 (*(undefined8 * *)(pf_stack_frame + 64))
#define local_12c (*(int *)(pf_stack_frame + 68))
#define local_128 (*(uint *)(pf_stack_frame + 72))
#define local_124 (*(undefined8 * *)(pf_stack_frame + 76))
#define local_120 (*(int *)(pf_stack_frame + 80))
#define local_11c (*(undefined8 * *)(pf_stack_frame + 84))
#define local_118 (*(undefined8 * *)(pf_stack_frame + 88))
#define local_114 (*(int *)(pf_stack_frame + 92))
#define local_110 (*(uint *)(pf_stack_frame + 96))
#define local_10c (*(undefined8 * *)(pf_stack_frame + 100))
#define local_108 (*(int *)(pf_stack_frame + 104))
#define local_104 (*(int *)(pf_stack_frame + 108))
#define local_100 (*(undefined8 * *)(pf_stack_frame + 112))
#define local_fc (*(undefined8 * *)(pf_stack_frame + 116))
#define local_f8 (*(undefined8 * *)(pf_stack_frame + 120))
#define local_f4 (*(undefined8 * *)(pf_stack_frame + 124))
#define local_f0 (*(undefined8 * *)(pf_stack_frame + 128))
#define local_ec (*(undefined8 * *)(pf_stack_frame + 132))
#define local_e8 (*(undefined8 * *)(pf_stack_frame + 136))
#define local_e4 (*(undefined8 * *)(pf_stack_frame + 140))
#define local_e0 (*(undefined8 * *)(pf_stack_frame + 144))
#define local_dc (*(undefined8 * *)(pf_stack_frame + 148))
#define local_d8 (*(undefined8 * *)(pf_stack_frame + 152))
#define local_d4 (*(undefined8 * *)(pf_stack_frame + 156))
#define local_d0 (*(uint * *)(pf_stack_frame + 160))
#define local_cc (*(undefined8 * *)(pf_stack_frame + 164))
#define local_c8 (*(undefined8 * *)(pf_stack_frame + 168))
#define local_c4 (*(undefined4 * *)(pf_stack_frame + 172))
#define local_c0 (*(undefined8 * *)(pf_stack_frame + 176))
#define local_bc (*(undefined4 * *)(pf_stack_frame + 180))
#define local_b8 (*(undefined8 * *)(pf_stack_frame + 184))
#define local_b4 (*(undefined8 * *)(pf_stack_frame + 188))
#define local_b0 (*(undefined8 * *)(pf_stack_frame + 192))
#define local_ac (*(undefined4 * *)(pf_stack_frame + 196))
#define local_a8 (*(undefined8 * *)(pf_stack_frame + 200))
#define local_a4 (*(undefined8 * *)(pf_stack_frame + 204))
#define local_a0 (*(undefined8 * *)(pf_stack_frame + 208))
#define local_9c (*(undefined8 * *)(pf_stack_frame + 212))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 216))
#define local_90 (*(undefined4 *)(pf_stack_frame + 224))
#define local_7c (*(undefined4 *)(pf_stack_frame + 244))
#define local_78 (*(int *)(pf_stack_frame + 248))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 252))
#define local_70 (*(int *)(pf_stack_frame + 256))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 260))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdc0
 */

/* WARNING: Removing unreachable block (ram,0x10011c78) */
/* WARNING: Removing unreachable block (ram,0x10011c90) */
/* WARNING: Removing unreachable block (ram,0x10011ca8) */
/* WARNING: Removing unreachable block (ram,0x10011cc0) */
/* WARNING: Removing unreachable block (ram,0x10011cc8) */
/* WARNING: Removing unreachable block (ram,0x10011cec) */
/* WARNING: Removing unreachable block (ram,0x10011d04) */
/* WARNING: Removing unreachable block (ram,0x10011d1c) */

uint recovered_1000fdc0(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  char *pcVar16;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint extraout_r1_07 = 0;
  uint extraout_r1_08 = 0;
  uint extraout_r1_09 = 0;
  uint extraout_r1_10 = 0;
  uint extraout_r1_11 = 0;
  uint extraout_r1_12 = 0;
  uint extraout_r1_13 = 0;
  uint extraout_r1_14 = 0;
  uint extraout_r1_15 = 0;
  uint extraout_r1_16 = 0;
  uint extraout_r1_17 = 0;
  uint extraout_r1_18 = 0;
  uint extraout_r1_19 = 0;
  uint extraout_r1_20 = 0;
  uint extraout_r1_21 = 0;
  uint extraout_r1_22 = 0;
  uint extraout_r1_23 = 0;
  undefined1 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  undefined1 uVar29;
  bool bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_160;
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x28cU);
  local_70 = DAT_10010b44 + 0x1000fe20;
  recovered_100089f8(&uStack_94);
  uVar26 = 0;
  if (param_1 == 0 || param_2 == (undefined1 *)0x0) goto LAB_1000fe48;
  puVar6 = param_3;
  if (0 < (int)param_3) {
    puVar6 = param_4;
  }
  if ((int)puVar6 < 1) goto LAB_1000fe48;
  uVar19 = (uint)(param_4 + 0x3f) >> 6;
  uVar24 = (uint)(param_3 + 0x3f) >> 6;
  if (((int)((ulonglong)uVar19 * (ulonglong)uVar24 >> 0x20) != 0) ||
     (local_e0 = (undefined8 *)(uVar19 * uVar24), (undefined8 *)0x3fffffff < local_e0))
  goto LAB_1000fe48;
  local_90 = 1;
  local_150 = param_1;
  local_144 = uVar24;
  local_140 = uVar19;
  local_130 = (undefined8 *)param_2;
  local_124 = (undefined8 *)param_4;
  local_fc = (undefined8 *)param_3;
  puVar2 = recovered_100082fc(0x10);
  recovered_10008354((void *)0x0);
  *(undefined2 *)(puVar2 + 3) = 0x33;
  puVar2[2] = 0x30307620;
  puVar2[1] = 0x66637820;
  *puVar2 = 0x706d6967;
  local_90 = 2;
  local_cc = (undefined8 *)puVar2;
  local_ac = puVar2;
  puVar2 = recovered_100082fc(0x20);
  puVar3 = local_fc;
  uVar28 = *(undefined4 *)((int)local_cc + 1);
  uVar14 = *(undefined4 *)((int)local_cc + 5);
  uVar18 = *(undefined4 *)((int)local_cc + 9);
  uVar26 = (uint)local_fc >> 8;
  uVar29 = *(undefined1 *)((int)local_cc + 0xd);
  uVar19 = (uint)local_fc >> 0x10;
  puVar5 = (undefined8 *)((uint)local_fc >> 0x18);
  *(undefined1 *)puVar2 = *(undefined1 *)local_cc;
  *(undefined4 *)((int)puVar2 + 1) = uVar28;
  *(undefined4 *)((int)puVar2 + 5) = uVar14;
  *(undefined4 *)((int)puVar2 + 9) = uVar18;
  *(undefined1 *)((int)puVar2 + 0xd) = uVar29;
  recovered_10008354(local_cc);
  *(char *)((int)puVar2 + 0x11) = (char)puVar3;
  *(undefined4 *)((int)puVar2 + 0x1a) = 0x11000000;
  *(undefined4 *)((int)puVar2 + 0x16) = 0;
  *(char *)((int)puVar2 + 0x15) = (char)local_124;
  local_d8 = (undefined8 *)((uint)local_124 >> 8);
  *(char *)(puVar2 + 4) = (char)((uint)puVar3 >> 8);
  *(char *)(puVar2 + 5) = (char)((uint)local_124 >> 8);
  local_dc = (undefined8 *)((uint)local_124 >> 0x10);
  local_e4 = (undefined8 *)((uint)local_124 >> 0x18);
  *(char *)((int)puVar2 + 0x12) = (char)((uint)local_124 >> 0x18);
  *(char *)((int)puVar2 + 0x13) = (char)((uint)local_124 >> 0x10);
  *(char *)((int)puVar2 + 0xf) = (char)((uint)puVar3 >> 0x10);
  *(char *)((int)puVar2 + 0xe) = (char)((uint)puVar3 >> 0x18);
  local_90 = 3;
  local_e8 = puVar5;
  local_d4 = (undefined8 *)puVar2;
  local_d0 = (uint *)uVar26;
  local_cc = (undefined8 *)uVar19;
  local_ac = puVar2;
  puVar3 = recovered_100082fc(0x40);
  local_134 = local_130;
  uVar14 = *(undefined4 *)local_d4;
  uVar18 = *(undefined4 *)((int)local_d4 + 4);
  uVar28 = *(undefined4 *)((int)local_d4 + 8);
  uVar1 = *(undefined4 *)((int)local_d4 + 0xc);
  *(undefined2 *)((int)puVar3 + 0x11) = *(undefined2 *)((int)local_d4 + 0x11);
  *(undefined2 *)((int)puVar3 + 0x1c) = *(undefined2 *)((int)local_d4 + 0x1c);
  *(undefined4 *)puVar3 = uVar14;
  *(undefined4 *)((int)puVar3 + 4) = uVar18;
  *(undefined4 *)(puVar3 + 1) = uVar28;
  *(undefined4 *)((int)puVar3 + 0xc) = uVar1;
  uVar29 = *(undefined1 *)((int)local_d4 + 0x13);
  uVar14 = *(undefined4 *)((int)local_d4 + 0x14);
  uVar18 = *(undefined4 *)((int)local_d4 + 0x18);
  *(undefined1 *)(puVar3 + 2) = *(undefined1 *)((int)local_d4 + 0x10);
  *(undefined1 *)((int)puVar3 + 0x13) = uVar29;
  *(undefined4 *)((int)puVar3 + 0x14) = uVar14;
  *(undefined4 *)(puVar3 + 3) = uVar18;
  recovered_10008354(local_d4);
  *(undefined4 *)((int)puVar3 + 0x2a) = 0;
  *(undefined4 *)((int)puVar3 + 0x26) = 0;
  *(undefined4 *)((int)puVar3 + 0x22) = 0;
  *(undefined1 *)((int)puVar3 + 0x3a) = 0;
  *(undefined2 *)(puVar3 + 7) = 0;
  *(undefined4 *)((int)puVar3 + 0x34) = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *(char *)((int)puVar3 + 0x3e) = (char)local_fc;
  *(undefined4 *)((int)puVar3 + 0x1e) = 0x1000000;
  *(char *)((int)puVar3 + 0x3d) = (char)local_d0;
  *(undefined2 *)((int)puVar3 + 0x2e) = 0x3b;
  *(char *)((int)puVar3 + 0x3c) = (char)local_cc;
  *(char *)((int)puVar3 + 0x3b) = (char)local_e8;
  local_f0 = puVar3 + 1;
  puVar5 = (undefined8 *)0x40;
  do {
    local_ec = puVar5;
    puVar5 = (undefined8 *)((int)local_ec << 1);
  } while (local_ec < (undefined8 *)0x43);
  local_90 = 4;
  local_d4 = puVar3;
  local_a8 = puVar3;
  puVar3 = recovered_100082fc((uint)local_ec);
  puVar5 = local_124;
  iVar4 = 0;
  if (7 < (uint)((int)puVar3 - (int)local_d4)) {
    uVar34 = *local_d4;
    uVar14 = *(undefined4 *)((int)local_f0 + 4);
    uVar18 = *(undefined4 *)(local_f0 + 1);
    uVar28 = *(undefined4 *)((int)local_f0 + 0xc);
    uVar31 = local_f0[2];
    uVar32 = local_f0[3];
    uVar33 = local_f0[4];
    uVar35 = local_f0[5];
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)local_f0;
    *(undefined4 *)((int)puVar3 + 0xc) = uVar14;
    *(undefined4 *)(puVar3 + 2) = uVar18;
    *(undefined4 *)((int)puVar3 + 0x14) = uVar28;
    puVar3[3] = uVar31;
    puVar3[4] = uVar32;
    puVar3[5] = uVar33;
    puVar3[6] = uVar35;
    iVar4 = 0x38;
    *puVar3 = uVar34;
  }
  do {
    *(undefined1 *)((int)puVar3 + iVar4) = *(undefined1 *)((int)local_d4 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x3f);
  recovered_10008354(local_d4);
  *(char *)((int)puVar3 + 0x41) = (char)local_d8;
  *(char *)(puVar3 + 8) = (char)local_dc;
  *(char *)((int)puVar3 + 0x42) = (char)puVar5;
  *(char *)((int)puVar3 + 0x3f) = (char)local_e4;
  puVar5 = local_ec;
  if (local_ec < (undefined8 *)0x47) {
    do {
      local_ec = puVar5;
      puVar5 = (undefined8 *)((int)local_ec << 1);
    } while (local_ec < (undefined8 *)0x47);
    local_90 = 5;
    local_f0 = puVar3 + 1;
    local_d4 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_ec);
    iVar4 = 0;
    if (0xf < (uint)((int)puVar3 - (int)local_d4)) {
      uVar14 = *(undefined4 *)((int)local_f0 + 0xc);
      uVar18 = *(undefined4 *)(local_f0 + 2);
      uVar28 = *(undefined4 *)((int)local_f0 + 0x14);
      uVar31 = local_f0[3];
      uVar32 = local_f0[4];
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(local_f0 + 1);
      *(undefined4 *)((int)puVar3 + 0x14) = uVar14;
      *(undefined4 *)(puVar3 + 3) = uVar18;
      *(undefined4 *)((int)puVar3 + 0x1c) = uVar28;
      uVar33 = local_f0[5];
      uVar34 = local_f0[6];
      puVar3[4] = uVar31;
      puVar3[5] = uVar32;
      uVar31 = *local_d4;
      uVar32 = local_d4[1];
      puVar3[6] = uVar33;
      puVar3[7] = uVar34;
      iVar4 = 0x40;
      *puVar3 = uVar31;
      puVar3[1] = uVar32;
    }
    do {
      *(undefined1 *)((int)puVar3 + iVar4) = *(undefined1 *)((int)local_d4 + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x43);
    recovered_10008354(local_d4);
  }
  *(undefined4 *)((int)puVar3 + 0x43) = 0x1000000;
  local_90 = 6;
  local_d4 = puVar3;
  local_a8 = puVar3;
  puVar5 = (undefined8 *)recovered_10004054(str_10017b14);
  if (local_ec < (undefined8 *)0x4b) {
    local_f4 = local_d4 + 2;
    puVar3 = local_ec;
    do {
      local_ec = puVar3;
      puVar3 = (undefined8 *)((int)local_ec << 1);
    } while (local_ec < (undefined8 *)0x4b);
    local_90 = 7;
    local_a8 = local_d4;
    local_f0 = puVar5;
    puVar3 = recovered_100082fc((uint)local_ec);
    puVar5 = local_f0;
    iVar4 = 0;
    if (0xf < (uint)((int)puVar3 - (int)local_d4)) {
      uVar33 = *local_d4;
      uVar34 = local_d4[1];
      uVar14 = *(undefined4 *)((int)local_f4 + 4);
      uVar18 = *(undefined4 *)(local_f4 + 1);
      uVar28 = *(undefined4 *)((int)local_f4 + 0xc);
      uVar31 = local_f4[2];
      uVar32 = local_f4[3];
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)local_f4;
      *(undefined4 *)((int)puVar3 + 0x14) = uVar14;
      *(undefined4 *)(puVar3 + 3) = uVar18;
      *(undefined4 *)((int)puVar3 + 0x1c) = uVar28;
      uVar35 = local_f4[4];
      uVar36 = local_f4[5];
      puVar3[4] = uVar31;
      puVar3[5] = uVar32;
      puVar3[6] = uVar35;
      puVar3[7] = uVar36;
      iVar4 = 0x40;
      *puVar3 = uVar33;
      puVar3[1] = uVar34;
    }
    uVar29 = SUB41(local_124,0);
    do {
      *(undefined1 *)((int)puVar3 + iVar4) = *(undefined1 *)((int)local_d4 + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x47);
    recovered_10008354(local_d4);
  }
  else {
    uVar29 = SUB41(local_124,0);
    puVar3 = local_d4;
  }
  iVar4 = (int)puVar5 + 1;
  *(char *)((int)puVar3 + 0x4a) = (char)iVar4;
  *(char *)((int)puVar3 + 0x49) = (char)((uint)iVar4 >> 8);
  *(char *)(puVar3 + 9) = (char)((uint)iVar4 >> 0x10);
  *(char *)((int)puVar3 + 0x47) = (char)((uint)iVar4 >> 0x18);
  local_f0 = local_ec;
  if (puVar5 == (undefined8 *)0x0) {
    puVar27 = (undefined8 *)0x4b;
  }
  else {
    puVar27 = (undefined8 *)((int)puVar5 + 0x4b);
    if (local_ec < puVar27) {
      local_f8 = puVar3 + 1;
      puVar22 = local_ec;
      do {
        local_ec = puVar22;
        puVar22 = (undefined8 *)((int)local_ec << 1);
      } while (local_ec < puVar27);
      local_90 = 8;
      local_f4 = puVar3;
      local_f0 = puVar5;
      local_d4 = puVar27;
      local_a8 = puVar3;
      puVar3 = recovered_100082fc((uint)local_ec);
      puVar27 = local_d4;
      puVar5 = local_f0;
      iVar4 = 0;
      if (7 < (uint)((int)puVar3 - (int)local_f4)) {
        *puVar3 = *local_f4;
        puVar3[1] = *local_f8;
        puVar3[2] = local_f8[1];
        puVar3[3] = local_f8[2];
        puVar3[4] = local_f8[3];
        puVar3[5] = local_f8[4];
        puVar3[6] = local_f8[5];
        puVar3[7] = local_f8[6];
        uVar14 = *(undefined4 *)((int)local_f8 + 0x3c);
        *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(local_f8 + 7);
        *(undefined4 *)((int)puVar3 + 0x44) = uVar14;
        iVar4 = 0x48;
      }
      uVar29 = SUB41(local_124,0);
      do {
        *(undefined1 *)((int)puVar3 + iVar4) = *(undefined1 *)((int)local_f4 + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x4b);
      recovered_10008354(local_f4);
      local_f0 = local_ec;
    }
    iVar4 = 0x4b;
    pcVar15 = str_10017b14;
    if ((0xf < puVar5) && ((undefined1 *)0xf < (undefined1 *)((int)puVar3 + -((uintptr_t)pf_module_state+0x121U)))) {
      uVar19 = (uint)puVar5 & 0xfffffff0;
      iVar4 = uVar19 + 0x4b;
      pcVar15 = str_10017b14 + uVar19;
      uVar26 = 0;
      do {
        uVar14 = *(undefined4 *)(str_10017b14 + uVar26 + 4);
        uVar18 = *(undefined4 *)((int)&DAT_10017b1c + uVar26);
        uVar28 = *(undefined4 *)((int)&DAT_10017b1c + uVar26 + 4);
        uVar24 = uVar26 + 0x10;
        *(undefined4 *)((int)puVar3 + uVar26 + 0x4b) = *(undefined4 *)(str_10017b14 + uVar26);
        *(undefined4 *)((int)puVar3 + uVar26 + 0x4f) = uVar14;
        *(undefined4 *)((int)puVar3 + uVar26 + 0x53) = uVar18;
        *(undefined4 *)((int)puVar3 + uVar26 + 0x57) = uVar28;
        uVar26 = uVar24;
      } while (uVar19 != uVar24);
      uVar29 = SUB41(local_124,0);
      if (puVar5 == (undefined8 *)uVar19) goto LAB_10010470;
    }
    do {
      pcVar16 = pcVar15 + 1;
      *(char *)((int)puVar3 + iVar4) = *pcVar15;
      iVar4 = iVar4 + 1;
      pcVar15 = pcVar16;
    } while (pcVar16 != str_10017b14 + (int)puVar5);
  }
LAB_10010470:
  local_d4 = puVar27;
  if (puVar27 == local_f0) {
    puVar5 = (undefined8 *)((int)local_f0 << 1);
    if (local_f0 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UndefinedInstruction;
    }
    if (local_f0 < puVar5) {
      local_90 = 9;
      local_f4 = puVar3;
      local_ec = local_f0;
      local_f0 = puVar5;
      local_a8 = puVar3;
      puVar3 = recovered_100082fc((uint)puVar5);
      puVar27 = local_d4;
      uVar29 = SUB41(local_124,0);
      if (local_ec != (undefined8 *)0x0) {
        bVar30 = local_ec == (undefined8 *)&DataAbort;
        puVar5 = (undefined8 *)0x0;
        uVar26 = extraout_r1;
        if ((undefined8 *)0xf < local_ec) {
          uVar26 = (int)puVar3 - (int)local_f4;
          bVar30 = uVar26 == 0xf;
        }
        if (((undefined8 *)0xf < local_ec && 0xe < uVar26) && !bVar30) {
          puVar5 = (undefined8 *)((uint)local_ec & 0xfffffff0);
          puVar22 = puVar5;
          puVar25 = local_f4;
          puVar8 = puVar3;
          do {
            uVar14 = *(undefined4 *)puVar25;
            uVar18 = *(undefined4 *)((int)puVar25 + 4);
            uVar28 = *(undefined4 *)(puVar25 + 1);
            uVar1 = *(undefined4 *)((int)puVar25 + 0xc);
            puVar25 = puVar25 + 2;
            puVar22 = puVar22 + -2;
            *(undefined4 *)puVar8 = uVar14;
            *(undefined4 *)((int)puVar8 + 4) = uVar18;
            *(undefined4 *)(puVar8 + 1) = uVar28;
            *(undefined4 *)((int)puVar8 + 0xc) = uVar1;
            puVar8 = puVar8 + 2;
          } while (puVar22 != (undefined8 *)0x0);
          if (local_ec == puVar5) goto LAB_10010520;
        }
        iVar4 = (int)local_ec - (int)puVar5;
        puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
        puVar17 = (undefined1 *)((int)local_f4 + (int)puVar5);
        do {
          iVar4 = iVar4 + -1;
          *puVar6 = *puVar17;
          puVar6 = puVar6 + 1;
          puVar17 = puVar17 + 1;
        } while (iVar4 != 0);
      }
LAB_10010520:
      recovered_10008354(local_f4);
    }
  }
  puVar22 = (undefined8 *)((int)puVar27 + 5);
  puVar5 = (undefined8 *)((int)puVar27 + 1);
  *(undefined1 *)((int)puVar3 + (int)puVar27) = 0;
  local_f4 = puVar5;
  local_ec = puVar22;
  if (local_f0 < puVar22) {
    if (local_f0 == (undefined8 *)0x0) {
      local_f0 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_f8 = local_f0;
      local_f0 = (undefined8 *)((int)local_f8 << 1);
    } while (local_f8 < puVar22);
    local_90 = 10;
    local_f0 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_f8);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar5 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f4 != (undefined8 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      uVar26 = extraout_r1_00;
      if ((undefined1 *)0xf < local_f4) {
        uVar26 = (int)puVar3 - (int)local_f0;
      }
      if ((undefined1 *)0xf < local_f4 && 0xf < uVar26) {
        puVar6 = (undefined1 *)((uint)local_f4 & 0xfffffff0);
        puVar17 = puVar6;
        puVar25 = local_f0;
        puVar8 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar25;
          uVar18 = *(undefined4 *)((int)puVar25 + 4);
          uVar28 = *(undefined4 *)(puVar25 + 1);
          uVar1 = *(undefined4 *)((int)puVar25 + 0xc);
          puVar25 = puVar25 + 2;
          puVar17 = puVar17 + -0x10;
          *(undefined4 *)puVar8 = uVar14;
          *(undefined4 *)((int)puVar8 + 4) = uVar18;
          *(undefined4 *)(puVar8 + 1) = uVar28;
          *(undefined4 *)((int)puVar8 + 0xc) = uVar1;
          puVar8 = puVar8 + 2;
        } while (puVar17 != (undefined1 *)0x0);
        if (local_f4 == (undefined8 *)puVar6) goto LAB_100105dc;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (1 - (int)puVar6));
      puVar17 = (undefined1 *)((int)puVar3 + (int)puVar6);
      puVar6 = (undefined1 *)((int)local_f0 + (int)puVar6);
      do {
        puVar7 = puVar7 + -1;
        *puVar17 = *puVar6;
        puVar17 = puVar17 + 1;
        puVar6 = puVar6 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100105dc:
    recovered_10008354(local_f0);
  }
  else {
    local_f8 = local_f0;
  }
  puVar25 = (undefined8 *)((int)puVar27 + 9);
  *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar27))[4] = 6;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar27) + 2) = 0;
  puVar8 = local_f8;
  local_f0 = puVar25;
  if (local_f8 < puVar25) {
    if (local_f8 == (undefined8 *)0x0) {
      local_f8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = local_f8;
      local_f8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar25);
    local_90 = 0xb;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar25 = local_f0;
    puVar5 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar26 = extraout_r1_01;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar8 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar23 = puVar8;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar23 != (undefined8 *)0x0);
        if (local_ec == puVar8) goto LAB_100106a0;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (5 - (int)puVar8));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar8);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar8);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100106a0:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar23 = (undefined8 *)((int)puVar27 + 0xd);
  *(undefined1 *)((int)puVar3 + (int)puVar22) = 0;
  *(undefined1 *)((int)puVar3 + (int)((int)puVar5 + 7)) = 4;
  *(undefined2 *)((int)puVar3 + (int)((int)puVar5 + 5)) = 0;
  local_f4 = puVar23;
  if (puVar8 < puVar23) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar23);
    local_90 = 0xc;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar25 = local_f0;
    puVar23 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar26 = extraout_r1_02;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar5 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar8 = puVar5;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f0 == puVar5) goto LAB_1001075c;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (9 - (int)puVar5));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar5);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_1001075c:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar5 = (undefined8 *)((int)puVar27 + 0x11);
  *(undefined1 *)((int)puVar3 + (int)puVar25) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar22))[7] = 0xff;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar22) + 5) = 0;
  local_ec = puVar5;
  if (puVar8 < puVar5) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar5);
    local_90 = 0xd;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar5 = local_ec;
    puVar25 = local_f0;
    puVar23 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f4 != (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
      uVar26 = extraout_r1_03;
      if ((undefined8 *)0xf < local_f4) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f4 && 0xf < uVar26) {
        puVar22 = (undefined8 *)((uint)local_f4 & 0xfffffff0);
        puVar8 = puVar22;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f4 == puVar22) goto LAB_10010828;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0xd - (int)puVar22));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar22);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010828:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar22 = (undefined8 *)((int)puVar27 + 0x15);
  *(undefined1 *)((int)puVar3 + (int)puVar23) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar25))[7] = 7;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar25) + 5) = 0;
  local_f8 = puVar22;
  if (puVar8 < puVar22) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar22);
    local_90 = 0xe;
    local_f0 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar5 = local_ec;
    puVar23 = local_f4;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      uVar26 = extraout_r1_04;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f0;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar25 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar8 = puVar25;
        puVar21 = local_f0;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_ec == puVar25) goto LAB_100108f0;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x11 - (int)puVar25));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar25);
      puVar17 = (undefined1 *)((int)local_f0 + (int)puVar25);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100108f0:
    recovered_10008354(local_f0);
    puVar8 = local_100;
  }
  puVar25 = (undefined8 *)((int)puVar27 + 0x19);
  *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar23))[7] = 4;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar23) + 5) = 0;
  local_f0 = puVar25;
  if (puVar8 < puVar25) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar25);
    local_90 = 0xf;
    local_f4 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar5 = local_ec;
    puVar25 = local_f0;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f8 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar26 = extraout_r1_05;
      if ((undefined8 *)0xf < local_f8) {
        uVar26 = (int)puVar3 - (int)local_f4;
      }
      if ((undefined8 *)0xf < local_f8 && 0xf < uVar26) {
        puVar8 = (undefined8 *)((uint)local_f8 & 0xfffffff0);
        puVar23 = puVar8;
        puVar21 = local_f4;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar23 != (undefined8 *)0x0);
        if (local_f8 == puVar8) goto LAB_100109b0;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x15 - (int)puVar8));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar8);
      puVar17 = (undefined1 *)((int)local_f4 + (int)puVar8);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100109b0:
    recovered_10008354(local_f4);
    puVar8 = local_100;
  }
  puVar23 = (undefined8 *)((int)puVar27 + 0x1d);
  *(undefined1 *)((int)puVar3 + (int)puVar22) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar5))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar5) + 5) = 0;
  local_f4 = puVar23;
  if (puVar8 < puVar23) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar23);
    local_90 = 0x10;
    local_ec = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar25 = local_f0;
    puVar23 = local_f4;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar26 = extraout_r1_06;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_ec;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar5 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar8 = puVar5;
        puVar21 = local_ec;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f0 == puVar5) goto LAB_10010a6c;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x19 - (int)puVar5));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
      puVar17 = (undefined1 *)((int)local_ec + (int)puVar5);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010a6c:
    recovered_10008354(local_ec);
    puVar8 = local_100;
  }
  puVar5 = (undefined8 *)((int)puVar27 + 0x21);
  *(undefined1 *)((int)puVar3 + (int)puVar25) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar22))[7] = 8;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar22) + 5) = 0;
  local_ec = puVar5;
  if (puVar8 < puVar5) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar5);
    local_90 = 0x11;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar5 = local_ec;
    puVar25 = local_f0;
    puVar23 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f4 != (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
      uVar26 = extraout_r1_07;
      if ((undefined8 *)0xf < local_f4) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f4 && 0xf < uVar26) {
        puVar22 = (undefined8 *)((uint)local_f4 & 0xfffffff0);
        puVar8 = puVar22;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f4 == puVar22) goto LAB_10010b30;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x1d - (int)puVar22));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar22);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010b30:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar22 = (undefined8 *)((int)puVar27 + 0x25);
  *(undefined1 *)((int)puVar3 + (int)puVar23) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar25))[7] = 4;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar25) + 5) = 0;
  local_f8 = puVar22;
  if (puVar8 < puVar22) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar22);
    local_90 = 0x12;
    local_f0 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar5 = local_ec;
    puVar23 = local_f4;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      uVar26 = extraout_r1_08;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f0;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar25 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar8 = puVar25;
        puVar21 = local_f0;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_ec == puVar25) goto LAB_10010bfc;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x21 - (int)puVar25));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar25);
      puVar17 = (undefined1 *)((int)local_f0 + (int)puVar25);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010bfc:
    recovered_10008354(local_f0);
    puVar8 = local_100;
  }
  puVar25 = (undefined8 *)((int)puVar27 + 0x29);
  *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar23))[7] = 1;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar23) + 5) = 0;
  local_f0 = puVar25;
  if (puVar8 < puVar25) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar25);
    local_90 = 0x13;
    local_f4 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar5 = local_ec;
    puVar25 = local_f0;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f8 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar26 = extraout_r1_09;
      if ((undefined8 *)0xf < local_f8) {
        uVar26 = (int)puVar3 - (int)local_f4;
      }
      if ((undefined8 *)0xf < local_f8 && 0xf < uVar26) {
        puVar8 = (undefined8 *)((uint)local_f8 & 0xfffffff0);
        puVar23 = puVar8;
        puVar21 = local_f4;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar23 != (undefined8 *)0x0);
        if (local_f8 == puVar8) goto LAB_10010cb8;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x25 - (int)puVar8));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar8);
      puVar17 = (undefined1 *)((int)local_f4 + (int)puVar8);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010cb8:
    recovered_10008354(local_f4);
    puVar8 = local_100;
  }
  puVar23 = (undefined8 *)((int)puVar27 + 0x2d);
  *(undefined1 *)((int)puVar3 + (int)puVar22) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar5))[7] = 0xf;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar5) + 5) = 0;
  local_ec = puVar23;
  if (puVar8 < puVar23) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar23);
    local_90 = 0x14;
    local_f4 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar23 = local_ec;
    puVar25 = local_f0;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar26 = extraout_r1_10;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_f4;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar5 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar8 = puVar5;
        puVar21 = local_f4;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f0 == puVar5) goto LAB_10010d74;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x29 - (int)puVar5));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
      puVar17 = (undefined1 *)((int)local_f4 + (int)puVar5);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010d74:
    recovered_10008354(local_f4);
    puVar8 = local_100;
  }
  puVar5 = (undefined8 *)((int)puVar27 + 0x31);
  *(undefined1 *)((int)puVar3 + (int)puVar25) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar22))[7] = 8;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar22) + 5) = 0;
  local_f4 = puVar5;
  if (puVar8 < puVar5) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar5);
    local_90 = 0x15;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar23 = local_ec;
    puVar25 = local_f0;
    puVar5 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
      uVar26 = extraout_r1_11;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar22 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar8 = puVar22;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_ec == puVar22) goto LAB_10010e30;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x2d - (int)puVar22));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar22);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010e30:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar22 = (undefined8 *)((int)puVar27 + 0x35);
  *(undefined1 *)((int)puVar3 + (int)puVar23) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar25))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar25) + 5) = 0;
  local_f0 = puVar22;
  if (puVar8 < puVar22) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar22);
    local_90 = 0x16;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar23 = local_ec;
    puVar22 = local_f0;
    puVar5 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f4 != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      uVar26 = extraout_r1_12;
      if ((undefined8 *)0xf < local_f4) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f4 && 0xf < uVar26) {
        puVar25 = (undefined8 *)((uint)local_f4 & 0xfffffff0);
        puVar8 = puVar25;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f4 == puVar25) goto LAB_10010ee8;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x31 - (int)puVar25));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar25);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar25);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010ee8:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar25 = (undefined8 *)((int)puVar27 + 0x39);
  *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar23))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar23) + 5) = 0;
  local_ec = puVar25;
  if (puVar8 < puVar25) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar25);
    local_90 = 0x17;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar25 = local_ec;
    puVar22 = local_f0;
    puVar5 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar26 = extraout_r1_13;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar8 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar23 = puVar8;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar23 != (undefined8 *)0x0);
        if (local_f0 == puVar8) goto LAB_10010fa0;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x35 - (int)puVar8));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar8);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar8);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10010fa0:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar23 = (undefined8 *)((int)puVar27 + 0x3d);
  *(undefined1 *)((int)puVar3 + (int)puVar22) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar5))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar5) + 5) = 0;
  local_f4 = puVar23;
  if (puVar8 < puVar23) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar23);
    local_90 = 0x18;
    local_f8 = puVar3;
    local_a8 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar25 = local_ec;
    puVar22 = local_f0;
    puVar23 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar26 = extraout_r1_14;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar5 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar8 = puVar5;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_ec == puVar5) goto LAB_10011060;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x39 - (int)puVar5));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar5);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10011060:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar5 = (undefined8 *)((int)puVar27 + 0x41);
  *(undefined1 *)((int)puVar3 + (int)puVar25) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar22))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar22) + 5) = 0;
  local_f0 = puVar5;
  if (puVar8 < puVar5) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar5);
    local_90 = 0x19;
    local_f8 = puVar3;
    local_a4 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar25 = local_ec;
    puVar5 = local_f0;
    puVar23 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f4 != (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
      uVar26 = extraout_r1_15;
      if ((undefined8 *)0xf < local_f4) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f4 && 0xf < uVar26) {
        puVar22 = (undefined8 *)((uint)local_f4 & 0xfffffff0);
        puVar8 = puVar22;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f4 == puVar22) goto LAB_10011118;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x3d - (int)puVar22));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar22);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10011118:
    recovered_10008354(local_f8);
    puVar8 = local_100;
  }
  puVar22 = (undefined8 *)((int)puVar27 + 0x45);
  *(undefined1 *)((int)puVar3 + (int)puVar23) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar25))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar25) + 5) = 0;
  local_f8 = puVar8;
  local_ec = puVar22;
  if (puVar8 < puVar22) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar22);
    local_90 = 0x1a;
    local_f8 = puVar3;
    local_a4 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar5 = local_f0;
    puVar23 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      uVar26 = extraout_r1_16;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar25 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar8 = puVar25;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f0 == puVar25) goto LAB_100111d8;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x41 - (int)puVar25));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar25);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar25);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100111d8:
    recovered_10008354(local_f8);
    local_f8 = local_100;
  }
  puVar9 = (uint *)((int)puVar3 + (int)puVar23);
  *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
  puVar25 = (undefined8 *)((int)puVar27 + 0x49);
  *(undefined1 *)((int)puVar9 + 7) = 0;
  *(undefined2 *)((int)puVar9 + 5) = 0;
  if (puVar5 <= puVar22) {
    *puVar9 = (int)puVar22 << 0x18 | ((uint)puVar22 >> 8 & 0xff) << 0x10 |
              ((uint)puVar22 >> 0x10 & 0xff) << 8 | (uint)puVar22 >> 0x18;
  }
  uVar13 = SUB41(local_fc,0);
  local_f0 = puVar25;
  if (local_f8 < puVar25) {
    puVar5 = local_f8;
    if (local_f8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_f8 = puVar5;
      puVar5 = (undefined8 *)((int)local_f8 << 1);
    } while (local_f8 < puVar25);
    local_90 = 0x1b;
    local_f4 = puVar3;
    local_a0 = puVar3;
    puVar3 = recovered_100082fc((uint)local_f8);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar25 = local_f0;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar26 = extraout_r1_17;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f4;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar5 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar8 = puVar5;
        puVar23 = local_f4;
        puVar21 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar23;
          uVar18 = *(undefined4 *)((int)puVar23 + 4);
          uVar28 = *(undefined4 *)(puVar23 + 1);
          uVar1 = *(undefined4 *)((int)puVar23 + 0xc);
          puVar23 = puVar23 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar21 = uVar14;
          *(undefined4 *)((int)puVar21 + 4) = uVar18;
          *(undefined4 *)(puVar21 + 1) = uVar28;
          *(undefined4 *)((int)puVar21 + 0xc) = uVar1;
          puVar21 = puVar21 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_ec == puVar5) goto LAB_1001129c;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x45 - (int)puVar5));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
      puVar17 = (undefined1 *)((int)local_f4 + (int)puVar5);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_1001129c:
    recovered_10008354(local_f4);
    uVar13 = SUB41(local_fc,0);
  }
  puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
  *puVar6 = (char)local_e8;
  puVar5 = (undefined8 *)((int)puVar27 + 0x4d);
  puVar6[3] = uVar13;
  puVar6[2] = (char)local_d0;
  puVar6[1] = (char)local_cc;
  local_f4 = puVar5;
  if (local_f8 < puVar5) {
    if (local_f8 == (undefined8 *)0x0) {
      local_f8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = local_f8;
      local_f8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar5);
    local_90 = 0x1c;
    local_f8 = puVar3;
    local_a0 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar25 = local_f0;
    puVar5 = local_f4;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar26 = extraout_r1_18;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_f8;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar8 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar23 = puVar8;
        puVar21 = local_f8;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar23 != (undefined8 *)0x0);
        if (local_f0 == puVar8) goto LAB_1001136c;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x49 - (int)puVar8));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar8);
      puVar17 = (undefined1 *)((int)local_f8 + (int)puVar8);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_1001136c:
    recovered_10008354(local_f8);
    local_f8 = local_100;
  }
  *(char *)((int)puVar3 + (int)puVar25) = (char)local_e4;
  puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
  puVar22 = (undefined8 *)((int)puVar27 + 0x51);
  puVar6[6] = (char)local_d8;
  puVar6[7] = uVar29;
  puVar6[5] = (char)local_dc;
  puVar8 = local_f8;
  puVar23 = puVar22;
  if (local_f8 < puVar22) {
    if (local_f8 == (undefined8 *)0x0) {
      local_f8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = local_f8;
      local_f8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar22);
    local_90 = 0x1d;
    local_f8 = puVar22;
    local_ec = puVar3;
    local_a0 = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar25 = local_f0;
    puVar5 = local_f4;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f4 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar26 = extraout_r1_19;
      if ((undefined8 *)0xf < local_f4) {
        uVar26 = (int)puVar3 - (int)local_ec;
      }
      if ((undefined8 *)0xf < local_f4 && 0xf < uVar26) {
        puVar8 = (undefined8 *)((uint)local_f4 & 0xfffffff0);
        puVar23 = puVar8;
        puVar21 = local_ec;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar23 = puVar23 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar23 != (undefined8 *)0x0);
        if (local_f4 == puVar8) goto LAB_10011438;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x4d - (int)puVar8));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar8);
      puVar17 = (undefined1 *)((int)local_ec + (int)puVar8);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10011438:
    recovered_10008354(local_ec);
    puVar8 = local_100;
    puVar23 = local_f8;
  }
  local_f8 = puVar23;
  puVar23 = (undefined8 *)((int)puVar27 + 0x55);
  *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar25))[7] = 4;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar25) + 5) = 0;
  local_f0 = puVar23;
  if (puVar8 < puVar23) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < puVar23);
    local_90 = 0x1e;
    local_ec = puVar3;
    local_9c = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar23 = local_f0;
    puVar5 = local_f4;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f8 != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      uVar26 = extraout_r1_20;
      if ((undefined8 *)0xf < local_f8) {
        uVar26 = (int)puVar3 - (int)local_ec;
      }
      if ((undefined8 *)0xf < local_f8 && 0xf < uVar26) {
        puVar25 = (undefined8 *)((uint)local_f8 & 0xfffffff0);
        puVar8 = puVar25;
        puVar21 = local_ec;
        puVar12 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar21;
          uVar18 = *(undefined4 *)((int)puVar21 + 4);
          uVar28 = *(undefined4 *)(puVar21 + 1);
          uVar1 = *(undefined4 *)((int)puVar21 + 0xc);
          puVar21 = puVar21 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar12 = uVar14;
          *(undefined4 *)((int)puVar12 + 4) = uVar18;
          *(undefined4 *)(puVar12 + 1) = uVar28;
          *(undefined4 *)((int)puVar12 + 0xc) = uVar1;
          puVar12 = puVar12 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_f8 == puVar25) goto LAB_100114f4;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x51 - (int)puVar25));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar25);
      puVar17 = (undefined1 *)((int)local_ec + (int)puVar25);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100114f4:
    recovered_10008354(local_ec);
    puVar8 = local_100;
  }
  local_ec = (undefined8 *)((int)puVar27 + 0x59);
  *(undefined1 *)((int)puVar3 + (int)puVar22) = 0;
  ((undefined1 *)((int)puVar3 + (int)puVar5))[7] = 0;
  *(undefined2 *)((undefined1 *)((int)puVar3 + (int)puVar5) + 5) = 0;
  if (puVar8 < local_ec) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_100 = puVar8;
      puVar8 = (undefined8 *)((int)local_100 << 1);
    } while (local_100 < local_ec);
    local_90 = 0x1f;
    local_f4 = puVar3;
    local_9c = puVar3;
    puVar3 = recovered_100082fc((uint)local_100);
    puVar27 = local_d4;
    puVar23 = local_f0;
    puVar22 = local_f8;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar26 = extraout_r1_21;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_f4;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar5 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar25 = puVar5;
        puVar8 = local_f4;
        puVar21 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar8;
          uVar18 = *(undefined4 *)((int)puVar8 + 4);
          uVar28 = *(undefined4 *)(puVar8 + 1);
          uVar1 = *(undefined4 *)((int)puVar8 + 0xc);
          puVar8 = puVar8 + 2;
          puVar25 = puVar25 + -2;
          *(undefined4 *)puVar21 = uVar14;
          *(undefined4 *)((int)puVar21 + 4) = uVar18;
          *(undefined4 *)(puVar21 + 1) = uVar28;
          *(undefined4 *)((int)puVar21 + 0xc) = uVar1;
          puVar21 = puVar21 + 2;
        } while (puVar25 != (undefined8 *)0x0);
        if (local_f0 == puVar5) goto LAB_100115a8;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x55 - (int)puVar5));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar5);
      puVar17 = (undefined1 *)((int)local_f4 + (int)puVar5);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_100115a8:
    recovered_10008354(local_f4);
    puVar8 = local_100;
  }
  puVar9 = (uint *)((int)puVar3 + (int)puVar22);
  puVar5 = (undefined8 *)((int)puVar27 + 0x5d);
  *(undefined1 *)((int)puVar3 + (int)puVar23) = 0;
  *(undefined1 *)((int)puVar9 + 7) = 0;
  *(undefined2 *)((int)puVar9 + 5) = 0;
  if (puVar23 <= local_ec) {
    *puVar9 = (int)local_ec << 0x18 | ((uint)local_ec >> 8 & 0xff) << 0x10 |
              ((uint)local_ec >> 0x10 & 0xff) << 8 | (uint)local_ec >> 0x18;
  }
  puVar22 = local_ec;
  local_f0 = puVar5;
  if (puVar8 < puVar5) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_f8 = puVar8;
      puVar8 = (undefined8 *)((int)local_f8 << 1);
    } while (local_f8 < puVar5);
    local_90 = 0x20;
    local_f4 = puVar3;
    local_98 = puVar3;
    puVar3 = recovered_100082fc((uint)local_f8);
    puVar27 = local_d4;
    puVar22 = local_ec;
    puVar5 = local_f0;
    uVar29 = SUB41(local_124,0);
    if (local_ec != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      uVar26 = extraout_r1_22;
      if ((undefined8 *)0xf < local_ec) {
        uVar26 = (int)puVar3 - (int)local_f4;
      }
      if ((undefined8 *)0xf < local_ec && 0xf < uVar26) {
        puVar25 = (undefined8 *)((uint)local_ec & 0xfffffff0);
        puVar8 = puVar25;
        puVar23 = local_f4;
        puVar21 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar23;
          uVar18 = *(undefined4 *)((int)puVar23 + 4);
          uVar28 = *(undefined4 *)(puVar23 + 1);
          uVar1 = *(undefined4 *)((int)puVar23 + 0xc);
          puVar23 = puVar23 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar21 = uVar14;
          *(undefined4 *)((int)puVar21 + 4) = uVar18;
          *(undefined4 *)(puVar21 + 1) = uVar28;
          *(undefined4 *)((int)puVar21 + 0xc) = uVar1;
          puVar21 = puVar21 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_ec == puVar25) goto LAB_10011670;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x59 - (int)puVar25));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar25);
      puVar17 = (undefined1 *)((int)local_f4 + (int)puVar25);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10011670:
    recovered_10008354(local_f4);
    puVar8 = local_f8;
  }
  puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
  *puVar6 = (char)local_e8;
  puVar27 = (undefined8 *)((int)puVar27 + 0x61);
  puVar6[2] = (char)local_d0;
  puVar6[3] = (char)local_fc;
  puVar6[1] = (char)local_cc;
  local_cc = puVar27;
  if (puVar8 < puVar27) {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&UndefinedInstruction;
    }
    do {
      local_d0 = (uint *)puVar8;
      puVar8 = (undefined8 *)((int)local_d0 << 1);
    } while (local_d0 < puVar27);
    local_90 = 0x21;
    local_e8 = puVar3;
    local_98 = puVar3;
    puVar3 = recovered_100082fc((uint)local_d0);
    puVar27 = local_cc;
    puVar5 = local_f0;
    uVar29 = SUB41(local_124,0);
    if (local_f0 != (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
      uVar26 = extraout_r1_23;
      if ((undefined8 *)0xf < local_f0) {
        uVar26 = (int)puVar3 - (int)local_e8;
      }
      if ((undefined8 *)0xf < local_f0 && 0xf < uVar26) {
        puVar22 = (undefined8 *)((uint)local_f0 & 0xfffffff0);
        puVar25 = puVar22;
        puVar8 = local_e8;
        puVar23 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar8;
          uVar18 = *(undefined4 *)((int)puVar8 + 4);
          uVar28 = *(undefined4 *)(puVar8 + 1);
          uVar1 = *(undefined4 *)((int)puVar8 + 0xc);
          puVar8 = puVar8 + 2;
          puVar25 = puVar25 + -2;
          *(undefined4 *)puVar23 = uVar14;
          *(undefined4 *)((int)puVar23 + 4) = uVar18;
          *(undefined4 *)(puVar23 + 1) = uVar28;
          *(undefined4 *)((int)puVar23 + 0xc) = uVar1;
          puVar23 = puVar23 + 2;
        } while (puVar25 != (undefined8 *)0x0);
        if (local_f0 == puVar22) goto LAB_10011734;
      }
      puVar7 = (undefined1 *)((int)local_d4 + (0x5d - (int)puVar22));
      puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
      puVar17 = (undefined1 *)((int)local_e8 + (int)puVar22);
      do {
        puVar7 = puVar7 + -1;
        *puVar6 = *puVar17;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (puVar7 != (undefined1 *)0x0);
    }
LAB_10011734:
    recovered_10008354(local_e8);
    puVar22 = local_ec;
  }
  else {
    local_d0 = (uint *)puVar8;
  }
  *(char *)((int)puVar3 + (int)puVar5) = (char)local_e4;
  puVar6 = (undefined1 *)((int)puVar3 + (int)puVar22);
  puVar6[6] = (char)local_d8;
  puVar6[7] = uVar29;
  puVar6[5] = (char)local_dc;
  local_c8 = puVar3;
  if (local_e0 == (undefined8 *)0x0) {
    local_bc = (undefined4 *)0x0;
    puVar9 = local_d0;
    puVar5 = local_fc;
  }
  else {
    local_90 = 0x22;
    local_c4 = recovered_100082fc((int)local_e0 << 2);
    recovered_10008354((void *)0x0);
    puVar5 = (undefined8 *)0x0;
    if (local_e0 < &UndefinedInstruction) {
LAB_100117e0:
      iVar4 = (int)local_e0 - (int)puVar5;
      puVar2 = local_c4 + (int)puVar5;
      do {
        *puVar2 = 0;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 1;
      } while (iVar4 != 0);
    }
    else {
      puVar5 = (undefined8 *)((uint)local_e0 & 0x3ffffffc);
      puVar2 = local_c4;
      puVar3 = puVar5;
      do {
        *puVar2 = 0;
        puVar2[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar2[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar2[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar2 = puVar2 + 4;
        puVar3 = (undefined8 *)((int)puVar3 + -4);
      } while (puVar3 != (undefined8 *)0x0);
      if (local_e0 != puVar5) goto LAB_100117e0;
    }
    puVar8 = (undefined8 *)0x0;
    puVar9 = local_d0;
    puVar3 = local_c8;
    puVar25 = local_cc;
    puVar22 = local_e0;
    puVar5 = local_fc;
    do {
      puVar27 = (undefined8 *)((int)puVar25 + 4);
      local_c4[(int)puVar8] = puVar25;
      local_b8 = puVar3;
      if (puVar9 < puVar27) {
        local_dc = (undefined8 *)((uint)puVar25 & 0xfffffff0);
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)&UndefinedInstruction;
        }
        do {
          local_d0 = puVar9;
          puVar9 = (uint *)((int)local_d0 << 1);
        } while (local_d0 < puVar27);
        local_90 = 0x24;
        local_d8 = puVar8;
        local_d4 = puVar27;
        local_cc = puVar25;
        puVar3 = recovered_100082fc((uint)local_d0);
        puVar25 = local_cc;
        puVar27 = local_d4;
        puVar22 = local_e0;
        if (local_cc != (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
          puVar5 = local_b8;
          if (local_cc >= &DataAbort) {
            puVar5 = (undefined8 *)((int)puVar3 - (int)local_b8);
          }
          if (local_cc < &DataAbort || puVar5 < &DataAbort) goto LAB_100118ec;
          puVar8 = (undefined8 *)((uint)local_cc & 0xfffffff0);
          puVar5 = local_b8;
          puVar23 = puVar3;
          puVar21 = local_dc;
          do {
            uVar14 = *(undefined4 *)puVar5;
            uVar18 = *(undefined4 *)((int)puVar5 + 4);
            uVar28 = *(undefined4 *)(puVar5 + 1);
            uVar1 = *(undefined4 *)((int)puVar5 + 0xc);
            puVar5 = puVar5 + 2;
            puVar21 = (undefined8 *)((int)puVar21 - 0x10);
            *(undefined4 *)puVar23 = uVar14;
            *(undefined4 *)((int)puVar23 + 4) = uVar18;
            *(undefined4 *)(puVar23 + 1) = uVar28;
            *(undefined4 *)((int)puVar23 + 0xc) = uVar1;
            puVar23 = puVar23 + 2;
          } while (puVar21 != (undefined8 *)0x0);
          for (; local_cc != puVar8; puVar8 = (undefined8 *)((int)puVar8 + 1)) {
LAB_100118ec:
            *(undefined1 *)((int)puVar3 + (int)puVar8) =
                 *(undefined1 *)((int)local_b8 + (int)puVar8);
          }
        }
        recovered_10008354(local_b8);
        puVar9 = local_d0;
        puVar8 = local_d8;
        puVar5 = local_fc;
      }
      *(undefined4 *)((int)puVar3 + (int)puVar25) = 0;
      puVar8 = (undefined8 *)((int)puVar8 + 1);
      local_bc = local_c4;
      puVar25 = puVar27;
    } while (puVar8 != puVar22);
  }
  puVar22 = (undefined8 *)((int)puVar27 + 4);
  local_c0 = puVar3;
  if (puVar9 < puVar22) {
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)&UndefinedInstruction;
    }
    do {
      local_cc = (undefined8 *)puVar9;
      puVar9 = (uint *)((int)local_cc << 1);
    } while (local_cc < puVar22);
    local_90 = 0x23;
    local_dc = puVar22;
    local_d4 = puVar27;
    puVar3 = recovered_100082fc((uint)local_cc);
    puVar9 = (uint *)local_cc;
    puVar27 = local_d4;
    puVar22 = local_dc;
    if (local_d4 != (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
      puVar5 = local_c0;
      if ((undefined8 *)0xf < local_d4) {
        puVar5 = (undefined8 *)((int)puVar3 - (int)local_c0);
      }
      if ((undefined8 *)0xf < local_d4 && (undefined8 *)0xf < puVar5) {
        puVar25 = (undefined8 *)((uint)local_d4 & 0xfffffff0);
        puVar5 = local_c0;
        puVar8 = puVar25;
        puVar23 = puVar3;
        do {
          uVar14 = *(undefined4 *)puVar5;
          uVar18 = *(undefined4 *)((int)puVar5 + 4);
          uVar28 = *(undefined4 *)(puVar5 + 1);
          uVar1 = *(undefined4 *)((int)puVar5 + 0xc);
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + -2;
          *(undefined4 *)puVar23 = uVar14;
          *(undefined4 *)((int)puVar23 + 4) = uVar18;
          *(undefined4 *)(puVar23 + 1) = uVar28;
          *(undefined4 *)((int)puVar23 + 0xc) = uVar1;
          puVar23 = puVar23 + 2;
        } while (puVar8 != (undefined8 *)0x0);
        if (local_d4 == puVar25) goto LAB_100119a8;
      }
      iVar4 = (int)local_d4 - (int)puVar25;
      puVar6 = (undefined1 *)((int)local_c0 + (int)puVar25);
      puVar17 = (undefined1 *)((int)puVar3 + (int)puVar25);
      do {
        iVar4 = iVar4 + -1;
        *puVar17 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      } while (iVar4 != 0);
    }
LAB_100119a8:
    recovered_10008354(local_c0);
    puVar5 = local_fc;
  }
  uVar26 = 0;
  iVar4 = (int)puVar5 << 2;
  *(undefined4 *)((int)puVar3 + (int)puVar27) = 0;
  if (local_140 < 2) {
    local_140 = 1;
  }
  local_128 = 1;
  if (1 < local_144) {
    local_128 = local_144;
  }
  local_100 = (undefined8 *)((int)puVar5 * -4);
  local_148 = (int)puVar5 * -0x100;
  local_14c = (int)puVar5 << 8;
  puVar27 = local_124;
  local_104 = iVar4;
  do {
    puVar25 = (undefined8 *)0x40;
    if (puVar27 < (undefined8 *)0x40) {
      puVar25 = puVar27;
    }
    local_120 = uVar26 * local_144;
    local_12c = local_148 * uVar26;
    if (puVar25 < (undefined8 *)0x2) {
      puVar25 = (undefined8 *)0x1;
    }
    local_d4 = (undefined8 *)(uVar26 << 6);
    local_10c = local_134;
    uVar19 = 0;
    puVar8 = puVar5;
    local_13c = puVar27;
    local_138 = uVar26;
    local_f0 = puVar25;
    do {
      local_d0 = (uint *)(puVar8 + uVar19 * -8);
      puVar27 = (undefined8 *)0x40;
      if (puVar5 < (undefined8 *)0x40) {
        puVar27 = puVar5;
      }
      puVar10 = (uint *)0x40;
      if (local_d0 < (uint *)0x40) {
        puVar10 = local_d0;
      }
      if ((undefined8 *)(local_bc[uVar19 + local_120] + 4) <= puVar22) {
        *(uint *)((int)puVar3 + local_bc[uVar19 + local_120]) =
             (int)puVar22 << 0x18 | ((uint)puVar22 >> 8 & 0xff) << 0x10 |
             ((uint)puVar22 >> 0x10 & 0xff) << 8 | (uint)puVar22 >> 0x18;
      }
      local_11c = puVar5;
      local_110 = uVar19;
      if (local_d4 != local_124) {
        local_d8 = local_130 + uVar19 * 0x20;
        puVar5 = (undefined8 *)(uVar19 << 6);
        local_f4 = (undefined8 *)(local_12c - (int)local_d8);
        puVar23 = (undefined8 *)0x0;
        local_114 = ((uint)puVar27 & 0x7c) << 2;
        local_118 = (undefined8 *)((int)puVar10 << 2);
        local_108 = (int)puVar27 << 2;
        puVar10 = (uint *)0x40;
        if (local_d0 < (uint *)0x40) {
          puVar10 = local_d0;
        }
        puVar27 = (undefined8 *)((int)puVar10 << 2);
        local_f8 = (undefined8 *)((uint)local_118 & 0x1f0);
        puVar21 = local_10c;
        local_ec = puVar5;
        local_e8 = puVar27;
        do {
          local_b0 = puVar3;
          if (puVar8 != puVar5) {
            local_cc = puVar21;
            if (puVar9 < (undefined8 *)((int)puVar22 + (int)puVar27)) {
              if (puVar9 == (uint *)0x0) {
                puVar9 = (uint *)&UndefinedInstruction;
              }
              do {
                local_e4 = (undefined8 *)puVar9;
                puVar9 = (uint *)((int)local_e4 << 1);
              } while (local_e4 < (undefined8 *)((int)puVar22 + (int)puVar27));
              local_90 = 0x26;
              local_e0 = puVar23;
              local_dc = puVar22;
              puVar3 = recovered_100082fc((uint)local_e4);
              puVar22 = local_dc;
              iVar4 = local_104;
              if (local_dc != (undefined8 *)0x0) {
                puVar27 = (undefined8 *)0x0;
                puVar5 = local_b0;
                if ((undefined8 *)0xf < local_dc) {
                  puVar5 = (undefined8 *)((int)puVar3 - (int)local_b0);
                }
                if ((undefined8 *)0xf < local_dc && (undefined8 *)0xf < puVar5) {
                  puVar27 = (undefined8 *)((uint)local_dc & 0xfffffff0);
                  puVar5 = local_b0;
                  puVar25 = puVar27;
                  puVar8 = puVar3;
                  do {
                    uVar14 = *(undefined4 *)puVar5;
                    uVar18 = *(undefined4 *)((int)puVar5 + 4);
                    uVar28 = *(undefined4 *)(puVar5 + 1);
                    uVar1 = *(undefined4 *)((int)puVar5 + 0xc);
                    puVar5 = puVar5 + 2;
                    puVar25 = puVar25 + -2;
                    *(undefined4 *)puVar8 = uVar14;
                    *(undefined4 *)((int)puVar8 + 4) = uVar18;
                    *(undefined4 *)(puVar8 + 1) = uVar28;
                    *(undefined4 *)((int)puVar8 + 0xc) = uVar1;
                    puVar8 = puVar8 + 2;
                  } while (puVar25 != (undefined8 *)0x0);
                  if (local_dc == puVar27) goto LAB_10011c68;
                }
                iVar20 = (int)local_dc - (int)puVar27;
                puVar6 = (undefined1 *)((int)local_b0 + (int)puVar27);
                puVar17 = (undefined1 *)((int)puVar3 + (int)puVar27);
                do {
                  iVar20 = iVar20 + -1;
                  *puVar17 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar17 = puVar17 + 1;
                } while (iVar20 != 0);
              }
LAB_10011c68:
              recovered_10008354(local_b0);
              puVar23 = local_e0;
              puVar9 = (uint *)local_e4;
              puVar27 = local_e8;
              puVar8 = local_fc;
              puVar25 = local_f0;
              puVar5 = local_ec;
            }
            puVar21 = (undefined8 *)(iVar4 * (int)((int)puVar23 + (int)local_d4) + (int)local_d8);
            if ((local_d0 < &UndefinedInstruction) ||
               (puVar2 = (undefined4 *)((int)puVar22 + (int)puVar3),
               (undefined1 *)((int)puVar2 + (int)((int)local_100 * (int)puVar23 + (int)local_f4)) <
               (undefined1 *)0x10)) {
              puVar12 = puVar21;
              puVar11 = puVar22;
LAB_10011d78:
              puVar6 = (undefined1 *)((int)puVar3 + (int)puVar11);
              do {
                puVar11 = (undefined8 *)((int)puVar12 + 1);
                *puVar6 = *(undefined1 *)puVar12;
                puVar12 = puVar11;
                puVar6 = puVar6 + 1;
              } while (puVar11 != (undefined8 *)((int)puVar21 + (int)puVar27));
            }
            else {
              puVar11 = (undefined8 *)((int)puVar22 + (int)local_f8);
              puVar12 = (undefined8 *)((int)puVar21 + (int)local_f8);
              puVar5 = local_cc;
              iVar20 = local_114;
              do {
                uVar14 = *(undefined4 *)puVar5;
                uVar18 = *(undefined4 *)((int)puVar5 + 4);
                uVar28 = *(undefined4 *)(puVar5 + 1);
                uVar1 = *(undefined4 *)((int)puVar5 + 0xc);
                puVar5 = puVar5 + 2;
                iVar20 = iVar20 + -0x10;
                *puVar2 = uVar14;
                puVar2[1] = uVar18;
                puVar2[2] = uVar28;
                puVar2[3] = uVar1;
                puVar2 = puVar2 + 4;
              } while (iVar20 != 0);
              puVar27 = local_e8;
              puVar25 = local_f0;
              puVar5 = local_ec;
              if (local_118 != local_f8) goto LAB_10011d78;
            }
            puVar22 = (undefined8 *)((int)puVar22 + (int)puVar27);
            puVar21 = local_cc;
          }
          puVar23 = (undefined8 *)((int)puVar23 + 1);
          puVar21 = (undefined8 *)((int)puVar21 + iVar4);
        } while (puVar23 != puVar25);
      }
      local_10c = local_10c + 0x20;
      puVar5 = local_11c + -8;
      uVar19 = local_110 + 1;
      local_b4 = puVar3;
    } while (uVar19 != local_128);
    local_134 = (undefined8 *)((int)local_134 + local_14c);
    uVar26 = local_138 + 1;
    puVar27 = local_13c + -8;
    puVar5 = puVar8;
  } while (uVar26 != local_140);
  local_90 = 0x25;
  local_dc = puVar22;
  puVar9 = recovered_10007004(local_150,((uintptr_t)pf_module_state+0x127U));
  if (puVar9 == (uint *)0x0) {
    uVar26 = 0;
  }
  else {
    if (local_dc == (undefined8 *)0x0) {
      local_cc = (undefined8 *)0x1;
    }
    else {
      local_90 = 0x27;
      local_d0 = puVar9;
      puVar5 = (undefined8 *)recovered_100078ac((int)local_b4,1,(int)local_dc,puVar9);
      local_cc = (undefined8 *)(uint)(puVar5 == local_dc);
      puVar9 = local_d0;
    }
    local_90 = 0x28;
    iVar4 = recovered_10007488(puVar9);
    uVar26 = (uint)local_cc & (uint)(iVar4 == 0);
  }
  recovered_10008354(local_bc);
  recovered_10008354(local_b4);
LAB_1000fe48:
  recovered_10008a1c(&uStack_94);
  return uVar26;
}

#undef DAT_10010b40
#undef DAT_10010b44
#undef DAT_10017b1c
#undef DAT_1001c00c
#undef EXT_00000004
#undef EXT_00000010
#undef str_10017b14
#undef auStack_160
#undef uStack_94
#undef auStack_68
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
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

static const unsigned char pf_literal_100124b8_DAT_10012678[] __attribute__((aligned(16)))={0x74,0x57,0x00,0x00};
#undef DAT_10012678
#define DAT_10012678 (*(int *)((uintptr_t)pf_literal_100124b8_DAT_10012678))
static const unsigned char pf_literal_100124b8_DAT_1001267c[] __attribute__((aligned(16)))={0xf8,0x00,0x00,0x00};
#undef DAT_1001267c
#define DAT_1001267c (*(int *)((uintptr_t)pf_literal_100124b8_DAT_1001267c))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define local_ac (*(uint * *)(pf_stack_frame + 20))
#define local_a8 (*(uint *)(pf_stack_frame + 24))
#define local_a4 (*(uint *)(pf_stack_frame + 28))
#define local_a0 (*(void * *)(pf_stack_frame + 32))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_9c (*(uint *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100124b8
 */

uint * recovered_100124b8(int param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulonglong *puVar2;
  void *dst;
  uint *puVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_a4 = 0;
  local_a8 = 0;
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x2e0U);
  local_70 = DAT_1001267c + 0x10012524;
  recovered_100089f8(&uStack_94);
  puVar3 = (uint *)0x0;
  if (param_1 != 0) {
    local_90 = 1;
    puVar2 = recovered_1000dfbc(param_1,&local_a8);
    uVar1 = 0;
    if (puVar2 != (ulonglong *)0x0) {
      uVar1 = local_9c;
    }
    puVar3 = (uint *)0x0;
    if (puVar2 != (ulonglong *)0x0 && uVar1 != 0) {
      uVar1 = local_a8;
      if (-1 < (int)local_a8) {
        uVar1 = local_a4;
      }
      if (-1 < (int)local_a8 && -1 < (int)uVar1) {
        local_90 = 2;
        local_ac = recovered_100082fc(0x18);
        *local_ac = 0;
        local_ac[1] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        local_ac[2] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        local_ac[3] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        *local_ac = local_a8;
        local_ac[5] = 0;
        local_ac[1] = local_a4;
        local_ac[4] = 0;
        local_90 = 3;
        dst = recovered_10008328(local_9c);
        local_ac[2] = (uint)dst;
        local_90 = 4;
        recovered_10002f90(dst,local_a0,local_9c);
        puVar3 = local_ac;
      }
    }
  }
  local_9c = 0;
  recovered_10008354(local_a0);
  recovered_10008a1c(&uStack_94);
  return puVar3;
}

#undef DAT_10012678
#undef DAT_1001267c
#undef DAT_1001c00c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c
#undef auStack_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_94
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012680
 */

void recovered_10012680(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 8) != (void *)0x0) {
    recovered_1000841c(*(void **)((int)param_1 + 8));
  }
  if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
    recovered_1000841c(*(void **)((int)param_1 + 0x14));
  }
  recovered_10008354(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100126c0
 */

void recovered_100126c0(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  uint extraout_r1 = 0;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;

  uVar1 = 0;
  param_1[1] = 0;
  if (param_2 <= (uint)param_1[2]) goto LAB_1001278c;
  puVar2 = recovered_100082fc(param_2);
  uVar1 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar10 = uVar1 == 0x10;
    uVar9 = 0;
    uVar3 = extraout_r1;
    if (0xf < uVar1) {
      uVar3 = (int)puVar2 - (int)pointer;
      bVar10 = uVar3 == 0xf;
    }
    if ((0xf < uVar1 && 0xe < uVar3) && !bVar10) {
      uVar9 = uVar1 & 0xfffffff0;
      puVar4 = puVar2;
      uVar3 = uVar9;
      puVar7 = pointer;
      do {
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar4 = uVar11;
        puVar4[1] = uVar12;
        puVar4 = puVar4 + 2;
      } while (uVar3 != 0);
      if (uVar1 == uVar9) goto LAB_10012760;
    }
    iVar5 = uVar1 - uVar9;
    puVar6 = (undefined1 *)((int)pointer + uVar9);
    puVar8 = (undefined1 *)((int)puVar2 + uVar9);
    do {
      iVar5 = iVar5 + -1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_10012760:
  recovered_10008354(pointer);
  param_1[2] = param_2;
  uVar1 = param_1[1];
  *param_1 = (int)puVar2;
LAB_1001278c:
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001279c
 */

int * recovered_1001279c(int *param_1,uint param_2)

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
  undefined1 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    return param_1;
  }
  puVar1 = recovered_100082fc(param_2);
  uVar2 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar4 = extraout_r2;
    if (0xf < uVar2) {
      uVar4 = (int)puVar1 - (int)pointer;
    }
    if (0xf < uVar2 && 0xf < uVar4) {
      uVar9 = uVar2 & 0xfffffff0;
      puVar5 = puVar1;
      uVar4 = uVar9;
      puVar8 = pointer;
      do {
        uVar10 = *puVar8;
        uVar11 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar4 = uVar4 - 0x10;
        *puVar5 = uVar10;
        puVar5[1] = uVar11;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (uVar2 == uVar9) goto LAB_10012814;
    }
    iVar3 = uVar2 - uVar9;
    puVar6 = (undefined1 *)((int)puVar1 + uVar9);
    puVar7 = (undefined1 *)((int)pointer + uVar9);
    do {
      iVar3 = iVar3 + -1;
      *puVar6 = *puVar7;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar3 != 0);
  }
LAB_10012814:
  recovered_10008354(pointer);
  uVar2 = param_1[1];
  param_1[2] = param_2;
  *param_1 = (int)puVar1;
  while (uVar2 < param_2) {
    *(undefined1 *)(*param_1 + uVar2) = 0;
    uVar2 = param_1[1] + 1;
    param_1[1] = uVar2;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012884
 */

uint recovered_10012884(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    uVar3 = uVar3 + 1;
    if (0x1f < uVar3) break;
  } while ((param_2 & 1 << (uVar3 & 0xff)) == 0);
  uVar4 = 0;
  uVar2 = param_2;
  do {
    uVar1 = uVar2 & 1;
    uVar2 = uVar2 >> 1;
    uVar4 = uVar1 + uVar4;
  } while (uVar2 != 0);
  uVar2 = ~(-1 << (uVar4 & 0xff));
  if (0x1e < uVar4) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = recovered_100013f0((((param_2 & param_1) >> (uVar3 & 0xff)) * 0x100 -
                             ((param_2 & param_1) >> (uVar3 & 0xff))) + (uVar2 >> 1),uVar2);
  return uVar3;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001290c
 */

undefined4 recovered_1001290c(undefined4 *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined3 uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint b;
  uint *puVar7;

  uVar6 = *(uint *)*param_1;
  if (*(uint *)param_1[1] <= uVar6) {
    return 0;
  }
  local_1c = 0xff000000;
  iVar5 = *(int *)param_1[2];
  if (iVar5 == 3) {
    bVar2 = *param_2;
    uVar1 = CONCAT21(CONCAT11(bVar2,bVar2),bVar2);
    bVar2 = 0xff;
    if (*(int *)param_1[3] == 0x10) {
      bVar2 = param_2[1];
    }
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 1) {
        return 0;
      }
      uVar6 = (uint)*param_2;
      if (*(int *)param_1[3] != 8) {
        uVar6 = (uint)CONCAT11(param_2[1],*param_2);
      }
      if (uVar6 < *(uint *)param_1[4]) {
        return 0;
      }
      uVar6 = uVar6 - *(uint *)param_1[4];
      if (*(uint *)param_1[5] <= uVar6) {
        return 0;
      }
      recovered_10002f90(&local_1c,(void *)(*(int *)param_1[6] + uVar6 * 4),4);
      uVar6 = *(uint *)*param_1;
      goto LAB_10012a18;
    }
    iVar5 = *(int *)param_1[3];
    if (iVar5 == 8) {
      bVar2 = *param_2;
      uVar1 = CONCAT21(CONCAT11(bVar2,bVar2),bVar2);
      bVar2 = 0xff;
    }
    else {
      if (iVar5 - 0xfU < 2) {
        uVar4 = 0xff;
        if ((*(uint *)param_1[7] & 0xf) != 0) {
          uVar4 = (undefined1)((int)(char)param_2[1] >> 7);
        }
        PF_PART2(local_1c, 0) =
             CONCAT11((char)((uint)((short)((short)(((int)*(short *)param_2 & 0x3ffU) >> 5) * 0xff)
                                   * 0x2109) >> 0x12),
                      (char)((uint)((short)((short)(((int)(char)param_2[1] & 0x7fU) >> 2) * 0xff) *
                                   0x2109) >> 0x12));
        if (iVar5 != 0x10) {
          uVar4 = 0xff;
        }
        local_1c = CONCAT13(uVar4,(int3)CONCAT22((ushort)((uint)((short)((*param_2 & 0x1f) * 0xff) *
                                                                0x2109) >> 0x12),
                                                 (undefined2)local_1c));
        goto LAB_10012a18;
      }
      if (iVar5 == 0x20) {
        PF_PART2(local_1c, 0) = CONCAT11(param_2[1],param_2[2]);
        local_1c = CONCAT13(param_2[3],CONCAT12(*param_2,(undefined2)local_1c));
        goto LAB_10012a18;
      }
      if (iVar5 != 0x18) {
        return 0;
      }
      bVar2 = 0xff;
      PF_PART2(local_1c, 0) = CONCAT11(param_2[1],param_2[2]);
      uVar1 = CONCAT12(*param_2,(undefined2)local_1c);
    }
  }
  local_1c = CONCAT13(bVar2,uVar1);
LAB_10012a18:
  puVar7 = (uint *)param_1[7];
  b = *(uint *)param_1[8];
  uVar3 = recovered_100013f0(uVar6,b);
  uVar6 = uVar6 - uVar3 * b;
  if ((*puVar7 & 0x10) != 0) {
    uVar6 = b + ~uVar6;
  }
  if ((*puVar7 & 0x20) == 0) {
    uVar3 = *(int *)param_1[9] + ~uVar3;
  }
  recovered_10002f90((void *)(*(int *)param_1[10] + (uVar3 * b + uVar6) * 4),&local_1c,4);
  *(int *)*param_1 = *(int *)*param_1 + 1;
  return 1;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012b68
 */

bool recovered_10012b68(int param_1,uint param_2,uint *param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *pointer;
  uint uVar2;
  uint extraout_r1 = 0;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;

  uVar10 = *param_3;
  uVar12 = param_3[1];
  if (-uVar12 < (uint)(uVar10 <= param_2)) {
    while (3 < param_2 - uVar10) {
      uVar2 = uVar10 + 4;
      uVar5 = *(uint *)(param_1 + uVar10);
      uVar9 = uVar12 + (0xfffffffb < uVar10);
      param_3[1] = uVar9;
      bVar13 = (uint)(uVar2 <= param_2) <= -uVar9;
      uVar9 = -(uVar9 + (uVar2 > param_2));
      *param_3 = uVar2;
      if (!bVar13) {
        uVar9 = param_2 - uVar2;
      }
      if (bVar13 || uVar9 < 4) {
        return false;
      }
      uVar2 = *(uint *)(param_1 + uVar2);
      uVar9 = uVar10 + 8;
      uVar12 = uVar12 + (0xfffffff7 < uVar10);
      uVar10 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
      param_3[1] = uVar12;
      uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
      *param_3 = uVar9;
      if (uVar10 == 0) {
        return uVar2 == 0;
      }
      if ((uint)(uVar9 <= param_2) <= -uVar12) {
        return false;
      }
      uVar5 = -(uVar12 + (param_2 < uVar9));
      if (uVar5 == 0 && (uVar2 <= param_2 - uVar9) <= uVar5) {
        return false;
      }
      puVar11 = (uint *)(param_1 + uVar9);
      if ((uVar10 == 1) && (3 < uVar2)) {
        uVar10 = *puVar11;
        uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                 uVar10 >> 0x18;
        if ((uVar10 < 0x101) && (uVar10 = uVar10 * 3, uVar10 + 4 <= uVar2)) {
          uVar12 = 0;
          *(undefined4 *)(param_4 + 0x1c) = 0;
          if (*(uint *)(param_4 + 0x20) < uVar10) {
            puVar1 = recovered_100082fc(uVar10);
            uVar12 = *(uint *)(param_4 + 0x1c);
            pointer = *(undefined8 **)(param_4 + 0x18);
            if (uVar12 != 0) {
              bVar13 = uVar12 == 0x10;
              uVar5 = 0;
              uVar9 = extraout_r1;
              if (0xf < uVar12) {
                uVar9 = (int)puVar1 - (int)pointer;
                bVar13 = uVar9 == 0xf;
              }
              if ((0xf < uVar12 && 0xe < uVar9) && !bVar13) {
                uVar5 = uVar12 & 0xfffffff0;
                puVar3 = puVar1;
                uVar9 = uVar5;
                puVar7 = pointer;
                do {
                  uVar14 = *puVar7;
                  uVar15 = puVar7[1];
                  puVar7 = puVar7 + 2;
                  uVar9 = uVar9 - 0x10;
                  *puVar3 = uVar14;
                  puVar3[1] = uVar15;
                  puVar3 = puVar3 + 2;
                } while (uVar9 != 0);
                if (uVar12 == uVar5) goto LAB_10012cec;
              }
              iVar4 = uVar12 - uVar5;
              puVar6 = (undefined1 *)((int)pointer + uVar5);
              puVar8 = (undefined1 *)((int)puVar1 + uVar5);
              do {
                iVar4 = iVar4 + -1;
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              } while (iVar4 != 0);
            }
LAB_10012cec:
            recovered_10008354(pointer);
            *(undefined8 **)(param_4 + 0x18) = puVar1;
            *(uint *)(param_4 + 0x20) = uVar10;
            uVar12 = *(uint *)(param_4 + 0x1c);
          }
          while (uVar12 < uVar10) {
            *(undefined1 *)(*(int *)(param_4 + 0x18) + uVar12) = 0;
            uVar12 = *(int *)(param_4 + 0x1c) + 1;
            *(uint *)(param_4 + 0x1c) = uVar12;
          }
          recovered_10002f90(*(void **)(param_4 + 0x18),puVar11 + 1,uVar12);
          uVar9 = *param_3;
          uVar12 = param_3[1];
        }
      }
      else if ((uVar10 == 0x11) && (uVar2 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar11;
      }
      uVar10 = uVar9 + uVar2;
      *param_3 = uVar10;
      uVar12 = uVar12 + CARRY4(uVar9,uVar2);
      param_3[1] = uVar12;
      if ((uint)(uVar10 <= param_2) <= -uVar12) {
        return false;
      }
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012d94
 */

undefined4 recovered_10012d94(int param_1,uint param_2,uint *param_3,uint param_4,uint *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = *param_3;
  if (param_4 == 4) {
    bVar1 = -param_3[1] < (uint)(uVar4 <= param_2);
    if (bVar1) {
      param_2 = param_2 - uVar4;
    }
    if (bVar1 && 3 < param_2) {
      uVar4 = *(uint *)(param_1 + uVar4);
      uVar2 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
      uVar4 = 0;
LAB_10012e00:
      *param_5 = uVar2;
      param_5[1] = uVar4;
      uVar4 = *param_3;
      *param_3 = uVar4 + param_4;
      param_3[1] = param_3[1] + (uint)CARRY4(uVar4,param_4);
      return 1;
    }
  }
  else {
    bVar1 = -param_3[1] < (uint)(uVar4 <= param_2);
    if (bVar1) {
      param_2 = param_2 - uVar4;
    }
    if (bVar1 && 7 < param_2) {
      uVar2 = *(uint *)(param_1 + uVar4);
      uVar3 = ((uint *)(param_1 + uVar4))[1];
      uVar4 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
      uVar2 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
              uVar3 >> 0x18;
      goto LAB_10012e00;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e30
 */

void recovered_10012e30(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  uVar1 = param_1[1];
  if (uVar1 != param_1[2]) goto LAB_10012efc;
  uVar11 = uVar1 << 1;
  if (uVar1 == 0) {
    uVar11 = 4;
  }
  if (uVar11 <= uVar1) goto LAB_10012efc;
  puVar2 = recovered_100082fc(uVar11 << 3);
  uVar1 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar12 = uVar1 == 4;
    uVar10 = 0;
    uVar4 = extraout_r2;
    if (3 < uVar1) {
      uVar4 = (int)puVar2 - (int)pointer;
      bVar12 = uVar4 == 0xf;
    }
    if ((3 < uVar1 && 0xe < uVar4) && !bVar12) {
      uVar10 = uVar1 & 0xfffffffe;
      puVar5 = puVar2;
      uVar4 = uVar10;
      puVar9 = pointer;
      do {
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar4 = uVar4 - 2;
        *puVar5 = uVar13;
        puVar5[1] = uVar14;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (uVar1 == uVar10) goto LAB_10012ee8;
    }
    puVar9 = pointer + uVar10;
    iVar3 = uVar1 - uVar10;
    puVar5 = puVar2 + uVar10;
    do {
      uVar6 = *(undefined4 *)puVar9;
      iVar3 = iVar3 + -1;
      puVar7 = (undefined4 *)((int)puVar9 + 4);
      puVar9 = puVar9 + 1;
      *(undefined4 *)((int)puVar5 + 4) = *puVar7;
      *(undefined4 *)puVar5 = uVar6;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10012ee8:
  recovered_10008354(pointer);
  uVar1 = param_1[1];
  param_1[2] = uVar11;
  *param_1 = (int)puVar2;
LAB_10012efc:
  uVar8 = *param_2;
  uVar6 = param_2[1];
  param_1[1] = uVar1 + 1;
  puVar7 = (undefined4 *)(*param_1 + uVar1 * 8);
  *puVar7 = uVar8;
  puVar7[1] = uVar6;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012f20
 */

int * recovered_10012f20(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  uint extraout_r1 = 0;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;

  uVar1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 == 0) goto LAB_10012ff0;
  puVar2 = recovered_100082fc(param_2);
  uVar1 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar10 = uVar1 == 0x10;
    uVar9 = 0;
    uVar3 = extraout_r1;
    if (0xf < uVar1) {
      uVar3 = (int)puVar2 - (int)pointer;
      bVar10 = uVar3 == 0xf;
    }
    if ((0xf < uVar1 && 0xe < uVar3) && !bVar10) {
      uVar9 = uVar1 & 0xfffffff0;
      puVar4 = puVar2;
      uVar3 = uVar9;
      puVar7 = pointer;
      do {
        uVar11 = *puVar7;
        uVar12 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar4 = uVar11;
        puVar4[1] = uVar12;
        puVar4 = puVar4 + 2;
      } while (uVar3 != 0);
      if (uVar1 == uVar9) goto LAB_10012fc4;
    }
    iVar5 = uVar1 - uVar9;
    puVar6 = (undefined1 *)((int)pointer + uVar9);
    puVar8 = (undefined1 *)((int)puVar2 + uVar9);
    do {
      iVar5 = iVar5 + -1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_10012fc4:
  recovered_10008354(pointer);
  param_1[2] = param_2;
  uVar1 = param_1[1];
  *param_1 = (int)puVar2;
LAB_10012ff0:
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return param_1;
}


static const unsigned char pf_literal_10013004_DAT_100133c4[] __attribute__((aligned(16)))={0x00,0x00,0x7f,0x43};
#undef DAT_100133c4
#define DAT_100133c4 (*(float *)((uintptr_t)pf_literal_10013004_DAT_100133c4))
#define local_50 (*(float (*)[20])(pf_stack_frame + 16))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_44 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013004
 */

bool recovered_10013004(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint *param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  float fVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;

  bVar2 = false;
  bVar10 = (uint)-param_5 < (uint)(param_4 <= param_2);
  uVar6 = -(param_5 + (uint)(param_4 > param_2));
  if (bVar10) {
    uVar6 = param_2 - param_4;
  }
  if (bVar10 && 3 < uVar6) {
    uVar6 = *(uint *)(param_1 + param_4);
    *param_6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    uVar7 = param_4 + 4;
    iVar4 = param_5 + (uint)(0xfffffffb < param_4);
    bVar10 = (uint)-iVar4 < (uint)(uVar7 <= param_2);
    uVar6 = -(iVar4 + (uint)(uVar7 > param_2));
    if (bVar10) {
      uVar6 = param_2 - uVar7;
    }
    if (bVar10 && 3 < uVar6) {
      uVar6 = *(uint *)(param_1 + uVar7);
      param_6[1] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18;
      uVar7 = param_4 + 8;
      iVar4 = param_5 + (uint)(0xfffffff7 < param_4);
      bVar10 = (uint)-iVar4 < (uint)(uVar7 <= param_2);
      uVar6 = -(iVar4 + (uint)(uVar7 > param_2));
      if (bVar10) {
        uVar6 = param_2 - uVar7;
      }
      if (bVar10 && 3 < uVar6) {
        uVar6 = *(uint *)(param_1 + uVar7);
        param_6[2] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18;
        fVar1 = DAT_100133c4;
        uVar7 = param_4 + 0xc;
        iVar4 = param_5 + (uint)(0xfffffff3 < param_4);
        bVar10 = (uint)-iVar4 < (uint)(uVar7 <= param_2);
        uVar6 = -(iVar4 + (uint)(uVar7 > param_2));
        if (bVar10) {
          uVar6 = param_2 - uVar7;
        }
        if (bVar10 && 3 < uVar6) {
          uVar7 = *(uint *)(param_1 + uVar7);
          uVar6 = param_4 + 0x10;
          local_44 = param_5 + (uint)(0xffffffef < param_4);
          uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                  uVar7 >> 0x18;
          if (uVar7 != 0) {
            if ((uint)(uVar6 <= param_2) <= (uint)-local_44) {
              return false;
            }
            uVar5 = -(local_44 + (uint)(param_2 < uVar6));
            if (uVar5 == 0 && (uVar7 <= param_2 - uVar6) <= uVar5) {
              return false;
            }
            bVar10 = CARRY4(uVar6,uVar7);
            uVar6 = uVar6 + uVar7;
            local_44 = local_44 + (uint)bVar10;
          }
          bVar10 = (uint)-local_44 < (uint)(uVar6 <= param_2);
          uVar7 = -(local_44 + (uint)(uVar6 > param_2));
          if (bVar10) {
            uVar7 = param_2 - uVar6;
          }
          if (bVar10 && 3 < uVar7) {
            while( true ) {
              bVar2 = false;
              uVar5 = uVar6 + 4;
              iVar4 = local_44 + (uint)(0xfffffffb < uVar6);
              bVar10 = (uint)(uVar5 <= param_2) <= (uint)-iVar4;
              uVar7 = -(iVar4 + (uint)(uVar5 > param_2));
              if (!bVar10) {
                uVar7 = param_2 - uVar5;
              }
              if (bVar10 || uVar7 < 4) {
                return false;
              }
              uVar8 = *(uint *)(param_1 + uVar6);
              uVar9 = uVar6 + 8;
              uVar7 = *(uint *)(param_1 + uVar5);
              uVar5 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                      uVar8 >> 0x18;
              local_44 = local_44 + (uint)(0xfffffff7 < uVar6);
              uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                      uVar7 >> 0x18;
              if (uVar5 == 0) break;
              if ((uint)(uVar9 <= param_2) <= (uint)-local_44) {
                return false;
              }
              uVar6 = -(local_44 + (uint)(param_2 < uVar9));
              if (uVar6 == 0 && (uVar7 <= param_2 - uVar9) <= uVar6) {
                return false;
              }
              puVar3 = (uint *)(param_1 + uVar9);
              if ((uVar5 == 6) && (3 < uVar7)) {
                uVar6 = *puVar3;
                uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                        uVar6 >> 0x18;
                if (0xfe < uVar6) {
                  uVar6 = 0xff;
                }
                param_6[4] = uVar6;
              }
              else if ((uVar5 == 8) && (3 < uVar7)) {
                uVar6 = *puVar3;
                *(bool *)(param_6 + 3) =
                     (((uVar6 & 0xff) != 0 || (uVar6 >> 8 & 0xff) != 0) ||
                     (uVar6 >> 0x10 & 0xff) != 0) || uVar6 >> 0x18 != 0;
              }
              else if ((uVar5 == 0xf) && (7 < uVar7)) {
                uVar6 = *puVar3;
                param_6[5] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
                uVar6 = puVar3[1];
                param_6[6] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
              }
              else if ((uVar5 == 0x21) && (3 < uVar7)) {
                uVar6 = *puVar3;
                local_50[0] = 0.0;
                local_48 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                           | uVar6 >> 0x18;
                recovered_10002f90(local_50,&local_48,4);
                if (local_50[0] <= 0.0) {
                  param_6[4] = 0;
                }
                else if (1.0 <= local_50[0]) {
                  param_6[4] = 0xff;
                }
                else {
                  dVar11 = -0.5;
                  if (0.0 <= local_50[0] * fVar1) {
                    dVar11 = 0.5;
                  }
                  uVar6 = VectorFloatToSigned(dVar11 + (double)(local_50[0] * fVar1),3);
                  param_6[4] = uVar6;
                }
              }
              uVar6 = uVar9 + uVar7;
              local_44 = local_44 + (uint)CARRY4(uVar9,uVar7);
              if ((uint)(uVar6 <= param_2) <= (uint)-local_44) {
                return false;
              }
              if (param_2 - uVar6 < 4) {
                return false;
              }
            }
            if (uVar7 == 0) {
              uVar6 = *(uint *)(param_3 + 0x10);
              if (uVar6 == 4) {
                if ((uint)(uVar9 <= param_2) <= (uint)-local_44) {
                  return false;
                }
                if (param_2 - uVar9 < 4) {
                  return false;
                }
                uVar7 = *(uint *)(param_1 + uVar9);
                uVar5 = 0;
              }
              else {
                if ((uint)(uVar9 <= param_2) <= (uint)-local_44) {
                  return false;
                }
                if (param_2 - uVar9 < 8) {
                  return false;
                }
                uVar5 = *(uint *)(param_1 + uVar9);
                uVar7 = ((uint *)(param_1 + uVar9))[1];
                uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                        uVar5 >> 0x18;
              }
              uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                      uVar7 >> 0x18;
              param_6[7] = uVar7;
              param_6[8] = uVar5;
              local_48 = uVar9 + uVar6;
              local_44 = local_44 + (uint)CARRY4(uVar9,uVar6);
              iVar4 = recovered_10012d94(param_1,param_2,&local_48,uVar6,(uint *)local_50);
              bVar2 = false;
              if (iVar4 != 0) {
                bVar2 = (*param_6 != 0 && param_6[1] != 0) && (uVar7 != 0 || uVar5 != 0);
              }
            }
          }
        }
      }
    }
  }
  return bVar2;
}

#undef DAT_100133c4
#undef local_50
#undef local_48
#undef local_44

static const unsigned char pf_literal_100133c8_DAT_10013ce8[] __attribute__((aligned(16)))={0x74,0x48,0x00,0x00};
#undef DAT_10013ce8
#define DAT_10013ce8 (*(int *)((uintptr_t)pf_literal_100133c8_DAT_10013ce8))
static const unsigned char pf_literal_100133c8_DAT_10013cec[] __attribute__((aligned(16)))={0x3c,0x08,0x00,0x00};
#undef DAT_10013cec
#define DAT_10013cec (*(int *)((uintptr_t)pf_literal_100133c8_DAT_10013cec))
#undef DAT_10017fe4
#define DAT_10017fe4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63cU)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define local_bc (*(undefined4 *)(pf_stack_frame + 292))
#define local_b8 (*(uint *)(pf_stack_frame + 296))
#define local_b4 (*(int *)(pf_stack_frame + 300))
#define local_ac (*(void * *)(pf_stack_frame + 308))
#define local_a8 (*(uint *)(pf_stack_frame + 312))
#define local_a0 (*(uint *)(pf_stack_frame + 320))
#define local_9c (*(int *)(pf_stack_frame + 324))
#define local_90 (*(undefined4 *)(pf_stack_frame + 336))
#define local_7c (*(undefined4 *)(pf_stack_frame + 356))
#define local_78 (*(int *)(pf_stack_frame + 360))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 364))
#define local_70 (*(int *)(pf_stack_frame + 368))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 372))
#define auStackY_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 16))
#define uStack_c5 (*(undefined1 *)(pf_stack_frame + 283))
#define local_13c (*(uint *)(pf_stack_frame + 164))
#define local_138 (*(int *)(pf_stack_frame + 168))
#define local_134 (*(int *)(pf_stack_frame + 172))
#define local_128 (*(int *)(pf_stack_frame + 184))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 332))
#define local_120 (*(uint *)(pf_stack_frame + 192))
#define local_11c (*(undefined4 *)(pf_stack_frame + 196))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 376))
#define local_fc (*(int *)(pf_stack_frame + 228))
#define local_f8 (*(uint *)(pf_stack_frame + 232))
#define local_f4 (*(int *)(pf_stack_frame + 236))
#define local_e8 (*(int *)(pf_stack_frame + 248))
#define local_c8 (*(undefined1 (*)[200])(pf_stack_frame + 280))
#define local_c4 (*(void * *)(pf_stack_frame + 284))
#define local_c0 (*(uint *)(pf_stack_frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100133c8
 */

undefined4 recovered_100133c8(int param_1,uint param_2,int param_3,uint *param_4,int *param_5)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int extraout_r1 = 0;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int extraout_r2 = 0;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  bool bVar26;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1d0 + 0x80;
  uVar17 = param_4[7];
  uVar20 = param_4[8];
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x2ecU);
  local_70 = DAT_10013cec + 0x10013430;
  recovered_100089f8(&uStack_94);
  local_11c = 0;
  bVar26 = -uVar20 < (uint)(uVar17 <= param_2);
  uVar5 = -(uVar20 + (uVar17 > param_2));
  if (bVar26) {
    uVar5 = param_2 - uVar17;
  }
  if (bVar26 && 3 < uVar5) {
    uVar6 = uVar17 + 4;
    iVar9 = uVar20 + (0xfffffffb < uVar17);
    bVar26 = (uint)-iVar9 < (uint)(uVar6 <= param_2);
    uVar5 = -(iVar9 + (uint)(uVar6 > param_2));
    if (bVar26) {
      uVar5 = param_2 - uVar6;
    }
    if (bVar26 && 3 < uVar5) {
      uVar13 = uVar17 + 8;
      iVar9 = uVar20 + (0xfffffff7 < uVar17);
      bVar26 = (uint)-iVar9 < (uint)(uVar13 <= param_2);
      uVar5 = -(iVar9 + (uint)(uVar13 > param_2));
      if (bVar26) {
        uVar5 = param_2 - uVar13;
      }
      if (bVar26 && 3 < uVar5) {
        uVar10 = *(uint *)(param_1 + uVar17);
        pbVar24 = (byte *)(param_1 + uVar13);
        bVar1 = *pbVar24;
        uVar5 = *(uint *)(param_1 + uVar6);
        bVar2 = pbVar24[2];
        uVar6 = uVar17 + 0xc;
        bVar3 = pbVar24[1];
        bVar4 = pbVar24[3];
        iVar9 = uVar20 + (0xfffffff3 < uVar17);
        if (*(int *)(param_3 + 0x10) == 4) {
          bVar26 = (uint)(uVar6 <= param_2) <= (uint)-iVar9;
          uVar17 = -(iVar9 + (uint)(uVar6 > param_2));
          if (!bVar26) {
            uVar17 = param_2 - uVar6;
          }
          if (bVar26 || uVar17 < 4) goto LAB_10013454;
          uVar17 = *(uint *)(param_1 + uVar6);
          uVar20 = 0;
          uVar17 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                   uVar17 >> 0x18;
        }
        else {
          bVar26 = (uint)(uVar6 <= param_2) <= (uint)-iVar9;
          uVar17 = -(iVar9 + (uint)(uVar6 > param_2));
          if (!bVar26) {
            uVar17 = param_2 - uVar6;
          }
          if (bVar26 || uVar17 < 8) goto LAB_10013454;
          uVar17 = *(uint *)(param_1 + uVar6);
          uVar6 = ((uint *)(param_1 + uVar6))[1];
          uVar20 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                   uVar17 >> 0x18;
          uVar17 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18;
        }
        uVar6 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                uVar10 >> 0x18;
        if ((((uVar6 == *param_4) &&
             (uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                      uVar5 >> 0x18, uVar5 == param_4[1])) && (uVar17 != 0 || uVar20 != 0)) &&
           (param_4[2] < 6)) {
          uVar13 = (uint)bVar3 * 0x10000 | (uint)bVar1 << 0x18 | (uint)bVar2 << 8 | (uint)bVar4;
          if (((uVar13 == *(uint *)(&DAT_10017fe4 + param_4[2] * 4)) &&
              (-uVar20 < (uint)(uVar17 <= param_2))) &&
             ((3 < param_2 - uVar17 &&
              ((uVar10 = uVar17 + 4, -(uVar20 + (0xfffffffb < uVar17)) < (uint)(uVar10 <= param_2)
               && (3 < param_2 - uVar10)))))) {
            uVar16 = *(uint *)(param_1 + uVar17);
            local_a0 = uVar17 + 8;
            uVar10 = *(uint *)(param_1 + uVar10);
            local_9c = uVar20 + (0xfffffff7 < uVar17);
            bVar26 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                     uVar16 >> 0x18) == uVar6;
            if (bVar26) {
              uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                       | uVar10 >> 0x18;
            }
            if (bVar26 && uVar10 == uVar5) {
              uVar17 = uVar5 + 0x3f >> 6;
              uVar20 = uVar6 + 0x3f >> 6;
              if ((uVar20 == 0) || ((int)((ulonglong)uVar17 * (ulonglong)uVar20 >> 0x20) == 0)) {
                uVar10 = uVar17 * uVar20;
                local_90 = 0xffffffff;
                recovered_10013e24(&local_ac,uVar10);
                if (uVar10 != 0) {
                  local_11c = 0;
                  iVar9 = 0;
                  pvVar7 = local_ac;
                  do {
                    iVar8 = recovered_10012d94(param_1,param_2,&local_a0,*(uint *)(param_3 + 0x10),
                                               (uint *)((int)pvVar7 + iVar9));
                    iVar11 = extraout_r1;
                    iVar14 = extraout_r2;
                    pvVar7 = (void *)0x0;
                    if (iVar8 != 0) {
                      iVar14 = *(int *)((int)local_ac + iVar9);
                      iVar11 = ((int *)((int)local_ac + iVar9))[1];
                      pvVar7 = local_ac;
                    }
                    if (iVar8 == 0 || iVar14 == 0 && iVar11 == 0) goto LAB_10013c54;
                    iVar9 = iVar9 + 8;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                local_b4 = 0;
                local_b8 = 0;
                local_11c = 0;
                iVar9 = recovered_10012d94(param_1,param_2,&local_a0,*(uint *)(param_3 + 0x10),
                                           &local_b8);
                if ((iVar9 != 0) && (local_b8 == 0 && local_b4 == 0)) {
                  uVar10 = *param_4;
                  if (((uVar10 == 0) ||
                      ((int)((ulonglong)param_4[1] * (ulonglong)uVar10 >> 0x20) == 0)) &&
                     (uVar10 = param_4[1] * uVar10, uVar10 < 0x40000000)) {
                    local_11c = 1;
                    local_90 = 1;
                    local_c4 = (void *)((uint)local_c4 & 0xffffff00);
                    recovered_100126c0(param_5,uVar10 * 4,(undefined1 *)&local_c4);
                    if (0x3f < uVar5 + 0x3f) {
                      iVar9 = (uint)bVar1 * 0x1000000 + (uint)bVar3 * 0x10000 + (uint)bVar2 * 0x100
                              + (uint)bVar4;
                      local_134 = 0;
                      local_138 = 0;
                      local_13c = 0;
                      do {
                        if (0x3f < uVar6 + 0x3f) {
                          local_11c = 0;
                          local_fc = 0;
                          local_128 = 0;
                          local_120 = 0;
                          do {
                            iVar11 = local_120 + local_13c * uVar20;
                            puVar15 = (uint *)((int)local_ac + iVar11 * 8);
                            uVar5 = *puVar15;
                            uVar10 = puVar15[1];
                            if (uVar10 != 0 || uVar10 < (param_2 <= uVar5)) goto LAB_10013c54;
                            uVar21 = *param_4;
                            uVar18 = param_4[1];
                            uVar16 = uVar21 + local_120 * -0x40;
                            uVar22 = uVar18 + local_13c * -0x40;
                            if (0x3f < uVar16) {
                              uVar16 = 0x40;
                            }
                            if (0x3f < uVar22) {
                              uVar22 = 0x40;
                            }
                            uVar22 = uVar22 * uVar16;
                            if ((uVar22 != 0) &&
                               ((int)((ulonglong)uVar13 * (ulonglong)uVar22 >> 0x20) != 0))
                            goto LAB_10013c54;
                            uVar19 = iVar11 + 1;
                            uVar23 = param_2 - uVar5;
                            uVar16 = uVar23;
                            if ((uVar19 < local_a8) &&
                               (puVar15 = (uint *)((int)local_ac + uVar19 * 8), uVar25 = *puVar15,
                               uVar12 = puVar15[1],
                               uVar10 <= uVar12 && (uint)(uVar25 <= uVar5) <= uVar10 - uVar12)) {
                              uVar16 = uVar25 - uVar5;
                            }
                            local_bc = 0;
                            local_c0 = 0;
                            uVar10 = uVar22 * uVar13;
                            local_c4 = (void *)0x0;
                            iVar11 = *(int *)(param_3 + 0x14);
                            if (iVar11 == 2) {
                              if (uVar19 < local_a8) {
                                local_90 = 4;
                                bVar26 = recovered_10014264((undefined8 *)(param_1 + uVar5),uVar16,
                                                            (int *)&local_c4);
                                if (bVar26 && local_c0 == uVar10) goto LAB_10013a08;
                              }
LAB_10013c3c:
                              local_c0 = 0;
                              local_11c = 0;
                              recovered_10008354(local_c4);
                              goto LAB_10013c54;
                            }
                            if (iVar11 == 1) {
                              local_90 = 3;
                              bVar26 = recovered_10013f4c(param_1 + uVar5,uVar16,uVar22,uVar13,
                                                          (int *)&local_c4);
                              if (!bVar26) goto LAB_10013c3c;
                            }
                            else {
                              if ((iVar11 != 0) || (uVar23 < uVar10)) goto LAB_10013c3c;
                              local_90 = 2;
                              recovered_1001440c((int *)&local_c4,0,(undefined1 *)(param_1 + uVar5),
                                                 (undefined1 *)(param_1 + uVar5) + uVar10);
                            }
LAB_10013a08:
                            if (uVar18 != local_13c * 0x40) {
                              uVar5 = uVar21 + local_128;
                              if (0x3f < uVar5) {
                                uVar5 = 0x40;
                              }
                              uVar10 = 1;
                              if (1 < uVar5) {
                                uVar10 = uVar5;
                              }
                              uVar18 = local_138 + uVar18;
                              if (0x3f < uVar18) {
                                uVar18 = 0x40;
                              }
                              if (uVar18 < 2) {
                                uVar18 = 1;
                              }
                              local_f4 = 0;
                              local_e8 = local_134;
                              local_f8 = 0;
                              do {
                                bVar26 = uVar21 == local_120 << 6;
                                uVar16 = uVar10;
                                iVar11 = local_f4;
                                iVar14 = local_fc;
                                while (!bVar26) {
                                  uVar19 = param_4[2];
                                  PF_PART3(local_c8,0) = (uint32_t)0x0;
                                  uVar22 = 0xff;
                                  if (uVar19 < 6) {
                                    if ((1 << (uVar19 & 0xff) & 3U) == 0) {
                                      if ((1 << (uVar19 & 0xff) & 0xcU) == 0) {
                                        iVar8 = (uint)*(byte *)((int)local_c4 + iVar11) * 3;
                                        uVar23 = iVar8 + 2;
                                        if (uVar23 < *(uint *)(param_3 + 0x1c)) {
                                          local_c8[2] = *(undefined1 *)
                                                         (*(int *)(param_3 + 0x18) + uVar23);
                                          PF_PART2(local_c8, 0) =
                                               *(undefined2 *)(*(int *)(param_3 + 0x18) + iVar8);
                                        }
                                        iVar8 = 1;
                                        if (uVar19 == 5) goto LAB_10013b7c;
                                      }
                                      else {
                                        iVar8 = 1;
                                        local_c8[1] = *(undefined1 *)((int)local_c4 + iVar11);
                                        local_c8[0] = *(undefined1 *)((int)local_c4 + iVar11);
                                        local_c8[2] = *(undefined1 *)((int)local_c4 + iVar11);
                                        if (uVar19 == 3) {
LAB_10013b7c:
                                          uVar22 = (uint)*(byte *)((int)local_c4 + iVar11 + iVar8);
                                        }
                                      }
                                    }
                                    else {
                                      iVar8 = 3;
                                      PF_PART3(local_c8,0) = PF_PART3(*(undefined1 (*) [3])((int)local_c4 + iVar11),0);
                                      if (uVar19 == 1) goto LAB_10013b7c;
                                    }
                                  }
                                  local_90 = 5;
                                  PF_PART4(local_c8,0) = CONCAT13((char)((uVar22 * param_4[4] + 0x7f) / 0xff),PF_PART3(local_c8,0));
                                  recovered_10002f90((void *)(*param_5 +
                                                             (local_e8 * *param_4 + iVar14) * 4),
                                                     local_c8,4);
                                  iVar11 = iVar11 + iVar9;
                                  iVar14 = iVar14 + 1;
                                  uVar16 = uVar16 - 1;
                                  bVar26 = uVar16 == 0;
                                }
                                local_f4 = local_f4 + iVar9 * uVar5;
                                local_e8 = local_e8 + 1;
                                local_f8 = local_f8 + 1;
                              } while (local_f8 != uVar18);
                            }
                            local_c0 = 0;
                            recovered_10008354(local_c4);
                            local_fc = local_fc + 0x40;
                            local_120 = local_120 + 1;
                            local_128 = local_128 + -0x40;
                          } while (local_120 != uVar20);
                        }
                        local_134 = local_134 + 0x40;
                        local_13c = local_13c + 1;
                        local_138 = local_138 + -0x40;
                        local_11c = 1;
                      } while (local_13c != uVar17);
                    }
                  }
                }
LAB_10013c54:
                local_a8 = 0;
                recovered_10008354(local_ac);
              }
            }
          }
        }
      }
    }
  }
LAB_10013454:
  recovered_10008a1c(&uStack_94);
  return local_11c;
}

#undef DAT_10013ce8
#undef DAT_10013cec
#undef DAT_10017fe4
#undef DAT_1001c00c
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_1d0
#undef uStack_c5
#undef local_13c
#undef local_138
#undef local_134
#undef local_128
#undef uStack_94
#undef local_120
#undef local_11c
#undef auStack_68
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_e8
#undef local_c8
#undef local_c4
#undef local_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013cf0
 */

void recovered_10013cf0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  bVar2 = *(byte *)(param_2 + 3);
  uVar7 = (uint)bVar2;
  if (uVar7 != 0xff) {
    if (uVar7 == 0) {
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
    }
    else {
      bVar3 = *(byte *)(param_1 + 3);
      if (bVar3 != 0) {
        bVar4 = *(byte *)(param_1 + 1);
        iVar5 = (int)(short)(bVar2 ^ 0xff) * (int)(short)(ushort)bVar3;
        uVar1 = (ushort)bVar2;
        uVar7 = uVar7 + ((int)(short)(bVar2 ^ 0xff) * (int)(short)(ushort)bVar3 + 0x7fU & 0xffff) /
                        0xff;
        bVar2 = *(byte *)(param_1 + 2);
        uVar6 = recovered_100013f0((int)(short)(ushort)*(byte *)param_2 * (int)(short)uVar1 +
                                   (uVar7 >> 1) + (iVar5 * (uint)*(byte *)param_1 + 0x7f) / 0xff,
                                   uVar7);
        *(char *)param_1 = (char)uVar6;
        uVar6 = recovered_100013f0((int)(short)(ushort)*(byte *)(param_2 + 1) * (int)(short)uVar1 +
                                   (uVar7 >> 1) + (iVar5 * (uint)bVar4 + 0x7f) / 0xff,uVar7);
        *(char *)(param_1 + 1) = (char)uVar6;
        bVar3 = *(byte *)(param_2 + 2);
        *(char *)(param_1 + 3) = (char)uVar7;
        uVar7 = recovered_100013f0((int)(short)(ushort)bVar3 * (int)(short)uVar1 + (uVar7 >> 1) +
                                   (iVar5 * (uint)bVar2 + 0x7f) / 0xff,uVar7);
        *(char *)(param_1 + 2) = (char)uVar7;
        return;
      }
    }
  }
  recovered_10002f90((void *)param_1,(void *)param_2,4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013e24
 */

undefined4 * recovered_10013e24(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint extraout_r3 = 0;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    return param_1;
  }
  puVar5 = recovered_100082fc(param_2 << 3);
  uVar7 = param_1[1];
  puVar6 = (undefined4 *)*param_1;
  if (uVar7 != 0) {
    uVar9 = 0;
    uVar11 = extraout_r3;
    if (3 < uVar7) {
      uVar11 = (int)puVar5 - (int)puVar6;
    }
    if (3 < uVar7 && 0xf < uVar11) {
      uVar9 = uVar7 & 0xfffffffe;
      uVar11 = uVar9;
      puVar12 = puVar5;
      puVar14 = puVar6;
      do {
        uVar10 = *puVar14;
        uVar2 = puVar14[1];
        uVar3 = puVar14[2];
        uVar4 = puVar14[3];
        puVar14 = puVar14 + 4;
        uVar11 = uVar11 - 2;
        *puVar12 = uVar10;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        puVar12 = puVar12 + 4;
      } while (uVar11 != 0);
      if (uVar7 == uVar9) goto LAB_10013ea8;
    }
    puVar14 = puVar6 + uVar9 * 2;
    iVar8 = uVar7 - uVar9;
    puVar12 = puVar5 + uVar9 * 2;
    do {
      uVar10 = *puVar14;
      iVar8 = iVar8 + -1;
      puVar1 = puVar14 + 1;
      puVar14 = puVar14 + 2;
      puVar12[1] = *puVar1;
      *puVar12 = uVar10;
      puVar12 = puVar12 + 2;
    } while (iVar8 != 0);
  }
LAB_10013ea8:
  recovered_10008354(puVar6);
  uVar7 = param_1[1];
  param_1[2] = param_2;
  *param_1 = puVar5;
  if (param_2 <= uVar7) {
    return param_1;
  }
  uVar11 = param_2 - uVar7;
  if (1 < uVar11) {
    uVar13 = uVar11 & 0xfffffffe;
    puVar6 = puVar5 + uVar7 * 2;
    uVar7 = uVar7 + uVar13;
    uVar9 = uVar13;
    do {
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
    if (uVar11 == uVar13) goto LAB_10013f10;
  }
  iVar8 = param_2 - uVar7;
  puVar5 = puVar5 + uVar7 * 2;
  do {
    puVar5[1] = 0;
    iVar8 = iVar8 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 2;
  } while (iVar8 != 0);
LAB_10013f10:
  param_1[1] = param_2;
  return param_1;
}


#define local_28 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f4c
 */

bool recovered_10013f4c(int param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *pointer;
  int iVar5;
  uint extraout_r2 = 0;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;

  uVar13 = param_4 * param_3;
  uVar3 = 0;
  param_5[1] = 0;
  if (uVar13 <= (uint)param_5[2]) goto joined_r0x10014018;
  puVar4 = recovered_100082fc(uVar13);
  uVar3 = param_5[1];
  pointer = (undefined8 *)*param_5;
  if (uVar3 != 0) {
    bVar17 = uVar3 == 0x10;
    uVar15 = 0;
    uVar6 = extraout_r2;
    if (0xf < uVar3) {
      uVar6 = (int)puVar4 - (int)pointer;
      bVar17 = uVar6 == 0xf;
    }
    if ((0xf < uVar3 && 0xe < uVar6) && !bVar17) {
      uVar15 = uVar3 & 0xfffffff0;
      puVar7 = puVar4;
      uVar6 = uVar15;
      puVar11 = pointer;
      do {
        uVar20 = *puVar11;
        uVar21 = puVar11[1];
        puVar11 = puVar11 + 2;
        uVar6 = uVar6 - 0x10;
        *puVar7 = uVar20;
        puVar7[1] = uVar21;
        puVar7 = puVar7 + 2;
      } while (uVar6 != 0);
      if (uVar3 == uVar15) goto LAB_10013ffc;
    }
    iVar5 = uVar3 - uVar15;
    puVar10 = (undefined1 *)((int)puVar4 + uVar15);
    puVar12 = (undefined1 *)((int)pointer + uVar15);
    do {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar12;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar5 != 0);
  }
LAB_10013ffc:
  recovered_10008354(pointer);
  uVar3 = param_5[1];
  param_5[2] = uVar13;
  *param_5 = (int)puVar4;
joined_r0x10014018:
  while (uVar3 < uVar13) {
    *(undefined1 *)(*param_5 + uVar3) = 0;
    uVar3 = param_5[1] + 1;
    param_5[1] = uVar3;
  }
  if (param_4 == 0) {
    bVar17 = true;
  }
  else {
    uVar3 = 0;
    bVar17 = false;
    local_28 = 0;
    do {
      bVar18 = param_3 != 0;
      if ((param_3 != 0) && (uVar3 < param_2)) {
        uVar13 = 0;
        do {
          uVar15 = uVar3 + 1;
          pbVar14 = (byte *)(param_1 + uVar3);
          uVar6 = (uint)*pbVar14;
          if (uVar6 < 0x7f) {
            bVar19 = uVar15 <= param_2;
            bVar18 = param_2 == uVar15;
            if (bVar19 && !bVar18) {
              bVar19 = uVar6 <= param_3 - uVar13;
              bVar18 = param_3 - uVar13 == uVar6;
            }
            if (!bVar19 || bVar18) {
              return bVar17;
            }
            uVar16 = uVar6 + 1;
            iVar5 = param_4 * uVar13 + local_28;
            uVar3 = uVar3 + 2;
            uVar1 = *(undefined1 *)(param_1 + uVar15);
            uVar6 = uVar16;
            do {
              uVar6 = uVar6 - 1;
              *(undefined1 *)(*param_5 + iVar5) = uVar1;
              iVar5 = iVar5 + param_4;
            } while (uVar6 != 0);
          }
          else {
            uVar9 = param_2 - uVar15;
            if (uVar6 == 0x80) {
              if (uVar9 < 2) {
                return bVar17;
              }
              uVar16 = (uint)CONCAT11(*(undefined1 *)(param_1 + uVar15),pbVar14[2]);
              if (param_3 - uVar13 <= uVar16 - 1) {
                return bVar17;
              }
              iVar5 = uVar3 + 3;
              if (param_2 - iVar5 < uVar16) {
                return bVar17;
              }
              iVar8 = param_4 * uVar13 + local_28;
              uVar3 = uVar16;
              puVar10 = (undefined1 *)(param_1 + iVar5);
              do {
                uVar3 = uVar3 - 1;
                *(undefined1 *)(*param_5 + iVar8) = *puVar10;
                iVar8 = iVar8 + param_4;
                puVar10 = puVar10 + 1;
              } while (uVar3 != 0);
              uVar3 = uVar16 + iVar5;
            }
            else if (uVar6 == 0x7f) {
              if (uVar9 < 3) {
                return bVar17;
              }
              uVar16 = (uint)CONCAT11(*(undefined1 *)(param_1 + uVar15),pbVar14[2]);
              if (param_3 - uVar13 <= uVar16 - 1) {
                return bVar17;
              }
              iVar5 = param_4 * uVar13 + local_28;
              bVar2 = pbVar14[3];
              uVar3 = uVar3 + 4;
              uVar6 = uVar16;
              do {
                uVar6 = uVar6 - 1;
                *(byte *)(*param_5 + iVar5) = bVar2;
                iVar5 = iVar5 + param_4;
              } while (uVar6 != 0);
            }
            else {
              uVar16 = 0x100 - uVar6;
              if (param_3 - uVar13 < uVar16) {
                return bVar17;
              }
              if (uVar9 < uVar16) {
                return bVar17;
              }
              iVar5 = param_4 * uVar13 + local_28;
              uVar6 = uVar6 | 0xffffff00;
              puVar10 = (undefined1 *)(param_1 + uVar15);
              do {
                bVar18 = uVar6 != 0xffffffff;
                uVar6 = uVar6 + 1;
                *(undefined1 *)(*param_5 + iVar5) = *puVar10;
                iVar5 = iVar5 + param_4;
                puVar10 = puVar10 + 1;
              } while (bVar18);
              uVar3 = uVar16 + uVar15;
            }
          }
          uVar13 = uVar16 + uVar13;
          bVar18 = uVar13 < param_3;
        } while (uVar13 < param_3 && uVar3 < param_2);
      }
      if (bVar18) {
        return bVar17;
      }
      local_28 = local_28 + 1;
      bVar17 = param_4 <= local_28;
    } while (local_28 != param_4);
  }
  return bVar17;
}

#undef local_28

static const unsigned char pf_literal_10014264_DAT_10014404[] __attribute__((aligned(16)))={0xec,0x39,0x00,0x00};
#undef DAT_10014404
#define DAT_10014404 (*(int *)((uintptr_t)pf_literal_10014264_DAT_10014404))
static const unsigned char pf_literal_10014264_DAT_10014408[] __attribute__((aligned(16)))={0xfc,0x00,0x00,0x00};
#undef DAT_10014408
#define DAT_10014408 (*(int *)((uintptr_t)pf_literal_10014264_DAT_10014408))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_a4 (*(undefined8 * *)(pf_stack_frame + 28))
#define local_a0 (*(uint *)(pf_stack_frame + 32))
#define local_9c (*(uint *)(pf_stack_frame + 36))
#define local_98 (*(undefined8 * *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014264
 */

bool recovered_10014264(undefined8 *param_1,uint param_2,int *param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint size;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;

  local_7c = DAT_1001c00c;
  local_78 = DAT_10014404;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  bVar1 = false;
  param_3[1] = 0;
  local_78 = local_78 + 0x100142b8;
  local_70 = DAT_10014408 + 0x100142c8;
  recovered_100089f8(&uStack_94);
  if (param_1 == (undefined8 *)0x0 || param_2 == 0) goto LAB_100143a0;
  uVar7 = 4;
  do {
    size = uVar7;
    uVar7 = size << 1;
  } while (size < param_2);
  local_90 = 0xffffffff;
  local_98 = recovered_100082fc(size);
  uVar7 = 0;
  recovered_10008354((void *)0x0);
  local_a4 = local_98;
  if (param_2 < 0x10) {
    puVar2 = param_1;
LAB_1001435c:
    puVar5 = (undefined1 *)((int)local_98 + uVar7);
    do {
      puVar3 = (undefined8 *)((int)puVar2 + 1);
      *puVar5 = *(undefined1 *)puVar2;
      puVar2 = puVar3;
      puVar5 = puVar5 + 1;
    } while (puVar3 != (undefined8 *)((int)param_1 + param_2));
  }
  else {
    uVar7 = param_2 & 0xfffffff0;
    puVar2 = (undefined8 *)((int)param_1 + uVar7);
    puVar3 = local_98;
    uVar4 = uVar7;
    puVar6 = param_1;
    do {
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      puVar6 = puVar6 + 2;
      uVar4 = uVar4 - 0x10;
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3 = puVar3 + 2;
    } while (uVar4 != 0);
    if (uVar7 != param_2) goto LAB_1001435c;
  }
  local_90 = 1;
  local_a0 = param_2;
  local_9c = size;
  bVar1 = recovered_10014570((int *)&local_a4,param_3,0xffffffff);
  recovered_10008354(local_98);
LAB_100143a0:
  recovered_10008a1c(&uStack_94);
  return bVar1;
}

#undef DAT_10014404
#undef DAT_10014408
#undef DAT_1001c00c
#undef auStack_b0
#undef uStack_94
#undef auStack_68
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001440c
 */

int recovered_1001440c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
  if (param_3 == param_4) goto LAB_10014550;
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
    puVar3 = recovered_100082fc(size);
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
        if (uVar8 == uVar9) goto LAB_100144e4;
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
LAB_100144e4:
    recovered_10008354(pointer);
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
LAB_10014550:
  iVar11 = iVar1 + uVar10;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  return iVar11;
}


/* Scalar reconstruction of the recovered DEFLATE state machine.
 * Pooka's Free Software License. */
#define PF_INFLATE_MALLOC recovered_10002e98
#define PF_INFLATE_FREE recovered_10002eec
#include "inflate.h"
#undef PF_INFLATE_MALLOC
#undef PF_INFLATE_FREE
bool recovered_10014570(int *param_1,int *param_2,uint param_3){return pf_inflate_zlib((const uintptr_t *)param_1,(uintptr_t *)param_2,param_3);}

#undef PF_INFLATE_MALLOC
#undef PF_INFLATE_FREE

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015a74
 */

undefined4 recovered_10015a74(int *param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  uVar2 = 0;
  if (param_2 < 0x19) {
    uVar3 = param_1[5];
    if (uVar3 < param_2) {
      uVar5 = param_1[2];
      uVar6 = param_1[1];
      if ((uint)param_1[1] < uVar5) {
        uVar6 = uVar5;
      }
      do {
        if (uVar6 == uVar5) goto LAB_10015b18;
        param_1[2] = uVar5 + 1;
        uVar8 = uVar3 - 0x20;
        bVar1 = *(byte *)(*param_1 + uVar5);
        uVar4 = uVar3 + 8;
        param_1[5] = uVar4;
        uVar7 = (uint)bVar1 << (uVar3 & 0xff);
        if (-1 < (int)uVar8) {
          uVar7 = 0;
        }
        uVar3 = (uint)(bVar1 >> (0x20 - uVar3 & 0xff));
        if (-1 < (int)uVar8) {
          uVar3 = (uint)bVar1 << (uVar8 & 0xff);
        }
        param_1[4] = uVar3 | param_1[4];
        param_1[3] = uVar7 | param_1[3];
        uVar3 = uVar4;
        uVar5 = uVar5 + 1;
      } while (uVar4 < param_2);
    }
    else {
LAB_10015b18:
      uVar4 = uVar3;
    }
    uVar2 = 0;
    if (param_2 <= uVar4) {
      uVar5 = param_1[3];
      uVar3 = -1 << (param_2 & 0xff);
      uVar6 = param_2 - 0x20;
      uVar4 = param_1[4];
      if (-1 < (int)uVar6) {
        uVar3 = 0;
      }
      *param_3 = uVar5 & ~uVar3;
      param_1[5] = param_1[5] - param_2;
      uVar3 = uVar4 >> (param_2 & 0xff);
      uVar5 = uVar5 >> (param_2 & 0xff) | uVar4 << (0x20 - param_2 & 0xff);
      if (-1 < (int)uVar6) {
        uVar3 = 0;
        uVar5 = uVar4 >> (uVar6 & 0xff);
      }
      uVar2 = 1;
      param_1[3] = uVar5;
      param_1[4] = uVar3;
    }
  }
  return uVar2;
}


#undef DAT_10017e00
#define DAT_10017e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x458U)))
#undef DAT_10017e78
#define DAT_10017e78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d0U)))
#define local_40 (*(uint *)(pf_stack_frame + 16))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015b94
 */

undefined4 recovered_10015b94(int *param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint extraout_r2 = 0;
  uint extraout_r2_00 = 0;
  undefined8 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;

  if (*(char *)(param_2 + 0x50) == '\x01') {
    puVar6 = (uint *)(param_1 + 3);
    do {
      uVar23 = *(uint *)(param_2 + 0x4c);
      if (uVar23 == 0) {
        return 0;
      }
      iVar7 = *param_1;
      uVar15 = 1;
      uVar21 = 0;
      uVar8 = param_1[1];
      iVar11 = 0;
      iVar13 = 0;
      uVar22 = param_1[5];
      uVar20 = param_1[4];
      uVar19 = param_1[2];
      uVar10 = *puVar6;
      while( true ) {
        if (uVar22 == 0) {
          if (uVar8 <= uVar19) {
            return 0;
          }
          local_34 = uVar19 + 1;
          param_1[2] = local_34;
          uVar22 = 8;
          uVar10 = uVar10 | *(byte *)(iVar7 + uVar19);
        }
        else {
          local_34 = uVar19;
        }
        uVar22 = uVar22 - 1;
        param_1[5] = uVar22;
        bVar1 = (byte)uVar20;
        uVar20 = uVar20 >> 1;
        uVar18 = (uint)(bVar1 & 1) << 0x1f | uVar10 >> 1;
        iVar9 = *(int *)(param_2 + uVar15 * 4);
        uVar21 = uVar10 & 1 | uVar21;
        param_1[4] = uVar20;
        *puVar6 = uVar18;
        uVar19 = iVar9 + iVar13;
        if (uVar21 < uVar19) break;
        uVar15 = uVar15 + 1;
        iVar11 = iVar9 + iVar11;
        uVar21 = uVar21 << 1;
        iVar13 = uVar19 * 2;
        uVar19 = local_34;
        uVar10 = uVar18;
        if (uVar23 < uVar15) {
          return 0;
        }
      }
      uVar23 = (uVar21 - iVar13) + iVar11;
      if (*(uint *)(param_2 + 0x44) <= uVar23) {
        return 0;
      }
      uVar2 = *(ushort *)(*(int *)(param_2 + 0x40) + uVar23 * 2);
      uVar23 = (uint)uVar2;
      if (uVar23 < 0x100) {
        uVar23 = param_4[1];
        if (param_5 <= uVar23) {
          return 0;
        }
        if (uVar23 == param_4[2]) {
          uVar21 = uVar23 << 1;
          if (uVar23 == 0) {
            uVar21 = 4;
          }
          if (uVar23 < uVar21) {
            puVar3 = recovered_100082fc(uVar21);
            uVar23 = param_4[1];
            puVar4 = (undefined8 *)*param_4;
            if (uVar23 != 0) {
              bVar24 = uVar23 == 0x10;
              uVar8 = 0;
              uVar20 = extraout_r2;
              if (0xf < uVar23) {
                uVar20 = (int)puVar3 - (int)puVar4;
                bVar24 = uVar20 == 0xf;
              }
              if ((0xf < uVar23 && 0xe < uVar20) && !bVar24) {
                uVar8 = uVar23 & 0xfffffff0;
                puVar5 = puVar3;
                uVar20 = uVar8;
                puVar12 = puVar4;
                do {
                  uVar26 = *puVar12;
                  uVar27 = puVar12[1];
                  puVar12 = puVar12 + 2;
                  uVar20 = uVar20 - 0x10;
                  *puVar5 = uVar26;
                  puVar5[1] = uVar27;
                  puVar5 = puVar5 + 2;
                } while (uVar20 != 0);
                if (uVar23 == uVar8) goto LAB_10015d74;
              }
              iVar13 = uVar23 - uVar8;
              puVar14 = (undefined1 *)((int)puVar3 + uVar8);
              puVar17 = (undefined1 *)((int)puVar4 + uVar8);
              do {
                iVar13 = iVar13 + -1;
                *puVar14 = *puVar17;
                puVar14 = puVar14 + 1;
                puVar17 = puVar17 + 1;
              } while (iVar13 != 0);
            }
LAB_10015d74:
            recovered_10008354(puVar4);
            uVar23 = param_4[1];
            param_4[2] = uVar21;
            *param_4 = (int)puVar3;
          }
        }
        *(char *)(*param_4 + uVar23) = (char)uVar2;
        param_4[1] = param_4[1] + 1;
      }
      else {
        if (uVar23 == 0x100) {
          return 1;
        }
        if (0x8e < uVar2 >> 1) {
          return 0;
        }
        uVar21 = *(uint *)(uVar23 * 4 + ((uintptr_t)pf_module_state-0x20U));
        local_40 = *(uint *)(uVar23 * 4 + ((uintptr_t)pf_module_state-0x94U));
        if (uVar21 != 0) {
          if (0x18 < uVar21) {
            return 0;
          }
          uVar23 = uVar18;
          if (uVar22 < uVar21) {
            uVar19 = local_34;
            uVar10 = uVar22;
            uVar15 = uVar8;
            if (uVar8 < local_34) {
              uVar15 = local_34;
            }
            do {
              if (uVar15 == uVar19) {
                local_34 = uVar15;
                uVar22 = uVar10;
                break;
              }
              local_34 = uVar19 + 1;
              param_1[2] = local_34;
              uVar18 = uVar10 - 0x20;
              uVar22 = uVar10 + 8;
              bVar1 = *(byte *)(iVar7 + uVar19);
              param_1[5] = uVar22;
              uVar19 = (uint)bVar1 << (uVar10 & 0xff);
              if (-1 < (int)uVar18) {
                uVar19 = 0;
              }
              uVar23 = uVar19 | uVar23;
              *puVar6 = uVar23;
              uVar19 = (uint)(bVar1 >> (0x20 - uVar10 & 0xff));
              if (-1 < (int)uVar18) {
                uVar19 = (uint)bVar1 << (uVar18 & 0xff);
              }
              uVar20 = uVar19 | uVar20;
              param_1[4] = uVar20;
              uVar19 = local_34;
              uVar10 = uVar22;
            } while (uVar22 < uVar21);
          }
          if (uVar22 < uVar21) {
            return 0;
          }
          uVar22 = uVar22 - uVar21;
          uVar18 = uVar23 >> (uVar21 & 0xff) | uVar20 << (0x20 - uVar21 & 0xff);
          uVar10 = uVar21 - 0x20;
          param_1[5] = uVar22;
          uVar19 = uVar20 >> (uVar21 & 0xff);
          if (-1 < (int)uVar10) {
            uVar18 = uVar20 >> (uVar10 & 0xff);
            uVar19 = 0;
          }
          uVar20 = uVar19;
          param_1[4] = uVar20;
          *puVar6 = uVar18;
          uVar21 = -1 << (uVar21 & 0xff);
          if (-1 < (int)uVar10) {
            uVar21 = 0;
          }
          local_40 = local_40 + (uVar23 & ~uVar21);
        }
        if (*(char *)(param_3 + 0x50) != '\x01') {
          return 0;
        }
        uVar23 = *(uint *)(param_3 + 0x4c);
        if (uVar23 == 0) {
          return 0;
        }
        uVar19 = 1;
        uVar21 = 0;
        iVar11 = 0;
        iVar13 = 0;
        while( true ) {
          if (uVar22 == 0) {
            if (uVar8 <= local_34) {
              return 0;
            }
            param_1[2] = local_34 + 1;
            uVar22 = 8;
            uVar18 = uVar18 | *(byte *)(iVar7 + local_34);
            local_34 = local_34 + 1;
          }
          else {
          }
          uVar22 = uVar22 - 1;
          param_1[5] = uVar22;
          iVar9 = *(int *)(param_3 + uVar19 * 4);
          bVar1 = (byte)uVar20;
          uVar20 = uVar20 >> 1;
          uVar10 = (uint)(bVar1 & 1) << 0x1f | uVar18 >> 1;
          param_1[4] = uVar20;
          *puVar6 = uVar10;
          uVar21 = uVar18 & 1 | uVar21;
          uVar15 = iVar9 + iVar13;
          if (uVar21 < uVar15) break;
          uVar19 = uVar19 + 1;
          iVar11 = iVar9 + iVar11;
          uVar21 = uVar21 << 1;
          iVar13 = uVar15 * 2;
          uVar18 = uVar10;
          if (uVar23 < uVar19) {
            return 0;
          }
        }
        uVar23 = (uVar21 - iVar13) + iVar11;
        if (*(uint *)(param_3 + 0x44) <= uVar23) {
          return 0;
        }
        uVar23 = (uint)*(ushort *)(*(int *)(param_3 + 0x40) + uVar23 * 2);
        if (0x1d < uVar23) {
          return 0;
        }
        uVar21 = *(uint *)(&DAT_10017e78 + uVar23 * 4);
        uVar23 = *(uint *)(&DAT_10017e00 + uVar23 * 4);
        if (uVar21 != 0) {
          if (0x18 < uVar21) {
            return 0;
          }
          if (uVar22 < uVar21) {
            uVar19 = uVar22;
            if (uVar8 < local_34) {
              uVar8 = local_34;
            }
            do {
              uVar22 = uVar19;
              if (uVar8 == local_34) break;
              param_1[2] = local_34 + 1;
              uVar18 = uVar19 - 0x20;
              bVar1 = *(byte *)(iVar7 + local_34);
              uVar22 = uVar19 + 8;
              param_1[5] = uVar22;
              uVar15 = (uint)bVar1 << (uVar19 & 0xff);
              if (-1 < (int)uVar18) {
                uVar15 = 0;
              }
              uVar10 = uVar15 | uVar10;
              *puVar6 = uVar10;
              uVar19 = (uint)(bVar1 >> (0x20 - uVar19 & 0xff));
              if (-1 < (int)uVar18) {
                uVar19 = (uint)bVar1 << (uVar18 & 0xff);
              }
              uVar20 = uVar19 | uVar20;
              param_1[4] = uVar20;
              local_34 = local_34 + 1;
              uVar19 = uVar22;
            } while (uVar22 < uVar21);
          }
          if (uVar22 < uVar21) {
            return 0;
          }
          param_1[5] = uVar22 - uVar21;
          uVar8 = uVar20 >> (uVar21 & 0xff);
          uVar19 = uVar21 - 0x20;
          if (-1 < (int)uVar19) {
            uVar8 = 0;
          }
          param_1[4] = uVar8;
          uVar8 = uVar10 >> (uVar21 & 0xff) | uVar20 << (0x20 - uVar21 & 0xff);
          if (-1 < (int)uVar19) {
            uVar8 = uVar20 >> (uVar19 & 0xff);
          }
          *puVar6 = uVar8;
          uVar21 = -1 << (uVar21 & 0xff);
          if (-1 < (int)uVar19) {
            uVar21 = 0;
          }
          uVar23 = uVar23 + (uVar10 & ~uVar21);
        }
        uVar21 = 0;
        if (uVar23 == 0) {
          return 0;
        }
        uVar20 = param_4[1];
        bVar25 = uVar20 <= uVar23;
        bVar24 = uVar23 == uVar20;
        if (!bVar25 || bVar24) {
          bVar25 = param_5 - uVar20 <= local_40;
          bVar24 = local_40 == param_5 - uVar20;
        }
        if (bVar25 && !bVar24) {
          return 0;
        }
        if (local_40 != 0) {
          do {
            puVar4 = (undefined8 *)*param_4;
            uVar8 = uVar20;
            puVar3 = puVar4;
            if (uVar20 == param_4[2]) {
              uVar19 = uVar20 << 1;
              if (uVar20 == 0) {
                uVar19 = 4;
              }
              if (uVar20 < uVar19) {
                puVar3 = recovered_100082fc(uVar19);
                uVar8 = param_4[1];
                puVar5 = (undefined8 *)*param_4;
                if (uVar8 != 0) {
                  bVar24 = uVar8 == 0x10;
                  uVar22 = 0;
                  uVar10 = extraout_r2_00;
                  if (0xf < uVar8) {
                    uVar10 = (int)puVar3 - (int)puVar5;
                    bVar24 = uVar10 == 0xf;
                  }
                  if ((0xf < uVar8 && 0xe < uVar10) && !bVar24) {
                    uVar22 = uVar8 & 0xfffffff0;
                    puVar12 = puVar3;
                    uVar10 = uVar22;
                    puVar16 = puVar5;
                    do {
                      uVar26 = *puVar16;
                      uVar27 = puVar16[1];
                      puVar16 = puVar16 + 2;
                      uVar10 = uVar10 - 0x10;
                      *puVar12 = uVar26;
                      puVar12[1] = uVar27;
                      puVar12 = puVar12 + 2;
                    } while (uVar10 != 0);
                    if (uVar8 == uVar22) goto LAB_1001613c;
                  }
                  iVar13 = uVar8 - uVar22;
                  puVar14 = (undefined1 *)((int)puVar3 + uVar22);
                  puVar17 = (undefined1 *)((int)puVar5 + uVar22);
                  do {
                    iVar13 = iVar13 + -1;
                    *puVar14 = *puVar17;
                    puVar14 = puVar14 + 1;
                    puVar17 = puVar17 + 1;
                  } while (iVar13 != 0);
                }
LAB_1001613c:
                recovered_10008354(puVar5);
                uVar8 = param_4[1];
                param_4[2] = uVar19;
                *param_4 = (int)puVar3;
              }
            }
            uVar21 = uVar21 + 1;
            *(undefined1 *)((int)puVar3 + uVar8) = *(undefined1 *)((int)puVar4 + (uVar20 - uVar23));
            uVar20 = param_4[1] + 1;
            param_4[1] = uVar20;
          } while (uVar21 != local_40);
        }
      }
    } while (*(char *)(param_2 + 0x50) != '\0');
  }
  return 0;
}

#undef DAT_10017e00
#undef DAT_10017e78
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001624c
 */

int recovered_1001624c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x44) = 0;
  recovered_10008354(*(void **)(param_1 + 0x40));
  return param_1;
}


static const unsigned char pf_literal_10016270_DAT_10016484[] __attribute__((aligned(16)))={0xf0,0x19,0x00,0x00};
#undef DAT_10016484
#define DAT_10016484 (*(int *)((uintptr_t)pf_literal_10016270_DAT_10016484))
static const unsigned char pf_literal_10016270_DAT_10016488[] __attribute__((aligned(16)))={0x3c,0x01,0x00,0x00};
#undef DAT_10016488
#define DAT_10016488 (*(int *)((uintptr_t)pf_literal_10016270_DAT_10016488))
#undef DAT_100186fc
#define DAT_100186fc (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd54U)))
#undef DAT_10018704
#define DAT_10018704 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd5cU)))
#undef DAT_1001870c
#define DAT_1001870c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd64U)))
#undef DAT_10018714
#define DAT_10018714 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6cU)))
#undef DAT_1001871c
#define DAT_1001871c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_10018724
#define DAT_10018724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_1001872c
#define DAT_1001872c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd84U)))
#undef DAT_10018734
#define DAT_10018734 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8cU)))
#undef DAT_1001873c
#define DAT_1001873c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd94U)))
#undef DAT_10018744
#define DAT_10018744 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9cU)))
#undef DAT_1001874c
#define DAT_1001874c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xda4U)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_a4 (*(void * *)(pf_stack_frame + 28))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(void * *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016270
 */

void recovered_10016270(void)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;
  uint128 auVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *pvVar13;
  undefined4 *puVar14;
  int iVar15;

  pvVar13 = recovered_100082fc(0x480);
  iVar15 = 0;
  local_98 = pvVar13;
  recovered_10008354((void *)0x0);
  local_7c = DAT_1001c00c;
  local_9c = 0x120;
  local_78 = ((uintptr_t)pf_module_state+0x320U);
  local_a4 = local_98;
  local_70 = DAT_10016488 + 0x100162ec;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100089f8(&uStack_94);
  PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar1, 0) = 0x800000008;
  auVar1 = auVar1 << 0x40 | auVar1;
  do {
    puVar14 = (undefined4 *)((int)local_98 + iVar15);
    iVar15 = iVar15 + 0x10;
    *puVar14 = PF_PART4(auVar1, 0);
    puVar14[1] = PF_PART4(auVar1, 4);
    puVar14[2] = PF_PART4(auVar1, 8);
    puVar14[3] = PF_PART4(auVar1, 12);
  } while (iVar15 != 0x480);
  PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar2, 0) = 0x900000009;
  auVar2 = auVar2 << 0x40 | auVar2;
  uVar5 = PF_PART4(auVar2, 0);
  uVar6 = PF_PART4(auVar2, 4);
  uVar7 = PF_PART4(auVar2, 8);
  uVar8 = PF_PART4(auVar2, 12);
  PF_PART8(auVar3, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar3, 0) = 0x700000007;
  auVar3 = auVar3 << 0x40 | auVar3;
  uVar9 = PF_PART4(auVar3, 0);
  uVar10 = PF_PART4(auVar3, 4);
  uVar11 = PF_PART4(auVar3, 8);
  uVar12 = PF_PART4(auVar3, 12);
  PF_PART8(auVar4, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar4, 0) = 0x800000008;
  auVar4 = auVar4 << 0x40 | auVar4;
  *(undefined4 *)((int)pvVar13 + 0x240) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x244) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x248) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x24c) = uVar8;
  PF_PART4(DAT_100186fc, 4) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  PF_PART4(DAT_10018704, 0) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  PF_PART4(DAT_10018704, 4) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)((int)pvVar13 + 0x250) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x254) = uVar6;
  *(undefined4 *)((int)pvVar13 + 600) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x25c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x260) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x264) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x268) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x26c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x270) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x274) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x278) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x27c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x280) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x284) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x288) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x28c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x290) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x294) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x298) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x29c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x2a0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x2a4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x2a8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x2ac) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x2b0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x2b4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x2b8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 700) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x2c0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x2c4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x2c8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x2cc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x2d0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x2d4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x2d8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x2dc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x2e0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x2e4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x2e8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x2ec) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x2f0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x2f4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x2f8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x2fc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x300) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x304) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x308) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x30c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x310) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x314) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x318) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x31c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 800) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x324) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x328) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x32c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x330) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x334) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x338) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x33c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x340) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x344) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x348) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x34c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x350) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x354) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x358) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x35c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x360) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x364) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x368) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x36c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x370) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x374) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x378) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x37c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x380) = uVar5;
  *(undefined4 *)((int)pvVar13 + 900) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x388) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x38c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x390) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x394) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x398) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x39c) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x3a0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x3a4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x3a8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x3ac) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x3b0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x3b4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x3b8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x3bc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x3c0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x3c4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x3c8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x3cc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x3d0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x3d4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x3d8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x3dc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x3e0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x3e4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 1000) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x3ec) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x3f0) = uVar5;
  *(undefined4 *)((int)pvVar13 + 0x3f4) = uVar6;
  *(undefined4 *)((int)pvVar13 + 0x3f8) = uVar7;
  *(undefined4 *)((int)pvVar13 + 0x3fc) = uVar8;
  *(undefined4 *)((int)pvVar13 + 0x400) = uVar9;
  *(undefined4 *)((int)pvVar13 + 0x404) = uVar10;
  *(undefined4 *)((int)pvVar13 + 0x408) = uVar11;
  *(undefined4 *)((int)pvVar13 + 0x40c) = uVar12;
  *(undefined4 *)((int)pvVar13 + 0x410) = uVar9;
  *(undefined4 *)((int)pvVar13 + 0x414) = uVar10;
  *(undefined4 *)((int)pvVar13 + 0x418) = uVar11;
  *(undefined4 *)((int)pvVar13 + 0x41c) = uVar12;
  *(undefined4 *)((int)pvVar13 + 0x420) = uVar9;
  *(undefined4 *)((int)pvVar13 + 0x424) = uVar10;
  *(undefined4 *)((int)pvVar13 + 0x428) = uVar11;
  *(undefined4 *)((int)pvVar13 + 0x42c) = uVar12;
  *(undefined4 *)((int)pvVar13 + 0x430) = uVar9;
  *(undefined4 *)((int)pvVar13 + 0x434) = uVar10;
  *(undefined4 *)((int)pvVar13 + 0x438) = uVar11;
  *(undefined4 *)((int)pvVar13 + 0x43c) = uVar12;
  *(undefined4 *)((int)pvVar13 + 0x440) = uVar9;
  *(undefined4 *)((int)pvVar13 + 0x444) = uVar10;
  *(undefined4 *)((int)pvVar13 + 0x448) = uVar11;
  *(undefined4 *)((int)pvVar13 + 0x44c) = uVar12;
  *(undefined4 *)((int)pvVar13 + 0x450) = uVar9;
  *(undefined4 *)((int)pvVar13 + 0x454) = uVar10;
  *(undefined4 *)((int)pvVar13 + 0x458) = uVar11;
  *(undefined4 *)((int)pvVar13 + 0x45c) = uVar12;
  *(undefined4 *)((int)pvVar13 + 0x460) = PF_PART4(auVar4, 0);
  *(undefined4 *)((int)pvVar13 + 0x464) = PF_PART4(auVar4, 4);
  *(undefined4 *)((int)pvVar13 + 0x468) = PF_PART4(auVar4, 8);
  *(undefined4 *)((int)pvVar13 + 0x46c) = PF_PART4(auVar4, 12);
  *(undefined4 *)((int)pvVar13 + 0x470) = PF_PART4(auVar4, 0);
  *(undefined4 *)((int)pvVar13 + 0x474) = PF_PART4(auVar4, 4);
  *(undefined4 *)((int)pvVar13 + 0x478) = PF_PART4(auVar4, 8);
  *(undefined4 *)((int)pvVar13 + 0x47c) = PF_PART4(auVar4, 12);
  local_a0 = 0x120;
  PF_PART4(DAT_100186fc, 0) = 0;
  PF_PART4(DAT_1001870c, 0) = 0;
  PF_PART4(DAT_1001871c, 0) = 0;
  PF_PART4(DAT_1001872c, 0) = 0;
  PF_PART4(DAT_1001873c, 0) = 0;
  DAT_1001874c = 0;
  local_90 = 1;
  PF_PART4(DAT_1001870c, 4) = PF_PART4(DAT_100186fc, 4);
  PF_PART4(DAT_10018714, 0) = (undefined4)DAT_10018704;
  PF_PART4(DAT_10018714, 4) = PF_PART4(DAT_10018704, 4);
  PF_PART4(DAT_1001871c, 4) = PF_PART4(DAT_100186fc, 4);
  PF_PART4(DAT_10018724, 0) = (undefined4)DAT_10018704;
  PF_PART4(DAT_10018724, 4) = PF_PART4(DAT_10018704, 4);
  PF_PART4(DAT_1001872c, 4) = PF_PART4(DAT_100186fc, 4);
  PF_PART4(DAT_10018734, 0) = (undefined4)DAT_10018704;
  PF_PART4(DAT_10018734, 4) = PF_PART4(DAT_10018704, 4);
  PF_PART4(DAT_1001873c, 4) = PF_PART4(DAT_100186fc, 4);
  PF_PART4(DAT_10018744, 0) = (undefined4)DAT_10018704;
  PF_PART4(DAT_10018744, 4) = PF_PART4(DAT_10018704, 4);
  recovered_1001648c((int *)&local_a4,(int *)&DAT_100186fc,0);
  recovered_10008354(local_98);
  recovered_10008a1c(&uStack_94);
  return;
}

#undef DAT_10016484
#undef DAT_10016488
#undef DAT_100186fc
#undef DAT_10018704
#undef DAT_1001870c
#undef DAT_10018714
#undef DAT_1001871c
#undef DAT_10018724
#undef DAT_1001872c
#undef DAT_10018734
#undef DAT_1001873c
#undef DAT_10018744
#undef DAT_1001874c
#undef DAT_1001c00c
#undef auStack_b0
#undef uStack_94
#undef auStack_68
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

#define local_50 (*(int *)(pf_stack_frame + 32))
#define local_4c (*(int *)(pf_stack_frame + 36))
#define local_48 (*(int *)(pf_stack_frame + 40))
#define local_44 (*(int *)(pf_stack_frame + 44))
#define local_40 (*(int *)(pf_stack_frame + 48))
#define local_3c (*(int *)(pf_stack_frame + 52))
#define local_38 (*(int *)(pf_stack_frame + 56))
#define local_34 (*(int *)(pf_stack_frame + 60))
#define local_30 (*(int *)(pf_stack_frame + 64))
#define local_2c (*(int *)(pf_stack_frame + 68))
#define local_28 (*(int *)(pf_stack_frame + 72))
#define local_24 (*(int *)(pf_stack_frame + 76))
#define aiStack_60 (*(int (*)[24])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001648c
 */

undefined4 recovered_1001648c(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *pointer;
  int iVar12;
  uint *puVar13;
  uint extraout_r1 = 0;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  uint extraout_r3 = 0;
  uint uVar20;
  undefined4 *puVar21;
  undefined2 *puVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int extraout_r12 = 0;
  int iVar31;
  uint uVar32;
  bool bVar33;

  iVar5 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  iVar18 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  iVar19 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  uVar28 = 0;
  *param_2 = 0;
  param_2[1] = iVar5;
  param_2[2] = iVar18;
  param_2[3] = iVar19;
  param_2[4] = 0;
  param_2[5] = iVar5;
  param_2[6] = iVar18;
  param_2[7] = iVar19;
  param_2[8] = 0;
  param_2[9] = iVar5;
  param_2[10] = iVar18;
  param_2[0xb] = iVar19;
  param_2[0xc] = 0;
  param_2[0xd] = iVar5;
  param_2[0xe] = iVar18;
  param_2[0xf] = iVar19;
  piVar23 = param_2 + 0x10;
  param_2[0x11] = 0;
  recovered_10008354((void *)*piVar23);
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  *piVar23 = 0;
  recovered_10008354((void *)0x0);
  iVar5 = param_1[1];
  uVar20 = extraout_r3;
  if (iVar5 != 0) {
    puVar13 = (uint *)*param_1;
    iVar18 = iVar5 << 2;
    do {
      uVar20 = *puVar13;
      if (0xf < uVar20) {
        return 0;
      }
      puVar13 = puVar13 + 1;
      param_2[uVar20] = param_2[uVar20] + 1;
      uVar28 = param_2[0x13];
      if (uVar20 < uVar28) {
        uVar20 = uVar28;
      }
      iVar18 = iVar18 + -4;
      param_2[0x13] = uVar20;
    } while (iVar18 != 0);
  }
  if (*param_2 == iVar5) goto LAB_10016540;
  iVar5 = param_2[1];
  if (2 < iVar5) {
    return 0;
  }
  iVar18 = param_2[2] + iVar5 * 2;
  iVar19 = 4 - iVar18;
  if (iVar19 >= 0) {
    iVar18 = param_2[3];
    uVar20 = iVar19 * 2 - iVar18;
  }
  if (iVar19 < 0 || (int)uVar20 < 0) {
    return 0;
  }
  iVar19 = uVar20 * 2 - param_2[4];
  bVar33 = iVar19 < 0;
  if (!bVar33) {
    uVar28 = param_2[5];
    iVar19 = iVar19 * 2 - uVar28;
  }
  if (bVar33 || iVar19 < 0) {
    return 0;
  }
  iVar19 = iVar19 * 2 - param_2[6];
  bVar33 = iVar19 < 0;
  iVar31 = extraout_r12;
  if (!bVar33) {
    iVar31 = param_2[7];
    iVar19 = iVar19 * 2 - iVar31;
  }
  if (bVar33 || iVar19 < 0) {
    return 0;
  }
  iVar19 = iVar19 * 2 - param_2[8];
  bVar33 = iVar19 < 0;
  if (!bVar33) {
    piVar23 = (int *)param_2[9];
    iVar19 = iVar19 * 2 - (int)piVar23;
  }
  if (bVar33 || iVar19 < 0) {
    return 0;
  }
  iVar24 = param_2[10];
  iVar19 = iVar19 * 2 - iVar24;
  bVar33 = iVar19 < 0;
  iVar25 = iVar24;
  if (!bVar33) {
    iVar25 = param_2[0xb];
    iVar19 = iVar19 * 2 - iVar25;
  }
  if (bVar33 || iVar19 < 0) {
    return 0;
  }
  iVar26 = param_2[0xc];
  iVar19 = iVar19 * 2 - iVar26;
  bVar33 = iVar19 < 0;
  iVar27 = iVar26;
  if (!bVar33) {
    iVar27 = param_2[0xd];
    iVar19 = iVar19 * 2 - iVar27;
  }
  if (bVar33 || iVar19 < 0) {
    return 0;
  }
  iVar19 = iVar19 * 2 - param_2[0xe];
  if (iVar19 < 0) {
    return 0;
  }
  if (iVar19 * 2 < param_2[0xf]) {
    return 0;
  }
  iVar19 = param_2[2] + iVar5;
  iVar18 = iVar18 + iVar19;
  iVar6 = param_2[4] + iVar18;
  iVar7 = uVar28 + iVar6;
  iVar8 = param_2[6] + iVar7;
  iVar31 = iVar31 + iVar8;
  iVar9 = param_2[8] + iVar31;
  iVar10 = (int)piVar23 + iVar9;
  iVar24 = iVar24 + iVar10;
  iVar25 = iVar25 + iVar24;
  iVar26 = iVar26 + iVar25;
  iVar27 = iVar27 + iVar26;
  iVar29 = param_2[0xe] + iVar27;
  uVar28 = param_2[0xf] + iVar29;
  uVar20 = 0;
  param_2[0x11] = 0;
  if ((uint)param_2[0x12] < uVar28) {
    puVar11 = recovered_100082fc(uVar28 * 2);
    uVar20 = param_2[0x11];
    pointer = (undefined4 *)param_2[0x10];
    if (uVar20 != 0) {
      bVar33 = uVar20 == 8;
      uVar30 = 0;
      uVar14 = extraout_r1;
      if (7 < uVar20) {
        uVar14 = (int)puVar11 - (int)pointer;
        bVar33 = uVar14 == 0xf;
      }
      if ((7 < uVar20 && 0xe < uVar14) && !bVar33) {
        uVar30 = uVar20 & 0xfffffff8;
        puVar15 = puVar11;
        uVar14 = uVar30;
        puVar21 = pointer;
        do {
          uVar1 = *puVar21;
          uVar2 = puVar21[1];
          uVar3 = puVar21[2];
          uVar4 = puVar21[3];
          puVar21 = puVar21 + 4;
          uVar14 = uVar14 - 8;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar15[2] = uVar3;
          puVar15[3] = uVar4;
          puVar15 = puVar15 + 4;
        } while (uVar14 != 0);
        if (uVar20 == uVar30) goto LAB_10016744;
      }
      iVar16 = uVar20 - uVar30;
      puVar17 = (undefined2 *)((int)pointer + uVar30 * 2);
      puVar22 = (undefined2 *)((int)puVar11 + uVar30 * 2);
      do {
        iVar16 = iVar16 + -1;
        *puVar22 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar22 = puVar22 + 1;
      } while (iVar16 != 0);
    }
LAB_10016744:
    recovered_10008354(pointer);
    uVar20 = param_2[0x11];
    param_2[0x12] = uVar28;
    param_2[0x10] = (int)puVar11;
  }
  if (uVar20 < uVar28) {
    iVar16 = param_2[0x10];
    uVar14 = uVar28 - uVar20;
    if (uVar14 < 8) {
LAB_10016798:
      iVar12 = uVar28 - uVar20;
      puVar17 = (undefined2 *)(iVar16 + uVar20 * 2);
      do {
        *puVar17 = 0;
        iVar12 = iVar12 + -1;
        puVar17 = puVar17 + 1;
      } while (iVar12 != 0);
    }
    else {
      uVar32 = uVar14 & 0xfffffff8;
      puVar11 = (undefined4 *)(iVar16 + uVar20 * 2);
      uVar20 = uVar20 + uVar32;
      uVar30 = uVar32;
      do {
        *puVar11 = 0;
        puVar11[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar11[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar11[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar11 = puVar11 + 4;
        uVar30 = uVar30 - 8;
      } while (uVar30 != 0);
      if (uVar14 != uVar32) goto LAB_10016798;
    }
    param_2[0x11] = uVar28;
  }
  iVar16 = 0;
  local_28 = iVar27;
  local_2c = iVar26;
  local_30 = iVar25;
  local_34 = iVar24;
  local_38 = iVar10;
  local_3c = iVar9;
  local_40 = iVar31;
  local_44 = iVar8;
  local_48 = iVar7;
  local_4c = iVar6;
  local_50 = iVar18;
  aiStack_60[3] = iVar19;
  iVar18 = param_1[1];
  local_24 = iVar29;
  aiStack_60[2] = iVar5;
  aiStack_60[1] = 0;
  if (iVar18 != 0) {
    iVar19 = param_2[0x10];
    iVar5 = *param_1;
    do {
      iVar31 = *(int *)(iVar5 + iVar16 * 4);
      if (iVar31 != 0) {
        iVar25 = aiStack_60[iVar31];
        aiStack_60[iVar31] = iVar25 + 1;
        *(short *)(iVar19 + iVar25 * 2) = (short)iVar16;
      }
      iVar16 = iVar16 + 1;
    } while (iVar18 != iVar16);
  }
  param_3 = 1;
LAB_10016540:
  *(char *)(param_2 + 0x14) = (char)param_3;
  return param_3;
}

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
#undef aiStack_60

static const unsigned char pf_literal_1001688c_DAT_10016a0c[] __attribute__((aligned(16)))={0x7c,0x13,0x00,0x00};
#undef DAT_10016a0c
#define DAT_10016a0c (*(int *)((uintptr_t)pf_literal_1001688c_DAT_10016a0c))
static const unsigned char pf_literal_1001688c_DAT_10016a10[] __attribute__((aligned(16)))={0x4c,0x00,0x00,0x00};
#undef DAT_10016a10
#define DAT_10016a10 (*(int *)((uintptr_t)pf_literal_1001688c_DAT_10016a10))
#undef DAT_100182a0
#define DAT_100182a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8f8U)))
#undef DAT_100182a8
#define DAT_100182a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x900U)))
#undef DAT_100182b0
#define DAT_100182b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x908U)))
#undef DAT_100182b8
#define DAT_100182b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x910U)))
#undef DAT_100182c0
#define DAT_100182c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x918U)))
#undef DAT_100182c8
#define DAT_100182c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x920U)))
#undef DAT_100182d0
#define DAT_100182d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x928U)))
#undef DAT_100182d8
#define DAT_100182d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x930U)))
#undef DAT_100182e0
#define DAT_100182e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x938U)))
#undef DAT_100182e8
#define DAT_100182e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x940U)))
#undef DAT_100182f0
#define DAT_100182f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x948U)))
#undef DAT_1001c00c
#define DAT_1001c00c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4664U)))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_a4 (*(undefined4 * *)(pf_stack_frame + 28))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001688c
 */

void recovered_1001688c(void)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;

  puVar6 = recovered_100082fc(0x80);
  local_98 = puVar6;
  recovered_10008354((void *)0x0);
  PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar1, 0) = 0x500000005;
  auVar1 = auVar1 << 0x40 | auVar1;
  uVar2 = PF_PART4(auVar1, 0);
  uVar3 = PF_PART4(auVar1, 4);
  uVar4 = PF_PART4(auVar1, 8);
  uVar5 = PF_PART4(auVar1, 12);
  local_a4 = local_98;
  *local_98 = uVar2;
  local_98[1] = uVar3;
  local_98[2] = uVar4;
  local_98[3] = uVar5;
  PF_PART4(DAT_100182a0, 4) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  PF_PART4(DAT_100182a8, 0) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  PF_PART4(DAT_100182a8, 4) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  puVar6[4] = uVar2;
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  puVar6[7] = uVar5;
  puVar6[8] = uVar2;
  puVar6[9] = uVar3;
  puVar6[10] = uVar4;
  puVar6[0xb] = uVar5;
  puVar6[0xc] = uVar2;
  puVar6[0xd] = uVar3;
  puVar6[0xe] = uVar4;
  puVar6[0xf] = uVar5;
  puVar6[0x10] = uVar2;
  puVar6[0x11] = uVar3;
  puVar6[0x12] = uVar4;
  puVar6[0x13] = uVar5;
  puVar6[0x14] = uVar2;
  puVar6[0x15] = uVar3;
  puVar6[0x16] = uVar4;
  puVar6[0x17] = uVar5;
  puVar6[0x18] = uVar2;
  puVar6[0x19] = uVar3;
  puVar6[0x1a] = uVar4;
  puVar6[0x1b] = uVar5;
  puVar6[0x1c] = uVar2;
  puVar6[0x1d] = uVar3;
  puVar6[0x1e] = uVar4;
  puVar6[0x1f] = uVar5;
  PF_PART4(DAT_100182a0, 0) = 0;
  PF_PART4(DAT_100182b0, 0) = 0;
  PF_PART4(DAT_100182c0, 0) = 0;
  PF_PART4(DAT_100182d0, 0) = 0;
  PF_PART4(DAT_100182e0, 0) = 0;
  local_9c = 0x20;
  DAT_100182f0 = 0;
  local_a0 = 0x20;
  local_7c = DAT_1001c00c;
  local_78 = ((uintptr_t)pf_module_state+0x328U);
  local_70 = DAT_10016a10 + 0x10016964;
  local_90 = 1;
  PF_PART4(DAT_100182b0, 4) = PF_PART4(DAT_100182a0, 4);
  PF_PART4(DAT_100182b8, 0) = (undefined4)DAT_100182a8;
  PF_PART4(DAT_100182b8, 4) = PF_PART4(DAT_100182a8, 4);
  PF_PART4(DAT_100182c0, 4) = PF_PART4(DAT_100182a0, 4);
  PF_PART4(DAT_100182c8, 0) = (undefined4)DAT_100182a8;
  PF_PART4(DAT_100182c8, 4) = PF_PART4(DAT_100182a8, 4);
  PF_PART4(DAT_100182d0, 4) = PF_PART4(DAT_100182a0, 4);
  PF_PART4(DAT_100182d8, 0) = (undefined4)DAT_100182a8;
  PF_PART4(DAT_100182d8, 4) = PF_PART4(DAT_100182a8, 4);
  PF_PART4(DAT_100182e0, 4) = PF_PART4(DAT_100182a0, 4);
  PF_PART4(DAT_100182e8, 0) = (undefined4)DAT_100182a8;
  PF_PART4(DAT_100182e8, 4) = PF_PART4(DAT_100182a8, 4);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100089f8(&uStack_94);
  recovered_1001648c((int *)&local_a4,(int *)&DAT_100182a0,0);
  recovered_10008354(local_98);
  recovered_10008a1c(&uStack_94);
  return;
}

#undef DAT_10016a0c
#undef DAT_10016a10
#undef DAT_100182a0
#undef DAT_100182a8
#undef DAT_100182b0
#undef DAT_100182b8
#undef DAT_100182c0
#undef DAT_100182c8
#undef DAT_100182d0
#undef DAT_100182d8
#undef DAT_100182e0
#undef DAT_100182e8
#undef DAT_100182f0
#undef DAT_1001c00c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_b0
#undef uStack_94
#undef auStack_68
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016a14
 */

void * recovered_10016a14(undefined4 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint extraout_r3 = 0;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;

  puVar14 = (undefined8 *)*param_1;
  if (puVar14 == (undefined8 *)0x0) {
    uVar12 = param_1[1];
  }
  else {
    uVar12 = param_2 - (int)puVar14 >> 2;
  }
  if (param_3 == param_4) goto LAB_10016ba4;
  uVar17 = param_1[1];
  uVar10 = (int)param_4 + (-4 - (int)param_3);
  uVar1 = param_1[2];
  uVar5 = (uVar10 >> 2) + 1;
  if (uVar1 < uVar17 + uVar5) {
    if (uVar1 == 0) {
      uVar1 = 4;
    }
    do {
      uVar13 = uVar1;
      uVar1 = uVar13 << 1;
    } while (uVar13 < uVar17 + uVar5);
    puVar14 = recovered_100082fc(uVar13 << 2);
    uVar1 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (uVar1 != 0) {
      bVar18 = uVar1 == 4;
      uVar8 = 0;
      uVar17 = extraout_r3;
      if (3 < uVar1) {
        uVar17 = (int)puVar14 - (int)puVar2;
        bVar18 = uVar17 == 0xf;
      }
      if ((3 < uVar1 && 0xe < uVar17) && !bVar18) {
        uVar8 = uVar1 & 0xfffffffc;
        uVar17 = uVar8;
        puVar3 = puVar2;
        puVar11 = puVar14;
        do {
          uVar19 = *puVar3;
          uVar20 = puVar3[1];
          puVar3 = puVar3 + 2;
          uVar17 = uVar17 - 4;
          *puVar11 = uVar19;
          puVar11[1] = uVar20;
          puVar11 = puVar11 + 2;
        } while (uVar17 != 0);
        if (uVar1 == uVar8) goto LAB_10016b04;
      }
      iVar6 = uVar1 - uVar8;
      puVar7 = (undefined4 *)((int)puVar14 + uVar8 * 4);
      puVar9 = (undefined4 *)((int)puVar2 + uVar8 * 4);
      do {
        iVar6 = iVar6 + -1;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 != 0);
    }
LAB_10016b04:
    recovered_10008354(puVar2);
    uVar17 = param_1[1];
    param_1[2] = uVar13;
    *param_1 = puVar14;
  }
  if (uVar12 < uVar17) {
    uVar13 = uVar17 - uVar12;
    uVar1 = uVar17;
    if (0x33 < uVar13) {
      uVar16 = uVar17 + ~uVar12;
      uVar15 = uVar10 & 0xfffffffc;
      uVar8 = (int)puVar14 + uVar15 + uVar17 * 4;
      if ((((uVar8 + uVar16 * -4 <= uVar8) &&
           (uVar8 = (int)puVar14 + uVar17 * 4 + -4, uVar8 + uVar16 * -4 <= uVar8)) &&
          (uVar16 < 0x40000000)) && (uVar10 < 0xfffffff0)) {
        uVar16 = uVar13 & 0xfffffffc;
        uVar1 = uVar17 - uVar16;
        uVar8 = uVar16;
        puVar2 = (undefined8 *)(uVar17 * 4 + (int)puVar14);
        do {
          puVar3 = puVar2 + -2;
          uVar19 = puVar2[-1];
          uVar8 = uVar8 - 4;
          *(undefined8 *)((int)puVar3 + uVar15 + 4) = *puVar3;
          *(undefined8 *)((int)puVar3 + uVar15 + 0xc) = uVar19;
          puVar2 = puVar3;
        } while (uVar8 != 0);
        if (uVar13 == uVar16) goto LAB_10016b58;
      }
    }
    do {
      *(undefined4 *)((int)puVar14 + uVar1 * 4 + (uVar10 & 0xfffffffc)) =
           *(undefined4 *)((int)puVar14 + uVar1 * 4 + -4);
      uVar1 = uVar1 - 1;
    } while (uVar12 < uVar1);
  }
LAB_10016b58:
  if ((uVar10 < 0x1c) || ((int)puVar14 + (uVar12 * 4 - (int)param_3) < 0x10)) {
    puVar2 = param_3;
    uVar10 = uVar12;
LAB_10016b88:
    puVar7 = (undefined4 *)((int)puVar14 + uVar10 * 4);
    do {
      puVar3 = (undefined8 *)((int)puVar2 + 4);
      *puVar7 = *(undefined4 *)puVar2;
      puVar2 = puVar3;
      puVar7 = puVar7 + 1;
    } while (puVar3 != param_4);
  }
  else {
    uVar13 = uVar5 & 0xfffffffc;
    puVar3 = (undefined8 *)((int)puVar14 + uVar12 * 4);
    uVar10 = uVar12 + uVar13;
    puVar2 = (undefined8 *)((int)param_3 + uVar13 * 4);
    uVar1 = uVar13;
    do {
      uVar19 = *param_3;
      uVar20 = param_3[1];
      param_3 = param_3 + 2;
      uVar1 = uVar1 - 4;
      *puVar3 = uVar19;
      puVar3[1] = uVar20;
      puVar3 = puVar3 + 2;
    } while (uVar1 != 0);
    if (uVar5 != uVar13) goto LAB_10016b88;
  }
  param_1[1] = uVar17 + uVar5;
LAB_10016ba4:
  pvVar4 = (void *)((int)puVar14 + uVar12 * 4);
  if (puVar14 == (undefined8 *)0x0) {
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}


static const unsigned char pf_literal_10016c90_DAT_10016db0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00};
#undef DAT_10016db0
#define DAT_10016db0 (*(uint64_t *)((uintptr_t)pf_literal_10016c90_DAT_10016db0))
static const unsigned char pf_literal_10016c90_DAT_10016db8[] __attribute__((aligned(16)))={0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00};
#undef DAT_10016db8
#define DAT_10016db8 (*(uint64_t *)((uintptr_t)pf_literal_10016c90_DAT_10016db8))
static const unsigned char pf_literal_10016c90_DAT_10016dc0[] __attribute__((aligned(16)))={0x20,0x83,0xb8,0xed,0x20,0x83,0xb8,0xed};
#undef DAT_10016dc0
#define DAT_10016dc0 (*(uint64_t *)((uintptr_t)pf_literal_10016c90_DAT_10016dc0))
static const unsigned char pf_literal_10016c90_DAT_10016dc8[] __attribute__((aligned(16)))={0x20,0x83,0xb8,0xed,0x20,0x83,0xb8,0xed};
#undef DAT_10016dc8
#define DAT_10016dc8 (*(uint64_t *)((uintptr_t)pf_literal_10016c90_DAT_10016dc8))
#undef DAT_100182f4
#define DAT_100182f4 (*(char *)(((uintptr_t)pf_module_state + 0x94cU)))
#undef DAT_100182f8
#define DAT_100182f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x950U)))
#undef DAT_10018300
#define DAT_10018300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016c90
 */

uint recovered_10016c90(uint param_1,byte *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;

  if (DAT_100182f4 == '\0') {
    PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
    PF_PART8(auVar2, 0) = 0x100000001;
    auVar2 = (auVar2 << 64 | auVar2);
    PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
    PF_PART8(auVar1, 0) = 0x400000004;
    PF_PART8(auVar6, 8) = DAT_10016db8;
    PF_PART8(auVar6, 0) = DAT_10016db0;
    iVar4 = 0;
    do {
      auVar7 = VectorShiftRight(auVar6,1,0x20,1);
      PF_PART8(auVar8, 8) = DAT_10016dc8;
      PF_PART8(auVar8, 0) = DAT_10016dc0;
      auVar9 = PFVectorTest(auVar6,auVar2,4,0x10);
      auVar6 = VectorAdd(auVar6,(auVar1 << 64 | auVar1),4);
      iVar5 = iVar4 + 0x10;
      auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar7 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      auVar9 = VectorShiftRight(auVar7,1,0x20,1);
      auVar7 = PFVectorTest(auVar7,auVar2,4,0x10);
      auVar7 = VectorBitwiseSelect(auVar7,auVar9 ^ auVar8,auVar9);
      *(longlong *)((int)&DAT_100182f8 + iVar4) = PF_PART8(auVar7, 0);
      *(longlong *)((int)&DAT_10018300 + iVar4) = PF_PART8(auVar7, 8);
      iVar4 = iVar5;
    } while (iVar5 != 0x400);
    DAT_100182f4 = '\x01';
  }
  if (param_3 != 0) {
    uVar3 = ~param_1;
    do {
      param_3 = param_3 + -1;
      uVar3 = *(uint *)((int)&DAT_100182f8 + ((*param_2 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    param_1 = ~uVar3;
  }
  return param_1;
}

#undef DAT_10016db0
#undef DAT_10016db8
#undef DAT_10016dc0
#undef DAT_10016dc8
#undef DAT_100182f4
#undef DAT_100182f8
#undef DAT_10018300

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016dd0
 */

void recovered_10016dd0(int *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *pointer;
  uint extraout_r1 = 0;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar7 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar7 = 4;
    }
    if (uVar1 < uVar7) {
      pvVar2 = recovered_100082fc(uVar7 * 0x28);
      if (param_1[1] != 0) {
        iVar14 = 0;
        uVar1 = 0;
        do {
          puVar8 = (undefined8 *)((int)pvVar2 + iVar14);
          puVar3 = (undefined8 *)(*param_1 + iVar14);
          uVar15 = puVar3[1];
          uVar16 = *(undefined8 *)((int)puVar3 + 9);
          uVar17 = *(undefined8 *)((int)puVar3 + 0x11);
          *puVar8 = *puVar3;
          puVar8[1] = uVar15;
          *(undefined8 *)((int)puVar8 + 9) = uVar16;
          *(undefined8 *)((int)puVar8 + 0x11) = uVar17;
          uVar12 = *(undefined4 *)((int)puVar3 + 0x24);
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar3 + 4);
          *(undefined4 *)((int)puVar8 + 0x24) = uVar12;
          *(undefined4 *)(puVar3 + 4) = 0;
          *(undefined4 *)((int)puVar3 + 0x24) = 0;
          *(undefined4 *)((int)puVar8 + 0x1c) = *(undefined4 *)((int)puVar3 + 0x1c);
          *(undefined4 *)((int)puVar3 + 0x1c) = 0;
          recovered_10008354((void *)0x0);
          uVar1 = uVar1 + 1;
          iVar14 = iVar14 + 0x28;
        } while (uVar1 < (uint)param_1[1]);
      }
      recovered_10008354((void *)*param_1);
      param_1[2] = uVar7;
      uVar1 = param_1[1];
      *param_1 = (int)pvVar2;
    }
  }
  puVar3 = (undefined8 *)(*param_1 + uVar1 * 0x28);
  uVar15 = param_2[1];
  uVar1 = 0;
  uVar16 = *(undefined8 *)((int)param_2 + 9);
  uVar17 = *(undefined8 *)((int)param_2 + 0x11);
  *puVar3 = *param_2;
  puVar3[1] = uVar15;
  *(undefined8 *)((int)puVar3 + 9) = uVar16;
  *(undefined8 *)((int)puVar3 + 0x11) = uVar17;
  *(undefined4 *)(puVar3 + 4) = 0;
  iVar14 = *(int *)(param_2 + 4);
  *(undefined4 *)((int)puVar3 + 0x24) = 0;
  *(undefined4 *)((int)puVar3 + 0x1c) = 0;
  if (iVar14 == 0) goto LAB_10016fcc;
  puVar8 = recovered_100082fc(iVar14 << 3);
  uVar7 = *(uint *)(puVar3 + 4);
  pointer = *(undefined8 **)((int)puVar3 + 0x1c);
  if (uVar7 != 0) {
    uVar13 = 0;
    uVar4 = extraout_r1;
    if (3 < uVar7) {
      uVar4 = (int)puVar8 - (int)pointer;
    }
    if (3 < uVar7 && 0xf < uVar4) {
      uVar13 = uVar7 & 0xfffffffe;
      puVar6 = puVar8;
      uVar4 = uVar13;
      puVar9 = pointer;
      do {
        uVar15 = *puVar9;
        uVar16 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar4 = uVar4 - 2;
        *puVar6 = uVar15;
        puVar6[1] = uVar16;
        puVar6 = puVar6 + 2;
      } while (uVar4 != 0);
      if (uVar7 == uVar13) goto LAB_10016f74;
    }
    puVar9 = pointer + uVar13;
    iVar5 = uVar7 - uVar13;
    puVar6 = puVar8 + uVar13;
    do {
      uVar12 = *(undefined4 *)puVar9;
      iVar5 = iVar5 + -1;
      puVar10 = (undefined4 *)((int)puVar9 + 4);
      puVar9 = puVar9 + 1;
      *(undefined4 *)((int)puVar6 + 4) = *puVar10;
      *(undefined4 *)puVar6 = uVar12;
      puVar6 = puVar6 + 1;
    } while (iVar5 != 0);
  }
LAB_10016f74:
  recovered_10008354(pointer);
  *(undefined8 **)((int)puVar3 + 0x1c) = puVar8;
  *(int *)((int)puVar3 + 0x24) = iVar14;
  if (*(int *)(param_2 + 4) != 0) {
    iVar14 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      puVar10 = (undefined4 *)(*(int *)((int)param_2 + 0x1c) + iVar14);
      uVar12 = puVar10[1];
      puVar11 = (undefined4 *)(*(int *)((int)puVar3 + 0x1c) + iVar14);
      *puVar11 = *puVar10;
      iVar14 = iVar14 + 8;
      puVar11[1] = uVar12;
      uVar1 = *(uint *)(param_2 + 4);
    } while (uVar7 < uVar1);
  }
LAB_10016fcc:
  iVar14 = param_1[1];
  *(uint *)(puVar3 + 4) = uVar1;
  param_1[1] = iVar14 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017014
 */

void recovered_10017014(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;

  uVar1 = param_1[1];
  if (uVar1 != param_1[2]) goto LAB_100170e0;
  uVar10 = uVar1 << 1;
  if (uVar1 == 0) {
    uVar10 = 4;
  }
  if (uVar10 <= uVar1) goto LAB_100170e0;
  puVar2 = recovered_100082fc(uVar10 << 3);
  uVar1 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar11 = uVar1 == 4;
    uVar9 = 0;
    uVar4 = extraout_r2;
    if (3 < uVar1) {
      uVar4 = (int)puVar2 - (int)pointer;
      bVar11 = uVar4 == 0xf;
    }
    if ((3 < uVar1 && 0xe < uVar4) && !bVar11) {
      uVar9 = uVar1 & 0xfffffffe;
      puVar5 = puVar2;
      uVar4 = uVar9;
      puVar8 = pointer;
      do {
        uVar12 = *puVar8;
        uVar13 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar4 = uVar4 - 2;
        *puVar5 = uVar12;
        puVar5[1] = uVar13;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (uVar1 == uVar9) goto LAB_100170cc;
    }
    puVar8 = pointer + uVar9;
    iVar3 = uVar1 - uVar9;
    puVar5 = puVar2 + uVar9;
    do {
      uVar6 = *(undefined4 *)puVar8;
      iVar3 = iVar3 + -1;
      puVar7 = (undefined4 *)((int)puVar8 + 4);
      puVar8 = puVar8 + 1;
      *(undefined4 *)((int)puVar5 + 4) = *puVar7;
      *(undefined4 *)puVar5 = uVar6;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_100170cc:
  recovered_10008354(pointer);
  uVar1 = param_1[1];
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_100170e0:
  uVar6 = param_2[1];
  puVar7 = (undefined4 *)(*param_1 + uVar1 * 8);
  *puVar7 = *param_2;
  puVar7[1] = uVar6;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017108
 */

void recovered_10017108(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;

  uVar1 = param_1[1];
  if (uVar1 != param_1[2]) goto LAB_100171d4;
  uVar10 = uVar1 << 1;
  if (uVar1 == 0) {
    uVar10 = 4;
  }
  if (uVar10 <= uVar1) goto LAB_100171d4;
  puVar2 = recovered_100082fc(uVar10 << 3);
  uVar1 = param_1[1];
  pointer = (undefined8 *)*param_1;
  if (uVar1 != 0) {
    bVar11 = uVar1 == 4;
    uVar9 = 0;
    uVar4 = extraout_r2;
    if (3 < uVar1) {
      uVar4 = (int)puVar2 - (int)pointer;
      bVar11 = uVar4 == 0xf;
    }
    if ((3 < uVar1 && 0xe < uVar4) && !bVar11) {
      uVar9 = uVar1 & 0xfffffffe;
      puVar5 = puVar2;
      uVar4 = uVar9;
      puVar8 = pointer;
      do {
        uVar12 = *puVar8;
        uVar13 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar4 = uVar4 - 2;
        *puVar5 = uVar12;
        puVar5[1] = uVar13;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (uVar1 == uVar9) goto LAB_100171c0;
    }
    puVar8 = pointer + uVar9;
    iVar3 = uVar1 - uVar9;
    puVar5 = puVar2 + uVar9;
    do {
      uVar6 = *(undefined4 *)puVar8;
      iVar3 = iVar3 + -1;
      puVar7 = (undefined4 *)((int)puVar8 + 4);
      puVar8 = puVar8 + 1;
      *(undefined4 *)((int)puVar5 + 4) = *puVar7;
      *(undefined4 *)puVar5 = uVar6;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_100171c0:
  recovered_10008354(pointer);
  uVar1 = param_1[1];
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_100171d4:
  uVar6 = param_2[1];
  puVar7 = (undefined4 *)(*param_1 + uVar1 * 8);
  *puVar7 = *param_2;
  puVar7[1] = uVar6;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100171fc
 */

bool recovered_100171fc(int *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint extraout_r2 = 0;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint extraout_r3 = 0;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;

  iVar13 = param_2[1];
  puVar8 = (undefined4 *)*param_2;
  iVar4 = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  if (iVar13 != 0) {
    uVar11 = 0;
    do {
      uVar1 = *(uint *)((int)puVar8 + iVar4 + 4);
      if (CARRY4(uVar1,uVar11)) {
        return false;
      }
      iVar4 = iVar4 + 8;
      uVar11 = uVar1 + uVar11;
    } while (iVar13 * 8 != iVar4);
    if ((uint)param_1[2] < uVar11) {
      puVar2 = recovered_100082fc(uVar11);
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (uVar1 != 0) {
        bVar15 = uVar1 == 0x10;
        uVar14 = 0;
        uVar5 = extraout_r2;
        if (0xf < uVar1) {
          uVar5 = (int)puVar2 - (int)puVar3;
          bVar15 = uVar5 == 0xf;
        }
        if ((0xf < uVar1 && 0xe < uVar5) && !bVar15) {
          uVar14 = uVar1 & 0xfffffff0;
          puVar6 = puVar2;
          uVar5 = uVar14;
          puVar9 = puVar3;
          do {
            uVar16 = *puVar9;
            uVar17 = puVar9[1];
            puVar9 = puVar9 + 2;
            uVar5 = uVar5 - 0x10;
            *puVar6 = uVar16;
            puVar6[1] = uVar17;
            puVar6 = puVar6 + 2;
          } while (uVar5 != 0);
          if (uVar1 == uVar14) goto LAB_100172dc;
        }
        iVar4 = uVar1 - uVar14;
        puVar7 = (undefined1 *)((int)puVar2 + uVar14);
        puVar10 = (undefined1 *)((int)puVar3 + uVar14);
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar10;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar4 != 0);
      }
LAB_100172dc:
      recovered_10008354(puVar3);
      puVar8 = (undefined4 *)*param_2;
      iVar13 = param_2[1];
      param_1[2] = uVar11;
      *param_1 = (int)puVar2;
    }
    if (iVar13 != 0) {
      puVar12 = puVar8 + iVar13 * 2;
      do {
        recovered_1001440c(param_1,*param_1 + param_1[1],(undefined1 *)*puVar8,
                           (undefined1 *)*puVar8 + puVar8[1]);
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar12);
    }
  }
  if (param_3 <= (uint)param_1[5]) goto LAB_100173b8;
  puVar2 = recovered_100082fc(param_3);
  uVar11 = param_1[4];
  puVar3 = (undefined8 *)param_1[3];
  if (uVar11 != 0) {
    bVar15 = uVar11 == 0x10;
    uVar5 = 0;
    uVar1 = extraout_r3;
    if (0xf < uVar11) {
      uVar1 = (int)puVar2 - (int)puVar3;
      bVar15 = uVar1 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar1) && !bVar15) {
      uVar5 = uVar11 & 0xfffffff0;
      uVar1 = uVar5;
      puVar6 = puVar3;
      puVar9 = puVar2;
      do {
        uVar16 = *puVar6;
        uVar17 = puVar6[1];
        puVar6 = puVar6 + 2;
        uVar1 = uVar1 - 0x10;
        *puVar9 = uVar16;
        puVar9[1] = uVar17;
        puVar9 = puVar9 + 2;
      } while (uVar1 != 0);
      if (uVar11 == uVar5) goto LAB_100173ac;
    }
    iVar4 = uVar11 - uVar5;
    puVar7 = (undefined1 *)((int)puVar2 + uVar5);
    puVar10 = (undefined1 *)((int)puVar3 + uVar5);
    do {
      iVar4 = iVar4 + -1;
      *puVar7 = *puVar10;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar4 != 0);
  }
LAB_100173ac:
  recovered_10008354(puVar3);
  param_1[5] = param_3;
  param_1[3] = (int)puVar2;
LAB_100173b8:
  bVar15 = recovered_10014570(param_1,param_1 + 3,param_3);
  return bVar15;
}


static const unsigned char pf_literal_100173dc_DAT_10017410[] __attribute__((aligned(16)))={0xfc,0x01,0x00,0x00};
#undef DAT_10017410
#define DAT_10017410 (*(uint *)((uintptr_t)pf_literal_100173dc_DAT_10017410))
static const unsigned char pf_literal_100173dc_switchdataD_10017410[] __attribute__((aligned(16)))={0xfc,0x01,0x00,0x00};
#undef switchdataD_10017410
#define switchdataD_10017410 (*(uint *)((uintptr_t)pf_literal_100173dc_switchdataD_10017410))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100173dc
 */

undefined4
recovered_100173dc(undefined4 param_1,undefined8 *param_2,uint128 *param_3,
                  uint128 *param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  uint128 *pauVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint128 *pauVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  uint uVar22;
  bool bVar23;
  uint128 auVar24;

  puVar8 = &DAT_10017410;
  switch((uintptr_t)(param_1)) {
  case 1:
    uVar15 = param_5;
    if (param_6 < param_5) {
      uVar15 = param_6;
    }
    if (uVar15 != 0) {
      bVar23 = uVar15 == 0x10;
      uVar22 = 0;
      if (0xf < uVar15) {
        puVar8 = (uint *)((int)param_2 - (int)param_3);
        bVar23 = puVar8 == (uint *)0xf;
      }
      if ((0xf < uVar15 && (uint *)0xe < puVar8) && !bVar23) {
        uVar22 = uVar15 & 0xfffffff0;
        uVar19 = uVar22;
        pauVar12 = param_3;
        puVar11 = param_2;
        do {
          puVar10 = (uint8_t *)(void *)pauVar12;
          uVar2 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 4);
          uVar3 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 8);
          uVar4 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 0xc);
          pauVar12 = pauVar12 + 1;
          uVar19 = uVar19 - 0x10;
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)((int)puVar11 + 4) = uVar2;
          *(undefined4 *)(puVar11 + 1) = uVar3;
          *(undefined4 *)((int)puVar11 + 0xc) = uVar4;
          puVar11 = puVar11 + 2;
        } while (uVar19 != 0);
        if (uVar15 == uVar22) goto LAB_10017490;
      }
      iVar5 = uVar15 - uVar22;
      puVar10 = ((uint8_t *)(void *)param_3) + uVar22;
      puVar16 = (undefined1 *)((int)param_2 + uVar22);
      do {
        iVar5 = iVar5 + -1;
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar5 != 0);
    }
LAB_10017490:
    if (param_6 < param_5) {
      uVar22 = param_5 - uVar15;
      if ((0xf < uVar22) && (0xf < (uint)((int)param_2 - (int)param_3) && 0xf < param_6)) {
        uVar20 = uVar22 & 0xfffffff0;
        puVar11 = (undefined8 *)((int)param_2 + uVar15);
        pauVar12 = (uint128 *)(((uint8_t *)(void *)param_3) + uVar15);
        uVar15 = uVar15 + uVar20;
        uVar19 = uVar20;
        do {
          auVar24 = *pauVar12;
          pauVar12 = pauVar12 + 1;
          uVar19 = uVar19 - 0x10;
          auVar24 = VectorAdd(*(uint128 *)((int)puVar11 - param_6),auVar24,1);
          *puVar11 = PF_PART8(auVar24, 0);
          puVar11[1] = PF_PART8(auVar24, 8);
          puVar11 = puVar11 + 2;
        } while (uVar19 != 0);
        if (uVar22 == uVar20) {
          return 1;
        }
      }
      pcVar7 = (char *)((int)param_2 + uVar15);
      iVar5 = param_5 - uVar15;
      pcVar6 = ((uint8_t *)(void *)param_3) + uVar15;
      do {
        iVar5 = iVar5 + -1;
        *pcVar7 = pcVar7[-param_6] + *pcVar6;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar5 != 0);
    }
    break;
  case 2:
    if (param_4 != (uint128 *)0x0) {
      if (param_5 == 0) {
        return 1;
      }
      uVar15 = 0;
      if (0xf < param_5) {
        uVar22 = (int)param_2 - (int)param_3;
        bVar23 = 0xf < uVar22;
        if (bVar23) {
          uVar22 = (int)param_2 - (int)param_4;
        }
        if (bVar23 && 0xf < uVar22) {
          uVar15 = param_5 & 0xfffffff0;
          uVar22 = uVar15;
          pauVar12 = param_4;
          pauVar17 = param_3;
          puVar11 = param_2;
          do {
            auVar24 = *pauVar17;
            pauVar17 = pauVar17 + 1;
            uVar22 = uVar22 - 0x10;
            auVar1 = *pauVar12;
            pauVar12 = pauVar12 + 1;
            auVar24 = VectorAdd(auVar1,auVar24,1);
            *puVar11 = PF_PART8(auVar24, 0);
            puVar11[1] = PF_PART8(auVar24, 8);
            puVar11 = puVar11 + 2;
          } while (uVar22 != 0);
          if (uVar15 == param_5) {
            return 1;
          }
        }
      }
      iVar5 = param_5 - uVar15;
      pcVar6 = (char *)((int)param_2 + uVar15);
      pcVar7 = ((uint8_t *)(void *)param_3) + uVar15;
      pcVar13 = ((uint8_t *)(void *)param_4) + uVar15;
      do {
        iVar5 = iVar5 + -1;
        *pcVar6 = *pcVar13 + *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
        pcVar13 = pcVar13 + 1;
      } while (iVar5 != 0);
      return 1;
    }
  case 0:
    recovered_10002f90(param_2,param_3,param_5);
    break;
  case 3:
    if (param_4 != (uint128 *)0x0) {
      if (param_5 == 0) {
        return 1;
      }
      uVar15 = 0;
      do {
        uVar22 = 0;
        if (param_6 <= uVar15) {
          uVar22 = (uint)*(byte *)((int)param_2 + (uVar15 - param_6));
        }
        *(char *)((int)param_2 + uVar15) =
             ((uint8_t *)(void *)param_3)[uVar15] + (char)(uVar22 + (byte)((uint8_t *)(void *)param_4)[uVar15] >> 1);
        uVar15 = uVar15 + 1;
      } while (param_5 != uVar15);
      return 1;
    }
    if (param_5 == 0) {
      return 1;
    }
    uVar15 = param_5;
    if (param_6 < param_5) {
      uVar15 = param_6;
    }
    if (param_6 == 0) {
      uVar22 = 0;
    }
    else {
      uVar19 = 0;
      uVar22 = uVar15;
      if ((0xf < uVar15) && (0xf < (uint)((int)param_2 - (int)param_3))) {
        uVar19 = uVar15 & 0xfffffff0;
        uVar20 = uVar19;
        pauVar12 = param_3;
        puVar11 = param_2;
        do {
          puVar10 = (uint8_t *)(void *)pauVar12;
          uVar2 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 4);
          uVar3 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 8);
          uVar4 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 0xc);
          pauVar12 = pauVar12 + 1;
          uVar20 = uVar20 - 0x10;
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)((int)puVar11 + 4) = uVar2;
          *(undefined4 *)(puVar11 + 1) = uVar3;
          *(undefined4 *)((int)puVar11 + 0xc) = uVar4;
          puVar11 = puVar11 + 2;
        } while (uVar20 != 0);
        if (uVar15 == uVar19) goto LAB_100177c0;
      }
      iVar5 = uVar15 - uVar19;
      puVar10 = ((uint8_t *)(void *)param_3) + uVar19;
      puVar16 = (undefined1 *)((int)param_2 + uVar19);
      do {
        iVar5 = iVar5 + -1;
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar5 != 0);
    }
LAB_100177c0:
    if (param_5 <= uVar22) {
      return 1;
    }
    uVar15 = param_5 - uVar15;
    if ((0xf < uVar15) && (0xf < (uint)((int)param_2 - (int)param_3) && 0xf < param_6)) {
      uVar20 = uVar15 & 0xfffffff0;
      puVar11 = (undefined8 *)((int)param_2 + uVar22);
      pauVar12 = (uint128 *)(((uint8_t *)(void *)param_3) + uVar22);
      uVar22 = uVar22 + uVar20;
      uVar19 = uVar20;
      do {
        auVar24 = *pauVar12;
        pauVar12 = pauVar12 + 1;
        uVar19 = uVar19 - 0x10;
        auVar24 = VectorShiftRightAccumulate
                            (auVar24,*(uint128 *)((int)puVar11 - param_6),1,8,1);
        *puVar11 = PF_PART8(auVar24, 0);
        puVar11[1] = PF_PART8(auVar24, 8);
        puVar11 = puVar11 + 2;
      } while (uVar19 != 0);
      if (uVar15 == uVar20) {
        return 1;
      }
    }
    pcVar7 = (char *)((int)param_2 + uVar22);
    iVar5 = param_5 - uVar22;
    pcVar6 = ((uint8_t *)(void *)param_3) + uVar22;
    do {
      iVar5 = iVar5 + -1;
      *pcVar7 = *pcVar6 + ((byte)pcVar7[-param_6] >> 1);
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (iVar5 != 0);
    return 1;
  case 4:
    if (param_4 != (uint128 *)0x0) {
      if (param_5 == 0) {
        return 1;
      }
      uVar15 = 0;
      do {
        uVar22 = 0;
        uVar19 = 0;
        if (param_6 <= uVar15) {
          uVar19 = (uint)*(byte *)((int)param_4 + (uVar15 - param_6));
          uVar22 = (uint)*(byte *)((int)param_2 + (uVar15 - param_6));
        }
        uVar14 = uVar22 - uVar19;
        uVar18 = (uint)(byte)((uint8_t *)(void *)param_4)[uVar15];
        uVar20 = (uVar14 + uVar18) - uVar19;
        if ((int)uVar20 < 0) {
          uVar20 = -uVar20;
        }
        if ((int)uVar14 < 0) {
          uVar14 = -uVar14;
        }
        uVar9 = uVar18;
        if (uVar20 < uVar14) {
          uVar9 = uVar19;
        }
        uVar18 = uVar18 - uVar19;
        if ((int)uVar18 < 0) {
          uVar18 = -uVar18;
        }
        if (uVar20 < uVar18) {
          uVar22 = uVar9;
        }
        cVar21 = (char)uVar22;
        if (uVar14 < uVar18) {
          cVar21 = (char)uVar9;
        }
        *(char *)((int)param_2 + uVar15) = ((uint8_t *)(void *)param_3)[uVar15] + cVar21;
        uVar15 = uVar15 + 1;
      } while (param_5 != uVar15);
      return 1;
    }
    uVar15 = param_5;
    if (param_6 < param_5) {
      uVar15 = param_6;
    }
    if (uVar15 != 0) {
      bVar23 = uVar15 == 0x10;
      uVar22 = 0;
      if (0xf < uVar15) {
        puVar8 = (uint *)((int)param_2 - (int)param_3);
        bVar23 = puVar8 == (uint *)0xf;
      }
      if ((0xf < uVar15 && (uint *)0xe < puVar8) && !bVar23) {
        uVar22 = uVar15 & 0xfffffff0;
        uVar19 = uVar22;
        pauVar12 = param_3;
        puVar11 = param_2;
        do {
          puVar10 = (uint8_t *)(void *)pauVar12;
          uVar2 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 4);
          uVar3 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 8);
          uVar4 = *(undefined4 *)(((uint8_t *)(void *)pauVar12) + 0xc);
          pauVar12 = pauVar12 + 1;
          uVar19 = uVar19 - 0x10;
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)((int)puVar11 + 4) = uVar2;
          *(undefined4 *)(puVar11 + 1) = uVar3;
          *(undefined4 *)((int)puVar11 + 0xc) = uVar4;
          puVar11 = puVar11 + 2;
        } while (uVar19 != 0);
        if (uVar15 == uVar22) goto LAB_100176d8;
      }
      iVar5 = uVar15 - uVar22;
      puVar10 = ((uint8_t *)(void *)param_3) + uVar22;
      puVar16 = (undefined1 *)((int)param_2 + uVar22);
      do {
        iVar5 = iVar5 + -1;
        *puVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar16 + 1;
      } while (iVar5 != 0);
    }
LAB_100176d8:
    if (param_5 <= param_6) {
      return 1;
    }
    uVar22 = param_5 - uVar15;
    if ((0xf < uVar22) && (0xf < (uint)((int)param_2 - (int)param_3) && 0xf < param_6)) {
      uVar20 = uVar22 & 0xfffffff0;
      puVar11 = (undefined8 *)((int)param_2 + uVar15);
      pauVar12 = (uint128 *)(((uint8_t *)(void *)param_3) + uVar15);
      uVar15 = uVar15 + uVar20;
      uVar19 = uVar20;
      do {
        auVar24 = *pauVar12;
        pauVar12 = pauVar12 + 1;
        uVar19 = uVar19 - 0x10;
        auVar24 = VectorAdd(*(uint128 *)((int)puVar11 - param_6),auVar24,1);
        *puVar11 = PF_PART8(auVar24, 0);
        puVar11[1] = PF_PART8(auVar24, 8);
        puVar11 = puVar11 + 2;
      } while (uVar19 != 0);
      if (uVar22 == uVar20) {
        return 1;
      }
    }
    pcVar7 = (char *)((int)param_2 + uVar15);
    iVar5 = param_5 - uVar15;
    pcVar6 = ((uint8_t *)(void *)param_3) + uVar15;
    do {
      iVar5 = iVar5 + -1;
      *pcVar7 = pcVar7[-param_6] + *pcVar6;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (iVar5 != 0);
    return 1;
  default:
    return 0;
  }
  return 1;
}

#undef DAT_10017410
#undef switchdataD_10017410

static const unsigned char pf_literal_10017918_DAT_10017950[] __attribute__((aligned(16)))={0xc0,0x0d,0x00,0x00};
#undef DAT_10017950
#define DAT_10017950 (*(int *)((uintptr_t)pf_literal_10017918_DAT_10017950))
static const unsigned char pf_literal_10017918_DAT_10017954[] __attribute__((aligned(16)))={0x0c,0xe9,0xff,0xff};
#undef DAT_10017954
#define DAT_10017954 (*(uint32_t *)((uintptr_t)pf_literal_10017918_DAT_10017954))
static const unsigned char pf_literal_10017918_DAT_10017958[] __attribute__((aligned(16)))={0xc4,0x46,0x00,0x00};
#undef DAT_10017958
#define DAT_10017958 (*(uint32_t *)((uintptr_t)pf_literal_10017918_DAT_10017958))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017918
 */

void recovered_10017918(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  recovered_10016270();
  puVar1 = (undefined1 *)(((uintptr_t)pf_module_state+0xd50U));
  recovered_10008674();
  *puVar1 = 1;
  return;
}

#undef DAT_10017950
#undef DAT_10017954
#undef DAT_10017958

static const unsigned char pf_literal_1001795c_DAT_10017998[] __attribute__((aligned(16)))={0xd0,0xe8,0xff,0xff};
#undef DAT_10017998
#define DAT_10017998 (*(uint32_t *)((uintptr_t)pf_literal_1001795c_DAT_10017998))
static const unsigned char pf_literal_1001795c_DAT_1001799c[] __attribute__((aligned(16)))={0x20,0x09,0x00,0x00};
#undef DAT_1001799c
#define DAT_1001799c (*(uint32_t *)((uintptr_t)pf_literal_1001795c_DAT_1001799c))
static const unsigned char pf_literal_1001795c_DAT_100179a0[] __attribute__((aligned(16)))={0x84,0x46,0x00,0x00};
#undef DAT_100179a0
#define DAT_100179a0 (*(uint32_t *)((uintptr_t)pf_literal_1001795c_DAT_100179a0))
static const unsigned char pf_literal_1001795c_DAT_100179a4[] __attribute__((aligned(16)))={0x64,0x0d,0x00,0x00};
#undef DAT_100179a4
#define DAT_100179a4 (*(int *)((uintptr_t)pf_literal_1001795c_DAT_100179a4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001795c
 */

void recovered_1001795c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1001688c();
  recovered_10008674();
  *(undefined1 *)(((uintptr_t)pf_module_state+0xd51U)) = 1;
  return;
}

#undef DAT_10017998
#undef DAT_1001799c
#undef DAT_100179a0
#undef DAT_100179a4
