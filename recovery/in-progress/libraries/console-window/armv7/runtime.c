/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a28
 */

uint recovered_10000a28(uint param_1,uint param_2)

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
 * Address: 0x10000a78
 */

uint recovered_10000a78(uint param_1,uint param_2)

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
 * Address: 0x10000ab0
 */

uint recovered_10000ab0(uint param_1,uint param_2)

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
 * Address: 0x10000b20
 */

uint recovered_10000b20(uint param_1,uint param_2)

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


/* Recovered compiler scalar conversion; Pooka's Free Software License. */
unsigned long long recovered_10000b8c(float value){return (unsigned long long)value;}


/* Recovered compiler scalar conversion; Pooka's Free Software License. */
long long recovered_10000b9c(float value){return (long long)value;}


/* Recovered compiler scalar conversion; Pooka's Free Software License. */
float recovered_10000bac(unsigned long long value){return (float)value;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc8
 */

float recovered_10000bc8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004400(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000c0ac
#define DAT_1000c0ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be8
 */

void recovered_10000be8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_1000c0ac = 0;
  recovered_10000c74();
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return;
}

#undef DAT_1000c0ac
#undef DAT_1000c0b4

#undef DAT_1000c0ac
#define DAT_1000c0ac (*(char *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(int *)(((uintptr_t)pf_module_state + 0x29cU)))
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
 * Address: 0x10000c74
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000c74(void)

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
  if (DAT_1000c0ac != '\0') {
    return;
  }
  DAT_1000c0b0 = 0;
  DAT_1000c0b8 = 0;
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
        if (iVar11 == 0) goto LAB_10000e74;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10005da0((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_1000c0b0 != 0) goto LAB_10000ea4;
    }
  }
LAB_10000e74:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10005da0((int *)0x300000,piVar4,&local_24);
LAB_10000ea4:
  if (DAT_1000c0b8 == 0) {
    DAT_1000c0b8 = DAT_1000c0b0;
  }
  DAT_1000c0ac = 1;
  return;
}

#undef DAT_1000c0ac
#undef DAT_1000c0b0
#undef DAT_1000c0b8
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ef4
 */

bool recovered_10000ef4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10000f70(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return bVar1;
}

