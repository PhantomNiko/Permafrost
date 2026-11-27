/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c0
 */

uint recovered_100019c0(uint param_1,uint param_2)

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
 * Address: 0x10001a10
 */

uint recovered_10001a10(uint param_1,uint param_2)

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
 * Address: 0x10001a48
 */

uint recovered_10001a48(uint param_1,uint param_2)

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
 * Address: 0x10001ab8
 */

uint recovered_10001ab8(uint param_1,uint param_2)

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
 * Address: 0x10001b24
 */

ulonglong recovered_10001b24(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_100052c8((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b34
 */

longlong recovered_10001b34(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10005208((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b44
 */

float recovered_10001b44(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10005350(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b60
 */

float recovered_10001b60(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10005398(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x748U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b80
 */

void recovered_10001b80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_10010078 = 0;
  recovered_10001c0c();
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return;
}

#undef DAT_10010078
#undef DAT_10010080

#undef DAT_10010078
#define DAT_10010078 (*(char *)(((uintptr_t)pf_module_state + 0x748U)))
#undef DAT_1001007c
#define DAT_1001007c (*(int *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0x754U)))
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
 * Address: 0x10001c0c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001c0c(void)

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
  if (DAT_10010078 != '\0') {
    return;
  }
  DAT_1001007c = 0;
  DAT_10010084 = 0;
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
        if (iVar11 == 0) goto LAB_10001e0c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10006d38((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_1001007c != 0) goto LAB_10001e3c;
    }
  }
LAB_10001e0c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10006d38((int *)0x300000,piVar4,&local_24);
LAB_10001e3c:
  if (DAT_10010084 == 0) {
    DAT_10010084 = DAT_1001007c;
  }
  DAT_10010078 = 1;
  return;
}

#undef DAT_10010078
#undef DAT_1001007c
#undef DAT_10010084
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e8c
 */

bool recovered_10001e8c(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10001f08(addresses,sizes,count);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return bVar1;
}

#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010084
#define DAT_10010084 (*(int * *)(((uintptr_t)pf_module_state + 0x754U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f08
 */

bool recovered_10001f08(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10001c0c();
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
        piVar1 = DAT_1001007c;
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
      piVar3 = (int *)&DAT_1001007c;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10006d38((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_10010084 == (int *)0x0) {
        DAT_10010084 = DAT_1001007c;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_1001007c
#undef DAT_10010084
#undef DAT_68000000
#undef local_24

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
#define local_14 (*(ulong *)(pf_stack_frame + 28))
#define local_10 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002150
 */

bool recovered_10002150(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = size;
  local_10 = address;
  bVar1 = recovered_10001f08(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return bVar1;
}

#undef DAT_10010080
#undef local_14
#undef local_10

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e8
 */

uint recovered_100021e8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001c0c();
  uVar2 = 0;
  puVar4 = DAT_1001007c;
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
  DAT_10010080 = 0;
  return uVar2;
}

#undef DAT_1001007c
#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002298
 */

ulonglong recovered_10002298(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001c0c();
  uVar2 = 0;
  iVar1 = 0;
  for (puVar4 = DAT_1001007c; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
    if ((char)puVar4[3] == '\x01') {
      bVar5 = CARRY4(uVar2,*puVar4);
      uVar2 = uVar2 + *puVar4;
      iVar1 = iVar1 + (uint)bVar5;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return CONCAT44(iVar1,uVar2);
}

#undef DAT_1001007c
#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(int * *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002354
 */

uint recovered_10002354(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001c0c();
  uVar2 = 0;
  for (piVar4 = DAT_1001007c; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    uVar2 = *piVar4 + uVar2;
  }
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return uVar2;
}

#undef DAT_1001007c
#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023fc
 */

ulonglong recovered_100023fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001c0c();
  uVar2 = 0;
  iVar1 = 0;
  for (puVar4 = DAT_1001007c; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
    bVar5 = CARRY4(uVar2,*puVar4);
    uVar2 = uVar2 + *puVar4;
    iVar1 = iVar1 + (uint)bVar5;
  }
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return CONCAT44(iVar1,uVar2);
}

#undef DAT_1001007c
#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ac
 */

void * recovered_100024ac(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_10002530(size,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar1;
}

#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x754U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002530
 */

uint * recovered_10002530(int param_1,uint *param_2,uint *param_3)

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
    recovered_10001c0c();
    puVar4 = DAT_1001007c;
    puVar5 = DAT_10010084;
    if (DAT_10010084 == (uint *)0x0) {
      puVar5 = DAT_1001007c;
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
              if (uVar7 < uVar8) goto joined_r0x10002610;
            }
          }
          else {
joined_r0x10002610:
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
LAB_10002708:
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
                    DAT_10010084 = DAT_1001007c;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_10010084 = puVar4;
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
                      puVar2 = recovered_10006f38(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10002708;
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

#undef DAT_1001007c
#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002788
 */

void * recovered_10002788(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_10002530(size,(uint *)0x0,(uint *)limit);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar1;
}

#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

void * recovered_10002810(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (first <= last) {
    puVar2 = recovered_10002530(size,(uint *)first,(uint *)last);
  }
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar2;
}

#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

void recovered_100028a0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000291c((int)pointer);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return;
}

#undef DAT_10010080

#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x754U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000291c
 */

void recovered_1000291c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10001c0c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_10010084 == puVar1) {
        DAT_10010084 = puVar4;
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
          if (DAT_10010084 == puVar4) {
            DAT_10010084 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_10010084 = puVar4;
  return;
}

#undef DAT_10010084

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x750U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x754U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a88
 */

void * recovered_10002a88(void *pointer,ulong size)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
    iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
  } while (iVar7 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x750U));
      iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0x750U),1);
    } while (iVar7 != 0);
    DataMemoryBarrier(0xb);
  }
  if (pointer == (void *)0x0) {
    puVar3 = recovered_10002530(size,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_10002cbc;
  }
  if (size == 0) {
    recovered_1000291c((int)pointer);
    puVar3 = (uint *)0x0;
    goto LAB_10002cbc;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < size) goto LAB_10002cbc;
  recovered_10001c0c();
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
          DAT_10010084 = (uint *)((int)pointer + (int)puVar12);
          *DAT_10010084 = ((int)puVar6 - (int)puVar12) - 0x10;
          uVar1 = *(uint *)((int)pointer + -0xc);
          *(undefined1 *)(DAT_10010084 + 3) = 1;
          DAT_10010084[2] = (uint)puVar10;
          DAT_10010084[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_10010084;
          }
          *(uint **)((int)pointer + -0xc) = DAT_10010084;
          *(uint **)((int)pointer + -0x10) = puVar12;
          puVar3 = pointer;
        }
      }
    }
    goto LAB_10002cbc;
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
      puVar3 = DAT_10010084;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar6 ||
            (((uint *)((int)pointer + (int)puVar6) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar6 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar10;
          DAT_10010084 = puVar10;
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
        iVar4 = recovered_10006fbc(puVar10,(int)puVar12);
        if (iVar4 != 0) {
          DAT_10010084 = *(uint **)((int)pointer + -0xc);
        }
        *(undefined1 *)((int)pointer + -4) = 0;
        puVar3 = pointer;
      }
      goto LAB_10002cbc;
    }
  }
  puVar6 = recovered_10002530((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar6 == (uint *)0x0) goto LAB_10002cbc;
  puVar10 = (uint *)*puVar10;
  if (puVar10 < puVar12) {
    puVar12 = puVar10;
  }
  puVar3 = puVar6;
  puVar2 = pointer;
  if (puVar12 < &SupervisorCall) {
LAB_10002d8c:
    if (puVar12 != (uint *)0x0) goto LAB_10002d94;
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
            if (uVar14 == uVar11) goto LAB_10002f74;
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
LAB_10002f74:
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
          if (uVar14 == uVar11) goto LAB_10002d8c;
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
      goto LAB_10002d8c;
    }
LAB_10002d94:
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
      if (puVar12 == puVar13) goto LAB_10002df0;
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
LAB_10002df0:
  recovered_1000291c((int)pointer);
  puVar3 = puVar6;
LAB_10002cbc:
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar3;
}

#undef DAT_10010080
#undef DAT_10010084
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003028
 */

longlong recovered_10003028(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000307c
 */

ulonglong recovered_1000307c(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x100030d0
 */

undefined8 recovered_100030d0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000311c
 */

undefined8 recovered_1000311c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003200
 */

undefined8 recovered_10003200(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003280
 */

undefined8 recovered_10003280(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003398
 */

undefined8 recovered_10003398(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003454
 */

void recovered_10003454(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000345c
 */

int recovered_1000345c(int param_1)

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
 * Address: 0x10003468
 */

void * recovered_10003468(ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x100034b8. Too many branches */
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
 * Address: 0x100034bc
 */

void recovered_100034bc(void *pointer)

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
                    /* WARNING: Could not recover jumptable at 0x10003508. Too many branches */
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
 * Address: 0x1000350c
 */

void * recovered_1000350c(void *pointer,ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x1000355c. Too many branches */
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
 * Address: 0x10003560
 */

void * recovered_10003560(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1000359c;
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
          if (uVar6 == uVar9) goto LAB_10003730;
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
LAB_10003730:
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
        if (uVar9 == uVar6) goto LAB_10003594;
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
LAB_10003594:
  if (uVar8 == 0) {
    return destination;
  }
LAB_1000359c:
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
 * Address: 0x100037e4
 */

void * recovered_100037e4(void *destination,void *source,ulong count)

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
      goto LAB_1000382c;
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
          if (puVar8 == (undefined8 *)count) goto LAB_10003ab8;
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
LAB_10003ab8:
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
        if ((undefined8 *)count == puVar8) goto LAB_10003b34;
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
LAB_10003b34:
    if (uVar9 == 0) {
      return destination;
    }
LAB_1000382c:
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
    goto LAB_100038a8;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10003b44:
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
          goto LAB_10003b44;
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
        if (uVar5 == uVar7) goto LAB_10003c20;
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
LAB_10003c20:
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
      if (uVar7 == uVar5) goto LAB_10003cdc;
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
LAB_10003cdc:
  if (uVar9 == 0) {
    return destination;
  }
LAB_100038a8:
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
 * Address: 0x10003cf0
 */

void * recovered_10003cf0(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x10003e78;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x10003d90:
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
        if (uVar6 == uVar7) goto joined_r0x10003e1c;
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
      goto joined_r0x10003d90;
    }
  }
joined_r0x10003e1c:
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
      if (uVar7 == uVar6) goto joined_r0x10003e78;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x10003e78:
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
 * Address: 0x10003ef0
 */

void recovered_10003ef0(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10004070;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10003f8c:
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
        if (uVar7 == uVar8) goto joined_r0x10004010;
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
      goto joined_r0x10003f8c;
    }
  }
joined_r0x10004010:
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
      if (uVar7 == uVar8) goto joined_r0x10004070;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10004070:
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
 * Address: 0x100040ec
 */

void recovered_100040ec(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x1000426c;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10004188:
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
        if (uVar7 == uVar8) goto joined_r0x1000420c;
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
      goto joined_r0x10004188;
    }
  }
joined_r0x1000420c:
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
      if (uVar7 == uVar8) goto joined_r0x1000426c;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x1000426c:
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
 * Address: 0x100042e8
 */

char * recovered_100042e8(char *param_1,char param_2,int param_3)

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
 * Address: 0x1000431c
 */

int recovered_1000431c(void *left,void *right,ulong count)

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
LAB_10004414:
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
      if (uVar5 != uVar6) goto LAB_1000450c;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_1000450c;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_1000450c;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_1000450c;
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
LAB_10004444:
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
      if (uVar5 != uVar6) goto LAB_10004444;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10004514(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10004414;
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
LAB_1000450c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004514
 */

int recovered_10004514(byte *param_1,byte *param_2)

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
 * Address: 0x10004564
 */

bool recovered_10004564(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004578
 */

bool recovered_10004578(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000458c
 */

bool recovered_1000458c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a4
 */

bool recovered_100045a4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d0
 */

bool recovered_100045d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045f0
 */

bool recovered_100045f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004604
 */

int recovered_10004604(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004614
 */

int recovered_10004614(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004624
 */

ulong recovered_10004624(char *text)

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
 * Address: 0x1000464c
 */

int recovered_1000464c(char *left,char *right)

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
LAB_10004684:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_10004684;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004690
 */

int recovered_10004690(byte *param_1,byte *param_2)

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
LAB_100046c8:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_100046c8;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d4
 */

void recovered_100046d4(int param_1,int param_2)

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
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_100046f0(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_100047b8;
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
          if (uVar8 == uVar11) goto LAB_1000494c;
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
LAB_1000494c:
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
        if (uVar11 == uVar8) goto LAB_100047b0;
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
LAB_100047b0:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_100047b8:
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
 * Address: 0x10004a04
 */

char * recovered_10004a04(char *param_1,char param_2)

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
 * Address: 0x10004a38
 */

int recovered_10004a38(char *param_1,char *param_2)

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
 * Address: 0x10004a9c
 */

ulong recovered_10004a9c(char *text,char *reject)

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
 * Address: 0x10004b04
 */

char * recovered_10004b04(char *param_1,char *param_2)

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
 * Address: 0x10004b64
 */

char * recovered_10004b64(char *param_1,char *param_2)

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


#undef DAT_1000f954
#define DAT_1000f954 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bc8
 */

undefined * recovered_10004bc8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000f954;
}

#undef DAT_1000f954

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bd8
 */

undefined ** recovered_10004bd8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010008;
}

#undef PTR_DAT_10010008

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
 * Address: 0x10004be8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004be8(undefined4 *param_1)

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
 * Address: 0x10004c98
 */

double recovered_10004c98(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10004cdc
 */

double recovered_10004cdc(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10004d94
 */

double recovered_10004d94(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10004dcc
 */

double recovered_10004dcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10004e4c
 */

double recovered_10004e4c(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004e7c
 */

double recovered_10004e7c(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004ec0
 */

double recovered_10004ec0(undefined4 param_1,undefined4 param_2)

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


static const unsigned char pf_literal_10004f08_DAT_10005038[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff};
#undef DAT_10005038
#define DAT_10005038 (*(double *)((uintptr_t)pf_literal_10004f08_DAT_10005038))
static const unsigned char pf_literal_10004f08_DAT_10005040[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_10005040
#define DAT_10005040 (*(double *)((uintptr_t)pf_literal_10004f08_DAT_10005040))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f08
 */

double recovered_10004f08(undefined4 param_1,undefined4 param_2)

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
    return DAT_10005038;
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
  return dVar4 + dVar4 + dVar5 * DAT_10005040;
}

#undef DAT_10005038
#undef DAT_10005040

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005048
 */

longlong recovered_10005048(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10005208(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


static const unsigned char pf_literal_10005078_DAT_10005108[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10005108
#define DAT_10005108 (*(double *)((uintptr_t)pf_literal_10005078_DAT_10005108))
static const unsigned char pf_literal_10005078_DAT_10005110[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10005110
#define DAT_10005110 (*(double *)((uintptr_t)pf_literal_10005078_DAT_10005110))
static const unsigned char pf_literal_10005078_DAT_10005118[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10005118
#define DAT_10005118 (*(double *)((uintptr_t)pf_literal_10005078_DAT_10005118))
static const unsigned char pf_literal_10005078_DAT_10005120[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10005120
#define DAT_10005120 (*(double *)((uintptr_t)pf_literal_10005078_DAT_10005120))
static const unsigned char pf_literal_10005078_DAT_10005128[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_10005128
#define DAT_10005128 (*(double *)((uintptr_t)pf_literal_10005078_DAT_10005128))
static const unsigned char pf_literal_10005078_DAT_10005130[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_10005130
#define DAT_10005130 (*(double *)((uintptr_t)pf_literal_10005078_DAT_10005130))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005078
 */

double recovered_10005078(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10005108 < dVar1; dVar1 = dVar1 + DAT_10005110
      ) {
  }
  for (; dVar1 < DAT_10005118; dVar1 = dVar1 + DAT_10005120) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10005128 +
                 (dVar2 * dVar2 * dVar2) / DAT_10005130);
}

#undef DAT_10005108
#undef DAT_10005110
#undef DAT_10005118
#undef DAT_10005120
#undef DAT_10005128
#undef DAT_10005130

static const unsigned char pf_literal_10005138_DAT_100051c0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_100051c0
#define DAT_100051c0 (*(double *)((uintptr_t)pf_literal_10005138_DAT_100051c0))
static const unsigned char pf_literal_10005138_DAT_100051c8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_100051c8
#define DAT_100051c8 (*(double *)((uintptr_t)pf_literal_10005138_DAT_100051c8))
static const unsigned char pf_literal_10005138_DAT_100051d0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_100051d0
#define DAT_100051d0 (*(double *)((uintptr_t)pf_literal_10005138_DAT_100051d0))
static const unsigned char pf_literal_10005138_DAT_100051d8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_100051d8
#define DAT_100051d8 (*(double *)((uintptr_t)pf_literal_10005138_DAT_100051d8))
static const unsigned char pf_literal_10005138_DAT_100051e0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_100051e0
#define DAT_100051e0 (*(double *)((uintptr_t)pf_literal_10005138_DAT_100051e0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005138
 */

double recovered_10005138(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_100051c0 < dVar1; dVar1 = dVar1 + DAT_100051c8
      ) {
  }
  for (; dVar1 < DAT_100051d0; dVar1 = dVar1 + DAT_100051d8) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_100051e0;
}

#undef DAT_100051c0
#undef DAT_100051c8
#undef DAT_100051d0
#undef DAT_100051d8
#undef DAT_100051e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051e8
 */

double recovered_100051e8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


static const unsigned char pf_literal_10005208_DAT_100052c0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_100052c0
#define DAT_100052c0 (*(double *)((uintptr_t)pf_literal_10005208_DAT_100052c0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005208
 */

longlong recovered_10005208(double value)

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
  dVar8 = DAT_100052c0;
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

#undef DAT_100052c0

static const unsigned char pf_literal_100052c8_DAT_10005348[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43};
#undef DAT_10005348
#define DAT_10005348 (*(double *)((uintptr_t)pf_literal_100052c8_DAT_10005348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c8
 */

ulonglong recovered_100052c8(double value)

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
  dVar8 = DAT_10005348;
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

#undef DAT_10005348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005350
 */

double recovered_10005350(ulonglong value)

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
 * Address: 0x10005398
 */

double recovered_10005398(longlong value)

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


static const unsigned char pf_literal_10005428_DAT_10005468[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10005468
#define DAT_10005468 (*(float *)((uintptr_t)pf_literal_10005428_DAT_10005468))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005428
 */

float recovered_10005428(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_10005468;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_10005468

static const unsigned char pf_literal_1000546c_DAT_10005524[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10005524
#define DAT_10005524 (*(float *)((uintptr_t)pf_literal_1000546c_DAT_10005524))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000546c
 */

float recovered_1000546c(float param_1,float *param_2)

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
    return DAT_10005524;
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

#undef DAT_10005524

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005528
 */

float recovered_10005528(float param_1,uint param_2)

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


static const unsigned char pf_literal_10005574_DAT_100055f8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_100055f8
#define DAT_100055f8 (*(float *)((uintptr_t)pf_literal_10005574_DAT_100055f8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005574
 */

float recovered_10005574(float param_1,float param_2)

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
    return DAT_100055f8;
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

#undef DAT_100055f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055fc
 */

float recovered_100055fc(float param_1)

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
 * Address: 0x10005634
 */

float recovered_10005634(float param_1)

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
 * Address: 0x10005680
 */

double recovered_10005680(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x100056d4
 */

float recovered_100056d4(float param_1)

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


static const unsigned char pf_literal_10005730_DAT_10005784[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00};
#undef DAT_10005784
#define DAT_10005784 (*(float *)((uintptr_t)pf_literal_10005730_DAT_10005784))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005730
 */

float recovered_10005730(float param_1)

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
  return DAT_10005784;
}

#undef DAT_10005784

static const unsigned char pf_literal_10005788_DAT_100058c0[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f};
#undef DAT_100058c0
#define DAT_100058c0 (*(double *)((uintptr_t)pf_literal_10005788_DAT_100058c0))
static const unsigned char pf_literal_10005788_DAT_100058c8[] __attribute__((aligned(16)))={0x00,0x00,0x80,0xff};
#undef DAT_100058c8
#define DAT_100058c8 (*(float *)((uintptr_t)pf_literal_10005788_DAT_100058c8))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005788
 */

float recovered_10005788(float param_1)

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
    return DAT_100058c8;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_100058c0);
}

#undef DAT_100058c0
#undef DAT_100058c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058cc
 */

longlong recovered_100058cc(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10005208(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


static const unsigned char pf_literal_10005900_DAT_10005998[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10005998
#define DAT_10005998 (*(double *)((uintptr_t)pf_literal_10005900_DAT_10005998))
static const unsigned char pf_literal_10005900_DAT_100059a0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_100059a0
#define DAT_100059a0 (*(double *)((uintptr_t)pf_literal_10005900_DAT_100059a0))
static const unsigned char pf_literal_10005900_DAT_100059a8[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_100059a8
#define DAT_100059a8 (*(double *)((uintptr_t)pf_literal_10005900_DAT_100059a8))
static const unsigned char pf_literal_10005900_DAT_100059b0[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_100059b0
#define DAT_100059b0 (*(double *)((uintptr_t)pf_literal_10005900_DAT_100059b0))
static const unsigned char pf_literal_10005900_DAT_100059b8[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40};
#undef DAT_100059b8
#define DAT_100059b8 (*(double *)((uintptr_t)pf_literal_10005900_DAT_100059b8))
static const unsigned char pf_literal_10005900_DAT_100059c0[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0};
#undef DAT_100059c0
#define DAT_100059c0 (*(double *)((uintptr_t)pf_literal_10005900_DAT_100059c0))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005900
 */

float recovered_10005900(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10005998 < dVar1; dVar1 = dVar1 + DAT_100059a0) {
  }
  for (; dVar1 < DAT_100059a8; dVar1 = dVar1 + DAT_100059b0) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100059b8 +
                         (dVar2 * dVar2 * dVar2) / DAT_100059c0));
}

#undef DAT_10005998
#undef DAT_100059a0
#undef DAT_100059a8
#undef DAT_100059b0
#undef DAT_100059b8
#undef DAT_100059c0

static const unsigned char pf_literal_100059c8_DAT_10005a58[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40};
#undef DAT_10005a58
#define DAT_10005a58 (*(double *)((uintptr_t)pf_literal_100059c8_DAT_10005a58))
static const unsigned char pf_literal_100059c8_DAT_10005a60[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0};
#undef DAT_10005a60
#define DAT_10005a60 (*(double *)((uintptr_t)pf_literal_100059c8_DAT_10005a60))
static const unsigned char pf_literal_100059c8_DAT_10005a68[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0};
#undef DAT_10005a68
#define DAT_10005a68 (*(double *)((uintptr_t)pf_literal_100059c8_DAT_10005a68))
static const unsigned char pf_literal_100059c8_DAT_10005a70[] __attribute__((aligned(16)))={0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40};
#undef DAT_10005a70
#define DAT_10005a70 (*(double *)((uintptr_t)pf_literal_100059c8_DAT_10005a70))
static const unsigned char pf_literal_100059c8_DAT_10005a78[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0};
#undef DAT_10005a78
#define DAT_10005a78 (*(double *)((uintptr_t)pf_literal_100059c8_DAT_10005a78))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059c8
 */

float recovered_100059c8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_10005a58 < dVar1; dVar1 = dVar1 + DAT_10005a60) {
  }
  for (; dVar1 < DAT_10005a68; dVar1 = dVar1 + DAT_10005a70) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_10005a78);
}

#undef DAT_10005a58
#undef DAT_10005a60
#undef DAT_10005a68
#undef DAT_10005a70
#undef DAT_10005a78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a80
 */

float recovered_10005a80(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a9c
 */

int recovered_10005a9c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10005bf0
 */

int recovered_10005bf0(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10005c6c;
  }
  bVar2 = false;
joined_r0x10005c6c:
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
 * Address: 0x10005d50
 */

double recovered_10005d50(byte *param_1,undefined4 *param_2)

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
      goto LAB_10005e3c;
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
LAB_10005e3c:
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
 * Address: 0x10005f24
 */

float recovered_10005f24(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10005d50(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000f956
#define DAT_1000f956 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_1000f960
#define str_1000f960 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000f971
#define str_1000f971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f40
 */

int recovered_10005f40(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10005fc0:
  while( true ) {
    pcVar6 = str_1000f971;
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
LAB_10005fe0:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10006000;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_1000606c;
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
LAB_1000606c:
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
      goto LAB_10006098;
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
LAB_10006098:
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
switchD_1000626c_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10006b20;
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
      goto LAB_1000653c;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_1000653c:
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
      local_60[-iVar7] = str_1000f971[uVar11 + uVar12 * -10];
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
      goto LAB_10006b20;
    }
    break;
  default:
    goto switchD_1000626c_caseD_4a;
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
      pcVar6 = str_1000f960;
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
    goto LAB_10006b20;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10005fe0;
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
                      goto LAB_10006a14;
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
LAB_10006a14:
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
        local_60[-iVar7] = str_1000f971[uVar10 + uVar12 * -10];
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
LAB_100069dc:
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
                    goto LAB_100069dc;
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
    goto LAB_10005fc0;
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
      local_60[iVar7] = str_1000f971[uVar10 & 0xf];
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
    goto LAB_10005fc0;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10005fc0;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000f956;
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
      goto LAB_10006a38;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10006a38;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10006a38:
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
      local_60[-iVar7] = str_1000f971[uVar11 + uVar12 * -10];
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
LAB_10006b20:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10005fc0;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10005fc0;
code_r0x10006000:
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
  goto LAB_10005fc0;
}

#undef DAT_1000f956
#undef str_1000f960
#undef str_1000f971
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d08
 */

int recovered_10006d08(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_10005f40((byte *)buffer,capacity,(byte *)format,(double *)&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74cU)))
#undef DAT_10010084
#define DAT_10010084 (*(int * *)(((uintptr_t)pf_module_state + 0x754U)))
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
 * Address: 0x10006d38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006d38(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_1001007c != 0;
          puVar4 = &DAT_1001007c;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_10010084;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_10010084 = piVar3;
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
      puVar4 = &DAT_1001007c;
      if (DAT_1001007c != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_10010084;
      goto LAB_10006f1c;
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
      bVar7 = DAT_1001007c != 0;
      puVar4 = &DAT_1001007c;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_10010084;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_10006f1c:
      if (piVar5 == (int *)0x0) {
        DAT_10010084 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1001007c
#undef DAT_10010084
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f38
 */

uint * recovered_10006f38(uint *param_1,uint *param_2)

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
 * Address: 0x10006fbc
 */

undefined4 recovered_10006fbc(uint *param_1,int param_2)

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


#undef DAT_10010088
#define DAT_10010088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75cU)))
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
 * Address: 0x1000701c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000701c(char *param_1,int param_2)

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
        if (DAT_10010088 != 0) {
          DAT_10010088 = DAT_10010088 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_10010088 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10003560(local_224,&DAT_1001008c,DAT_10010088);
            uVar2 = DAT_10010088;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_10010088 = 0;
        }
        else {
          if (DAT_10010088 - 0x1ff < 0xfffffe00) {
            recovered_10003560(local_224,&DAT_1001008c,DAT_10010088);
            local_224[DAT_10010088] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_10010088 = 0;
          }
          (&DAT_1001008c)[DAT_10010088] = cVar1;
          DAT_10010088 = DAT_10010088 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_10010088
#undef DAT_1001008c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_10010088
#define DAT_10010088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75cU)))
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
 * Address: 0x10007200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007200(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_10010088 != 0) {
    recovered_10003560(local_210,&DAT_1001008c,DAT_10010088);
    uVar1 = DAT_10010088;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_10010088 = 0;
  return;
}

#undef DAT_10010088
#undef DAT_1001008c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_10010088
#define DAT_10010088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75cU)))
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
 * Address: 0x100072c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100072c0(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_10010088 == 0) {
    return;
  }
  recovered_10003560(auStack_214,&DAT_1001008c,DAT_10010088);
  auStack_214[DAT_10010088] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_10010088 = 0;
  return;
}

#undef DAT_10010088
#undef DAT_1001008c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000f95f
#define DAT_1000f95f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000f982
#define DAT_1000f982 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000737c
 */

void recovered_1000737c(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_1000f982;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000f95f;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10006d08(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_1000701c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000f95f
#undef DAT_1000f982
#undef acStack_14c

#undef DAT_1000f9a0
#define DAT_1000f9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000f985
#define str_1000f985 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d4
 */

void recovered_100073d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10004624(str_1000f985);
  recovered_1000701c(str_1000f985,uVar1);
  uVar1 = recovered_10004624(&DAT_1000f9a0);
  recovered_1000701c(&DAT_1000f9a0,uVar1);
  return;
}

#undef DAT_1000f9a0
#undef str_1000f985

#undef DAT_1000f9a0
#define DAT_1000f9a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000f9a3
#define str_1000f9a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007420
 */

void recovered_10007420(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10004624(str_1000f9a3);
  recovered_1000701c(str_1000f9a3,uVar1);
  uVar1 = recovered_10004624(&DAT_1000f9a0);
  recovered_1000701c(&DAT_1000f9a0,uVar1);
  return;
}

#undef DAT_1000f9a0
#undef str_1000f9a3

#undef DAT_10010088
#define DAT_10010088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75cU)))
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
 * Address: 0x1000746c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000746c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_10010088 != 0) {
    recovered_10003560(auStack_224,&DAT_1001008c,DAT_10010088);
    auStack_224[DAT_10010088] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_10010088 = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10010088
#undef DAT_1001008c
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
 * Address: 0x100075c0
 */

undefined4 recovered_100075c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075c8
 */

void recovered_100075c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075cc
 */

undefined4 recovered_100075cc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000f982
#define DAT_1000f982 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
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
#undef str_1000fa24
#define str_1000fa24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_1000fa31
#define str_1000fa31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_1000fa3f
#define str_1000fa3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100075d4(char *param_1,char *param_2)

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
    goto LAB_10007848;
  }
  iVar2 = recovered_1000464c(param_1,str_1000fa24);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_100077d4:
    puVar4 = recovered_10003468(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10003cf0(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      recovered_10006d08((char *)(puVar4 + 1),0xf1,&DAT_1000f982,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_1000464c(param_1,str_1000fa31);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_100077d4;
    }
    iVar3 = recovered_1000464c(param_1,str_1000fa3f);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_100077d4;
    }
    puVar4 = recovered_10003468(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10003cf0(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10004a04(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10004a04(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10004a04(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10004a04(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10004a04(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10004a04(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10004a04(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      recovered_10006d08((char *)(puVar4 + 1),0xf1,&DAT_1000f982,param_1);
      recovered_10003cf0(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10004a04(unaff_r8,'w');
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
              destination = recovered_1000350c((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_10007870;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_10003560(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_10007870:
        *DAT_10014004 = uVar7;
        recovered_100034bc(puVar4);
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
LAB_10007848:
  *DAT_10014004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000f982
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000fa24
#undef str_1000fa31
#undef str_1000fa3f
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
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
 * Address: 0x10007958
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007958(char *param_1,char *param_2,uint *param_3)

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
      recovered_100034bc((void *)param_3[0x3f]);
    }
    recovered_100034bc(param_3);
  }
  recovered_100075d4(param_1,param_2);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
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
 * Address: 0x10007a58
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007a58(uint *param_1)

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
    recovered_100034bc((void *)param_1[0x3f]);
  }
  recovered_100034bc(param_1);
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
 * Address: 0x10007b50
 */

uint recovered_10007b50(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_10003560(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_100019c0(count,param_2);
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
            uVar1 = recovered_10007c7c(unaff_r4);
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


#undef DAT_1000f95f
#define DAT_1000f95f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10010088
#define DAT_10010088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75cU)))
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
 * Address: 0x10007c7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10007c7c(int *param_1)

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
LAB_10007cd8:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_10010088 != 0) {
      recovered_10003560(auStack_220,&DAT_1001008c,DAT_10010088);
      auStack_220[DAT_10010088] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_10010088 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000f95f,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10004624(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10007cd8;
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

#undef DAT_1000f95f
#undef DAT_10010088
#undef DAT_1001008c
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e7c
 */

int recovered_10007e7c(char *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_1000701c(param_1,count);
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
        pvVar1 = recovered_1000350c((void *)param_4[0x3f],size);
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
        recovered_10003cf0((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10003560((void *)(param_4[0x3f] + uVar2),param_1,count);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff4
 */

undefined4 recovered_10007ff4(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10008008;
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
LAB_10008008:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080a4
 */

undefined4 recovered_100080a4(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
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
 * Address: 0x100080cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100080cc(uint *param_1)

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
 * Address: 0x100081a4
 */

undefined1 recovered_100081a4(int param_1)

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
 * Address: 0x100081b4
 */

undefined1 recovered_100081b4(int param_1)

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
 * Address: 0x100081c4
 */

void recovered_100081c4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081e0
 */

void recovered_100081e0(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
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
 * Address: 0x10008204
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008204(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46d4U)))
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
 * Address: 0x10008294
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008294(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_10003cf0(&local_28,0,0xc);
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
 * Address: 0x10008408
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008408(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10003cf0(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_10003468(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_10003560(destination,local_24,local_20);
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
 * Address: 0x10008508
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10008508(int param_1,int param_2,int param_3)

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
 * Address: 0x10008590
 */

undefined4 recovered_10008590(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008598
 */

void recovered_10008598(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000859c
 */

undefined4 recovered_1000859c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085a4
 */

undefined4 recovered_100085a4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085ac
 */

undefined4 recovered_100085ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085b4
 */

int recovered_100085b4(char *left,char *right,ulong count)

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


#undef DAT_1000f9b3
#define DAT_1000f9b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_1000f9b6
#define str_1000f9b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000f9c3
#define str_1000f9c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_1000f9cd
#define str_1000f9cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_1000f9e1
#define str_1000f9e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000f9ef
#define str_1000f9ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_1000fa01
#define str_1000fa01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_1000fa0d
#define str_1000fa0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000fa1e
#define str_1000fa1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085f8
 */

char * recovered_100085f8(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000f9b3;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10008618_caseD_0;
  default:
    pcVar1 = str_1000fa1e;
switchD_10008618_caseD_0:
    return pcVar1;
  case 2:
    return str_1000f9b6;
  case 5:
    return str_1000f9c3;
  case 9:
    return str_1000f9cd;
  case 0xc:
    return str_1000f9e1;
  case 0xd:
    return str_1000f9ef;
  case 0x11:
    return str_1000fa01;
  case 0x16:
    return str_1000fa0d;
  }
}

#undef DAT_1000f9b3
#undef str_1000f9b6
#undef str_1000f9c3
#undef str_1000f9cd
#undef str_1000f9e1
#undef str_1000f9ef
#undef str_1000fa01
#undef str_1000fa0d
#undef str_1000fa1e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086f8
 */

undefined4 recovered_100086f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008700
 */

undefined4 recovered_10008700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1001028c
#define DAT_1001028c (*(int *)(((uintptr_t)pf_module_state + 0x95cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008708
 */

void recovered_10008708(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001028c = DAT_1001028c + 1;
  return;
}

#undef DAT_1001028c

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10008730(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10008740(void *context){__asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr\ntrap ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10008790(void *context,int value){__asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr\ntrap ");}


static const unsigned char pf_literal_100087e8_DAT_1000886c[] __attribute__((aligned(16)))={0xfc,0x75,0x00,0x00};
#undef DAT_1000886c
#define DAT_1000886c (*(int *)((uintptr_t)pf_literal_100087e8_DAT_1000886c))
static const unsigned char pf_literal_100087e8_DAT_10008870[] __attribute__((aligned(16)))={0x1c,0x00,0x00,0x00};
#undef DAT_10008870
#define DAT_10008870 (*(int *)((uintptr_t)pf_literal_100087e8_DAT_10008870))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087e8
 */

void recovered_100087e8(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10008874;
  local_20 = DAT_1000886c + 0x10008810;
  local_18 = DAT_10008870 + 0x10008820;
  local_38 = 1;
  recovered_10008fc8(&uStack_3c);
  recovered_10003454();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10008848);
  (*pcVar1)();
}

#undef DAT_1000886c
#undef DAT_10008870
#undef uStack_3c
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef auStack_10
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008874
 */

undefined4 recovered_10008874(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000887c
 */

void recovered_1000887c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000888c(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  recovered_100087e8();
}


#undef DAT_10010290
#define DAT_10010290 (*(int *)(((uintptr_t)pf_module_state + 0x960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000888c
 */

int recovered_1000888c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_10008de0(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_100087e8();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_10010290;
  DAT_10010290 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_10010290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088cc
 */

void * recovered_100088cc(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10003468(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10003454();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088f8
 */

void * recovered_100088f8(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10003468(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10003454();
    return (void *)0x0;
  }
  return pvVar1;
}


static const unsigned char pf_literal_10008924_DAT_100089e4[] __attribute__((aligned(16)))={0xb4,0x74,0x00,0x00};
#undef DAT_100089e4
#define DAT_100089e4 (*(int *)((uintptr_t)pf_literal_10008924_DAT_100089e4))
static const unsigned char pf_literal_10008924_DAT_100089e8[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_100089e8
#define DAT_100089e8 (*(int *)((uintptr_t)pf_literal_10008924_DAT_100089e8))
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
 * Address: 0x10008924
 */

void recovered_10008924(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10008874;
  local_78 = DAT_100089e4 + 0x10008968;
  local_70 = DAT_100089e8 + 0x10008978;
  local_90 = 1;
  recovered_10008fc8(&uStack_94);
  recovered_100034bc(param_1);
  recovered_10008fec(&uStack_94);
  return;
}

#undef DAT_100089e4
#undef DAT_100089e8
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

static const unsigned char pf_literal_100089ec_DAT_10008aac[] __attribute__((aligned(16)))={0xfc,0x73,0x00,0x00};
#undef DAT_10008aac
#define DAT_10008aac (*(int *)((uintptr_t)pf_literal_100089ec_DAT_10008aac))
static const unsigned char pf_literal_100089ec_DAT_10008ab0[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10008ab0
#define DAT_10008ab0 (*(int *)((uintptr_t)pf_literal_100089ec_DAT_10008ab0))
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
 * Address: 0x100089ec
 */

void recovered_100089ec(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10008874;
  local_78 = DAT_10008aac + 0x10008a30;
  local_70 = DAT_10008ab0 + 0x10008a40;
  local_90 = 1;
  recovered_10008fc8(&uStack_94);
  recovered_100034bc(param_1);
  recovered_10008fec(&uStack_94);
  return;
}

#undef DAT_10008aac
#undef DAT_10008ab0
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

static const unsigned char pf_literal_10008ab4_DAT_10008b74[] __attribute__((aligned(16)))={0x44,0x73,0x00,0x00};
#undef DAT_10008b74
#define DAT_10008b74 (*(int *)((uintptr_t)pf_literal_10008ab4_DAT_10008b74))
static const unsigned char pf_literal_10008ab4_DAT_10008b78[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10008b78
#define DAT_10008b78 (*(int *)((uintptr_t)pf_literal_10008ab4_DAT_10008b78))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ab4
 */

void recovered_10008ab4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10008874;
  local_78 = DAT_10008b74 + 0x10008af8;
  local_70 = DAT_10008b78 + 0x10008b08;
  local_90 = 1;
  recovered_10008fc8(&uStack_94);
  recovered_100034bc(param_1);
  recovered_10008fec(&uStack_94);
  return;
}

#undef DAT_10008b74
#undef DAT_10008b78
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70

static const unsigned char pf_literal_10008b7c_DAT_10008c3c[] __attribute__((aligned(16)))={0x8c,0x72,0x00,0x00};
#undef DAT_10008c3c
#define DAT_10008c3c (*(int *)((uintptr_t)pf_literal_10008b7c_DAT_10008c3c))
static const unsigned char pf_literal_10008b7c_DAT_10008c40[] __attribute__((aligned(16)))={0x3c,0x00,0x00,0x00};
#undef DAT_10008c40
#define DAT_10008c40 (*(int *)((uintptr_t)pf_literal_10008b7c_DAT_10008c40))
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
 * Address: 0x10008b7c
 */

void recovered_10008b7c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10008874;
  local_78 = DAT_10008c3c + 0x10008bc0;
  local_70 = DAT_10008c40 + 0x10008bd0;
  local_90 = 1;
  recovered_10008fc8(&uStack_94);
  recovered_100034bc(param_1);
  recovered_10008fec(&uStack_94);
  return;
}

#undef DAT_10008c3c
#undef DAT_10008c40
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
 * Address: 0x10008c44
 */

undefined4 recovered_10008c44(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c4c
 */

uint recovered_10008c4c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c5c
 */

void recovered_10008c5c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c6c
 */

void recovered_10008c6c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010298
#define DAT_10010298 (*(uint *)(((uintptr_t)pf_module_state + 0x968U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x96cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c70
 */

undefined4 * recovered_10008c70(uint param_1)

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
  puVar1 = recovered_10003468(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100087e8();
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
      if (size == uVar6) goto LAB_10008cec;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10008cec:
  DAT_10010298 = DAT_10010298 + 1;
  if (DAT_10010298 < 2) {
    DAT_10010298 = 1;
  }
  if (DAT_1001029c == (undefined4 *)0x0) {
LAB_10008d48:
    puVar1[7] = DAT_10010298;
    puVar1[3] = DAT_1001029c;
    DAT_1001029c = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_1001029c;
    while (*(uint *)(iVar3 + 0x1c) != DAT_10010298) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10008d48;
    }
    DAT_10010298 = DAT_10010298 + 1;
    if (DAT_10010298 < 2) {
      DAT_10010298 = 1;
    }
  } while( true );
}

#undef DAT_10010298
#undef DAT_1001029c

#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x96cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d7c
 */

void recovered_10008d7c(int param_1)

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
  pvVar1 = DAT_1001029c;
  if (DAT_1001029c == pointer) {
    puVar3 = &DAT_1001029c;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_10008dd8;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10008dd8:
  recovered_100034bc(pointer);
  return;
}

#undef DAT_1001029c

#undef DAT_1001029c
#define DAT_1001029c (*(int *)(((uintptr_t)pf_module_state + 0x96cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008de0
 */

void recovered_10008de0(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001029c;
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

#undef DAT_1001029c

#undef DAT_10010290
#define DAT_10010290 (*(void * *)(((uintptr_t)pf_module_state + 0x960U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x96cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e1c
 */

void recovered_10008e1c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_10010290;
  if (DAT_10010290 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_10010290 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_10010290 + 8);
  *(undefined4 *)((int)DAT_10010290 + 8) = 0;
  DAT_10010290 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_1001029c;
  if (DAT_1001029c == pointer) {
    puVar3 = &DAT_1001029c;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_10008ec8;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10008ec8:
  recovered_100034bc(pointer);
  return;
}

#undef DAT_10010290
#undef DAT_1001029c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ed4
 */

void recovered_10008ed4(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_10008efc((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x960U)))
#undef DAT_10010294
#define DAT_10010294 (*(int * *)(((uintptr_t)pf_module_state + 0x964U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008efc
 */

void recovered_10008efc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_10010294 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_10010294;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_10009850((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_100090bc(param_1);
        puVar3 = DAT_10010290;
                    /* WARNING: Subroutine does not return */
        if (DAT_10010290 == (undefined4 *)0x0) {
          recovered_100087e8();
        }
        DAT_10010290[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
        recovered_10008efc(puVar3);
        *extraout_r0 = (int)DAT_10010294;
        DAT_10010294 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100087e8();
}

#undef DAT_10010290
#undef DAT_10010294
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x960U)))
#undef DAT_10010294
#define DAT_10010294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x964U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f90
 */

void recovered_10008f90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_10010290;
                    /* WARNING: Subroutine does not return */
  if (DAT_10010290 == (undefined4 *)0x0) {
    recovered_100087e8();
  }
  DAT_10010290[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_10008efc(puVar1);
  *extraout_r0 = DAT_10010294;
  DAT_10010294 = extraout_r0;
  return;
}

#undef DAT_10010290
#undef DAT_10010294

#undef DAT_10010294
#define DAT_10010294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x964U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fc8
 */

void recovered_10008fc8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010294;
  DAT_10010294 = param_1;
  return;
}

#undef DAT_10010294

#undef DAT_10010294
#define DAT_10010294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x964U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fec
 */

void recovered_10008fec(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10010294;
  if (DAT_10010294 == param_1) {
    puVar2 = &DAT_10010294;
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

#undef DAT_10010294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009034
 */

void recovered_10009034(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10008efc(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100087e8();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009040
 */

void recovered_10009040(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100087e8();
}


#undef DAT_10010294
#define DAT_10010294 (*(int * *)(((uintptr_t)pf_module_state + 0x964U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x96cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000904c
 */

void recovered_1000904c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_1001029c; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_10009090;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100087e8();
  }
LAB_10009090:
  if (DAT_10010294 != (int *)0x0) {
    DAT_10010294 = (int *)*DAT_10010294;
  }
  recovered_100090bc(puVar1);
  return;
}

#undef DAT_10010294
#undef DAT_1001029c

#undef DAT_10010294
#define DAT_10010294 (*(int * *)(((uintptr_t)pf_module_state + 0x964U)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090bc
 */

undefined4 recovered_100090bc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_10010294 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_10010294;
      if (DAT_10010294 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_10010294[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_10009170:
        piVar1[1] = iVar3;
        recovered_10008730((int)piVar1);
        recovered_1000904c(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_10009850((int)DAT_10010294,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_10009170;
      }
      DAT_10010294 = (int *)*piVar1;
    } while (DAT_10010294 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100087e8();
}

#undef DAT_10010294
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000917c
 */

undefined4 recovered_1000917c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000904c(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009188
 */

undefined4 recovered_10009188(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009190
 */

void recovered_10009190(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100087e8();
}


#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x730U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000919c
 */

int recovered_1000919c(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_10009288:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_10009288;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_10010060) {
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

#undef DAT_10010060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009290
 */

void recovered_10009290(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009294
 */

undefined4 recovered_10009294(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000929c
 */

bool recovered_1000929c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092b0
 */

bool recovered_100092b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092f0
 */

bool recovered_100092f0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000931c
 */

bool recovered_1000931c(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009338
 */

bool recovered_10009338(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009354
 */

bool recovered_10009354(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009370
 */

bool recovered_10009370(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


static const unsigned char pf_literal_10009390_DAT_10009460[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_10009460
#define DAT_10009460 (*(double *)((uintptr_t)pf_literal_10009390_DAT_10009460))
static const unsigned char pf_literal_10009390_DAT_10009468[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_10009468
#define DAT_10009468 (*(double *)((uintptr_t)pf_literal_10009390_DAT_10009468))
static const unsigned char pf_literal_10009390_DAT_10009470[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_10009470
#define DAT_10009470 (*(double *)((uintptr_t)pf_literal_10009390_DAT_10009470))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009390
 */

double recovered_10009390(double value)

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
  if (dVar3 <= DAT_10009468) {
    dVar4 = 0.0;
    if (DAT_10009470 <= dVar3) {
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
  return DAT_10009460;
}

#undef DAT_10009460
#undef DAT_10009468
#undef DAT_10009470

static const unsigned char pf_literal_10009478_DAT_10009560[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_10009560
#define DAT_10009560 (*(double *)((uintptr_t)pf_literal_10009478_DAT_10009560))
static const unsigned char pf_literal_10009478_DAT_10009568[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_10009568
#define DAT_10009568 (*(double *)((uintptr_t)pf_literal_10009478_DAT_10009568))
static const unsigned char pf_literal_10009478_DAT_10009570[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_10009570
#define DAT_10009570 (*(double *)((uintptr_t)pf_literal_10009478_DAT_10009570))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009478
 */

float recovered_10009478(float value)

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
  else if (dVar3 <= DAT_10009568) {
    dVar4 = 0.0;
    if (DAT_10009570 <= dVar3) {
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
    dVar4 = DAT_10009560;
  }
  return (float)dVar4;
}

#undef DAT_10009560
#undef DAT_10009568
#undef DAT_10009570

static const unsigned char pf_literal_10009578_DAT_10009648[] __attribute__((aligned(16)))={0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x7f};
#undef DAT_10009648
#define DAT_10009648 (*(double *)((uintptr_t)pf_literal_10009578_DAT_10009648))
static const unsigned char pf_literal_10009578_DAT_10009650[] __attribute__((aligned(16)))={0xef,0x39,0xfa,0xfe,0x42,0x2e,0x86,0x40};
#undef DAT_10009650
#define DAT_10009650 (*(double *)((uintptr_t)pf_literal_10009578_DAT_10009650))
static const unsigned char pf_literal_10009578_DAT_10009658[] __attribute__((aligned(16)))={0x51,0x30,0x2d,0xd5,0x10,0x49,0x87,0xc0};
#undef DAT_10009658
#define DAT_10009658 (*(double *)((uintptr_t)pf_literal_10009578_DAT_10009658))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009578
 */

double recovered_10009578(double value)

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
  if (dVar3 <= DAT_10009650) {
    dVar4 = 0.0;
    if (DAT_10009658 <= dVar3) {
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
  return DAT_10009648;
}

#undef DAT_10009648
#undef DAT_10009650
#undef DAT_10009658

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009660
 */

double recovered_10009660(long end,long start)

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
 * Address: 0x1000967c
 */

double recovered_1000967c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10004e4c(param_1,param_2);
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
 * Address: 0x100096d4
 */

ulonglong recovered_100096d4(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10009740;
    }
  }
  bVar1 = false;
joined_r0x10009740:
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
 * Address: 0x1000984c
 */

ulonglong recovered_1000984c(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10009740;
    }
  }
  bVar1 = false;
joined_r0x10009740:
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


#undef DAT_1000fe60
#define DAT_1000fe60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x530U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x730U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009850
 */

undefined4 recovered_10009850(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_10009c04((uint)*pbVar10,&local_28);
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
          goto LAB_10009a28;
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
LAB_10009a28:
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
LAB_10009be4:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000fe60 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10009c04(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_10009be4;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10009be4;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10009be4;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010060) goto LAB_10009bb8;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_10009be4;
  }
LAB_10009bb8:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10009a28;
}

#undef DAT_1000fe60
#undef DAT_10010060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c04
 */

undefined4 * recovered_10009c04(uint param_1,undefined4 *param_2)

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
      goto switchD_10009c34_caseD_5;
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
switchD_10009c34_caseD_5:
  return puVar5;
}


#undef str_1000fa4d
#define str_1000fa4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009da0
 */

char * recovered_10009da0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return str_1000fa4d;
}

#undef str_1000fa4d

#undef DAT_1000f95f
#define DAT_1000f95f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
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
#define auStack_34 (*(undefined1 (*)[52])(pf_stack_frame + 28))
#define iStack_28 (*(int *)(pf_stack_frame + 40))
#define iStack_24 (*(int *)(pf_stack_frame + 44))
#define local_2c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009db0(void *context,void *io,char *hostname)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong count;
  int iVar2;
  uint uVar3;
  char *text;
  undefined8 uVar4;

  if (context == (void *)0x0) {
    return;
  }
  recovered_10003cf0(context,0,0x1f8);
  if (io != (void *)0x0) {
    uVar4 = *(undefined8 *)((int)io + 8);
    uVar1 = *(undefined4 *)((int)io + 0x10);
    *(undefined8 *)context = *(undefined8 *)io;
    *(undefined8 *)((int)context + 8) = uVar4;
    *(undefined4 *)((int)context + 0x10) = uVar1;
  }
  text = &DAT_1000f95f;
  if (hostname != (char *)0x0) {
    text = hostname;
  }
  count = recovered_10004624(text);
  if (0x7e < count) {
    count = 0x7f;
  }
  recovered_10003560((void *)((int)context + 0x14),text,count);
  *(undefined1 *)((int)context + 0x14 + count) = 0;
  recovered_10003cf0(auStack_34,0,0x18);
  uVar3 = 0x574d544c;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
     ((_DAT_40010968 != (code *)0x0 && (iVar2 = (*_DAT_40010968)(auStack_34), iVar2 != 0)))) {
    uVar3 = local_2c ^ iStack_28 * 0x3c6ef35f ^ iStack_24 * 0x19660d ^ 0x574d544c;
  }
  *(uint *)((int)context + 0x1f0) = uVar3 ^ (uint)context ^ *(uint *)((int)context + 0x1f0);
  return;
}

#undef DAT_1000f95f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef auStack_34
#undef iStack_28
#undef iStack_24
#undef local_2c

static const unsigned char pf_literal_10009f00_DAT_1000a530[] __attribute__((aligned(16)))={0x7f,0x52,0x0e,0x51,0x8c,0x68,0x05,0x9b};
#undef DAT_1000a530
#define DAT_1000a530 (*(uint64_t *)((uintptr_t)pf_literal_10009f00_DAT_1000a530))
static const unsigned char pf_literal_10009f00_DAT_1000a538[] __attribute__((aligned(16)))={0xab,0xd9,0x83,0x1f,0x19,0xcd,0xe0,0x5b};
#undef DAT_1000a538
#define DAT_1000a538 (*(uint64_t *)((uintptr_t)pf_literal_10009f00_DAT_1000a538))
static const unsigned char pf_literal_10009f00_DAT_1000a540[] __attribute__((aligned(16)))={0x67,0xe6,0x09,0x6a,0x85,0xae,0x67,0xbb};
#undef DAT_1000a540
#define DAT_1000a540 (*(uint64_t *)((uintptr_t)pf_literal_10009f00_DAT_1000a540))
static const unsigned char pf_literal_10009f00_DAT_1000a548[] __attribute__((aligned(16)))={0x72,0xf3,0x6e,0x3c,0x3a,0xf5,0x4f,0xa5};
#undef DAT_1000a548
#define DAT_1000a548 (*(uint64_t *)((uintptr_t)pf_literal_10009f00_DAT_1000a548))
#undef DAT_1000fe94
#define DAT_1000fe94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x564U)))
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
#undef str_1000f9e1
#define str_1000f9e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000fa7b
#define str_1000fa7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bU)))
#undef str_1000fa96
#define str_1000fa96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_1000fab3
#define str_1000fab3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_1000fabb
#define str_1000fabb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_1000fac8
#define str_1000fac8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x198U)))
#undef str_1000fb09
#define str_1000fb09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d9U)))
#undef str_1000fb2b
#define str_1000fb2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#define local_58c (*(uint *)(pf_stack_frame + 212))
#define local_588 (*(undefined1 *)(pf_stack_frame + 216))
#define local_587 (*(undefined1 *)(pf_stack_frame + 217))
#define local_586 (*(undefined1 *)(pf_stack_frame + 218))
#define local_585 (*(undefined1 *)(pf_stack_frame + 219))
#define local_584 (*(undefined2 *)(pf_stack_frame + 220))
#define local_562 (*(undefined4 *)(pf_stack_frame + 254))
#define local_55e (*(undefined2 *)(pf_stack_frame + 258))
#define local_55c (*(undefined1 *)(pf_stack_frame + 260))
#define local_55b (*(undefined1 *)(pf_stack_frame + 261))
#define local_55a (*(undefined1 *)(pf_stack_frame + 262))
#define local_348 (*(uint *)(pf_stack_frame + 792))
#define local_344 (*(undefined4 *)(pf_stack_frame + 796))
#define local_340 (*(undefined4 *)(pf_stack_frame + 800))
#define local_33c (*(undefined2 *)(pf_stack_frame + 804))
#define local_228 (*(ushort *)(pf_stack_frame + 1080))
#define local_226 (*(undefined1 *)(pf_stack_frame + 1082))
#define local_225 (*(undefined1 *)(pf_stack_frame + 1083))
#define local_224 (*(undefined4 *)(pf_stack_frame + 1084))
#define auStack_64c (*(undefined1 (*)[1612])(pf_stack_frame + 20))
#define auStack_62c (*(undefined1 (*)[1580])(pf_stack_frame + 52))
#define auStack_60c (*(undefined1 (*)[1548])(pf_stack_frame + 84))
#define auStack_5ec (*(undefined1 (*)[1516])(pf_stack_frame + 116))
#define auStack_5cc (*(undefined1 (*)[1484])(pf_stack_frame + 148))
#define auStack_5ac (*(undefined1 (*)[1452])(pf_stack_frame + 180))
#define auStack_582 (*(undefined1 (*)[1410])(pf_stack_frame + 222))
#define auStack_559 (*(undefined1 (*)[1369])(pf_stack_frame + 263))
#define auStack_388 (*(undefined1 (*)[904])(pf_stack_frame + 728))
#define auStack_368 (*(undefined1 (*)[872])(pf_stack_frame + 760))
#define auStack_248 (*(undefined1 (*)[584])(pf_stack_frame + 1048))
#define auStack_220 (*(undefined1 (*)[544])(pf_stack_frame + 1088))
#define uStack_21d (*(undefined4 *)(pf_stack_frame + 1091))
#define auStack_219 (*(undefined1 (*)[537])(pf_stack_frame + 1095))
#define uStack_215 (*(undefined4 *)(pf_stack_frame + 1099))
#define auStack_211 (*(undefined1 (*)[529])(pf_stack_frame + 1103))
#define uStack_203 (*(undefined4 *)(pf_stack_frame + 1117))
#define auStack_1ff (*(undefined1 (*)[511])(pf_stack_frame + 1121))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10009f00(void *context,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[1664] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *context_00;
  byte *pointer;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;

  local_58c = 0;
  if (context != (void *)0x0) {
    bVar9 = *(int *)((int)context + 4) != 0;
    iVar7 = 0;
    if (bVar9) {
      iVar7 = *(int *)((int)context + 8);
    }
    if ((bVar9 && iVar7 != 0) && (pcVar6 = (char *)((int)context + 0x14), *pcVar6 != '\0')) {
      uVar4 = recovered_10004624(pcVar6);
      if (uVar4 - 0xb5 < 0xffffff4b || uVar4 == 0) {
        pcVar6 = str_1000fa96;
      }
      else {
        context_00 = (undefined8 *)((int)context + 0x94);
        recovered_1000db60(context,auStack_248);
        recovered_1000db60(context,auStack_368);
        recovered_1000aab0(auStack_388,auStack_368,&DAT_1000fe94);
        recovered_10003cf0(&local_228,0,0x200);
        recovered_10003cf0(&local_348,0,0x100);
        local_344 = CONCAT31(PF_PART3(local_344, 1),(char)uVar4);
        local_348 = CONCAT31((int3)(uVar4 + 3),(char)(uVar4 + 3 >> 8)) & 0xffff;
        recovered_10003560((void *)((int)&local_344 + 1),pcVar6,uVar4);
        uVar8 = uVar4 + 5;
        local_225 = (undefined1)uVar8;
        local_226 = (undefined1)(uVar8 >> 8);
        local_228 = 0;
        recovered_10003560(&local_224,&local_348,uVar8 & 0xffff);
        uVar5 = uVar8 & 0xffff;
        *(undefined4 *)(auStack_220 + (uVar5 - 4)) = 0x3002b00;
        local_348 = CONCAT13(PF_PART1(local_348, 3),0x40302);
        recovered_10003560(auStack_220 + uVar5,&local_348,3);
        *(undefined4 *)(auStack_220 + uVar5 + 3) = 0x4000a00;
        local_348 = 0x1d000200;
        recovered_10003560(auStack_219 + uVar5,&local_348,4);
        *(undefined4 *)(auStack_219 + uVar5 + 4) = 0xe000d00;
        local_33c = 0x608;
        local_340 = 0x5080105;
        local_344 = 0x1040408;
        local_348 = 0x3040c00;
        recovered_10003560(auStack_211 + uVar5,&local_348,0xe);
        local_344 = CONCAT22(PF_PART2(local_344, 2),0x2000);
        local_348 = 0x1d002400;
        recovered_10003560((void *)((int)&local_344 + 2),auStack_388,0x20);
        *(undefined4 *)(auStack_211 + uVar5 + 0xe) = 0x26003300;
        recovered_10003560(auStack_1ff + uVar5,&local_348,0x26);
        local_584 = 0x303;
        local_588 = 1;
        recovered_10003560(auStack_582,auStack_248,0x20);
        uVar4 = (uVar8 & 0xffff) + 0x4f;
        local_55a = (undefined1)uVar4;
        local_55c = 0;
        local_55b = (undefined1)(uVar4 >> 8);
        local_55e = 0x103;
        local_562 = 0x13020000;
        recovered_10003560(auStack_559,&local_228,uVar4);
        uVar3 = DAT_1000a548;
        uVar2 = DAT_1000a538;
        uVar1 = DAT_1000a530;
        iVar7 = (uVar8 & 0xffff) + 0x7a;
        local_585 = (undefined1)iVar7;
        local_586 = (undefined1)((uint)iVar7 >> 8);
        local_587 = 0;
        *context_00 = DAT_1000a540;
        *(undefined8 *)((int)context + 0x9c) = uVar3;
        *(undefined8 *)((int)context + 0xa4) = uVar1;
        *(undefined8 *)((int)context + 0xac) = uVar2;
        *(undefined4 *)((int)context + 0xb8) = 0;
        *(undefined4 *)((int)context + 0xb4) = 0;
        uVar4 = (uVar8 & 0xffff) + 0x7e;
        *(undefined4 *)((int)context + 0xfc) = 0;
        recovered_1000a550(context_00,&local_588,uVar4);
        local_225 = (undefined1)(uVar4 >> 8);
        local_228 = 0x316;
        PF_PART1(local_224, 0) = (undefined1)uVar4;
        local_226 = 1;
        recovered_10003560((void *)((int)&local_224 + 1),&local_588,uVar4);
        if (*(code **)((int)context + 8) == (code *)0x0) {
          pcVar6 = str_1000fb09;
        }
        else {
          iVar7 = (**(code **)((int)context + 8))
                            (*(undefined4 *)context,&local_228,(uVar8 & 0xffff) + 0x83,error,
                             capacity);
          if (iVar7 == 0) {
            return 0;
          }
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
             ((_DAT_4001084c != (code *)0x0 &&
              (pointer = (byte *)(*_DAT_4001084c)(0x4100), pointer != (byte *)0x0)))) {
            local_228 = local_228 & 0xff00;
            uVar5 = recovered_1000d2b4(context,(void *)0x0,(byte *)&local_228,pointer,0x4100,
                                       &local_58c,error,capacity);
            if (uVar5 != 0) {
              if ((char)local_228 == '\x16') {
                iVar7 = recovered_1000a840((char *)pointer,local_58c,&local_348,error,capacity);
                if (iVar7 != 0) {
                  recovered_1000a550(context_00,pointer,local_58c);
                  recovered_1000a7f0(pointer);
                  recovered_1000aab0(auStack_248,auStack_368,&local_348);
                  recovered_10003cf0(auStack_5ac,0,0x20);
                  recovered_1000c030(auStack_5ac,auStack_5ac,auStack_5cc);
                  recovered_1000c0d0(auStack_5cc,str_1000fab3,(void *)0x0,auStack_5ec);
                  recovered_1000c030(auStack_5ec,auStack_248,auStack_60c);
                  recovered_10003560(&local_228,context_00,0x6c);
                  recovered_1000e9d0(&local_228,auStack_62c);
                  recovered_1000eb08(auStack_60c,str_1000fabb,auStack_62c,0x20,&local_228,0x20);
                  recovered_1000eb08(auStack_60c,str_1000fac8,auStack_62c,0x20,auStack_64c,0x20);
                  recovered_1000c190((void *)((int)context + 0x100),&local_228);
                  recovered_1000c190((void *)((int)context + 0x134),auStack_64c);
                  *(undefined1 *)((int)context + 500) = 1;
                  iVar7 = recovered_1000c230(context,auStack_64c,auStack_60c,&local_228,error,
                                             capacity);
                  if (iVar7 == 0) {
                    return 0;
                  }
                  if (*(code **)((int)context + 0x10) == (code *)0x0) {
                    return 1;
                  }
                  iVar7 = (**(code **)((int)context + 0x10))
                                    (*(undefined4 *)context,pcVar6,(int)context + 0x1d0,
                                     *(undefined1 *)((int)context + 0x1f6),error,capacity);
                  return (uint)(iVar7 != 0);
                }
              }
              else {
                recovered_10006d08(error,capacity,str_1000fb2b);
              }
            }
            recovered_1000a7f0(pointer);
            return 0;
          }
          pcVar6 = str_1000f9e1;
        }
      }
      goto LAB_10009f54;
    }
  }
  pcVar6 = str_1000fa7b;
LAB_10009f54:
  recovered_10006d08(error,capacity,pcVar6);
  return 0;
}

#undef DAT_1000a530
#undef DAT_1000a538
#undef DAT_1000a540
#undef DAT_1000a548
#undef DAT_1000fe94
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef str_1000f9e1
#undef str_1000fa7b
#undef str_1000fa96
#undef str_1000fab3
#undef str_1000fabb
#undef str_1000fac8
#undef str_1000fb09
#undef str_1000fb2b
#undef local_58c
#undef local_588
#undef local_587
#undef local_586
#undef local_585
#undef local_584
#undef local_562
#undef local_55e
#undef local_55c
#undef local_55b
#undef local_55a
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_228
#undef local_226
#undef local_225
#undef local_224
#undef auStack_64c
#undef auStack_62c
#undef auStack_60c
#undef auStack_5ec
#undef auStack_5cc
#undef auStack_5ac
#undef auStack_582
#undef auStack_559
#undef auStack_388
#undef auStack_368
#undef auStack_248
#undef auStack_220
#undef uStack_21d
#undef auStack_219
#undef uStack_215
#undef auStack_211
#undef uStack_203
#undef auStack_1ff

#undef DAT_1000feb4
#define DAT_1000feb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x584U)))
#define local_124 (*(uint (*)[73])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a550
 */

void recovered_1000a550(void *context,void *data,ulong size)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;

  if (context == (void *)0x0) {
    return;
  }
  if ((data != (void *)0x0) || (size == 0)) {
    uVar3 = *(uint *)((int)context + 0x20);
    *(uint *)((int)context + 0x20) = uVar3 + size;
    *(uint *)((int)context + 0x24) = *(int *)((int)context + 0x24) + (uint)CARRY4(uVar3,size);
    if (size != 0) {
      iVar4 = *(int *)((int)context + 0x68);
      do {
        uVar3 = 0x40U - iVar4;
        if (size <= 0x40U - iVar4) {
          uVar3 = size;
        }
        recovered_10003560((void *)((int)context + iVar4 + 0x28),data,uVar3);
        iVar4 = *(int *)((int)context + 0x68) + uVar3;
        *(int *)((int)context + 0x68) = iVar4;
        if (iVar4 == 0x40) {
          iVar4 = 0;
          do {
            uVar5 = *(uint *)((int)context + iVar4 + 0x28);
            *(uint *)((int)local_124 + iVar4) =
                 uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0x40);
          iVar4 = 0;
          uVar5 = local_124[0];
          do {
            bVar17 = iVar4 != -0x2f;
            uVar9 = local_124[0xe - iVar4];
            uVar8 = local_124[1 - iVar4];
            local_124[0x10 - iVar4] =
                 local_124[9 - iVar4] + uVar5 +
                 ((uVar8 >> 7 | uVar8 << 0x19) ^ (uVar8 >> 0x12 | uVar8 << 0xe) ^ uVar8 >> 3) +
                 ((uVar9 >> 0x11 | uVar9 << 0xf) ^ (uVar9 >> 0x13 | uVar9 << 0xd) ^ uVar9 >> 10);
            iVar4 = iVar4 + -1;
            uVar5 = uVar8;
          } while (bVar17);
          iVar4 = 0;
          uVar5 = *(uint *)context;
          uVar8 = *(uint *)((int)context + 4);
          uVar9 = *(uint *)((int)context + 0x14);
          uVar10 = *(uint *)((int)context + 0x1c);
          uVar12 = *(uint *)((int)context + 0xc);
          uVar6 = *(uint *)((int)context + 8);
          uVar15 = *(uint *)((int)context + 0x10);
          uVar7 = *(uint *)((int)context + 0x18);
          do {
            uVar16 = uVar7;
            uVar14 = uVar15;
            uVar13 = uVar6;
            uVar7 = uVar9;
            uVar6 = uVar8;
            uVar8 = uVar5;
            puVar1 = local_124 + iVar4;
            piVar2 = &DAT_1000feb4 + iVar4;
            iVar4 = iVar4 + 1;
            iVar11 = uVar10 + ((uVar14 >> 6 | uVar14 << 0x1a) ^ (uVar14 >> 0xb | uVar14 << 0x15) ^
                              (uVar14 >> 0x19 | uVar14 << 7)) + (uVar16 & ~uVar14 | uVar7 & uVar14)
                     + *piVar2 + *puVar1;
            uVar15 = iVar11 + uVar12;
            uVar5 = ((uVar13 ^ uVar6) & uVar8 ^ uVar13 & uVar6) +
                    ((uVar8 >> 2 | uVar8 << 0x1e) ^ (uVar8 >> 0xd | uVar8 << 0x13) ^
                    (uVar8 >> 0x16 | uVar8 << 10)) + iVar11;
            uVar9 = uVar14;
            uVar10 = uVar16;
            uVar12 = uVar13;
          } while (iVar4 != 0x40);
          *(uint *)((int)context + 0x1c) = uVar16 + *(uint *)((int)context + 0x1c);
          *(uint *)((int)context + 0x18) = uVar7 + *(uint *)((int)context + 0x18);
          *(uint *)((int)context + 0x14) = uVar14 + *(uint *)((int)context + 0x14);
          *(uint *)((int)context + 0x10) = uVar15 + *(uint *)((int)context + 0x10);
          *(uint *)((int)context + 0xc) = uVar13 + *(uint *)((int)context + 0xc);
          *(uint *)((int)context + 8) = uVar6 + *(uint *)((int)context + 8);
          *(uint *)((int)context + 4) = uVar8 + *(uint *)((int)context + 4);
          iVar4 = 0;
          *(uint *)context = uVar5 + *(uint *)context;
          *(undefined4 *)((int)context + 0x68) = 0;
        }
        size = size - uVar3;
        data = (void *)((int)data + uVar3);
      } while (size != 0);
    }
  }
  return;
}

#undef DAT_1000feb4
#undef local_124

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
 * Address: 0x1000a7f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a7f0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000a83c. Too many branches */
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

#undef str_1000fb49
#define str_1000fb49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x219U)))
#undef str_1000fb62
#define str_1000fb62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x232U)))
#undef str_1000fb7c
#define str_1000fb7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_1000fb98
#define str_1000fb98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x268U)))
#undef str_1000fbb2
#define str_1000fbb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x282U)))
#undef str_1000fbde
#define str_1000fbde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aeU)))
#undef str_1000fbf7
#define str_1000fbf7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e0U)))
#undef str_1000fc26
#define str_1000fc26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a840
 */

undefined4 recovered_1000a840(char *param_1,uint param_2,void *param_3,char *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  byte bVar3;
  char *format;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  format = str_1000fb49;
  if ((3 < param_2) && (*param_1 == '\x02')) {
    format = str_1000fb62;
    uVar6 = (uint)(byte)param_1[2] << 8 | (uint)(byte)param_1[1] << 0x10 | (uint)(byte)param_1[3];
    if ((0x25 < uVar6) && (uVar6 + 4 <= param_2)) {
      cVar1 = param_1[4];
      format = str_1000fb7c;
      bVar10 = cVar1 == '\x03';
      if (bVar10) {
        cVar1 = param_1[5];
      }
      if (bVar10 && cVar1 == '\x03') {
        uVar6 = (uint)(byte)param_1[0x26];
        if (param_2 < uVar6 + 0x2b) {
          format = str_1000fb98;
        }
        else if (((uint)*(ushort *)(param_1 + uVar6 + 0x27) << 0x18 |
                 (uint)(*(ushort *)(param_1 + uVar6 + 0x27) >> 8) << 0x10) == 0x13030000) {
          format = str_1000fbde;
          if ((param_1[uVar6 + 0x29] == '\0') && (uVar8 = uVar6 + 0x2c, uVar8 <= param_2)) {
            uVar9 = uVar8 + (((uint)*(ushort *)(param_1 + uVar6 + 0x2a) << 0x18 |
                             (uint)(*(ushort *)(param_1 + uVar6 + 0x2a) >> 8) << 0x10) >> 0x10);
            if (param_2 < uVar9) {
              format = str_1000fbf7;
            }
            else {
              uVar6 = uVar6 + 0x30;
              format = str_1000fc26;
              if (uVar6 <= uVar9) {
                bVar3 = 0;
                bVar10 = false;
                do {
                  uVar5 = *(ushort *)(param_1 + uVar8);
                  uVar2 = *(ushort *)((int)(param_1 + uVar8) + 2);
                  uVar8 = uVar6 + (((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10);
                  if (uVar9 < uVar8) {
                    format = str_1000fc10;
                    goto LAB_1000a8cc;
                  }
                  uVar5 = uVar5 << 8 | uVar5 >> 8;
                  uVar4 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                  if ((uVar5 == 0x2b) && (1 < uVar4)) {
                    bVar10 = ((uint)*(ushort *)(param_1 + uVar6) << 0x18 |
                             (uint)(*(ushort *)(param_1 + uVar6) >> 8) << 0x10) == 0x3040000;
                  }
                  else if ((uVar5 == 0x33) &&
                          (((0x23 < uVar4 &&
                            (puVar7 = (ushort *)(param_1 + uVar6),
                            ((uint)*puVar7 << 0x18 | (uint)(*puVar7 >> 8) << 0x10) == 0x1d0000)) &&
                           (((uint)puVar7[1] << 0x18 | (uint)(puVar7[1] >> 8) << 0x10) == 0x200000))
                          )) {
                    recovered_10003560(param_3,puVar7 + 2,0x20);
                    bVar3 = 1;
                  }
                  uVar6 = uVar8 + 4;
                } while (uVar6 <= uVar9);
                if ((bool)(bVar10 & bVar3)) {
                  return 1;
                }
              }
            }
          }
        }
        else {
          format = str_1000fbb2;
        }
      }
    }
  }
LAB_1000a8cc:
  recovered_10006d08(param_4,param_5,format);
  return 0;
}

#undef str_1000fb49
#undef str_1000fb62
#undef str_1000fb7c
#undef str_1000fb98
#undef str_1000fbb2
#undef str_1000fbde
#undef str_1000fbf7
#undef str_1000fc10
#undef str_1000fc26

/* Recovered X25519 over the reference's seventeen radix-2^15 limbs.
 * Pooka's Free Software License. */
typedef struct {uint32_t limb[17];} pf_tls_field;
static pf_tls_field pf_tls_reduce(uint64_t value[17]){
 for(unsigned pass=0;pass<4;++pass){
  uint64_t carry=0;
  for(unsigned i=0;i<17;++i){uint64_t word=value[i]+carry;value[i]=word&32767;carry=word>>15;}
  value[0]+=19*carry;
 }
 pf_tls_field out;
 for(unsigned i=0;i<17;++i)out.limb[i]=(uint32_t)value[i];
 unsigned top=1;for(unsigned i=1;i<17;++i)top&=out.limb[i]==32767;
 if(top&&out.limb[0]>=32749){out.limb[0]-=32749;for(unsigned i=1;i<17;++i)out.limb[i]=0;}
 return out;
}
static pf_tls_field pf_tls_add(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_sub(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+2*(i?32767:32749)-b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_mul(pf_tls_field a,pf_tls_field b){
 uint64_t words[34]={0};
 for(unsigned i=0;i<17;++i)for(unsigned j=0;j<17;++j)words[i+j]+=(uint64_t)a.limb[i]*b.limb[j];
 for(unsigned i=33;i>16;--i)words[i-17]+=19*words[i];
 return pf_tls_reduce(words);
}
static void pf_tls_swap(pf_tls_field *a,pf_tls_field *b,unsigned bit){
 uint32_t mask=0U-bit;for(unsigned i=0;i<17;++i){uint32_t change=mask&(a->limb[i]^b->limb[i]);a->limb[i]^=change;b->limb[i]^=change;}
}
void recovered_1000aab0(void *output,void *scalar,void *point){
 if(!output||!scalar||!point)return;
 uint8_t key[32];for(unsigned i=0;i<32;++i)key[i]=((uint8_t *)scalar)[i];key[0]&=248;key[31]=(key[31]&127)|64;
 pf_tls_field x1={{0}},x2={{1}},z2={{0}},x3,z3={{1}},a24={{121665&32767,121665>>15}};
 for(unsigned i=0;i<255;++i)x1.limb[i/15]|=(uint32_t)((((uint8_t *)point)[i/8]>>(i&7))&1)<<(i%15);
 x3=x1;unsigned previous=0;
 for(int i=254;i>=0;--i){
  unsigned bit=(key[i/8]>>(i&7))&1;pf_tls_swap(&x2,&x3,previous^bit);pf_tls_swap(&z2,&z3,previous^bit);previous=bit;
  pf_tls_field a=pf_tls_add(x2,z2),b=pf_tls_sub(x2,z2),aa=pf_tls_mul(a,a),bb=pf_tls_mul(b,b),e=pf_tls_sub(aa,bb);
  pf_tls_field c=pf_tls_add(x3,z3),d=pf_tls_sub(x3,z3),da=pf_tls_mul(d,a),cb=pf_tls_mul(c,b);
  pf_tls_field sum=pf_tls_add(da,cb),difference=pf_tls_sub(da,cb);
  x3=pf_tls_mul(sum,sum);z3=pf_tls_mul(x1,pf_tls_mul(difference,difference));x2=pf_tls_mul(aa,bb);z2=pf_tls_mul(e,pf_tls_add(aa,pf_tls_mul(a24,e)));
 }
 pf_tls_swap(&x2,&x3,previous);pf_tls_swap(&z2,&z3,previous);
 pf_tls_field inverse={{1}};
 for(int bit=254;bit>=0;--bit){inverse=pf_tls_mul(inverse,inverse);if(bit!=4&&bit!=2)inverse=pf_tls_mul(inverse,z2);}
 pf_tls_field result=pf_tls_mul(x2,inverse);
 for(unsigned i=0;i<32;++i)((uint8_t *)output)[i]=0;
 for(unsigned i=0;i<255;++i)((uint8_t *)output)[i/8]|=(uint8_t)(((result.limb[i/15]>>(i%15))&1)<<(i&7));
}


#define auStack_138 (*(undefined1 (*)[312])(pf_stack_frame + 24))
#define auStack_118 (*(undefined1 (*)[280])(pf_stack_frame + 56))
#define auStack_f8 (*(undefined1 (*)[248])(pf_stack_frame + 88))
#define auStack_8c (*(undefined1 (*)[140])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c030
 */

void recovered_1000c030(void *salt,void *input,void *output)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    recovered_10003cf0(auStack_138,0,0x20);
    salt = auStack_138;
  }
  recovered_1000e850(auStack_8c,auStack_f8,salt);
  recovered_1000a550(auStack_8c,input,0x20);
  recovered_1000e9d0(auStack_8c,auStack_118);
  recovered_1000a550(auStack_f8,auStack_118,0x20);
  recovered_1000e9d0(auStack_f8,output);
  return;
}

#undef auStack_138
#undef auStack_118
#undef auStack_f8
#undef auStack_8c

static const unsigned char pf_literal_1000c0d0_DAT_1000c170[] __attribute__((aligned(16)))={0x7f,0x52,0x0e,0x51,0x8c,0x68,0x05,0x9b};
#undef DAT_1000c170
#define DAT_1000c170 (*(uint64_t *)((uintptr_t)pf_literal_1000c0d0_DAT_1000c170))
static const unsigned char pf_literal_1000c0d0_DAT_1000c178[] __attribute__((aligned(16)))={0xab,0xd9,0x83,0x1f,0x19,0xcd,0xe0,0x5b};
#undef DAT_1000c178
#define DAT_1000c178 (*(uint64_t *)((uintptr_t)pf_literal_1000c0d0_DAT_1000c178))
static const unsigned char pf_literal_1000c0d0_DAT_1000c180[] __attribute__((aligned(16)))={0x67,0xe6,0x09,0x6a,0x85,0xae,0x67,0xbb};
#undef DAT_1000c180
#define DAT_1000c180 (*(uint64_t *)((uintptr_t)pf_literal_1000c0d0_DAT_1000c180))
static const unsigned char pf_literal_1000c0d0_DAT_1000c188[] __attribute__((aligned(16)))={0x72,0xf3,0x6e,0x3c,0x3a,0xf5,0x4f,0xa5};
#undef DAT_1000c188
#define DAT_1000c188 (*(uint64_t *)((uintptr_t)pf_literal_1000c0d0_DAT_1000c188))
#define local_84 (*(undefined8 *)(pf_stack_frame + 60))
#define local_74 (*(undefined8 *)(pf_stack_frame + 76))
#define uStack_7c (*(undefined8 *)(pf_stack_frame + 68))
#define local_64 (*(undefined4 *)(pf_stack_frame + 92))
#define local_60 (*(undefined4 *)(pf_stack_frame + 96))
#define uStack_6c (*(undefined8 *)(pf_stack_frame + 84))
#define local_1c (*(undefined4 *)(pf_stack_frame + 164))
#define auStack_a4 (*(undefined1 (*)[164])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0d0
 */

void recovered_1000c0d0(void *secret,char *label,void *hash,void *output)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};


  if (hash == (void *)0x0) {
    local_74 = DAT_1000c170;
    uStack_6c = DAT_1000c178;
    hash = auStack_a4;
    local_60 = 0;
    local_64 = 0;
    local_84 = DAT_1000c180;
    uStack_7c = DAT_1000c188;
    local_1c = 0;
    recovered_1000e9d0(&local_84,hash);
  }
  recovered_1000eb08(secret,label,hash,0x20,output,0x20);
  return;
}

#undef DAT_1000c170
#undef DAT_1000c178
#undef DAT_1000c180
#undef DAT_1000c188
#undef local_84
#undef local_74
#undef uStack_7c
#undef local_64
#undef local_60
#undef uStack_6c
#undef local_1c
#undef auStack_a4

#undef DAT_1000fc59
#define DAT_1000fc59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329U)))
#undef DAT_1000fc5d
#define DAT_1000fc5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c190
 */

void recovered_1000c190(void *output,void *secret)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (output == (void *)0x0) {
    return;
  }
  if (secret != (void *)0x0) {
    recovered_10003cf0(output,0,0x34);
    recovered_1000eb08(secret,&DAT_1000fc59,(void *)0x0,0,output,0x20);
    recovered_1000eb08(secret,&DAT_1000fc5d,(void *)0x0,0,(void *)((int)output + 0x20),0xc);
    *(undefined4 *)((int)output + 0x30) = 0;
    *(undefined4 *)((int)output + 0x2c) = 0;
  }
  return;
}

#undef DAT_1000fc59
#undef DAT_1000fc5d

static const unsigned char pf_literal_1000c230_DAT_1000c830[] __attribute__((aligned(16)))={0x7f,0x52,0x0e,0x51,0x8c,0x68,0x05,0x9b};
#undef DAT_1000c830
#define DAT_1000c830 (*(uint64_t *)((uintptr_t)pf_literal_1000c230_DAT_1000c830))
static const unsigned char pf_literal_1000c230_DAT_1000c838[] __attribute__((aligned(16)))={0xab,0xd9,0x83,0x1f,0x19,0xcd,0xe0,0x5b};
#undef DAT_1000c838
#define DAT_1000c838 (*(uint64_t *)((uintptr_t)pf_literal_1000c230_DAT_1000c838))
static const unsigned char pf_literal_1000c230_DAT_1000c840[] __attribute__((aligned(16)))={0x67,0xe6,0x09,0x6a,0x85,0xae,0x67,0xbb};
#undef DAT_1000c840
#define DAT_1000c840 (*(uint64_t *)((uintptr_t)pf_literal_1000c230_DAT_1000c840))
static const unsigned char pf_literal_1000c230_DAT_1000c848[] __attribute__((aligned(16)))={0x72,0xf3,0x6e,0x3c,0x3a,0xf5,0x4f,0xa5};
#undef DAT_1000c848
#define DAT_1000c848 (*(uint64_t *)((uintptr_t)pf_literal_1000c230_DAT_1000c848))
#undef DAT_1000fc59
#define DAT_1000fc59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329U)))
#undef DAT_1000fc5d
#define DAT_1000fc5d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
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
#undef str_1000f9e1
#define str_1000f9e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000fab3
#define str_1000fab3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_1000fc60
#define str_1000fc60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#undef str_1000fc76
#define str_1000fc76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#undef str_1000fc8e
#define str_1000fc8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35eU)))
#undef str_1000fcaa
#define str_1000fcaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_1000fcb3
#define str_1000fcb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x383U)))
#undef str_1000fcd4
#define str_1000fcd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a4U)))
#undef str_1000fce1
#define str_1000fce1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#define auStack_2a0 (*(undefined1 (*)[672])(pf_stack_frame + 16))
#define auStack_280 (*(undefined1 (*)[640])(pf_stack_frame + 48))
#define auStack_25c (*(undefined1 (*)[604])(pf_stack_frame + 84))
#define auStack_23c (*(undefined1 (*)[572])(pf_stack_frame + 116))
#define auStack_21c (*(undefined1 (*)[540])(pf_stack_frame + 148))
#define auStack_1fc (*(undefined1 (*)[508])(pf_stack_frame + 180))
#define auStack_1dc (*(undefined1 (*)[476])(pf_stack_frame + 212))
#define auStack_1bc (*(undefined1 (*)[444])(pf_stack_frame + 244))
#define auStack_15c (*(undefined1 (*)[348])(pf_stack_frame + 340))
#define auStack_13c (*(undefined1 (*)[316])(pf_stack_frame + 372))
#define auStack_fc (*(undefined1 (*)[252])(pf_stack_frame + 436))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 552))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 568))
#define local_260 (*(undefined4 *)(pf_stack_frame + 80))
#define local_19c (*(byte (*)[412])(pf_stack_frame + 276))
#define local_17c (*(undefined1 (*)[380])(pf_stack_frame + 308))
#define local_16c (*(undefined1 (*)[364])(pf_stack_frame + 324))
#define local_11c (*(uint (*)[71])(pf_stack_frame + 404))
#define local_90 (*(undefined8 *)(pf_stack_frame + 544))
#define local_80 (*(undefined8 *)(pf_stack_frame + 560))
#define local_70 (*(undefined4 *)(pf_stack_frame + 576))
#define local_6c (*(undefined4 *)(pf_stack_frame + 580))
#define local_28 (*(undefined4 *)(pf_stack_frame + 648))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c230
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000c230(undefined4 *param_1,void *param_2,void *param_3,void *param_4,char *param_5,
                      ulong param_6)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *source;
  byte *source_00;
  void *destination;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  uint128 auVar11;

  source_00 = (byte *)0x0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
     (_DAT_4001084c != (code *)0x0)) {
    source_00 = (byte *)(*_DAT_4001084c)(0x4100);
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x4f < _DAT_40010808 && (_DAT_4001084c != (code *)0x0)))) {
    destination = (void *)(*_DAT_4001084c)(0x8000);
    bVar9 = destination != (void *)0x0;
    if (source_00 != (byte *)0x0 && destination != (void *)0x0) {
      local_19c[0] = 0;
      local_11c[0] = 0;
      uVar1 = recovered_1000d2b4(param_1,param_1 + 0x4d,local_19c,source_00,0x4100,local_11c,param_5
                                 ,param_6);
      if (uVar1 != 0) {
        uVar1 = 0;
        source = param_1 + 0x25;
        do {
          if (local_19c[0] == 0x16) {
            if (0x8000 - uVar1 < local_11c[0]) {
              pcVar6 = str_1000fc76;
              goto LAB_1000cc18;
            }
            recovered_10003560((void *)((int)destination + uVar1),source_00,local_11c[0]);
            uVar1 = local_11c[0] + uVar1;
            if (3 < uVar1) {
              iVar4 = 0;
              do {
                pcVar6 = (char *)((int)destination + iVar4);
                uVar2 = (uint)(byte)pcVar6[2] << 8 | (uint)(byte)pcVar6[1] << 0x10 |
                        (uint)(byte)pcVar6[3];
                if (uVar1 < iVar4 + uVar2 + 4) break;
                if (*pcVar6 == '\x14') {
                  if (uVar2 != 0x20) {
                    pcVar6 = str_1000fc8e;
                    goto LAB_1000cc18;
                  }
                  recovered_10003560(&local_90,source,0x6c);
                  recovered_1000e9d0(&local_90,auStack_13c);
                  recovered_1000eb08(param_2,str_1000fcaa,(void *)0x0,0,auStack_15c,0x20);
                  recovered_1000e850(&local_90,auStack_fc,auStack_15c);
                  recovered_1000a550(&local_90,auStack_13c,0x20);
                  recovered_1000e9d0(&local_90,&local_260);
                  recovered_1000a550(auStack_fc,&local_260,0x20);
                  recovered_1000e9d0(auStack_fc,local_17c);
                  auVar11 = *(uint128 *)(pcVar6 + 0x14) ^ PF_PART16(local_16c,0) |
                            *(uint128 *)(pcVar6 + 4) ^ PF_PART16(local_17c,0);
                  uVar10 = PF_PART8(auVar11, 0) | PF_PART8(auVar11, 8);
                  if ((((((((char)uVar10 != '\0' || (char)(uVar10 >> 8) != '\0') ||
                          (char)(uVar10 >> 0x10) != '\0') || (char)(uVar10 >> 0x18) != '\0') ||
                        (char)(uVar10 >> 0x20) != '\0') || (char)(uVar10 >> 0x28) != '\0') ||
                      (char)(uVar10 >> 0x30) != '\0') || (char)(uVar10 >> 0x38) != '\0') {
                    pcVar6 = str_1000fcb3;
                    goto LAB_1000cc18;
                  }
                  recovered_1000a550(source,pcVar6,0x24);
                  iVar4 = iVar4 + 0x24;
                  bVar9 = true;
                  goto LAB_1000c7e4;
                }
                if ((*pcVar6 == '\v') && (6 < uVar2)) {
                  pbVar3 = (byte *)(pcVar6 + 4);
                  uVar5 = (uint)*pbVar3;
                  uVar8 = uVar5 + 7;
                  if ((uVar5 + 4 <= uVar2) &&
                     (((pbVar3[uVar5 + 2] != 0 || pbVar3[uVar5 + 1] != 0) || pbVar3[uVar5 + 3] != 0
                      && (uVar8 = uVar5 + 7, uVar8 <= uVar2)))) {
                    pbVar7 = pbVar3 + uVar5 + 4;
                    uVar5 = (uint)pbVar7[1] << 8 | (uint)*pbVar7 << 0x10 | (uint)pbVar7[2];
                    if ((uVar5 != 0) && (uVar5 + uVar8 <= uVar2)) {
                      local_6c = 0;
                      local_70 = 0;
                      local_80 = DAT_1000c830;
                      uStack_78 = DAT_1000c838;
                      local_90 = DAT_1000c840;
                      uStack_88 = DAT_1000c848;
                      local_28 = 0;
                      recovered_1000a550(&local_90,pbVar3 + uVar8,uVar5);
                      recovered_1000e9d0(&local_90,param_1 + 0x74);
                      *(undefined1 *)((int)param_1 + 0x1f6) = 1;
                    }
                  }
                }
                recovered_1000a550(source,pcVar6,uVar2 + 4);
                iVar4 = uVar2 + 4 + iVar4;
              } while (iVar4 + 4U <= uVar1);
              bVar9 = false;
LAB_1000c7e4:
              if (iVar4 != 0) {
                uVar1 = uVar1 - iVar4;
                if (uVar1 == 0) {
                  uVar1 = 0;
                }
                else {
                  recovered_100037e4(destination,(void *)((int)destination + iVar4),uVar1);
                }
              }
              goto LAB_1000c85c;
            }
          }
          else {
            bVar9 = false;
            if (local_19c[0] == 0x15) {
              pcVar6 = str_1000fc60;
LAB_1000cc18:
              recovered_10006d08(param_5,param_6,pcVar6);
              break;
            }
LAB_1000c85c:
            if (bVar9) {
              recovered_10003560(&local_90,source,0x6c);
              recovered_1000e9d0(&local_90,local_19c);
              local_80 = DAT_1000c830;
              uStack_78 = DAT_1000c838;
              local_6c = 0;
              local_70 = 0;
              local_90 = DAT_1000c840;
              uStack_88 = DAT_1000c848;
              local_28 = 0;
              recovered_1000e9d0(&local_90,auStack_fc);
              recovered_1000eb08(param_3,str_1000fab3,auStack_fc,0x20,auStack_1bc,0x20);
              recovered_10003cf0(auStack_23c,0,0x20);
              recovered_1000e850(&local_90,auStack_fc,auStack_1bc);
              recovered_1000a550(&local_90,auStack_23c,0x20);
              recovered_1000e9d0(&local_90,&local_260);
              recovered_1000a550(auStack_fc,&local_260,0x20);
              recovered_1000e9d0(auStack_fc,auStack_1dc);
              recovered_1000eb08(auStack_1dc,str_1000fcd4,local_19c,0x20,auStack_1fc,0x20);
              recovered_1000eb08(auStack_1dc,str_1000fce1,local_19c,0x20,auStack_21c,0x20);
              recovered_10003cf0(param_1 + 0x5a,0,0x34);
              recovered_1000eb08(auStack_1fc,&DAT_1000fc59,(void *)0x0,0,param_1 + 0x5a,0x20);
              recovered_1000eb08(auStack_1fc,&DAT_1000fc5d,(void *)0x0,0,param_1 + 0x62,0xc);
              param_1[0x66] = 0;
              param_1[0x65] = 0;
              recovered_10003cf0(param_1 + 0x67,0,0x34);
              recovered_1000eb08(auStack_21c,&DAT_1000fc59,(void *)0x0,0,param_1 + 0x67,0x20);
              recovered_1000eb08(auStack_21c,&DAT_1000fc5d,(void *)0x0,0,param_1 + 0x6f,0xc);
              param_1[0x73] = 0;
              param_1[0x72] = 0;
              *(undefined1 *)((int)param_1 + 0x1f5) = 1;
              local_260 = 0x20000014;
              recovered_10003560(&local_90,source,0x6c);
              recovered_1000e9d0(&local_90,auStack_280);
              recovered_1000eb08(param_4,str_1000fcaa,(void *)0x0,0,auStack_2a0,0x20);
              recovered_1000e850(&local_90,auStack_fc,auStack_2a0);
              recovered_1000a550(&local_90,auStack_280,0x20);
              recovered_1000e9d0(&local_90,local_11c);
              recovered_1000a550(auStack_fc,local_11c,0x20);
              recovered_1000e9d0(auStack_fc,auStack_25c);
              iVar4 = recovered_1000ce08(param_1,param_1 + 0x40,0x16,&local_260,0x24,param_5,param_6
                                        );
              if (iVar4 == 0) {
                if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                    (0x53 < _DAT_40010808)) && (_DAT_40010850 != (code *)0x0)) {
                  (*_DAT_40010850)(source_00);
                }
              }
              else {
                recovered_1000a550(source,&local_260,0x24);
                if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
                   ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
                  (*_DAT_40010850)(source_00);
                }
              }
              if (_DAT_40010800 != 0x50414d57) {
                return iVar4;
              }
              if (_DAT_40010804 == 0) {
                return iVar4;
              }
              if (_DAT_40010808 < 0x54) {
                return iVar4;
              }
              if (_DAT_40010850 == (code *)0x0) {
                return iVar4;
              }
              (*_DAT_40010850)(destination);
              return iVar4;
            }
          }
          local_19c[0] = 0;
          local_11c[0] = 0;
          uVar2 = recovered_1000d2b4(param_1,param_1 + 0x4d,local_19c,source_00,0x4100,local_11c,
                                     param_5,param_6);
        } while (uVar2 != 0);
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
        (*_DAT_40010850)(source_00);
      }
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
      (*_DAT_40010850)(destination);
      return 0;
    }
    if (source_00 != (byte *)0x0) goto LAB_1000c2d0;
  }
  else {
    destination = (void *)0x0;
    bVar9 = false;
    if (source_00 == (byte *)0x0) goto LAB_1000c330;
LAB_1000c2d0:
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
       (_DAT_40010850 != (code *)0x0)) {
      (*_DAT_40010850)(source_00);
    }
  }
  if (((bVar9) && (_DAT_40010800 == 0x50414d57)) &&
     ((_DAT_40010804 != 0 && ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))))) {
    (*_DAT_40010850)(destination);
  }
LAB_1000c330:
  recovered_10006d08(param_5,param_6,str_1000f9e1);
  return 0;
}

#undef DAT_1000c830
#undef DAT_1000c838
#undef DAT_1000c840
#undef DAT_1000c848
#undef DAT_1000fc59
#undef DAT_1000fc5d
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
#undef str_1000f9e1
#undef str_1000fab3
#undef str_1000fc60
#undef str_1000fc76
#undef str_1000fc8e
#undef str_1000fcaa
#undef str_1000fcb3
#undef str_1000fcd4
#undef str_1000fce1
#undef auStack_2a0
#undef auStack_280
#undef auStack_25c
#undef auStack_23c
#undef auStack_21c
#undef auStack_1fc
#undef auStack_1dc
#undef auStack_1bc
#undef auStack_15c
#undef auStack_13c
#undef auStack_fc
#undef uStack_88
#undef uStack_78
#undef local_260
#undef local_19c
#undef local_17c
#undef local_16c
#undef local_11c
#undef local_90
#undef local_80
#undef local_70
#undef local_6c
#undef local_28

#undef str_1000fad5
#define str_1000fad5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd90
 */

int recovered_1000cd90(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((context == (void *)0x0) || (*(char *)((int)context + 0x1f5) != '\x01')) ||
     ((data == (void *)0x0 && (size != 0)))) {
    recovered_10006d08(error,capacity,str_1000fad5);
    return 0;
  }
  iVar1 = recovered_1000ce08(context,(void *)((int)context + 0x168),0x17,data,size,error,capacity);
  return iVar1;
}

#undef str_1000fad5

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
#undef str_1000f9e1
#define str_1000f9e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000fb09
#define str_1000fb09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d9U)))
#define local_68 (*(byte *)(pf_stack_frame + 24))
#define local_67 (*(byte *)(pf_stack_frame + 25))
#define local_66 (*(byte *)(pf_stack_frame + 26))
#define local_65 (*(byte *)(pf_stack_frame + 27))
#define local_64 (*(byte *)(pf_stack_frame + 28))
#define local_63 (*(byte *)(pf_stack_frame + 29))
#define local_62 (*(byte *)(pf_stack_frame + 30))
#define local_61 (*(byte *)(pf_stack_frame + 31))
#define local_60 (*(uint (*)[24])(pf_stack_frame + 32))
#define auStack_6c (*(undefined1 (*)[108])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ce08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000ce08(undefined4 *param_1,void *param_2,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *associated;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  byte *pbVar13;
  void *destination;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;

  if ((param_2 != (void *)0x0) && ((param_4 != (void *)0x0 || (param_5 == 0)))) {
    if ((_DAT_40010800 == 0x50414d57) &&
       (((_DAT_40010804 != 0 && (0x4f < _DAT_40010808)) && (_DAT_4001084c != (code *)0x0)))) {
      associated = (undefined2 *)(*_DAT_4001084c)(param_5 + 0x16);
      if (associated != (undefined2 *)0x0) {
        destination = (void *)((int)associated + 5);
        uVar18 = param_5 + 1;
        *(char *)(associated + 2) = (char)(param_5 + 0x11);
        *(undefined1 *)(associated + 1) = 3;
        *associated = 0x317;
        *(char *)((int)associated + 3) = (char)(param_5 + 0x11 >> 8);
        if (param_5 != 0) {
          recovered_10003560(destination,param_4,param_5);
        }
        *(undefined1 *)((int)destination + param_5) = param_3;
        recovered_10003560(auStack_6c,(void *)((int)param_2 + 0x20),0xc);
        puVar16 = (uint *)((int)param_2 + 0x2c);
        uVar6 = *puVar16;
        local_61 = local_61 ^ (byte)uVar6;
        local_62 = local_62 ^ (byte)(uVar6 >> 8);
        local_63 = local_63 ^ (byte)(uVar6 >> 0x10);
        local_64 = local_64 ^ (byte)(uVar6 >> 0x18);
        uVar9 = *(undefined4 *)((int)param_2 + 0x30);
        local_65 = local_65 ^ (byte)uVar9;
        local_66 = local_66 ^ (byte)((uint)uVar9 >> 8);
        local_67 = local_67 ^ (byte)((uint)uVar9 >> 0x10);
        local_68 = local_68 ^ (byte)((uint)uVar9 >> 0x18);
        if (uVar18 != 0) {
          uVar6 = 1;
          uVar17 = 0;
          do {
            recovered_1000f620(param_2,uVar6,auStack_6c,local_60);
            uVar10 = uVar18 - uVar17;
            uVar5 = uVar10;
            if (0x3f < uVar10) {
              uVar5 = 0x40;
            }
            if (uVar18 != uVar17) {
              uVar7 = 1;
              if (1 < uVar5) {
                uVar7 = uVar5;
              }
              uVar15 = 0;
              if (0xf < uVar10) {
                uVar15 = uVar7 & 0x70;
                puVar14 = local_60;
                puVar12 = (uint *)((int)destination + uVar17);
                uVar10 = uVar15;
                do {
                  uVar10 = uVar10 - 0x10;
                  uVar1 = *puVar14;
                  uVar2 = puVar14[1];
                  uVar3 = puVar14[2];
                  uVar4 = puVar14[3];
                  puVar14 = puVar14 + 4;
                  *puVar12 = uVar1 ^ *puVar12;
                  puVar12[1] = uVar2 ^ puVar12[1];
                  puVar12[2] = uVar3 ^ puVar12[2];
                  puVar12[3] = uVar4 ^ puVar12[3];
                  puVar12 = puVar12 + 4;
                } while (uVar10 != 0);
                if (uVar5 == uVar15) goto LAB_1000cfd8;
              }
              iVar8 = uVar7 - uVar15;
              pbVar11 = (byte *)((int)destination + uVar17 + uVar15);
              pbVar13 = (byte *)((int)local_60 + uVar15);
              do {
                iVar8 = iVar8 + -1;
                *pbVar11 = *pbVar13 ^ *pbVar11;
                pbVar11 = pbVar11 + 1;
                pbVar13 = pbVar13 + 1;
              } while (iVar8 != 0);
            }
LAB_1000cfd8:
            uVar17 = uVar5 + uVar17;
            uVar6 = uVar6 + 1;
          } while (uVar17 < uVar18);
        }
        recovered_1000edb8(param_2,auStack_6c,associated,destination,uVar18,local_60);
        recovered_10003560((void *)((int)destination + uVar18),local_60,0x10);
        uVar18 = *puVar16;
        *puVar16 = uVar18 + 1;
        *(uint *)((int)param_2 + 0x30) = *(int *)((int)param_2 + 0x30) + (uint)(0xfffffffe < uVar18)
        ;
        if ((code *)param_1[2] == (code *)0x0) {
          recovered_10006d08(param_6,param_7,str_1000fb09);
          uVar9 = 0;
        }
        else {
          uVar9 = (*(code *)param_1[2])(*param_1,associated,param_5 + 0x16,param_6,param_7);
        }
        if (_DAT_40010800 != 0x50414d57) {
          return uVar9;
        }
        if (_DAT_40010804 == 0) {
          return uVar9;
        }
        if (_DAT_40010808 < 0x54) {
          return uVar9;
        }
        if (_DAT_40010850 == (code *)0x0) {
          return uVar9;
        }
        (*_DAT_40010850)(associated);
        return uVar9;
      }
    }
    recovered_10006d08(param_6,param_7,str_1000f9e1);
  }
  return 0;
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
#undef str_1000f9e1
#undef str_1000fb09
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef auStack_6c

#undef str_1000fad5
#define str_1000fad5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a5U)))
#undef str_1000faf8
#define str_1000faf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_21 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d188
 */

int recovered_1000d188(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  char *format;

  pvVar1 = context;
  if (read != (ulong *)0x0) {
    pvVar1 = (void *)0x0;
    *read = 0;
  }
  if (context != (void *)0x0 && size != 0) {
    if (data != (void *)0x0) {
      pvVar1 = (void *)(uint)*(byte *)((int)context + 0x1f5);
    }
    if (data != (void *)0x0 && ((uint)pvVar1 & 1) != 0) {
      do {
        local_21 = 0;
        local_28 = 0;
        uVar2 = recovered_1000d2b4(context,(void *)((int)context + 0x19c),&local_21,data,size,
                                   &local_28,error,capacity);
        if (uVar2 == 0) {
          return 0;
        }
        if (local_21 == 0x17) {
          if (read == (ulong *)0x0) {
            return 1;
          }
          *read = local_28;
          return 1;
        }
      } while (local_21 != 0x15);
      format = str_1000faf8;
      goto LAB_1000d1e4;
    }
  }
  format = str_1000fad5;
LAB_1000d1e4:
  recovered_10006d08(error,capacity,format);
  return 0;
}

#undef str_1000fad5
#undef str_1000faf8
#undef local_28
#undef local_21

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
#undef str_1000f9e1
#define str_1000f9e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000fcee
#define str_1000fcee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_1000fd08
#define str_1000fd08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d8U)))
#undef str_1000fd27
#define str_1000fd27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f7U)))
#undef str_1000fd54
#define str_1000fd54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x424U)))
#undef str_1000fd91
#define str_1000fd91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x461U)))
#undef str_1000fdb2
#define str_1000fdb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x482U)))
#undef str_1000fdc7
#define str_1000fdc7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x497U)))
#undef str_1000fde8
#define str_1000fde8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b8U)))
#define auStack_6c (*(undefined1 (*)[108])(pf_stack_frame + 52))
#define local_81 (*(byte *)(pf_stack_frame + 31))
#define local_80 (*(byte *)(pf_stack_frame + 32))
#define local_7f (*(byte *)(pf_stack_frame + 33))
#define local_7e (*(ushort *)(pf_stack_frame + 34))
#define local_7c (*(undefined1 (*)[124])(pf_stack_frame + 36))
#define local_68 (*(byte *)(pf_stack_frame + 56))
#define local_67 (*(byte *)(pf_stack_frame + 57))
#define local_66 (*(byte *)(pf_stack_frame + 58))
#define local_65 (*(byte *)(pf_stack_frame + 59))
#define local_64 (*(byte *)(pf_stack_frame + 60))
#define local_63 (*(byte *)(pf_stack_frame + 61))
#define local_62 (*(byte *)(pf_stack_frame + 62))
#define local_61 (*(byte *)(pf_stack_frame + 63))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000d2b4(undefined4 *param_1,void *param_2,byte *param_3,byte *param_4,uint param_5,
                       uint *param_6,char *param_7,ulong param_8)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  uint128 auVar4;
  int iVar5;
  byte *ciphertext;
  uint uVar6;
  uint extraout_r0 = 0;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint128 *pauVar10;
  uint uVar11;
  char *format;
  uint uVar12;
  uint128 *pauVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  uint128 auVar24;

  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    pcVar17 = (code *)param_1[1];
    if (pcVar17 != (code *)0x0) {
      puVar7 = (uint *)((int)param_2 + 0x2c);
      do {
        iVar5 = (*pcVar17)(*param_1,&local_81,5,param_7,param_8);
        if (iVar5 == 0) {
          return 0;
        }
        if ((((uint)local_7e << 0x18 | (uint)(local_7e >> 8) << 0x10) >> 0x10) - 0x4801 < 0xffffb800
           ) {
          format = str_1000fcee;
          goto LAB_1000d93c;
        }
        uVar11 = (local_7e & 0xff) << 8 | (uint)(local_7e >> 8);
        if (param_2 == (void *)0x0) {
          if (param_5 < uVar11) {
            format = str_1000fd08;
            goto LAB_1000d93c;
          }
          if ((code *)param_1[1] == (code *)0x0) break;
          iVar5 = (*(code *)param_1[1])(*param_1,param_4,uVar11,param_7,param_8);
          if (iVar5 == 0) {
            return 0;
          }
          if (local_81 != 0x14) {
            if (local_81 == 0x15) {
              uVar12 = 0;
              if (1 < uVar11) {
                uVar12 = (uint)param_4[1];
              }
              recovered_10006d08(param_7,param_8,str_1000fd27,(uint)*param_4,uVar12);
              return 0;
            }
            if (param_3 != (byte *)0x0) {
              *param_3 = local_81;
            }
            if (param_6 == (uint *)0x0) {
              return 1;
            }
            *param_6 = uVar11;
            return 1;
          }
        }
        else {
          if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x50)) ||
             ((_DAT_4001084c == (code *)0x0 ||
              (ciphertext = (byte *)(*_DAT_4001084c)(uVar11), ciphertext == (byte *)0x0)))) {
            format = str_1000f9e1;
            goto LAB_1000d93c;
          }
          if ((code *)param_1[1] == (code *)0x0) {
            recovered_10006d08(param_7,param_8,str_1000fd91);
LAB_1000dab0:
            if (_DAT_40010800 != 0x50414d57) {
              return 0;
            }
            if (_DAT_40010804 == 0) {
              return 0;
            }
            if (_DAT_40010808 < 0xc) {
              return 0;
            }
            if (_DAT_40010808 < 0x54) {
              return 0;
            }
            if (_DAT_40010850 == (code *)0x0) {
              return 0;
            }
            (*_DAT_40010850)(ciphertext);
            return 0;
          }
          iVar5 = (*(code *)param_1[1])(*param_1,ciphertext,uVar11,param_7,param_8);
          if (iVar5 == 0) goto LAB_1000dab0;
          uVar12 = (uint)local_81;
          if (uVar12 == 0x14) {
            if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
               ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
              (*_DAT_40010850)(ciphertext);
            }
            goto LAB_1000d718;
          }
          if (uVar12 != 0x17) {
            if (uVar12 == 0x15) {
              uVar12 = 0;
              if (1 < uVar11) {
                uVar12 = (uint)ciphertext[1];
              }
              recovered_10006d08(param_7,param_8,str_1000fd27,(uint)*ciphertext,uVar12);
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
              (*_DAT_40010850)(ciphertext);
              return 0;
            }
            recovered_10006d08(param_7,param_8,str_1000fd54,uVar12,(uint)local_80,(uint)local_7f,
                               uVar11);
            goto LAB_1000dab0;
          }
          uVar12 = 1;
          if (param_6 != (uint *)0x0) {
            *param_6 = 0;
          }
          if (param_3 != (byte *)0x0) {
            *param_3 = 0;
          }
          if (0xf < uVar11) {
            uVar12 = uVar11 - 0x10;
            if (param_5 < uVar12) {
              recovered_10006d08(param_7,param_8,str_1000fdb2);
            }
            else {
              recovered_10003560(auStack_6c,(void *)((int)param_2 + 0x20),0xc);
              uVar6 = *puVar7;
              uVar8 = *(undefined4 *)((int)param_2 + 0x30);
              local_61 = local_61 ^ (byte)uVar6;
              local_65 = local_65 ^ (byte)uVar8;
              local_62 = local_62 ^ (byte)(uVar6 >> 8);
              local_63 = local_63 ^ (byte)(uVar6 >> 0x10);
              local_64 = local_64 ^ (byte)(uVar6 >> 0x18);
              local_66 = local_66 ^ (byte)((uint)uVar8 >> 8);
              local_67 = local_67 ^ (byte)((uint)uVar8 >> 0x10);
              local_68 = local_68 ^ (byte)((uint)uVar8 >> 0x18);
              recovered_1000edb8(param_2,auStack_6c,&local_81,ciphertext,uVar12,local_7c);
              auVar24 = VectorCompareEqual(*(uint128 *)(ciphertext + uVar12),PF_PART16(local_7c,0),1);
              uVar1 = ~PF_PART8(auVar24, 0);
              uVar2 = ~PF_PART8(auVar24, 8);
              if ((((((((((((((((uVar1 & 1) == 0 && (uVar1 & 0x100) == 0) && (uVar1 & 0x10000) == 0)
                             && (uVar1 & 0x1000000) == 0) && (uVar1 & 0x100000000) == 0) &&
                           (uVar1 & 0x10000000000) == 0) && (uVar1 & 0x1000000000000) == 0) &&
                         (uVar1 & 0x100000000000000) == 0) && (uVar2 & 1) == 0) &&
                       (uVar2 & 0x100) == 0) && (uVar2 & 0x10000) == 0) && (uVar2 & 0x1000000) == 0)
                    && (uVar2 & 0x100000000) == 0) && (uVar2 & 0x10000000000) == 0) &&
                  (uVar2 & 0x1000000000000) == 0) && (uVar2 & 0x100000000000000) == 0) {
                if (uVar12 == 0) {
                  uVar12 = 0;
                  uVar11 = *puVar7;
                  *puVar7 = uVar11 + 1;
                  *(uint *)((int)param_2 + 0x30) =
                       *(int *)((int)param_2 + 0x30) + (uint)(0xfffffffe < uVar11);
                }
                else {
                  uVar20 = 0;
                  uVar6 = 1;
                  do {
                    recovered_1000f620(param_2,uVar6,auStack_6c,local_60);
                    uVar9 = uVar12 - uVar20;
                    uVar21 = uVar9;
                    if (0x3f < uVar9) {
                      uVar21 = 0x40;
                    }
                    if (uVar12 != uVar20) {
                      uVar19 = uVar21;
                      if (uVar21 < 2) {
                        uVar19 = 1;
                      }
                      bVar23 = 0xf < uVar9;
                      bVar22 = uVar9 == 0x10;
                      uVar9 = extraout_r0;
                      if (bVar23) {
                        uVar9 = (int)param_4 - (int)ciphertext;
                      }
                      uVar18 = 0;
                      if (bVar23) {
                        bVar22 = uVar9 == 0xf;
                      }
                      if ((bVar23 && 0xe < uVar9) && !bVar22) {
                        uVar18 = uVar19 & 0x70;
                        pbVar15 = param_4 + uVar20;
                        pauVar10 = (uint128 *)local_60;
                        pauVar13 = (uint128 *)(ciphertext + uVar20);
                        uVar9 = uVar18;
                        do {
                          auVar24 = *pauVar13;
                          pauVar13 = pauVar13 + 1;
                          uVar9 = uVar9 - 0x10;
                          auVar4 = *pauVar10;
                          pauVar10 = pauVar10 + 1;
                          *(longlong *)pbVar15 = SUB168(auVar4 ^ auVar24,0);
                          *(longlong *)(pbVar15 + 8) = SUB168(auVar4 ^ auVar24,8);
                          pbVar15 = pbVar15 + 0x10;
                        } while (uVar9 != 0);
                        if (uVar21 == uVar18) goto LAB_1000d754;
                      }
                      iVar5 = uVar19 - uVar18;
                      pbVar15 = ciphertext + uVar20 + uVar18;
                      pbVar14 = local_60 + uVar18;
                      pbVar16 = param_4 + uVar20 + uVar18;
                      do {
                        iVar5 = iVar5 + -1;
                        *pbVar16 = *pbVar14 ^ *pbVar15;
                        pbVar15 = pbVar15 + 1;
                        pbVar14 = pbVar14 + 1;
                        pbVar16 = pbVar16 + 1;
                      } while (iVar5 != 0);
                    }
LAB_1000d754:
                    uVar20 = uVar21 + uVar20;
                    uVar6 = uVar6 + 1;
                  } while (uVar20 < uVar12);
                  uVar12 = *puVar7;
                  *puVar7 = uVar12 + 1;
                  *(uint *)((int)param_2 + 0x30) =
                       *(int *)((int)param_2 + 0x30) + (uint)(0xfffffffe < uVar12);
                  iVar5 = 0x11 - uVar11;
                  do {
                    bVar3 = param_4[-iVar5];
                    if (bVar3 != 0) {
                      if ((bVar3 & 0xfc) != 0x14) {
                        recovered_10006d08(param_7,param_8,str_1000fde8);
                        goto LAB_1000d6ac;
                      }
                      if (param_3 != (byte *)0x0) {
                        *param_3 = bVar3;
                      }
                      uVar12 = 0;
                      if (param_6 != (uint *)0x0) {
                        *param_6 = -iVar5;
                      }
                      break;
                    }
                    iVar5 = iVar5 + 1;
                    uVar12 = 0;
                  } while (iVar5 != 1);
                }
                goto LAB_1000d6b0;
              }
              recovered_10006d08(param_7,param_8,str_1000fdc7);
            }
LAB_1000d6ac:
            uVar12 = 1;
          }
LAB_1000d6b0:
          if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
             (_DAT_40010850 != (code *)0x0)) {
            (*_DAT_40010850)(ciphertext);
          }
          if (param_3 == (byte *)0x0 || uVar12 != 0) {
            return uVar12 ^ 1;
          }
          if (param_6 == (uint *)0x0) {
            return 1;
          }
          if (*param_3 != 0) {
            return 1;
          }
          if (*param_6 != 0) {
            return 1;
          }
        }
LAB_1000d718:
        pcVar17 = (code *)param_1[1];
      } while (pcVar17 != (code *)0x0);
    }
    format = str_1000fd91;
LAB_1000d93c:
    recovered_10006d08(param_7,param_8,format);
  }
  return 0;
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
#undef str_1000f9e1
#undef str_1000fcee
#undef str_1000fd08
#undef str_1000fd27
#undef str_1000fd54
#undef str_1000fd91
#undef str_1000fdb2
#undef str_1000fdc7
#undef str_1000fde8
#undef auStack_6c
#undef local_81
#undef local_80
#undef local_7f
#undef local_7e
#undef local_7c
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db08
 */

int recovered_1000db08(void *context,void *output)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (context == (void *)0x0 || output == (void *)0x0) {
    return 0;
  }
  if (*(char *)((int)context + 0x1f6) == '\x01') {
    recovered_10003560(output,(void *)((int)context + 0x1d0),0x20);
    return 1;
  }
  return 0;
}


/* Recovered ARM32 entropy fold; Pooka's Free Software License. */
void recovered_1000db60(void *context,void *output) {
  uint32_t date[6]={0},seed=0x574d544c;
  volatile uint32_t *api=(volatile uint32_t *)0x40010800;
  if(api[0]==0x50414d57 && api[1]!=0 && api[2]>=0x16c && api[0x168/4] &&
     ((int (*)(void *))(uintptr_t)api[0x168/4])(date))
    seed ^= date[2] ^ date[3]*0x3c6ef35fU ^ date[4]*0x19660dU;
  if(!output)return;
  unsigned char *state=context,*bytes=output;
  uint32_t previous,callback,userdata;
  __builtin_memcpy(&previous,state+0x1f0,4);
  __builtin_memcpy(&callback,state+12,4);
  __builtin_memcpy(&userdata,state,4);
  seed^=(uintptr_t)context ^ previous;
  if(callback && ((int (*)(uint32_t,void *,uint32_t))(uintptr_t)callback)(userdata,output,32)) {
    for(unsigned i=0;i<8;i++){uint32_t word;__builtin_memcpy(&word,bytes+4*i,4);seed^=word;}
  } else {
    for(unsigned i=0;i<32;i++){
      seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;
      bytes[i]=(unsigned char)(seed>>((i*8)&24));
    }
  }
  __builtin_memcpy(state+0x1f0,&seed,4);
}


#define local_c0 (*(ulonglong (*)[24])(pf_stack_frame + 128))
#define local_b0 (*(uint *)(pf_stack_frame + 144))
#define local_ac (*(undefined4 *)(pf_stack_frame + 148))
#define uStack_48 (*(uint *)(pf_stack_frame + 248))
#define local_a8 (*(uint *)(pf_stack_frame + 152))
#define local_a4 (*(int *)(pf_stack_frame + 156))
#define uStack_28 (*(uint *)(pf_stack_frame + 280))
#define local_a0 (*(undefined1 (*)[160])(pf_stack_frame + 160))
#define local_90 (*(undefined1 (*)[144])(pf_stack_frame + 176))
#define local_80 (*(undefined1 (*)[128])(pf_stack_frame + 192))
#define local_70 (*(undefined1 (*)[112])(pf_stack_frame + 208))
#define local_60 (*(undefined1 (*)[96])(pf_stack_frame + 224))
#define local_50 (*(uint *)(pf_stack_frame + 240))
#define local_40 (*(undefined1 (*)[64])(pf_stack_frame + 256))
#define local_30 (*(uint *)(pf_stack_frame + 272))
#define local_130 (*(uint (*)[76])(pf_stack_frame + 16))
#define local_128 (*(undefined8 *)(pf_stack_frame + 24))
#define local_120 (*(undefined1 (*)[288])(pf_stack_frame + 32))
#define local_110 (*(undefined8 (*)[34])(pf_stack_frame + 48))
#define local_100 (*(undefined8 (*)[32])(pf_stack_frame + 64))
#define local_f0 (*(undefined8 (*)[30])(pf_stack_frame + 80))
#define local_e0 (*(undefined8 (*)[28])(pf_stack_frame + 96))
#define local_d0 (*(undefined8 (*)[26])(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd94
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void recovered_1000dd94(uint *param_1,uint *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint128 auVar3;
  uint128 auVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  uint128 auVar8;
  uint128 auVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;
  undefined8 uVar14;
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
  int iVar25;
  uint *puVar26;
  longlong *plVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  uint128 auVar34;
  uint128 auVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  uint128 auVar38;
  uint128 auVar39;
  uint128 auVar40;
  uint128 auVar41;
  uint128 auVar42;
  uint128 auVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  uint128 auVar46;
  uint128 auVar47;
  uint128 auVar48;
  uint128 auVar49;
  undefined8 uVar50;
  uint128 auVar51;
  uint128 auVar52;
  uint128 auVar53;
  uint128 auVar54;
  undefined8 uVar55;
  uint128 auVar56;
  uint128 auVar57;
  uint128 auVar58;
  uint128 auVar59;
  uint128 auVar60;

  if (param_1 == (uint *)0x0) {
    return;
  }
  if (param_2 != (uint *)0x0 && param_3 != (undefined8 *)0x0) {
    recovered_10003cf0(local_130,0,0x110);
    auVar52 = local_120;
    auVar58 = VectorCopyLong(*param_3,4,1);
    auVar60 = VectorCopyLong(param_3[4],4,1);
    auVar51 = VectorCopyLong(param_3[3],4,1);
    auVar38 = VectorCopyLong(param_3[7],4,1);
    uVar15 = *(uint *)(param_3 + 8);
    auVar59 = VectorCopyLong(param_3[2],4,1);
    auVar56 = VectorCopyLong(param_3[1],4,1);
    auVar34 = VectorCopyLong(param_3[6],4,1);
    auVar46 = VectorCopyLong(param_3[5],4,1);
    uVar28 = PF_PART4(auVar34, 0);
    uVar16 = PF_PART4(auVar56, 0);
    uVar17 = PF_PART4(auVar56, 8);
    uVar18 = PF_PART4(auVar51, 8);
    uVar19 = PF_PART4(auVar51, 0);
    uVar20 = PF_PART4(auVar46, 8);
    uVar21 = PF_PART4(auVar46, 0);
    uVar22 = PF_PART4(auVar34, 8);
    uVar23 = PF_PART4(auVar38, 0);
    uVar24 = PF_PART4(auVar38, 8);
    iVar25 = 0;
    do {
      PF_PART16(local_120,0) = PF_PART16(auVar52,0);
      uVar14 = PF_PART8(local_120, 8);
      uVar29 = *param_2;
      PF_PART8(auVar57, 8) =
           PF_PART8(auVar56, 8) & 0xffff0000ffff0000 |
           (ulonglong)PF_PART4(auVar58, 8) * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar57, 0) =
           PF_PART8(auVar56, 0) & 0xffff0000ffff0000 |
           (ulonglong)PF_PART4(auVar58, 0) * (ulonglong)uVar29 & 0xffff;
      uVar1 = PF_PART8(auVar51, 8) & 0xffff0000ffff0000;
      uVar2 = PF_PART8(auVar51, 0) & 0xffff0000ffff0000;
      PF_PART8(auVar52, 8) = uVar1 | (ulonglong)uVar17 * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar52, 0) = uVar2 | (ulonglong)uVar16 * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar47, 8) =
           PF_PART8(auVar46, 8) & 0xffff0000ffff0000 |
           (ulonglong)PF_PART4(auVar59, 8) * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar47, 0) =
           PF_PART8(auVar46, 0) & 0xffff0000ffff0000 |
           (ulonglong)PF_PART4(auVar59, 0) * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar39, 8) =
           PF_PART8(auVar38, 8) & 0xffff0000ffff0000 | (ulonglong)uVar18 * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar39, 0) =
           PF_PART8(auVar38, 0) & 0xffff0000ffff0000 | (ulonglong)uVar19 * (ulonglong)uVar29 & 0xffff;
      iVar30 = iVar25 + 8;
      auVar38 = VectorAdd(auVar57,*(uint128 *)((int)local_130 + iVar25),8);
      *(longlong *)*(uint128 *)((int)local_130 + iVar25) = PF_PART8(auVar38, 0);
      PF_PART8(local_120, 8) = uVar14;
      auVar56 = local_120;
      *(longlong *)((int)local_130 + iVar25 + 8) = PF_PART8(auVar38, 8);
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      auVar38 = VectorAdd(auVar52,*(uint128 *)(local_120 + iVar25),8);
      *(longlong *)*(uint128 *)(local_120 + iVar25) = PF_PART8(auVar38, 0);
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar52 = local_120;
      *(longlong *)(local_120 + iVar25 + 8) = PF_PART8(auVar38, 8);
      auVar56 = *(uint128 *)((int)local_110 + iVar25);
      auVar38 = VectorAdd(auVar47,auVar56,8);
      PF_PART8(auVar35, 8) =
           PF_PART8(auVar34, 8) & 0xffff0000ffff0000 |
           (ulonglong)PF_PART4(auVar60, 8) * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar35, 0) =
           PF_PART8(auVar34, 0) & 0xffff0000ffff0000 |
           (ulonglong)PF_PART4(auVar60, 0) * (ulonglong)uVar29 & 0xffff;
      *(longlong *)*(uint128 *)((int)local_110 + iVar25) = PF_PART8(auVar38, 0);
      *(longlong *)((int)local_110 + iVar25 + 8) = PF_PART8(auVar38, 8);
      auVar34 = *(uint128 *)((int)local_100 + iVar25);
      auVar38 = VectorAdd(auVar39,auVar34,8);
      *(longlong *)*(uint128 *)((int)local_100 + iVar25) = PF_PART8(auVar38, 0);
      *(longlong *)((int)local_100 + iVar25 + 8) = PF_PART8(auVar38, 8);
      auVar39 = *(uint128 *)((int)local_f0 + iVar25);
      auVar38 = VectorAdd(auVar35,auVar39,8);
      *(longlong *)*(uint128 *)((int)local_f0 + iVar25) = PF_PART8(auVar38, 0);
      *(longlong *)((int)local_f0 + iVar25 + 8) = PF_PART8(auVar38, 8);
      PF_PART8(auVar51, 8) = uVar1 | (ulonglong)uVar20 * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar51, 0) = uVar2 | (ulonglong)uVar21 * (ulonglong)uVar29 & 0xffff;
      auVar38 = VectorAdd(auVar51,*(uint128 *)((int)local_e0 + iVar25),8);
      *(longlong *)*(uint128 *)((int)local_e0 + iVar25) = PF_PART8(auVar38, 0);
      *(longlong *)((int)local_e0 + iVar25 + 8) = PF_PART8(auVar38, 8);
      PF_PART8(auVar46, 8) =
           PF_PART8(auVar34, 8) & 0xffff0000ffff0000 | (ulonglong)uVar22 * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar46, 0) =
           PF_PART8(auVar34, 0) & 0xffff0000ffff0000 | (ulonglong)uVar28 * (ulonglong)uVar29 & 0xffff;
      auVar34 = VectorAdd(auVar46,*(uint128 *)((int)local_d0 + iVar25),8);
      *(longlong *)*(uint128 *)((int)local_d0 + iVar25) = PF_PART8(auVar34, 0);
      *(longlong *)((int)local_d0 + iVar25 + 8) = PF_PART8(auVar34, 8);
      PF_PART8(auVar38, 8) =
           PF_PART8(auVar39, 8) & 0xffff0000ffff0000 | (ulonglong)uVar24 * (ulonglong)uVar29 & 0xffff;
      PF_PART8(auVar38, 0) =
           PF_PART8(auVar39, 0) & 0xffff0000ffff0000 | (ulonglong)uVar23 * (ulonglong)uVar29 & 0xffff;
      auVar34 = VectorAdd(auVar38,*(uint128 *)((int)local_c0 + iVar25),8);
      *(longlong *)*(uint128 *)((int)local_c0 + iVar25) = PF_PART8(auVar34, 0);
      *(longlong *)((int)local_c0 + iVar25 + 8) = PF_PART8(auVar34, 8);
      plVar27 = (longlong *)((int)local_c0 + iVar25 + 0x10);
      *plVar27 = (ulonglong)uVar29 * (ulonglong)uVar15 + *plVar27;
      param_2 = param_2 + 1;
      iVar25 = iVar30;
    } while (iVar30 != 0x88);
    PF_PART8(auVar48, 8) = PF_PART8(local_40, 8) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_40, 8) * 0x13 & 0xffff;
    PF_PART8(auVar48, 0) = PF_PART8(local_40, 0) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_40, 0) * 0x13 & 0xffff;
    PF_PART8(auVar10, 8) = local_c0[0];
    PF_PART8(auVar10, 0) = local_d0[1];
    auVar56 = VectorAdd(auVar10,auVar48,8);
    PF_PART8(auVar53, 8) = uVar1 | (ulonglong)uStack_28 * 0x13 & 0xffff;
    PF_PART8(auVar53, 0) = uVar2 | (ulonglong)local_30 * 0x13 & 0xffff;
    local_d0[1] = PF_PART8(auVar56, 0);
    local_c0[0] = PF_PART8(auVar56, 8);
    PF_PART4(auVar12, 8) = local_b0;
    PF_PART8(auVar12, 0) = local_c0[1];
    PF_PART4(auVar12, 12) = local_ac;
    auVar56 = VectorAdd(auVar12,auVar53,8);
    local_c0[1] = PF_PART8(auVar56, 0);
    local_b0 = PF_PART4(auVar56, 8);
    local_ac = PF_PART4(auVar56, 12);
    PF_PART8(auVar40, 8) = PF_PART8(local_70, 8) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_60, 8) * 0x13 & 0xffff;
    PF_PART8(auVar40, 0) = PF_PART8(local_70, 0) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_60, 0) * 0x13 & 0xffff;
    PF_PART8(auVar54, 8) = PF_PART8(auVar56, 8) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_70, 8) * 0x13 & 0xffff;
    PF_PART8(auVar54, 0) = PF_PART8(auVar56, 0) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_70, 0) * 0x13 & 0xffff;
    PF_PART8(auVar59, 8) = local_f0[0];
    PF_PART8(auVar59, 0) = local_100[1];
    auVar56 = VectorAdd(auVar59,auVar54,8);
    PF_PART8(auVar49, 8) = PF_PART8(local_60, 8) & 0xffff0000ffff0000 | (ulonglong)uStack_48 * 0x13 & 0xffff;
    PF_PART8(auVar49, 0) = PF_PART8(local_60, 0) & 0xffff0000ffff0000 | (ulonglong)local_50 * 0x13 & 0xffff;
    local_100[1] = PF_PART8(auVar56, 0);
    local_f0[0] = PF_PART8(auVar56, 8);
    PF_PART8(auVar8, 8) = local_d0[0];
    PF_PART8(auVar8, 0) = local_e0[1];
    auVar56 = VectorAdd(auVar8,auVar49,8);
    PF_PART8(auVar60, 8) = local_e0[0];
    PF_PART8(auVar60, 0) = local_f0[1];
    auVar34 = VectorAdd(auVar60,auVar40,8);
    local_e0[1] = PF_PART8(auVar56, 0);
    local_d0[0] = PF_PART8(auVar56, 8);
    PF_PART8(auVar58, 8) = local_100[0];
    PF_PART8(auVar58, 0) = local_110[1];
    local_f0[1] = PF_PART8(auVar34, 0);
    local_e0[0] = PF_PART8(auVar34, 8);
    PF_PART8(auVar41, 8) = PF_PART8(local_80, 8) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_80, 8) * 0x13 & 0xffff;
    PF_PART8(auVar41, 0) = PF_PART8(local_80, 0) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_80, 0) * 0x13 & 0xffff;
    auVar56 = VectorAdd(auVar58,auVar41,8);
    local_110[1] = PF_PART8(auVar56, 0);
    local_100[0] = PF_PART8(auVar56, 8);
    PF_PART8(auVar34, 8) = local_110[0];
    PF_PART8(auVar34, 0) = PF_PART8(local_120, 8);
    PF_PART8(auVar42, 8) = PF_PART8(local_90, 8) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_90, 8) * 0x13 & 0xffff;
    PF_PART8(auVar42, 0) = PF_PART8(local_90, 0) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_90, 0) * 0x13 & 0xffff;
    auVar56 = VectorAdd(auVar34,auVar42,8);
    local_110[0] = PF_PART8(auVar56, 8);
    (void)auVar52;
    PF_PART8(auVar56, 0) = local_128;
    PF_PART8(auVar43, 8) = PF_PART8(local_a0, 8) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_a0, 8) * 0x13 & 0xffff;
    PF_PART8(auVar43, 0) = PF_PART8(local_a0, 0) & 0xffff0000ffff0000 | (ulonglong)PF_PART4(local_a0, 0) * 0x13 & 0xffff;
    auVar56 = VectorAdd(auVar56,auVar43,8);
    local_128 = PF_PART8(auVar56, 0);
    PF_PART8(local_120, 8) = PF_PART8(auVar52, 8);
    PF_PART8(auVar13, 8) = PF_PART8(local_120, 8);
    PF_PART8(auVar13, 0) = PF_PART8(auVar56, 8);
    uVar15 = (uint)((ulonglong)local_a8 * 0x13);
    bVar32 = CARRY4(local_130[0],uVar15);
    local_130[0] = local_130[0] + uVar15;
    local_130[1] = local_130[1] + local_a4 * 0x13 + (int)((ulonglong)local_a8 * 0x13 >> 0x20) +
                   (uint)bVar32;
    iVar25 = 0;
    do {
      PF_PART16(local_120,0) = PF_PART16(auVar13,0);
      uVar14 = PF_PART8(local_120, 8);
      uVar15 = *(uint *)((int)local_130 + iVar25 + 4);
      *(undefined4 *)((int)local_130 + iVar25 + 4) = 0;
      PF_PART8(local_120, 8) = uVar14;
      auVar56 = local_120;
      uVar16 = *(uint *)((int)local_130 + iVar25) >> 0xf | uVar15 << 0x11;
      *(uint *)((int)local_130 + iVar25) = *(uint *)((int)local_130 + iVar25) & 0x7fff;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar13 = local_120;
      uVar15 = uVar15 >> 0xf;
      if (iVar25 == 0x80) {
        uVar17 = (uint)((ulonglong)uVar16 * 0x13);
        bVar32 = CARRY4(local_130[0],uVar17);
        local_130[0] = local_130[0] + uVar17;
        local_130[1] = local_130[1] + uVar15 * 0x13 + (int)((ulonglong)uVar16 * 0x13 >> 0x20) +
                       (uint)bVar32;
        break;
      }
      iVar30 = iVar25 + 8;
      puVar26 = (uint *)((int)local_130 + iVar25 + 8);
      uVar17 = *puVar26;
      iVar31 = *(int *)(local_120 + iVar25 + -4);
      *puVar26 = uVar17 + uVar16;
      PF_PART16(local_120,0) = PF_PART16(auVar13,0);
      auVar56 = local_120;
      *(uint *)(local_120 + iVar25 + -4) = iVar31 + uVar15 + (uint)CARRY4(uVar17,uVar16);
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar13 = local_120;
      iVar25 = iVar30;
    } while (iVar30 != 0x88);
    PF_PART16(local_120,0) = PF_PART16(auVar13,0);
    uVar14 = PF_PART8(local_120, 8);
    iVar25 = 0;
    auVar56 = local_120;
    PF_PART8(local_120, 8) = uVar14;
    do {
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      uVar14 = PF_PART8(local_120, 8);
      uVar15 = *(uint *)((int)local_130 + iVar25 + 4);
      *(undefined4 *)((int)local_130 + iVar25 + 4) = 0;
      PF_PART8(local_120, 8) = uVar14;
      auVar56 = local_120;
      uVar16 = *(uint *)((int)local_130 + iVar25) >> 0xf | uVar15 << 0x11;
      *(uint *)((int)local_130 + iVar25) = *(uint *)((int)local_130 + iVar25) & 0x7fff;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      uVar15 = uVar15 >> 0xf;
      if (iVar25 == 0x80) {
        uVar17 = (uint)((ulonglong)uVar16 * 0x13);
        bVar32 = CARRY4(local_130[0],uVar17);
        local_130[0] = local_130[0] + uVar17;
        local_130[1] = local_130[1] + uVar15 * 0x13 + (int)((ulonglong)uVar16 * 0x13 >> 0x20) +
                       (uint)bVar32;
        break;
      }
      iVar30 = iVar25 + 8;
      puVar26 = (uint *)((int)local_130 + iVar25 + 8);
      uVar17 = *puVar26;
      iVar31 = *(int *)(local_120 + iVar25 + -4);
      *puVar26 = uVar17 + uVar16;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      *(uint *)(local_120 + iVar25 + -4) = iVar31 + uVar15 + (uint)CARRY4(uVar17,uVar16);
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      iVar25 = iVar30;
    } while (iVar30 != 0x88);
    PF_PART16(local_120,0) = PF_PART16(auVar56,0);
    uVar14 = PF_PART8(local_120, 8);
    iVar25 = 0;
    auVar56 = local_120;
    PF_PART8(local_120, 8) = uVar14;
    do {
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      uVar14 = PF_PART8(local_120, 8);
      uVar15 = *(uint *)((int)local_130 + iVar25 + 4);
      *(undefined4 *)((int)local_130 + iVar25 + 4) = 0;
      PF_PART8(local_120, 8) = uVar14;
      auVar56 = local_120;
      uVar16 = *(uint *)((int)local_130 + iVar25) >> 0xf | uVar15 << 0x11;
      *(uint *)((int)local_130 + iVar25) = *(uint *)((int)local_130 + iVar25) & 0x7fff;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      uVar15 = uVar15 >> 0xf;
      if (iVar25 == 0x80) {
        uVar17 = (uint)((ulonglong)uVar16 * 0x13);
        bVar32 = CARRY4(local_130[0],uVar17);
        local_130[0] = local_130[0] + uVar17;
        local_130[1] = local_130[1] + uVar15 * 0x13 + (int)((ulonglong)uVar16 * 0x13 >> 0x20) +
                       (uint)bVar32;
        break;
      }
      iVar30 = iVar25 + 8;
      puVar26 = (uint *)((int)local_130 + iVar25 + 8);
      uVar17 = *puVar26;
      iVar31 = *(int *)(local_120 + iVar25 + -4);
      *puVar26 = uVar17 + uVar16;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      *(uint *)(local_120 + iVar25 + -4) = iVar31 + uVar15 + (uint)CARRY4(uVar17,uVar16);
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      iVar25 = iVar30;
    } while (iVar30 != 0x88);
    PF_PART16(local_120,0) = PF_PART16(auVar56,0);
    uVar14 = PF_PART8(local_120, 8);
    iVar25 = 0;
    auVar56 = local_120;
    PF_PART8(local_120, 8) = uVar14;
    do {
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      uVar14 = PF_PART8(local_120, 8);
      uVar15 = *(uint *)((int)local_130 + iVar25 + 4);
      *(undefined4 *)((int)local_130 + iVar25 + 4) = 0;
      PF_PART8(local_120, 8) = uVar14;
      auVar56 = local_120;
      uVar16 = *(uint *)((int)local_130 + iVar25) >> 0xf | uVar15 << 0x11;
      *(uint *)((int)local_130 + iVar25) = *(uint *)((int)local_130 + iVar25) & 0x7fff;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      uVar15 = uVar15 >> 0xf;
      if (iVar25 == 0x80) {
        uVar17 = (uint)((ulonglong)uVar16 * 0x13);
        bVar32 = CARRY4(local_130[0],uVar17);
        local_130[0] = local_130[0] + uVar17;
        local_130[1] = local_130[1] + uVar15 * 0x13 + (int)((ulonglong)uVar16 * 0x13 >> 0x20) +
                       (uint)bVar32;
        break;
      }
      iVar30 = iVar25 + 8;
      puVar26 = (uint *)((int)local_130 + iVar25 + 8);
      uVar17 = *puVar26;
      iVar31 = *(int *)(local_120 + iVar25 + -4);
      *puVar26 = uVar17 + uVar16;
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      *(uint *)(local_120 + iVar25 + -4) = iVar31 + uVar15 + (uint)CARRY4(uVar17,uVar16);
      PF_PART16(local_120,0) = PF_PART16(auVar56,0);
      auVar56 = local_120;
      iVar25 = iVar30;
    } while (iVar30 != 0x88);
    PF_PART16(local_120,0) = PF_PART16(auVar56,0);
    uVar14 = PF_PART8(local_120, 8);
    PF_PART4(auVar3, 4) = local_130[1];
    PF_PART4(auVar3, 0) = local_130[0];
    PF_PART8(auVar3, 8) = local_128;
    PF_PART8(auVar4, 8) = local_110[1];
    PF_PART8(auVar4, 0) = local_110[0];
    uVar50 = VectorCopyNarrow(auVar3,8);
    PF_PART8(auVar5, 8) = local_100[1];
    PF_PART8(auVar5, 0) = local_100[0];
    uVar33 = VectorCopyNarrow(auVar4,8);
    PF_PART8(auVar6, 8) = local_f0[1];
    PF_PART8(auVar6, 0) = local_f0[0];
    uVar36 = VectorCopyNarrow(auVar5,8);
    PF_PART8(auVar7, 8) = local_e0[1];
    PF_PART8(auVar7, 0) = local_e0[0];
    uVar37 = VectorCopyNarrow(auVar6,8);
    uVar44 = VectorCopyNarrow(auVar7,8);
    PF_PART8(auVar9, 8) = local_d0[1];
    PF_PART8(auVar9, 0) = local_d0[0];
    uVar55 = VectorCopyNarrow(local_120,8);
    PF_PART8(auVar11, 8) = local_c0[1];
    PF_PART8(auVar11, 0) = local_c0[0];
    uVar45 = VectorCopyNarrow(auVar9,8);
    *(undefined8 *)param_1 = uVar50;
    *(undefined8 *)(param_1 + 2) = uVar55;
    uVar50 = VectorCopyNarrow(auVar11,8);
    param_1[0x10] = local_b0;
    *(undefined8 *)(param_1 + 4) = uVar33;
    *(undefined8 *)(param_1 + 6) = uVar36;
    *(undefined8 *)(param_1 + 8) = uVar37;
    *(undefined8 *)(param_1 + 10) = uVar44;
    *(undefined8 *)(param_1 + 0xc) = uVar45;
    *(undefined8 *)(param_1 + 0xe) = uVar50;
    PF_PART8(local_120, 8) = uVar14;
    recovered_1000e528(param_1);
  }
  return;
}

#undef local_c0
#undef local_b0
#undef local_ac
#undef uStack_48
#undef local_a8
#undef local_a4
#undef uStack_28
#undef local_a0
#undef local_90
#undef local_80
#undef local_70
#undef local_60
#undef local_50
#undef local_40
#undef local_30
#undef local_130
#undef local_128
#undef local_120
#undef local_110
#undef local_100
#undef local_f0
#undef local_e0
#undef local_d0

#undef DAT_1000ffb4
#define DAT_1000ffb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x684U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e528
 */

void recovered_1000e528(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_1 != (uint *)0x0) {
    iVar2 = 0;
    do {
      uVar4 = param_1[iVar2] >> 0xf;
      param_1[iVar2] = param_1[iVar2] & 0x7fff;
      if (iVar2 == 0x10) {
        *param_1 = uVar4 * 0x13 + *param_1;
        break;
      }
      iVar1 = iVar2 + 1;
      param_1[iVar2 + 1] = param_1[iVar2 + 1] + uVar4;
      iVar2 = iVar1;
    } while (iVar1 != 0x11);
    iVar2 = 0;
    do {
      uVar4 = param_1[iVar2] >> 0xf;
      param_1[iVar2] = param_1[iVar2] & 0x7fff;
      if (iVar2 == 0x10) {
        *param_1 = uVar4 * 0x13 + *param_1;
        break;
      }
      iVar1 = iVar2 + 1;
      param_1[iVar2 + 1] = param_1[iVar2 + 1] + uVar4;
      iVar2 = iVar1;
    } while (iVar1 != 0x11);
    iVar2 = 0;
    do {
      uVar4 = param_1[iVar2] >> 0xf;
      param_1[iVar2] = param_1[iVar2] & 0x7fff;
      if (iVar2 == 0x10) {
        *param_1 = uVar4 * 0x13 + *param_1;
        break;
      }
      iVar1 = iVar2 + 1;
      param_1[iVar2 + 1] = param_1[iVar2 + 1] + uVar4;
      iVar2 = iVar1;
    } while (iVar1 != 0x11);
    iVar2 = 0;
    do {
      uVar4 = param_1[iVar2] >> 0xf;
      param_1[iVar2] = param_1[iVar2] & 0x7fff;
      if (iVar2 == 0x10) {
        *param_1 = uVar4 * 0x13 + *param_1;
        break;
      }
      iVar1 = iVar2 + 1;
      param_1[iVar2 + 1] = param_1[iVar2 + 1] + uVar4;
      iVar2 = iVar1;
    } while (iVar1 != 0x11);
    if (param_1[0x10] < 0x8000) {
      if (param_1[0x10] != 0x7fff) {
        return;
      }
      if (param_1[0xf] >> 0xf == 0) {
        if (param_1[0xf] != 0x7fff) {
          return;
        }
        if (param_1[0xe] >> 0xf == 0) {
          if (param_1[0xe] != 0x7fff) {
            return;
          }
          if (param_1[0xd] >> 0xf == 0) {
            if (param_1[0xd] != 0x7fff) {
              return;
            }
            if (param_1[0xc] >> 0xf == 0) {
              if (param_1[0xc] != 0x7fff) {
                return;
              }
              if (param_1[0xb] >> 0xf == 0) {
                if (param_1[0xb] != 0x7fff) {
                  return;
                }
                if (param_1[10] >> 0xf == 0) {
                  if (param_1[10] != 0x7fff) {
                    return;
                  }
                  if (param_1[9] >> 0xf == 0) {
                    if (param_1[9] != 0x7fff) {
                      return;
                    }
                    if (param_1[8] >> 0xf == 0) {
                      if (param_1[8] != 0x7fff) {
                        return;
                      }
                      if (param_1[7] >> 0xf == 0) {
                        if (param_1[7] != 0x7fff) {
                          return;
                        }
                        if (param_1[6] >> 0xf == 0) {
                          if (param_1[6] != 0x7fff) {
                            return;
                          }
                          if (param_1[5] >> 0xf == 0) {
                            if (param_1[5] != 0x7fff) {
                              return;
                            }
                            if (param_1[4] >> 0xf == 0) {
                              if (param_1[4] != 0x7fff) {
                                return;
                              }
                              if (param_1[3] >> 0xf == 0) {
                                if (param_1[3] != 0x7fff) {
                                  return;
                                }
                                if (param_1[2] >> 0xf == 0) {
                                  if (param_1[2] != 0x7fff) {
                                    return;
                                  }
                                  if (param_1[1] >> 0xf == 0) {
                                    if (param_1[1] != 0x7fff) {
                                      return;
                                    }
                                    if (*param_1 < 0x7fed) {
                                      return;
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
      }
    }
    uVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = param_1[-iVar2];
      uVar3 = (&DAT_1000ffb4)[-iVar2] + uVar4;
      bVar6 = uVar5 < uVar3;
      if (bVar6) {
        uVar5 = uVar5 + 0x8000;
      }
      uVar4 = (uint)bVar6;
      param_1[-iVar2] = uVar5 - uVar3;
      bVar6 = iVar2 != -0x10;
      iVar2 = iVar2 + -1;
    } while (bVar6);
  }
  return;
}

#undef DAT_1000ffb4

static const unsigned char pf_literal_1000e850_DAT_1000e9b0[] __attribute__((aligned(16)))={0x7f,0x52,0x0e,0x51,0x8c,0x68,0x05,0x9b};
#undef DAT_1000e9b0
#define DAT_1000e9b0 (*(uint64_t *)((uintptr_t)pf_literal_1000e850_DAT_1000e9b0))
static const unsigned char pf_literal_1000e850_DAT_1000e9b8[] __attribute__((aligned(16)))={0xab,0xd9,0x83,0x1f,0x19,0xcd,0xe0,0x5b};
#undef DAT_1000e9b8
#define DAT_1000e9b8 (*(uint64_t *)((uintptr_t)pf_literal_1000e850_DAT_1000e9b8))
static const unsigned char pf_literal_1000e850_DAT_1000e9c0[] __attribute__((aligned(16)))={0x67,0xe6,0x09,0x6a,0x85,0xae,0x67,0xbb};
#undef DAT_1000e9c0
#define DAT_1000e9c0 (*(uint64_t *)((uintptr_t)pf_literal_1000e850_DAT_1000e9c0))
static const unsigned char pf_literal_1000e850_DAT_1000e9c8[] __attribute__((aligned(16)))={0x72,0xf3,0x6e,0x3c,0x3a,0xf5,0x4f,0xa5};
#undef DAT_1000e9c8
#define DAT_1000e9c8 (*(uint64_t *)((uintptr_t)pf_literal_1000e850_DAT_1000e9c8))
#define uStack_2c (*(uint *)(pf_stack_frame + 196))
#define uStack_28 (*(uint *)(pf_stack_frame + 200))
#define uStack_24 (*(uint *)(pf_stack_frame + 204))
#define local_e0 (*(uint *)(pf_stack_frame + 16))
#define local_d0 (*(uint *)(pf_stack_frame + 32))
#define local_c0 (*(uint *)(pf_stack_frame + 48))
#define local_b0 (*(uint *)(pf_stack_frame + 64))
#define local_a0 (*(uint *)(pf_stack_frame + 80))
#define local_90 (*(uint *)(pf_stack_frame + 96))
#define local_80 (*(uint *)(pf_stack_frame + 112))
#define local_70 (*(uint *)(pf_stack_frame + 128))
#define local_60 (*(uint *)(pf_stack_frame + 144))
#define local_50 (*(uint *)(pf_stack_frame + 160))
#define local_40 (*(uint *)(pf_stack_frame + 176))
#define local_30 (*(uint *)(pf_stack_frame + 192))
#define uStack_dc (*(uint *)(pf_stack_frame + 20))
#define uStack_d8 (*(uint *)(pf_stack_frame + 24))
#define uStack_d4 (*(uint *)(pf_stack_frame + 28))
#define uStack_cc (*(uint *)(pf_stack_frame + 36))
#define uStack_c8 (*(uint *)(pf_stack_frame + 40))
#define uStack_c4 (*(uint *)(pf_stack_frame + 44))
#define uStack_bc (*(uint *)(pf_stack_frame + 52))
#define uStack_b8 (*(uint *)(pf_stack_frame + 56))
#define uStack_b4 (*(uint *)(pf_stack_frame + 60))
#define uStack_ac (*(uint *)(pf_stack_frame + 68))
#define uStack_a8 (*(uint *)(pf_stack_frame + 72))
#define uStack_a4 (*(uint *)(pf_stack_frame + 76))
#define uStack_9c (*(uint *)(pf_stack_frame + 84))
#define uStack_98 (*(uint *)(pf_stack_frame + 88))
#define uStack_94 (*(uint *)(pf_stack_frame + 92))
#define uStack_8c (*(uint *)(pf_stack_frame + 100))
#define uStack_88 (*(uint *)(pf_stack_frame + 104))
#define uStack_84 (*(uint *)(pf_stack_frame + 108))
#define uStack_7c (*(uint *)(pf_stack_frame + 116))
#define uStack_78 (*(uint *)(pf_stack_frame + 120))
#define uStack_74 (*(uint *)(pf_stack_frame + 124))
#define uStack_6c (*(uint *)(pf_stack_frame + 132))
#define uStack_68 (*(uint *)(pf_stack_frame + 136))
#define uStack_64 (*(uint *)(pf_stack_frame + 140))
#define uStack_5c (*(uint *)(pf_stack_frame + 148))
#define uStack_58 (*(uint *)(pf_stack_frame + 152))
#define uStack_54 (*(uint *)(pf_stack_frame + 156))
#define uStack_4c (*(uint *)(pf_stack_frame + 164))
#define uStack_48 (*(uint *)(pf_stack_frame + 168))
#define uStack_44 (*(uint *)(pf_stack_frame + 172))
#define uStack_3c (*(uint *)(pf_stack_frame + 180))
#define uStack_38 (*(uint *)(pf_stack_frame + 184))
#define uStack_34 (*(uint *)(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e850
 */

void recovered_1000e850(void *inner,void *outer,void *key)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  recovered_10003cf0(&local_60,0,0x40);
  if (key != (void *)0x0) {
    recovered_10003560(&local_60,key,0x20);
  }
  uVar3 = DAT_1000e9b8;
  PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar1, 0) = 0x5c5c5c5c5c5c5c5c;
  auVar1 = auVar1 << 0x40 | auVar1;
  local_b0 = PF_PART4(auVar1, 0);
  uStack_ac = PF_PART4(auVar1, 4);
  uStack_a8 = PF_PART4(auVar1, 8);
  uStack_a4 = PF_PART4(auVar1, 12);
  PF_PART8(auVar2, 8) = SUB168((uint128)0x0,8);
  PF_PART8(auVar2, 0) = 0x3636363636363636;
  auVar2 = auVar2 << 0x40 | auVar2;
  local_70 = PF_PART4(auVar2, 0);
  uStack_6c = PF_PART4(auVar2, 4);
  uStack_68 = PF_PART4(auVar2, 8);
  uStack_64 = PF_PART4(auVar2, 12);
  local_90 = local_50 ^ local_70;
  uStack_8c = uStack_4c ^ uStack_6c;
  uStack_88 = uStack_48 ^ uStack_68;
  uStack_84 = uStack_44 ^ uStack_64;
  local_d0 = local_50 ^ local_b0;
  uStack_cc = uStack_4c ^ uStack_ac;
  uStack_c8 = uStack_48 ^ uStack_a8;
  uStack_c4 = uStack_44 ^ uStack_a4;
  local_c0 = local_40 ^ local_b0;
  uStack_bc = uStack_3c ^ uStack_ac;
  uStack_b8 = uStack_38 ^ uStack_a8;
  uStack_b4 = uStack_34 ^ uStack_a4;
  local_80 = local_40 ^ local_70;
  uStack_7c = uStack_3c ^ uStack_6c;
  uStack_78 = uStack_38 ^ uStack_68;
  uStack_74 = uStack_34 ^ uStack_64;
  local_e0 = local_60 ^ local_b0;
  uStack_dc = uStack_5c ^ uStack_ac;
  uStack_d8 = uStack_58 ^ uStack_a8;
  uStack_d4 = uStack_54 ^ uStack_a4;
  local_a0 = local_60 ^ local_70;
  uStack_9c = uStack_5c ^ uStack_6c;
  uStack_98 = uStack_58 ^ uStack_68;
  uStack_94 = uStack_54 ^ uStack_64;
  local_b0 = local_30 ^ local_b0;
  uStack_ac = uStack_2c ^ uStack_ac;
  uStack_a8 = uStack_28 ^ uStack_a8;
  uStack_a4 = uStack_24 ^ uStack_a4;
  local_70 = local_30 ^ local_70;
  uStack_6c = uStack_2c ^ uStack_6c;
  uStack_68 = uStack_28 ^ uStack_68;
  uStack_64 = uStack_24 ^ uStack_64;
  if (inner != (void *)0x0) {
    *(undefined8 *)((int)inner + 0x10) = DAT_1000e9b0;
    *(undefined8 *)((int)inner + 0x18) = uVar3;
    uVar4 = DAT_1000e9c8;
    uVar3 = DAT_1000e9c0;
    *(undefined4 *)((int)inner + 0x24) = 0;
    *(undefined4 *)((int)inner + 0x20) = 0;
    *(undefined8 *)inner = uVar3;
    *(undefined8 *)((int)inner + 8) = uVar4;
    *(undefined4 *)((int)inner + 0x68) = 0;
  }
  recovered_1000a550(inner,&local_a0,0x40);
  uVar3 = DAT_1000e9b8;
  if (outer != (void *)0x0) {
    *(undefined8 *)((int)outer + 0x10) = DAT_1000e9b0;
    *(undefined8 *)((int)outer + 0x18) = uVar3;
    uVar4 = DAT_1000e9c8;
    uVar3 = DAT_1000e9c0;
    *(undefined4 *)((int)outer + 0x24) = 0;
    *(undefined4 *)((int)outer + 0x20) = 0;
    *(undefined8 *)outer = uVar3;
    *(undefined8 *)((int)outer + 8) = uVar4;
    *(undefined4 *)((int)outer + 0x68) = 0;
  }
  recovered_1000a550(outer,&local_e0,0x40);
  return;
}

#undef DAT_1000e9b0
#undef DAT_1000e9b8
#undef DAT_1000e9c0
#undef DAT_1000e9c8
#undef uStack_2c
#undef uStack_28
#undef uStack_24
#undef local_e0
#undef local_d0
#undef local_c0
#undef local_b0
#undef local_a0
#undef local_90
#undef local_80
#undef local_70
#undef local_60
#undef local_50
#undef local_40
#undef local_30
#undef uStack_dc
#undef uStack_d8
#undef uStack_d4
#undef uStack_cc
#undef uStack_c8
#undef uStack_c4
#undef uStack_bc
#undef uStack_b8
#undef uStack_b4
#undef uStack_ac
#undef uStack_a8
#undef uStack_a4
#undef uStack_9c
#undef uStack_98
#undef uStack_94
#undef uStack_8c
#undef uStack_88
#undef uStack_84
#undef uStack_7c
#undef uStack_78
#undef uStack_74
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_5c
#undef uStack_58
#undef uStack_54
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_3c
#undef uStack_38
#undef uStack_34

#undef DAT_1000fc50
#define DAT_1000fc50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x320U)))
#undef DAT_1000fff8
#define DAT_1000fff8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c8U)))
#define local_1c (*(undefined1 *)(pf_stack_frame + 20))
#define local_1b (*(undefined1 *)(pf_stack_frame + 21))
#define local_1a (*(undefined1 *)(pf_stack_frame + 22))
#define local_19 (*(byte *)(pf_stack_frame + 23))
#define local_18 (*(undefined1 *)(pf_stack_frame + 24))
#define local_17 (*(undefined1 *)(pf_stack_frame + 25))
#define local_16 (*(undefined1 *)(pf_stack_frame + 26))
#define local_15 (*(undefined1 *)(pf_stack_frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9d0
 */

void recovered_1000e9d0(void *context,void *output)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if (context == (void *)0x0) {
    return;
  }
  if (output != (void *)0x0) {
    uVar1 = *(uint *)((int)context + 0x20);
    uVar3 = *(uint *)((int)context + 0x24);
    local_19 = (byte)(uVar1 >> 0x1d) | (byte)(uVar3 << 3);
    local_15 = (undefined1)(uVar1 << 3);
    local_16 = (undefined1)(uVar1 >> 5);
    local_17 = (undefined1)(uVar1 >> 0xd);
    local_18 = (undefined1)(uVar1 >> 0x15);
    local_1a = (undefined1)(uVar3 >> 5);
    local_1b = (undefined1)(uVar3 >> 0xd);
    local_1c = (undefined1)(uVar3 >> 0x15);
    recovered_1000a550(context,&DAT_1000fc50,1);
    iVar2 = *(int *)((int)context + 0x68);
    while (iVar2 != 0x38) {
      recovered_1000a550(context,&DAT_1000fff8,1);
      iVar2 = *(int *)((int)context + 0x68);
    }
    recovered_1000a550(context,&local_1c,8);
    uVar1 = *(uint *)context;
    *(uint *)output =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 4);
    *(uint *)((int)output + 4) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 8);
    *(uint *)((int)output + 8) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0xc);
    *(uint *)((int)output + 0xc) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x10);
    *(uint *)((int)output + 0x10) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x14);
    *(uint *)((int)output + 0x14) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x18);
    *(uint *)((int)output + 0x18) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)context + 0x1c);
    *(uint *)((int)output + 0x1c) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  }
  return;
}

#undef DAT_1000fc50
#undef DAT_1000fff8
#undef local_1c
#undef local_1b
#undef local_1a
#undef local_19
#undef local_18
#undef local_17
#undef local_16
#undef local_15

#undef str_1000fc52
#define str_1000fc52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#define auStack_1bd (*(undefined1 (*)[445])(pf_stack_frame + 35))
#define local_1c4 (*(ulong *)(pf_stack_frame + 28))
#define auStack_140 (*(undefined1 (*)[320])(pf_stack_frame + 160))
#define local_1c0 (*(undefined1 *)(pf_stack_frame + 32))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 192))
#define local_1bf (*(undefined1 *)(pf_stack_frame + 33))
#define auStack_b4 (*(undefined1 (*)[180])(pf_stack_frame + 300))
#define local_1be (*(undefined1 *)(pf_stack_frame + 34))
#define local_45 (*(byte *)(pf_stack_frame + 411))
#define auStack_44 (*(undefined1 (*)[68])(pf_stack_frame + 412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb08
 */

void recovered_1000eb08(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  void *extraout_r1;
  int iVar5;

  uVar2 = recovered_10004624(str_1000fc52);
  if (label != (char *)0x0) {
    uVar3 = recovered_10004624(label);
    pvVar1 = extraout_r1;
    if (secret != (void *)0x0) {
      pvVar1 = output;
    }
    if ((secret != (void *)0x0 && pvVar1 != (void *)0x0) && (uVar3 + uVar2 < 0x100)) {
      iVar5 = uVar3 + uVar2 + 3;
      local_1c4 = iVar5 + 1;
      if (local_1c4 + context_length < 0x81) {
        local_1be = (undefined1)(uVar3 + uVar2);
        local_1bf = (undefined1)output_length;
        local_1c0 = (undefined1)(output_length >> 8);
        recovered_10003560(auStack_1bd,str_1000fc52,uVar2);
        recovered_10003560(auStack_1bd + uVar2,label,uVar3);
        auStack_1bd[iVar5 + -3] = (char)context_length;
        if (context_length != 0) {
          recovered_10003560(auStack_1bd + iVar5 + -2,context,context_length);
          local_1c4 = local_1c4 + context_length;
        }
        local_45 = 1;
        if (output_length != 0) {
          recovered_1000e850(auStack_b4,auStack_120,secret);
          recovered_1000a550(auStack_b4,&local_1c0,local_1c4);
          recovered_1000a550(auStack_b4,&local_45,1);
          recovered_1000e9d0(auStack_b4,auStack_140);
          recovered_1000a550(auStack_120,auStack_140,0x20);
          recovered_1000e9d0(auStack_120,auStack_44);
          uVar2 = 0x20;
          if (output_length < 0x20) {
            uVar2 = output_length;
          }
          recovered_10003560(output,auStack_44,uVar2);
          uVar4 = local_45 + 1;
          local_45 = (byte)uVar4;
          if (((output_length < 0x21) || ((uVar4 & 0xff) == uVar4)) && (0x20 < output_length)) {
            do {
              recovered_1000e850(auStack_b4,auStack_120,secret);
              recovered_1000a550(auStack_b4,auStack_44,0x20);
              recovered_1000a550(auStack_b4,&local_1c0,local_1c4);
              recovered_1000a550(auStack_b4,&local_45,1);
              recovered_1000e9d0(auStack_b4,auStack_140);
              recovered_1000a550(auStack_120,auStack_140,0x20);
              recovered_1000e9d0(auStack_120,auStack_44);
              uVar3 = output_length - uVar2;
              if (0x1f < uVar3) {
                uVar3 = 0x20;
              }
              recovered_10003560((void *)((int)output + uVar2),auStack_44,uVar3);
              uVar2 = uVar3 + uVar2;
              uVar4 = local_45 + 1;
              local_45 = (byte)uVar4;
            } while ((((uVar4 & 0xff) == uVar4) || (output_length <= uVar2)) &&
                    (uVar2 < output_length));
          }
        }
      }
    }
  }
  return;
}

#undef str_1000fc52
#undef auStack_1bd
#undef local_1c4
#undef auStack_140
#undef local_1c0
#undef auStack_120
#undef local_1bf
#undef auStack_b4
#undef local_1be
#undef local_45
#undef auStack_44

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_1000edb8(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_1000f620(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_10003468(total);
 if(!message){for(unsigned i=0;i<16;++i)((uint8_t *)output)[i]=0;return;}
 for(unsigned long i=0;i<total;++i)message[i]=0;
 for(unsigned i=0;i<5;++i)message[i]=((uint8_t *)associated)[i];
 for(unsigned long i=0;i<size;++i)message[16+i]=((uint8_t *)ciphertext)[i];
 message[16+padded]=5;
 for(unsigned i=0;i<8;++i)message[24+padded+i]=(uint8_t)((uint64_t)size>>(8*i));
 uint8_t clamp[16];for(unsigned i=0;i<16;++i)clamp[i]=one_time[i];
 clamp[3]&=15;clamp[7]&=15;clamp[11]&=15;clamp[15]&=15;clamp[4]&=252;clamp[8]&=252;clamp[12]&=252;
 const uint32_t mask=0x3ffffffU;
 uint32_t r[5]={pf_tls_load32(clamp)&mask,(pf_tls_load32(clamp+3)>>2)&mask,(pf_tls_load32(clamp+6)>>4)&mask,(pf_tls_load32(clamp+9)>>6)&mask,pf_tls_load32(clamp+12)>>8};
 uint32_t h[5]={0};
 for(unsigned long offset=0;offset<total;offset+=16){
  uint8_t *p=message+offset;
  h[0]+=pf_tls_load32(p)&mask;h[1]+=(pf_tls_load32(p+3)>>2)&mask;h[2]+=(pf_tls_load32(p+6)>>4)&mask;h[3]+=(pf_tls_load32(p+9)>>6)&mask;h[4]+=(pf_tls_load32(p+12)>>8)|(1U<<24);
  uint64_t d[5]={0};
  for(unsigned i=0;i<5;++i)for(unsigned j=0;j<5;++j){unsigned index=(i+5-j)%5;uint64_t coefficient=r[index];if(j>i)coefficient*=5;d[i]+=(uint64_t)h[j]*coefficient;}
  for(unsigned i=0;i<4;++i){h[i]=(uint32_t)d[i]&mask;d[i+1]+=d[i]>>26;}
  h[4]=(uint32_t)d[4]&mask;h[0]+=(uint32_t)(d[4]>>26)*5;h[1]+=h[0]>>26;h[0]&=mask;
 }
 for(unsigned pass=0;pass<3;++pass){uint32_t carry=0;for(unsigned i=0;i<5;++i){uint32_t value=h[i]+carry;h[i]=value&mask;carry=value>>26;}h[0]+=carry*5;}
 uint32_t g[5],carry=5;
 for(unsigned i=0;i<4;++i){uint32_t value=h[i]+carry;g[i]=value&mask;carry=value>>26;}
 g[4]=h[4]+carry-(1U<<26);uint32_t select=(g[4]>>31)-1;g[4]&=mask;
 for(unsigned i=0;i<5;++i)h[i]=(h[i]&~select)|(g[i]&select);
 uint32_t words[4]={h[0]|h[1]<<26,h[1]>>6|h[2]<<20,h[2]>>12|h[3]<<14,h[3]>>18|h[4]<<8};
 uint64_t high=0;
 for(unsigned i=0;i<4;++i){uint64_t value=(uint64_t)words[i]+pf_tls_load32(one_time+16+4*i)+high;pf_tls_store32((uint8_t *)output+4*i,(uint32_t)value);high=value>>32;}
 recovered_100034bc(message);
}




static const unsigned char pf_literal_1000f620_DAT_1000f920[] __attribute__((aligned(16)))={0x65,0x78,0x70,0x61,0x6e,0x64,0x20,0x33};
#undef DAT_1000f920
#define DAT_1000f920 (*(uint64_t *)((uintptr_t)pf_literal_1000f620_DAT_1000f920))
static const unsigned char pf_literal_1000f620_DAT_1000f928[] __attribute__((aligned(16)))={0x32,0x2d,0x62,0x79,0x74,0x65,0x20,0x6b};
#undef DAT_1000f928
#define DAT_1000f928 (*(uint64_t *)((uintptr_t)pf_literal_1000f620_DAT_1000f928))
#define uStack_58 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 136))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 152))
#define local_bc (*(uint *)(pf_stack_frame + 20))
#define local_b8 (*(uint *)(pf_stack_frame + 24))
#define local_b4 (*(uint *)(pf_stack_frame + 28))
#define local_b0 (*(uint *)(pf_stack_frame + 32))
#define local_ac (*(uint *)(pf_stack_frame + 36))
#define local_a8 (*(uint *)(pf_stack_frame + 40))
#define local_a4 (*(uint *)(pf_stack_frame + 44))
#define local_a0 (*(uint (*)[40])(pf_stack_frame + 48))
#define local_60 (*(undefined8 *)(pf_stack_frame + 112))
#define local_50 (*(undefined8 *)(pf_stack_frame + 128))
#define local_40 (*(undefined8 *)(pf_stack_frame + 144))
#define local_30 (*(uint *)(pf_stack_frame + 160))
#define local_2c (*(undefined4 *)(pf_stack_frame + 164))
#define local_28 (*(undefined4 *)(pf_stack_frame + 168))
#define local_24 (*(undefined4 *)(pf_stack_frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f620
 */

void recovered_1000f620(void *key,uint counter,void *nonce,void *output)

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

  local_50 = *(undefined8 *)key;
  uStack_48 = *(undefined8 *)((int)key + 8);
  local_60 = DAT_1000f920;
  uStack_58 = DAT_1000f928;
  local_40 = *(undefined8 *)((int)key + 0x10);
  uStack_38 = *(undefined8 *)((int)key + 0x18);
  local_2c = *(undefined4 *)nonce;
  local_28 = *(undefined4 *)((int)nonce + 4);
  local_24 = *(undefined4 *)((int)nonce + 8);
  local_30 = counter;
  recovered_10003560(local_a0,&local_60,0x40);
  local_b4 = local_a0[0xe];
  local_a4 = local_a0[3];
  local_ac = local_a0[0xd];
  local_b8 = local_a0[0xf];
  local_a8 = local_a0[7];
  iVar1 = 10;
  local_bc = local_a0[8];
  local_b0 = local_a0[0xc];
  do {
    local_ac = local_ac ^ local_a0[1] + local_a0[5];
    local_a0[9] = local_a0[9] + (local_ac >> 0x10 | local_ac << 0x10);
    uVar2 = local_a0[9] ^ local_a0[5];
    local_a0[1] = local_a0[1] + local_a0[5] + (uVar2 >> 0x14 | uVar2 << 0xc);
    uVar10 = local_a0[1] ^ (local_ac >> 0x10 | local_ac << 0x10);
    uVar7 = local_a0[9] + (uVar10 >> 0x18 | uVar10 << 8);
    local_b4 = local_b4 ^ local_a0[2] + local_a0[6];
    local_a0[10] = local_a0[10] + (local_b4 >> 0x10 | local_b4 << 0x10);
    uVar4 = local_a0[10] ^ local_a0[6];
    local_a0[2] = local_a0[2] + local_a0[6] + (uVar4 >> 0x14 | uVar4 << 0xc);
    uVar3 = local_a0[2] ^ (local_b4 >> 0x10 | local_b4 << 0x10);
    local_b0 = local_b0 ^ local_a0[0] + local_a0[4];
    local_bc = local_bc + (local_b0 >> 0x10 | local_b0 << 0x10);
    uVar8 = local_bc ^ local_a0[4];
    local_a0[0] = local_a0[0] + local_a0[4] + (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar6 = local_a0[0] ^ (local_b0 >> 0x10 | local_b0 << 0x10);
    local_bc = local_bc + (uVar6 >> 0x18 | uVar6 << 8);
    local_b8 = local_b8 ^ local_a4 + local_a8;
    uVar9 = local_bc ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    local_a0[0xb] = local_a0[0xb] + (local_b8 >> 0x10 | local_b8 << 0x10);
    uVar11 = local_a0[0xb] ^ local_a8;
    uVar5 = local_a4 + local_a8 + (uVar11 >> 0x14 | uVar11 << 0xc);
    local_a4 = uVar5 + (uVar9 >> 0x19 | uVar9 << 7);
    uVar8 = local_a4 ^ (uVar3 >> 0x18 | uVar3 << 8);
    local_a0[9] = uVar7 + (uVar8 >> 0x10 | uVar8 << 0x10);
    uVar9 = local_a0[9] ^ (uVar9 >> 0x19 | uVar9 << 7);
    local_a4 = local_a4 + (uVar9 >> 0x14 | uVar9 << 0xc);
    uVar8 = local_a4 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
    local_b4 = uVar8 >> 0x18 | uVar8 << 8;
    local_a0[9] = local_a0[9] + (uVar8 >> 0x18 | uVar8 << 8);
    uVar8 = local_a0[9] ^ (uVar9 >> 0x14 | uVar9 << 0xc);
    uVar5 = uVar5 ^ (local_b8 >> 0x10 | local_b8 << 0x10);
    local_a0[4] = uVar8 >> 0x19 | uVar8 << 7;
    local_a0[0xb] = local_a0[0xb] + (uVar5 >> 0x18 | uVar5 << 8);
    uVar8 = local_a0[0xb] ^ (uVar11 >> 0x14 | uVar11 << 0xc);
    local_a0[2] = local_a0[2] + (uVar8 >> 0x19 | uVar8 << 7);
    uVar9 = local_a0[2] ^ (uVar10 >> 0x18 | uVar10 << 8);
    local_bc = local_bc + (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar8 = local_bc ^ (uVar8 >> 0x19 | uVar8 << 7);
    local_a0[2] = local_a0[2] + (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar9 = local_a0[2] ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    local_ac = uVar9 >> 0x18 | uVar9 << 8;
    local_bc = local_bc + (uVar9 >> 0x18 | uVar9 << 8);
    uVar8 = local_bc ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    local_a8 = uVar8 >> 0x19 | uVar8 << 7;
    local_a0[10] = local_a0[10] + (uVar3 >> 0x18 | uVar3 << 8);
    uVar8 = local_a0[10] ^ (uVar4 >> 0x14 | uVar4 << 0xc);
    local_a0[1] = local_a0[1] + (uVar8 >> 0x19 | uVar8 << 7);
    uVar3 = local_a0[1] ^ (uVar6 >> 0x18 | uVar6 << 8);
    local_a0[0xb] = local_a0[0xb] + (uVar3 >> 0x10 | uVar3 << 0x10);
    uVar8 = local_a0[0xb] ^ (uVar8 >> 0x19 | uVar8 << 7);
    local_a0[1] = local_a0[1] + (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar3 = local_a0[1] ^ (uVar3 >> 0x10 | uVar3 << 0x10);
    local_a0[0xb] = local_a0[0xb] + (uVar3 >> 0x18 | uVar3 << 8);
    local_b0 = uVar3 >> 0x18 | uVar3 << 8;
    uVar8 = local_a0[0xb] ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    local_a0[6] = uVar8 >> 0x19 | uVar8 << 7;
    uVar7 = uVar7 ^ (uVar2 >> 0x14 | uVar2 << 0xc);
    local_a0[0] = local_a0[0] + (uVar7 >> 0x19 | uVar7 << 7);
    uVar2 = local_a0[0] ^ (uVar5 >> 0x18 | uVar5 << 8);
    local_a0[10] = local_a0[10] + (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar8 = local_a0[10] ^ (uVar7 >> 0x19 | uVar7 << 7);
    local_a0[0] = local_a0[0] + (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar2 = local_a0[0] ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    local_a0[10] = local_a0[10] + (uVar2 >> 0x18 | uVar2 << 8);
    local_b8 = uVar2 >> 0x18 | uVar2 << 8;
    uVar8 = local_a0[10] ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    local_a0[5] = uVar8 >> 0x19 | uVar8 << 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_a0[0xe] = local_b4;
  local_a0[7] = local_a8;
  local_a0[0xc] = local_b0;
  local_a0[0xf] = local_b8;
  local_a0[8] = local_bc;
  local_a0[3] = local_a4;
  iVar1 = 0;
  local_a0[0xd] = local_ac;
  do {
    *(int *)((int)output + iVar1) =
         *(int *)((int)local_a0 + iVar1 + 0x40) + *(int *)((int)local_a0 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x40);
  return;
}

#undef DAT_1000f920
#undef DAT_1000f928
#undef uStack_58
#undef uStack_48
#undef uStack_38
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_60
#undef local_50
#undef local_40
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
