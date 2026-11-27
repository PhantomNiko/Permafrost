/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000930
 */

uint recovered_10000930(uint param_1,uint param_2)

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
 * Address: 0x10000980
 */

uint recovered_10000980(uint param_1,uint param_2)

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
 * Address: 0x100009b8
 */

uint recovered_100009b8(uint param_1,uint param_2)

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
 * Address: 0x10000a28
 */

uint recovered_10000a28(uint param_1,uint param_2)

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
 * Address: 0x10000a94
 */

ulonglong recovered_10000a94(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10004238((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aa4
 */

longlong recovered_10000aa4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10004178((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ab4
 */

float recovered_10000ab4(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100042c0(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad0
 */

float recovered_10000ad0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004308(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1001007c
#define DAT_1001007c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd40U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af0
 */

void recovered_10000af0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_1001007c = 0;
  recovered_10000b7c();
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return;
}

#undef DAT_1001007c
#undef DAT_10010084

#undef DAT_1001007c
#define DAT_1001007c (*(char *)(((uintptr_t)pf_module_state + 0xd40U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010088
#define DAT_10010088 (*(int *)(((uintptr_t)pf_module_state + 0xd4cU)))
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
 * Address: 0x10000b7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000b7c(void)

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
  if (DAT_1001007c != '\0') {
    return;
  }
  DAT_10010080 = 0;
  DAT_10010088 = 0;
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
        if (iVar11 == 0) goto LAB_10000d7c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10005ca8((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_10010080 != 0) goto LAB_10000dac;
    }
  }
LAB_10000d7c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10005ca8((int *)0x300000,piVar4,&local_24);
LAB_10000dac:
  if (DAT_10010088 == 0) {
    DAT_10010088 = DAT_10010080;
  }
  DAT_1001007c = 1;
  return;
}

#undef DAT_1001007c
#undef DAT_10010080
#undef DAT_10010088
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dfc
 */

bool recovered_10000dfc(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10000e78(addresses,sizes,count);
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return bVar1;
}

#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010088
#define DAT_10010088 (*(int * *)(((uintptr_t)pf_module_state + 0xd4cU)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e78
 */

bool recovered_10000e78(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10000b7c();
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
        piVar1 = DAT_10010080;
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
      piVar3 = (int *)&DAT_10010080;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10005ca8((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_10010088 == (int *)0x0) {
        DAT_10010088 = DAT_10010080;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_10010080
#undef DAT_10010088
#undef DAT_68000000
#undef local_24

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
#define local_14 (*(ulong *)(pf_stack_frame + 28))
#define local_10 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c0
 */

bool recovered_100010c0(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = size;
  local_10 = address;
  bVar1 = recovered_10000e78(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return bVar1;
}

#undef DAT_10010084
#undef local_14
#undef local_10

#undef DAT_10010080
#define DAT_10010080 (*(uint * *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001158
 */

uint recovered_10001158(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000b7c();
  uVar2 = 0;
  puVar4 = DAT_10010080;
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
  DAT_10010084 = 0;
  return uVar2;
}

#undef DAT_10010080
#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(uint * *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001208
 */

ulonglong recovered_10001208(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000b7c();
  uVar2 = 0;
  iVar1 = 0;
  for (puVar4 = DAT_10010080; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
    if ((char)puVar4[3] == '\x01') {
      bVar5 = CARRY4(uVar2,*puVar4);
      uVar2 = uVar2 + *puVar4;
      iVar1 = iVar1 + (uint)bVar5;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return CONCAT44(iVar1,uVar2);
}

#undef DAT_10010080
#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(int * *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012c4
 */

uint recovered_100012c4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000b7c();
  uVar2 = 0;
  for (piVar4 = DAT_10010080; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    uVar2 = *piVar4 + uVar2;
  }
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return uVar2;
}

#undef DAT_10010080
#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(uint * *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000136c
 */

ulonglong recovered_1000136c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10000b7c();
  uVar2 = 0;
  iVar1 = 0;
  for (puVar4 = DAT_10010080; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
    bVar5 = CARRY4(uVar2,*puVar4);
    uVar2 = uVar2 + *puVar4;
    iVar1 = iVar1 + (uint)bVar5;
  }
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return CONCAT44(iVar1,uVar2);
}

#undef DAT_10010080
#undef DAT_10010084

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000141c
 */

void * recovered_1000141c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_100014a0(size,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return puVar1;
}

#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(uint * *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint * *)(((uintptr_t)pf_module_state + 0xd4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a0
 */

uint * recovered_100014a0(int param_1,uint *param_2,uint *param_3)

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
    recovered_10000b7c();
    puVar4 = DAT_10010080;
    puVar5 = DAT_10010088;
    if (DAT_10010088 == (uint *)0x0) {
      puVar5 = DAT_10010080;
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
              if (uVar7 < uVar8) goto joined_r0x10001580;
            }
          }
          else {
joined_r0x10001580:
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
LAB_10001678:
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
                    DAT_10010088 = DAT_10010080;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_10010088 = puVar4;
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
                      puVar2 = recovered_10005ea8(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10001678;
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

#undef DAT_10010080
#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f8
 */

void * recovered_100016f8(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_100014a0(size,(uint *)0x0,(uint *)limit);
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return puVar1;
}

#undef DAT_10010084

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001780
 */

void * recovered_10001780(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (first <= last) {
    puVar2 = recovered_100014a0(size,(uint *)first,(uint *)last);
  }
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return puVar2;
}

#undef DAT_10010084

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001810
 */

void recovered_10001810(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000188c((int)pointer);
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return;
}

#undef DAT_10010084

#undef DAT_10010088
#define DAT_10010088 (*(uint * *)(((uintptr_t)pf_module_state + 0xd4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000188c
 */

void recovered_1000188c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10000b7c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_10010088 == puVar1) {
        DAT_10010088 = puVar4;
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
          if (DAT_10010088 == puVar4) {
            DAT_10010088 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_10010088 = puVar4;
  return;
}

#undef DAT_10010088

#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0xd48U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint * *)(((uintptr_t)pf_module_state + 0xd4cU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f8
 */

void * recovered_100019f8(void *pointer,ulong size)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
    iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
  } while (iVar7 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10010084 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xd48U));
      iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0xd48U),1);
    } while (iVar7 != 0);
    DataMemoryBarrier(0xb);
  }
  if (pointer == (void *)0x0) {
    puVar3 = recovered_100014a0(size,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_10001c2c;
  }
  if (size == 0) {
    recovered_1000188c((int)pointer);
    puVar3 = (uint *)0x0;
    goto LAB_10001c2c;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < size) goto LAB_10001c2c;
  recovered_10000b7c();
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
          DAT_10010088 = (uint *)((int)pointer + (int)puVar12);
          *DAT_10010088 = ((int)puVar6 - (int)puVar12) - 0x10;
          uVar1 = *(uint *)((int)pointer + -0xc);
          *(undefined1 *)(DAT_10010088 + 3) = 1;
          DAT_10010088[2] = (uint)puVar10;
          DAT_10010088[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_10010088;
          }
          *(uint **)((int)pointer + -0xc) = DAT_10010088;
          *(uint **)((int)pointer + -0x10) = puVar12;
          puVar3 = pointer;
        }
      }
    }
    goto LAB_10001c2c;
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
      puVar3 = DAT_10010088;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar6 ||
            (((uint *)((int)pointer + (int)puVar6) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar6 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar10;
          DAT_10010088 = puVar10;
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
        iVar4 = recovered_10005f2c(puVar10,(int)puVar12);
        if (iVar4 != 0) {
          DAT_10010088 = *(uint **)((int)pointer + -0xc);
        }
        *(undefined1 *)((int)pointer + -4) = 0;
        puVar3 = pointer;
      }
      goto LAB_10001c2c;
    }
  }
  puVar6 = recovered_100014a0((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar6 == (uint *)0x0) goto LAB_10001c2c;
  puVar10 = (uint *)*puVar10;
  if (puVar10 < puVar12) {
    puVar12 = puVar10;
  }
  puVar3 = puVar6;
  puVar2 = pointer;
  if (puVar12 < &SupervisorCall) {
LAB_10001cfc:
    if (puVar12 != (uint *)0x0) goto LAB_10001d04;
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
            if (uVar14 == uVar11) goto LAB_10001ee4;
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
LAB_10001ee4:
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
          if (uVar14 == uVar11) goto LAB_10001cfc;
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
      goto LAB_10001cfc;
    }
LAB_10001d04:
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
      if (puVar12 == puVar13) goto LAB_10001d60;
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
LAB_10001d60:
  recovered_1000188c((int)pointer);
  puVar3 = puVar6;
LAB_10001c2c:
  DataMemoryBarrier(0xb);
  DAT_10010084 = 0;
  return puVar3;
}

#undef DAT_10010084
#undef DAT_10010088
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f98
 */

longlong recovered_10001f98(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10001fec
 */

ulonglong recovered_10001fec(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002040
 */

undefined8 recovered_10002040(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000208c
 */

undefined8 recovered_1000208c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002170
 */

undefined8 recovered_10002170(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100021f0
 */

undefined8 recovered_100021f0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002308
 */

undefined8 recovered_10002308(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100023c4
 */

void recovered_100023c4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023cc
 */

int recovered_100023cc(int param_1)

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
 * Address: 0x100023d8
 */

void * recovered_100023d8(ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x10002428. Too many branches */
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
 * Address: 0x1000242c
 */

void recovered_1000242c(void *pointer)

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
                    /* WARNING: Could not recover jumptable at 0x10002478. Too many branches */
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
 * Address: 0x1000247c
 */

void * recovered_1000247c(void *pointer,ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x100024cc. Too many branches */
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

void * recovered_100024d0(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1000250c;
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
          if (uVar6 == uVar9) goto LAB_100026a0;
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
LAB_100026a0:
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
        if (uVar9 == uVar6) goto LAB_10002504;
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
LAB_10002504:
  if (uVar8 == 0) {
    return destination;
  }
LAB_1000250c:
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
 * Address: 0x10002754
 */

void * recovered_10002754(void *destination,void *source,ulong count)

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
      goto LAB_1000279c;
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
          if (puVar8 == (undefined8 *)count) goto LAB_10002a28;
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
LAB_10002a28:
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
        if ((undefined8 *)count == puVar8) goto LAB_10002aa4;
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
LAB_10002aa4:
    if (uVar9 == 0) {
      return destination;
    }
LAB_1000279c:
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
    goto LAB_10002818;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10002ab4:
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
          goto LAB_10002ab4;
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
        if (uVar5 == uVar7) goto LAB_10002b90;
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
LAB_10002b90:
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
      if (uVar7 == uVar5) goto LAB_10002c4c;
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
LAB_10002c4c:
  if (uVar9 == 0) {
    return destination;
  }
LAB_10002818:
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
 * Address: 0x10002c60
 */

void * recovered_10002c60(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x10002de8;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x10002d00:
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
        if (uVar6 == uVar7) goto joined_r0x10002d8c;
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
      goto joined_r0x10002d00;
    }
  }
joined_r0x10002d8c:
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
      if (uVar7 == uVar6) goto joined_r0x10002de8;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x10002de8:
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
 * Address: 0x10002e60
 */

void recovered_10002e60(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10002fe0;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10002efc:
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
        if (uVar7 == uVar8) goto joined_r0x10002f80;
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
      goto joined_r0x10002efc;
    }
  }
joined_r0x10002f80:
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
      if (uVar7 == uVar8) goto joined_r0x10002fe0;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10002fe0:
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
 * Address: 0x1000305c
 */

void recovered_1000305c(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100031dc;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100030f8:
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
        if (uVar7 == uVar8) goto joined_r0x1000317c;
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
      goto joined_r0x100030f8;
    }
  }
joined_r0x1000317c:
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
      if (uVar7 == uVar8) goto joined_r0x100031dc;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100031dc:
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
 * Address: 0x10003258
 */

char * recovered_10003258(char *param_1,char param_2,int param_3)

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
 * Address: 0x1000328c
 */

int recovered_1000328c(void *left,void *right,ulong count)

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
LAB_10003384:
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
      if (uVar5 != uVar6) goto LAB_1000347c;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_1000347c;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_1000347c;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_1000347c;
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
LAB_100033b4:
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
      if (uVar5 != uVar6) goto LAB_100033b4;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10003484(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10003384;
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
LAB_1000347c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003484
 */

int recovered_10003484(byte *param_1,byte *param_2)

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
 * Address: 0x100034d4
 */

bool recovered_100034d4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034e8
 */

bool recovered_100034e8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034fc
 */

bool recovered_100034fc(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003514
 */

bool recovered_10003514(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003540
 */

bool recovered_10003540(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003560
 */

bool recovered_10003560(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003574
 */

int recovered_10003574(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003584
 */

int recovered_10003584(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003594
 */

ulong recovered_10003594(char *text)

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
 * Address: 0x100035bc
 */

int recovered_100035bc(char *left,char *right)

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
LAB_100035f4:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_100035f4;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003600
 */

int recovered_10003600(byte *param_1,byte *param_2)

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
LAB_10003638:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003638;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003644
 */

void recovered_10003644(int param_1,int param_2)

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
 * Address: 0x10003660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10003660(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10003728;
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
          if (uVar8 == uVar11) goto LAB_100038bc;
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
LAB_100038bc:
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
        if (uVar11 == uVar8) goto LAB_10003720;
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
LAB_10003720:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10003728:
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
 * Address: 0x10003974
 */

char * recovered_10003974(char *param_1,char param_2)

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
 * Address: 0x100039a8
 */

int recovered_100039a8(char *param_1,char *param_2)

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
 * Address: 0x10003a0c
 */

ulong recovered_10003a0c(char *text,char *reject)

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
 * Address: 0x10003a74
 */

char * recovered_10003a74(char *param_1,char *param_2)

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
 * Address: 0x10003ad4
 */

char * recovered_10003ad4(char *param_1,char *param_2)

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


#undef DAT_1000f36c
#define DAT_1000f36c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b38
 */

undefined * recovered_10003b38(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000f36c;
}

#undef DAT_1000f36c

#undef PTR_DAT_1001000c
#define PTR_DAT_1001000c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xcd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b48
 */

undefined ** recovered_10003b48(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001000c;
}

#undef PTR_DAT_1001000c

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
 * Address: 0x10003b58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003b58(undefined4 *param_1)

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
 * Address: 0x10003c08
 */

double recovered_10003c08(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10003c4c
 */

double recovered_10003c4c(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10003d04
 */

double recovered_10003d04(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10003d3c
 */

double recovered_10003d3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10003dbc
 */

double recovered_10003dbc(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003dec
 */

double recovered_10003dec(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10003e30
 */

double recovered_10003e30(undefined4 param_1,undefined4 param_2)

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


static const unsigned char pf_literal_10003e78_DAT_10003fa8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff};
#undef DAT_10003fa8
#define DAT_10003fa8 (*(double *)((uintptr_t)pf_literal_10003e78_DAT_10003fa8))
static const unsigned char pf_literal_10003e78_DAT_10003fb0[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_10003fb0
#define DAT_10003fb0 (*(double *)((uintptr_t)pf_literal_10003e78_DAT_10003fb0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e78
 */

double recovered_10003e78(undefined4 param_1,undefined4 param_2)

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
    return DAT_10003fa8;
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
  return dVar4 + dVar4 + dVar5 * DAT_10003fb0;
}

#undef DAT_10003fa8
#undef DAT_10003fb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb8
 */

longlong recovered_10003fb8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10004178(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


static const unsigned char pf_literal_10003fe8_DAT_10004078[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10004078
#define DAT_10004078 (*(double *)((uintptr_t)pf_literal_10003fe8_DAT_10004078))
static const unsigned char pf_literal_10003fe8_DAT_10004080[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10004080
#define DAT_10004080 (*(double *)((uintptr_t)pf_literal_10003fe8_DAT_10004080))
static const unsigned char pf_literal_10003fe8_DAT_10004088[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10004088
#define DAT_10004088 (*(double *)((uintptr_t)pf_literal_10003fe8_DAT_10004088))
static const unsigned char pf_literal_10003fe8_DAT_10004090[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10004090
#define DAT_10004090 (*(double *)((uintptr_t)pf_literal_10003fe8_DAT_10004090))
static const unsigned char pf_literal_10003fe8_DAT_10004098[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_10004098
#define DAT_10004098 (*(double *)((uintptr_t)pf_literal_10003fe8_DAT_10004098))
static const unsigned char pf_literal_10003fe8_DAT_100040a0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_100040a0
#define DAT_100040a0 (*(double *)((uintptr_t)pf_literal_10003fe8_DAT_100040a0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fe8
 */

double recovered_10003fe8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10004078 < dVar1; dVar1 = dVar1 + DAT_10004080
      ) {
  }
  for (; dVar1 < DAT_10004088; dVar1 = dVar1 + DAT_10004090) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10004098 +
                 (dVar2 * dVar2 * dVar2) / DAT_100040a0);
}

#undef DAT_10004078
#undef DAT_10004080
#undef DAT_10004088
#undef DAT_10004090
#undef DAT_10004098
#undef DAT_100040a0

static const unsigned char pf_literal_100040a8_DAT_10004130[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10004130
#define DAT_10004130 (*(double *)((uintptr_t)pf_literal_100040a8_DAT_10004130))
static const unsigned char pf_literal_100040a8_DAT_10004138[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10004138
#define DAT_10004138 (*(double *)((uintptr_t)pf_literal_100040a8_DAT_10004138))
static const unsigned char pf_literal_100040a8_DAT_10004140[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10004140
#define DAT_10004140 (*(double *)((uintptr_t)pf_literal_100040a8_DAT_10004140))
static const unsigned char pf_literal_100040a8_DAT_10004148[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10004148
#define DAT_10004148 (*(double *)((uintptr_t)pf_literal_100040a8_DAT_10004148))
static const unsigned char pf_literal_100040a8_DAT_10004150[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_10004150
#define DAT_10004150 (*(double *)((uintptr_t)pf_literal_100040a8_DAT_10004150))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a8
 */

double recovered_100040a8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10004130 < dVar1; dVar1 = dVar1 + DAT_10004138
      ) {
  }
  for (; dVar1 < DAT_10004140; dVar1 = dVar1 + DAT_10004148) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10004150;
}

#undef DAT_10004130
#undef DAT_10004138
#undef DAT_10004140
#undef DAT_10004148
#undef DAT_10004150

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004158
 */

double recovered_10004158(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


static const unsigned char pf_literal_10004178_DAT_10004230[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_10004230
#define DAT_10004230 (*(double *)((uintptr_t)pf_literal_10004178_DAT_10004230))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004178
 */

longlong recovered_10004178(double value)

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

  dVar7 = value;
  if (dVar7 == 0.0) {
    return 0;
  }
  uVar5 = 0;
  uVar1 = 0x3f;
  uVar4 = 0;
  dVar8 = DAT_10004230;
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

#undef DAT_10004230

static const unsigned char pf_literal_10004238_DAT_100042b8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_100042b8
#define DAT_100042b8 (*(double *)((uintptr_t)pf_literal_10004238_DAT_100042b8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004238
 */

ulonglong recovered_10004238(double value)

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

  dVar7 = value;
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = DAT_100042b8;
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

#undef DAT_100042b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

double recovered_100042c0(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (value == 0) {
    return 0.0;
  }
  dVar3 = 1.0;
  dVar4 = 0.0;
  do {
    dVar5 = dVar4 + dVar3;
    dVar3 = dVar3 + dVar3;
    if ((value & 1) == 0) {
      dVar5 = dVar4;
    }
    dVar4 = dVar5;
    uVar1 = (uint)(value >> 0x21);
    uVar2 = (uint)((byte)(value >> 0x20) & 1) << 0x1f | (uint)value >> 1;
    value = CONCAT44(uVar1,uVar2);
  } while (uVar2 != 0 || uVar1 != 0);
  return dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004308
 */

double recovered_10004308(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (value < 0) {
    dVar5 = 1.0;
    uVar2 = -(int)value;
    uVar3 = -((int)((ulonglong)value >> 0x20) + (uint)((int)value != 0));
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
  if (value == 0) {
    return 0.0;
  }
  dVar4 = 1.0;
  dVar5 = 0.0;
  do {
    dVar6 = dVar4 + dVar5;
    dVar4 = dVar4 + dVar4;
    if ((value & 1U) == 0) {
      dVar6 = dVar5;
    }
    uVar3 = (uint)((ulonglong)value >> 0x21);
    uVar2 = (uint)((byte)((ulonglong)value >> 0x20) & 1) << 0x1f | (uint)value >> 1;
    value = CONCAT44(uVar3,uVar2);
    dVar5 = dVar6;
  } while (uVar2 != 0 || uVar3 != 0);
  return dVar6;
}


static const unsigned char pf_literal_10004398_DAT_100043d8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_100043d8
#define DAT_100043d8 (*(float *)((uintptr_t)pf_literal_10004398_DAT_100043d8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004398
 */

float recovered_10004398(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_100043d8;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_100043d8

static const unsigned char pf_literal_100043dc_DAT_10004494[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10004494
#define DAT_10004494 (*(float *)((uintptr_t)pf_literal_100043dc_DAT_10004494))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043dc
 */

float recovered_100043dc(float param_1,float *param_2)

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
    return DAT_10004494;
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

#undef DAT_10004494

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004498
 */

float recovered_10004498(float param_1,uint param_2)

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


static const unsigned char pf_literal_100044e4_DAT_10004568[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10004568
#define DAT_10004568 (*(float *)((uintptr_t)pf_literal_100044e4_DAT_10004568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e4
 */

float recovered_100044e4(float param_1,float param_2)

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
    return DAT_10004568;
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

#undef DAT_10004568

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000456c
 */

float recovered_1000456c(float param_1)

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
 * Address: 0x100045a4
 */

float recovered_100045a4(float param_1)

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
 * Address: 0x100045f0
 */

double recovered_100045f0(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004644
 */

float recovered_10004644(float param_1)

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


static const unsigned char pf_literal_100046a0_DAT_100046f4[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_100046f4
#define DAT_100046f4 (*(float *)((uintptr_t)pf_literal_100046a0_DAT_100046f4))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046a0
 */

float recovered_100046a0(float param_1)

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
  return DAT_100046f4;
}

#undef DAT_100046f4

static const unsigned char pf_literal_100046f8_DAT_10004830[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_10004830
#define DAT_10004830 (*(double *)((uintptr_t)pf_literal_100046f8_DAT_10004830))
static const unsigned char pf_literal_100046f8_DAT_10004838[] __attribute__((aligned(16)))={0x00,0x00,0x80,0xff};
#undef DAT_10004838
#define DAT_10004838 (*(float *)((uintptr_t)pf_literal_100046f8_DAT_10004838))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f8
 */

float recovered_100046f8(float param_1)

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
    return DAT_10004838;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10004830);
}

#undef DAT_10004830
#undef DAT_10004838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000483c
 */

longlong recovered_1000483c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10004178(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


static const unsigned char pf_literal_10004870_DAT_10004908[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10004908
#define DAT_10004908 (*(double *)((uintptr_t)pf_literal_10004870_DAT_10004908))
static const unsigned char pf_literal_10004870_DAT_10004910[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10004910
#define DAT_10004910 (*(double *)((uintptr_t)pf_literal_10004870_DAT_10004910))
static const unsigned char pf_literal_10004870_DAT_10004918[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10004918
#define DAT_10004918 (*(double *)((uintptr_t)pf_literal_10004870_DAT_10004918))
static const unsigned char pf_literal_10004870_DAT_10004920[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10004920
#define DAT_10004920 (*(double *)((uintptr_t)pf_literal_10004870_DAT_10004920))
static const unsigned char pf_literal_10004870_DAT_10004928[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_10004928
#define DAT_10004928 (*(double *)((uintptr_t)pf_literal_10004870_DAT_10004928))
static const unsigned char pf_literal_10004870_DAT_10004930[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_10004930
#define DAT_10004930 (*(double *)((uintptr_t)pf_literal_10004870_DAT_10004930))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

float recovered_10004870(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10004908 < dVar1; dVar1 = dVar1 + DAT_10004910) {
  }
  for (; dVar1 < DAT_10004918; dVar1 = dVar1 + DAT_10004920) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10004928 +
                         (dVar2 * dVar2 * dVar2) / DAT_10004930));
}

#undef DAT_10004908
#undef DAT_10004910
#undef DAT_10004918
#undef DAT_10004920
#undef DAT_10004928
#undef DAT_10004930

static const unsigned char pf_literal_10004938_DAT_100049c8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_100049c8
#define DAT_100049c8 (*(double *)((uintptr_t)pf_literal_10004938_DAT_100049c8))
static const unsigned char pf_literal_10004938_DAT_100049d0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_100049d0
#define DAT_100049d0 (*(double *)((uintptr_t)pf_literal_10004938_DAT_100049d0))
static const unsigned char pf_literal_10004938_DAT_100049d8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_100049d8
#define DAT_100049d8 (*(double *)((uintptr_t)pf_literal_10004938_DAT_100049d8))
static const unsigned char pf_literal_10004938_DAT_100049e0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_100049e0
#define DAT_100049e0 (*(double *)((uintptr_t)pf_literal_10004938_DAT_100049e0))
static const unsigned char pf_literal_10004938_DAT_100049e8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_100049e8
#define DAT_100049e8 (*(double *)((uintptr_t)pf_literal_10004938_DAT_100049e8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004938
 */

float recovered_10004938(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_100049c8 < dVar1; dVar1 = dVar1 + DAT_100049d0) {
  }
  for (; dVar1 < DAT_100049d8; dVar1 = dVar1 + DAT_100049e0) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_100049e8);
}

#undef DAT_100049c8
#undef DAT_100049d0
#undef DAT_100049d8
#undef DAT_100049e0
#undef DAT_100049e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049f0
 */

float recovered_100049f0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a0c
 */

int recovered_10004a0c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10004b60
 */

int recovered_10004b60(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10004bdc;
  }
  bVar2 = false;
joined_r0x10004bdc:
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
 * Address: 0x10004cc0
 */

double recovered_10004cc0(byte *param_1,undefined4 *param_2)

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
      goto LAB_10004dac;
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
LAB_10004dac:
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
 * Address: 0x10004e94
 */

float recovered_10004e94(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004cc0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000f36e
#define DAT_1000f36e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef str_1000f378
#define str_1000f378 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cU)))
#undef str_1000f389
#define str_1000f389 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dU)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eb0
 */

int recovered_10004eb0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10004f30:
  while( true ) {
    pcVar6 = str_1000f389;
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
LAB_10004f50:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10004f70;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_10004fdc;
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
LAB_10004fdc:
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
      goto LAB_10005008;
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
LAB_10005008:
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
switchD_100051dc_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10005a90;
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
      goto LAB_100054ac;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_100054ac:
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
      local_60[-iVar7] = str_1000f389[uVar11 + uVar12 * -10];
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
      goto LAB_10005a90;
    }
    break;
  default:
    goto switchD_100051dc_caseD_4a;
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
      pcVar6 = str_1000f378;
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
    goto LAB_10005a90;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10004f50;
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
                      goto LAB_10005984;
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
LAB_10005984:
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
        local_60[-iVar7] = str_1000f389[uVar10 + uVar12 * -10];
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
LAB_1000594c:
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
                    goto LAB_1000594c;
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
    goto LAB_10004f30;
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
      local_60[iVar7] = str_1000f389[uVar10 & 0xf];
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
    goto LAB_10004f30;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10004f30;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000f36e;
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
      goto LAB_100059a8;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_100059a8;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_100059a8:
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
      local_60[-iVar7] = str_1000f389[uVar11 + uVar12 * -10];
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
LAB_10005a90:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10004f30;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10004f30;
code_r0x10004f70:
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
  goto LAB_10004f30;
}

#undef DAT_1000f36e
#undef str_1000f378
#undef str_1000f389
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Recovered variadic formatting boundary; Pooka's Free Software License. */
int recovered_10005c78(char *out,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10004eb0(out,capacity,format,(void *)args);__builtin_va_end(args);return count;}


#undef DAT_10010080
#define DAT_10010080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010088
#define DAT_10010088 (*(int * *)(((uintptr_t)pf_module_state + 0xd4cU)))
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
 * Address: 0x10005ca8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005ca8(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_10010080 != 0;
          puVar4 = &DAT_10010080;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_10010088;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_10010088 = piVar3;
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
      puVar4 = &DAT_10010080;
      if (DAT_10010080 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_10010088;
      goto LAB_10005e8c;
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
      bVar7 = DAT_10010080 != 0;
      puVar4 = &DAT_10010080;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_10010088;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_10005e8c:
      if (piVar5 == (int *)0x0) {
        DAT_10010088 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010080
#undef DAT_10010088
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ea8
 */

uint * recovered_10005ea8(uint *param_1,uint *param_2)

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
 * Address: 0x10005f2c
 */

undefined4 recovered_10005f2c(uint *param_1,int param_2)

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


#undef DAT_1001008c
#define DAT_1001008c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd50U)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
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
 * Address: 0x10005f8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005f8c(char *param_1,int param_2)

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
        if (DAT_1001008c != 0) {
          DAT_1001008c = DAT_1001008c - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1001008c == 0) {
            uVar2 = 0;
          }
          else {
            recovered_100024d0(local_224,&DAT_10010090,DAT_1001008c);
            uVar2 = DAT_1001008c;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_1001008c = 0;
        }
        else {
          if (DAT_1001008c - 0x1ff < 0xfffffe00) {
            recovered_100024d0(local_224,&DAT_10010090,DAT_1001008c);
            local_224[DAT_1001008c] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_1001008c = 0;
          }
          (&DAT_10010090)[DAT_1001008c] = cVar1;
          DAT_1001008c = DAT_1001008c + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1001008c
#undef DAT_10010090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_1001008c
#define DAT_1001008c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd50U)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
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
 * Address: 0x10006170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006170(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_1001008c != 0) {
    recovered_100024d0(local_210,&DAT_10010090,DAT_1001008c);
    uVar1 = DAT_1001008c;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_1001008c = 0;
  return;
}

#undef DAT_1001008c
#undef DAT_10010090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_1001008c
#define DAT_1001008c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd50U)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
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
 * Address: 0x10006230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006230(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_1001008c == 0) {
    return;
  }
  recovered_100024d0(auStack_214,&DAT_10010090,DAT_1001008c);
  auStack_214[DAT_1001008c] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_1001008c = 0;
  return;
}

#undef DAT_1001008c
#undef DAT_10010090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000f39a
#define DAT_1000f39a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062ec
 */

void recovered_100062ec(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined1 *puVar2;

  format = &DAT_1000f39a;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000f377;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10005c78(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10005f8c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000f377
#undef DAT_1000f39a
#undef acStack_14c

#undef DAT_1000f3b8
#define DAT_1000f3b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000f39d
#define str_1000f39d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006344
 */

void recovered_10006344(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003594(str_1000f39d);
  recovered_10005f8c(str_1000f39d,uVar1);
  uVar1 = recovered_10003594(&DAT_1000f3b8);
  recovered_10005f8c(&DAT_1000f3b8,uVar1);
  return;
}

#undef DAT_1000f3b8
#undef str_1000f39d

#undef DAT_1000f3b8
#define DAT_1000f3b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000f3bb
#define str_1000f3bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006390
 */

void recovered_10006390(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003594(str_1000f3bb);
  recovered_10005f8c(str_1000f3bb,uVar1);
  uVar1 = recovered_10003594(&DAT_1000f3b8);
  recovered_10005f8c(&DAT_1000f3b8,uVar1);
  return;
}

#undef DAT_1000f3b8
#undef str_1000f3bb

#undef DAT_1001008c
#define DAT_1001008c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd50U)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
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
 * Address: 0x100063dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100063dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1001008c != 0) {
    recovered_100024d0(auStack_224,&DAT_10010090,DAT_1001008c);
    auStack_224[DAT_1001008c] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_1001008c = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_1001008c
#undef DAT_10010090
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
 * Address: 0x10006530
 */

undefined4 recovered_10006530(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006538
 */

void recovered_10006538(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000653c
 */

undefined4 recovered_1000653c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000f39a
#define DAT_1000f39a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
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
#undef str_1000f43c
#define str_1000f43c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_1000f449
#define str_1000f449 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dU)))
#undef str_1000f457
#define str_1000f457 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11bU)))
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006544
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006544(char *param_1,char *param_2)

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
    goto LAB_100067b8;
  }
  iVar2 = recovered_100035bc(param_1,str_1000f43c);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10006744:
    puVar4 = recovered_100023d8(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002c60(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      recovered_10005c78((char *)(puVar4 + 1),0xf1,&DAT_1000f39a,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_100035bc(param_1,str_1000f449);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10006744;
    }
    iVar3 = recovered_100035bc(param_1,str_1000f457);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10006744;
    }
    puVar4 = recovered_100023d8(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002c60(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10003974(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10003974(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10003974(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10003974(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10003974(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10003974(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10003974(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      recovered_10005c78((char *)(puVar4 + 1),0xf1,&DAT_1000f39a,param_1);
      recovered_10002c60(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10003974(unaff_r8,'w');
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
              destination = recovered_1000247c((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_100067e0;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_100024d0(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_100067e0:
        *DAT_10014004 = uVar7;
        recovered_1000242c(puVar4);
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
LAB_100067b8:
  *DAT_10014004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000f39a
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000f43c
#undef str_1000f449
#undef str_1000f457
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
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
 * Address: 0x100068c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100068c8(char *param_1,char *param_2,uint *param_3)

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
      recovered_1000242c((void *)param_3[0x3f]);
    }
    recovered_1000242c(param_3);
  }
  recovered_10006544(param_1,param_2);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
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
 * Address: 0x100069c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100069c8(uint *param_1)

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
    recovered_1000242c((void *)param_1[0x3f]);
  }
  recovered_1000242c(param_1);
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
 * Address: 0x10006ac0
 */

uint recovered_10006ac0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_100024d0(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10000930(count,param_2);
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
            uVar1 = recovered_10006bec(unaff_r4);
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


#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd50U)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd54U)))
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
 * Address: 0x10006bec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006bec(int *param_1)

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
LAB_10006c48:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1001008c != 0) {
      recovered_100024d0(auStack_220,&DAT_10010090,DAT_1001008c);
      auStack_220[DAT_1001008c] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_1001008c = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000f377,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10003594(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10006c48;
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

#undef DAT_1000f377
#undef DAT_1001008c
#undef DAT_10010090
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dec
 */

int recovered_10006dec(char *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_10005f8c(param_1,count);
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
        pvVar1 = recovered_1000247c((void *)param_4[0x3f],size);
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
        recovered_10002c60((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_100024d0((void *)(param_4[0x3f] + uVar2),param_1,count);
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

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f64
 */

undefined4 recovered_10006f64(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10006f78;
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
LAB_10006f78:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007014
 */

undefined4 recovered_10007014(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
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
 * Address: 0x1000703c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000703c(uint *param_1)

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
 * Address: 0x10007114
 */

undefined1 recovered_10007114(int param_1)

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
 * Address: 0x10007124
 */

undefined1 recovered_10007124(int param_1)

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
 * Address: 0x10007134
 */

void recovered_10007134(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007150
 */

void recovered_10007150(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
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
 * Address: 0x10007174
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007174(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
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
#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007204
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007204(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_10002c60(&local_28,0,0xc);
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
#undef uStack_24
#undef local_28

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
 * Address: 0x10007378
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007378(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10002c60(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_100023d8(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_100024d0(destination,local_24,local_20);
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
 * Address: 0x10007478
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10007478(int param_1,int param_2,int param_3)

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
 * Address: 0x10007500
 */

undefined4 recovered_10007500(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007508
 */

void recovered_10007508(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000750c
 */

undefined4 recovered_1000750c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007514
 */

undefined4 recovered_10007514(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000751c
 */

undefined4 recovered_1000751c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007524
 */

int recovered_10007524(char *left,char *right,ulong count)

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


#undef DAT_1000f3cb
#define DAT_1000f3cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#undef str_1000f3ce
#define str_1000f3ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92U)))
#undef str_1000f3db
#define str_1000f3db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9fU)))
#undef str_1000f3e5
#define str_1000f3e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_1000f3f9
#define str_1000f3f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#undef str_1000f407
#define str_1000f407 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbU)))
#undef str_1000f419
#define str_1000f419 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000f425
#define str_1000f425 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9U)))
#undef str_1000f436
#define str_1000f436 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007568
 */

char * recovered_10007568(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000f3cb;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10007588_caseD_0;
  default:
    pcVar1 = str_1000f436;
switchD_10007588_caseD_0:
    return pcVar1;
  case 2:
    return str_1000f3ce;
  case 5:
    return str_1000f3db;
  case 9:
    return str_1000f3e5;
  case 0xc:
    return str_1000f3f9;
  case 0xd:
    return str_1000f407;
  case 0x11:
    return str_1000f419;
  case 0x16:
    return str_1000f425;
  }
}

#undef DAT_1000f3cb
#undef str_1000f3ce
#undef str_1000f3db
#undef str_1000f3e5
#undef str_1000f3f9
#undef str_1000f407
#undef str_1000f419
#undef str_1000f425
#undef str_1000f436

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007668
 */

undefined4 recovered_10007668(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007670
 */

undefined4 recovered_10007670(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10010290
#define DAT_10010290 (*(int *)(((uintptr_t)pf_module_state + 0xf54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007678
 */

void recovered_10007678(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010290 = DAT_10010290 + 1;
  return;
}

#undef DAT_10010290

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100076a0(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100076b0(void *context){__asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr\ntrap ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007700(void *context,int value){__asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr\ntrap ");}


static const unsigned char pf_literal_10007758_DAT_100077dc[] __attribute__((aligned(16)))={0xec,0x7c,0x00,0x00};
#undef DAT_100077dc
#define DAT_100077dc (*(int *)((uintptr_t)pf_literal_10007758_DAT_100077dc))
static const unsigned char pf_literal_10007758_DAT_100077e0[] __attribute__((aligned(16)))={0x1c,0x00,0x00,0x00};
#undef DAT_100077e0
#define DAT_100077e0 (*(int *)((uintptr_t)pf_literal_10007758_DAT_100077e0))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007758
 */

void recovered_10007758(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_100077e4;
  local_20 = DAT_100077dc + 0x10007780;
  local_18 = DAT_100077e0 + 0x10007790;
  local_38 = 1;
  recovered_10007f38(&uStack_3c);
  recovered_100023c4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x100077b8);
  (*pcVar1)();
}

#undef DAT_100077dc
#undef DAT_100077e0
#undef uStack_3c
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef auStack_10
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e4
 */

undefined4 recovered_100077e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077ec
 */

void recovered_100077ec(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100077fc(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  recovered_10007758();
}


#undef DAT_10010294
#define DAT_10010294 (*(int *)(((uintptr_t)pf_module_state + 0xf58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077fc
 */

int recovered_100077fc(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_10007d50(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_10007758();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_10010294;
  DAT_10010294 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_10010294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000783c
 */

void * recovered_1000783c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100023d8(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100023c4();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007868
 */

void * recovered_10007868(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100023d8(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100023c4();
    return (void *)0x0;
  }
  return pvVar1;
}


static const unsigned char pf_literal_10007894_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_10007894_DAT_10007954))
static const unsigned char pf_literal_10007894_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_10007894_DAT_10007958))
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
 * Address: 0x10007894
 */

void recovered_10007894(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100077e4;
  local_78 = DAT_10007954 + 0x100078d8;
  local_70 = DAT_10007958 + 0x100078e8;
  local_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

static const unsigned char pf_literal_1000795c_DAT_10007a1c[] __attribute__((aligned(16)))={0xec,0x7a,0x00,0x00};
#undef DAT_10007a1c
#define DAT_10007a1c (*(int *)((uintptr_t)pf_literal_1000795c_DAT_10007a1c))
static const unsigned char pf_literal_1000795c_DAT_10007a20[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007a20
#define DAT_10007a20 (*(int *)((uintptr_t)pf_literal_1000795c_DAT_10007a20))
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
 * Address: 0x1000795c
 */

void recovered_1000795c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100077e4;
  local_78 = DAT_10007a1c + 0x100079a0;
  local_70 = DAT_10007a20 + 0x100079b0;
  local_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007a1c
#undef DAT_10007a20
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

static const unsigned char pf_literal_10007a24_DAT_10007ae4[] __attribute__((aligned(16)))={0x34,0x7a,0x00,0x00};
#undef DAT_10007ae4
#define DAT_10007ae4 (*(int *)((uintptr_t)pf_literal_10007a24_DAT_10007ae4))
static const unsigned char pf_literal_10007a24_DAT_10007ae8[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007ae8
#define DAT_10007ae8 (*(int *)((uintptr_t)pf_literal_10007a24_DAT_10007ae8))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a24
 */

void recovered_10007a24(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100077e4;
  local_78 = DAT_10007ae4 + 0x10007a68;
  local_70 = DAT_10007ae8 + 0x10007a78;
  local_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007ae4
#undef DAT_10007ae8
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c

static const unsigned char pf_literal_10007aec_DAT_10007bac[] __attribute__((aligned(16)))={0x7c,0x79,0x00,0x00};
#undef DAT_10007bac
#define DAT_10007bac (*(int *)((uintptr_t)pf_literal_10007aec_DAT_10007bac))
static const unsigned char pf_literal_10007aec_DAT_10007bb0[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007bb0
#define DAT_10007bb0 (*(int *)((uintptr_t)pf_literal_10007aec_DAT_10007bb0))
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
 * Address: 0x10007aec
 */

void recovered_10007aec(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_100077e4;
  local_78 = DAT_10007bac + 0x10007b30;
  local_70 = DAT_10007bb0 + 0x10007b40;
  local_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007bac
#undef DAT_10007bb0
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
 * Address: 0x10007bb4
 */

undefined4 recovered_10007bb4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bbc
 */

uint recovered_10007bbc(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bcc
 */

void recovered_10007bcc(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bdc
 */

void recovered_10007bdc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1001029c
#define DAT_1001029c (*(uint *)(((uintptr_t)pf_module_state + 0xf60U)))
#undef DAT_100102a0
#define DAT_100102a0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007be0
 */

undefined4 * recovered_10007be0(uint param_1)

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
  puVar1 = recovered_100023d8(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007758();
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
      if (size == uVar6) goto LAB_10007c5c;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10007c5c:
  DAT_1001029c = DAT_1001029c + 1;
  if (DAT_1001029c < 2) {
    DAT_1001029c = 1;
  }
  if (DAT_100102a0 == (undefined4 *)0x0) {
LAB_10007cb8:
    puVar1[7] = DAT_1001029c;
    puVar1[3] = DAT_100102a0;
    DAT_100102a0 = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_100102a0;
    while (*(uint *)(iVar3 + 0x1c) != DAT_1001029c) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10007cb8;
    }
    DAT_1001029c = DAT_1001029c + 1;
    if (DAT_1001029c < 2) {
      DAT_1001029c = 1;
    }
  } while( true );
}

#undef DAT_1001029c
#undef DAT_100102a0

#undef DAT_100102a0
#define DAT_100102a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cec
 */

void recovered_10007cec(int param_1)

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
  pvVar1 = DAT_100102a0;
  if (DAT_100102a0 == pointer) {
    puVar3 = &DAT_100102a0;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_10007d48;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10007d48:
  recovered_1000242c(pointer);
  return;
}

#undef DAT_100102a0

#undef DAT_100102a0
#define DAT_100102a0 (*(int *)(((uintptr_t)pf_module_state + 0xf64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d50
 */

void recovered_10007d50(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_100102a0;
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

#undef DAT_100102a0

#undef DAT_10010294
#define DAT_10010294 (*(void * *)(((uintptr_t)pf_module_state + 0xf58U)))
#undef DAT_100102a0
#define DAT_100102a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d8c
 */

void recovered_10007d8c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_10010294;
  if (DAT_10010294 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_10010294 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_10010294 + 8);
  *(undefined4 *)((int)DAT_10010294 + 8) = 0;
  DAT_10010294 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_100102a0;
  if (DAT_100102a0 == pointer) {
    puVar3 = &DAT_100102a0;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_10007e38;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10007e38:
  recovered_1000242c(pointer);
  return;
}

#undef DAT_10010294
#undef DAT_100102a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e44
 */

void recovered_10007e44(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_10007e6c((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_10010294
#define DAT_10010294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf58U)))
#undef DAT_10010298
#define DAT_10010298 (*(int * *)(((uintptr_t)pf_module_state + 0xf5cU)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e6c
 */

void recovered_10007e6c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_10010298 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_10010298;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_100087c0((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_1000802c(param_1);
        puVar3 = DAT_10010294;
                    /* WARNING: Subroutine does not return */
        if (DAT_10010294 == (undefined4 *)0x0) {
          recovered_10007758();
        }
        DAT_10010294[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
        recovered_10007e6c(puVar3);
        *extraout_r0 = (int)DAT_10010298;
        DAT_10010298 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007758();
}

#undef DAT_10010294
#undef DAT_10010298
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10010294
#define DAT_10010294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf58U)))
#undef DAT_10010298
#define DAT_10010298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f00
 */

void recovered_10007f00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_10010294;
                    /* WARNING: Subroutine does not return */
  if (DAT_10010294 == (undefined4 *)0x0) {
    recovered_10007758();
  }
  DAT_10010294[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_10007e6c(puVar1);
  *extraout_r0 = DAT_10010298;
  DAT_10010298 = extraout_r0;
  return;
}

#undef DAT_10010294
#undef DAT_10010298

#undef DAT_10010298
#define DAT_10010298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f38
 */

void recovered_10007f38(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010298;
  DAT_10010298 = param_1;
  return;
}

#undef DAT_10010298

#undef DAT_10010298
#define DAT_10010298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f5c
 */

void recovered_10007f5c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10010298;
  if (DAT_10010298 == param_1) {
    puVar2 = &DAT_10010298;
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

#undef DAT_10010298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fa4
 */

void recovered_10007fa4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007e6c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007758();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fb0
 */

void recovered_10007fb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007758();
}


#undef DAT_10010298
#define DAT_10010298 (*(int * *)(((uintptr_t)pf_module_state + 0xf5cU)))
#undef DAT_100102a0
#define DAT_100102a0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fbc
 */

void recovered_10007fbc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_100102a0; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_10008000;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007758();
  }
LAB_10008000:
  if (DAT_10010298 != (int *)0x0) {
    DAT_10010298 = (int *)*DAT_10010298;
  }
  recovered_1000802c(puVar1);
  return;
}

#undef DAT_10010298
#undef DAT_100102a0

#undef DAT_10010298
#define DAT_10010298 (*(int * *)(((uintptr_t)pf_module_state + 0xf5cU)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000802c
 */

void recovered_1000802c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_10010298 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_10010298;
      if (DAT_10010298 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_10010298[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_100080e0:
        piVar1[1] = iVar3;
        recovered_100076a0((int)piVar1);
                    /* WARNING: Subroutine does not return */
        recovered_10007fbc(extraout_r0);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_100087c0((int)DAT_10010298,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_100080e0;
      }
      DAT_10010298 = (int *)*piVar1;
    } while (DAT_10010298 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007758();
}

#undef DAT_10010298
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080ec
 */

void recovered_100080ec(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007fbc(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f8
 */

undefined4 recovered_100080f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008100
 */

void recovered_10008100(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007758();
}


#undef DAT_10010064
#define DAT_10010064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000810c
 */

int recovered_1000810c(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_100081f8:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_100081f8;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_10010064) {
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

#undef DAT_10010064

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008200
 */

void recovered_10008200(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008204
 */

undefined4 recovered_10008204(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000820c
 */

bool recovered_1000820c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008220
 */

bool recovered_10008220(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008260
 */

bool recovered_10008260(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000828c
 */

bool recovered_1000828c(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082a8
 */

bool recovered_100082a8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082c4
 */

bool recovered_100082c4(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e0
 */

bool recovered_100082e0(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


static const unsigned char pf_literal_10008300_DAT_100083d0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_100083d0
#define DAT_100083d0 (*(double *)((uintptr_t)pf_literal_10008300_DAT_100083d0))
static const unsigned char pf_literal_10008300_DAT_100083d8[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_100083d8
#define DAT_100083d8 (*(double *)((uintptr_t)pf_literal_10008300_DAT_100083d8))
static const unsigned char pf_literal_10008300_DAT_100083e0[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_100083e0
#define DAT_100083e0 (*(double *)((uintptr_t)pf_literal_10008300_DAT_100083e0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008300
 */

double recovered_10008300(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = value;
  if (NAN(dVar3)) {
    return dVar3;
  }
  if (dVar3 <= DAT_100083d8) {
    dVar4 = 0.0;
    if (DAT_100083e0 <= dVar3) {
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
  return DAT_100083d0;
}

#undef DAT_100083d0
#undef DAT_100083d8
#undef DAT_100083e0

static const unsigned char pf_literal_100083e8_DAT_100084d0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_100084d0
#define DAT_100084d0 (*(double *)((uintptr_t)pf_literal_100083e8_DAT_100084d0))
static const unsigned char pf_literal_100083e8_DAT_100084d8[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_100084d8
#define DAT_100084d8 (*(double *)((uintptr_t)pf_literal_100083e8_DAT_100084d8))
static const unsigned char pf_literal_100083e8_DAT_100084e0[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_100084e0
#define DAT_100084e0 (*(double *)((uintptr_t)pf_literal_100083e8_DAT_100084e0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083e8
 */

float recovered_100083e8(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = (double)value;
  if (NAN(value)) {
    dVar4 = dVar3;
  }
  else if (dVar3 <= DAT_100084d8) {
    dVar4 = 0.0;
    if (DAT_100084e0 <= dVar3) {
      iVar1 = 0;
      if (0.5 < value) {
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
    dVar4 = DAT_100084d0;
  }
  return (float)dVar4;
}

#undef DAT_100084d0
#undef DAT_100084d8
#undef DAT_100084e0

static const unsigned char pf_literal_100084e8_DAT_100085b8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_100085b8
#define DAT_100085b8 (*(double *)((uintptr_t)pf_literal_100084e8_DAT_100085b8))
static const unsigned char pf_literal_100084e8_DAT_100085c0[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_100085c0
#define DAT_100085c0 (*(double *)((uintptr_t)pf_literal_100084e8_DAT_100085c0))
static const unsigned char pf_literal_100084e8_DAT_100085c8[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_100085c8
#define DAT_100085c8 (*(double *)((uintptr_t)pf_literal_100084e8_DAT_100085c8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084e8
 */

double recovered_100084e8(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar3 = value;
  if (NAN(dVar3)) {
    return dVar3;
  }
  if (dVar3 <= DAT_100085c0) {
    dVar4 = 0.0;
    if (DAT_100085c8 <= dVar3) {
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
  return DAT_100085b8;
}

#undef DAT_100085b8
#undef DAT_100085c0
#undef DAT_100085c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085d0
 */

double recovered_100085d0(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  double dVar1;
  double dVar2;

  dVar1 = (double)VectorSignedToFloat(start,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)VectorSignedToFloat(end,(byte)(in_fpscr >> 0x16) & 3);
  return dVar2 - dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085ec
 */

double recovered_100085ec(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10003dbc(param_1,param_2);
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
 * Address: 0x10008644
 */

longlong recovered_10008644(char *text,char **end,int base)

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

  if (text == (char *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = (byte *)text; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x100086b0;
    }
  }
  bVar1 = false;
joined_r0x100086b0:
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((base == 0) && (base = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      base = 0x10;
    }
    else {
      base = 8;
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
          (uVar3 = (ulonglong)(uint)base * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * base,uVar6),
          (int)uVar6 < base));
  if (end != (char **)0x0) {
    if (iVar8 == 0) {
      pbVar4 = (byte *)text;
    }
    *end = (char *)pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087bc
 */

longlong recovered_100087bc(char *text,char **end,int base)

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

  if (text == (char *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = (byte *)text; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x100086b0;
    }
  }
  bVar1 = false;
joined_r0x100086b0:
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((base == 0) && (base = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      base = 0x10;
    }
    else {
      base = 8;
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
          (uVar3 = (ulonglong)(uint)base * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * base,uVar6),
          (int)uVar6 < base));
  if (end != (char **)0x0) {
    if (iVar8 == 0) {
      pbVar4 = (byte *)text;
    }
    *end = (char *)pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


#undef DAT_1000f5b0
#define DAT_1000f5b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_10010064
#define DAT_10010064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd28U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087c0
 */

undefined4 recovered_100087c0(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_10008b74((uint)*pbVar10,&local_28);
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
          goto LAB_10008998;
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
LAB_10008998:
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
LAB_10008b54:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000f5b0 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10008b74(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_10008b54;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10008b54;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10008b54;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010064) goto LAB_10008b28;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_10008b54;
  }
LAB_10008b28:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10008998;
}

#undef DAT_1000f5b0
#undef DAT_10010064
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b74
 */

undefined4 * recovered_10008b74(uint param_1,undefined4 *param_2)

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
      goto switchD_10008ba4_caseD_5;
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
switchD_10008ba4_caseD_5:
  return puVar5;
}


static const unsigned char pf_literal_10008d10_DAT_10008e44[] __attribute__((aligned(16)))={0x3c,0x67,0x00,0x00};
#undef DAT_10008e44
#define DAT_10008e44 (*(int *)((uintptr_t)pf_literal_10008d10_DAT_10008e44))
static const unsigned char pf_literal_10008d10_DAT_10008e48[] __attribute__((aligned(16)))={0x70,0x00,0x00,0x00};
#undef DAT_10008e48
#define DAT_10008e48 (*(int *)((uintptr_t)pf_literal_10008d10_DAT_10008e48))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_9c (*(undefined1 * *)(pf_stack_frame + 20))
#define local_98 (*(int * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d10
 */

void recovered_10008d10(undefined1 *param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  piVar2 = (int *)(param_1 + 4);
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_7c = DAT_10014008;
  local_78 = DAT_10008e44;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *param_1 = 0;
  local_78 = local_78 + 0x10008d80;
  local_70 = DAT_10008e48 + 0x10008d90;
  local_98 = piVar2;
  recovered_10007f38(&uStack_94);
  if (piVar2 != param_2) {
    local_90 = 1;
    puVar1 = &DAT_1000f377;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    local_9c = param_1;
    recovered_1000c690(local_98,(int)puVar1,param_2[1]);
    param_1 = local_9c;
  }
  param_1[0x1c] = 0;
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10008e44
#undef DAT_10008e48
#undef DAT_1000f377
#undef DAT_10014008
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e4c
 */

void recovered_10008e4c(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10007894((void *)0x0);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *param_2;
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 8) = uVar1;
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *param_2 = 0;
  }
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008eb0
 */

void recovered_10008eb0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ee0
 */

void recovered_10008ee0(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x18) = param_2;
  param_1[0x1c] = 0;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f10
 */

void recovered_10008f10(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f34
 */

void recovered_10008f34(undefined1 *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  *param_1 = 1;
  if ((int *)(param_1 + 4) != param_2) {
    puVar1 = &DAT_1000f377;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000c690((int *)(param_1 + 4),(int)puVar1,param_2[1]);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

#undef DAT_1000f377

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f84
 */

void recovered_10008f84(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  *param_1 = 1;
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10007894(*(void **)(param_1 + 4));
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fe8
 */

void recovered_10008fe8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#define local_90 (*(int *)(pf_stack_frame + 16))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(int *)(pf_stack_frame + 24))
#define local_81 (*(undefined8 *)(pf_stack_frame + 31))
#define local_61 (*(byte (*)[97])(pf_stack_frame + 63))
#define uStack_79 (*(undefined8 *)(pf_stack_frame + 39))
#define uStack_71 (*(undefined8 *)(pf_stack_frame + 47))
#define uStack_69 (*(undefined8 *)(pf_stack_frame + 55))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009010
 */

void recovered_10009010(int *param_1,char *param_2)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint128 auVar17;

  if (*param_2 != '\x02') {
    if (*param_2 != '\x01') {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[2] = 0;
      return;
    }
    puVar12 = *(undefined1 **)(param_2 + 4);
    uVar7 = *(uint *)(param_2 + 8);
    param_1[2] = 0;
    puVar10 = &DAT_1000f377;
    if (puVar12 != (undefined1 *)0x0) {
      puVar10 = puVar12;
    }
    param_1[1] = 0;
    *param_1 = 0;
    recovered_1000c690(param_1,(int)puVar10,uVar7);
    return;
  }
  uVar14 = *(uint *)(param_2 + 0x14);
  uVar7 = (int)uVar14 >> 0x1f;
  uVar9 = 0;
  uVar11 = (*(uint *)(param_2 + 0x10) ^ uVar7) - uVar7;
  uVar7 = (uVar14 ^ uVar7) - (uVar7 + ((*(uint *)(param_2 + 0x10) ^ uVar7) < uVar7));
  do {
    uVar8 = uVar9;
    uVar15 = uVar11 >> 1 | uVar7 << 0x1f;
    uVar13 = uVar15 + (uVar7 >> 1) + (uint)CARRY4(uVar15,uVar7 >> 1);
    uVar13 = uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar13 / 5);
    uVar5 = uVar15 - uVar13;
    lVar1 = (ulonglong)uVar5 * 0xcccccccd;
    bVar16 = uVar11 < 10;
    uVar2 = -uVar7;
    local_61[uVar8] = (char)uVar11 + (char)lVar1 * -10 | 0x30;
    uVar9 = uVar8 + 1;
    uVar11 = (uint)lVar1;
    uVar7 = ((uVar7 >> 1) - (uint)(uVar15 < uVar13)) * -0x33333333 +
            uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
  } while (bVar16 <= uVar2);
  if ((int)uVar14 < 0) {
    local_61[uVar8 + 1] = 0x2d;
    uVar9 = uVar8 + 2;
  }
  if (0x20 < uVar9) {
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    goto LAB_100091f0;
  }
  if (uVar9 != 0) {
    uVar7 = 0;
    if (0xf < uVar9) {
      uVar7 = uVar9 & 0x30;
      auVar17 = vrev(*(uint128 *)(local_61 + (uVar9 - 0x10)),1);
      local_81 = PF_PART8(auVar17, 8);
      uStack_79 = PF_PART8(auVar17, 0);
      if (uVar7 != 0x10) {
        auVar17 = vrev(*(uint128 *)(local_61 + (uVar9 - 0x20)),1);
        uStack_71 = PF_PART8(auVar17, 8);
        uStack_69 = PF_PART8(auVar17, 0);
      }
      if (uVar9 == uVar7) goto LAB_100091c8;
    }
    iVar4 = uVar9 - uVar7;
    pbVar6 = local_61 + (uVar7 - 0x20);
    do {
      iVar3 = iVar4 + -1;
      iVar4 = iVar4 + -1;
      *pbVar6 = local_61[iVar3];
      pbVar6 = pbVar6 + 1;
    } while (iVar4 != 0);
  }
LAB_100091c8:
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  recovered_1000c690(&local_90,(int)&local_81,uVar9);
LAB_100091f0:
  param_1[2] = local_88;
  param_1[1] = local_8c;
  *param_1 = local_90;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  recovered_10007894((void *)0x0);
  return;
}

#undef DAT_1000f377
#undef local_90
#undef local_8c
#undef local_88
#undef local_81
#undef local_61
#undef uStack_79
#undef uStack_71
#undef uStack_69

#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014004
#define DAT_10014004 (*(int * *)(((uintptr_t)pf_module_state + 0x4cc8U)))
#define local_18 (*(char * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000921c
 */

longlong recovered_1000921c(void *variable)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;

  piVar1 = DAT_10014004;
  if (*(char *)variable != '\x01') {
    if (*(char *)variable == '\x02') {
      return *(longlong *)((int)variable + 0x10);
    }
    return 0;
  }
  if (*(int *)((int)variable + 8) == 0) {
    return 0;
  }
  pcVar2 = *(char **)((int)variable + 4);
  local_18 = (char *)0x0;
  *DAT_10014004 = 0;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = &DAT_1000f377;
  }
  lVar4 = recovered_100087bc(pcVar2,&local_18,10);
  pcVar2 = *(char **)((int)variable + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = &DAT_1000f377;
  }
  if (((local_18 == (char *)0x0 || local_18 == pcVar2) || (*local_18 != '\0')) || (*piVar1 == 0x22))
  {
    if (((2 < *(uint *)((int)variable + 8)) && (*pcVar2 == '0')) &&
       ((byte)(pcVar2[1] | 0x20U) == 0x78)) {
      *piVar1 = 0;
      local_18 = (char *)0x0;
      lVar4 = recovered_100087bc(pcVar2 + 2,&local_18,0x10);
      pcVar2 = *(char **)((int)variable + 4);
      pcVar3 = &DAT_1000f377;
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2;
      }
      if (local_18 != (char *)0x0) {
        pcVar2 = pcVar3 + 2;
      }
      if (((local_18 != (char *)0x0 && local_18 != pcVar2) && (*local_18 == '\0')) &&
         (*piVar1 != 0x22)) {
        return lVar4;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000f377
#undef DAT_10014004
#undef local_18

static const unsigned char pf_literal_10009380_DAT_10009520[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#undef DAT_10009520
#define DAT_10009520 (*(uint64_t *)((uintptr_t)pf_literal_10009380_DAT_10009520))
static const unsigned char pf_literal_10009380_DAT_10009528[] __attribute__((aligned(16)))={0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00};
#undef DAT_10009528
#define DAT_10009528 (*(uint64_t *)((uintptr_t)pf_literal_10009380_DAT_10009528))
static const unsigned char pf_literal_10009380_DAT_10009530[] __attribute__((aligned(16)))={0xac,0x60,0x00,0x00};
#undef DAT_10009530
#define DAT_10009530 (*(int *)((uintptr_t)pf_literal_10009380_DAT_10009530))
static const unsigned char pf_literal_10009380_DAT_10009534[] __attribute__((aligned(16)))={0xa8,0x00,0x00,0x00};
#undef DAT_10009534
#define DAT_10009534 (*(int *)((uintptr_t)pf_literal_10009380_DAT_10009534))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_a0 (*(int * *)(pf_stack_frame + 16))
#define local_9c (*(int * *)(pf_stack_frame + 20))
#define local_98 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009380
 */

int * recovered_10009380(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;

  uVar2 = DAT_10009528;
  uVar1 = DAT_10009520;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  *param_1 = param_2;
  local_9c = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *local_9c = 0;
  local_98 = param_1 + 4;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[10] = 0xfff;
  *local_98 = 0;
  *(undefined8 *)(param_1 + 5) = uVar1;
  *(undefined8 *)(param_1 + 7) = uVar2;
  local_78 = DAT_10009530;
  *(undefined1 *)(param_1 + 9) = 0;
  local_78 = local_78 + 0x10009418;
  local_7c = DAT_10014008;
  local_70 = DAT_10009534 + 0x1000942c;
  local_90 = 1;
  recovered_10007f38(&uStack_94);
  local_a0 = param_1;
  recovered_10009538((int)param_1);
  piVar3 = local_a0;
  iVar5 = 1;
  bVar6 = true;
  local_a0[10] = 0xfff;
  *(undefined1 *)(local_a0 + 9) = 0;
  piVar4 = (int *)*local_a0;
  local_a0[8] = 1;
  local_a0[7] = 1;
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
  }
  if ((piVar4 != (int *)0x0 && iVar5 != 0) && (0 < *piVar4)) {
    bVar6 = piVar4[1] < 1;
  }
  *(bool *)(local_a0 + 0xb) = bVar6;
  *(undefined1 *)((int)local_a0 + 0x2d) = 1;
  recovered_10007f5c(&uStack_94);
  return piVar3;
}

#undef DAT_10009520
#undef DAT_10009528
#undef DAT_10009530
#undef DAT_10009534
#undef DAT_10014008
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68
#undef local_a0
#undef local_9c
#undef local_98

static const unsigned char pf_literal_10009538_DAT_1000a560[] __attribute__((aligned(16)))={0x4c,0x5f,0x00,0x00};
#undef DAT_1000a560
#define DAT_1000a560 (*(int *)((uintptr_t)pf_literal_10009538_DAT_1000a560))
static const unsigned char pf_literal_10009538_DAT_1000a564[] __attribute__((aligned(16)))={0xd8,0x0c,0x00,0x00};
#undef DAT_1000a564
#define DAT_1000a564 (*(int *)((uintptr_t)pf_literal_10009538_DAT_1000a564))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#undef DAT_10014018
#define DAT_10014018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cdcU)))
#undef DAT_10014044
#define DAT_10014044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d08U)))
#undef DAT_10014068
#define DAT_10014068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d2cU)))
#undef DAT_1001408c
#define DAT_1001408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d50U)))
#undef DAT_100140b0
#define DAT_100140b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d74U)))
#undef DAT_100140d4
#define DAT_100140d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d98U)))
#undef DAT_100140f8
#define DAT_100140f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbcU)))
#undef DAT_1001411c
#define DAT_1001411c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de0U)))
#undef DAT_10014140
#define DAT_10014140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e04U)))
#undef DAT_10014164
#define DAT_10014164 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e28U)))
#undef DAT_10014188
#define DAT_10014188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4cU)))
#undef DAT_100141ac
#define DAT_100141ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e70U)))
#undef DAT_100141d0
#define DAT_100141d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e94U)))
#undef DAT_100141f4
#define DAT_100141f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eb8U)))
#undef DAT_10014218
#define DAT_10014218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4edcU)))
#undef DAT_1001423c
#define DAT_1001423c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f00U)))
#undef DAT_10014260
#define DAT_10014260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f24U)))
#undef DAT_10014284
#define DAT_10014284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f48U)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6cU)))
#undef DAT_100142cc
#define DAT_100142cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f90U)))
#undef DAT_100142f0
#define DAT_100142f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb4U)))
#undef DAT_10014314
#define DAT_10014314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#define local_1fc (*(int *)(pf_stack_frame + 20))
#define local_1f8 (*(int * *)(pf_stack_frame + 24))
#define local_1f4 (*(void * *)(pf_stack_frame + 28))
#define local_1f0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1e8 (*(int * *)(pf_stack_frame + 40))
#define local_1e4 (*(void * *)(pf_stack_frame + 44))
#define local_1e0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1d8 (*(int * *)(pf_stack_frame + 56))
#define local_1d4 (*(void * *)(pf_stack_frame + 60))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 64))
#define local_1c8 (*(int * *)(pf_stack_frame + 72))
#define local_1c4 (*(void * *)(pf_stack_frame + 76))
#define auStack_200 (*(undefined1 (*)[512])(pf_stack_frame + 16))
#define local_1c0 (*(undefined4 *)(pf_stack_frame + 80))
#define local_1b8 (*(int * *)(pf_stack_frame + 88))
#define local_1b4 (*(void * *)(pf_stack_frame + 92))
#define local_1b0 (*(undefined4 *)(pf_stack_frame + 96))
#define local_1a8 (*(int * *)(pf_stack_frame + 104))
#define local_1a4 (*(void * *)(pf_stack_frame + 108))
#define local_1a0 (*(undefined4 *)(pf_stack_frame + 112))
#define local_198 (*(int * *)(pf_stack_frame + 120))
#define local_194 (*(void * *)(pf_stack_frame + 124))
#define local_190 (*(undefined4 *)(pf_stack_frame + 128))
#define local_188 (*(int * *)(pf_stack_frame + 136))
#define local_184 (*(void * *)(pf_stack_frame + 140))
#define local_180 (*(undefined4 *)(pf_stack_frame + 144))
#define local_178 (*(int * *)(pf_stack_frame + 152))
#define local_174 (*(void * *)(pf_stack_frame + 156))
#define local_170 (*(undefined4 *)(pf_stack_frame + 160))
#define local_168 (*(int * *)(pf_stack_frame + 168))
#define local_164 (*(void * *)(pf_stack_frame + 172))
#define local_160 (*(undefined4 *)(pf_stack_frame + 176))
#define local_158 (*(int * *)(pf_stack_frame + 184))
#define local_154 (*(void * *)(pf_stack_frame + 188))
#define local_150 (*(undefined4 *)(pf_stack_frame + 192))
#define local_148 (*(int * *)(pf_stack_frame + 200))
#define local_144 (*(void * *)(pf_stack_frame + 204))
#define local_140 (*(undefined4 *)(pf_stack_frame + 208))
#define local_138 (*(int * *)(pf_stack_frame + 216))
#define local_134 (*(void * *)(pf_stack_frame + 220))
#define local_130 (*(undefined4 *)(pf_stack_frame + 224))
#define local_128 (*(int * *)(pf_stack_frame + 232))
#define local_124 (*(void * *)(pf_stack_frame + 236))
#define local_120 (*(undefined4 *)(pf_stack_frame + 240))
#define local_118 (*(int * *)(pf_stack_frame + 248))
#define local_113 (*(undefined2 *)(pf_stack_frame + 253))
#define local_111 (*(undefined1 *)(pf_stack_frame + 255))
#define local_110 (*(void * *)(pf_stack_frame + 256))
#define local_10c (*(undefined4 *)(pf_stack_frame + 260))
#define local_104 (*(int * *)(pf_stack_frame + 268))
#define local_100 (*(void * *)(pf_stack_frame + 272))
#define local_fc (*(undefined4 *)(pf_stack_frame + 276))
#define local_f4 (*(int * *)(pf_stack_frame + 284))
#define local_f0 (*(void * *)(pf_stack_frame + 288))
#define local_ec (*(undefined4 *)(pf_stack_frame + 292))
#define local_e4 (*(int * *)(pf_stack_frame + 300))
#define local_e0 (*(void * *)(pf_stack_frame + 304))
#define local_dc (*(undefined4 *)(pf_stack_frame + 308))
#define local_d4 (*(int * *)(pf_stack_frame + 316))
#define local_d0 (*(void * *)(pf_stack_frame + 320))
#define local_cc (*(undefined4 *)(pf_stack_frame + 324))
#define local_c4 (*(int * *)(pf_stack_frame + 332))
#define local_c0 (*(void * *)(pf_stack_frame + 336))
#define local_bc (*(undefined4 *)(pf_stack_frame + 340))
#define local_b4 (*(int * *)(pf_stack_frame + 348))
#define local_b0 (*(void * *)(pf_stack_frame + 352))
#define local_ac (*(undefined4 *)(pf_stack_frame + 356))
#define local_a4 (*(int * *)(pf_stack_frame + 364))
#define local_a0 (*(void * *)(pf_stack_frame + 368))
#define local_9c (*(undefined4 *)(pf_stack_frame + 372))
#define local_90 (*(undefined4 *)(pf_stack_frame + 384))
#define local_7c (*(undefined4 *)(pf_stack_frame + 404))
#define local_78 (*(int *)(pf_stack_frame + 408))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 412))
#define local_70 (*(int *)(pf_stack_frame + 416))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 420))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 380))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 424))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009538
 */

void recovered_10009538(int param_1)

{
  unsigned char pf_stack_frame[560] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int *owner;
  int iVar2;
  int iVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_200;
  iVar3 = *(int *)(param_1 + 0x14);
  local_7c = DAT_10014008;
  local_78 = DAT_1000a560 + 0x10009580;
  local_70 = DAT_1000a564 + 0x10009590;
  recovered_10007f38(&uStack_94);
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x10 + -4;
    iVar3 = 1 - iVar3;
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      owner = *(int **)(iVar4 + iVar2);
      if (owner != (int *)0x0) {
        (**(code **)(*owner + 4))(owner);
      }
      pvVar1 = *(void **)(iVar4 + iVar3 * -0x10);
      *(undefined4 *)(iVar4 + iVar2 + -8) = 0;
      recovered_10007894(pvVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -0x10;
    } while (iVar3 != 1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_90 = 0xffffffff;
  local_113 = (ushort)PF_PART1(local_113, 1) << 8;
  local_1fc = param_1;
  recovered_1000c9a4(&local_a0,(undefined1 *)&local_113,1);
  local_90 = 1;
  local_a4 = recovered_1000783c(8);
  *local_a4 = (int)&DAT_10014018;
  local_90 = 2;
  recovered_1000bbe4(local_1fc,1,&local_a0,&local_a4);
  if (local_a4 != (int *)0x0) {
    (**(code **)(*local_a4 + 4))(local_a4);
  }
  local_9c = 0;
  recovered_10007894(local_a0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_1000c9a4(&local_b0,(undefined1 *)&local_113,1);
  local_90 = 3;
  local_b4 = recovered_1000783c(8);
  *local_b4 = (int)&DAT_10014044;
  local_90 = 4;
  recovered_1000bbe4(local_1fc,2,&local_b0,&local_b4);
  if (local_b4 != (int *)0x0) {
    (**(code **)(*local_b4 + 4))(local_b4);
  }
  local_ac = 0;
  recovered_10007894(local_b0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_1000c9a4(&local_c0,(undefined1 *)&local_113,1);
  local_90 = 5;
  local_c4 = recovered_1000783c(8);
  *local_c4 = (int)&DAT_10014068;
  local_90 = 6;
  recovered_1000bbe4(local_1fc,3,&local_c0,&local_c4);
  if (local_c4 != (int *)0x0) {
    (**(code **)(*local_c4 + 4))(local_c4);
  }
  local_bc = 0;
  recovered_10007894(local_c0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_1000c9a4(&local_d0,(undefined1 *)&local_113,1);
  local_90 = 7;
  local_d4 = recovered_1000783c(8);
  *local_d4 = (int)&DAT_1001408c;
  local_90 = 8;
  recovered_1000bbe4(local_1fc,4,&local_d0,&local_d4);
  if (local_d4 != (int *)0x0) {
    (**(code **)(*local_d4 + 4))(local_d4);
  }
  local_cc = 0;
  recovered_10007894(local_d0);
  local_90 = 0xffffffff;
  local_113 = local_113 & 0xff00;
  recovered_1000c9a4(&local_e0,(undefined1 *)&local_113,1);
  local_90 = 9;
  local_e4 = recovered_1000783c(8);
  *local_e4 = (int)&DAT_100140b0;
  local_90 = 10;
  recovered_1000bbe4(local_1fc,5,&local_e0,&local_e4);
  if (local_e4 != (int *)0x0) {
    (**(code **)(*local_e4 + 4))(local_e4);
  }
  local_dc = 0;
  recovered_10007894(local_e0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_1000c9a4(&local_f0,(undefined1 *)&local_113,1);
  local_90 = 0xb;
  local_f4 = recovered_1000783c(8);
  *local_f4 = (int)&DAT_100140d4;
  local_90 = 0xc;
  recovered_1000bbe4(local_1fc,6,&local_f0,&local_f4);
  if (local_f4 != (int *)0x0) {
    (**(code **)(*local_f4 + 4))(local_f4);
  }
  local_ec = 0;
  recovered_10007894(local_f0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_1000c9a4(&local_100,(undefined1 *)&local_113,1);
  local_90 = 0xd;
  local_104 = recovered_1000783c(8);
  *local_104 = (int)&DAT_100140f8;
  local_90 = 0xe;
  recovered_1000bbe4(local_1fc,7,&local_100,&local_104);
  if (local_104 != (int *)0x0) {
    (**(code **)(*local_104 + 4))(local_104);
  }
  local_fc = 0;
  recovered_10007894(local_100);
  local_90 = 0xffffffff;
  local_111 = 1;
  local_113 = 0x101;
  recovered_1000c9a4(&local_110,(undefined1 *)&local_113,3);
  local_90 = 0xf;
  local_118 = recovered_1000783c(8);
  *local_118 = (int)&DAT_1001411c;
  local_90 = 0x10;
  recovered_1000bbe4(local_1fc,8,&local_110,&local_118);
  if (local_118 != (int *)0x0) {
    (**(code **)(*local_118 + 4))(local_118);
  }
  local_10c = 0;
  recovered_10007894(local_110);
  local_90 = 0xffffffff;
  local_113 = 0x101;
  local_111 = 0;
  recovered_1000c9a4(&local_124,(undefined1 *)&local_113,3);
  local_90 = 0x11;
  local_128 = recovered_1000783c(8);
  *local_128 = (int)&DAT_10014140;
  local_90 = 0x12;
  recovered_1000bbe4(local_1fc,9,&local_124,&local_128);
  if (local_128 != (int *)0x0) {
    (**(code **)(*local_128 + 4))(local_128);
  }
  local_120 = 0;
  recovered_10007894(local_124);
  local_90 = 0xffffffff;
  local_113 = 0x101;
  recovered_1000c9a4(&local_134,(undefined1 *)&local_113,2);
  local_90 = 0x13;
  local_138 = recovered_1000783c(8);
  *local_138 = (int)&DAT_10014164;
  local_90 = 0x14;
  recovered_1000bbe4(local_1fc,10,&local_134,&local_138);
  if (local_138 != (int *)0x0) {
    (**(code **)(*local_138 + 4))(local_138);
  }
  local_130 = 0;
  recovered_10007894(local_134);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_1000c9a4(&local_144,(undefined1 *)&local_113,1);
  local_90 = 0x15;
  local_148 = recovered_1000783c(8);
  *local_148 = (int)&DAT_10014188;
  local_90 = 0x16;
  recovered_1000bbe4(local_1fc,0xb,&local_144,&local_148);
  if (local_148 != (int *)0x0) {
    (**(code **)(*local_148 + 4))(local_148);
  }
  local_140 = 0;
  recovered_10007894(local_144);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000c9a4(&local_154,(undefined1 *)&local_113,2);
  local_90 = 0x17;
  local_158 = recovered_1000783c(8);
  *local_158 = (int)&DAT_100141ac;
  local_90 = 0x18;
  recovered_1000bbe4(local_1fc,0xc,&local_154,&local_158);
  if (local_158 != (int *)0x0) {
    (**(code **)(*local_158 + 4))(local_158);
  }
  local_150 = 0;
  recovered_10007894(local_154);
  local_90 = 0xffffffff;
  local_113 = 2;
  recovered_1000c9a4(&local_164,(undefined1 *)&local_113,2);
  local_90 = 0x19;
  local_168 = recovered_1000783c(8);
  *local_168 = (int)&DAT_100141d0;
  local_90 = 0x1a;
  recovered_1000bbe4(local_1fc,0xd,&local_164,&local_168);
  if (local_168 != (int *)0x0) {
    (**(code **)(*local_168 + 4))(local_168);
  }
  local_160 = 0;
  recovered_10007894(local_164);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000c9a4(&local_174,(undefined1 *)&local_113,2);
  local_90 = 0x1b;
  local_178 = recovered_1000783c(8);
  *local_178 = (int)&DAT_100141f4;
  local_90 = 0x1c;
  recovered_1000bbe4(local_1fc,0xe,&local_174,&local_178);
  if (local_178 != (int *)0x0) {
    (**(code **)(*local_178 + 4))(local_178);
  }
  local_170 = 0;
  recovered_10007894(local_174);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000c9a4(&local_184,(undefined1 *)&local_113,2);
  local_90 = 0x1d;
  local_188 = recovered_1000783c(8);
  *local_188 = (int)&DAT_10014218;
  local_90 = 0x1e;
  recovered_1000bbe4(local_1fc,0xf,&local_184,&local_188);
  if (local_188 != (int *)0x0) {
    (**(code **)(*local_188 + 4))(local_188);
  }
  local_180 = 0;
  recovered_10007894(local_184);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000c9a4(&local_194,(undefined1 *)&local_113,2);
  local_90 = 0x1f;
  local_198 = recovered_1000783c(8);
  *local_198 = (int)&DAT_1001423c;
  local_90 = 0x20;
  recovered_1000bbe4(local_1fc,0x10,&local_194,&local_198);
  if (local_198 != (int *)0x0) {
    (**(code **)(*local_198 + 4))(local_198);
  }
  local_190 = 0;
  recovered_10007894(local_194);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000c9a4(&local_1a4,(undefined1 *)&local_113,2);
  local_90 = 0x21;
  local_1a8 = recovered_1000783c(8);
  *local_1a8 = (int)&DAT_10014260;
  local_90 = 0x22;
  recovered_1000bbe4(local_1fc,0x11,&local_1a4,&local_1a8);
  if (local_1a8 != (int *)0x0) {
    (**(code **)(*local_1a8 + 4))(local_1a8);
  }
  local_1a0 = 0;
  recovered_10007894(local_1a4);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000c9a4(&local_1b4,(undefined1 *)&local_113,2);
  local_90 = 0x23;
  local_1b8 = recovered_1000783c(8);
  *local_1b8 = (int)&DAT_10014284;
  local_90 = 0x24;
  recovered_1000bbe4(local_1fc,0x12,&local_1b4,&local_1b8);
  if (local_1b8 != (int *)0x0) {
    (**(code **)(*local_1b8 + 4))(local_1b8);
  }
  local_1b0 = 0;
  recovered_10007894(local_1b4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000c9a4(&local_1c4,(undefined1 *)&local_113,2);
  local_90 = 0x25;
  local_1c8 = recovered_1000783c(8);
  *local_1c8 = (int)&DAT_100142a8;
  local_90 = 0x26;
  recovered_1000bbe4(local_1fc,0x13,&local_1c4,&local_1c8);
  if (local_1c8 != (int *)0x0) {
    (**(code **)(*local_1c8 + 4))(local_1c8);
  }
  local_1c0 = 0;
  recovered_10007894(local_1c4);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000c9a4(&local_1d4,(undefined1 *)&local_113,2);
  local_90 = 0x27;
  local_1d8 = recovered_1000783c(8);
  *local_1d8 = (int)&DAT_100142cc;
  local_90 = 0x28;
  recovered_1000bbe4(local_1fc,0x14,&local_1d4,&local_1d8);
  if (local_1d8 != (int *)0x0) {
    (**(code **)(*local_1d8 + 4))(local_1d8);
  }
  local_1d0 = 0;
  recovered_10007894(local_1d4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000c9a4(&local_1e4,(undefined1 *)&local_113,2);
  local_90 = 0x29;
  local_1e8 = recovered_1000783c(8);
  *local_1e8 = (int)&DAT_100142f0;
  local_90 = 0x2a;
  recovered_1000bbe4(local_1fc,0x15,&local_1e4,&local_1e8);
  if (local_1e8 != (int *)0x0) {
    (**(code **)(*local_1e8 + 4))(local_1e8);
  }
  local_1e0 = 0;
  recovered_10007894(local_1e4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000c9a4(&local_1f4,(undefined1 *)&local_113,2);
  local_90 = 0x2b;
  local_1f8 = recovered_1000783c(8);
  *local_1f8 = (int)&DAT_10014314;
  local_90 = 0x2c;
  recovered_1000bbe4(local_1fc,0x16,&local_1f4,&local_1f8);
  if (local_1f8 != (int *)0x0) {
    (**(code **)(*local_1f8 + 4))(local_1f8);
  }
  local_1f0 = 0;
  recovered_10007894(local_1f4);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000a560
#undef DAT_1000a564
#undef DAT_10014008
#undef DAT_10014018
#undef DAT_10014044
#undef DAT_10014068
#undef DAT_1001408c
#undef DAT_100140b0
#undef DAT_100140d4
#undef DAT_100140f8
#undef DAT_1001411c
#undef DAT_10014140
#undef DAT_10014164
#undef DAT_10014188
#undef DAT_100141ac
#undef DAT_100141d0
#undef DAT_100141f4
#undef DAT_10014218
#undef DAT_1001423c
#undef DAT_10014260
#undef DAT_10014284
#undef DAT_100142a8
#undef DAT_100142cc
#undef DAT_100142f0
#undef DAT_10014314
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1c8
#undef local_1c4
#undef auStack_200
#undef local_1c0
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_198
#undef local_194
#undef local_190
#undef local_188
#undef local_184
#undef local_180
#undef local_178
#undef local_174
#undef local_170
#undef local_168
#undef local_164
#undef local_160
#undef local_158
#undef local_154
#undef local_150
#undef local_148
#undef local_144
#undef local_140
#undef local_138
#undef local_134
#undef local_130
#undef local_128
#undef local_124
#undef local_120
#undef local_118
#undef local_113
#undef local_111
#undef local_110
#undef local_10c
#undef local_104
#undef local_100
#undef local_fc
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a878
 */

void recovered_1000a878(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined1 uVar2;

  piVar1 = (int *)*param_1;
  param_1[10] = 0xfff;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = 1;
  param_1[8] = 1;
  param_1[7] = 1;
  if ((((piVar1 != (int *)0x0) && (uVar2 = 1, piVar1[2] != 0)) && (uVar2 = 1, 0 < *piVar1)) &&
     (uVar2 = 0, piVar1[1] < 1)) {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8e0
 */

int * recovered_1000a8e0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  int *owner;
  int iVar3;
  int iVar4;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar4 = iVar1 * 0x10 + -4;
    iVar1 = 1 - iVar1;
    do {
      iVar3 = *param_1;
      owner = *(int **)(iVar3 + iVar4);
      if (owner != (int *)0x0) {
        (**(code **)(*owner + 4))(owner);
      }
      pvVar2 = *(void **)(iVar3 + iVar1 * -0x10);
      *(undefined4 *)(iVar3 + iVar4 + -8) = 0;
      recovered_10007894(pvVar2);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -0x10;
    } while (iVar1 != 1);
  }
  param_1[1] = 0;
  recovered_10007894((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a96c
 */

int * recovered_1000a96c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar2 = iVar1 * 0x18 + -0x14;
    do {
      recovered_10007894(*(void **)(*param_1 + iVar2));
      iVar2 = iVar2 + -0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10007894((void *)*param_1);
  return param_1;
}


static const unsigned char pf_literal_1000a9c0_DAT_10009520[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#undef DAT_10009520
#define DAT_10009520 (*(uint64_t *)((uintptr_t)pf_literal_1000a9c0_DAT_10009520))
static const unsigned char pf_literal_1000a9c0_DAT_10009528[] __attribute__((aligned(16)))={0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00};
#undef DAT_10009528
#define DAT_10009528 (*(uint64_t *)((uintptr_t)pf_literal_1000a9c0_DAT_10009528))
static const unsigned char pf_literal_1000a9c0_DAT_10009530[] __attribute__((aligned(16)))={0xac,0x60,0x00,0x00};
#undef DAT_10009530
#define DAT_10009530 (*(int *)((uintptr_t)pf_literal_1000a9c0_DAT_10009530))
static const unsigned char pf_literal_1000a9c0_DAT_10009534[] __attribute__((aligned(16)))={0xa8,0x00,0x00,0x00};
#undef DAT_10009534
#define DAT_10009534 (*(int *)((uintptr_t)pf_literal_1000a9c0_DAT_10009534))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define piStack_a0 (*(int * *)(pf_stack_frame + 16))
#define piStack_9c (*(int * *)(pf_stack_frame + 20))
#define piStack_98 (*(int * *)(pf_stack_frame + 24))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_7c (*(undefined4 *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9c0
 */

int * recovered_1000a9c0(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;

  uVar2 = DAT_10009528;
  uVar1 = DAT_10009520;
  puStack_74 = auStack_68 + 0x60;
  puStack_6c = (undefined1 *)&piStack_a0;
  *param_1 = param_2;
  piStack_9c = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *piStack_9c = 0;
  piStack_98 = param_1 + 4;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[10] = 0xfff;
  *piStack_98 = 0;
  *(undefined8 *)(param_1 + 5) = uVar1;
  *(undefined8 *)(param_1 + 7) = uVar2;
  iStack_78 = DAT_10009530;
  *(undefined1 *)(param_1 + 9) = 0;
  iStack_78 = iStack_78 + 0x10009418;
  uStack_7c = DAT_10014008;
  iStack_70 = DAT_10009534 + 0x1000942c;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  piStack_a0 = param_1;
  recovered_10009538((int)param_1);
  piVar3 = piStack_a0;
  iVar5 = 1;
  bVar6 = true;
  piStack_a0[10] = 0xfff;
  *(undefined1 *)(piStack_a0 + 9) = 0;
  piVar4 = (int *)*piStack_a0;
  piStack_a0[8] = 1;
  piStack_a0[7] = 1;
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
  }
  if ((piVar4 != (int *)0x0 && iVar5 != 0) && (0 < *piVar4)) {
    bVar6 = piVar4[1] < 1;
  }
  *(bool *)(piStack_a0 + 0xb) = bVar6;
  *(undefined1 *)((int)piStack_a0 + 0x2d) = 1;
  recovered_10007f5c(&uStack_94);
  return piVar3;
}

#undef DAT_10009520
#undef DAT_10009528
#undef DAT_10009530
#undef DAT_10009534
#undef DAT_10014008
#undef piStack_a0
#undef piStack_9c
#undef piStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9c4
 */

void recovered_1000a9c4(int *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  param_1[10] = 0xfff;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = 1;
  param_1[8] = 1;
  param_1[7] = 1;
  *param_1 = (int)param_2;
  if ((((param_2 != (int *)0x0) && (uVar1 = 1, param_2[2] != 0)) && (uVar1 = 1, 0 < *param_2)) &&
     (uVar1 = 0, param_2[1] < 1)) {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa2c
 */

undefined4 recovered_1000aa2c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


static const unsigned char pf_literal_1000aa34_DAT_1000acfc[] __attribute__((aligned(16)))={0x20,0x00,0x00,0x00};
#undef DAT_1000acfc
#define DAT_1000acfc (*(uint *)((uintptr_t)pf_literal_1000aa34_DAT_1000acfc))
static const unsigned char pf_literal_1000aa34_DAT_1000b114[] __attribute__((aligned(16)))={0x24,0x00,0x00,0x00};
#undef DAT_1000b114
#define DAT_1000b114 (*(uint *)((uintptr_t)pf_literal_1000aa34_DAT_1000b114))
static const unsigned char pf_literal_1000aa34_DAT_1000b7b8[] __attribute__((aligned(16)))={0xac,0x4a,0x00,0x00};
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(int *)((uintptr_t)pf_literal_1000aa34_DAT_1000b7b8))
static const unsigned char pf_literal_1000aa34_DAT_1000b7bc[] __attribute__((aligned(16)))={0x5c,0x0c,0x00,0x00};
#undef DAT_1000b7bc
#define DAT_1000b7bc (*(int *)((uintptr_t)pf_literal_1000aa34_DAT_1000b7bc))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
static const unsigned char pf_literal_1000aa34_switchdataD_1000acfc[] __attribute__((aligned(16)))={0x20,0x00,0x00,0x00};
#undef switchdataD_1000acfc
#define switchdataD_1000acfc (*(uint *)((uintptr_t)pf_literal_1000aa34_switchdataD_1000acfc))
static const unsigned char pf_literal_1000aa34_switchdataD_1000b114[] __attribute__((aligned(16)))={0x24,0x00,0x00,0x00};
#undef switchdataD_1000b114
#define switchdataD_1000b114 (*(uint *)((uintptr_t)pf_literal_1000aa34_switchdataD_1000b114))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 16))
#define local_118 (*(int * *)(pf_stack_frame + 24))
#define local_114 (*(uint * *)(pf_stack_frame + 28))
#define local_110 (*(undefined8 ** *)(pf_stack_frame + 32))
#define local_10c (*(byte * *)(pf_stack_frame + 36))
#define local_108 (*(byte * *)(pf_stack_frame + 40))
#define local_104 (*(uint *)(pf_stack_frame + 44))
#define local_100 (*(uint * *)(pf_stack_frame + 48))
#define local_fc (*(uint * *)(pf_stack_frame + 52))
#define local_f8 (*(uint * *)(pf_stack_frame + 56))
#define local_f4 (*(uint * *)(pf_stack_frame + 60))
#define local_f0 (*(uint * *)(pf_stack_frame + 64))
#define local_ec (*(uint *)(pf_stack_frame + 68))
#define local_e8 (*(undefined4 * *)(pf_stack_frame + 72))
#define local_e4 (*(undefined4 * *)(pf_stack_frame + 76))
#define puStack_d0 (*(uint * *)(pf_stack_frame + 96))
#define local_e0 (*(uint * *)(pf_stack_frame + 80))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 104))
#define local_dc (*(uint * *)(pf_stack_frame + 84))
#define local_d8 (*(uint * *)(pf_stack_frame + 88))
#define local_d4 (*(undefined8 * *)(pf_stack_frame + 92))
#define local_cc (*(uint * *)(pf_stack_frame + 100))
#define local_c0 (*(uint * *)(pf_stack_frame + 112))
#define local_bc (*(undefined1 *)(pf_stack_frame + 116))
#define local_b8 (*(uint * *)(pf_stack_frame + 120))
#define local_b4 (*(int *)(pf_stack_frame + 124))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 128))
#define local_ac (*(uint * *)(pf_stack_frame + 132))
#define local_a8 (*(uint * *)(pf_stack_frame + 136))
#define local_a4 (*(uint * *)(pf_stack_frame + 140))
#define local_a0 (*(uint * *)(pf_stack_frame + 144))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 156))
#define local_9c (*(undefined8 * *)(pf_stack_frame + 148))
#define local_98 (*(uint * *)(pf_stack_frame + 152))
#define local_90 (*(undefined4 *)(pf_stack_frame + 160))
#define local_7c (*(undefined4 *)(pf_stack_frame + 180))
#define local_78 (*(int *)(pf_stack_frame + 184))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 188))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 200))
#define local_70 (*(int *)(pf_stack_frame + 192))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa34
 */

byte recovered_1000aa34(undefined4 *param_1)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *owner;
  uint *puVar5;
  byte *pbVar6;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint **ppuVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte bVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  uint *puVar14;
  uint *extraout_r3 = 0;
  uint *puVar15;
  uint *extraout_r3_00 = 0;
  uint *extraout_r3_01 = 0;
  undefined8 *puVar16;
  uint *extraout_r3_02 = 0;
  uint *extraout_r3_03 = 0;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *extraout_r12 = 0;
  uint *puVar22;
  bool bVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  cVar1 = *(char *)(param_1 + 0xb);
  local_7c = DAT_10014008;
  local_78 = DAT_1000b7b8 + 0x1000aa7c;
  local_70 = DAT_1000b7bc + 0x1000aa8c;
  recovered_10007f38(&uStack_94);
  bVar23 = false;
  bVar10 = 0;
  if (cVar1 != '\0') goto LAB_1000aac0;
  puVar2 = (undefined4 *)*param_1;
  iVar18 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar18 = puVar2[2];
  }
  bVar10 = bVar23;
  if ((((puVar2 == (undefined4 *)0x0 || iVar18 == 0) || (puVar5 = (uint *)*puVar2, (int)puVar5 < 1))
      || (puVar14 = (uint *)param_1[7], puVar5 < puVar14)) ||
     (puVar11 = (uint *)param_1[8], (int)puVar11 < 1)) goto LAB_1000aab8;
  puVar22 = puVar14;
  puVar20 = extraout_r12;
  if (0 < (int)puVar14) {
    puVar22 = (uint *)puVar2[1];
    puVar20 = puVar22;
  }
  if (((int)puVar22 < 1) || (puVar20 < puVar11)) goto LAB_1000aab8;
  iVar18 = iVar18 + (int)((int)puVar14 + (int)puVar5 * (int)((int)puVar11 + -1)) * 4;
  uVar19 = (uint)*(byte *)(iVar18 + -3) << 8 | (uint)*(byte *)(iVar18 + -4) << 0x10 |
           (uint)*(byte *)(iVar18 + -2);
  local_b8 = puVar11;
  if (uVar19 == 0) {
    uVar19 = (uint)*(byte *)(param_1 + 9);
    if (uVar19 < 4) {
      uVar9 = 0x30201 >> ((uVar19 & 0x1f) << 3);
      uVar19 = uVar9 & 0xff;
      *(char *)(param_1 + 9) = (char)uVar9;
    }
    local_d8 = puVar14;
    if (uVar19 < 4) {
      iVar18 = 1;
      ppuVar7 = &local_d8;
      switch((uintptr_t)(uVar19)) {
      case 2:
switchD_1000ab80_caseD_2:
        ppuVar7 = &local_d8;
        iVar18 = -1;
        local_d8 = puVar14;
        break;
      case 3:
switchD_1000ab80_caseD_3:
        iVar18 = -1;
        local_d8 = puVar14;
      case 1:
switchD_1000ab80_caseD_1:
        ppuVar7 = &local_b8;
      }
switchD_1000ab80_caseD_0:
      *ppuVar7 = (uint *)((int)*ppuVar7 + iVar18);
    }
    goto LAB_1000ac88;
  }
  if (uVar19 != 0xffffff) {
    uVar17 = param_1[10];
    uVar9 = uVar19 - uVar17;
    if (*(char *)((int)param_1 + 0x2d) == '\x01') {
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      param_1[10] = uVar19;
      if (uVar19 <= uVar17 && uVar17 - uVar19 != 0) {
        uVar9 = uVar17 - uVar19;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      uVar3 = uVar17 - uVar19;
      param_1[10] = uVar19;
      if (uVar19 <= uVar17 && uVar3 != 0) {
        uVar9 = uVar3;
      }
      if (uVar3 == 0) {
        local_d8 = puVar14;
        if (*(byte *)(param_1 + 9) < 4) {
          iVar18 = 1;
          ppuVar7 = &local_d8;
          switch((uintptr_t)(*(byte *)(param_1 + 9))) {
          case 1:
            goto switchD_1000ab80_caseD_1;
          case 2:
            goto switchD_1000ab80_caseD_2;
          case 3:
            goto switchD_1000ab80_caseD_3;
          }
          goto switchD_1000ab80_caseD_0;
        }
        goto LAB_1000ac88;
      }
    }
    local_ac = puVar11;
    local_a8 = puVar14;
    if (*(byte *)(param_1 + 9) < 4) {
      puVar14 = &DAT_1000acfc;
      ppuVar7 = &local_a8;
      iVar18 = 1;
      switch((uintptr_t)(*(byte *)(param_1 + 9))) {
      case 2:
        iVar18 = -1;
        break;
      case 3:
        iVar18 = -1;
      case 1:
        ppuVar7 = &local_ac;
      }
      *ppuVar7 = (uint *)((int)*ppuVar7 + iVar18);
    }
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = (uint *)0x0;
    if ((uVar9 < (uint)param_1[5]) && (param_1[4] != 0)) {
      local_e8 = (undefined4 *)(param_1[4] + uVar9 * 0x10);
      local_90 = 1;
      local_e4 = param_1;
      recovered_1000b7e4((int *)&local_b8,local_e8[1]);
      puVar14 = extraout_r3;
      param_1 = local_e4;
      if (local_e8[1] != 0) {
        pbVar6 = (byte *)*local_e8;
        puVar24 = (undefined8 *)0x0;
        puVar25 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar26 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar27 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        local_10c = pbVar6 + local_e8[1];
        local_110 = &local_d4;
        local_114 = auStack_c8;
        local_118 = local_e4 + 1;
        puVar5 = extraout_r3;
        do {
          puVar11 = (uint *)*param_1;
          puVar14 = (uint *)(uint)*(byte *)(param_1 + 9);
          local_104 = (uint)*pbVar6;
          local_d8 = local_a8;
          local_a4 = local_ac;
          if (puVar11 == (uint *)0x0) {
LAB_1000b690:
            puVar22 = (uint *)0x0;
LAB_1000b694:
            param_1[8] = local_a4;
            *(undefined1 *)(param_1 + 0xb) = 1;
            param_1[7] = local_d8;
            recovered_10007894(puVar22);
            goto LAB_1000b6ac;
          }
          uVar19 = puVar11[2];
          local_108 = pbVar6;
          if (uVar19 == 0) goto LAB_1000b690;
          bVar23 = false;
          puVar20 = (uint *)0x0;
          puVar21 = (uint *)0x0;
          puVar22 = (uint *)0x0;
          local_e0 = (uint *)0x0;
          local_f4 = puVar11;
          local_f0 = puVar14;
          while( true ) {
            local_a0 = puVar22;
            puVar12 = (uint *)*puVar11;
            if ((((int)puVar12 < 1) || (puVar12 < local_d8)) || ((int)local_a4 < 1))
            goto LAB_1000b694;
            puVar15 = local_d8;
            if (0 < (int)local_d8) {
              puVar15 = (uint *)puVar11[1];
              puVar5 = puVar15;
            }
            if (((int)puVar15 < 1) || (puVar5 < local_a4)) goto LAB_1000b694;
            iVar18 = uVar19 + (int)((int)local_d8 + (int)puVar12 * (int)((int)local_a4 + -1)) * 4;
            puVar5 = (uint *)(uint)*(byte *)(iVar18 + -3);
            local_dc = (uint *)(uint)*(byte *)(iVar18 + -4);
            uVar19 = (uint)*(byte *)(iVar18 + -2);
            if (((int)puVar5 << 8 | (int)local_dc << 0x10 | uVar19) == 0xffffff) break;
            if ((bVar23) || (puVar22 = local_e0, local_dc == (uint *)0xff)) {
LAB_1000b0f8:
              bVar23 = true;
              if (puVar14 < &UndefinedInstruction) {
LAB_1000b104:
                iVar18 = 1;
                ppuVar7 = &local_d8;
                puVar5 = (uint *)(&DAT_1000b114)[(int)puVar14];
                switch((uintptr_t)(puVar14)) {
                case 0x2:
                  iVar18 = -1;
                  ppuVar7 = &local_d8;
                  break;
                case 0x3:
                  iVar18 = -1;
                case 0x1:
                  ppuVar7 = &local_a4;
                }
                *ppuVar7 = (uint *)((int)*ppuVar7 + iVar18);
              }
            }
            else {
              puVar12 = puVar20;
              if (puVar20 == puVar21) {
                puVar15 = (uint *)((int)puVar20 << 1);
                if (puVar20 == (uint *)0x0) {
                  puVar15 = (uint *)&UndefinedInstruction;
                }
                if (puVar20 < puVar15) {
                  local_90 = 2;
                  local_98 = local_e0;
                  local_100 = puVar20;
                  local_fc = puVar15;
                  local_f8 = puVar5;
                  local_ec = uVar19;
                  puVar22 = recovered_1000783c((ulong)puVar15);
                  puVar12 = local_100;
                  if (local_100 != (uint *)0x0) {
                    puVar5 = (uint *)0x0;
                    uVar19 = extraout_r1;
                    if ((uint *)0xf < local_100) {
                      uVar19 = (int)puVar22 - (int)local_e0;
                    }
                    if ((uint *)0xf < local_100 && 0xf < uVar19) {
                      puVar5 = (uint *)((uint)local_100 & 0xfffffff0);
                      puVar14 = puVar5;
                      puVar11 = local_e0;
                      puVar20 = puVar22;
                      do {
                        uVar28 = *(undefined8 *)puVar11;
                        uVar29 = *(undefined8 *)(puVar11 + 2);
                        puVar11 = puVar11 + 4;
                        puVar14 = puVar14 + -4;
                        *(undefined8 *)puVar20 = uVar28;
                        *(undefined8 *)(puVar20 + 2) = uVar29;
                        puVar20 = puVar20 + 4;
                      } while (puVar14 != (uint *)0x0);
                      if (local_100 == puVar5) goto LAB_1000af24;
                    }
                    iVar18 = (int)local_100 - (int)puVar5;
                    pbVar6 = (byte *)((int)puVar22 + (int)puVar5);
                    pbVar13 = (byte *)((int)local_e0 + (int)puVar5);
                    do {
                      iVar18 = iVar18 + -1;
                      *pbVar6 = *pbVar13;
                      pbVar6 = pbVar6 + 1;
                      pbVar13 = pbVar13 + 1;
                    } while (iVar18 != 0);
                  }
LAB_1000af24:
                  recovered_10007894(local_e0);
                  uVar19 = local_ec;
                  puVar5 = local_f8;
                  param_1 = local_e4;
                  puVar21 = local_fc;
                  puVar14 = local_f0;
                  puVar11 = local_f4;
                }
              }
              *(byte *)((int)puVar22 + (int)puVar12) = (byte)local_dc;
              puVar20 = (uint *)((int)puVar12 + 1);
              local_e0 = puVar22;
              if (puVar5 == (uint *)0xff) {
                goto LAB_1000b0f8;
              }
              if (puVar20 == puVar21) {
                puVar15 = (uint *)((int)puVar21 << 1);
                if (puVar21 == (uint *)0x0) {
                  puVar15 = (uint *)&UndefinedInstruction;
                }
                if (puVar15 <= puVar21) goto LAB_1000b024;
                local_90 = 3;
                local_fc = puVar21;
                local_f8 = puVar5;
                local_ec = uVar19;
                local_dc = puVar15;
                local_98 = puVar22;
                puVar22 = recovered_1000783c((ulong)puVar15);
                puVar5 = local_fc;
                if (local_fc != (uint *)0x0) {
                  puVar14 = (uint *)0x0;
                  uVar19 = extraout_r1_00;
                  if ((uint *)0xf < local_fc) {
                    uVar19 = (int)puVar22 - (int)local_e0;
                  }
                  if ((uint *)0xf < local_fc && 0xf < uVar19) {
                    puVar14 = (uint *)((uint)local_fc & 0xfffffff0);
                    puVar11 = puVar14;
                    puVar20 = local_e0;
                    puVar21 = puVar22;
                    do {
                      uVar28 = *(undefined8 *)puVar20;
                      uVar29 = *(undefined8 *)(puVar20 + 2);
                      puVar20 = puVar20 + 4;
                      puVar11 = puVar11 + -4;
                      *(undefined8 *)puVar21 = uVar28;
                      *(undefined8 *)(puVar21 + 2) = uVar29;
                      puVar21 = puVar21 + 4;
                    } while (puVar11 != (uint *)0x0);
                    if (local_fc == puVar14) goto LAB_1000afe8;
                  }
                  iVar18 = (int)local_fc - (int)puVar14;
                  pbVar6 = (byte *)((int)puVar22 + (int)puVar14);
                  pbVar13 = (byte *)((int)local_e0 + (int)puVar14);
                  do {
                    iVar18 = iVar18 + -1;
                    *pbVar6 = *pbVar13;
                    pbVar6 = pbVar6 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while (iVar18 != 0);
                }
LAB_1000afe8:
                recovered_10007894(local_e0);
                puVar20 = (uint *)((int)puVar5 + 1);
                *(byte *)((int)puVar22 + (int)puVar5) = (byte)local_f8;
                uVar19 = local_ec;
                puVar5 = extraout_r3_00;
                param_1 = local_e4;
                puVar21 = local_dc;
                puVar14 = local_f0;
                puVar11 = local_f4;
              }
              else {
LAB_1000b024:
                *(byte *)((int)puVar22 + (int)puVar20) = (byte)puVar5;
                puVar20 = (uint *)((int)puVar12 + 2);
              }
              local_e0 = puVar22;
              if (uVar19 == 0xff) goto LAB_1000b0f8;
              if (puVar20 == puVar21) {
                puVar12 = (uint *)((int)puVar21 << 1);
                if (puVar21 == (uint *)0x0) {
                  puVar12 = (uint *)&UndefinedInstruction;
                }
                if (puVar12 <= puVar21) goto LAB_1000b15c;
                local_90 = 4;
                local_f8 = puVar12;
                local_ec = uVar19;
                local_dc = puVar21;
                local_98 = puVar22;
                puVar22 = recovered_1000783c((ulong)puVar12);
                param_1 = local_e4;
                if (local_dc != (uint *)0x0) {
                  puVar5 = (uint *)0x0;
                  uVar19 = extraout_r1_01;
                  if ((uint *)0xf < local_dc) {
                    uVar19 = (int)puVar22 - (int)local_e0;
                  }
                  if ((uint *)0xf < local_dc && 0xf < uVar19) {
                    puVar5 = (uint *)((uint)local_dc & 0xfffffff0);
                    puVar14 = puVar5;
                    puVar11 = local_e0;
                    puVar20 = puVar22;
                    do {
                      uVar28 = *(undefined8 *)puVar11;
                      uVar29 = *(undefined8 *)(puVar11 + 2);
                      puVar11 = puVar11 + 4;
                      puVar14 = puVar14 + -4;
                      *(undefined8 *)puVar20 = uVar28;
                      *(undefined8 *)(puVar20 + 2) = uVar29;
                      puVar20 = puVar20 + 4;
                    } while (puVar14 != (uint *)0x0);
                    if (local_dc == puVar5) goto LAB_1000b0c0;
                  }
                  iVar18 = (int)local_dc - (int)puVar5;
                  pbVar6 = (byte *)((int)puVar22 + (int)puVar5);
                  pbVar13 = (byte *)((int)local_e0 + (int)puVar5);
                  do {
                    iVar18 = iVar18 + -1;
                    *pbVar6 = *pbVar13;
                    pbVar6 = pbVar6 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while (iVar18 != 0);
                }
LAB_1000b0c0:
                recovered_10007894(local_e0);
                pbVar6 = (byte *)((int)puVar22 + (int)local_dc);
                uVar19 = local_ec;
                puVar5 = extraout_r3_01;
                puVar20 = local_dc;
                puVar21 = local_f8;
                puVar14 = local_f0;
                puVar11 = local_f4;
                local_e0 = puVar22;
              }
              else {
LAB_1000b15c:
                pbVar6 = (byte *)((int)puVar22 + (int)puVar20);
              }
              puVar20 = (uint *)((int)puVar20 + 1);
              *pbVar6 = (byte)uVar19;
              bVar23 = false;
              puVar22 = local_e0;
              if (puVar14 < &UndefinedInstruction) goto LAB_1000b104;
            }
            uVar19 = puVar11[2];
            if (uVar19 == 0) goto LAB_1000b694;
          }
          if (puVar14 < &UndefinedInstruction) {
            ppuVar7 = &local_d8;
            iVar18 = 1;
            switch((uintptr_t)(puVar14)) {
            case 0x2:
              iVar18 = -1;
              break;
            case 0x3:
              iVar18 = -1;
            case 0x1:
              ppuVar7 = &local_a4;
            }
            *ppuVar7 = (uint *)((int)*ppuVar7 + iVar18);
          }
          puVar14 = local_a4;
          puVar5 = local_d8;
          if (local_104 == 2) {
            if (puVar20 == (uint *)0x0) {
              local_dc = (uint *)0x1;
            }
            else {
              uVar19 = 0;
              uVar9 = 0;
              puVar11 = local_a0;
              puVar22 = puVar20;
              do {
                local_dc = (uint *)0xffffffff;
                if (uVar9 >> 0x18 != 0) goto LAB_1000b46c;
                uVar9 = uVar9 << 8 | uVar19 >> 0x18;
                puVar22 = (uint *)((int)puVar22 + -1);
                uVar19 = (uint)(byte)*puVar11 | uVar19 << 8;
                puVar11 = (uint *)((int)puVar11 + 1);
              } while (puVar22 != (uint *)0x0);
              if (-uVar9 < (uint)(uVar19 < 0xfffffffe)) {
                local_dc = (uint *)(uVar19 + 1);
              }
            }
LAB_1000b46c:
            *local_110 = puVar24;
            local_110[1] = puVar25;
            local_110[2] = puVar26;
            local_110[3] = puVar27;
            local_110[4] = (undefined8 *)0x0;
            local_d8 = (uint *)CONCAT31(PF_PART3(local_d8, 1),2);
            local_90 = 9;
            local_bc = puVar20 == (uint *)0x0;
            local_f8 = puVar5;
            local_f4 = puVar14;
            local_c0 = local_dc;
            recovered_1000c854((int *)&local_b8,(undefined1 *)&local_d8);
            if ((uint *)local_e4[2] < local_dc) {
              local_90 = 10;
              recovered_1000be00(local_118,(uint)local_dc);
            }
LAB_1000b594:
            puVar4 = local_d4;
LAB_1000b598:
            recovered_10007894(puVar4);
            puVar5 = local_f8;
            param_1 = local_e4;
            puVar14 = local_f4;
          }
          else {
            if (local_104 == 1) {
              if (puVar20 == (uint *)0x0) {
                uVar19 = 0;
                uVar9 = 0;
              }
              else {
                uVar19 = 0;
                uVar9 = 0;
                puVar11 = local_a0;
                puVar22 = puVar20;
                do {
                  if (uVar9 >> 0x18 != 0) {
                    uVar19 = 0xffffffff;
                    uVar9 = 0xffffffff;
                    break;
                  }
                  uVar9 = uVar9 << 8 | uVar19 >> 0x18;
                  puVar22 = (uint *)((int)puVar22 + -1);
                  uVar19 = (uint)(byte)*puVar11 | uVar19 << 8;
                  puVar11 = (uint *)((int)puVar11 + 1);
                } while (puVar22 != (uint *)0x0);
              }
              if (0x7fffffff < uVar9) {
                uVar19 = 0xffffffff;
                uVar9 = 0x7fffffff;
              }
              local_110[5] = (undefined8 *)0x0;
              *local_110 = puVar24;
              local_110[1] = puVar25;
              local_110[2] = puVar26;
              local_110[3] = puVar27;
              local_110[4] = (undefined8 *)0x0;
              *local_114 = uVar19;
              local_d8 = (uint *)CONCAT31(PF_PART3(local_d8, 1),1);
              local_114[1] = uVar9;
              local_90 = 8;
              local_bc = puVar20 == (uint *)0x0;
              local_f8 = puVar5;
              local_f4 = puVar14;
              recovered_1000c854((int *)&local_b8,(undefined1 *)&local_d8);
              goto LAB_1000b594;
            }
            if (local_104 == 0) {
              local_f8 = local_d8;
              local_f4 = local_a4;
              if (puVar20 == (uint *)0x0) {
                puVar5 = (uint *)0x0;
                puVar4 = (undefined8 *)0x0;
              }
              else {
                local_90 = 5;
                local_100 = puVar20;
                puVar4 = recovered_1000783c((ulong)((int)puVar20 + 1));
                puVar14 = (uint *)0x0;
                *(undefined1 *)puVar4 = 0;
                recovered_10007894((void *)0x0);
                puVar11 = (uint *)((int)local_a0 + (int)local_100);
                puVar22 = local_a0;
                puVar5 = local_100;
                puVar20 = local_100;
                local_fc = puVar11;
                do {
                  bVar10 = (byte)*puVar22;
                  local_9c = puVar4;
                  if (puVar14 == puVar5) {
                    puVar21 = (uint *)((int)puVar14 << 1);
                    if (puVar14 == (uint *)0x0) {
                      puVar21 = (uint *)&DataAbort;
                    }
                    if (puVar14 < puVar21) {
                      local_90 = 7;
                      local_f0 = puVar21;
                      local_ec = (uint)bVar10;
                      local_e0 = puVar22;
                      local_dc = puVar14;
                      puVar4 = recovered_1000783c((uint)puVar21 | 1);
                      puVar14 = local_dc;
                      puVar20 = local_100;
                      *(undefined1 *)puVar4 = 0;
                      if (local_dc != (uint *)0x0) {
                        bVar23 = local_dc == (uint *)&DataAbort;
                        puVar5 = (uint *)0x0;
                        puVar8 = local_9c;
                        if (local_dc >= &DataAbort) {
                          puVar8 = (undefined8 *)((int)puVar4 - (int)local_9c);
                          bVar23 = puVar8 == (undefined8 *)0xf;
                        }
                        if ((local_dc < &DataAbort || puVar8 < (undefined8 *)0xf) || bVar23)
                        goto LAB_1000b398;
                        uVar19 = (uint)local_dc & 0xfffffff0;
                        puVar5 = (uint *)((uint)local_dc & 0xfffffff0);
                        puVar8 = local_9c;
                        puVar16 = puVar4;
                        do {
                          uVar28 = *puVar8;
                          uVar29 = puVar8[1];
                          puVar8 = puVar8 + 2;
                          uVar19 = uVar19 - 0x10;
                          *puVar16 = uVar28;
                          puVar16[1] = uVar29;
                          puVar16 = puVar16 + 2;
                        } while (uVar19 != 0);
                        for (; local_dc != puVar5; puVar5 = (uint *)((int)puVar5 + 1)) {
LAB_1000b398:
                          *(byte *)((int)puVar4 + (int)puVar5) =
                               *(byte *)((int)local_9c + (int)puVar5);
                        }
                      }
                      *(byte *)((int)puVar4 + (int)local_dc) = 0;
                      recovered_10007894(local_9c);
                      bVar10 = (byte)local_ec;
                      puVar11 = local_fc;
                      puVar22 = local_e0;
                      puVar5 = local_f0;
                    }
                  }
                  *(byte *)((int)puVar4 + (int)puVar14) = bVar10;
                  puVar14 = (uint *)((int)puVar14 + 1);
                  puVar22 = (uint *)((int)puVar22 + 1);
                  *(byte *)((int)puVar4 + (int)puVar14) = 0;
                } while (puVar22 != puVar11);
              }
              local_d8 = (uint *)((uint)local_d8 & 0xffffff00);
              *local_110 = puVar24;
              local_110[1] = puVar25;
              local_110[2] = puVar26;
              local_110[3] = puVar27;
              *(undefined8 **)((int)local_110 + 9) = puVar24;
              *(undefined8 **)((int)local_110 + 0xd) = puVar25;
              *(undefined8 **)((int)local_110 + 0x11) = puVar26;
              *(undefined8 **)((int)local_110 + 0x15) = puVar27;
              recovered_10007894((void *)0x0);
              local_bc = puVar20 == (uint *)0x0;
              local_90 = 6;
              local_d4 = puVar4;
              puStack_d0 = puVar20;
              local_cc = puVar5;
              recovered_1000c854((int *)&local_b8,(undefined1 *)&local_d8);
              recovered_10007894(local_d4);
              puVar4 = (undefined8 *)0x0;
              goto LAB_1000b598;
            }
          }
          local_ac = puVar14;
          local_a8 = puVar5;
          recovered_10007894(local_a0);
          pbVar6 = local_108 + 1;
          puVar14 = extraout_r3_02;
          puVar5 = extraout_r3_02;
        } while (pbVar6 != local_10c);
      }
      owner = (int *)local_e8[3];
      param_1[7] = local_a8;
      param_1[8] = local_ac;
      puVar11 = local_ac;
      puVar5 = local_a8;
      if (owner != (int *)0x0) {
        local_90 = 0xb;
        (**(code **)(*owner + 8))(owner,param_1,&local_b8);
        puVar11 = (uint *)local_e4[8];
        puVar5 = (uint *)local_e4[7];
        puVar14 = extraout_r3_03;
        param_1 = local_e4;
      }
    }
    else {
      param_1[7] = local_a8;
      param_1[8] = local_ac;
      puVar11 = local_ac;
      puVar5 = local_a8;
    }
    puVar22 = (uint *)*param_1;
    if (puVar22 != (uint *)0x0) {
      puVar14 = (uint *)puVar22[2];
    }
    if ((((!(puVar22 != (uint *)0x0 && puVar14 != (uint *)0x0)) || ((int)*puVar22 < 1)) ||
        ((uint *)*puVar22 < puVar5)) || ((int)puVar11 < 1)) {
LAB_1000b644:
      *(undefined1 *)(param_1 + 0xb) = 1;
LAB_1000b6ac:
      bVar10 = 0;
      iVar18 = local_b4;
    }
    else {
      if (0 < (int)puVar5) {
        puVar5 = (uint *)puVar22[1];
        puVar22 = puVar5;
      }
      if (((int)puVar5 < 1) || (puVar22 < puVar11)) goto LAB_1000b644;
      bVar10 = *(byte *)(param_1 + 0xb) ^ 1;
      iVar18 = local_b4;
    }
    for (; iVar18 != 0; iVar18 = iVar18 + -1) {
      recovered_10007894((void *)local_b8[iVar18 * 8 + -7]);
    }
    local_b4 = 0;
    recovered_10007894(local_b8);
    goto LAB_1000aac0;
  }
  param_1[10] = 0xfff;
  local_d8 = puVar14;
  if (*(byte *)(param_1 + 9) < 4) {
    iVar18 = 1;
    ppuVar7 = &local_d8;
    switch((uintptr_t)(*(byte *)(param_1 + 9))) {
    case 1:
      goto switchD_1000ab80_caseD_1;
    case 2:
      goto switchD_1000ab80_caseD_2;
    case 3:
      goto switchD_1000ab80_caseD_3;
    }
    goto switchD_1000ab80_caseD_0;
  }
LAB_1000ac88:
  param_1[7] = local_d8;
  bVar10 = (local_d8 <= puVar5 && (0 < (int)local_b8 && 0 < (int)local_d8)) && local_b8 <= puVar20;
  param_1[8] = local_b8;
  if ((local_d8 > puVar5 || (0 >= (int)local_b8 || 0 >= (int)local_d8)) || local_b8 > puVar20) {
LAB_1000aab8:
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
LAB_1000aac0:
  recovered_10007f5c(&uStack_94);
  return bVar10 & 1;
}

#undef DAT_1000acfc
#undef DAT_1000b114
#undef DAT_1000b7b8
#undef DAT_1000b7bc
#undef DAT_10014008
#undef EXT_00000004
#undef EXT_00000010
#undef switchdataD_1000acfc
#undef switchdataD_1000b114
#undef auStack_120
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
#undef puStack_d0
#undef local_e0
#undef auStack_c8
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_cc
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_94
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7c0
 */

void recovered_1000b7c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x24) < 4) {
    *(char *)(param_1 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x24) & 0x1f) << 3));
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7e4
 */

void recovered_1000b7e4(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_1000783c(param_2 << 5);
    if (param_1[1] != 0) {
      uVar7 = 0;
      do {
        puVar2 = (undefined1 *)(*param_1 + uVar7 * 0x20);
        uVar3 = *(undefined4 *)(puVar2 + 4);
        uVar4 = *(undefined4 *)(puVar2 + 8);
        uVar6 = *(undefined4 *)(puVar2 + 0xc);
        puVar5 = (undefined1 *)((int)pvVar1 + uVar7 * 0x20);
        *puVar5 = *puVar2;
        *(undefined4 *)(puVar5 + 4) = uVar3;
        *(undefined4 *)(puVar5 + 8) = uVar4;
        *(undefined4 *)(puVar5 + 0xc) = uVar6;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        uVar8 = *(undefined8 *)(puVar2 + 0x10);
        *(undefined8 *)(puVar5 + 0x15) = *(undefined8 *)(puVar2 + 0x15);
        *(undefined8 *)(puVar5 + 0x10) = uVar8;
        recovered_10007894((void *)0x0);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_1[1]);
    }
    recovered_10007894((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8ac
 */

int recovered_1000b8ac(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_1000be00((int *)(param_1 + 4),param_2);
  }
  return *(int *)(param_1 + 4) + param_2 * 0x18 + -0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b8f0
 */

int * recovered_1000b8f0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10007894(*(void **)(*param_1 + iVar1 * 0x20 + -0x1c));
  }
  param_1[1] = 0;
  recovered_10007894((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b938
 */

void recovered_1000b938(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_1000aa34(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b958
 */

undefined1 recovered_1000b958(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b960
 */

void recovered_1000b960(int param_1,uint param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    recovered_1000ba94((int *)(param_1 + 0x10),param_2 + 1);
  }
  piVar10 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 0x10);
  if (piVar10 != param_3) {
    uVar12 = param_3[1];
    pvVar11 = (void *)0x0;
    if (uVar12 == 0) {
      pvVar1 = (void *)0x0;
      uVar7 = 0;
    }
    else {
      pvVar1 = recovered_1000783c(uVar12);
      recovered_10007894((void *)0x0);
      uVar2 = param_3[1];
      uVar7 = 0;
      if (uVar2 != 0) {
        iVar5 = *param_3;
        uVar6 = 0;
        uVar7 = extraout_r3;
        if (uVar2 >= 0x10) {
          uVar7 = (int)pvVar1 - iVar5;
        }
        if (uVar2 < 0x10 || uVar7 < 0x10) goto LAB_1000ba20;
        uVar6 = uVar2 & 0xfffffff0;
        uVar7 = 0;
        do {
          puVar8 = (undefined8 *)(iVar5 + uVar7);
          uVar13 = puVar8[1];
          puVar9 = (undefined8 *)((int)pvVar1 + uVar7);
          uVar7 = uVar7 + 0x10;
          *puVar9 = *puVar8;
          puVar9[1] = uVar13;
        } while (uVar6 != uVar7);
        for (; uVar2 != uVar6; uVar6 = uVar6 + 1) {
LAB_1000ba20:
          *(undefined1 *)((int)pvVar1 + uVar6) = *(undefined1 *)(iVar5 + uVar6);
        }
        uVar7 = uVar2;
      }
    }
    pvVar3 = (void *)*piVar10;
    piVar10[2] = uVar12;
    piVar10[1] = uVar7;
    *piVar10 = (int)pvVar1;
    recovered_10007894(pvVar3);
    piVar4 = (int *)param_3[3];
    if (piVar4 != (int *)0x0) {
      pvVar11 = (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar4 = (int *)piVar10[3];
    piVar10[3] = (int)pvVar11;
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 4))(piVar4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba94
 */

void recovered_1000ba94(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  int *owner;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;

  uVar1 = param_1[1];
  if (uVar1 >= param_2 && uVar1 != param_2) {
    iVar9 = uVar1 * 0x10 + -4;
    do {
      uVar1 = uVar1 - 1;
      iVar7 = *param_1;
      owner = *(int **)(iVar7 + iVar9);
      if (owner != (int *)0x0) {
        (**(code **)(*owner + 4))(owner);
      }
      pvVar2 = *(void **)(iVar7 + uVar1 * 0x10);
      *(undefined4 *)(iVar7 + iVar9 + -8) = 0;
      recovered_10007894(pvVar2);
      iVar9 = iVar9 + -0x10;
    } while (param_2 < uVar1);
    param_1[1] = param_2;
    return;
  }
  if (uVar1 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar2 = recovered_1000783c(param_2 << 4);
      if (param_1[1] != 0) {
        uVar1 = 0;
        do {
          puVar3 = (undefined4 *)(*param_1 + uVar1 * 0x10);
          uVar4 = puVar3[1];
          uVar5 = puVar3[2];
          uVar8 = puVar3[3];
          puVar6 = (undefined4 *)((int)pvVar2 + uVar1 * 0x10);
          *puVar6 = *puVar3;
          *puVar3 = 0;
          puVar6[1] = uVar4;
          puVar6[2] = uVar5;
          puVar6[3] = uVar8;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          recovered_10007894((void *)0x0);
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
      }
      recovered_10007894((void *)*param_1);
      uVar1 = param_1[1];
      param_1[2] = param_2;
      *param_1 = (int)pvVar2;
    }
    if (uVar1 < param_2) {
      do {
        puVar3 = (undefined4 *)(*param_1 + uVar1 * 0x10);
        *puVar3 = 0;
        puVar3[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar3[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar3[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar1 = param_1[1] + 1;
        param_1[1] = uVar1;
      } while (uVar1 < param_2);
    }
  }
  return;
}


static const unsigned char pf_literal_1000bbe4_DAT_1000bd8c[] __attribute__((aligned(16)))={0xfc,0x38,0x00,0x00};
#undef DAT_1000bd8c
#define DAT_1000bd8c (*(int *)((uintptr_t)pf_literal_1000bbe4_DAT_1000bd8c))
static const unsigned char pf_literal_1000bbe4_DAT_1000bd90[] __attribute__((aligned(16)))={0xd4,0x00,0x00,0x00};
#undef DAT_1000bd90
#define DAT_1000bd90 (*(int *)((uintptr_t)pf_literal_1000bbe4_DAT_1000bd90))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_a4 (*(void * *)(pf_stack_frame + 28))
#define local_a0 (*(void * *)(pf_stack_frame + 32))
#define local_9c (*(void * *)(pf_stack_frame + 36))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_98 (*(int * *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbe4
 */

void recovered_1000bbe4(int param_1,uint param_2,void **param_3,int **param_4)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_98 = (int *)0x0;
  local_9c = (void *)0x0;
  local_a0 = (void *)0x0;
  local_a4 = (void *)0x0;
  local_7c = DAT_10014008;
  local_78 = DAT_1000bd8c + 0x1000bc48;
  local_70 = DAT_1000bd90 + 0x1000bc58;
  recovered_10007f38(&uStack_94);
  if (&local_a4 != param_3) {
    recovered_10007894((void *)0x0);
    local_a4 = *param_3;
    local_a0 = param_3[1];
    local_9c = param_3[2];
    param_3[1] = (void *)0x0;
    param_3[2] = (void *)0x0;
    *param_3 = (void *)0x0;
  }
  if (&local_98 != param_4) {
    if (local_98 != (int *)0x0) {
      (**(code **)(*local_98 + 4))(local_98);
    }
    local_98 = *param_4;
    *param_4 = (int *)0x0;
  }
  local_90 = 1;
  recovered_1000b960(param_1,param_2,(int *)&local_a4);
  if (local_98 != (int *)0x0) {
    (**(code **)(*local_98 + 4))(local_98);
  }
  local_a0 = (void *)0x0;
  recovered_10007894(local_a4);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000bd8c
#undef DAT_1000bd90
#undef DAT_10014008
#undef auStack_b0
#undef uStack_94
#undef local_a4
#undef local_a0
#undef local_9c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd94
 */

void recovered_1000bd94(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *owner;
  undefined4 *puVar1;

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    return;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0x10);
  puVar1[1] = 0;
  recovered_10007894((void *)*puVar1);
  owner = (int *)puVar1[3];
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  if (owner != (int *)0x0) {
    (**(code **)(*owner + 4))(owner);
  }
  puVar1[3] = 0;
  recovered_10007894((void *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdf0
 */

int recovered_1000bdf0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdf8
 */

int recovered_1000bdf8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be00
 */

void recovered_1000be00(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;

  uVar8 = param_1[1];
  if (uVar8 >= param_2 && uVar8 != param_2) {
    iVar7 = uVar8 * 0x18 + -0x14;
    do {
      recovered_10007894(*(void **)(*param_1 + iVar7));
      uVar8 = uVar8 - 1;
      iVar7 = iVar7 + -0x18;
    } while (param_2 < uVar8);
    param_1[1] = param_2;
    return;
  }
  if (uVar8 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar2 = recovered_1000783c(param_2 * 0x18);
      if (param_1[1] != 0) {
        iVar7 = 0x10;
        uVar8 = 0;
        do {
          puVar3 = (undefined4 *)(*param_1 + iVar7);
          uVar9 = puVar3[1];
          uVar6 = puVar3[-3];
          puVar5 = (undefined4 *)((int)pvVar2 + iVar7);
          *puVar5 = *puVar3;
          uVar4 = puVar3[-2];
          puVar5[-3] = uVar6;
          uVar6 = puVar3[-1];
          puVar5[-2] = uVar4;
          uVar1 = *(undefined1 *)(puVar3 + -4);
          puVar5[-1] = uVar6;
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          puVar5[1] = uVar9;
          *(undefined1 *)(puVar5 + -4) = uVar1;
          recovered_10007894((void *)0x0);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 0x18;
        } while (uVar8 < (uint)param_1[1]);
      }
      recovered_10007894((void *)*param_1);
      uVar8 = param_1[1];
      param_1[2] = param_2;
      *param_1 = (int)pvVar2;
    }
    if (uVar8 < param_2) {
      do {
        puVar3 = (undefined4 *)(*param_1 + uVar8 * 0x18);
        puVar3[5] = 0;
        *puVar3 = 0;
        puVar3[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar3[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar3[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar3[4] = 0;
        uVar8 = param_1[1] + 1;
        param_1[1] = uVar8;
      } while (uVar8 < param_2);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf44
 */

int recovered_1000bf44(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar1 = 0;
  if (param_2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x18 + -0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf70
 */

void recovered_1000bf70(int param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000f0a4((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf90
 */

void recovered_1000bf90(int param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000f200((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


static const unsigned char pf_literal_1000bfb0_DAT_1000c10c[] __attribute__((aligned(16)))={0x30,0x35,0x00,0x00};
#undef DAT_1000c10c
#define DAT_1000c10c (*(int *)((uintptr_t)pf_literal_1000bfb0_DAT_1000c10c))
static const unsigned char pf_literal_1000bfb0_DAT_1000c110[] __attribute__((aligned(16)))={0x9c,0x00,0x00,0x00};
#undef DAT_1000c110
#define DAT_1000c110 (*(int *)((uintptr_t)pf_literal_1000bfb0_DAT_1000c110))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define uStack_a4 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_b0 (*(int *)(pf_stack_frame + 16))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_a8 (*(void * *)(pf_stack_frame + 24))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfb0
 */

undefined4 recovered_1000bfb0(int param_1,void **param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined4 uVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  uStack_a4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uStack_a0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_a8 = (void *)0x0;
  local_98 = 0;
  local_ac[0] = 1;
  local_7c = DAT_10014008;
  local_78 = DAT_1000c10c + 0x1000c01c;
  local_70 = DAT_1000c110 + 0x1000c02c;
  recovered_10007f38(&uStack_94);
  local_b0 = param_1;
  if (&local_a8 != param_2) {
    local_90 = 1;
    puVar1 = &DAT_1000f377;
    if (*param_2 != (undefined1 *)0x0) {
      puVar1 = *param_2;
    }
    recovered_1000c690((int *)&local_a8,(int)puVar1,(uint)param_2[1]);
  }
  local_98 = 0;
  local_9c = 0;
  local_90 = 2;
  recovered_1000f200((int *)(local_b0 + 4),local_ac);
  uVar2 = *(undefined4 *)(local_b0 + 8);
  *(undefined4 *)(local_b0 + 0x30) = uVar2;
  recovered_10007894(local_a8);
  recovered_10007f5c(&uStack_94);
  return uVar2;
}

#undef DAT_1000c10c
#undef DAT_1000c110
#undef DAT_1000f377
#undef DAT_10014008
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_a4
#undef uStack_a0
#undef local_b0
#undef local_ac
#undef uStack_94
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90

static const unsigned char pf_literal_1000c114_DAT_1000c260[] __attribute__((aligned(16)))={0xd4,0x33,0x00,0x00};
#undef DAT_1000c260
#define DAT_1000c260 (*(int *)((uintptr_t)pf_literal_1000c114_DAT_1000c260))
static const unsigned char pf_literal_1000c114_DAT_1000c264[] __attribute__((aligned(16)))={0x90,0x00,0x00,0x00};
#undef DAT_1000c264
#define DAT_1000c264 (*(int *)((uintptr_t)pf_literal_1000c114_DAT_1000c264))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define pvStack_a4 (*(void * *)(pf_stack_frame + 28))
#define pvStack_a0 (*(void * *)(pf_stack_frame + 32))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_b0 (*(int *)(pf_stack_frame + 16))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define local_a8 (*(void * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c114
 */

undefined4 recovered_1000c114(int param_1,void **param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  pvStack_a4 = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  pvStack_a0 = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_a8 = (void *)0x0;
  local_98 = 0;
  local_ac[0] = 1;
  local_7c = DAT_10014008;
  local_78 = DAT_1000c260 + 0x1000c180;
  local_70 = DAT_1000c264 + 0x1000c190;
  recovered_10007f38(&uStack_94);
  if (&local_a8 != param_2) {
    recovered_10007894((void *)0x0);
    local_a8 = *param_2;
    pvStack_a4 = param_2[1];
    pvStack_a0 = param_2[2];
    param_2[1] = (void *)0x0;
    param_2[2] = (void *)0x0;
    *param_2 = (void *)0x0;
  }
  local_98 = 0;
  local_9c = 0;
  local_90 = 1;
  local_b0 = param_1;
  recovered_1000f200((int *)(param_1 + 4),local_ac);
  uVar1 = *(undefined4 *)(local_b0 + 8);
  *(undefined4 *)(local_b0 + 0x30) = uVar1;
  recovered_10007894(local_a8);
  recovered_10007f5c(&uStack_94);
  return uVar1;
}

#undef DAT_1000c260
#undef DAT_1000c264
#undef DAT_10014008
#undef local_9c
#undef local_98
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef pvStack_a4
#undef pvStack_a0
#undef uStack_94
#undef local_b0
#undef local_ac
#undef local_a8

static const unsigned char pf_literal_1000c268_DAT_1000c378[] __attribute__((aligned(16)))={0x90,0x32,0x00,0x00};
#undef DAT_1000c378
#define DAT_1000c378 (*(int *)((uintptr_t)pf_literal_1000c268_DAT_1000c378))
static const unsigned char pf_literal_1000c268_DAT_1000c37c[] __attribute__((aligned(16)))={0x5c,0x00,0x00,0x00};
#undef DAT_1000c37c
#define DAT_1000c37c (*(int *)((uintptr_t)pf_literal_1000c268_DAT_1000c37c))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define local_b0 (*(int *)(pf_stack_frame + 16))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define local_a8 (*(void * *)(pf_stack_frame + 24))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c268
 */

undefined4 recovered_1000c268(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_a4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_ac[0] = 2;
  local_7c = DAT_10014008;
  local_78 = DAT_1000c378 + 0x1000c2cc;
  local_70 = DAT_1000c37c + 0x1000c2dc;
  local_90 = 1;
  local_9c = param_2;
  local_98 = param_3;
  recovered_10007f38(&uStack_94);
  local_b0 = param_1;
  recovered_1000f200((int *)(param_1 + 4),local_ac);
  uVar1 = *(undefined4 *)(local_b0 + 8);
  *(undefined4 *)(local_b0 + 0x30) = uVar1;
  recovered_10007894(local_a8);
  recovered_10007f5c(&uStack_94);
  return uVar1;
}

#undef DAT_1000c378
#undef DAT_1000c37c
#undef DAT_10014008
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_b0
#undef local_ac
#undef local_a8
#undef uStack_94
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c380
 */

void recovered_1000c380(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_1000be00((int *)(param_1 + 4),param_2);
  }
  recovered_1000f0a4((int *)(param_1 + 4),
                     (undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x18 + -0x18));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c3d8
 */

void recovered_1000c3d8(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = *(uint *)(param_1 + 8);
  piVar3 = (int *)(param_1 + 4);
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  if (uVar1 < param_2) {
    recovered_1000be00(piVar3,param_2);
    uVar1 = *(uint *)(param_1 + 8);
  }
  if (uVar1 < param_2) {
    recovered_1000be00(piVar3,param_2);
  }
  iVar2 = *piVar3 + param_2 * 0x18;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined1 *)(iVar2 + -0x18) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c458
 */

void recovered_1000c458(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_1000be00((int *)(param_1 + 4),param_2);
    return;
  }
  return;
}


static const unsigned char pf_literal_1000c478_DAT_1000c608[] __attribute__((aligned(16)))={0xa4,0x30,0x00,0x00};
#undef DAT_1000c608
#define DAT_1000c608 (*(int *)((uintptr_t)pf_literal_1000c478_DAT_1000c608))
static const unsigned char pf_literal_1000c478_DAT_1000c60c[] __attribute__((aligned(16)))={0xf4,0x00,0x00,0x00};
#undef DAT_1000c60c
#define DAT_1000c60c (*(int *)((uintptr_t)pf_literal_1000c478_DAT_1000c60c))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define uStack_a4 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_9c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_b4 (*(uint *)(pf_stack_frame + 28))
#define local_b0 (*(int * *)(pf_stack_frame + 32))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 36))
#define local_a8 (*(void * *)(pf_stack_frame + 40))
#define local_98 (*(undefined4 *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 16))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c478
 */

int recovered_1000c478(uint param_1)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  uVar2 = *(uint *)(param_1 + 0x30);
  local_7c = DAT_10014008;
  local_78 = DAT_1000c608 + 0x1000c4c0;
  local_70 = DAT_1000c60c + 0x1000c4d0;
  recovered_10007f38(&uStack_94);
  if (uVar2 == 0) {
    uStack_a4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uStack_a0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    uStack_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_ac[0] = 0;
    local_a8 = (void *)0x0;
    local_98 = 0;
    local_90 = 1;
    local_b0 = (int *)(param_1 + 4);
    local_b4 = param_1;
    recovered_1000f200(local_b0,local_ac);
    uVar1 = *(uint *)(local_b4 + 8);
    *(uint *)(local_b4 + 0x30) = uVar1;
    uVar2 = 1;
    if (1 < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar1 == 0) {
      local_90 = 2;
      local_b4 = uVar2;
      recovered_1000be00(local_b0,uVar2);
      uVar2 = local_b4;
    }
    iVar3 = *local_b0;
    recovered_10007894(local_a8);
    iVar3 = iVar3 + uVar2 * 0x18;
  }
  else {
    if (*(uint *)(param_1 + 8) < uVar2) {
      local_90 = 0xffffffff;
      recovered_1000be00((int *)(param_1 + 4),uVar2);
    }
    iVar3 = *(int *)(param_1 + 4) + uVar2 * 0x18;
  }
  recovered_10007f5c(&uStack_94);
  return iVar3 + -0x18;
}

#undef DAT_1000c608
#undef DAT_1000c60c
#undef DAT_10014008
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_94
#undef auStack_68
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_c0
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c610
 */

int recovered_1000c610(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0x30);
  iVar1 = 0;
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + uVar2 * 0x18 + -0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c640
 */

int recovered_1000c640(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c648
 */

int recovered_1000c648(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c650
 */

undefined4 recovered_1000c650(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x30);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c658
 */

undefined4 recovered_1000c658(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c660
 */

undefined4 recovered_1000c660(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c668
 */

undefined1 recovered_1000c668(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x24);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c670
 */

void recovered_1000c670(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c67c
 */

undefined4 recovered_1000c67c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c684
 */

void recovered_1000c684(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x28) = param_2 & 0xffffff;
  return;
}


#define local_2c (*(void * *)(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c690
 */

void recovered_1000c690(int *param_1,int param_2,uint param_3)

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
        recovered_1000c690((int *)&local_2c,(int)(puVar12 + uVar13),uVar6);
        pvVar4 = (void *)*param_1;
        iVar7 = param_1[1];
        iVar8 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pvVar4;
        local_28 = iVar7;
        local_24 = iVar8;
        recovered_10007894(pvVar4);
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
      puVar12 = recovered_1000783c(1);
      *param_1 = (int)puVar12;
      *puVar12 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000c77c;
  puVar2 = recovered_1000783c(uVar1 + 1);
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
      if (uVar13 == uVar6) goto LAB_1000c760;
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
LAB_1000c760:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  recovered_10007894(puVar3);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000c77c:
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
 * Address: 0x1000c854
 */

int recovered_1000c854(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar5 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar5 = 4;
    }
    if (uVar1 < uVar5) {
      pvVar2 = recovered_1000783c(uVar5 << 5);
      if (param_1[1] != 0) {
        uVar1 = 0;
        do {
          puVar3 = (undefined1 *)(*param_1 + uVar1 * 0x20);
          uVar6 = *(undefined4 *)(puVar3 + 4);
          uVar7 = *(undefined4 *)(puVar3 + 8);
          uVar9 = *(undefined4 *)(puVar3 + 0xc);
          puVar8 = (undefined1 *)((int)pvVar2 + uVar1 * 0x20);
          *puVar8 = *puVar3;
          *(undefined4 *)(puVar8 + 4) = uVar6;
          *(undefined4 *)(puVar8 + 8) = uVar7;
          *(undefined4 *)(puVar8 + 0xc) = uVar9;
          *(undefined4 *)(puVar3 + 4) = 0;
          *(undefined4 *)(puVar3 + 8) = 0;
          *(undefined4 *)(puVar3 + 0xc) = 0;
          uVar10 = *(undefined8 *)(puVar3 + 0x10);
          *(undefined8 *)(puVar8 + 0x15) = *(undefined8 *)(puVar3 + 0x15);
          *(undefined8 *)(puVar8 + 0x10) = uVar10;
          recovered_10007894((void *)0x0);
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
      }
      recovered_10007894((void *)*param_1);
      param_1[2] = uVar5;
      uVar1 = param_1[1];
      *param_1 = (int)pvVar2;
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  puVar3 = (undefined1 *)(*param_1 + uVar1 * 0x20);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 4) = uVar6;
  *(undefined4 *)(puVar3 + 8) = uVar9;
  *(undefined4 *)(puVar3 + 0xc) = uVar7;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar3 + 0x15) = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  iVar4 = param_1[1];
  param_1[1] = iVar4 + 1;
  return *param_1 + (iVar4 + 1) * 0x20 + -0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9a4
 */

undefined4 * recovered_1000c9a4(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r2 = 0;
  uint uVar5;
  uint extraout_r2_00 = 0;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 == 0) {
    return param_1;
  }
  puVar1 = recovered_1000783c(param_3);
  uVar3 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (uVar3 != 0) {
    bVar13 = uVar3 == 0x10;
    uVar10 = 0;
    uVar5 = extraout_r2;
    if (0xf < uVar3) {
      uVar5 = (int)puVar1 - (int)puVar2;
      bVar13 = uVar5 == 0xf;
    }
    if ((0xf < uVar3 && 0xe < uVar5) && !bVar13) {
      uVar10 = uVar3 & 0xfffffff0;
      puVar6 = puVar1;
      uVar5 = uVar10;
      puVar7 = puVar2;
      do {
        uVar14 = *puVar7;
        uVar15 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar6 = uVar14;
        puVar6[1] = uVar15;
        puVar6 = puVar6 + 2;
      } while (uVar5 != 0);
      if (uVar3 == uVar10) goto LAB_1000ca48;
    }
    iVar4 = uVar3 - uVar10;
    puVar12 = (undefined1 *)((int)puVar1 + uVar10);
    puVar9 = (undefined1 *)((int)puVar2 + uVar10);
    do {
      iVar4 = iVar4 + -1;
      *puVar12 = *puVar9;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_1000ca48:
  recovered_10007894(puVar2);
  uVar3 = param_1[1];
  puVar12 = param_2 + param_3;
  param_1[2] = param_3;
  *param_1 = puVar1;
  do {
    if (uVar3 == param_3) {
      uVar5 = param_3 << 1;
      if (param_3 == 0) {
        uVar5 = 4;
      }
      uVar3 = param_3;
      if (param_3 < uVar5) {
        puVar1 = recovered_1000783c(uVar5);
        uVar3 = param_1[1];
        puVar2 = (undefined8 *)*param_1;
        if (uVar3 != 0) {
          bVar13 = uVar3 == 0x10;
          uVar11 = 0;
          uVar10 = extraout_r2_00;
          if (0xf < uVar3) {
            uVar10 = (int)puVar1 - (int)puVar2;
            bVar13 = uVar10 == 0xf;
          }
          if ((0xf < uVar3 && 0xe < uVar10) && !bVar13) {
            uVar11 = uVar3 & 0xfffffff0;
            puVar6 = puVar1;
            uVar10 = uVar11;
            puVar7 = puVar2;
            do {
              uVar14 = *puVar7;
              uVar15 = puVar7[1];
              puVar7 = puVar7 + 2;
              uVar10 = uVar10 - 0x10;
              *puVar6 = uVar14;
              puVar6[1] = uVar15;
              puVar6 = puVar6 + 2;
            } while (uVar10 != 0);
            if (uVar3 == uVar11) goto LAB_1000ca60;
          }
          iVar4 = uVar3 - uVar11;
          puVar9 = (undefined1 *)((int)puVar1 + uVar11);
          puVar8 = (undefined1 *)((int)puVar2 + uVar11);
          do {
            iVar4 = iVar4 + -1;
            *puVar9 = *puVar8;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar4 != 0);
        }
LAB_1000ca60:
        recovered_10007894(puVar2);
        uVar3 = param_1[1];
        param_1[2] = uVar5;
        *param_1 = puVar1;
        param_3 = uVar5;
      }
    }
    puVar9 = param_2 + 1;
    *(undefined1 *)((int)puVar1 + uVar3) = *param_2;
    uVar3 = uVar3 + 1;
    param_1[1] = uVar3;
    param_2 = puVar9;
    if (puVar9 == puVar12) {
      return param_1;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb30
 */

void recovered_1000cb30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000cb34_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000cb34_DAT_10007954))
static const unsigned char pf_literal_1000cb34_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000cb34_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb34
 */

void recovered_1000cb34(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000cb38_DAT_1000cd10[] __attribute__((aligned(16)))={0xe8,0x29,0x00,0x00};
#undef DAT_1000cd10
#define DAT_1000cd10 (*(int *)((uintptr_t)pf_literal_1000cb38_DAT_1000cd10))
static const unsigned char pf_literal_1000cb38_DAT_1000cd14[] __attribute__((aligned(16)))={0x3c,0x01,0x00,0x00};
#undef DAT_1000cd14
#define DAT_1000cd14 (*(int *)((uintptr_t)pf_literal_1000cb38_DAT_1000cd14))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4cd0U)))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_a0 (*(char * (*)[40])(pf_stack_frame + 16))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb38
 */

void recovered_1000cb38(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  iVar4 = *(int *)((int)arguments + 4);
  local_7c = DAT_10014008;
  local_78 = DAT_1000cd10 + 0x1000cb84;
  local_70 = DAT_1000cd14 + 0x1000cb94;
  recovered_10007f38(&uStack_94);
  if (iVar4 != 0) {
    if (*(char *)(*(int *)arguments + 0x1c) == '\x01') {
      if ((*(int *)((int)engine + 0x30) - 1U < *(uint *)((int)engine + 8)) &&
         (pcVar1 = (char *)(*(int *)((int)engine + 4) + *(int *)((int)engine + 0x30) * 0x18 + -0x18)
         , pcVar1 != (char *)0x0)) {
        local_90 = 0xffffffff;
        recovered_10009010((int *)local_a0,pcVar1);
        pcVar1 = &DAT_1000f377;
        if (local_a0[0] != (char *)0x0) {
          pcVar1 = local_a0[0];
        }
        if ((uint *)*DAT_1001400c != (uint *)0x0) {
          iVar4 = 0;
          do {
            iVar2 = iVar4;
            iVar4 = iVar2 + 1;
          } while (pcVar1[iVar2] != '\0');
          local_90 = 1;
          recovered_10006dec(pcVar1,1,iVar2,(uint *)*DAT_1001400c);
        }
        recovered_10007894(local_a0[0]);
      }
    }
    else {
      pcVar3 = *(char **)(*(int *)arguments + 4);
      pcVar1 = &DAT_1000f377;
      if (pcVar3 != (char *)0x0) {
        pcVar1 = pcVar3;
      }
      if ((uint *)*DAT_1001400c != (uint *)0x0) {
        iVar4 = 0;
        do {
          iVar2 = iVar4;
          iVar4 = iVar2 + 1;
        } while (pcVar1[iVar2] != '\0');
        local_90 = 0xffffffff;
        recovered_10006dec(pcVar1,1,iVar2,(uint *)*DAT_1001400c);
      }
    }
  }
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000cd10
#undef DAT_1000cd14
#undef DAT_1000f377
#undef DAT_10014008
#undef DAT_1001400c
#undef local_6c
#undef uStack_94
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70

#undef DAT_10014018
#define DAT_10014018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cdcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd18
 */

void * recovered_1000cd18(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014018;
  return puVar1;
}

#undef DAT_10014018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd40
 */

void recovered_1000cd40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000cd44_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000cd44_DAT_10007954))
static const unsigned char pf_literal_1000cd44_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000cd44_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd44
 */

void recovered_1000cd44(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered integer-print builtin; Pooka's Free Software License. */
void recovered_1000cd48(void *owner,void *engine,uint32_t *arguments){
 (void)owner;
 if(!arguments[1])return;
 unsigned char *value=(unsigned char *)(uintptr_t)arguments[0];
 long long number;
 if(value[28]==1){
  uint32_t index,count,base;
  __builtin_memcpy(&index,(unsigned char *)engine+48,4);
  __builtin_memcpy(&count,(unsigned char *)engine+8,4);
  __builtin_memcpy(&base,(unsigned char *)engine+4,4);
  if(index-1>=count)return;
  void *variable=(void *)(uintptr_t)(base+(index-1)*24);
  if(!variable)return;
  number=recovered_1000921c(variable);
 }else __builtin_memcpy(&number,value+16,8);
 char buffer[32];int length=recovered_10005c78(buffer,sizeof(buffer),"%lld",number);
 recovered_10005f8c(buffer,length);
}


#undef DAT_10014044
#define DAT_10014044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cdd0
 */

void * recovered_1000cdd0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014044;
  return puVar1;
}

#undef DAT_10014044

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cdf8
 */

void recovered_1000cdf8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000cdfc_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000cdfc_DAT_10007954))
static const unsigned char pf_literal_1000cdfc_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000cdfc_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cdfc
 */

void recovered_1000cdfc(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce00
 */

void recovered_1000ce00(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;

  piVar3 = (int *)((int)engine + 4);
  uVar1 = *(uint *)(*(int *)arguments + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar1;
  if (*(uint *)((int)engine + 8) < uVar1) {
    recovered_1000be00(piVar3,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar1 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000ce80;
  }
  else if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000ce80;
  recovered_1000be00(piVar3,uVar1);
LAB_1000ce80:
  iVar2 = *piVar3 + uVar1 * 0x18;
  recovered_10009010((int *)&local_24,(char *)(iVar2 + -0x18));
  *(undefined1 *)(iVar2 + -0x18) = 1;
  if ((void **)(iVar2 + -0x14) != &local_24) {
    recovered_10007894(*(void **)(iVar2 + -0x14));
    *(void **)(iVar2 + -0x14) = local_24;
    *(undefined4 *)(iVar2 + -0x10) = local_20;
    *(undefined4 *)(iVar2 + -0xc) = local_1c;
    local_20 = 0;
    local_1c = 0;
    local_24 = (void *)0x0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  recovered_10007894(local_24);
  return;
}

#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10014068
#define DAT_10014068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cefc
 */

void * recovered_1000cefc(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014068;
  return puVar1;
}

#undef DAT_10014068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf24
 */

void recovered_1000cf24(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000cf28_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000cf28_DAT_10007954))
static const unsigned char pf_literal_1000cf28_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000cf28_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf28
 */

void recovered_1000cf28(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf2c
 */

void recovered_1000cf2c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;

  piVar3 = (int *)((int)engine + 4);
  uVar1 = *(uint *)(*(int *)arguments + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar1;
  if (*(uint *)((int)engine + 8) < uVar1) {
    recovered_1000be00(piVar3,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar1 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000cfa8;
  }
  else if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000cfa8;
  recovered_1000be00(piVar3,uVar1);
LAB_1000cfa8:
  iVar2 = *piVar3 + uVar1 * 0x18;
  lVar4 = recovered_1000921c((void *)(iVar2 + -0x18));
  *(int *)(iVar2 + -8) = (int)lVar4;
  *(undefined1 *)(iVar2 + -0x18) = 2;
  *(int *)(iVar2 + -4) = (int)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(iVar2 + -0x10) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  return;
}


#undef DAT_1001408c
#define DAT_1001408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cfe8
 */

void * recovered_1000cfe8(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_1001408c;
  return puVar1;
}

#undef DAT_1001408c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d010
 */

void recovered_1000d010(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000d014_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000d014_DAT_10007954))
static const unsigned char pf_literal_1000d014_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000d014_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d014
 */

void recovered_1000d014(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000d018_DAT_1000d1dc[] __attribute__((aligned(16)))={0x10,0x25,0x00,0x00};
#undef DAT_1000d1dc
#define DAT_1000d1dc (*(int *)((uintptr_t)pf_literal_1000d018_DAT_1000d1dc))
static const unsigned char pf_literal_1000d018_DAT_1000d1e0[] __attribute__((aligned(16)))={0x24,0x01,0x00,0x00};
#undef DAT_1000d1e0
#define DAT_1000d1e0 (*(int *)((uintptr_t)pf_literal_1000d018_DAT_1000d1e0))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_b0 (*(void * *)(pf_stack_frame + 16))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define local_a8 (*(void * *)(pf_stack_frame + 24))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define uStack_a4 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d018
 */

void recovered_1000d018(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  iVar4 = *(int *)((int)engine + 0x30);
  local_7c = DAT_10014008;
  local_78 = DAT_1000d1dc + 0x1000d064;
  local_70 = DAT_1000d1e0 + 0x1000d074;
  recovered_10007f38(&uStack_94);
  if (iVar4 == 0) {
    uStack_a4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uStack_a0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    puVar1 = *(undefined1 **)arguments;
    local_a8 = (void *)0x0;
    local_98 = 0;
    local_ac[0] = 1;
    local_b0 = engine;
    if (local_ac != puVar1) {
      local_90 = 1;
      puVar2 = &DAT_1000f377;
      if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar1 + 4);
      }
      recovered_1000c690((int *)&local_a8,(int)puVar2,*(uint *)(puVar1 + 8));
    }
    local_98 = 0;
    local_9c = 0;
    local_90 = 2;
    recovered_1000f200((int *)((int)local_b0 + 4),local_ac);
    *(undefined4 *)((int)local_b0 + 0x30) = *(undefined4 *)((int)local_b0 + 8);
    recovered_10007894(local_a8);
  }
  else {
    local_90 = 0xffffffff;
    puVar1 = (undefined1 *)recovered_1000c478((uint)engine);
    puVar2 = *(undefined1 **)arguments;
    *puVar1 = 1;
    if (puVar1 != puVar2) {
      puVar3 = &DAT_1000f377;
      if (*(undefined1 **)(puVar2 + 4) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(puVar2 + 4);
      }
      local_90 = 0xffffffff;
      recovered_1000c690((int *)(puVar1 + 4),(int)puVar3,*(uint *)(puVar2 + 8));
    }
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000d1dc
#undef DAT_1000d1e0
#undef DAT_1000f377
#undef DAT_10014008
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_a4
#undef uStack_a0
#undef uStack_94

#undef DAT_100140b0
#define DAT_100140b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1e4
 */

void * recovered_1000d1e4(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100140b0;
  return puVar1;
}

#undef DAT_100140b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d20c
 */

void recovered_1000d20c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000d210_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000d210_DAT_10007954))
static const unsigned char pf_literal_1000d210_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000d210_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d210
 */

void recovered_1000d210(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000d214_DAT_1000d380[] __attribute__((aligned(16)))={0x1c,0x23,0x00,0x00};
#undef DAT_1000d380
#define DAT_1000d380 (*(int *)((uintptr_t)pf_literal_1000d214_DAT_1000d380))
static const unsigned char pf_literal_1000d214_DAT_1000d384[] __attribute__((aligned(16)))={0xd0,0x00,0x00,0x00};
#undef DAT_1000d384
#define DAT_1000d384 (*(int *)((uintptr_t)pf_literal_1000d214_DAT_1000d384))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_b0 (*(void * *)(pf_stack_frame + 16))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define local_a8 (*(void * *)(pf_stack_frame + 24))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d214
 */

void recovered_1000d214(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  iVar3 = *(int *)((int)engine + 0x30);
  local_7c = DAT_10014008;
  local_78 = DAT_1000d380 + 0x1000d260;
  local_70 = DAT_1000d384 + 0x1000d270;
  recovered_10007f38(&uStack_94);
  if (iVar3 == 0) {
    local_9c = *(undefined4 *)(*(int *)arguments + 0x10);
    local_98 = *(undefined4 *)(*(int *)arguments + 0x14);
    local_90 = 1;
    local_a4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_ac[0] = 2;
    local_b0 = engine;
    recovered_1000f200((int *)((int)engine + 4),local_ac);
    *(undefined4 *)((int)local_b0 + 0x30) = *(undefined4 *)((int)local_b0 + 8);
    recovered_10007894(local_a8);
  }
  else {
    local_90 = 0xffffffff;
    puVar1 = (undefined1 *)recovered_1000c478((uint)engine);
    iVar3 = *(int *)arguments;
    *puVar1 = 2;
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    uVar4 = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0x14) = uVar4;
    *(undefined4 *)(puVar1 + 0x10) = uVar2;
    if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar1 + 4) = 0;
    }
  }
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000d380
#undef DAT_1000d384
#undef DAT_10014008
#undef auStack_68
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
#undef uStack_94
#undef local_70
#undef local_6c

#undef DAT_100140d4
#define DAT_100140d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d388
 */

void * recovered_1000d388(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100140d4;
  return puVar1;
}

#undef DAT_100140d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3b0
 */

void recovered_1000d3b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000d3b4_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000d3b4_DAT_10007954))
static const unsigned char pf_literal_1000d3b4_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000d3b4_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3b4
 */

void recovered_1000d3b4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000d3b8_DAT_1000d5c8[] __attribute__((aligned(16)))={0x84,0x21,0x00,0x00};
#undef DAT_1000d5c8
#define DAT_1000d5c8 (*(int *)((uintptr_t)pf_literal_1000d3b8_DAT_1000d5c8))
static const unsigned char pf_literal_1000d3b8_DAT_1000d5cc[] __attribute__((aligned(16)))={0x68,0x01,0x00,0x00};
#undef DAT_1000d5cc
#define DAT_1000d5cc (*(int *)((uintptr_t)pf_literal_1000d3b8_DAT_1000d5cc))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_b0 (*(undefined1 * *)(pf_stack_frame + 16))
#define local_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 24))
#define local_a4 (*(uint *)(pf_stack_frame + 28))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3b8
 */

void recovered_1000d3b8(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  uVar5 = *(uint *)((int)engine + 8);
  uVar3 = *(uint *)(*(int *)arguments + 0x18);
  local_78 = DAT_1000d5c8 + 0x1000d400;
  local_7c = DAT_10014008;
  local_70 = DAT_1000d5cc + 0x1000d418;
  recovered_10007f38(&uStack_94);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  if (uVar5 < uVar3) {
    local_90 = 0xffffffff;
    recovered_1000be00((int *)((int)engine + 4),uVar3);
  }
  iVar4 = *(int *)((int)engine + 4) + uVar3 * 0x18;
  local_a8 = (undefined1 *)0x0;
  puVar1 = *(undefined1 **)(iVar4 + -0x14);
  local_a4 = 0;
  local_a0 = 0;
  local_ac[0] = *(undefined1 *)(iVar4 + -0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_1000f377;
  }
  local_90 = 0xffffffff;
  recovered_1000c690((int *)&local_a8,(int)puVar1,*(uint *)(iVar4 + -0x10));
  local_9c = *(undefined4 *)(iVar4 + -8);
  local_98 = *(undefined4 *)(iVar4 + -4);
  if (*(int *)((int)engine + 0x30) == 0) {
    local_90 = 1;
    local_b0 = engine;
    recovered_1000f0a4((int *)((int)engine + 4),local_ac);
    *(undefined4 *)(local_b0 + 0x30) = *(undefined4 *)(local_b0 + 8);
  }
  else {
    local_90 = 2;
    puVar1 = (undefined1 *)recovered_1000c478((uint)engine);
    *puVar1 = local_ac[0];
    if (puVar1 != local_ac) {
      local_90 = 3;
      puVar2 = &DAT_1000f377;
      if (local_a8 != (undefined1 *)0x0) {
        puVar2 = local_a8;
      }
      local_b0 = puVar1;
      recovered_1000c690((int *)(puVar1 + 4),(int)puVar2,local_a4);
      puVar1 = local_b0;
    }
    *(undefined4 *)(puVar1 + 0x14) = local_98;
    *(undefined4 *)(puVar1 + 0x10) = local_9c;
  }
  recovered_10007894(local_a8);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000d5c8
#undef DAT_1000d5cc
#undef DAT_1000f377
#undef DAT_10014008
#undef auStack_68
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
#undef uStack_94

#undef DAT_100140f8
#define DAT_100140f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5d0
 */

void * recovered_1000d5d0(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100140f8;
  return puVar1;
}

#undef DAT_100140f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5f8
 */

void recovered_1000d5f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000d5fc_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000d5fc_DAT_10007954))
static const unsigned char pf_literal_1000d5fc_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000d5fc_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5fc
 */

void recovered_1000d5fc(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d600
 */

void recovered_1000d600(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar2;
  undefined1 uVar1;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;

  iVar9 = *(int *)arguments;
  puVar4 = *(uint **)engine;
  uVar6 = *(uint *)(iVar9 + 0x30);
  iVar7 = *(int *)(iVar9 + 0x34);
  uVar8 = *(uint *)(iVar9 + 0x10);
  iVar11 = *(int *)(iVar9 + 0x14);
  if ((int)(-1 - (iVar7 + (uint)(0x80000000 < uVar6))) < 0 ==
      (SBORROW4(-1,iVar7) != SBORROW4(-1 - iVar7,(uint)(0x80000000 < uVar6)))) {
    iVar7 = -1;
    uVar6 = 0x80000000;
  }
  if ((int)(uint)(uVar6 < 0x7fffffff) <= iVar7) {
    uVar6 = 0x7fffffff;
  }
  uVar3 = 0x80000000;
  iVar7 = -1;
  if ((int)(-1 - (iVar11 + (uint)(0x80000000 < uVar8))) < 0 !=
      (SBORROW4(-1,iVar11) != SBORROW4(-1 - iVar11,(uint)(0x80000000 < uVar8)))) {
    uVar3 = uVar8;
    iVar7 = iVar11;
  }
  if ((int)(uint)(uVar3 < 0x7fffffff) <= iVar7) {
    uVar3 = 0x7fffffff;
  }
  if (puVar4 != (uint *)0x0) {
    uVar8 = puVar4[2];
  }
  if ((((puVar4 != (uint *)0x0 && uVar8 != 0) && (uVar5 = *puVar4, 0 < (int)uVar5)) &&
      (uVar6 <= puVar4[1] && uVar3 <= uVar5)) && (0 < (int)uVar6)) {
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      uVar10 = puVar4[1];
    }
    if (0 < (int)uVar10) {
      uVar10 = *(uint *)(iVar9 + 0x50);
      iVar7 = uVar5 * (uVar6 - 1) + uVar3;
      iVar9 = iVar7 * 4 + -3;
      iVar7 = iVar7 * 4 + -4;
      uVar1 = (undefined1)(uVar10 >> 8);
      uVar2 = (undefined1)(uVar10 >> 0x10);
      if ((uVar10 & 0xff000000) == 0) {
        *(undefined1 *)(uVar8 + iVar7) = uVar2;
        *(undefined1 *)(puVar4[2] + iVar9) = uVar1;
        *(char *)(puVar4[2] + iVar7 + 2) = (char)uVar10;
        uVar10 = 0xff;
      }
      else {
        *(char *)(uVar8 + iVar7) = (char)(uVar10 >> 0x18);
        *(undefined1 *)(puVar4[2] + iVar9) = uVar2;
        *(undefined1 *)(puVar4[2] + iVar7 + 2) = uVar1;
      }
      *(char *)(puVar4[2] + iVar7 + 3) = (char)uVar10;
      return;
    }
  }
  return;
}


#undef DAT_1001411c
#define DAT_1001411c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d74c
 */

void * recovered_1000d74c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_1001411c;
  return puVar1;
}

#undef DAT_1001411c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d774
 */

void recovered_1000d774(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000d778_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000d778_DAT_10007954))
static const unsigned char pf_literal_1000d778_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000d778_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d778
 */

void recovered_1000d778(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000d77c_DAT_1000dcc4[] __attribute__((aligned(16)))={0xc8,0x1d,0x00,0x00};
#undef DAT_1000dcc4
#define DAT_1000dcc4 (*(int *)((uintptr_t)pf_literal_1000d77c_DAT_1000dcc4))
static const unsigned char pf_literal_1000d77c_DAT_1000dcc8[] __attribute__((aligned(16)))={0x90,0x04,0x00,0x00};
#undef DAT_1000dcc8
#define DAT_1000dcc8 (*(int *)((uintptr_t)pf_literal_1000d77c_DAT_1000dcc8))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_b8 (*(int * *)(pf_stack_frame + 24))
#define local_b4 (*(undefined4 * *)(pf_stack_frame + 28))
#define local_b0 (*(byte * *)(pf_stack_frame + 32))
#define local_ac (*(char * *)(pf_stack_frame + 36))
#define local_a8 (*(byte * *)(pf_stack_frame + 40))
#define local_a4 (*(uint *)(pf_stack_frame + 44))
#define local_a0 (*(byte * *)(pf_stack_frame + 48))
#define local_9c (*(byte * *)(pf_stack_frame + 52))
#define local_98 (*(char * *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 16))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d77c
 */

void recovered_1000d77c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint extraout_r1 = 0;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  pbVar12 = *(byte **)arguments;
  local_7c = DAT_10014008;
  local_78 = DAT_1000dcc4 + 0x1000d7c8;
  pbVar16 = *(byte **)(pbVar12 + 0x48);
  local_70 = DAT_1000dcc8 + 0x1000d7d8;
  recovered_10007f38(&uStack_94);
  if (pbVar16 == (byte *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    local_90 = 1;
    local_b8 = arguments;
    local_b4 = engine;
    local_a0 = pbVar16;
    local_9c = pbVar12;
    pcVar3 = recovered_1000783c((ulong)(pbVar16 + 1));
    *pcVar3 = '\0';
    recovered_10007894((void *)0x0);
    pbVar12 = &DAT_1000f377;
    if (*(byte **)(local_9c + 0x44) != (byte *)0x0) {
      pbVar12 = *(byte **)(local_9c + 0x44);
    }
    if (*(int *)(local_9c + 0x48) != 0) {
      pbVar5 = pbVar12 + *(int *)(local_9c + 0x48);
      pbVar16 = (byte *)0x0;
      pbVar6 = local_a0;
      local_a8 = pbVar5;
      do {
        bVar13 = *pbVar12;
        uVar14 = (uint)bVar13;
        if ((0x1a < uVar14 - 9) || ((1 << (uVar14 - 9 & 0xff) & 0x4800013U) == 0)) {
          if (pbVar16 == pbVar6) {
            pbVar17 = (byte *)((int)pbVar16 << 1);
            if (pbVar16 == (byte *)0x0) {
              pbVar17 = &DataAbort;
            }
            if (pbVar17 <= pbVar16) goto LAB_1000d86c;
            local_90 = 2;
            local_b0 = pbVar17;
            local_ac = pcVar3;
            local_a4 = uVar14;
            local_a0 = pbVar12;
            local_9c = pbVar16;
            local_98 = pcVar3;
            pcVar3 = recovered_1000783c((uint)pbVar17 | 1);
            pbVar16 = local_9c;
            *pcVar3 = '\0';
            if (local_9c != (byte *)0x0) {
              bVar21 = local_9c == &DataAbort;
              pbVar12 = (byte *)0x0;
              uVar14 = extraout_r1;
              if ((byte *)0xf < local_9c) {
                uVar14 = (int)pcVar3 - (int)local_ac;
                bVar21 = uVar14 == 0xf;
              }
              if (((byte *)0xf < local_9c && 0xe < uVar14) && !bVar21) {
                pbVar12 = (byte *)((uint)local_9c & 0xfffffff0);
                pbVar6 = pbVar12;
                pcVar10 = pcVar3;
                pcVar9 = local_ac;
                do {
                  uVar22 = *(undefined8 *)pcVar9;
                  uVar23 = *(undefined8 *)(pcVar9 + 8);
                  pcVar9 = pcVar9 + 0x10;
                  pbVar6 = pbVar6 + -0x10;
                  *(undefined8 *)pcVar10 = uVar22;
                  *(undefined8 *)(pcVar10 + 8) = uVar23;
                  pcVar10 = pcVar10 + 0x10;
                } while (pbVar6 != (byte *)0x0);
                if (local_9c == pbVar12) goto LAB_1000d974;
              }
              iVar4 = (int)local_9c - (int)pbVar12;
              pcVar10 = local_ac + (int)pbVar12;
              pcVar9 = pcVar3 + (int)pbVar12;
              do {
                iVar4 = iVar4 + -1;
                *pcVar9 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar4 != 0);
            }
LAB_1000d974:
            pcVar3[(int)local_9c] = '\0';
            recovered_10007894(local_ac);
            bVar13 = (byte)local_a4;
            pbVar6 = local_b0;
            pbVar5 = local_a8;
            pbVar12 = local_a0;
          }
          else {
LAB_1000d86c:
            if (pcVar3 == (char *)0x0) {
              local_90 = 3;
              local_98 = (char *)0x0;
              local_a4 = uVar14;
              local_a0 = pbVar12;
              local_9c = pbVar16;
              pcVar3 = recovered_1000783c(1);
              pbVar6 = (byte *)0x0;
              bVar13 = (byte)local_a4;
              *pcVar3 = '\0';
              pbVar5 = local_a8;
              pbVar12 = local_a0;
              pbVar16 = local_9c;
            }
          }
          pcVar3[(int)pbVar16] = bVar13;
          pbVar16 = pbVar16 + 1;
          pcVar3[(int)pbVar16] = '\0';
        }
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != pbVar5);
      if ((byte *)0x1 < pbVar16) {
        if ((*pcVar3 == '0') && ((byte)(pcVar3[1] | 0x20U) == 0x78)) {
          pbVar12 = pbVar16 + -2;
          if (pbVar12 != (byte *)0x0) {
            pbVar6 = (byte *)0x0;
            if ((byte *)0xf < pbVar12) {
              pbVar6 = (byte *)((uint)pbVar12 & 0xfffffff0);
              pbVar5 = pbVar6;
              pcVar10 = pcVar3;
              do {
                pbVar5 = pbVar5 + -0x10;
                *(undefined8 *)pcVar10 = *(undefined8 *)(pcVar10 + 2);
                *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar10 + 10);
                pcVar10 = pcVar10 + 0x10;
              } while (pbVar5 != (byte *)0x0);
              if (pbVar12 == pbVar6) goto LAB_1000da74;
            }
            pbVar5 = pbVar6 + (int)pcVar3 + 2;
            pbVar16 = pbVar16 + (-2 - (int)pbVar6);
            do {
              pbVar16 = pbVar16 + -1;
              pbVar5[-2] = *pbVar5;
              pbVar5 = pbVar5 + 1;
            } while (pbVar16 != (byte *)0x0);
          }
LAB_1000da74:
          pcVar3[(int)pbVar12] = '\0';
          pbVar16 = pbVar12;
        }
        if (pbVar16 == (byte *)0x6 || pbVar16 == &SupervisorCall) {
          pbVar12 = (byte *)0x0;
          uVar14 = 0;
          do {
            uVar15 = uVar14;
            cVar1 = pcVar3[(int)pbVar12];
            bVar13 = cVar1 - 0x30;
            if (9 < (byte)(cVar1 - 0x30U)) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                bVar13 = cVar1 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000db00;
                bVar13 = cVar1 - 0x37;
              }
            }
            pbVar12 = pbVar12 + 1;
            uVar14 = (uint)bVar13 | uVar15 << 4;
          } while (pbVar16 != pbVar12);
          recovered_10007894(pcVar3);
          iVar4 = *local_b8;
          uVar19 = *(uint *)(iVar4 + 0x30);
          uVar11 = *(uint *)(iVar4 + 0x34);
          uVar20 = *(uint *)(iVar4 + 0x10);
          iVar4 = *(int *)(iVar4 + 0x14);
          if ((int)(-1 - (uVar11 + (0x80000000 < uVar19))) < 0 ==
              (SBORROW4(-1,uVar11) != SBORROW4(-1 - uVar11,(uint)(0x80000000 < uVar19)))) {
            uVar11 = 0xffffffff;
            uVar19 = 0x80000000;
          }
          if ((int)(uint)(uVar19 < 0x7fffffff) <= (int)uVar11) {
            uVar19 = 0x7fffffff;
          }
          uVar7 = 0x80000000;
          iVar8 = -1;
          if ((int)(-1 - (iVar4 + (uint)(0x80000000 < uVar20))) < 0 !=
              (SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar20)))) {
            uVar7 = uVar20;
            iVar8 = iVar4;
          }
          puVar18 = (uint *)*local_b4;
          if ((int)(uint)(uVar7 < 0x7fffffff) <= iVar8) {
            uVar7 = 0x7fffffff;
          }
          if (puVar18 != (uint *)0x0) {
            uVar11 = puVar18[2];
          }
          if ((((puVar18 != (uint *)0x0 && uVar11 != 0) && (uVar20 = *puVar18, 0 < (int)uVar20)) &&
              (uVar19 <= puVar18[1] && uVar7 <= uVar20)) && (0 < (int)uVar19)) {
            uVar2 = uVar7;
            if (0 < (int)uVar7) {
              uVar2 = puVar18[1];
            }
            if (0 < (int)uVar2) {
              iVar4 = uVar20 * (uVar19 - 1) + uVar7;
              iVar8 = iVar4 * 4 + -3;
              iVar4 = iVar4 * 4 + -4;
              uVar19 = (uVar15 & 0xfffffff) >> 0x14;
              if (uVar19 == 0) {
                *(char *)(uVar11 + iVar4) = (char)((uVar15 & 0xfffffff) >> 0xc);
                *(char *)(puVar18[2] + iVar8) = (char)((uVar15 & 0xfffffff) >> 4);
                *(char *)(puVar18[2] + iVar4 + 2) = (char)uVar14;
                uVar14 = 0xff;
              }
              else {
                *(char *)(uVar11 + iVar4) = (char)uVar19;
                *(char *)(puVar18[2] + iVar8) = (char)((uVar15 & 0xfffffff) >> 0xc);
                *(char *)(puVar18[2] + iVar4 + 2) = (char)((uVar15 & 0xfffffff) >> 4);
              }
              *(char *)(puVar18[2] + iVar4 + 3) = (char)uVar14;
            }
          }
          goto LAB_1000db08;
        }
      }
    }
  }
LAB_1000db00:
  recovered_10007894(pcVar3);
LAB_1000db08:
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000dcc4
#undef DAT_1000dcc8
#undef DAT_1000f377
#undef DAT_10014008
#undef EXT_00000008
#undef EXT_00000010
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
#undef auStack_c0
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10014140
#define DAT_10014140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dccc
 */

void * recovered_1000dccc(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014140;
  return puVar1;
}

#undef DAT_10014140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcf4
 */

void recovered_1000dcf4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000dcf8_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000dcf8_DAT_10007954))
static const unsigned char pf_literal_1000dcf8_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000dcf8_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcf8
 */

void recovered_1000dcf8(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcfc
 */

void recovered_1000dcfc(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *(int *)arguments;
  uVar1 = *(uint *)(iVar3 + 0x30);
  iVar2 = *(int *)(iVar3 + 0x34);
  uVar4 = *(uint *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  if ((int)(-1 - (iVar2 + (uint)(0x80000000 < uVar1))) < 0 ==
      (SBORROW4(-1,iVar2) != SBORROW4(-1 - iVar2,(uint)(0x80000000 < uVar1)))) {
    iVar2 = -1;
    uVar1 = 0x80000000;
  }
  if ((int)(uint)(uVar1 < 0x7fffffff) <= iVar2) {
    uVar1 = 0x7fffffff;
  }
  *(uint *)((int)engine + 0x20) = uVar1;
  uVar1 = 0x80000000;
  iVar2 = -1;
  if ((int)(-1 - (iVar3 + (uint)(0x80000000 < uVar4))) < 0 !=
      (SBORROW4(-1,iVar3) != SBORROW4(-1 - iVar3,(uint)(0x80000000 < uVar4)))) {
    uVar1 = uVar4;
    iVar2 = iVar3;
  }
  if ((int)(uint)(uVar1 < 0x7fffffff) <= iVar2) {
    uVar1 = 0x7fffffff;
  }
  *(uint *)((int)engine + 0x1c) = uVar1;
  return;
}


#undef DAT_10014164
#define DAT_10014164 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd80
 */

void * recovered_1000dd80(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014164;
  return puVar1;
}

#undef DAT_10014164

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dda8
 */

void recovered_1000dda8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000ddac_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000ddac_DAT_10007954))
static const unsigned char pf_literal_1000ddac_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000ddac_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddac
 */

void recovered_1000ddac(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddb0
 */

void recovered_1000ddb0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;

  piVar4 = (int *)((int)engine + 4);
  uVar3 = *(uint *)(*(int *)arguments + 0x10);
  iVar2 = *(int *)(*(int *)arguments + 0x14);
  uVar1 = *(uint *)((int)engine + 8);
  if ((int)-(iVar2 + (uint)(1 < uVar3)) < 0 ==
      (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(1 < uVar3)))) {
    uVar3 = 1;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar3;
  if (uVar1 < uVar3) {
    recovered_1000be00(piVar4,uVar3);
    uVar1 = *(uint *)((int)engine + 8);
  }
  if (uVar1 < uVar3) {
    recovered_1000be00(piVar4,uVar3);
  }
  iVar2 = *piVar4 + uVar3 * 0x18;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined1 *)(iVar2 + -0x18) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


#undef DAT_10014188
#define DAT_10014188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de48
 */

void * recovered_1000de48(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014188;
  return puVar1;
}

#undef DAT_10014188

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de70
 */

void recovered_1000de70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000de74_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000de74_DAT_10007954))
static const unsigned char pf_literal_1000de74_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000de74_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de74
 */

void recovered_1000de74(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000de78_DAT_1000e118[] __attribute__((aligned(16)))={0xc0,0x16,0x00,0x00};
#undef DAT_1000e118
#define DAT_1000e118 (*(int *)((uintptr_t)pf_literal_1000de78_DAT_1000e118))
static const unsigned char pf_literal_1000de78_DAT_1000e11c[] __attribute__((aligned(16)))={0xc8,0x01,0x00,0x00};
#undef DAT_1000e11c
#define DAT_1000e11c (*(int *)((uintptr_t)pf_literal_1000de78_DAT_1000e11c))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define local_c0 (*(int *)(pf_stack_frame + 16))
#define local_bc (*(int * *)(pf_stack_frame + 20))
#define local_b8 (*(void * *)(pf_stack_frame + 24))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_ac (*(void * *)(pf_stack_frame + 36))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 48))
#define local_9c (*(uint *)(pf_stack_frame + 52))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined4 *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de78
 */

void recovered_1000de78(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  local_7c = DAT_10014008;
  local_78 = DAT_1000e118;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  iVar6 = *(int *)arguments;
  uVar3 = *(uint *)(iVar6 + 0x18);
  uVar7 = *(uint *)((int)engine + 8);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar3;
  local_78 = local_78 + 0x1000dedc;
  local_70 = DAT_1000e11c + 0x1000deec;
  recovered_10007f38(&uStack_94);
  local_bc = (int *)((int)engine + 4);
  if (uVar7 < uVar3) {
    local_90 = 0xffffffff;
    recovered_1000be00(local_bc,uVar3);
    iVar6 = *(int *)arguments;
    uVar7 = *(uint *)((int)engine + 8);
    uVar3 = 1;
    if (1 < *(uint *)(iVar6 + 0x18)) {
      uVar3 = *(uint *)(iVar6 + 0x18);
    }
    if (uVar3 <= uVar7) goto LAB_1000df60;
  }
  else if (uVar3 <= uVar7) goto LAB_1000df60;
  local_90 = 0xffffffff;
  recovered_1000be00(local_bc,uVar3);
  uVar7 = *(uint *)((int)engine + 8);
  iVar6 = *(int *)arguments;
LAB_1000df60:
  piVar1 = local_bc;
  uVar5 = *(uint *)(iVar6 + 0x38);
  iVar6 = *local_bc;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  local_c0 = iVar6 + uVar3 * 0x18;
  pcVar4 = (char *)(local_c0 + -0x18);
  if (uVar7 < uVar5) {
    local_90 = 0xffffffff;
    recovered_1000be00(local_bc,uVar5);
    iVar6 = *piVar1;
  }
  local_90 = 0xffffffff;
  recovered_10009010((int *)&local_a0,(char *)(iVar6 + uVar5 * 0x18 + -0x18));
  local_90 = 1;
  recovered_10009010((int *)&local_b8,pcVar4);
  local_a4 = local_b0;
  local_a8 = local_b4;
  local_ac = local_b8;
  local_b4 = 0;
  local_b0 = 0;
  puVar2 = &DAT_1000f377;
  if (local_a0 != (undefined1 *)0x0) {
    puVar2 = local_a0;
  }
  local_b8 = (void *)0x0;
  local_90 = 2;
  recovered_1000e148((int *)&local_ac,(int)puVar2,local_9c);
  iVar6 = local_c0;
  *(undefined1 *)(local_c0 + -0x18) = 1;
  if ((void **)(local_c0 + -0x14) != &local_ac) {
    recovered_10007894(*(void **)(local_c0 + -0x14));
    *(void **)(iVar6 + -0x14) = local_ac;
    *(undefined4 *)(iVar6 + -0x10) = local_a8;
    *(undefined4 *)(iVar6 + -0xc) = local_a4;
    local_a8 = 0;
    local_a4 = 0;
    local_ac = (void *)0x0;
  }
  *(undefined4 *)(iVar6 + -4) = 0;
  *(undefined4 *)(iVar6 + -8) = 0;
  recovered_10007894(local_ac);
  recovered_10007894(local_b8);
  recovered_10007894(local_a0);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000e118
#undef DAT_1000e11c
#undef DAT_1000f377
#undef DAT_10014008
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef uStack_94
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c

#undef DAT_100141ac
#define DAT_100141ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e120
 */

void * recovered_1000e120(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100141ac;
  return puVar1;
}

#undef DAT_100141ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e148
 */

void recovered_1000e148(int *param_1,int param_2,uint param_3)

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
LAB_1000e184:
    if (uVar10 != uVar6) goto code_r0x1000e18c;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_1000e350;
    puVar12 = recovered_1000783c(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_1000e330;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_1000e314;
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
LAB_1000e314:
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
LAB_1000e330:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    recovered_10007894(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_1000e350:
    if (param_3 == 0) goto LAB_1000e37c;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_1000e378;
  }
  uVar11 = param_1[1];
LAB_1000e1a0:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_1000e25c;
  puVar12 = recovered_1000783c(uVar11 + 1);
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
      if (uVar6 == uVar10) goto LAB_1000e23c;
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
LAB_1000e23c:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  recovered_10007894(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_1000e25c:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_1000e378:
  puVar12 = (undefined8 *)*param_1;
LAB_1000e37c:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x1000e18c:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_1000e1a0;
  goto LAB_1000e184;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e3a0
 */

void recovered_1000e3a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000e3a4_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000e3a4_DAT_10007954))
static const unsigned char pf_literal_1000e3a4_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000e3a4_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e3a4
 */

void recovered_1000e3a4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

static const unsigned char pf_literal_1000e3a8_DAT_1000e5cc[] __attribute__((aligned(16)))={0xac,0x11,0x00,0x00};
#undef DAT_1000e5cc
#define DAT_1000e5cc (*(int *)((uintptr_t)pf_literal_1000e3a8_DAT_1000e5cc))
static const unsigned char pf_literal_1000e3a8_DAT_1000e5d0[] __attribute__((aligned(16)))={0x68,0x01,0x00,0x00};
#undef DAT_1000e5d0
#define DAT_1000e5d0 (*(int *)((uintptr_t)pf_literal_1000e3a8_DAT_1000e5d0))
#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cccU)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_b0 (*(int *)(pf_stack_frame + 16))
#define local_ac (*(void * *)(pf_stack_frame + 20))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 24))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_a0 (*(void * *)(pf_stack_frame + 32))
#define local_9c (*(undefined4 *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e3a8
 */

void recovered_1000e3a8(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;

  local_7c = DAT_10014008;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  uVar4 = *(uint *)(*(int *)arguments + 0x18);
  local_78 = DAT_1000e5cc + 0x1000e3f8;
  uVar6 = *(uint *)((int)engine + 8);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar4;
  local_70 = DAT_1000e5d0 + 0x1000e41c;
  recovered_10007f38(&uStack_94);
  piVar5 = (int *)((int)engine + 4);
  if (uVar6 < uVar4) {
    local_90 = 0xffffffff;
    recovered_1000be00(piVar5,uVar4);
    uVar4 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar4 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar4 <= *(uint *)((int)engine + 8)) goto LAB_1000e488;
  }
  else if (uVar4 <= uVar6) goto LAB_1000e488;
  local_90 = 0xffffffff;
  recovered_1000be00(piVar5,uVar4);
LAB_1000e488:
  local_90 = 0xffffffff;
  local_b0 = *piVar5 + uVar4 * 0x18;
  recovered_10009010((int *)&local_ac,(char *)(local_b0 + -0x18));
  local_98 = local_a4;
  local_9c = local_a8;
  local_90 = 1;
  local_a0 = local_ac;
  puVar2 = *(undefined1 **)(*(int *)arguments + 0x24);
  local_a8 = 0;
  puVar3 = &DAT_1000f377;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  local_a4 = 0;
  local_ac = (void *)0x0;
  recovered_1000e148((int *)&local_a0,(int)puVar3,*(uint *)(*(int *)arguments + 0x28));
  iVar1 = local_b0;
  *(undefined1 *)(local_b0 + -0x18) = 1;
  if ((void **)(local_b0 + -0x14) != &local_a0) {
    recovered_10007894(*(void **)(local_b0 + -0x14));
    *(void **)(iVar1 + -0x14) = local_a0;
    *(undefined4 *)(iVar1 + -0x10) = local_9c;
    *(undefined4 *)(iVar1 + -0xc) = local_98;
    local_9c = 0;
    local_98 = 0;
    local_a0 = (void *)0x0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  recovered_10007894(local_a0);
  recovered_10007894(local_ac);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_1000e5cc
#undef DAT_1000e5d0
#undef DAT_1000f377
#undef DAT_10014008
#undef auStack_68
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
#undef uStack_94

#undef DAT_100141d0
#define DAT_100141d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5d4
 */

void * recovered_1000e5d4(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100141d0;
  return puVar1;
}

#undef DAT_100141d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5fc
 */

void recovered_1000e5fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000e600_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000e600_DAT_10007954))
static const unsigned char pf_literal_1000e600_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000e600_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e600
 */

void recovered_1000e600(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e604
 */

void recovered_1000e604(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;

  piVar4 = (int *)((int)engine + 4);
  uVar1 = *(uint *)(*(int *)arguments + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar1;
  if (*(uint *)((int)engine + 8) < uVar1) {
    recovered_1000be00(piVar4,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar1 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000e680;
  }
  else if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000e680;
  recovered_1000be00(piVar4,uVar1);
LAB_1000e680:
  iVar3 = *piVar4 + uVar1 * 0x18;
  lVar5 = recovered_1000921c((void *)(iVar3 + -0x18));
  iVar2 = *(int *)arguments;
  *(undefined1 *)(iVar3 + -0x18) = 2;
  lVar5 = lVar5 + *(longlong *)(iVar2 + 0x30);
  *(int *)(iVar3 + -8) = (int)lVar5;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  *(int *)(iVar3 + -4) = (int)((ulonglong)lVar5 >> 0x20);
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef DAT_100141f4
#define DAT_100141f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6d4
 */

void * recovered_1000e6d4(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100141f4;
  return puVar1;
}

#undef DAT_100141f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6fc
 */

void recovered_1000e6fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000e700_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000e700_DAT_10007954))
static const unsigned char pf_literal_1000e700_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000e700_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e700
 */

void recovered_1000e700(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e704
 */

void recovered_1000e704(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;

  iVar3 = *(int *)arguments;
  uVar1 = *(uint *)((int)engine + 8);
  piVar4 = (int *)((int)engine + 4);
  uVar2 = *(uint *)(iVar3 + 0x18);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar2;
  if (uVar1 < uVar2) {
    recovered_1000be00(piVar4,uVar2);
    iVar3 = *(int *)arguments;
    uVar1 = *(uint *)((int)engine + 8);
    uVar2 = 1;
    if (1 < *(uint *)(iVar3 + 0x18)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    if (uVar2 <= uVar1) goto LAB_1000e788;
  }
  else if (uVar2 <= uVar1) goto LAB_1000e788;
  recovered_1000be00(piVar4,uVar2);
  uVar1 = *(uint *)((int)engine + 8);
  iVar3 = *(int *)arguments;
LAB_1000e788:
  uVar6 = *(uint *)(iVar3 + 0x38);
  iVar3 = *piVar4;
  iVar5 = iVar3 + uVar2 * 0x18;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar1 < uVar6) {
    recovered_1000be00(piVar4,uVar6);
    iVar3 = *piVar4;
  }
  lVar7 = recovered_1000921c((void *)(iVar3 + uVar6 * 0x18 + -0x18));
  lVar8 = recovered_1000921c((void *)(iVar5 + -0x18));
  *(int *)(iVar5 + -8) = (int)(lVar7 + lVar8);
  *(undefined1 *)(iVar5 + -0x18) = 2;
  *(undefined4 *)(iVar5 + -0x10) = 0;
  *(int *)(iVar5 + -4) = (int)((ulonglong)(lVar7 + lVar8) >> 0x20);
  if (*(undefined1 **)(iVar5 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar5 + -0x14) = 0;
  }
  return;
}


#undef DAT_10014218
#define DAT_10014218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4edcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e810
 */

void * recovered_1000e810(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014218;
  return puVar1;
}

#undef DAT_10014218

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e838
 */

void recovered_1000e838(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000e83c_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000e83c_DAT_10007954))
static const unsigned char pf_literal_1000e83c_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000e83c_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e83c
 */

void recovered_1000e83c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e840
 */

void recovered_1000e840(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;

  piVar4 = (int *)((int)engine + 4);
  uVar1 = *(uint *)(*(int *)arguments + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar1;
  if (*(uint *)((int)engine + 8) < uVar1) {
    recovered_1000be00(piVar4,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar1 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000e8bc;
  }
  else if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000e8bc;
  recovered_1000be00(piVar4,uVar1);
LAB_1000e8bc:
  iVar3 = *piVar4 + uVar1 * 0x18;
  lVar5 = recovered_1000921c((void *)(iVar3 + -0x18));
  iVar2 = *(int *)arguments;
  *(undefined1 *)(iVar3 + -0x18) = 2;
  uVar1 = *(uint *)(iVar2 + 0x30);
  iVar2 = *(int *)(iVar2 + 0x34);
  *(uint *)(iVar3 + -8) = (uint)lVar5 - uVar1;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  *(uint *)(iVar3 + -4) = (int)((ulonglong)lVar5 >> 0x20) - (iVar2 + (uint)((uint)lVar5 < uVar1));
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef DAT_1001423c
#define DAT_1001423c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e910
 */

void * recovered_1000e910(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_1001423c;
  return puVar1;
}

#undef DAT_1001423c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e938
 */

void recovered_1000e938(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000e93c_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000e93c_DAT_10007954))
static const unsigned char pf_literal_1000e93c_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000e93c_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e93c
 */

void recovered_1000e93c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e940
 */

void recovered_1000e940(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;

  iVar3 = *(int *)arguments;
  uVar1 = *(uint *)((int)engine + 8);
  piVar4 = (int *)((int)engine + 4);
  uVar2 = *(uint *)(iVar3 + 0x18);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar2;
  if (uVar1 < uVar2) {
    recovered_1000be00(piVar4,uVar2);
    iVar3 = *(int *)arguments;
    uVar1 = *(uint *)((int)engine + 8);
    uVar2 = 1;
    if (1 < *(uint *)(iVar3 + 0x18)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    if (uVar2 <= uVar1) goto LAB_1000e9c4;
  }
  else if (uVar2 <= uVar1) goto LAB_1000e9c4;
  recovered_1000be00(piVar4,uVar2);
  uVar1 = *(uint *)((int)engine + 8);
  iVar3 = *(int *)arguments;
LAB_1000e9c4:
  uVar6 = *(uint *)(iVar3 + 0x38);
  iVar3 = *piVar4;
  iVar5 = iVar3 + uVar2 * 0x18;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar1 < uVar6) {
    recovered_1000be00(piVar4,uVar6);
    iVar3 = *piVar4;
  }
  lVar7 = recovered_1000921c((void *)(iVar3 + uVar6 * 0x18 + -0x18));
  lVar8 = recovered_1000921c((void *)(iVar5 + -0x18));
  *(uint *)(iVar5 + -8) = (uint)lVar8 - (uint)lVar7;
  *(undefined1 *)(iVar5 + -0x18) = 2;
  *(undefined4 *)(iVar5 + -0x10) = 0;
  *(uint *)(iVar5 + -4) =
       (int)((ulonglong)lVar8 >> 0x20) -
       ((int)((ulonglong)lVar7 >> 0x20) + (uint)((uint)lVar8 < (uint)lVar7));
  if (*(undefined1 **)(iVar5 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar5 + -0x14) = 0;
  }
  return;
}


#undef DAT_10014260
#define DAT_10014260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea4c
 */

void * recovered_1000ea4c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014260;
  return puVar1;
}

#undef DAT_10014260

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea74
 */

void recovered_1000ea74(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000ea78_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000ea78_DAT_10007954))
static const unsigned char pf_literal_1000ea78_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000ea78_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea78
 */

void recovered_1000ea78(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea7c
 */

void recovered_1000ea7c(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;

  piVar3 = (int *)((int)engine + 4);
  uVar1 = *(uint *)(*(int *)arguments + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar1;
  if (*(uint *)((int)engine + 8) < uVar1) {
    recovered_1000be00(piVar3,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar1 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000eaf8;
  }
  else if (uVar1 <= *(uint *)((int)engine + 8)) goto LAB_1000eaf8;
  recovered_1000be00(piVar3,uVar1);
LAB_1000eaf8:
  iVar2 = *piVar3 + uVar1 * 0x18;
  lVar4 = recovered_1000921c((void *)(iVar2 + -0x18));
  lVar4 = lVar4 * *(longlong *)(*(int *)arguments + 0x30);
  *(int *)(iVar2 + -8) = (int)lVar4;
  *(undefined1 *)(iVar2 + -0x18) = 2;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(int *)(iVar2 + -4) = (int)((ulonglong)lVar4 >> 0x20);
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  return;
}


#undef DAT_10014284
#define DAT_10014284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb50
 */

void * recovered_1000eb50(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014284;
  return puVar1;
}

#undef DAT_10014284

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb78
 */

void recovered_1000eb78(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000eb7c_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000eb7c_DAT_10007954))
static const unsigned char pf_literal_1000eb7c_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000eb7c_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb7c
 */

void recovered_1000eb7c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb80
 */

void recovered_1000eb80(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;

  iVar3 = *(int *)arguments;
  uVar1 = *(uint *)((int)engine + 8);
  piVar4 = (int *)((int)engine + 4);
  uVar2 = *(uint *)(iVar3 + 0x18);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar2;
  if (uVar1 < uVar2) {
    recovered_1000be00(piVar4,uVar2);
    iVar3 = *(int *)arguments;
    uVar1 = *(uint *)((int)engine + 8);
    uVar2 = 1;
    if (1 < *(uint *)(iVar3 + 0x18)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    if (uVar2 <= uVar1) goto LAB_1000ec04;
  }
  else if (uVar2 <= uVar1) goto LAB_1000ec04;
  recovered_1000be00(piVar4,uVar2);
  uVar1 = *(uint *)((int)engine + 8);
  iVar3 = *(int *)arguments;
LAB_1000ec04:
  uVar6 = *(uint *)(iVar3 + 0x38);
  iVar3 = *piVar4;
  iVar5 = iVar3 + uVar2 * 0x18;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar1 < uVar6) {
    recovered_1000be00(piVar4,uVar6);
    iVar3 = *piVar4;
  }
  lVar7 = recovered_1000921c((void *)(iVar3 + uVar6 * 0x18 + -0x18));
  lVar8 = recovered_1000921c((void *)(iVar5 + -0x18));
  *(undefined1 *)(iVar5 + -0x18) = 2;
  *(int *)(iVar5 + -8) = (int)(lVar8 * lVar7);
  *(undefined4 *)(iVar5 + -0x10) = 0;
  *(int *)(iVar5 + -4) = (int)((ulonglong)(lVar8 * lVar7) >> 0x20);
  if (*(undefined1 **)(iVar5 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar5 + -0x14) = 0;
  }
  return;
}


#undef DAT_100142a8
#define DAT_100142a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec90
 */

void * recovered_1000ec90(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100142a8;
  return puVar1;
}

#undef DAT_100142a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ecb8
 */

void recovered_1000ecb8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000ecbc_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000ecbc_DAT_10007954))
static const unsigned char pf_literal_1000ecbc_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000ecbc_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ecbc
 */

void recovered_1000ecbc(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ecc0
 */

void recovered_1000ecc0(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;

  iVar1 = *(int *)arguments;
  piVar5 = (int *)((int)engine + 4);
  uVar2 = *(uint *)(iVar1 + 0x18);
  uVar3 = *(uint *)(iVar1 + 0x30);
  uVar4 = *(uint *)(iVar1 + 0x34);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar2;
  if (*(uint *)((int)engine + 8) < uVar2) {
    recovered_1000be00(piVar5,uVar2);
    uVar2 = 1;
    if (1 < *(uint *)(*(int *)arguments + 0x18)) {
      uVar2 = *(uint *)(*(int *)arguments + 0x18);
    }
    if (uVar2 <= *(uint *)((int)engine + 8)) goto LAB_1000ed44;
  }
  else if (uVar2 <= *(uint *)((int)engine + 8)) goto LAB_1000ed44;
  recovered_1000be00(piVar5,uVar2);
LAB_1000ed44:
  iVar1 = *piVar5 + uVar2 * 0x18;
  if (uVar3 == 0 && uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = recovered_1000921c((void *)(iVar1 + -0x18));
    uVar7 = recovered_100021f0((uint)lVar6,(uint)((ulonglong)lVar6 >> 0x20),uVar3,uVar4);
  }
  *(int *)(iVar1 + -8) = (int)uVar7;
  *(undefined1 *)(iVar1 + -0x18) = 2;
  *(int *)(iVar1 + -4) = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(iVar1 + -0x10) = 0;
  if (*(undefined1 **)(iVar1 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar1 + -0x14) = 0;
  }
  return;
}


#undef DAT_100142cc
#define DAT_100142cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eda8
 */

void * recovered_1000eda8(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100142cc;
  return puVar1;
}

#undef DAT_100142cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edd0
 */

void recovered_1000edd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000edd4_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000edd4_DAT_10007954))
static const unsigned char pf_literal_1000edd4_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000edd4_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edd4
 */

void recovered_1000edd4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edd8
 */

void recovered_1000edd8(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;

  iVar4 = *(int *)arguments;
  uVar1 = *(uint *)((int)engine + 8);
  piVar6 = (int *)((int)engine + 4);
  uVar3 = *(uint *)(iVar4 + 0x18);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)((int)engine + 0x30) = uVar3;
  if (uVar1 < uVar3) {
    recovered_1000be00(piVar6,uVar3);
    iVar4 = *(int *)arguments;
    uVar1 = *(uint *)((int)engine + 8);
    uVar3 = 1;
    if (1 < *(uint *)(iVar4 + 0x18)) {
      uVar3 = *(uint *)(iVar4 + 0x18);
    }
    if (uVar3 <= uVar1) goto LAB_1000ee5c;
  }
  else if (uVar3 <= uVar1) goto LAB_1000ee5c;
  recovered_1000be00(piVar6,uVar3);
  uVar1 = *(uint *)((int)engine + 8);
  iVar4 = *(int *)arguments;
LAB_1000ee5c:
  uVar5 = *(uint *)(iVar4 + 0x38);
  iVar4 = *piVar6;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  iVar2 = iVar4;
  if (uVar1 < uVar5) {
    recovered_1000be00(piVar6,uVar5);
    iVar2 = *piVar6;
  }
  iVar4 = iVar4 + uVar3 * 0x18;
  lVar7 = recovered_1000921c((void *)(iVar2 + uVar5 * 0x18 + -0x18));
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = recovered_1000921c((void *)(iVar4 + -0x18));
    uVar9 = recovered_100021f0((uint)lVar8,(uint)((ulonglong)lVar8 >> 0x20),(uint)lVar7,
                               (uint)((ulonglong)lVar7 >> 0x20));
  }
  *(int *)(iVar4 + -8) = (int)uVar9;
  *(undefined1 *)(iVar4 + -0x18) = 2;
  *(int *)(iVar4 + -4) = (int)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(iVar4 + -0x10) = 0;
  if (*(undefined1 **)(iVar4 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar4 + -0x14) = 0;
  }
  return;
}


#undef DAT_100142f0
#define DAT_100142f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef00
 */

void * recovered_1000ef00(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_100142f0;
  return puVar1;
}

#undef DAT_100142f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef28
 */

void recovered_1000ef28(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


static const unsigned char pf_literal_1000ef2c_DAT_10007954[] __attribute__((aligned(16)))={0xa4,0x7b,0x00,0x00};
#undef DAT_10007954
#define DAT_10007954 (*(int *)((uintptr_t)pf_literal_1000ef2c_DAT_10007954))
static const unsigned char pf_literal_1000ef2c_DAT_10007958[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10007958
#define DAT_10007958 (*(int *)((uintptr_t)pf_literal_1000ef2c_DAT_10007958))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_90 (*(undefined4 *)(pf_stack_frame + 32))
#define pcStack_7c (*(code * *)(pf_stack_frame + 52))
#define iStack_78 (*(int *)(pf_stack_frame + 56))
#define puStack_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define puStack_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef2c
 */

void recovered_1000ef2c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_100077e4;
  iStack_78 = DAT_10007954 + 0x100078d8;
  iStack_70 = DAT_10007958 + 0x100078e8;
  uStack_90 = 1;
  recovered_10007f38(&uStack_94);
  recovered_1000242c(param_1);
  recovered_10007f5c(&uStack_94);
  return;
}

#undef DAT_10007954
#undef DAT_10007958
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef30
 */

void recovered_1000ef30(void *owner,void *engine,void *arguments)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;

  iVar4 = *(int *)arguments;
  uVar2 = *(uint *)((int)engine + 8);
  piVar9 = (int *)((int)engine + 4);
  uVar7 = *(uint *)(iVar4 + 0x18);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  if (uVar2 < uVar7) {
    recovered_1000be00(piVar9,uVar7);
    uVar2 = *(uint *)((int)engine + 8);
    iVar4 = *(int *)arguments;
  }
  iVar5 = *piVar9;
  uVar8 = 1;
  if (1 < *(uint *)(iVar4 + 0x38)) {
    uVar8 = *(uint *)(iVar4 + 0x38);
  }
  iVar4 = iVar5 + uVar7 * 0x18;
  if (uVar2 < uVar8) {
    recovered_1000be00(piVar9,uVar8);
    iVar5 = *piVar9;
  }
  cVar1 = *(char *)(iVar4 + -0x18);
  iVar5 = iVar5 + uVar8 * 0x18;
  if (cVar1 != *(char *)(iVar5 + -0x18)) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if (*(int *)(iVar4 + -8) != *(int *)(iVar5 + -8) ||
          *(int *)(iVar4 + -4) != *(int *)(iVar5 + -4)) {
        return;
      }
    }
    else {
      if (cVar1 != '\x01') {
        return;
      }
      pcVar3 = *(char **)(iVar5 + -0x14);
      pcVar6 = *(char **)(iVar4 + -0x14);
      iVar4 = *(int *)(iVar4 + -0x10);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = &DAT_1000f377;
      }
      if (pcVar6 == (char *)0x0) {
        pcVar6 = &DAT_1000f377;
      }
      if (iVar4 != *(int *)(iVar5 + -0x10)) {
        return;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*pcVar6 != *pcVar3) {
          return;
        }
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  if (*(byte *)((int)engine + 0x24) < 4) {
    *(char *)((int)engine + 0x24) = (char)(0x30201 >> ((*(byte *)((int)engine + 0x24) & 0x1f) << 3))
    ;
  }
  return;
}

#undef DAT_1000f377

#undef DAT_10014314
#define DAT_10014314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f07c
 */

void * recovered_1000f07c(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000783c(8);
  *puVar1 = &DAT_10014314;
  return puVar1;
}

#undef DAT_10014314

#undef DAT_1000f377
#define DAT_1000f377 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f0a4
 */

int recovered_1000f0a4(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int iVar14;

  uVar2 = param_1[1];
  if (uVar2 == param_1[2]) {
    uVar5 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar5 = 4;
    }
    if (uVar2 < uVar5) {
      pvVar3 = recovered_1000783c(uVar5 * 0x18);
      if (param_1[1] != 0) {
        iVar14 = 0x10;
        uVar2 = 0;
        do {
          puVar4 = (undefined4 *)(*param_1 + iVar14);
          uVar9 = puVar4[1];
          uVar10 = puVar4[-3];
          puVar12 = (undefined4 *)((int)pvVar3 + iVar14);
          *puVar12 = *puVar4;
          uVar6 = puVar4[-2];
          puVar12[-3] = uVar10;
          uVar10 = puVar4[-1];
          puVar12[-2] = uVar6;
          uVar1 = *(undefined1 *)(puVar4 + -4);
          puVar12[-1] = uVar10;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          puVar12[1] = uVar9;
          *(undefined1 *)(puVar12 + -4) = uVar1;
          recovered_10007894((void *)0x0);
          uVar2 = uVar2 + 1;
          iVar14 = iVar14 + 0x18;
        } while (uVar2 < (uint)param_1[1]);
      }
      recovered_10007894((void *)*param_1);
      param_1[2] = uVar5;
      uVar2 = param_1[1];
      *param_1 = (int)pvVar3;
    }
  }
  puVar13 = (undefined1 *)(*param_1 + uVar2 * 0x18);
  *puVar13 = *param_2;
  *(int *)(puVar13 + 4) = 0;
  puVar11 = *(undefined1 **)(param_2 + 4);
  *(undefined4 *)(puVar13 + 8) = 0;
  *(undefined4 *)(puVar13 + 0xc) = 0;
  puVar7 = &DAT_1000f377;
  if (puVar11 != (undefined1 *)0x0) {
    puVar7 = puVar11;
  }
  recovered_1000c690((int *)(puVar13 + 4),(int)puVar7,*(uint *)(param_2 + 8));
  iVar8 = param_1[1];
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  iVar14 = *param_1;
  *(undefined4 *)(puVar13 + 0x14) = uVar6;
  param_1[1] = iVar8 + 1;
  return iVar14 + iVar8 * 0x18;
}

#undef DAT_1000f377

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f200
 */

void recovered_1000f200(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar2 = uVar7 << 1;
    if (uVar7 == 0) {
      uVar2 = 4;
    }
    if (uVar7 < uVar2) {
      pvVar3 = recovered_1000783c(uVar2 * 0x18);
      if (param_1[1] != 0) {
        iVar10 = 0x10;
        uVar7 = 0;
        do {
          puVar4 = (undefined4 *)(*param_1 + iVar10);
          uVar8 = puVar4[1];
          uVar9 = puVar4[-3];
          puVar11 = (undefined4 *)((int)pvVar3 + iVar10);
          *puVar11 = *puVar4;
          uVar6 = puVar4[-2];
          puVar11[-3] = uVar9;
          uVar9 = puVar4[-1];
          puVar11[-2] = uVar6;
          uVar1 = *(undefined1 *)(puVar4 + -4);
          puVar11[-1] = uVar9;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          puVar11[1] = uVar8;
          *(undefined1 *)(puVar11 + -4) = uVar1;
          recovered_10007894((void *)0x0);
          uVar7 = uVar7 + 1;
          iVar10 = iVar10 + 0x18;
        } while (uVar7 < (uint)param_1[1]);
      }
      recovered_10007894((void *)*param_1);
      uVar7 = param_1[1];
      param_1[2] = uVar2;
      *param_1 = (int)pvVar3;
    }
  }
  uVar12 = *(undefined4 *)(param_2 + 8);
  uVar13 = *(undefined4 *)(param_2 + 0xc);
  uVar8 = *(undefined4 *)(param_2 + 4);
  puVar5 = (undefined1 *)(*param_1 + uVar7 * 0x18);
  *puVar5 = *param_2;
  param_1[1] = uVar7 + 1;
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(puVar5 + 4) = uVar8;
  *(undefined4 *)(puVar5 + 8) = uVar12;
  *(undefined4 *)(puVar5 + 0xc) = uVar13;
  *(undefined4 *)(puVar5 + 0x14) = uVar9;
  *(undefined4 *)(puVar5 + 0x10) = uVar6;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