#undef DAT_1000c0b4

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(int * *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f70
 */

bool recovered_10000f70(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10000c74();
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
        piVar1 = DAT_1000c0b0;
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
      piVar3 = (int *)&DAT_1000c0b0;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10005da0((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_1000c0b8 == (int *)0x0) {
        DAT_1000c0b8 = DAT_1000c0b0;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b8
#undef DAT_68000000
#undef local_24

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011b8
 */

bool recovered_100011b8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  bVar1 = recovered_10000f70(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return bVar1;
}

#undef DAT_1000c0b4
#undef local_14
#undef local_10

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint * *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001250
 */

int recovered_10001250(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000c74();
  iVar1 = 0;
  puVar3 = DAT_1000c0b0;
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
  DAT_1000c0b4 = 0;
  return iVar1;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b4

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

void recovered_10001300(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000c74();
  for (iVar1 = DAT_1000c0b0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b4

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int * *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013bc
 */

int recovered_100013bc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000c74();
  iVar1 = 0;
  for (piVar3 = DAT_1000c0b0; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return iVar1;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b4

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001464
 */

void recovered_10001464(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000c74();
  for (iVar1 = DAT_1000c0b0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b4

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001514
 */

void recovered_10001514(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001598(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return;
}

#undef DAT_1000c0b4

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint * *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint * *)(((uintptr_t)pf_module_state + 0x29cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001598
 */

uint * recovered_10001598(int param_1,uint *param_2,uint *param_3)

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
    recovered_10000c74();
    puVar4 = DAT_1000c0b0;
    puVar5 = DAT_1000c0b8;
    if (DAT_1000c0b8 == (uint *)0x0) {
      puVar5 = DAT_1000c0b0;
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
              if (uVar7 < uVar8) goto joined_r0x10001678;
            }
          }
          else {
joined_r0x10001678:
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
LAB_10001770:
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
                    DAT_1000c0b8 = DAT_1000c0b0;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_1000c0b8 = puVar4;
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
                      puVar2 = recovered_10005fa0(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10001770;
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

#undef DAT_1000c0b0
#undef DAT_1000c0b8

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f0
 */

void recovered_100017f0(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001598(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return;
}

#undef DAT_1000c0b4

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001878
 */

uint * recovered_10001878(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001598(param_1,param_2,param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return puVar2;
}

#undef DAT_1000c0b4

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001908
 */

void recovered_10001908(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001984(param_1);
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return;
}

#undef DAT_1000c0b4

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint * *)(((uintptr_t)pf_module_state + 0x29cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001984
 */

void recovered_10001984(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10000c74();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_1000c0b8 == puVar1) {
        DAT_1000c0b8 = puVar4;
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
          if (DAT_1000c0b8 == puVar4) {
            DAT_1000c0b8 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_1000c0b8 = puVar4;
  return;
}

#undef DAT_1000c0b8

#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(int *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint * *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001af0
 */

uint * recovered_10001af0(uint *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_1000c0b4 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x298U));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x298U),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (uint *)0x0) {
    puVar3 = recovered_10001598(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_10001d24;
  }
  if (param_2 == 0) {
    recovered_10001984((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_10001d24;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_10001d24;
  recovered_10000c74();
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
          DAT_1000c0b8 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_1000c0b8 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = param_1[-3];
          *(undefined1 *)(DAT_1000c0b8 + 3) = 1;
          DAT_1000c0b8[2] = (uint)puVar6;
          DAT_1000c0b8[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_1000c0b8;
          }
          param_1[-3] = (uint)DAT_1000c0b8;
          param_1[-4] = (uint)puVar12;
          puVar3 = param_1;
        }
      }
    }
    goto LAB_10001d24;
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
      puVar3 = DAT_1000c0b8;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_1000c0b8 = puVar6;
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
        iVar4 = recovered_10006024(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_1000c0b8 = (uint *)param_1[-3];
        }
        *(undefined1 *)(param_1 + -1) = 0;
        puVar3 = param_1;
      }
      goto LAB_10001d24;
    }
  }
  puVar7 = recovered_10001598((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_10001d24;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = param_1;
  if (puVar12 < &SupervisorCall) {
LAB_10001df4:
    if (puVar12 != (uint *)0x0) goto LAB_10001dfc;
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
            if (uVar14 == uVar11) goto LAB_10001fdc;
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
LAB_10001fdc:
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
          if (uVar14 == uVar11) goto LAB_10001df4;
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
      goto LAB_10001df4;
    }
LAB_10001dfc:
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
      if (puVar12 == puVar13) goto LAB_10001e58;
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
LAB_10001e58:
  recovered_10001984((int)param_1);
  puVar3 = puVar7;
LAB_10001d24:
  DataMemoryBarrier(0xb);
  DAT_1000c0b4 = 0;
  return puVar3;
}

#undef DAT_1000c0b4
#undef DAT_1000c0b8
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002090
 */

longlong recovered_10002090(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100020e4
 */

ulonglong recovered_100020e4(uint param_1,uint param_2,uint param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10002138(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002184
 */

undefined8 recovered_10002184(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002268
 */

undefined8 recovered_10002268(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100022e8
 */

undefined8 recovered_100022e8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002400
 */

undefined8 recovered_10002400(uint param_1,uint param_2,uint param_3,uint param_4)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100024bc(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100024c4(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100024d0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10002524(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002574(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c8
 */

void * recovered_100025c8(void *destination,void *source,ulong count)

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

  uVar8 = count;
  puVar3 = destination;
  if (count < 8) {
  }
  else {
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10002604;
    if (((uint)destination & 3) == 0) {
      puVar2 = source;
      puVar4 = destination;
    }
    else {
      *(undefined1 *)destination = *(undefined1 *)source;
      if (count - 1 == 0 || ((uint)((int)destination + 1) & 3) == 0) {
        puVar2 = (undefined8 *)((int)source + 1);
        uVar8 = count - 1;
        puVar4 = (undefined8 *)((int)destination + 1);
      }
      else {
        *(undefined1 *)((int)destination + 1) = *(undefined1 *)((int)source + 1);
        puVar2 = (undefined8 *)((int)source + 2);
        uVar8 = count - 2;
        puVar4 = (undefined8 *)((int)destination + 2);
        if (count - 2 != 0 && ((uint)((int)destination + 2) & 3) != 0) {
          uVar8 = count - 3;
          *(undefined1 *)((int)destination + 2) = *(undefined1 *)((int)source + 2);
          puVar2 = (undefined8 *)((int)source + 3);
          puVar4 = (undefined8 *)((int)destination + 3);
          if ((uVar8 != 0) && (((uint)puVar4 & 3) != 0)) {
            uVar8 = count - 4;
            *(undefined1 *)((int)destination + 3) = *(undefined1 *)((int)source + 3);
            puVar4 = (undefined8 *)((int)destination + 4);
            puVar2 = (undefined8 *)((int)source + 4);
          }
        }
      }
    }
    puVar5 = puVar2;
    if (uVar8 < 0x10) {
      source = puVar2;
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
          source = puVar2 + uVar9 * 2;
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
          puVar2 = source;
          puVar4 = puVar3;
          if (uVar6 == uVar9) goto LAB_10002798;
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
        source = puVar2;
        puVar3 = puVar4;
      } while (0xf < uVar8);
    }
LAB_10002798:
    count = (ulong)source;
    if (uVar8 < 4) {
    }
    else {
      uVar7 = uVar8 - 4;
      bVar10 = uVar7 == 0xc;
      if (0xb < uVar7) {
        puVar5 = (undefined8 *)((int)puVar3 - (int)source);
        bVar10 = puVar5 == (undefined8 *)0xf;
      }
      if ((0xb < uVar7 && (undefined8 *)0xe < puVar5) && !bVar10) {
        uVar9 = (uVar7 >> 2) + 1;
        uVar6 = uVar9 & 0xfffffffc;
        uVar8 = uVar8 + uVar6 * -4;
        puVar4 = (undefined8 *)((int)puVar3 + uVar6 * 4);
        puVar2 = (undefined8 *)((int)source + uVar6 * 4);
        uVar7 = uVar6;
        do {
          uVar11 = *(undefined8 *)count;
          uVar12 = *(undefined8 *)(count + 8);
          count = count + 0x10;
          uVar7 = uVar7 - 4;
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = puVar3 + 2;
        } while (uVar7 != 0);
        source = puVar2;
        puVar3 = puVar4;
        if (uVar9 == uVar6) goto LAB_100025fc;
      }
      else {
        puVar2 = source;
        puVar4 = puVar3;
      }
      do {
        source = (void *)((int)puVar2 + 4);
        count = *(ulong *)puVar2;
        uVar8 = uVar8 - 4;
        puVar3 = (undefined8 *)((int)puVar4 + 4);
        *(ulong *)puVar4 = count;
        puVar2 = source;
        puVar4 = puVar3;
      } while (3 < uVar8);
    }
  }
LAB_100025fc:
  if (uVar8 == 0) {
    return destination;
  }
LAB_10002604:
  if (0xf < uVar8) {
    count = (int)puVar3 - (int)source;
  }
  if (0xf < uVar8 && (undefined8 *)0xf < count) {
    uVar6 = uVar8 & 0xfffffff0;
    uVar9 = uVar8 & 0xf;
    puVar2 = (undefined8 *)((int)source + uVar6);
    puVar4 = (undefined8 *)((int)puVar3 + uVar6);
    uVar7 = uVar6;
    do {
      uVar11 = *(undefined8 *)source;
      uVar12 = *(undefined8 *)((int)source + 8);
      source = (void *)((int)source + 0x10);
      uVar7 = uVar7 - 0x10;
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      puVar3 = puVar3 + 2;
    } while (uVar7 != 0);
    if (uVar8 == uVar6) {
      return destination;
    }
  }
  else {
    puVar2 = source;
    puVar4 = puVar3;
    uVar9 = uVar8;
  }
  do {
    uVar9 = uVar9 - 1;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 1);
    puVar4 = (undefined8 *)((int)puVar4 + 1);
  } while (uVar9 != 0);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000284c
 */

void * recovered_1000284c(void *destination,void *source,ulong count)

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

  if (destination == source || count == 0) {
    return destination;
  }
  puVar10 = source;
  if (source <= destination) {
    puVar10 = (undefined8 *)((int)source + count);
    in_r12 = puVar10;
  }
  if ((source > destination || in_r12 < destination) || destination == puVar10) {
    uVar9 = count;
    if ((count < 8) || ((((uint)source ^ (uint)destination) & 3) != 0)) {
      puVar10 = destination;
      goto LAB_10002894;
    }
    if (((uint)destination & 3) == 0) {
      puVar2 = source;
      puVar4 = destination;
    }
    else {
      *(undefined1 *)destination = *(undefined1 *)source;
      if (count - 1 == 0 || ((uint)((int)destination + 1) & 3) == 0) {
        puVar2 = (undefined8 *)((int)source + 1);
        uVar9 = count - 1;
        puVar4 = (undefined8 *)((int)destination + 1);
      }
      else {
        *(undefined1 *)((int)destination + 1) = *(undefined1 *)((int)source + 1);
        puVar2 = (undefined8 *)((int)source + 2);
        uVar9 = count - 2;
        puVar4 = (undefined8 *)((int)destination + 2);
        if (count - 2 != 0 && ((uint)((int)destination + 2) & 3) != 0) {
          uVar9 = count - 3;
          puVar2 = (undefined8 *)((int)source + 3);
          puVar4 = (undefined8 *)((int)destination + 3);
          *(undefined1 *)((int)destination + 2) = *(undefined1 *)((int)source + 2);
          if ((uVar9 != 0) && (((uint)puVar4 & 3) != 0)) {
            uVar9 = count - 4;
            *(undefined1 *)((int)destination + 3) = *(undefined1 *)((int)source + 3);
            puVar4 = (undefined8 *)((int)destination + 4);
            puVar2 = (undefined8 *)((int)source + 4);
          }
        }
      }
    }
    if (uVar9 < 0x10) {
      source = puVar2;
      puVar10 = puVar4;
    }
    else {
      if (0x2f < uVar9 - 0x10) {
        count = uVar9 & 0xfffffff0;
        bVar11 = puVar4 < (undefined8 *)((int)puVar2 + count);
        if (bVar11) {
          count = (int)puVar4 + count;
        }
        if (!(bVar11 && puVar2 < count)) {
          puVar8 = (undefined8 *)((uVar9 - 0x10 >> 4) + 1);
          count = (uint)puVar8 & 0xfffffffc;
          uVar9 = uVar9 + count * -0x10;
          puVar10 = puVar4 + count * 2;
          source = puVar2 + count * 2;
          puVar6 = (undefined8 *)count;
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
          puVar2 = source;
          puVar4 = puVar10;
          if (puVar8 == (undefined8 *)count) goto LAB_10002b20;
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
        source = puVar2;
        puVar10 = puVar4;
      } while (0xf < uVar9);
    }
LAB_10002b20:
    if (3 < uVar9) {
      uVar3 = uVar9 - 4;
      bVar11 = uVar3 == 0xc;
      if (0xb < uVar3) {
        count = (int)puVar10 - (int)source;
        bVar11 = (undefined8 *)count == (undefined8 *)0xf;
      }
      if ((0xb < uVar3 && (undefined8 *)0xe < count) && !bVar11) {
        count = (uVar3 >> 2) + 1;
        puVar8 = (undefined8 *)(count & 0xfffffffc);
        uVar9 = uVar9 + (int)puVar8 * -4;
        puVar6 = (undefined8 *)((int)puVar10 + (int)(uintptr_t)puVar8 * 4);
        puVar2 = (undefined8 *)((int)source + (int)(uintptr_t)puVar8 * 4);
        puVar4 = puVar8;
        do {
          uVar12 = *(undefined8 *)source;
          uVar13 = *(undefined8 *)((int)source + 8);
          source = (void *)((int)source + 0x10);
          puVar4 = (undefined8 *)((int)puVar4 + -4);
          *puVar10 = uVar12;
          puVar10[1] = uVar13;
          puVar10 = puVar10 + 2;
        } while (puVar4 != (undefined8 *)0x0);
        source = puVar2;
        puVar10 = puVar6;
        if ((undefined8 *)count == puVar8) goto LAB_10002b9c;
      }
      else {
        puVar2 = source;
        puVar6 = puVar10;
      }
      do {
        count = *(ulong *)puVar2;
        uVar9 = uVar9 - 4;
        *(ulong *)puVar6 = count;
        source = (undefined8 *)((int)puVar2 + 4);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
        puVar10 = (undefined8 *)((int)puVar6 + 4);
        puVar6 = (undefined8 *)((int)puVar6 + 4);
      } while (3 < uVar9);
    }
LAB_10002b9c:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10002894:
    if (0xf < uVar9) {
      count = (int)puVar10 - (int)source;
    }
    if (0xf < uVar9 && (undefined8 *)0xf < count) {
      uVar7 = uVar9 & 0xfffffff0;
      uVar3 = uVar9 & 0xf;
      puVar4 = (undefined8 *)((int)source + uVar7);
      puVar2 = (undefined8 *)((int)puVar10 + uVar7);
      uVar5 = uVar7;
      do {
        uVar12 = *(undefined8 *)source;
        uVar13 = *(undefined8 *)((int)source + 8);
        source = (void *)((int)source + 0x10);
        uVar5 = uVar5 - 0x10;
        *puVar10 = uVar12;
        puVar10[1] = uVar13;
        puVar10 = puVar10 + 2;
      } while (uVar5 != 0);
      if (uVar9 == uVar7) {
        return destination;
      }
    }
    else {
      puVar2 = puVar10;
      uVar3 = uVar9;
      puVar4 = source;
    }
    do {
      uVar3 = uVar3 - 1;
      *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
      puVar2 = (undefined8 *)((int)puVar2 + 1);
      puVar4 = (undefined8 *)((int)puVar4 + 1);
    } while (uVar3 != 0);
    return destination;
  }
  puVar10 = (undefined8 *)((int)destination + count);
  if ((count < 8) || ((((uint)in_r12 ^ (uint)puVar10) & 3) != 0)) {
    uVar9 = count;
    goto LAB_10002910;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10002bac:
    uVar9 = count;
    puVar4 = in_r12;
  }
  else {
    puVar2 = (undefined8 *)((int)puVar10 + -1);
    *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -1);
    uVar9 = count - 1;
    puVar4 = (undefined8 *)((int)in_r12 + -1);
    if (count - 1 != 0 && ((uint)puVar2 & 3) != 0) {
      puVar2 = (undefined8 *)((int)puVar10 + -2);
      *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -2);
      uVar9 = count - 2;
      puVar4 = (undefined8 *)((int)in_r12 + -2);
      if (count - 2 != 0 && ((uint)puVar2 & 3) != 0) {
        puVar2 = (undefined8 *)((int)puVar10 + -3);
        *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -3);
        uVar9 = count - 3;
        puVar4 = (undefined8 *)((int)in_r12 + -3);
        if (count - 3 != 0 && ((uint)puVar2 & 3) != 0) {
          in_r12 = (undefined8 *)((int)in_r12 + -4);
          *(undefined1 *)((int)puVar10 + -4) = *(undefined1 *)in_r12;
          count = count - 4;
          puVar2 = (undefined8 *)((int)puVar10 + -4);
          goto LAB_10002bac;
        }
      }
    }
  }
  in_r12 = puVar4;
  if (uVar9 < 0x10) {
    count = (ulong)puVar2;
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
        count = (ulong)(puVar2 + uVar7 * -2);
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
        puVar2 = (undefined8 *)count;
        if (uVar5 == uVar7) goto LAB_10002c88;
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
      count = (ulong)puVar2;
    } while (0xf < uVar9);
  }
LAB_10002c88:
  puVar10 = (undefined8 *)count;
  if (3 < uVar9) {
    uVar3 = uVar9 - 4;
    bVar11 = uVar3 == 0xc;
    if (0xb < uVar3) {
      unaff_r5 = (undefined8 *)((int)in_r12 - count);
      bVar11 = unaff_r5 == (undefined8 *)0xf;
    }
    if ((0xb < uVar3 && (undefined8 *)0xe < unaff_r5) && !bVar11) {
      uVar7 = (uVar3 >> 2) + 1;
      uVar5 = uVar7 & 0xfffffffc;
      puVar10 = (undefined8 *)(count + uVar5 * -4);
      puVar2 = (undefined8 *)((int)in_r12 + uVar5 * -4);
      uVar9 = uVar9 + uVar5 * -4;
      count = count + -0x10;
      uVar3 = uVar5;
      do {
        uVar12 = in_r12[-1];
        uVar3 = uVar3 - 4;
        *(undefined8 *)count = in_r12[-2];
        *(undefined8 *)(count + 8) = uVar12;
        count = count + -0x10;
        in_r12 = in_r12 + -2;
      } while (uVar3 != 0);
      in_r12 = puVar2;
      if (uVar7 == uVar5) goto LAB_10002d44;
    }
    else {
      puVar2 = in_r12;
    }
    do {
      puVar2 = (undefined8 *)((int)puVar2 + -4);
      count = *(ulong *)puVar2;
      uVar9 = uVar9 - 4;
      puVar10 = (undefined8 *)((int)puVar10 + -4);
      *(ulong *)puVar10 = count;
      in_r12 = puVar2;
    } while (3 < uVar9);
  }
LAB_10002d44:
  if (uVar9 == 0) {
    return destination;
  }
LAB_10002910:
  if (0xf < uVar9) {
    count = (int)in_r12 - (int)puVar10;
  }
  if (0xf < uVar9 && (undefined8 *)0xf < count) {
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
      return destination;
    }
  }
  do {
    uVar9 = uVar9 - 1;
    *(undefined1 *)((int)puVar10 + -1) = *(undefined1 *)((int)in_r12 + -1);
    puVar10 = (undefined8 *)((int)puVar10 + -1);
    in_r12 = (undefined8 *)((int)in_r12 + -1);
  } while (uVar9 != 0);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d58
 */

void * recovered_10002d58(void *destination,int value,ulong count)

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

  uVar2 = (undefined1)value;
  uVar9 = count;
  piVar4 = destination;
  if (count < 8) goto joined_r0x10002ee0;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x10002df8:
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
        if (uVar6 == uVar7) goto joined_r0x10002e84;
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
    piVar10 = (int *)((int)destination + 1);
    uVar9 = count - 1;
    *(undefined1 *)destination = uVar2;
    if (uVar9 != 0) {
      if (((uint)piVar10 & 3) != 0) {
        uVar9 = count - 2;
        piVar10 = (int *)((int)destination + 2);
        *(undefined1 *)((int)destination + 1) = uVar2;
        if (uVar9 != 0 && ((uint)piVar10 & 3) != 0) {
          uVar9 = count - 3;
          piVar10 = (int *)((int)destination + 3);
          *(undefined1 *)((int)destination + 2) = uVar2;
          if ((uVar9 != 0) && (((uint)piVar10 & 3) != 0)) {
            *(undefined1 *)((int)destination + 3) = uVar2;
            uVar9 = count - 4;
            piVar10 = (int *)((int)destination + 4);
          }
        }
      }
      goto joined_r0x10002df8;
    }
  }
joined_r0x10002e84:
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
      if (uVar7 == uVar6) goto joined_r0x10002ee0;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x10002ee0:
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
        return destination;
      }
    }
    do {
      *(undefined1 *)piVar10 = uVar2;
      uVar5 = uVar5 - 1;
      piVar10 = (int *)((int)piVar10 + 1);
    } while (uVar5 != 0);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f58
 */

void recovered_10002f58(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100030d8;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10002ff4:
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
        if (uVar7 == uVar8) goto joined_r0x10003078;
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
      goto joined_r0x10002ff4;
    }
  }
joined_r0x10003078:
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
      if (uVar7 == uVar8) goto joined_r0x100030d8;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100030d8:
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
 * Address: 0x10003154
 */

void recovered_10003154(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100032d4;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100031f0:
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
        if (uVar7 == uVar8) goto joined_r0x10003274;
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
      goto joined_r0x100031f0;
    }
  }
joined_r0x10003274:
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
      if (uVar7 == uVar8) goto joined_r0x100032d4;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100032d4:
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
 * Address: 0x10003350
 */

char * recovered_10003350(char *param_1,char param_2,int param_3)

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
 * Address: 0x10003384
 */

int recovered_10003384(void *left,void *right,ulong count)

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

  if (count < 8) {
LAB_1000347c:
    if (count == 0) {
      return 0;
    }
  }
  else if ((((uint)right ^ (uint)left) & 3) == 0) {
    uVar5 = count;
    puVar1 = right;
    puVar7 = left;
    if (((uint)left & 3) != 0) {
      uVar6 = (uint)*(byte *)right;
      uVar5 = (uint)*(byte *)left;
      if (uVar5 != uVar6) goto LAB_10003574;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10003574;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10003574;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10003574;
            uVar5 = count - 4;
            puVar1 = (uint *)((int)right + 4);
            puVar7 = (uint *)((int)left + 4);
          }
        }
      }
    }
    while (left = puVar7, right = puVar1, count = uVar5, 0xf < count) {
      uVar6 = *(uint *)right;
      uVar5 = *(uint *)left;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        uVar6 = *(uint *)((int)right + 4);
        uVar5 = *(uint *)((int)left + 4);
      }
      bVar9 = bVar8 && uVar5 == uVar6;
      if (bVar8 && uVar5 == uVar6) {
        uVar6 = *(uint *)((int)right + 8);
        uVar5 = *(uint *)((int)left + 8);
        bVar9 = uVar5 == uVar6;
      }
      if (!bVar9) {
LAB_100034ac:
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
      uVar6 = *(uint *)((int)right + 0xc);
      uVar5 = *(uint *)((int)left + 0xc);
      if (uVar5 != uVar6) goto LAB_100034ac;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_1000357c(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_1000347c;
  }
  while( true ) {
    uVar6 = (uint)(byte)*(uint *)right;
    uVar5 = (uint)(byte)*(uint *)left;
    if (uVar5 != uVar6) break;
    count = count - 1;
    right = (void *)((int)right + 1);
    left = (void *)((int)left + 1);
    if (count == 0) {
      return 0;
    }
  }
LAB_10003574:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000357c
 */

int recovered_1000357c(byte *param_1,byte *param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100035cc(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100035e0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100035f4(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000360c(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003638
 */

bool recovered_10003638(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003658(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000366c(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000367c(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000368c
 */

ulong recovered_1000368c(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

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
 * Address: 0x100036b4
 */

int recovered_100036b4(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *left;
  do {
    uVar2 = (uint)bVar1;
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_100036ec:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_100036ec;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f8
 */

int recovered_100036f8(byte *param_1,byte *param_2)

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
LAB_10003730:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003730;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000373c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10003758
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10003758(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10003820;
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
          if (uVar8 == uVar11) goto LAB_100039b4;
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
LAB_100039b4:
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
        if (uVar11 == uVar8) goto LAB_10003818;
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
LAB_10003818:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10003820:
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
 * Address: 0x10003a6c
 */

char * recovered_10003a6c(char *param_1,char param_2)

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
 * Address: 0x10003aa0
 */

int recovered_10003aa0(char *param_1,char *param_2)

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
 * Address: 0x10003b04
 */

int recovered_10003b04(char *param_1,char *param_2)

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
 * Address: 0x10003b6c
 */

char * recovered_10003b6c(char *param_1,char *param_2)

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
 * Address: 0x10003bcc
 */

char * recovered_10003bcc(char *param_1,char *param_2)

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


#undef DAT_1000be40
#define DAT_1000be40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c30
 */

undefined * recovered_10003c30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000be40;
}

#undef DAT_1000be40

#undef PTR_DAT_1000c00c
#define PTR_DAT_1000c00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c40
 */

undefined ** recovered_10003c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c00c;
}

#undef PTR_DAT_1000c00c

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
#define local_10 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 40))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_14 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003c50(undefined4 *param_1)

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
#undef local_10
#undef uStack_20
#undef local_24
#undef uStack_18
#undef local_1c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d00
 */

double recovered_10003d00(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10003d44
 */

double recovered_10003d44(undefined4 param_1,undefined4 param_2,int *param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10003dfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10003e34
 */

double recovered_10003e34(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10003eb4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10003ee4
 */

double recovered_10003ee4(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003f28
 */

double recovered_10003f28(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100040a0
#define DAT_100040a0 (*(double *)(((uintptr_t)&pf_window_literal_100040a0)))
#undef DAT_100040a8
#define DAT_100040a8 (*(double *)(((uintptr_t)&pf_window_literal_100040a8)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

double recovered_10003f70(undefined4 param_1,undefined4 param_2)

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
    return DAT_100040a0;
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
  return dVar4 + dVar4 + dVar5 * DAT_100040a8;
}

#undef DAT_100040a0
#undef DAT_100040a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040b0
 */

longlong recovered_100040b0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10004270(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10004170
#define DAT_10004170 (*(double *)(((uintptr_t)&pf_window_literal_10004170)))
#undef DAT_10004178
#define DAT_10004178 (*(double *)(((uintptr_t)&pf_window_literal_10004178)))
#undef DAT_10004180
#define DAT_10004180 (*(double *)(((uintptr_t)&pf_window_literal_10004180)))
#undef DAT_10004188
#define DAT_10004188 (*(double *)(((uintptr_t)&pf_window_literal_10004188)))
#undef DAT_10004190
#define DAT_10004190 (*(double *)(((uintptr_t)&pf_window_literal_10004190)))
#undef DAT_10004198
#define DAT_10004198 (*(double *)(((uintptr_t)&pf_window_literal_10004198)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e0
 */

double recovered_100040e0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10004170 < dVar1; dVar1 = dVar1 + DAT_10004178
      ) {
  }
  for (; dVar1 < DAT_10004180; dVar1 = dVar1 + DAT_10004188) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10004190 +
                 (dVar2 * dVar2 * dVar2) / DAT_10004198);
}

#undef DAT_10004170
#undef DAT_10004178
#undef DAT_10004180
#undef DAT_10004188
#undef DAT_10004190
#undef DAT_10004198

#undef DAT_10004228
#define DAT_10004228 (*(double *)(((uintptr_t)&pf_window_literal_10004228)))
#undef DAT_10004230
#define DAT_10004230 (*(double *)(((uintptr_t)&pf_window_literal_10004230)))
#undef DAT_10004238
#define DAT_10004238 (*(double *)(((uintptr_t)&pf_window_literal_10004238)))
#undef DAT_10004240
#define DAT_10004240 (*(double *)(((uintptr_t)&pf_window_literal_10004240)))
#undef DAT_10004248
#define DAT_10004248 (*(double *)(((uintptr_t)&pf_window_literal_10004248)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a0
 */

double recovered_100041a0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10004228 < dVar1; dVar1 = dVar1 + DAT_10004230
      ) {
  }
  for (; dVar1 < DAT_10004238; dVar1 = dVar1 + DAT_10004240) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10004248;
}

#undef DAT_10004228
#undef DAT_10004230
#undef DAT_10004238
#undef DAT_10004240
#undef DAT_10004248

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10004250(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10004270(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10004330(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100043b8(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10004400(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_100044d0
#define DAT_100044d0 (*(float *)(((uintptr_t)&pf_window_literal_100044d0)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

float recovered_10004490(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_100044d0;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_100044d0

/* Native bounded-magnitude float decomposition; Pooka's Free Software License. */
float recovered_100044d4(float value,int *exponent){
 if(exponent)*exponent=0;if(value==0.0f)return 0.0f;
 int power=0;float fraction=value<0?-value:value;
 while(fraction>=1.0f){fraction*=0.5f;power++;}
 while(fraction>0.0f && fraction<0.5f){fraction+=fraction;power--;}
 if(exponent)*exponent=power;return value<0?-fraction:fraction;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004590
 */

float recovered_10004590(float param_1,uint param_2)

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


#undef DAT_10004660
#define DAT_10004660 (*(float *)(((uintptr_t)&pf_window_literal_10004660)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045dc
 */

float recovered_100045dc(float param_1,float param_2)

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
    return DAT_10004660;
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

#undef DAT_10004660

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004664
 */

float recovered_10004664(float param_1)

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
 * Address: 0x1000469c
 */

float recovered_1000469c(float param_1)

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
 * Address: 0x100046e8
 */

double recovered_100046e8(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000473c
 */

float recovered_1000473c(float param_1)

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


#undef DAT_100047ec
#define DAT_100047ec (*(float *)(((uintptr_t)&pf_window_literal_100047ec)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004798
 */

float recovered_10004798(float param_1)

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
  return DAT_100047ec;
}

#undef DAT_100047ec

#undef DAT_10004928
#define DAT_10004928 (*(double *)(((uintptr_t)&pf_window_literal_10004928)))
#undef DAT_10004930
#define DAT_10004930 (*(float *)(((uintptr_t)&pf_window_literal_10004930)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047f0
 */

float recovered_100047f0(float param_1)

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
    return DAT_10004930;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10004928);
}

#undef DAT_10004928
#undef DAT_10004930

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004934
 */

longlong recovered_10004934(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10004270(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10004a00
#define DAT_10004a00 (*(double *)(((uintptr_t)&pf_window_literal_10004a00)))
#undef DAT_10004a08
#define DAT_10004a08 (*(double *)(((uintptr_t)&pf_window_literal_10004a08)))
#undef DAT_10004a10
#define DAT_10004a10 (*(double *)(((uintptr_t)&pf_window_literal_10004a10)))
#undef DAT_10004a18
#define DAT_10004a18 (*(double *)(((uintptr_t)&pf_window_literal_10004a18)))
#undef DAT_10004a20
#define DAT_10004a20 (*(double *)(((uintptr_t)&pf_window_literal_10004a20)))
#undef DAT_10004a28
#define DAT_10004a28 (*(double *)(((uintptr_t)&pf_window_literal_10004a28)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004968
 */

float recovered_10004968(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10004a00 < dVar1; dVar1 = dVar1 + DAT_10004a08) {
  }
  for (; dVar1 < DAT_10004a10; dVar1 = dVar1 + DAT_10004a18) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10004a20 +
                         (dVar2 * dVar2 * dVar2) / DAT_10004a28));
}

#undef DAT_10004a00
#undef DAT_10004a08
#undef DAT_10004a10
#undef DAT_10004a18
#undef DAT_10004a20
#undef DAT_10004a28

#undef DAT_10004ac0
#define DAT_10004ac0 (*(double *)(((uintptr_t)&pf_window_literal_10004ac0)))
#undef DAT_10004ac8
#define DAT_10004ac8 (*(double *)(((uintptr_t)&pf_window_literal_10004ac8)))
#undef DAT_10004ad0
#define DAT_10004ad0 (*(double *)(((uintptr_t)&pf_window_literal_10004ad0)))
#undef DAT_10004ad8
#define DAT_10004ad8 (*(double *)(((uintptr_t)&pf_window_literal_10004ad8)))
#undef DAT_10004ae0
#define DAT_10004ae0 (*(double *)(((uintptr_t)&pf_window_literal_10004ae0)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a30
 */

float recovered_10004a30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_10004ac0 < dVar1; dVar1 = dVar1 + DAT_10004ac8) {
  }
  for (; dVar1 < DAT_10004ad0; dVar1 = dVar1 + DAT_10004ad8) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_10004ae0);
}

#undef DAT_10004ac0
#undef DAT_10004ac8
#undef DAT_10004ad0
#undef DAT_10004ad8
#undef DAT_10004ae0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004ae8(float param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b04
 */

int recovered_10004b04(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10004c58
 */

int recovered_10004c58(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10004cd4;
  }
  bVar2 = false;
joined_r0x10004cd4:
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
 * Address: 0x10004db8
 */

double recovered_10004db8(byte *param_1,undefined4 *param_2)

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
      goto LAB_10004ea4;
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
LAB_10004ea4:
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10004f8c(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004db8(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000be42
#define DAT_1000be42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_1000be4c
#define str_1000be4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000be5d
#define str_1000be5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa8
 */

int recovered_10004fa8(char *buffer,ulong capacity,char *format,void *arguments)

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
    *buffer = '\0';
  }
  local_6c = 0;
  local_68 = capacity;
  local_70 = arguments;
LAB_10005028:
  while( true ) {
    pcVar7 = str_1000be5d;
    bVar13 = *format;
    pbVar10 = (byte *)buffer;
    if (bVar13 == 0x25) break;
    if (bVar13 == 0) {
      if (capacity != 0) {
        *buffer = 0;
      }
      return local_6c;
    }
    pdVar20 = local_70;
    if (1 < local_68) {
      *buffer = bVar13;
      local_68 = local_68 - 1;
      pbVar10 = (byte *)(buffer + 1);
    }
LAB_10005048:
    local_70 = pdVar20;
    local_6c = local_6c + 1;
    format = format + 1;
    buffer = (char *)pbVar10;
  }
  uVar11 = (uint)(byte)format[1];
  if (uVar11 == 0x25) goto code_r0x10005068;
  pbVar9 = (byte *)(format + 2);
  while (uVar11 = uVar11 - 0x20, uVar11 < 0x11) {
    if ((1 << (uVar11 & 0xff) & 0x12809U) == 0) {
      if (uVar11 == 10) {
        bVar13 = *pbVar9;
        local_70 = (double *)((int)local_70 + 4);
        format = (char *)pbVar9;
        goto LAB_100050d4;
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
LAB_100050d4:
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
      goto LAB_10005100;
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
LAB_10005100:
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
switchD_100052d4_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar10 = (byte *)(buffer + 1);
      *buffer = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10005b88;
  }
  pdVar20 = (double *)((int)local_70 + 4);
  local_64 = (byte *)buffer;
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
      goto LAB_100055a4;
    }
    uVar11 = (int)uVar17 >> 0x1f;
LAB_100055a4:
    if (0x7fffffff < uVar11) {
      if (1 < local_68) {
        local_68 = local_68 - 1;
        local_64 = (byte *)(buffer + 1);
        *buffer = 0x2d;
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
      local_60[-iVar8] = str_1000be5d[uVar17 + uVar12 * -10];
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
      goto LAB_10005b88;
    }
    break;
  default:
    goto switchD_100052d4_caseD_4a;
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
      pcVar7 = str_1000be4c;
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
      pbVar10 = (byte *)buffer;
      if (1 < local_68) {
        local_68 = local_68 - 1;
        pbVar10 = (byte *)(buffer + 1);
        *buffer = local_60[-iVar8];
      }
      iVar8 = iVar8 + 1;
      buffer = (char *)pbVar10;
    } while (iVar8 != 1);
    goto LAB_10005b88;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar10 = (byte *)(buffer + 1);
      *buffer = (byte)*(uint *)local_70;
    }
    goto LAB_10005048;
  case 0x66:
    if (bVar21) {
      if (local_68 < 2) {
      }
      else {
        pbVar10 = (byte *)(buffer + 1);
        *buffer = 0x30;
        if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
          uVar11 = local_68 & 0xfffffffe;
          buffer[1] = 0x2e;
          if (uVar11 == 2) {
            pbVar10 = (byte *)(buffer + 2);
          }
          else {
            buffer[2] = 0x30;
            if (local_68 - 5 < 0xfffffffd || local_68 == 2) {
              buffer[3] = 0x30;
              if (uVar11 == 4) {
                pbVar10 = (byte *)(buffer + 4);
              }
              else {
                buffer[4] = 0x30;
                if (local_68 - 7 < 0xfffffffd || local_68 == 4) {
                  buffer[5] = 0x30;
                  if (uVar11 == 6) {
                    pbVar10 = (byte *)(buffer + 6);
                  }
                  else {
                    buffer[6] = 0x30;
                    if (local_68 - 9 < 0xfffffffd || local_68 == 6) {
                      buffer[7] = 0x30;
                      local_68 = local_68 - 8;
                      pbVar10 = (byte *)(buffer + 8);
                      goto LAB_10005a7c;
                    }
                    pbVar10 = (byte *)(buffer + 7);
                  }
                }
                else {
                  pbVar10 = (byte *)(buffer + 5);
                }
              }
            }
            else {
              pbVar10 = (byte *)(buffer + 3);
            }
          }
        }
        local_68 = 1;
      }
LAB_10005a7c:
      local_6c = local_6c + 8;
      format = format + 1;
      buffer = (char *)pbVar10;
      local_70 = local_70 + 1;
    }
    else {
      dVar22 = *local_70;
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar22 < 0.0) {
        if (1 < local_68) {
          local_68 = local_68 - 1;
          local_64 = (byte *)(buffer + 1);
          *buffer = 0x2d;
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
        local_60[-iVar8] = str_1000be5d[uVar11 + uVar12 * -10];
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
LAB_10005a44:
        buffer = (char *)local_64;
      }
      else {
        *local_64 = 0x2e;
        uVar11 = local_68 - 1;
        buffer = (char *)(local_64 + 1);
        if (1 < uVar11) {
          dVar23 = (double)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
          uVar17 = local_68 & 0xfffffffe;
          uVar11 = 1;
          dVar22 = (dVar22 - dVar23) * 10.0;
          uVar14 = VectorFloatToSigned(dVar22,3);
          local_64[1] = (char)uVar14 + 0x30;
          if (uVar17 == 2) {
            buffer = (char *)(local_64 + 2);
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
                buffer = (char *)(local_64 + 4);
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
                    goto LAB_10005a44;
                  }
                  buffer = (char *)(local_64 + 6);
                }
                else {
                  buffer = (char *)(local_64 + 5);
                }
              }
            }
            else {
              buffer = (char *)(local_64 + 3);
            }
          }
        }
      }
      local_6c = local_6c + 7;
      format = format + 1;
      local_68 = uVar11;
      local_70 = local_70 + 1;
    }
    goto LAB_10005028;
  case 0x70:
    uVar11 = *(uint *)local_70;
    if (local_68 < 2) {
      uVar17 = local_68;
    }
    else {
      pbVar10 = (byte *)(buffer + 1);
      *buffer = 0x30;
      uVar17 = 1;
      if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
        uVar17 = local_68 - 2;
        pbVar10 = (byte *)(buffer + 2);
        buffer[1] = 0x78;
      }
    }
    iVar6 = 0;
    do {
      iVar8 = iVar6;
      local_60[iVar8] = str_1000be5d[uVar11 & 0xf];
      uVar11 = uVar11 >> 4;
      iVar6 = iVar8 + 1;
    } while (uVar11 != 0);
    iVar6 = -iVar8;
    local_6c = local_6c + iVar8 + 1 + 2;
    do {
      buffer = (char *)pbVar10;
      if (1 < uVar17) {
        uVar17 = uVar17 - 1;
        buffer = (char *)(pbVar10 + 1);
        *pbVar10 = local_60[-iVar6];
      }
      iVar6 = iVar6 + 1;
      pbVar10 = (byte *)buffer;
    } while (iVar6 != 1);
    format = format + 1;
    local_68 = uVar17;
    local_70 = pdVar20;
    goto LAB_10005028;
  case 0x73:
    if (uVar11 == 0) {
      format = format + 1;
      local_70 = pdVar20;
      goto LAB_10005028;
    }
    pbVar10 = *(byte **)local_70;
    if (pbVar10 == (byte *)0x0) {
      pbVar10 = &DAT_1000be42;
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
      goto LAB_10005aa0;
    case 6:
      uVar17 = *(uint *)local_70;
      uVar11 = (int)uVar17 >> 0x1f;
      local_70 = pdVar20;
      goto LAB_10005aa0;
    }
    uVar11 = 0;
    local_70 = pdVar20;
LAB_10005aa0:
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
      local_60[-iVar8] = str_1000be5d[uVar17 + uVar12 * -10];
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
        pbVar10 = (byte *)buffer;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          pbVar10 = (byte *)(buffer + 1);
          *buffer = local_60[-1 - iVar18];
        }
        bVar21 = iVar18 != -1;
        iVar18 = iVar18 + 1;
        buffer = (char *)pbVar10;
      } while (bVar21);
LAB_10005b88:
      format = format + 1;
      buffer = (char *)pbVar10;
      goto LAB_10005028;
    }
  }
  format = format + 1;
  buffer = (char *)local_64;
  goto LAB_10005028;
code_r0x10005068:
  if (local_68 < 2) {
  }
  else {
    local_68 = local_68 - 1;
    pbVar10 = (byte *)(buffer + 1);
    *buffer = 0x25;
  }
  local_6c = local_6c + 1;
  format = format + 2;
  buffer = (char *)pbVar10;
  goto LAB_10005028;
}

#undef DAT_1000be42
#undef str_1000be4c
#undef str_1000be5d
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10005d70(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004fa8(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(int * *)(((uintptr_t)pf_module_state + 0x29cU)))
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
 * Address: 0x10005da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005da0(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_1000c0b0 != 0;
          puVar4 = &DAT_1000c0b0;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_1000c0b8;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_1000c0b8 = piVar3;
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
      puVar4 = &DAT_1000c0b0;
      if (DAT_1000c0b0 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_1000c0b8;
      goto LAB_10005f84;
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
      bVar7 = DAT_1000c0b0 != 0;
      puVar4 = &DAT_1000c0b0;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_1000c0b8;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_10005f84:
      if (piVar5 == (int *)0x0) {
        DAT_1000c0b8 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b8
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fa0
 */

uint * recovered_10005fa0(uint *param_1,uint *param_2)

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
 * Address: 0x10006024
 */

undefined4 recovered_10006024(uint *param_1,int param_2)

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


#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
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
 * Address: 0x10006084
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006084(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == '\b') {
        if (DAT_1000c0bc != 0) {
          DAT_1000c0bc = DAT_1000c0bc - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1000c0bc == 0) {
            uVar2 = 0;
          }
          else {
            recovered_100025c8(local_224,&DAT_1000c0c0,DAT_1000c0bc);
            uVar2 = DAT_1000c0bc;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_1000c0bc = 0;
        }
        else {
          if (DAT_1000c0bc - 0x1ff < 0xfffffe00) {
            recovered_100025c8(local_224,&DAT_1000c0c0,DAT_1000c0bc);
            local_224[DAT_1000c0bc] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_1000c0bc = 0;
          }
          (&DAT_1000c0c0)[DAT_1000c0bc] = cVar1;
          DAT_1000c0bc = DAT_1000c0bc + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1000c0bc
#undef DAT_1000c0c0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
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
 * Address: 0x10006268
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006268(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_1000c0bc != 0) {
    recovered_100025c8(local_210,&DAT_1000c0c0,DAT_1000c0bc);
    uVar1 = DAT_1000c0bc;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_1000c0bc = 0;
  return;
}

#undef DAT_1000c0bc
#undef DAT_1000c0c0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
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
 * Address: 0x10006328
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006328(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_1000c0bc == 0) {
    return;
  }
  recovered_100025c8(auStack_214,&DAT_1000c0c0,DAT_1000c0bc);
  auStack_214[DAT_1000c0bc] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_1000c0bc = 0;
  return;
}

#undef DAT_1000c0bc
#undef DAT_1000c0c0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000be4b
#define DAT_1000be4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000be6e
#define DAT_1000be6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063e4
 */

void recovered_100063e4(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined1 *puVar2;

  format = &DAT_1000be6e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000be4b;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10005d70(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10006084(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000be4b
#undef DAT_1000be6e
#undef acStack_14c

#undef DAT_1000be8c
#define DAT_1000be8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000be71
#define str_1000be71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000643c
 */

void recovered_1000643c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1000368c(str_1000be71);
  recovered_10006084(str_1000be71,uVar1);
  uVar1 = recovered_1000368c(&DAT_1000be8c);
  recovered_10006084(&DAT_1000be8c,uVar1);
  return;
}

#undef DAT_1000be8c
#undef str_1000be71

#undef DAT_1000be8c
#define DAT_1000be8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000be8f
#define str_1000be8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006488
 */

void recovered_10006488(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1000368c(str_1000be8f);
  recovered_10006084(str_1000be8f,uVar1);
  uVar1 = recovered_1000368c(&DAT_1000be8c);
  recovered_10006084(&DAT_1000be8c,uVar1);
  return;
}

#undef DAT_1000be8c
#undef str_1000be8f

#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
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
 * Address: 0x100064d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100064d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1000c0bc != 0) {
    recovered_100025c8(auStack_224,&DAT_1000c0c0,DAT_1000c0bc);
    auStack_224[DAT_1000c0bc] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_1000c0bc = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_1000c0bc
#undef DAT_1000c0c0
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006628(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006630(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006634(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_1000be6e
#define DAT_1000be6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
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
#undef str_1000bf10
#define str_1000bf10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_1000bf1d
#define str_1000bf1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_1000bf2b
#define str_1000bf2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000663c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_1000663c(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint size;
  void *destination;
  undefined4 uVar7;
  undefined1 uVar8;
  char *unaff_r8;

  if (param_1 != (char *)0x0) {
    unaff_r8 = param_2;
  }
  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    uVar7 = 0x16;
    goto LAB_100068b0;
  }
  iVar2 = recovered_100036b4(param_1,str_1000bf10);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_1000683c:
    puVar4 = recovered_100024d0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002d58(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      recovered_10005d70((char *)(puVar4 + 1),0xf1,&DAT_1000be6e,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_100036b4(param_1,str_1000bf1d);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_1000683c;
    }
    iVar3 = recovered_100036b4(param_1,str_1000bf2b);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_1000683c;
    }
    puVar4 = recovered_100024d0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002d58(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10003a6c(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10003a6c(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10003a6c(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10003a6c(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10003a6c(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10003a6c(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10003a6c(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      recovered_10005d70((char *)(puVar4 + 1),0xf1,&DAT_1000be6e,param_1);
      recovered_10002d58(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10003a6c(unaff_r8,'w');
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
              destination = recovered_10002574((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_100068d8;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_100025c8(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_100068d8:
        *DAT_10010004 = uVar7;
        recovered_10002524(puVar4);
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
LAB_100068b0:
  *DAT_10010004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000be6e
#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000bf10
#undef str_1000bf1d
#undef str_1000bf2b
#undef local_24
#undef local_20

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
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
 * Address: 0x100069c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100069c0(char *param_1,char *param_2,uint *param_3)

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
        *DAT_10010004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_10002524((void *)param_3[0x3f]);
    }
    recovered_10002524(param_3);
  }
  recovered_1000663c(param_1,param_2);
  return;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
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
 * Address: 0x10006ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006ac0(uint *param_1)

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
      *DAT_10010004 = 5;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002524((void *)param_1[0x3f]);
  }
  recovered_10002524(param_1);
  return uVar3;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bb8
 */

uint recovered_10006bb8(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;
  uint uVar3;
  uint count;
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
        uVar5 = unaff_r4[0x42];
        if (uVar5 < (uint)unaff_r4[0x40]) {
          uVar3 = (uint)((ulonglong)param_3 * (ulonglong)param_2);
          uVar1 = unaff_r4[0x40] - uVar5;
          if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) != 0) {
            uVar3 = 0xffffffff;
          }
          count = uVar3;
          if (uVar1 < uVar3) {
            count = uVar1;
          }
          recovered_100025c8(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10000a28(count,param_2);
        }
        else {
          *(undefined1 *)(unaff_r4 + 0x45) = 1;
        }
      }
      else {
        do {
          puVar4 = param_1;
          uVar5 = param_2;
          do {
            uVar1 = recovered_10006ce4(unaff_r4);
            if (uVar1 == 0xffffffff) {
              return uVar3;
            }
            *puVar4 = (char)uVar1;
            uVar5 = uVar5 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar5 != 0);
          uVar3 = uVar3 + 1;
          param_1 = param_1 + param_2;
        } while (uVar3 != param_3);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


#undef DAT_1000be4b
#define DAT_1000be4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
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
 * Address: 0x10006ce4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006ce4(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
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
LAB_10006d40:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000c0bc != 0) {
      recovered_100025c8(auStack_220,&DAT_1000c0c0,DAT_1000c0bc);
      auStack_220[DAT_1000c0bc] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_1000c0bc = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000be4b,0);
      if (iVar1 != 0) {
        uVar2 = recovered_1000368c(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10006d40;
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

#undef DAT_1000be4b
#undef DAT_1000c0bc
#undef DAT_1000c0c0
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

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ee4
 */

int recovered_10006ee4(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint size;
  ulong count;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
    param_3 = 0;
  }
  else {
    count = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10006084(param_1,count);
      param_4[0x42] = param_4[0x42] + count;
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
      if (uVar3 < uVar2 + count) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size = uVar3;
          uVar3 = size << 1;
        } while (size < uVar2 + count);
        pvVar1 = recovered_10002574((void *)param_4[0x3f],size);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_10010004 = 0xc;
          return 0;
        }
        uVar2 = param_4[0x42];
        param_4[0x3f] = (uint)pvVar1;
        param_4[0x3e] = (uint)pvVar1;
        param_4[0x41] = size;
      }
      uVar3 = param_4[0x40];
      if (uVar3 < uVar2) {
        recovered_10002d58((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_100025c8((void *)(param_4[0x3f] + uVar2),param_1,count);
      uVar3 = param_4[0x42] + count;
      param_4[0x42] = uVar3;
      if (param_4[0x40] < uVar3) {
        param_4[0x40] = uVar3;
      }
      *(undefined2 *)((int)param_4 + 0x113) = 1;
    }
  }
  return param_3;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000705c
 */

undefined4 recovered_1000705c(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10007070;
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
LAB_10007070:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10010004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000710c
 */

undefined4 recovered_1000710c(int param_1)

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
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
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
 * Address: 0x10007134
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007134(uint *param_1)

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
        *DAT_10010004 = 5;
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_1000720c(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_1000721c(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000722c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10007248(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
  }
  return uVar1;
}


#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
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
 * Address: 0x1000726c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000726c(int param_1)

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
  *DAT_10010004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41e8U)))
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
 * Address: 0x100072fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100072fc(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  recovered_10002d58(&local_28,0,0xc);
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
  *DAT_10010004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10010004
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
 * Address: 0x10007470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007470(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10002d58(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_100024d0(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_100025c8(destination,local_24,local_20);
      }
      uVar2 = 1;
      *param_3 = local_20;
      *param_2 = destination;
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
 * Address: 0x10007570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10007570(int param_1,int param_2,int param_3)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100075f8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007600(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007604(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000760c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007614(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000761c
 */

int recovered_1000761c(char *left,char *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    if (count == 0) {
      return 0;
    }
    count = count - 1;
    uVar1 = (uint)(byte)*left;
    if (uVar1 != (byte)*right) break;
    left = left + 1;
    right = right + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - (byte)*right;
}


#undef DAT_1000be9f
#define DAT_1000be9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_1000bea2
#define str_1000bea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000beaf
#define str_1000beaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_1000beb9
#define str_1000beb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_1000becd
#define str_1000becd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000bedb
#define str_1000bedb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_1000beed
#define str_1000beed (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_1000bef9
#define str_1000bef9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000bf0a
#define str_1000bf0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007660
 */

char * recovered_10007660(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000be9f;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10007680_caseD_0;
  default:
    pcVar1 = str_1000bf0a;
switchD_10007680_caseD_0:
    return pcVar1;
  case 2:
    return str_1000bea2;
  case 5:
    return str_1000beaf;
  case 9:
    return str_1000beb9;
  case 0xc:
    return str_1000becd;
  case 0xd:
    return str_1000bedb;
  case 0x11:
    return str_1000beed;
  case 0x16:
    return str_1000bef9;
  }
}

#undef DAT_1000be9f
#undef str_1000bea2
#undef str_1000beaf
#undef str_1000beb9
#undef str_1000becd
#undef str_1000bedb
#undef str_1000beed
#undef str_1000bef9
#undef str_1000bf0a

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007760(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007768(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c2c0
#define DAT_1000c2c0 (*(int *)(((uintptr_t)pf_module_state + 0x4a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007770
 */

void recovered_10007770(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c2c0 = DAT_1000c2c0 + 1;
  return;
}

#undef DAT_1000c2c0

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007798(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100077a8(void *context){
 __asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) int recovered_100077f8(int context,int value){
 __asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr");
}


#undef DAT_100078d4
#define DAT_100078d4 (*(int *)(((uintptr_t)&pf_window_literal_100078d4)))
#undef DAT_100078d8
#define DAT_100078d8 (*(int *)(((uintptr_t)&pf_window_literal_100078d8)))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007850
 */

void recovered_10007850(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_100078dc;
  local_20 = DAT_100078d4 + 0x10007878;
  local_18 = DAT_100078d8 + 0x10007888;
  local_38 = 1;
  recovered_10008030(&uStack_3c);
  recovered_100024bc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x100078b0);
  (*pcVar1)();
}

#undef DAT_100078d4
#undef DAT_100078d8
#undef local_38
#undef uStack_3c
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078dc
 */

undefined4 recovered_100078dc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100078e4(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100078f4(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007850();
}


#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(int *)(((uintptr_t)pf_module_state + 0x4a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078f4
 */

void * recovered_100078f4(void *exception)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  undefined4 in_r1;
  int in_r2;

  recovered_10007e48((int)exception,in_r1,in_r2);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_10007850();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_1000c2c4;
  DAT_1000c2c4 = extraout_r0;
  return (void *)(extraout_r0 + 0x24);
}

#undef DAT_1000c2c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007934
 */

void * recovered_10007934(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100024d0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100024bc();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

void * recovered_10007960(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100024d0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100024bc();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10007a4c
#define DAT_10007a4c (*(int *)(((uintptr_t)&pf_window_literal_10007a4c)))
#undef DAT_10007a50
#define DAT_10007a50 (*(int *)(((uintptr_t)&pf_window_literal_10007a50)))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000798c
 */

void recovered_1000798c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100078dc;
  local_78 = DAT_10007a4c + 0x100079d0;
  local_70 = DAT_10007a50 + 0x100079e0;
  local_90 = 1;
  recovered_10008030(&uStack_94);
  recovered_10002524(param_1);
  recovered_10008054(&uStack_94);
  return;
}

#undef DAT_10007a4c
#undef DAT_10007a50
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_a0
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10007b14
#define DAT_10007b14 (*(int *)(((uintptr_t)&pf_window_literal_10007b14)))
#undef DAT_10007b18
#define DAT_10007b18 (*(int *)(((uintptr_t)&pf_window_literal_10007b18)))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a54
 */

void recovered_10007a54(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100078dc;
  local_78 = DAT_10007b14 + 0x10007a98;
  local_70 = DAT_10007b18 + 0x10007aa8;
  local_90 = 1;
  recovered_10008030(&uStack_94);
  recovered_10002524(param_1);
  recovered_10008054(&uStack_94);
  return;
}

#undef DAT_10007b14
#undef DAT_10007b18
#undef local_90
#undef local_7c
#undef auStack_a0
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10007bdc
#define DAT_10007bdc (*(int *)(((uintptr_t)&pf_window_literal_10007bdc)))
#undef DAT_10007be0
#define DAT_10007be0 (*(int *)(((uintptr_t)&pf_window_literal_10007be0)))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b1c
 */

void recovered_10007b1c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100078dc;
  local_78 = DAT_10007bdc + 0x10007b60;
  local_70 = DAT_10007be0 + 0x10007b70;
  local_90 = 1;
  recovered_10008030(&uStack_94);
  recovered_10002524(param_1);
  recovered_10008054(&uStack_94);
  return;
}

#undef DAT_10007bdc
#undef DAT_10007be0
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

#undef DAT_10007ca4
#define DAT_10007ca4 (*(int *)(((uintptr_t)&pf_window_literal_10007ca4)))
#undef DAT_10007ca8
#define DAT_10007ca8 (*(int *)(((uintptr_t)&pf_window_literal_10007ca8)))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007be4
 */

void recovered_10007be4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100078dc;
  local_78 = DAT_10007ca4 + 0x10007c28;
  local_70 = DAT_10007ca8 + 0x10007c38;
  local_90 = 1;
  recovered_10008030(&uStack_94);
  recovered_10002524(param_1);
  recovered_10008054(&uStack_94);
  return;
}

#undef DAT_10007ca4
#undef DAT_10007ca8
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cac
 */

undefined4 recovered_10007cac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cb4
 */

uint recovered_10007cb4(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cc4
 */

void recovered_10007cc4(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cd4
 */

void recovered_10007cd4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000c2cc
#define DAT_1000c2cc (*(uint *)(((uintptr_t)pf_module_state + 0x4b0U)))
#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cd8
 */

undefined4 * recovered_10007cd8(uint param_1)

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
  puVar1 = recovered_100024d0(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007850();
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
      if (size == uVar6) goto LAB_10007d54;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10007d54:
  DAT_1000c2cc = DAT_1000c2cc + 1;
  if (DAT_1000c2cc < 2) {
    DAT_1000c2cc = 1;
  }
  if (DAT_1000c2d0 == (undefined4 *)0x0) {
LAB_10007db0:
    puVar1[7] = DAT_1000c2cc;
    puVar1[3] = DAT_1000c2d0;
    DAT_1000c2d0 = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_1000c2d0;
    while (*(uint *)(iVar3 + 0x1c) != DAT_1000c2cc) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10007db0;
    }
    DAT_1000c2cc = DAT_1000c2cc + 1;
    if (DAT_1000c2cc < 2) {
      DAT_1000c2cc = 1;
    }
  } while( true );
}

#undef DAT_1000c2cc
#undef DAT_1000c2d0

#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de4
 */

void recovered_10007de4(int param_1)

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
  pvVar1 = DAT_1000c2d0;
  if (DAT_1000c2d0 == pointer) {
    puVar3 = &DAT_1000c2d0;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_10007e40;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10007e40:
  recovered_10002524(pointer);
  return;
}

#undef DAT_1000c2d0

#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(int *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e48
 */

void recovered_10007e48(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000c2d0;
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

#undef DAT_1000c2d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e7c
 */

int recovered_10007e7c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x24;
}


#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(void * *)(((uintptr_t)pf_module_state + 0x4a8U)))
#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e84
 */

void recovered_10007e84(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_1000c2c4;
  if (DAT_1000c2c4 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_1000c2c4 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_1000c2c4 + 8);
  *(undefined4 *)((int)DAT_1000c2c4 + 8) = 0;
  DAT_1000c2c4 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_1000c2d0;
  if (DAT_1000c2d0 == pointer) {
    puVar3 = &DAT_1000c2d0;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_10007f30;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10007f30:
  recovered_10002524(pointer);
  return;
}

#undef DAT_1000c2c4
#undef DAT_1000c2d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f3c
 */

void recovered_10007f3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10007f64((undefined4 *)(param_1 + -0x24));
}


#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a8U)))
#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(int * *)(((uintptr_t)pf_module_state + 0x4acU)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f64
 */

void recovered_10007f64(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_1000c2c8 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_1000c2c8;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_100088b8((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_10008124(param_1);
        puVar3 = DAT_1000c2c4;
                    /* WARNING: Subroutine does not return */
        if (DAT_1000c2c4 == (undefined4 *)0x0) {
          recovered_10007850();
        }
        DAT_1000c2c4[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
                    /* WARNING: Subroutine does not return */
        recovered_10007f64(puVar3);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007850();
}

#undef DAT_1000c2c4
#undef DAT_1000c2c8
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff8
 */

void recovered_10007ff8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = DAT_1000c2c4;
                    /* WARNING: Subroutine does not return */
  if (DAT_1000c2c4 == (undefined4 *)0x0) {
    recovered_10007850();
  }
  DAT_1000c2c4[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10007f64(puVar1);
}

#undef DAT_1000c2c4

#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008030
 */

void recovered_10008030(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c2c8;
  DAT_1000c2c8 = param_1;
  return;
}

#undef DAT_1000c2c8

#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008054
 */

void recovered_10008054(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000c2c8;
  if (DAT_1000c2c8 == param_1) {
    puVar2 = &DAT_1000c2c8;
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

#undef DAT_1000c2c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000809c
 */

void recovered_1000809c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007f64(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080a8
 */

void recovered_100080a8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007850();
}


#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(int * *)(((uintptr_t)pf_module_state + 0x4acU)))
#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080b4
 */

void recovered_100080b4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_1000c2d0; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_100080f8;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007850();
  }
LAB_100080f8:
  if (DAT_1000c2c8 != (int *)0x0) {
    DAT_1000c2c8 = (int *)*DAT_1000c2c8;
  }
  recovered_10008124(puVar1);
  return;
}

#undef DAT_1000c2c8
#undef DAT_1000c2d0

#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(int * *)(((uintptr_t)pf_module_state + 0x4acU)))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_30 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008124
 */

void recovered_10008124(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_1000c2c8 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_1000c2c8;
      if (DAT_1000c2c8 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_1000c2c8[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_100081d8:
        piVar1[1] = iVar3;
        recovered_10007798((int)piVar1);
                    /* WARNING: Subroutine does not return */
        recovered_100080b4(extraout_r0);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_100088b8((int)DAT_1000c2c8,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_100081d8;
      }
      DAT_1000c2c8 = (int *)*piVar1;
    } while (DAT_1000c2c8 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007850();
}

#undef DAT_1000c2c8
#undef local_2c
#undef local_28
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081e4
 */

void recovered_100081e4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100080b4(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081f0
 */

undefined4 recovered_100081f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081f8
 */

void recovered_100081f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007850();
}


#undef DAT_1000c064
#define DAT_1000c064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008204
 */

int recovered_10008204(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_100082f0:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_100082f0;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_1000c064) {
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

#undef DAT_1000c064

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082f8
 */

void recovered_100082f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082fc
 */

undefined4 recovered_100082fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008304(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008318
 */

bool recovered_10008318(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008358(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008384(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100083a0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100083bc(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100083d8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_100083f8(double value) {
 if(value!=value)return value;
 if(value>709.782712893384)return pf_bits_double(0x7ff0000000000000ULL);
 if(value< -745.1332191019411)return 0.0;
 unsigned halves=0;
 while(value>0.5){value*=0.5;++halves;}
 while(value< -0.5){value*=0.5;++halves;}
 double sum=1.0,term=1.0;
 for(int n=1;n<=32;++n){term=(value/(double)n)*term;sum=sum+term;}
 while(halves--){sum=sum*sum;}
 return sum;
}


/* Native exponential ABI; Pooka's Free Software License. */
float recovered_100084e0(float value){return (float)recovered_100083f8((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_100085e0(long double value){return (long double)recovered_100083f8((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_100086c8(long end,long start){return (double)end-(double)start;}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100086e4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10003eb4(param_1,param_2);
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
 * Address: 0x1000873c
 */

ulonglong recovered_1000873c(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x100087a8;
    }
  }
  bVar1 = false;
joined_r0x100087a8:
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulonglong recovered_100088b4(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  for (pbVar3 = param_1; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + 1) {
    uVar4 = (uint)*pbVar3;
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_1000521c;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_1000521c:
  if (uVar4 == 0x2d || uVar4 == 0x2b) {
    pbVar3 = pbVar3 + 1;
  }
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar3[1] | 0x20) == 0x78)) {
      pbVar3 = pbVar3 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar3 == 0x30)) {
    if ((pbVar3[1] | 0x20) == 0x78) {
      pbVar3 = pbVar3 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar3 = pbVar3 + -1;
  iVar8 = 1;
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    iVar5 = (int)(uVar1 >> 0x20);
    uVar7 = (uint)pbVar3[1];
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
    pbVar3 = pbVar3 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar3 = param_1;
    }
    *param_2 = pbVar3;
  }
  uVar2 = CONCAT44(-(iVar5 + (uint)((int)uVar1 != 0)),-(int)uVar1);
  if (uVar4 != 0x2d) {
    uVar2 = uVar1;
  }
  return uVar2;
}


#undef DAT_1000bfc0
#define DAT_1000bfc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a4U)))
#undef DAT_1000c064
#define DAT_1000c064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088b8
 */

undefined4 recovered_100088b8(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_10008c6c((uint)*pbVar10,&local_28);
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
          goto LAB_10008a90;
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
LAB_10008a90:
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
LAB_10008c4c:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000bfc0 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10008c6c(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_10008c4c;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10008c4c;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10008c4c;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_1000c064) goto LAB_10008c20;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_10008c4c;
  }
LAB_10008c20:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10008a90;
}

#undef DAT_1000bfc0
#undef DAT_1000c064
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c6c
 */

undefined4 * recovered_10008c6c(uint param_1,undefined4 *param_2)

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
      goto switchD_10008c9c_caseD_5;
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
switchD_10008c9c_caseD_5:
  return puVar5;
}


#undef DAT_1000c2d4
#define DAT_1000c2d4 (*(int * *)(((uintptr_t)pf_module_state + 0x4b8U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010814
#define DAT_40010814 (*(uint8_t *)(0x40010814U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010814
#define _DAT_40010814 (*(code * *)(0x40010814U))
#undef str_1000bf39
#define str_1000bf39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dfc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10008dfc(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint extraout_r1 = 0;
  uint extraout_r2 = 0;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  bool bVar18;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17 < _DAT_40010808)) &&
     (_DAT_40010814 != (code *)0x0)) {
    (*_DAT_40010814)();
  }
  piVar5 = recovered_10007934(0x4c);
  piVar5[0xc] = 0;
  piVar5[0xd] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  piVar5[0xe] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  piVar5[0xf] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar5[0x10] = 0;
  piVar5[1] = 0;
  piVar5[2] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  piVar5[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  piVar5[4] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  pcVar10 = str_1000bf39;
  if (param_1 != (char *)0x0) {
    pcVar10 = param_1;
  }
  piVar5[0x12] = 0;
  piVar5[0x11] = 0;
  piVar5[0xb] = 0;
  *(undefined1 *)((int)piVar5 + 0x2a) = 0;
  *(undefined2 *)(piVar5 + 10) = 0;
  piVar5[9] = 0;
  piVar5[8] = 0;
  piVar5[7] = 0;
  piVar5[6] = 0;
  *piVar5 = 0;
  piVar5[5] = 0;
  uVar11 = 0;
  do {
    uVar6 = uVar11;
    uVar11 = uVar6 + 1;
  } while (pcVar10[uVar6] != '\0');
  recovered_1000b720(piVar5,(int)pcVar10,uVar6);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  uVar11 = 1;
  if (1 < (int)param_2) {
    uVar11 = param_2;
  }
  uVar7 = 0;
  piVar5[6] = param_3;
  piVar5[4] = param_3;
  piVar5[5] = uVar11;
  piVar5[3] = uVar11;
  uVar13 = uVar11 >> 1;
  uVar6 = uVar11 * (uintptr_t)(uintptr_t)param_3 * 4;
  piVar5[0x11] = 0;
  piVar5[9] = param_3 >> 1;
  piVar5[8] = uVar13;
  if (uVar11 * (uintptr_t)(uintptr_t)param_3 * 4 <= (uint)piVar5[0x12]) goto LAB_10008fa8;
  puVar8 = recovered_10007934(uVar6);
  uVar11 = piVar5[0x11];
  puVar9 = (undefined4 *)piVar5[0x10];
  if (uVar11 != 0) {
    bVar18 = uVar11 == 0x10;
    uVar7 = 0;
    uVar13 = extraout_r2;
    if (0xf < uVar11) {
      uVar13 = (int)puVar8 - (int)puVar9;
      bVar18 = uVar13 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar13) && !bVar18) {
      uVar7 = uVar11 & 0xfffffff0;
      puVar14 = puVar8;
      uVar13 = uVar7;
      puVar16 = puVar9;
      do {
        uVar1 = *puVar16;
        uVar2 = puVar16[1];
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        puVar16 = puVar16 + 4;
        uVar13 = uVar13 - 0x10;
        *puVar14 = uVar1;
        puVar14[1] = uVar2;
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        puVar14 = puVar14 + 4;
      } while (uVar13 != 0);
      if (uVar11 == uVar7) goto LAB_10008f98;
    }
    iVar12 = uVar11 - uVar7;
    puVar15 = (undefined1 *)((int)puVar8 + uVar7);
    puVar17 = (undefined1 *)((int)puVar9 + uVar7);
    do {
      iVar12 = iVar12 + -1;
      *puVar15 = *puVar17;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar12 != 0);
  }
LAB_10008f98:
  recovered_1000798c(puVar9);
  uVar7 = piVar5[0x11];
  piVar5[0x12] = uVar6;
  piVar5[0x10] = (int)puVar8;
  uVar13 = extraout_r1;
LAB_10008fa8:
  if (uVar7 < uVar6) {
    uVar13 = 0;
    do {
      *(undefined1 *)(piVar5[0x10] + uVar7) = 0;
      uVar7 = piVar5[0x11] + 1;
      piVar5[0x11] = uVar7;
    } while (uVar7 < uVar6);
  }
  DAT_1000c2d4 = piVar5;
  recovered_10009010((int)piVar5,uVar13);
  recovered_10009370((int)piVar5);
  return piVar5;
}

#undef DAT_1000c2d4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010814
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010814
#undef str_1000bf39

#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_34 (*(int *)(pf_stack_frame + 44))
#define local_24 (*(undefined1 *)(pf_stack_frame + 60))
#define local_23 (*(undefined2 *)(pf_stack_frame + 61))
#define local_21 (*(undefined1 *)(pf_stack_frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009010
 */

void recovered_10009010(int param_1,int param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r2 = 0;
  undefined8 *puVar8;
  uint extraout_r2_00 = 0;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;

  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar6 = iVar2;
  if (0 < iVar2) {
    iVar6 = *(int *)(param_1 + 0x10);
    param_2 = iVar6;
  }
  if (iVar6 < 1) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x48);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar9 = iVar2 * (uintptr_t)(uintptr_t)param_2 * 4;
  if (uVar7 < (uint)(iVar2 * (uintptr_t)(uintptr_t)param_2 * 4)) {
    puVar4 = recovered_10007934(uVar9);
    uVar7 = *(uint *)(param_1 + 0x44);
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    if (uVar7 != 0) {
      bVar19 = uVar7 == 0x10;
      uVar16 = 0;
      uVar3 = extraout_r2;
      if (0xf < uVar7) {
        uVar3 = (int)puVar4 - (int)puVar5;
        bVar19 = uVar3 == 0xf;
      }
      if ((0xf < uVar7 && 0xe < uVar3) && !bVar19) {
        uVar16 = uVar7 & 0xfffffff0;
        puVar8 = puVar4;
        uVar3 = uVar16;
        puVar12 = puVar5;
        do {
          uVar25 = *puVar12;
          uVar26 = puVar12[1];
          puVar12 = puVar12 + 2;
          uVar3 = uVar3 - 0x10;
          *puVar8 = uVar25;
          puVar8[1] = uVar26;
          puVar8 = puVar8 + 2;
        } while (uVar3 != 0);
        if (uVar7 == uVar16) goto LAB_100090e0;
      }
      iVar6 = uVar7 - uVar16;
      puVar15 = (undefined1 *)((int)puVar4 + uVar16);
      puVar13 = (undefined1 *)((int)puVar5 + uVar16);
      do {
        iVar6 = iVar6 + -1;
        *puVar15 = *puVar13;
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar6 != 0);
    }
LAB_100090e0:
    recovered_1000798c(puVar5);
    uVar3 = *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x48) = uVar9;
    *(undefined8 **)(param_1 + 0x40) = puVar4;
    uVar7 = extraout_r2_00;
  }
  while (uVar3 < uVar9) {
    uVar7 = *(uint *)(param_1 + 0x40);
    *(undefined1 *)(uVar7 + uVar3) = 0;
    uVar3 = *(int *)(param_1 + 0x44) + 1;
    *(uint *)(param_1 + 0x44) = uVar3;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = *(uint *)(param_1 + 0x38);
    uVar9 = uVar3;
    if (0 < (int)uVar3) {
      uVar9 = *(uint *)(param_1 + 0x3c);
      uVar7 = uVar9;
    }
    if (0 < (int)uVar9) {
      fVar20 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
      fVar22 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar21 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
      fVar23 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      fVar24 = fVar23 / fVar22;
      if (fVar21 / fVar20 < fVar23 / fVar22) {
        fVar24 = fVar21 / fVar20;
      }
      local_44 = (uint)(fVar24 * fVar20);
      local_48 = (uint)(fVar24 * fVar22);
      if ((int)local_44 < 2) {
        local_44 = 1;
      }
      local_34 = (int)(*(int *)(param_1 + 0x10) - local_44) / 2;
      bVar1 = 1;
      if ((int)local_48 < 2) {
        local_48 = 1;
      }
      iVar6 = (int)(*(int *)(param_1 + 0xc) - local_48) / 2;
      goto LAB_10009150;
    }
  }
  iVar6 = 0;
  bVar1 = 0;
  local_34 = 0;
  local_44 = 0;
  local_48 = 0;
LAB_10009150:
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar2) {
    iVar11 = 0;
    iVar17 = *(int *)(param_1 + 0xc);
    do {
      if (0 < iVar17) {
        iVar2 = 0;
        do {
          local_23 = *(undefined2 *)(param_1 + 0x1e);
          local_24 = *(undefined1 *)(param_1 + 0x1d);
          local_21 = 0xff;
          if (((((bool)(bVar1 & iVar6 <= iVar2)) && (iVar2 < (int)(local_48 + iVar6))) &&
              (local_34 <= iVar11)) && (iVar11 < (int)(local_44 + local_34))) {
            iVar14 = *(int *)(param_1 + 0x2c);
            iVar18 = *(int *)(param_1 + 0x38);
            iVar10 = *(int *)(param_1 + 0x3c);
            uVar7 = recovered_10000ab0(iVar10 * (iVar11 - local_34),local_44);
            uVar9 = iVar10 - 1;
            if ((int)uVar7 <= (int)uVar9) {
              uVar9 = uVar7;
            }
            if ((int)uVar7 < 0) {
              uVar9 = 0;
            }
            uVar3 = recovered_10000ab0(iVar18 * (iVar2 - iVar6),local_48);
            uVar7 = iVar18 - 1U;
            if ((int)uVar3 <= (int)(iVar18 - 1U)) {
              uVar7 = uVar3;
            }
            iVar10 = uVar9 * iVar18 + uVar7;
            if ((int)uVar3 < 0) {
              iVar10 = uVar9 * iVar18;
            }
            puVar15 = (undefined1 *)(iVar14 + iVar10 * 4);
            local_24 = *puVar15;
            local_23 = *(undefined2 *)(puVar15 + 1);
          }
          local_21 = 0xff;
          recovered_100025c8((void *)(*(int *)(param_1 + 0x40) + (iVar11 * iVar17 + iVar2) * 4),
                             &local_24,4);
          iVar17 = *(int *)(param_1 + 0xc);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar17);
        iVar2 = *(int *)(param_1 + 0x10);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
  }
  return;
}

#undef local_48
#undef local_44
#undef local_34
#undef local_24
#undef local_23
#undef local_21

#undef DAT_1000c2d8
#define DAT_1000c2d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000c2dc
#define DAT_1000c2dc (*(int *)(((uintptr_t)pf_module_state + 0x4c0U)))
#undef DAT_1000c2e0
#define DAT_1000c2e0 (*(int *)(((uintptr_t)pf_module_state + 0x4c4U)))
#undef DAT_1000c2e4
#define DAT_1000c2e4 (*(uint *)(((uintptr_t)pf_module_state + 0x4c8U)))
#undef DAT_1000c2e8
#define DAT_1000c2e8 (*(uint *)(((uintptr_t)pf_module_state + 0x4ccU)))
#undef DAT_1000c2ec
#define DAT_1000c2ec (*(uint *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_1000c2f0
#define DAT_1000c2f0 (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_1000c2f4
#define DAT_1000c2f4 (*(uint *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_1000c2f8
#define DAT_1000c2f8 (*(uint *)(((uintptr_t)pf_module_state + 0x4dcU)))
#undef DAT_1000c2fc
#define DAT_1000c2fc (*(uint *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1000c300
#define DAT_1000c300 (*(uint *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_1000c304
#define DAT_1000c304 (*(uint *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_1000c308
#define DAT_1000c308 (*(uint *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001087c
#define DAT_4001087c (*(uint8_t *)(0x4001087cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001087c
#define _DAT_4001087c (*(code * *)(0x4001087cU))
#define local_78 (*(uint *)(pf_stack_frame + 24))
#define local_60 (*(uint *)(pf_stack_frame + 48))
#define local_54 (*(uint *)(pf_stack_frame + 60))
#define local_50 (*(uint *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009370(int param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint extraout_r2 = 0;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  undefined8 uVar30;

  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar7 = *(int *)(param_1 + 0xc);
    if (0 < iVar7) {
      iVar7 = *(int *)(param_1 + 0x10);
    }
    if ((((0 < iVar7) && (recovered_10002d58(&DAT_1000c2d8,0,0x34), _DAT_40010800 == 0x50414d57)) &&
        (_DAT_40010804 != 0)) &&
       (((0x7f < _DAT_40010808 && (_DAT_4001087c != (code *)0x0)) &&
        ((iVar8 = (*_DAT_4001087c)(&DAT_1000c2d8), uVar6 = DAT_1000c308, uVar14 = DAT_1000c300,
         uVar18 = DAT_1000c2fc, uVar26 = DAT_1000c2f8, uVar17 = DAT_1000c2f4, uVar5 = DAT_1000c2e8,
         iVar7 = DAT_1000c2d8, iVar8 != 0 && (DAT_1000c2d8 != 0 || DAT_1000c2dc != 0)))))) {
      uVar9 = extraout_r2;
      if (DAT_1000c2e0 != 0) {
        local_54 = DAT_1000c2e4;
        uVar9 = DAT_1000c2e4;
      }
      if (DAT_1000c2e0 != 0 && uVar9 != 0) {
        uVar9 = 0;
        if (DAT_1000c2e8 != 0) {
          local_50 = DAT_1000c2ec;
          uVar9 = DAT_1000c2ec;
        }
        if (((DAT_1000c2e8 != 0 && uVar9 != 0) && (DAT_1000c2f0 == 0x20)) && (DAT_1000c2f4 != 0)) {
          uVar9 = 0x20;
          if (DAT_1000c2fc != 0) {
            local_78 = DAT_1000c304;
            uVar9 = DAT_1000c304;
          }
          if (((DAT_1000c2fc != 0 && uVar9 != 0) && (DAT_1000c2e8 <= local_54 >> 2)) &&
             (DAT_1000c2dc == 0)) {
            bVar1 = *(byte *)(param_1 + 0x1e);
            uVar9 = ~(-1 << (DAT_1000c2fc & 0xff));
            if (0x1f < DAT_1000c2fc) {
              uVar9 = 0xffffffff;
            }
            bVar2 = *(byte *)(param_1 + 0x1d);
            uVar10 = ~(-1 << (DAT_1000c2f4 & 0xff));
            if (0x1f < DAT_1000c2f4) {
              uVar10 = 0xffffffff;
            }
            bVar3 = *(byte *)(param_1 + 0x1f);
            uVar20 = DAT_1000c300 & 0xff;
            uVar21 = DAT_1000c2f8 & 0xff;
            uVar11 = ~(-1 << (local_78 & 0xff));
            if (0x1f < local_78) {
              uVar11 = 0xffffffff;
            }
            uVar15 = 0;
            uVar25 = DAT_1000c308 & 0xff;
            uVar19 = 1;
            do {
              bVar27 = uVar19 != 0;
              uVar19 = 0;
              if (bVar27) {
                uVar19 = 0;
                do {
                  *(uint *)(uVar15 * local_54 + iVar7 + uVar19 * 4) =
                       (uVar9 * bVar1 + 0x7f) / 0xff << uVar20 |
                       (uVar10 * bVar2 + 0x7f) / 0xff << uVar21 |
                       (uVar11 * bVar3 + 0x7f) / 0xff << uVar25;
                  uVar19 = uVar19 + 1;
                } while (uVar5 != uVar19);
                uVar19 = uVar5;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != local_50);
            uVar25 = *(uint *)(param_1 + 0xc);
            uVar21 = *(uint *)(param_1 + 0x10);
            lVar4 = (ulonglong)uVar5 * (ulonglong)uVar21;
            uVar29 = recovered_10002184((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),uVar25,0);
            uVar20 = (uint)uVar29;
            if (local_50 < uVar20) {
              lVar4 = (ulonglong)local_50 * (ulonglong)uVar25;
              uVar29 = recovered_10002184((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),uVar21,0);
              local_60 = (uint)uVar29;
              if (local_60 < 2) {
                local_60 = 1;
              }
              uVar20 = local_50;
            }
            else {
              if (uVar20 < 2) {
                uVar20 = 1;
              }
              local_60 = uVar5;
            }
            uVar21 = local_60;
            if (local_60 < 2) {
              uVar21 = 1;
            }
            uVar25 = uVar5 - local_60 >> 1;
            uVar15 = 0;
            iVar8 = *(int *)(param_1 + 0x40);
            uVar19 = local_50 - uVar20 >> 1;
            do {
              lVar4 = (ulonglong)uVar15 * (ulonglong)*(uint *)(param_1 + 0x10);
              uVar29 = recovered_10002184((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),uVar20,0);
              uVar22 = 0;
              do {
                uVar24 = *(uint *)(param_1 + 0xc);
                lVar4 = (ulonglong)uVar22 * (ulonglong)uVar24;
                uVar30 = recovered_10002184((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),local_60,0)
                ;
                pbVar16 = (byte *)(iVar8 + (uVar24 * (int)uVar29 + (int)uVar30) * 4);
                *(uint *)((uVar15 + uVar19) * local_54 + iVar7 + uVar25 * 4 + uVar22 * 4) =
                     (uVar9 * pbVar16[1] + 0x7f) / 0xff << (uVar14 & 0xff) |
                     (uVar10 * *pbVar16 + 0x7f) / 0xff << (uVar26 & 0xff) |
                     (uVar11 * pbVar16[2] + 0x7f) / 0xff << (uVar6 & 0xff);
                uVar22 = uVar22 + 1;
              } while (uVar21 != uVar22);
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar20);
            uVar21 = *(uint *)(param_1 + 0x14);
            uVar9 = uVar21;
            uVar10 = 0x80808081;
            if (0 < (int)uVar21) {
              uVar9 = *(uint *)(param_1 + 0x18);
              uVar10 = uVar9;
            }
            if (0 < (int)uVar9) {
              uVar11 = *(uint *)(param_1 + 0x20);
              uVar9 = uVar21 - 1;
              if ((int)uVar11 <= (int)(uVar21 - 1)) {
                uVar9 = uVar11;
              }
              if ((int)uVar11 < 0) {
                uVar9 = 0;
              }
              uVar11 = *(uint *)(param_1 + 0x24);
              uVar29 = recovered_10002184((uint)((ulonglong)uVar9 * (ulonglong)local_60),
                                          local_60 * ((int)uVar9 >> 0x1f) +
                                          (int)((ulonglong)uVar9 * (ulonglong)local_60 >> 0x20),
                                          uVar21,0);
              uVar9 = uVar10 - 1;
              if ((int)uVar11 <= (int)(uVar10 - 1)) {
                uVar9 = uVar11;
              }
              if ((int)uVar11 < 0) {
                uVar9 = 0;
              }
              uVar30 = recovered_10002184((uint)((ulonglong)uVar9 * (ulonglong)uVar20),
                                          uVar20 * ((int)uVar9 >> 0x1f) +
                                          (int)((ulonglong)uVar9 * (ulonglong)uVar20 >> 0x20),uVar10
                                          ,0);
              uVar9 = 0x1010100;
              if (*(char *)(param_1 + 0x28) == '\x01') {
                uVar10 = ((0x3c << (local_78 & 0xff)) + 0x43U) / 0xff;
                if (0x1f < local_78) {
                  uVar10 = 0;
                }
                uVar20 = ((0x3c << (uVar18 & 0xff)) + 0x43U) / 0xff;
                if (0x1f < uVar18) {
                  uVar20 = 0;
                }
                if (uVar17 < 0x20) {
                  uVar9 = ((0xff << (uVar17 & 0xff)) - 0x80U) / 0xff;
                }
                uVar17 = uVar20 << (uVar14 & 0xff) | uVar10 << (uVar6 & 0xff) |
                         uVar9 << (uVar26 & 0xff);
              }
              else if (*(char *)(param_1 + 0x29) == '\x01') {
                uVar10 = ((0x3c << (local_78 & 0xff)) + 0x43U) / 0xff;
                if (0x1f < local_78) {
                  uVar10 = 0;
                }
                if (uVar18 < 0x20) {
                  uVar9 = ((0xff << (uVar18 & 0xff)) - 0x80U) / 0xff;
                }
                uVar18 = ((0x3c << (uVar17 & 0xff)) + 0x43U) / 0xff;
                if (0x1f < uVar17) {
                  uVar18 = 0;
                }
                uVar17 = uVar9 << (uVar14 & 0xff) | uVar10 << (uVar6 & 0xff) |
                         uVar18 << (uVar26 & 0xff);
              }
              else {
                uVar10 = 0x1010100;
                if (local_78 < 0x20) {
                  uVar10 = ((0xff << (local_78 & 0xff)) - 0x80U) / 0xff;
                }
                if (*(char *)(param_1 + 0x2a) == '\x01') {
                  uVar20 = ((0x50 << (uVar17 & 0xff)) + 0x2fU) / 0xff;
                  if (0x1f < uVar17) {
                    uVar20 = 0;
                  }
                  if (uVar18 < 0x20) {
                    uVar9 = ((0x82 << (uVar18 & 0xff)) - 3U) / 0xff;
                  }
                }
                else {
                  uVar20 = 0x1010100;
                  if (uVar17 < 0x20) {
                    uVar20 = ((0xff << (uVar17 & 0xff)) - 0x80U) / 0xff;
                  }
                  if (uVar18 < 0x20) {
                    uVar9 = ((0xff << (uVar18 & 0xff)) - 0x80U) / 0xff;
                  }
                }
                uVar17 = uVar9 << (uVar14 & 0xff) | uVar20 << (uVar26 & 0xff) |
                         uVar10 << (uVar6 & 0xff);
              }
              iVar8 = -7;
              do {
                iVar23 = -7;
                uVar26 = uVar19 + (int)uVar30 + iVar8;
                do {
                  iVar12 = recovered_100024c4(iVar23);
                  iVar13 = recovered_100024c4(iVar8);
                  if ((iVar13 + iVar12 < 8) &&
                     (uVar18 = uVar25 + (int)uVar29 + iVar23, -1 < (int)uVar18 && -1 < (int)uVar26))
                  {
                    bVar28 = uVar18 <= uVar5;
                    bVar27 = uVar5 == uVar18;
                    if (bVar28 && !bVar27) {
                      bVar28 = uVar26 <= local_50;
                      bVar27 = local_50 == uVar26;
                    }
                    if (bVar28 && !bVar27) {
                      uVar14 = uVar17;
                      if (5 < iVar13 + iVar12) {
                        uVar14 = 0;
                      }
                      *(uint *)(uVar26 * local_54 + iVar7 + uVar18 * 4) = uVar14;
                    }
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 != 8);
                iVar8 = iVar8 + 1;
              } while (iVar8 != 8);
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_1000c2d8
#undef DAT_1000c2dc
#undef DAT_1000c2e0
#undef DAT_1000c2e4
#undef DAT_1000c2e8
#undef DAT_1000c2ec
#undef DAT_1000c2f0
#undef DAT_1000c2f4
#undef DAT_1000c2f8
#undef DAT_1000c2fc
#undef DAT_1000c300
#undef DAT_1000c304
#undef DAT_1000c308
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001087c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001087c
#undef local_78
#undef local_60
#undef local_54
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a78
 */

void recovered_10009a78(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


#undef DAT_1000c2d4
#define DAT_1000c2d4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b8U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010818
#define DAT_40010818 (*(uint8_t *)(0x40010818U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010818
#define _DAT_40010818 (*(code * *)(0x40010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a88
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009a88(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    if (DAT_1000c2d4 == param_1) {
      DAT_1000c2d4 = (undefined4 *)0x0;
    }
    param_1[0x11] = 0;
    recovered_1000798c((void *)param_1[0x10]);
    param_1[0xc] = 0;
    recovered_1000798c((void *)param_1[0xb]);
    recovered_1000798c((void *)*param_1);
    recovered_1000798c(param_1);
    if (_DAT_40010800 != 0x50414d57) {
      return;
    }
    if (((_DAT_40010804 != 0) && (0x1b < _DAT_40010808)) && (_DAT_40010818 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10009b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_40010818)();
      return;
    }
  }
  return;
}

#undef DAT_1000c2d4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010818
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010818

#undef DAT_10009ca8
#define DAT_10009ca8 (*(int *)(((uintptr_t)&pf_window_literal_10009ca8)))
#undef DAT_10009cac
#define DAT_10009cac (*(int *)(((uintptr_t)&pf_window_literal_10009cac)))
#undef DAT_1000be4b
#define DAT_1000be4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41ecU)))
#define local_a4 (*(void * *)(pf_stack_frame + 28))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 32))
#define local_9c (*(int *)(pf_stack_frame + 36))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b48
 */

void * recovered_10009b48(undefined4 *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  undefined1 *puVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (undefined1 *)0x0;
  local_7c = DAT_10010008;
  local_78 = DAT_10009ca8 + 0x10009b9c;
  local_70 = DAT_10009cac + 0x10009bac;
  recovered_10008030(&uStack_94);
  uVar2 = 1;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined1 *)*param_1;
    local_90 = 0xffffffff;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_1000be4b;
    }
    recovered_1000b720((int *)&local_a0,(int)puVar3,param_1[1]);
    uVar2 = local_9c + 1;
  }
  local_90 = 1;
  local_a4 = recovered_10007960(uVar2);
  local_90 = 2;
  puVar3 = &DAT_1000be4b;
  if (local_a0 != (undefined1 *)0x0) {
    puVar3 = local_a0;
  }
  recovered_100025c8(local_a4,puVar3,local_9c + 1);
  pvVar1 = local_a4;
  recovered_1000798c(local_a0);
  recovered_10008054(&uStack_94);
  return pvVar1;
}

#undef DAT_10009ca8
#undef DAT_10009cac
#undef DAT_1000be4b
#undef DAT_10010008
#undef local_a4
#undef local_a0
#undef local_9c
#undef auStack_b0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cb0
 */

void recovered_10009cb0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ce4
 */

void recovered_10009ce4(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    return;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = 1;
  if (1 < param_2) {
    iVar2 = param_2;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x18) = param_3;
  iVar1 = iVar2 + -1;
  if (iVar3 <= iVar2 + -1) {
    iVar1 = iVar3;
  }
  if (iVar3 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x10) = param_3;
  iVar3 = param_3 + -1;
  if (iVar4 <= param_3 + -1) {
    iVar3 = iVar4;
  }
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x24) = iVar3;
  recovered_10009010(param_1,iVar3);
  return;
}


#undef DAT_1000be4b
#define DAT_1000be4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d4c
 */

void recovered_10009d4c(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = &DAT_1000be4b;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 + 1;
  } while (puVar2[uVar3] != '\0');
  recovered_1000b720(param_1,(int)puVar2,uVar3);
  return;
}

#undef DAT_1000be4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d88
 */

void recovered_10009d88(int param_1,int *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int unaff_r4;
  int iVar2;

  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      param_3 = (undefined1 *)param_2[2];
    }
    if (param_2 != (int *)0x0 && param_3 != (undefined1 *)0x0) {
      iVar1 = *param_2;
      iVar2 = iVar1;
      if (0 < iVar1) {
        iVar2 = param_2[1];
        unaff_r4 = iVar2;
      }
      if (iVar2 < 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      recovered_1000bcb8((int *)(param_1 + 0x2c),*(int *)(param_1 + 0x2c),param_3,
                         param_3 + iVar1 * (uintptr_t)unaff_r4 * 4);
      iVar2 = param_2[1];
      *(int *)(param_1 + 0x38) = *param_2;
      *(int *)(param_1 + 0x3c) = iVar2;
      recovered_10009010(param_1,iVar2);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e08
 */

void recovered_10009e08(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r1 = 0;

  if (param_1 == 0) {
    return;
  }
  recovered_10009e34();
  recovered_10009010(param_1,extraout_r1);
  recovered_10009370(param_1);
  return;
}


#undef DAT_1000c07c
#define DAT_1000c07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef DAT_1000c07d
#define DAT_1000c07d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000c07e
#define DAT_1000c07e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x262U)))
#undef DAT_1000c07f
#define DAT_1000c07f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x263U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_1000c081
#define DAT_1000c081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265U)))
#undef DAT_1000c082
#define DAT_1000c082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x266U)))
#undef DAT_1000c083
#define DAT_1000c083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268U)))
#undef DAT_1000c085
#define DAT_1000c085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x269U)))
#undef DAT_1000c086
#define DAT_1000c086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef DAT_1000c087
#define DAT_1000c087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26bU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef DAT_1000c089
#define DAT_1000c089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_1000c08a
#define DAT_1000c08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef DAT_1000c08b
#define DAT_1000c08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_1000c08d
#define DAT_1000c08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_1000c08e
#define DAT_1000c08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x272U)))
#undef DAT_1000c08f
#define DAT_1000c08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_1000c091
#define DAT_1000c091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_1000c092
#define DAT_1000c092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_1000c093
#define DAT_1000c093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef DAT_1000c095
#define DAT_1000c095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x279U)))
#undef DAT_1000c096
#define DAT_1000c096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27aU)))
#undef DAT_1000c097
#define DAT_1000c097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27bU)))
#undef DAT_1000c098
#define DAT_1000c098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef DAT_1000c099
#define DAT_1000c099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27dU)))
#undef DAT_1000c09a
#define DAT_1000c09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27eU)))
#undef DAT_1000c09b
#define DAT_1000c09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_1000c09d
#define DAT_1000c09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1000c09e
#define DAT_1000c09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x282U)))
#undef DAT_1000c09f
#define DAT_1000c09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x283U)))
#undef DAT_1000c0a0
#define DAT_1000c0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_1000c0a1
#define DAT_1000c0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x285U)))
#undef DAT_1000c0a2
#define DAT_1000c0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x286U)))
#undef DAT_1000c0a3
#define DAT_1000c0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef DAT_1000c0a4
#define DAT_1000c0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_1000c0a5
#define DAT_1000c0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1000c0a6
#define DAT_1000c0a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1000c0a7
#define DAT_1000c0a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_1000c0a8
#define DAT_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1000c0a9
#define DAT_1000c0a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1000c0aa
#define DAT_1000c0aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
#undef DAT_1000c2d4
#define DAT_1000c2d4 (*(int *)(((uintptr_t)pf_module_state + 0x4b8U)))
#undef DAT_1000c30c
#define DAT_1000c30c (*(int *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_40010880
#define DAT_40010880 (*(uint8_t *)(0x40010880U))
#undef PTR_DAT_1001000c
#define PTR_DAT_1001000c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x41f0U)))
#undef PTR_DAT_10010074
#define PTR_DAT_10010074 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4258U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
#undef _DAT_40010880
#define _DAT_40010880 (*(code * *)(0x40010880U))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define uStack_3c (*(uint *)(pf_stack_frame + 20))
#define uStack_2c (*(uint *)(pf_stack_frame + 36))
#define local_40 (*(uint *)(pf_stack_frame + 16))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e34
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009e34(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;

  if (DAT_1000c2d4 == 0) {
    DAT_1000c07d = 0;
    DAT_1000c07c = 0;
    DAT_1000c07e = 0;
    DAT_1000c07f = 0;
    DAT_1000c080 = 0;
    DAT_1000c081 = 0;
    DAT_1000c082 = 0;
    DAT_1000c083 = 0;
    DAT_1000c084 = 0;
    DAT_1000c085 = 0;
    DAT_1000c086 = 0;
    DAT_1000c087 = 0;
    DAT_1000c088 = 0;
    DAT_1000c089 = 0;
    DAT_1000c08a = 0;
    DAT_1000c08b = 0;
    DAT_1000c08c = 0;
    DAT_1000c08d = 0;
    DAT_1000c08e = 0;
    DAT_1000c090 = 0;
    DAT_1000c08f = 0;
    DAT_1000c091 = 0;
    DAT_1000c092 = 0;
    DAT_1000c093 = 0;
    DAT_1000c094 = 0;
    DAT_1000c095 = 0;
    DAT_1000c096 = 0;
    DAT_1000c097 = 0;
    DAT_1000c098 = 0;
    DAT_1000c099 = 0;
    DAT_1000c09a = 0;
    DAT_1000c09b = 0;
    DAT_1000c09c = 0;
    DAT_1000c09d = 0;
    DAT_1000c09e = 0;
    DAT_1000c09f = 0;
    DAT_1000c0a0 = 0;
    DAT_1000c0a1 = 0;
    DAT_1000c0a3 = 0;
    DAT_1000c0a2 = 0;
    DAT_1000c0a4 = 0;
    DAT_1000c0a5 = 0;
    DAT_1000c0a6 = 0;
    DAT_1000c0a7 = 0;
    DAT_1000c0a8 = 0;
    DAT_1000c0a9 = 0;
    DAT_1000c0aa = 0;
  }
  else {
    iVar10 = DAT_1000c2d4;
    if (_DAT_40010800 == 0x50414d57) {
      if (_DAT_40010804 != 0) {
        while ((0x2f < _DAT_40010808 && (_DAT_4001082c != (code *)0x0))) {
          uVar2 = (*_DAT_4001082c)();
          iVar10 = DAT_1000c2d4;
          if (uVar2 == 0) break;
          uVar9 = uVar2 >> 8;
          if ((uVar2 & 0xff) == 0) {
            if (DAT_1000c2d4 == 0) goto LAB_1000a094;
            switch((uintptr_t)(uVar9 & 0xff)) {
            case 1:
            case 0x48:
              goto switchD_1000a314_caseD_48;
            case 2:
            case 0x50:
              goto switchD_1000a314_caseD_50;
            case 3:
            case 0x4d:
              goto switchD_1000a314_caseD_4d;
            case 4:
            case 0x4b:
              goto switchD_1000a314_caseD_4b;
            case 0xe:
              goto switchD_1000a314_caseD_e;
            case 0x17:
              *(undefined1 *)(DAT_1000c2d4 + 0x1c) = 1;
              break;
            case 0x1c:
              goto switchD_1000a314_caseD_1c;
            case 0x53:
              goto switchD_1000a314_caseD_53;
            }
            goto switchD_1000a314_caseD_f;
          }
          if (DAT_1000c2d4 == 0) {
LAB_1000a094:
            iVar10 = 0;
            goto switchD_1000a314_caseD_f;
          }
          if (DAT_1000c30c == 2) {
            DAT_1000c30c = 0;
            switch((uintptr_t)(uVar2 & 0xff)) {
            case 0x41:
              puVar6 = &DAT_1000c07d;
              break;
            case 0x42:
              puVar6 = &DAT_1000c07e;
              break;
            case 0x43:
              puVar6 = &DAT_1000c080;
              break;
            case 0x44:
              puVar6 = &DAT_1000c07f;
              break;
            default:
              goto switchD_1000a1dc_caseD_5;
            }
            goto LAB_1000a2ec;
          }
          if (DAT_1000c30c == 1) {
            DAT_1000c30c = (uint)((uVar2 & 0xff) == 0x5b) << 1;
            goto switchD_1000a1dc_caseD_5;
          }
          if ((uVar2 & 0xff) == 0x1b) {
            DAT_1000c30c = 1;
            goto switchD_1000a1dc_caseD_5;
          }
          if ((uVar2 - 0x20 & 0xff) < 0x5f) {
            DAT_1000c0aa = (undefined1)uVar2;
            if ((uVar2 - 0x61 & 0xff) < 0x1a) {
              puVar6 = *(undefined1 **)
                        ((int)&PTR_DAT_1001000c + ((int)(uVar2 * 0x1000000 + -0x61000000) >> 0x16));
            }
            else {
              uVar5 = uVar2 - 0x41 & 0xff;
              if (uVar5 < 0x1a) {
                if (0x19 < uVar5) goto switchD_1000a1dc_caseD_5;
                puVar6 = (&PTR_DAT_1001000c)[uVar5];
              }
              else {
                if (9 < (uVar2 - 0x30 & 0xff)) goto LAB_1000a1c4;
                puVar6 = (&PTR_DAT_10010074)[uVar2 + 0xd0 & 0xff];
              }
            }
            goto LAB_1000a2ec;
          }
LAB_1000a1c4:
          switch((uintptr_t)(uVar2 & 0xff)) {
          case 3:
          case 4:
            *(undefined1 *)(DAT_1000c2d4 + 0x1c) = 1;
          case 5:
          case 6:
          case 7:
          case 9:
          case 0xb:
          case 0xc:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
            goto switchD_1000a1dc_caseD_5;
          case 8:
switchD_1000a1dc_caseD_8:
            puVar6 = &DAT_1000c0a7;
            break;
          case 10:
          case 0xd:
            puVar6 = &DAT_1000c07c;
            break;
          case 0x20:
            puVar6 = &DAT_1000c0a9;
            break;
          case 0x2d:
            puVar6 = &DAT_1000c0a5;
            break;
          case 0x2e:
            puVar6 = &DAT_1000c0a6;
            break;
          default:
            if ((uVar2 & 0xff) == 0x7f) goto switchD_1000a1dc_caseD_8;
            goto switchD_1000a1dc_caseD_5;
          }
LAB_1000a2ec:
          *puVar6 = 1;
switchD_1000a1dc_caseD_5:
          if ((uVar2 & 0xffff) == 0x11b) goto switchD_1000a314_caseD_f;
          switch((uintptr_t)(uVar9 & 0xff)) {
          case 0xe:
switchD_1000a314_caseD_e:
            puVar6 = &DAT_1000c0a7;
            break;
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
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
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x49:
          case 0x4a:
          case 0x4c:
          case 0x4e:
          case 0x4f:
          case 0x51:
          case 0x52:
            goto switchD_1000a314_caseD_f;
          case 0x1c:
switchD_1000a314_caseD_1c:
            puVar6 = &DAT_1000c07c;
            break;
          case 0x48:
switchD_1000a314_caseD_48:
            puVar6 = &DAT_1000c07d;
            break;
          case 0x4b:
switchD_1000a314_caseD_4b:
            puVar6 = &DAT_1000c07f;
            break;
          case 0x4d:
switchD_1000a314_caseD_4d:
            puVar6 = &DAT_1000c080;
            break;
          case 0x50:
switchD_1000a314_caseD_50:
            puVar6 = &DAT_1000c07e;
            break;
          case 0x53:
switchD_1000a314_caseD_53:
            puVar6 = &DAT_1000c0a8;
            break;
          default:
            if ((uVar9 & 0xff) == 1) {
              *(undefined1 *)(iVar10 + 0x1c) = 1;
            }
            goto switchD_1000a314_caseD_f;
          }
          *puVar6 = 1;
switchD_1000a314_caseD_f:
          if ((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) break;
        }
      }
      if (iVar10 == 0) {
        return;
      }
    }
    iVar3 = *(int *)(iVar10 + 0x14);
    iVar7 = *(int *)(iVar10 + 0x20);
    uStack_3c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_38 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_34 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    iVar8 = *(int *)(iVar10 + 0x24);
    iVar4 = iVar3 + -1;
    if (iVar7 <= iVar3 + -1) {
      iVar4 = iVar7;
    }
    if (iVar7 < 0) {
      iVar4 = 0;
    }
    *(int *)(iVar10 + 0x20) = iVar4;
    iVar3 = 1;
    if (1 < *(int *)(iVar10 + 0x18)) {
      iVar3 = *(int *)(iVar10 + 0x18);
    }
    iVar7 = iVar3 + -1;
    if (iVar8 <= iVar3 + -1) {
      iVar7 = iVar8;
    }
    if (iVar8 < 0) {
      iVar7 = 0;
    }
    *(int *)(iVar10 + 0x24) = iVar7;
    local_40 = 0;
    local_30 = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x83 < _DAT_40010808)) &&
       (_DAT_40010880 != (code *)0x0)) {
      uStack_2c = uStack_3c;
      local_28 = local_38;
      local_24 = local_34;
      iVar3 = (*_DAT_40010880)(&local_40);
      if (iVar3 != 0) {
        if ((local_40 & 1) == 0) {
          if ((local_40 & 2) == 0) {
            uVar9 = *(uint *)(iVar10 + 0x20);
            uVar2 = *(uint *)(iVar10 + 0x24);
          }
          else {
            uVar9 = *(uint *)(iVar10 + 0x20);
            uVar2 = *(uint *)(iVar10 + 0x24);
            if (local_30 != 0 || uStack_2c != 0) {
              uVar9 = uVar9 + local_30;
              uVar2 = uVar2 + uStack_2c;
            }
          }
        }
        else {
          iVar3 = *(int *)(iVar10 + 0x14);
          uVar2 = 0;
          uVar9 = 0;
          if (1 < iVar3) {
            if (local_28 == 0) {
              uVar9 = iVar3 - 1U;
              if (local_38 <= iVar3 - 1U) {
                uVar9 = local_38;
              }
              if ((int)local_38 < 0) {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = local_38 & ~((int)local_38 >> 0x1f);
              if (local_28 <= uVar9) {
                uVar9 = local_28;
              }
              lVar1 = (ulonglong)uVar9 * (ulonglong)(iVar3 - 1);
              uVar11 = recovered_10002184((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_28,0);
              uVar9 = (uint)uVar11;
            }
          }
          iVar3 = *(int *)(iVar10 + 0x18);
          if (1 < iVar3) {
            if (local_24 == 0) {
              uVar2 = iVar3 - 1U;
              if (local_34 <= iVar3 - 1U) {
                uVar2 = local_34;
              }
              if ((int)local_34 < 0) {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = local_34 & ~((int)local_34 >> 0x1f);
              if (local_24 <= uVar2) {
                uVar2 = local_24;
              }
              lVar1 = (ulonglong)uVar2 * (ulonglong)(iVar3 - 1);
              uVar11 = recovered_10002184((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_24,0);
              uVar2 = (uint)uVar11;
            }
          }
        }
        iVar3 = *(int *)(iVar10 + 0x14);
        *(byte *)(iVar10 + 0x28) = (byte)uStack_3c & 1;
        *(char *)(iVar10 + 0x2a) = (char)((uStack_3c & 7) >> 2);
        *(char *)(iVar10 + 0x29) = (char)((uStack_3c & 3) >> 1);
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        uVar5 = iVar3 - 1U;
        if ((int)uVar9 <= (int)(iVar3 - 1U)) {
          uVar5 = uVar9;
        }
        if ((int)uVar9 < 0) {
          uVar5 = 0;
        }
        iVar3 = 1;
        if (1 < *(int *)(iVar10 + 0x18)) {
          iVar3 = *(int *)(iVar10 + 0x18);
        }
        *(uint *)(iVar10 + 0x20) = uVar5;
        uVar9 = iVar3 - 1U;
        if ((int)uVar2 <= (int)(iVar3 - 1U)) {
          uVar9 = uVar2;
        }
        if ((int)uVar2 < 0) {
          uVar9 = 0;
        }
        *(uint *)(iVar10 + 0x24) = uVar9;
      }
    }
  }
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c07d
#undef DAT_1000c07e
#undef DAT_1000c07f
#undef DAT_1000c080
#undef DAT_1000c081
#undef DAT_1000c082
#undef DAT_1000c083
#undef DAT_1000c084
#undef DAT_1000c085
#undef DAT_1000c086
#undef DAT_1000c087
#undef DAT_1000c088
#undef DAT_1000c089
#undef DAT_1000c08a
#undef DAT_1000c08b
#undef DAT_1000c08c
#undef DAT_1000c08d
#undef DAT_1000c08e
#undef DAT_1000c08f
#undef DAT_1000c090
#undef DAT_1000c091
#undef DAT_1000c092
#undef DAT_1000c093
#undef DAT_1000c094
#undef DAT_1000c095
#undef DAT_1000c096
#undef DAT_1000c097
#undef DAT_1000c098
#undef DAT_1000c099
#undef DAT_1000c09a
#undef DAT_1000c09b
#undef DAT_1000c09c
#undef DAT_1000c09d
#undef DAT_1000c09e
#undef DAT_1000c09f
#undef DAT_1000c0a0
#undef DAT_1000c0a1
#undef DAT_1000c0a2
#undef DAT_1000c0a3
#undef DAT_1000c0a4
#undef DAT_1000c0a5
#undef DAT_1000c0a6
#undef DAT_1000c0a7
#undef DAT_1000c0a8
#undef DAT_1000c0a9
#undef DAT_1000c0aa
#undef DAT_1000c2d4
#undef DAT_1000c30c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef DAT_40010880
#undef PTR_DAT_1001000c
#undef PTR_DAT_10010074
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c
#undef _DAT_40010880
#undef local_28
#undef local_24
#undef uStack_3c
#undef uStack_2c
#undef local_40
#undef local_38
#undef local_34
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9ec
 */

byte recovered_1000a9ec(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  return bVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa00
 */

void recovered_1000aa00(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  *(undefined1 *)(param_1 + 0x1f) = param_4;
  *(char *)(param_1 + 0x1d) = (char)param_2;
  if (*(int *)(param_1 + 0x30) == 0) {
    recovered_10009010(param_1,param_2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa28
 */

int * recovered_1000aa28(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  int iVar1;
  void *destination;
  int iVar2;
  void *source;
  int *piVar3;

  piVar3 = (int *)0x0;
  if ((param_1 != 0) && (recovered_10009010(param_1,param_2), *(int *)(param_1 + 0x44) != 0)) {
    piVar3 = recovered_10007934(0x18);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    count = iVar1 * (uintptr_t)iVar2 * 4;
    destination = recovered_10007960(count);
    source = *(void **)(param_1 + 0x40);
    piVar3[2] = (int)destination;
    recovered_100025c8(destination,source,count);
    piVar3[5] = 0;
    piVar3[4] = 0;
    piVar3[3] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aaa4
 */

void recovered_1000aaa4(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aae8
 */

byte recovered_1000aae8(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + param_2 + 0x28);
  }
  return bVar1 & 1;
}


#undef DAT_1000c07c
#define DAT_1000c07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef DAT_1000c07d
#define DAT_1000c07d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x261U)))
#undef DAT_1000c07e
#define DAT_1000c07e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x262U)))
#undef DAT_1000c07f
#define DAT_1000c07f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x263U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_1000c081
#define DAT_1000c081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265U)))
#undef DAT_1000c082
#define DAT_1000c082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x266U)))
#undef DAT_1000c083
#define DAT_1000c083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x267U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268U)))
#undef DAT_1000c085
#define DAT_1000c085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x269U)))
#undef DAT_1000c086
#define DAT_1000c086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26aU)))
#undef DAT_1000c087
#define DAT_1000c087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26bU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef DAT_1000c089
#define DAT_1000c089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26dU)))
#undef DAT_1000c08a
#define DAT_1000c08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26eU)))
#undef DAT_1000c08b
#define DAT_1000c08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_1000c08d
#define DAT_1000c08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_1000c08e
#define DAT_1000c08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x272U)))
#undef DAT_1000c08f
#define DAT_1000c08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_1000c091
#define DAT_1000c091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_1000c092
#define DAT_1000c092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_1000c093
#define DAT_1000c093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef DAT_1000c095
#define DAT_1000c095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x279U)))
#undef DAT_1000c096
#define DAT_1000c096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27aU)))
#undef DAT_1000c097
#define DAT_1000c097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27bU)))
#undef DAT_1000c098
#define DAT_1000c098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef DAT_1000c099
#define DAT_1000c099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27dU)))
#undef DAT_1000c09a
#define DAT_1000c09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27eU)))
#undef DAT_1000c09b
#define DAT_1000c09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_1000c09d
#define DAT_1000c09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1000c09e
#define DAT_1000c09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x282U)))
#undef DAT_1000c09f
#define DAT_1000c09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x283U)))
#undef DAT_1000c0a0
#define DAT_1000c0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_1000c0a1
#define DAT_1000c0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x285U)))
#undef DAT_1000c0a2
#define DAT_1000c0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x286U)))
#undef DAT_1000c0a3
#define DAT_1000c0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef DAT_1000c0a4
#define DAT_1000c0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_1000c0a5
#define DAT_1000c0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1000c0a6
#define DAT_1000c0a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1000c0a7
#define DAT_1000c0a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_1000c0a8
#define DAT_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1000c0a9
#define DAT_1000c0a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1000c0aa
#define DAT_1000c0aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab08
 */

void recovered_1000ab08(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c07d = 0;
  DAT_1000c07c = 0;
  DAT_1000c07e = 0;
  DAT_1000c07f = 0;
  DAT_1000c080 = 0;
  DAT_1000c081 = 0;
  DAT_1000c082 = 0;
  DAT_1000c083 = 0;
  DAT_1000c084 = 0;
  DAT_1000c085 = 0;
  DAT_1000c086 = 0;
  DAT_1000c087 = 0;
  DAT_1000c088 = 0;
  DAT_1000c089 = 0;
  DAT_1000c08a = 0;
  DAT_1000c08b = 0;
  DAT_1000c08c = 0;
  DAT_1000c08d = 0;
  DAT_1000c08e = 0;
  DAT_1000c090 = 0;
  DAT_1000c08f = 0;
  DAT_1000c091 = 0;
  DAT_1000c092 = 0;
  DAT_1000c093 = 0;
  DAT_1000c094 = 0;
  DAT_1000c095 = 0;
  DAT_1000c096 = 0;
  DAT_1000c097 = 0;
  DAT_1000c098 = 0;
  DAT_1000c099 = 0;
  DAT_1000c09a = 0;
  DAT_1000c09b = 0;
  DAT_1000c09c = 0;
  DAT_1000c09d = 0;
  DAT_1000c09e = 0;
  DAT_1000c09f = 0;
  DAT_1000c0a0 = 0;
  DAT_1000c0a1 = 0;
  DAT_1000c0a3 = 0;
  DAT_1000c0a2 = 0;
  DAT_1000c0a4 = 0;
  DAT_1000c0a5 = 0;
  DAT_1000c0a6 = 0;
  DAT_1000c0a7 = 0;
  DAT_1000c0a8 = 0;
  DAT_1000c0a9 = 0;
  DAT_1000c0aa = 0;
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c07d
#undef DAT_1000c07e
#undef DAT_1000c07f
#undef DAT_1000c080
#undef DAT_1000c081
#undef DAT_1000c082
#undef DAT_1000c083
#undef DAT_1000c084
#undef DAT_1000c085
#undef DAT_1000c086
#undef DAT_1000c087
#undef DAT_1000c088
#undef DAT_1000c089
#undef DAT_1000c08a
#undef DAT_1000c08b
#undef DAT_1000c08c
#undef DAT_1000c08d
#undef DAT_1000c08e
#undef DAT_1000c08f
#undef DAT_1000c090
#undef DAT_1000c091
#undef DAT_1000c092
#undef DAT_1000c093
#undef DAT_1000c094
#undef DAT_1000c095
#undef DAT_1000c096
#undef DAT_1000c097
#undef DAT_1000c098
#undef DAT_1000c099
#undef DAT_1000c09a
#undef DAT_1000c09b
#undef DAT_1000c09c
#undef DAT_1000c09d
#undef DAT_1000c09e
#undef DAT_1000c09f
#undef DAT_1000c0a0
#undef DAT_1000c0a1
#undef DAT_1000c0a2
#undef DAT_1000c0a3
#undef DAT_1000c0a4
#undef DAT_1000c0a5
#undef DAT_1000c0a6
#undef DAT_1000c0a7
#undef DAT_1000c0a8
#undef DAT_1000c0a9
#undef DAT_1000c0aa

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000ae10(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000ae14(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000ae18(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000ae20(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000ae24(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000b718
#define DAT_1000b718 (*(int *)(((uintptr_t)&pf_window_literal_1000b718)))
#undef DAT_1000b71c
#define DAT_1000b71c (*(int *)(((uintptr_t)&pf_window_literal_1000b71c)))
#undef DAT_1000be49
#define DAT_1000be49 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1000be4b
#define DAT_1000be4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000bf44
#define DAT_1000bf44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41ecU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010858
#define DAT_40010858 (*(uint8_t *)(0x40010858U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010858
#define _DAT_40010858 (*(code * *)(0x40010858U))
#define local_f8 (*(int * *)(pf_stack_frame + 24))
#define local_f4 (*(int * *)(pf_stack_frame + 28))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define local_f0 (*(char * *)(pf_stack_frame + 32))
#define local_ec (*(uint *)(pf_stack_frame + 36))
#define local_e8 (*(undefined1 * *)(pf_stack_frame + 40))
#define local_e4 (*(void * *)(pf_stack_frame + 44))
#define local_e0 (*(char * *)(pf_stack_frame + 48))
#define local_dc (*(void * *)(pf_stack_frame + 52))
#define local_d8 (*(undefined4 *)(pf_stack_frame + 56))
#define local_d4 (*(char * *)(pf_stack_frame + 60))
#define local_d0 (*(undefined1 * *)(pf_stack_frame + 64))
#define local_cc (*(undefined1 * *)(pf_stack_frame + 68))
#define local_c8 (*(void * *)(pf_stack_frame + 72))
#define local_c0 (*(ulong *)(pf_stack_frame + 80))
#define local_bc (*(int *)(pf_stack_frame + 84))
#define local_b8 (*(int *)(pf_stack_frame + 88))
#define iStack_c4 (*(int *)(pf_stack_frame + 76))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 92))
#define local_ac (*(char * *)(pf_stack_frame + 100))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_a4 (*(undefined1 * *)(pf_stack_frame + 108))
#define local_a0 (*(void * *)(pf_stack_frame + 112))
#define local_9c (*(void * *)(pf_stack_frame + 116))
#define local_98 (*(undefined4 *)(pf_stack_frame + 120))
#define local_90 (*(undefined4 *)(pf_stack_frame + 128))
#define local_7c (*(undefined4 *)(pf_stack_frame + 148))
#define local_78 (*(int *)(pf_stack_frame + 152))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 156))
#define local_70 (*(int *)(pf_stack_frame + 160))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 124))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 164))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_1000ae2c(char *param_1,int *param_2,int *param_3)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  void *pvVar20;
  bool bVar21;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  local_7c = DAT_10010008;
  local_78 = DAT_1000b718 + 0x1000ae78;
  local_70 = DAT_1000b71c + 0x1000ae88;
  local_f0 = param_1;
  recovered_10008030(&uStack_94);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (local_f0 == (char *)0x0) {
    puVar12 = (undefined1 *)0x0;
    goto LAB_1000b528;
  }
  iStack_c4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_c0 = *(ulong *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_bc = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_b4 = 0;
  local_c8 = (void *)0x0;
  local_b8 = 0;
  local_d8 = 0;
  local_dc = (void *)0x0;
  local_e0 = (char *)0x0;
  uVar15 = 0;
  do {
    uVar17 = uVar15;
    uVar15 = uVar17 + 1;
  } while (local_f0[uVar17] != '\0');
  local_90 = 0xffffffff;
  local_f8 = param_2;
  local_f4 = param_3;
  recovered_1000b720((int *)&local_e0,(int)local_f0,uVar17);
  local_98 = 0;
  local_9c = (void *)0x0;
  local_a0 = (void *)0x0;
  local_ec = 0;
  if (local_dc != (void *)0x0) {
    pcVar7 = local_e0;
    if (local_e0 == (char *)0x0) {
      pcVar7 = &DAT_1000be4b;
    }
    local_ec = (uint)(*pcVar7 == '/');
  }
  pvVar8 = (void *)0x0;
  do {
    if (local_dc <= pvVar8) break;
    pcVar7 = local_e0;
    pvVar20 = pvVar8;
    if (local_e0 == (char *)0x0) {
      pcVar7 = &DAT_1000be4b;
    }
    do {
      if (pcVar7[(int)pvVar20] == '/') {
        local_e8 = (undefined1 *)0x0;
        local_e4 = pvVar20;
        if (pvVar20 != (void *)0xffffffff) goto LAB_1000aff0;
        break;
      }
      pvVar20 = (void *)((int)pvVar20 + 1);
    } while (local_dc != pvVar20);
    local_e8 = (undefined1 *)0x1;
    pvVar20 = local_dc;
    local_e4 = (void *)0xffffffff;
LAB_1000aff0:
    uVar17 = (int)pvVar20 - (int)pvVar8;
    uVar19 = (int)local_dc - (int)pvVar8;
    local_a4 = (undefined1 *)0x0;
    uVar15 = uVar17;
    if (uVar19 < uVar17) {
      uVar15 = uVar19;
    }
    local_a8 = (undefined1 *)0x0;
    if (uVar17 == 0xffffffff) {
      uVar15 = uVar19;
    }
    local_ac = (char *)0x0;
    local_90 = 1;
    recovered_1000b720((int *)&local_ac,(int)(pcVar7 + (int)pvVar8),uVar15);
    if (local_a8 != (undefined1 *)0x0) {
      pcVar7 = local_ac;
      if (local_ac == (char *)0x0) {
        pcVar7 = &DAT_1000be4b;
      }
      if (local_a8 == (undefined1 *)0x1) {
        if (*pcVar7 == '.') goto LAB_1000af74;
      }
      else if (local_a8 == (undefined1 *)0x2) {
        cVar1 = *pcVar7;
        if (cVar1 == '.') {
          pcVar7 = (char *)(uint)(byte)pcVar7[1];
        }
        if (cVar1 == '.' && pcVar7 == (char *)0x2e) {
          if (local_9c != (void *)0x0) {
            pbVar9 = *(byte **)((int)local_a0 + (int)local_9c * 0xc + -0xc);
            uVar15 = *(uint *)((int)local_a0 + (int)local_9c * 0xc + -8);
            pbVar11 = pbVar9;
            if (pbVar9 == (byte *)0x0) {
              pbVar11 = &DAT_1000be4b;
            }
            bVar21 = uVar15 == 2;
            if (bVar21) {
              uVar15 = (uint)*pbVar11;
            }
            if ((!bVar21 || uVar15 != 0x2e) || (pbVar11[1] != 0x2e)) {
              recovered_1000798c(pbVar9);
              local_9c = (void *)((int)local_9c + -1);
              goto LAB_1000af74;
            }
          }
          if (local_ec != 0) goto LAB_1000af74;
        }
      }
      local_90 = 2;
      recovered_1000b938((int *)&local_a0,&local_ac);
    }
LAB_1000af74:
    recovered_1000798c(local_ac);
    pvVar8 = (void *)((int)local_e4 + 1);
  } while (local_e8 == (undefined1 *)0x0);
  local_a4 = (undefined1 *)0x0;
  puVar12 = &DAT_1000be4b;
  if (local_ec != 0) {
    puVar12 = &DAT_1000bf44;
  }
  local_a8 = (undefined1 *)0x0;
  local_ac = (char *)0x0;
  uVar15 = 0;
  do {
    uVar17 = uVar15;
    uVar15 = uVar17 + 1;
  } while (puVar12[uVar17] != '\0');
  local_90 = 3;
  recovered_1000b720((int *)&local_ac,(int)puVar12,uVar17);
  if (local_9c != (void *)0x0) {
    pvVar8 = (void *)0x0;
    do {
      local_e4 = pvVar8;
      if (pvVar8 != (void *)0x0 || (local_ec & 1) != 0) {
        if (local_a8 == local_a4) {
          puVar12 = (undefined1 *)((int)local_a8 << 1);
          if (local_a8 == (undefined1 *)0x0) {
            puVar12 = &DataAbort;
          }
          if (puVar12 <= local_a8) goto LAB_1000b264;
          local_90 = 4;
          local_e8 = puVar12;
          pcVar7 = recovered_10007934((uint)puVar12 | 1);
          pvVar8 = local_e4;
          uVar15 = 0;
          *pcVar7 = '\0';
          if (local_a8 != (undefined1 *)0x0) {
            bVar21 = local_a8 == &DataAbort;
            puVar12 = (undefined1 *)0x0;
            if ((undefined1 *)0xf < local_a8) {
              uVar15 = (int)pcVar7 - (int)local_ac;
              bVar21 = uVar15 == 0xf;
            }
            if (((undefined1 *)0xf < local_a8 && 0xe < uVar15) && !bVar21) {
              puVar12 = (undefined1 *)((uint)local_a8 & 0xfffffff0);
              puVar13 = puVar12;
              pcVar16 = pcVar7;
              pcVar18 = local_ac;
              do {
                uVar2 = *(undefined4 *)pcVar18;
                uVar3 = *(undefined4 *)(pcVar18 + 4);
                uVar4 = *(undefined4 *)(pcVar18 + 8);
                uVar5 = *(undefined4 *)(pcVar18 + 0xc);
                pcVar18 = pcVar18 + 0x10;
                puVar13 = puVar13 + -0x10;
                *(undefined4 *)pcVar16 = uVar2;
                *(undefined4 *)(pcVar16 + 4) = uVar3;
                *(undefined4 *)(pcVar16 + 8) = uVar4;
                *(undefined4 *)(pcVar16 + 0xc) = uVar5;
                pcVar16 = pcVar16 + 0x10;
              } while (puVar13 != (undefined1 *)0x0);
              if (local_a8 == puVar12) goto LAB_1000b250;
            }
            iVar14 = (int)local_a8 - (int)puVar12;
            pcVar16 = pcVar7 + (int)puVar12;
            pcVar18 = local_ac + (int)puVar12;
            do {
              iVar14 = iVar14 + -1;
              *pcVar16 = *pcVar18;
              pcVar16 = pcVar16 + 1;
              pcVar18 = pcVar18 + 1;
            } while (iVar14 != 0);
          }
LAB_1000b250:
          pcVar7[(int)local_a8] = '\0';
          recovered_1000798c(local_ac);
          local_a4 = local_e8;
LAB_1000b29c:
          local_ac = pcVar7;
        }
        else {
LAB_1000b264:
          if (local_ac == (char *)0x0) {
            local_90 = 5;
            pcVar7 = recovered_10007934(1);
            local_a4 = (undefined1 *)0x0;
            *pcVar7 = '\0';
            pvVar8 = local_e4;
            goto LAB_1000b29c;
          }
        }
        local_ac[(int)local_a8] = '/';
        local_ac[(int)(local_a8 + 1)] = '\0';
        local_a8 = local_a8 + 1;
      }
      puVar10 = (undefined4 *)((int)local_a0 + (int)(uintptr_t)pvVar8 * 0xc);
      puVar12 = (undefined1 *)*puVar10;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &DAT_1000be4b;
      }
      local_90 = 6;
      recovered_1000ba60((int *)&local_ac,(int)puVar12,puVar10[1]);
      pvVar8 = (void *)((int)local_e4 + 1);
    } while (pvVar8 < local_9c);
  }
  local_cc = local_a4;
  if (local_a8 == (undefined1 *)0x0) {
    local_cc = (undefined1 *)0x0;
    puVar12 = &DAT_1000be49;
    local_d0 = (undefined1 *)0x0;
    local_d4 = (char *)0x0;
    uVar15 = 0;
    if (local_ec != 0) {
      puVar12 = &DAT_1000bf44;
    }
    do {
      uVar17 = uVar15;
      uVar15 = uVar17 + 1;
    } while (puVar12[uVar17] != '\0');
    local_90 = 7;
    recovered_1000b720((int *)&local_d4,(int)puVar12,uVar17);
  }
  else {
    local_d0 = local_a8;
    local_d4 = local_ac;
    local_a4 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_ac = (char *)0x0;
  }
  recovered_1000798c(local_ac);
  if (local_9c != (void *)0x0) {
    iVar14 = (int)local_9c * 0xc;
    pvVar8 = local_9c;
    do {
      iVar14 = iVar14 + -0xc;
      recovered_1000798c(*(void **)((int)local_a0 + iVar14));
      pvVar8 = (void *)((int)pvVar8 + -1);
    } while (pvVar8 != (void *)0x0);
  }
  local_9c = (void *)0x0;
  recovered_1000798c(local_a0);
  recovered_1000798c(local_e0);
  pcVar7 = local_d4;
  if (local_d4 == (char *)0x0) {
    pcVar7 = &DAT_1000be4b;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x5b < _DAT_40010808)) &&
     (_DAT_40010858 != (code *)0x0)) {
    local_90 = 8;
    iVar14 = (*_DAT_40010858)(pcVar7,&local_c8);
    if (iVar14 == 0) goto LAB_1000b49c;
LAB_1000b578:
    puVar12 = (undefined1 *)0x0;
    if (iStack_c4 == 0) {
      local_e4 = local_c8;
      uVar6 = 0;
      if (local_c8 != (void *)0x0) {
        uVar6 = local_c0;
      }
      if (local_c8 != (void *)0x0 && uVar6 != 0) {
        iVar14 = 0;
        if (local_bc != 0) {
          iVar14 = local_b8;
        }
        if (local_bc != 0 && iVar14 != 0) {
          local_90 = 10;
          local_e8 = recovered_10007960(uVar6);
          local_90 = 0xb;
          recovered_100025c8(local_e8,local_e4,local_c0);
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
            local_90 = 0xc;
            (*_DAT_40010850)(local_e4);
          }
          if (local_f8 != (int *)0x0) {
            *local_f8 = local_bc;
          }
          puVar12 = local_e8;
          if (local_f4 != (int *)0x0) {
            *local_f4 = local_b8;
          }
        }
      }
    }
  }
  else {
LAB_1000b49c:
    puVar12 = (undefined1 *)0x0;
    do {
      pcVar7 = local_f0 + (int)puVar12;
      puVar12 = puVar12 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = &DAT_1000be4b;
    if (local_d4 != (char *)0x0) {
      pcVar7 = local_d4;
    }
    if (local_d0 + 1 == puVar12) {
      puVar12 = (undefined1 *)0x0;
      if (local_d0 != (undefined1 *)0x0) {
        puVar13 = local_d0;
        pcVar16 = local_f0;
        do {
          if (*pcVar7 != *pcVar16) goto LAB_1000b4f0;
          puVar13 = puVar13 + -1;
          pcVar16 = pcVar16 + 1;
          pcVar7 = pcVar7 + 1;
        } while (puVar13 != (undefined1 *)0x0);
      }
    }
    else {
LAB_1000b4f0:
      puVar12 = (undefined1 *)0x0;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x5b < _DAT_40010808 && (_DAT_40010858 != (code *)0x0)))) {
        local_90 = 9;
        iVar14 = (*_DAT_40010858)(local_f0,&local_c8);
        puVar12 = (undefined1 *)0x0;
        if (iVar14 != 0) goto LAB_1000b578;
      }
    }
  }
  recovered_1000798c(local_d4);
LAB_1000b528:
  recovered_10008054(&uStack_94);
  return puVar12;
}

#undef DAT_1000b718
#undef DAT_1000b71c
#undef DAT_1000be49
#undef DAT_1000be4b
#undef DAT_1000bf44
#undef DAT_10010008
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010858
#undef EXT_00000010
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_40010858
#undef local_f8
#undef local_f4
#undef auStack_100
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
#undef local_c0
#undef local_bc
#undef local_b8
#undef iStack_c4
#undef local_b4
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
#undef uStack_94
#undef local_6c
#undef auStack_68

#define local_2c (*(void * *)(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b720
 */

void recovered_1000b720(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  puVar12 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar12 != (undefined1 *)0x0) {
    uVar13 = param_2 - (int)puVar12;
    uVar6 = 0;
    do {
      if (uVar13 == uVar6) {
        uVar6 = param_1[1] - uVar13;
        local_24 = 0;
        if (uVar1 < uVar6) {
          uVar6 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_1000b720((int *)&local_2c,(int)(puVar12 + uVar13),uVar6);
        pvVar4 = (void *)*param_1;
        iVar7 = param_1[1];
        iVar8 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pvVar4;
        local_28 = iVar7;
        local_24 = iVar8;
        recovered_1000798c(pvVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar12 != (undefined1 *)0x0) {
    *puVar12 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar12 = recovered_10007934(1);
      *param_1 = (int)puVar12;
      *puVar12 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000b80c;
  puVar2 = recovered_10007934(uVar1 + 1);
  uVar13 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  uVar6 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar13 != 0) {
    bVar14 = uVar13 == 0x10;
    uVar5 = extraout_r1;
    if (0xf < uVar13) {
      uVar5 = (int)puVar2 - (int)puVar3;
      bVar14 = uVar5 == 0xf;
    }
    if ((0xf < uVar13 && 0xe < uVar5) && !bVar14) {
      uVar6 = uVar13 & 0xfffffff0;
      uVar5 = uVar6;
      puVar9 = puVar2;
      puVar11 = puVar3;
      do {
        uVar15 = *puVar11;
        uVar16 = puVar11[1];
        puVar11 = puVar11 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar9 = uVar15;
        puVar9[1] = uVar16;
        puVar9 = puVar9 + 2;
      } while (uVar5 != 0);
      if (uVar13 == uVar6) goto LAB_1000b7f0;
    }
    iVar7 = uVar13 - uVar6;
    puVar12 = (undefined1 *)((int)puVar2 + uVar6);
    puVar10 = (undefined1 *)((int)puVar3 + uVar6);
    do {
      iVar7 = iVar7 + -1;
      *puVar12 = *puVar10;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0);
  }
LAB_1000b7f0:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  recovered_1000798c(puVar3);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000b80c:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8e4
 */

int * recovered_1000b8e4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar2 = iVar1 * 0xc;
    do {
      iVar2 = iVar2 + -0xc;
      recovered_1000798c(*(void **)(*param_1 + iVar2));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0;
  recovered_1000798c((void *)*param_1);
  return param_1;
}


#undef DAT_1000be4b
#define DAT_1000be4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b938
 */

int recovered_1000b938(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar1 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar1 = 4;
    }
    if (uVar5 < uVar1) {
      pvVar2 = recovered_10007934(uVar1 * 0xc);
      if (param_1[1] != 0) {
        iVar9 = 0;
        uVar5 = 0;
        do {
          puVar3 = (undefined4 *)(*param_1 + iVar9);
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          puVar11 = (undefined4 *)((int)pvVar2 + iVar9);
          *puVar11 = *puVar3;
          *puVar3 = 0;
          puVar11[1] = uVar6;
          puVar11[2] = uVar7;
          puVar3[1] = 0;
          puVar3[2] = 0;
          recovered_1000798c((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar9 = iVar9 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_1000798c((void *)*param_1);
      uVar5 = param_1[1];
      param_1[2] = uVar1;
      *param_1 = (int)pvVar2;
    }
  }
  piVar4 = (int *)(*param_1 + uVar5 * 0xc);
  *piVar4 = 0;
  puVar10 = (undefined1 *)*param_2;
  piVar4[1] = 0;
  uVar5 = param_2[1];
  puVar8 = &DAT_1000be4b;
  if (puVar10 != (undefined1 *)0x0) {
    puVar8 = puVar10;
  }
  piVar4[2] = 0;
  recovered_1000b720(piVar4,(int)puVar8,uVar5);
  iVar9 = param_1[1];
  param_1[1] = iVar9 + 1;
  return *param_1 + iVar9 * 0xc;
}

#undef DAT_1000be4b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba60
 */

void recovered_1000ba60(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != (undefined8 *)0x0) {
    uVar10 = param_2 - (int)puVar12;
    uVar11 = param_1[1];
    uVar6 = 0;
LAB_1000ba9c:
    if (uVar10 != uVar6) goto code_r0x1000baa4;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_1000bc68;
    puVar12 = recovered_10007934(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_1000bc48;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_1000bc2c;
    uVar13 = uVar7 & 0xfffffff0;
    uVar2 = uVar13;
    puVar5 = puVar1;
    puVar8 = puVar12;
    do {
      uVar15 = *puVar5;
      uVar16 = puVar5[1];
      puVar5 = puVar5 + 2;
      uVar2 = uVar2 - 0x10;
      *puVar8 = uVar15;
      puVar8[1] = uVar16;
      puVar8 = puVar8 + 2;
    } while (uVar2 != 0);
    if (uVar7 != uVar13) {
LAB_1000bc2c:
      iVar4 = uVar7 - uVar13;
      puVar3 = (undefined1 *)((int)puVar12 + uVar13);
      puVar9 = (undefined1 *)((int)puVar1 + uVar13);
      do {
        iVar4 = iVar4 + -1;
        *puVar3 = *puVar9;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar4 != 0);
    }
LAB_1000bc48:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    recovered_1000798c(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_1000bc68:
    if (param_3 == 0) goto LAB_1000bc94;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_1000bc90;
  }
  uVar11 = param_1[1];
LAB_1000bab8:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_1000bb74;
  puVar12 = recovered_10007934(uVar11 + 1);
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  uVar10 = 0;
  *(undefined1 *)puVar12 = 0;
  if (uVar6 != 0) {
    bVar14 = uVar6 == 0x10;
    uVar7 = extraout_r3;
    if (0xf < uVar6) {
      uVar7 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar7 == 0xf;
    }
    if ((0xf < uVar6 && 0xe < uVar7) && !bVar14) {
      uVar10 = uVar6 & 0xfffffff0;
      uVar7 = uVar10;
      puVar5 = puVar12;
      puVar8 = puVar1;
      do {
        uVar15 = *puVar8;
        uVar16 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar7 = uVar7 - 0x10;
        *puVar5 = uVar15;
        puVar5[1] = uVar16;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      if (uVar6 == uVar10) goto LAB_1000bb54;
    }
    iVar4 = uVar6 - uVar10;
    puVar3 = (undefined1 *)((int)puVar1 + uVar10);
    puVar9 = (undefined1 *)((int)puVar12 + uVar10);
    do {
      iVar4 = iVar4 + -1;
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_1000bb54:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  recovered_1000798c(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_1000bb74:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_1000bc90:
  puVar12 = (undefined8 *)*param_1;
LAB_1000bc94:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x1000baa4:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_1000bab8;
  goto LAB_1000ba9c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcb8
 */

int recovered_1000bcb8(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint extraout_r1 = 0;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar12 = param_1[1];
  }
  else {
    uVar12 = param_2 - iVar1;
  }
  if (param_3 == param_4) goto LAB_1000bdfc;
  uVar10 = param_1[1];
  iVar13 = (int)param_4 - (int)param_3;
  uVar2 = param_1[2];
  if (uVar2 < uVar10 + iVar13) {
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 << 1;
    } while (uVar3 < uVar10 + iVar13);
    puVar4 = recovered_10007934(uVar3);
    uVar10 = param_1[1];
    puVar5 = (undefined8 *)*param_1;
    if (uVar10 != 0) {
      bVar14 = uVar10 == 0x10;
      uVar11 = 0;
      uVar2 = extraout_r1;
      if (0xf < uVar10) {
        uVar2 = (int)puVar4 - (int)puVar5;
        bVar14 = uVar2 == 0xf;
      }
      if ((0xf < uVar10 && 0xe < uVar2) && !bVar14) {
        uVar11 = uVar10 & 0xfffffff0;
        puVar6 = puVar4;
        uVar2 = uVar11;
        puVar8 = puVar5;
        do {
          uVar15 = *puVar8;
          uVar16 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar2 = uVar2 - 0x10;
          *puVar6 = uVar15;
          puVar6[1] = uVar16;
          puVar6 = puVar6 + 2;
        } while (uVar2 != 0);
        if (uVar10 == uVar11) goto LAB_1000bd90;
      }
      iVar1 = uVar10 - uVar11;
      puVar7 = (undefined1 *)((int)puVar5 + uVar11);
      puVar9 = (undefined1 *)((int)puVar4 + uVar11);
      do {
        iVar1 = iVar1 + -1;
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar1 != 0);
    }
LAB_1000bd90:
    recovered_1000798c(puVar5);
    param_1[2] = uVar3;
    uVar10 = param_1[1];
    *param_1 = (int)puVar4;
  }
  while (uVar12 < uVar10) {
    uVar10 = uVar10 - 1;
    ((undefined1 *)(*param_1 + uVar10))[iVar13] = *(undefined1 *)(*param_1 + uVar10);
  }
  uVar10 = uVar12;
  do {
    puVar7 = param_3 + 1;
    *(undefined1 *)(*param_1 + uVar10) = *param_3;
    uVar10 = uVar10 + 1;
    param_3 = puVar7;
  } while (puVar7 != param_4);
  iVar1 = *param_1;
  param_1[1] = param_1[1] + iVar13;
LAB_1000bdfc:
  iVar13 = iVar1 + uVar12;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  return iVar13;
}

