/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

uint recovered_10002b70(uint param_1,uint param_2)

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
 * Address: 0x10002bc0
 */

uint recovered_10002bc0(uint param_1,uint param_2)

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
 * Address: 0x10002bf8
 */

uint recovered_10002bf8(uint param_1,uint param_2)

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
 * Address: 0x10002c68
 */

uint recovered_10002c68(uint param_1,uint param_2)

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
 * Address: 0x10002cd4
 */

ulonglong recovered_10002cd4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10006478((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce4
 */

longlong recovered_10002ce4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100063b8((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf4
 */

float recovered_10002cf4(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006500(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

float recovered_10002d10(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006548(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d30
 */

void recovered_10002d30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_10010078 = 0;
  recovered_10002dbc();
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return;
}

#undef DAT_10010078
#undef DAT_10010080

#undef DAT_10010078
#define DAT_10010078 (*(char *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_1001007c
#define DAT_1001007c (*(int *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010084
#define DAT_10010084 (*(int *)(((uintptr_t)pf_module_state + 0x4dcU)))
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
 * Address: 0x10002dbc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002dbc(void)

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
        if (iVar11 == 0) goto LAB_10002fbc;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10007ee8((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_1001007c != 0) goto LAB_10002fec;
    }
  }
LAB_10002fbc:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10007ee8((int *)0x300000,piVar4,&local_24);
LAB_10002fec:
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
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000303c
 */

bool recovered_1000303c(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_100030b8(addresses,sizes,count);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return bVar1;
}

#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010084
#define DAT_10010084 (*(int * *)(((uintptr_t)pf_module_state + 0x4dcU)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b8
 */

bool recovered_100030b8(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10002dbc();
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
        recovered_10007ee8((int *)*param_1,(int *)*param_2,&local_24);
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
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
#define local_14 (*(ulong *)(pf_stack_frame + 28))
#define local_10 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003300
 */

bool recovered_10003300(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = size;
  local_10 = address;
  bVar1 = recovered_100030b8(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return bVar1;
}

#undef DAT_10010080
#undef local_14
#undef local_10

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003398
 */

uint recovered_10003398(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10002dbc();
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
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003448
 */

ulonglong recovered_10003448(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10002dbc();
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
#define DAT_1001007c (*(int * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003504
 */

uint recovered_10003504(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10002dbc();
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
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035ac
 */

ulonglong recovered_100035ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10002dbc();
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
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000365c
 */

void * recovered_1000365c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_100036e0(size,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar1;
}

#undef DAT_10010080

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x4dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e0
 */

uint * recovered_100036e0(int param_1,uint *param_2,uint *param_3)

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
    recovered_10002dbc();
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
              if (uVar7 < uVar8) goto joined_r0x100037c0;
            }
          }
          else {
joined_r0x100037c0:
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
LAB_100038b8:
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
                      puVar2 = recovered_100080e8(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_100038b8;
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
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003938
 */

void * recovered_10003938(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_100036e0(size,(uint *)0x0,(uint *)limit);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar1;
}

#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

void * recovered_100039c0(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (first <= last) {
    puVar2 = recovered_100036e0(size,(uint *)first,(uint *)last);
  }
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return puVar2;
}

#undef DAT_10010080

#undef DAT_10010080
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a50
 */

void recovered_10003a50(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003acc((int)pointer);
  DataMemoryBarrier(0xb);
  DAT_10010080 = 0;
  return;
}

#undef DAT_10010080

#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x4dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003acc
 */

void recovered_10003acc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10002dbc();
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
#define DAT_10010080 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint * *)(((uintptr_t)pf_module_state + 0x4dcU)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c38
 */

void * recovered_10003c38(void *pointer,ulong size)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
    iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
  } while (iVar7 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10010080 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x4d8U));
      iVar7 = pf_arm_strex32(((uintptr_t)pf_module_state+0x4d8U),1);
    } while (iVar7 != 0);
    DataMemoryBarrier(0xb);
  }
  if (pointer == (void *)0x0) {
    puVar3 = recovered_100036e0(size,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_10003e6c;
  }
  if (size == 0) {
    recovered_10003acc((int)pointer);
    puVar3 = (uint *)0x0;
    goto LAB_10003e6c;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < size) goto LAB_10003e6c;
  recovered_10002dbc();
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
    goto LAB_10003e6c;
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
        iVar4 = recovered_1000816c(puVar10,(int)puVar12);
        if (iVar4 != 0) {
          DAT_10010084 = *(uint **)((int)pointer + -0xc);
        }
        *(undefined1 *)((int)pointer + -4) = 0;
        puVar3 = pointer;
      }
      goto LAB_10003e6c;
    }
  }
  puVar6 = recovered_100036e0((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar6 == (uint *)0x0) goto LAB_10003e6c;
  puVar10 = (uint *)*puVar10;
  if (puVar10 < puVar12) {
    puVar12 = puVar10;
  }
  puVar3 = puVar6;
  puVar2 = pointer;
  if (puVar12 < &SupervisorCall) {
LAB_10003f3c:
    if (puVar12 != (uint *)0x0) goto LAB_10003f44;
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
            if (uVar14 == uVar11) goto LAB_10004124;
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
LAB_10004124:
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
          if (uVar14 == uVar11) goto LAB_10003f3c;
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
      goto LAB_10003f3c;
    }
LAB_10003f44:
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
      if (puVar12 == puVar13) goto LAB_10003fa0;
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
LAB_10003fa0:
  recovered_10003acc((int)pointer);
  puVar3 = puVar6;
LAB_10003e6c:
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
 * Address: 0x100041d8
 */

longlong recovered_100041d8(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000422c
 */

ulonglong recovered_1000422c(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10004280
 */

undefined8 recovered_10004280(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100042cc
 */

undefined8 recovered_100042cc(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100043b0
 */

undefined8 recovered_100043b0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004430
 */

undefined8 recovered_10004430(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004548
 */

undefined8 recovered_10004548(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004604
 */

void recovered_10004604(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000460c
 */

int recovered_1000460c(int param_1)

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
 * Address: 0x10004618
 */

void * recovered_10004618(ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x10004668. Too many branches */
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
 * Address: 0x1000466c
 */

void recovered_1000466c(void *pointer)

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
                    /* WARNING: Could not recover jumptable at 0x100046b8. Too many branches */
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
 * Address: 0x100046bc
 */

void * recovered_100046bc(void *pointer,ulong size)

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
                    /* WARNING: Could not recover jumptable at 0x1000470c. Too many branches */
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
 * Address: 0x10004710
 */

void recovered_10004710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000474c;
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
          if (uVar9 == uVar7) goto LAB_100048e0;
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
LAB_100048e0:
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
        if (uVar7 == uVar9) goto LAB_10004744;
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
LAB_10004744:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_1000474c:
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
 * Address: 0x10004994
 */

void recovered_10004994(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    goto LAB_100049dc;
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
          if (puVar7 == param_3) goto LAB_10004c68;
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
LAB_10004c68:
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
        if (param_3 == puVar7) goto LAB_10004ce4;
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
LAB_10004ce4:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_100049dc:
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
    goto LAB_10004a58;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_10004cf4:
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
          goto LAB_10004cf4;
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
        if (uVar8 == uVar10) goto LAB_10004dd0;
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
LAB_10004dd0:
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
      if (uVar10 == uVar8) goto LAB_10004e8c;
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
LAB_10004e8c:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10004a58:
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
 * Address: 0x10004ea0
 */

void recovered_10004ea0(byte *param_1,byte param_2,uint param_3)

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
  if (param_3 < 8) goto joined_r0x10005028;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10004f40:
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
        if (uVar5 == uVar6) goto joined_r0x10004fcc;
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
      goto joined_r0x10004f40;
    }
  }
joined_r0x10004fcc:
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
      if (uVar6 == uVar5) goto joined_r0x10005028;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x10005028:
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
 * Address: 0x100050a0
 */

void recovered_100050a0(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10005220;
  if (((uint)param_1 & 3) == 0) {
joined_r0x1000513c:
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
        if (uVar7 == uVar8) goto joined_r0x100051c0;
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
      goto joined_r0x1000513c;
    }
  }
joined_r0x100051c0:
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
      if (uVar7 == uVar8) goto joined_r0x10005220;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10005220:
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
 * Address: 0x1000529c
 */

void recovered_1000529c(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x1000541c;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10005338:
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
        if (uVar7 == uVar8) goto joined_r0x100053bc;
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
      goto joined_r0x10005338;
    }
  }
joined_r0x100053bc:
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
      if (uVar7 == uVar8) goto joined_r0x1000541c;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x1000541c:
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
 * Address: 0x10005498
 */

char * recovered_10005498(char *param_1,char param_2,int param_3)

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
 * Address: 0x100054cc
 */

int recovered_100054cc(uint *param_1,uint *param_2,uint param_3)

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
LAB_100055c4:
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
      if (uVar5 != uVar6) goto LAB_100056bc;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_100056bc;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_100056bc;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_100056bc;
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
LAB_100055f4:
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
      if (uVar5 != uVar6) goto LAB_100055f4;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_100056c4((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_100055c4;
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
LAB_100056bc:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056c4
 */

int recovered_100056c4(byte *param_1,byte *param_2)

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
 * Address: 0x10005714
 */

bool recovered_10005714(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005728
 */

bool recovered_10005728(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000573c
 */

bool recovered_1000573c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005754
 */

bool recovered_10005754(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

bool recovered_10005780(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

bool recovered_100057a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057b4
 */

int recovered_100057b4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057c4
 */

int recovered_100057c4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057d4
 */

int recovered_100057d4(int param_1)

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
 * Address: 0x100057fc
 */

int recovered_100057fc(byte *param_1,byte *param_2)

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
LAB_10005834:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10005834;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

int recovered_10005840(byte *param_1,byte *param_2)

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
LAB_10005878:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10005878;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005884
 */

void recovered_10005884(int param_1,int param_2)

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
 * Address: 0x100058a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_100058a0(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10005968;
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
          if (uVar8 == uVar11) goto LAB_10005afc;
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
LAB_10005afc:
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
        if (uVar11 == uVar8) goto LAB_10005960;
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
LAB_10005960:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10005968:
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
 * Address: 0x10005bb4
 */

char * recovered_10005bb4(char *param_1,char param_2)

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
 * Address: 0x10005be8
 */

int recovered_10005be8(char *param_1,char *param_2)

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
 * Address: 0x10005c4c
 */

ulong recovered_10005c4c(char *text,char *reject)

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
 * Address: 0x10005cb4
 */

char * recovered_10005cb4(char *param_1,char *param_2)

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
 * Address: 0x10005d14
 */

char * recovered_10005d14(char *param_1,char *param_2)

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


#undef DAT_1000fbcc
#define DAT_1000fbcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d78
 */

undefined * recovered_10005d78(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fbcc;
}

#undef DAT_1000fbcc

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x460U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d88
 */

undefined ** recovered_10005d88(void)

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
 * Address: 0x10005d98
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005d98(undefined4 *param_1)

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
 * Address: 0x10005e48
 */

double recovered_10005e48(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10005e8c
 */

double recovered_10005e8c(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10005f44
 */

double recovered_10005f44(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10005f7c
 */

double recovered_10005f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10005ffc
 */

double recovered_10005ffc(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000602c
 */

double recovered_1000602c(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10006070
 */

double recovered_10006070(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100061e8
#define DAT_100061e8 (*(double *)(0x100061e8U))
#undef DAT_100061f0
#define DAT_100061f0 (*(double *)(0x100061f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060b8
 */

double recovered_100060b8(undefined4 param_1,undefined4 param_2)

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
    return DAT_100061e8;
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
  return dVar4 + dVar4 + dVar5 * DAT_100061f0;
}

#undef DAT_100061e8
#undef DAT_100061f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f8
 */

longlong recovered_100061f8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_100063b8(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_100062b8
#define DAT_100062b8 (*(double *)(0x100062b8U))
#undef DAT_100062c0
#define DAT_100062c0 (*(double *)(0x100062c0U))
#undef DAT_100062c8
#define DAT_100062c8 (*(double *)(0x100062c8U))
#undef DAT_100062d0
#define DAT_100062d0 (*(double *)(0x100062d0U))
#undef DAT_100062d8
#define DAT_100062d8 (*(double *)(0x100062d8U))
#undef DAT_100062e0
#define DAT_100062e0 (*(double *)(0x100062e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006228
 */

double recovered_10006228(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_100062b8 < dVar1; dVar1 = dVar1 + DAT_100062c0
      ) {
  }
  for (; dVar1 < DAT_100062c8; dVar1 = dVar1 + DAT_100062d0) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100062d8 +
                 (dVar2 * dVar2 * dVar2) / DAT_100062e0);
}

#undef DAT_100062b8
#undef DAT_100062c0
#undef DAT_100062c8
#undef DAT_100062d0
#undef DAT_100062d8
#undef DAT_100062e0

#undef DAT_10006370
#define DAT_10006370 (*(double *)(0x10006370U))
#undef DAT_10006378
#define DAT_10006378 (*(double *)(0x10006378U))
#undef DAT_10006380
#define DAT_10006380 (*(double *)(0x10006380U))
#undef DAT_10006388
#define DAT_10006388 (*(double *)(0x10006388U))
#undef DAT_10006390
#define DAT_10006390 (*(double *)(0x10006390U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e8
 */

double recovered_100062e8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10006370 < dVar1; dVar1 = dVar1 + DAT_10006378
      ) {
  }
  for (; dVar1 < DAT_10006380; dVar1 = dVar1 + DAT_10006388) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10006390;
}

#undef DAT_10006370
#undef DAT_10006378
#undef DAT_10006380
#undef DAT_10006388
#undef DAT_10006390

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006398
 */

double recovered_10006398(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10006470
#define DAT_10006470 (*(double *)(0x10006470U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063b8
 */

longlong recovered_100063b8(double value)

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
  dVar8 = DAT_10006470;
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

#undef DAT_10006470

#undef DAT_100064f8
#define DAT_100064f8 (*(double *)(0x100064f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006478
 */

ulonglong recovered_10006478(double value)

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
  dVar8 = DAT_100064f8;
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

#undef DAT_100064f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006500
 */

double recovered_10006500(ulonglong value)

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
 * Address: 0x10006548
 */

double recovered_10006548(longlong value)

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


#undef DAT_10006618
#define DAT_10006618 (*(float *)(0x10006618U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065d8
 */

float recovered_100065d8(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_10006618;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_10006618

#undef DAT_100066d4
#define DAT_100066d4 (*(float *)(0x100066d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000661c
 */

float recovered_1000661c(float param_1,float *param_2)

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
    return DAT_100066d4;
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

#undef DAT_100066d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d8
 */

float recovered_100066d8(float param_1,uint param_2)

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


#undef DAT_100067a8
#define DAT_100067a8 (*(float *)(0x100067a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006724
 */

float recovered_10006724(float param_1,float param_2)

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
    return DAT_100067a8;
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

#undef DAT_100067a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067ac
 */

float recovered_100067ac(float param_1)

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
 * Address: 0x100067e4
 */

float recovered_100067e4(float param_1)

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
 * Address: 0x10006830
 */

double recovered_10006830(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10006884
 */

float recovered_10006884(float param_1)

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


#undef DAT_10006934
#define DAT_10006934 (*(float *)(0x10006934U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e0
 */

float recovered_100068e0(float param_1)

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
  return DAT_10006934;
}

#undef DAT_10006934

#undef DAT_10006a70
#define DAT_10006a70 (*(double *)(0x10006a70U))
#undef DAT_10006a78
#define DAT_10006a78 (*(float *)(0x10006a78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006938
 */

float recovered_10006938(float param_1)

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
    return DAT_10006a78;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10006a70);
}

#undef DAT_10006a70
#undef DAT_10006a78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a7c
 */

longlong recovered_10006a7c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_100063b8(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10006b48
#define DAT_10006b48 (*(double *)(0x10006b48U))
#undef DAT_10006b50
#define DAT_10006b50 (*(double *)(0x10006b50U))
#undef DAT_10006b58
#define DAT_10006b58 (*(double *)(0x10006b58U))
#undef DAT_10006b60
#define DAT_10006b60 (*(double *)(0x10006b60U))
#undef DAT_10006b68
#define DAT_10006b68 (*(double *)(0x10006b68U))
#undef DAT_10006b70
#define DAT_10006b70 (*(double *)(0x10006b70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ab0
 */

float recovered_10006ab0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10006b48 < dVar1; dVar1 = dVar1 + DAT_10006b50) {
  }
  for (; dVar1 < DAT_10006b58; dVar1 = dVar1 + DAT_10006b60) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10006b68 +
                         (dVar2 * dVar2 * dVar2) / DAT_10006b70));
}

#undef DAT_10006b48
#undef DAT_10006b50
#undef DAT_10006b58
#undef DAT_10006b60
#undef DAT_10006b68
#undef DAT_10006b70

#undef DAT_10006c08
#define DAT_10006c08 (*(double *)(0x10006c08U))
#undef DAT_10006c10
#define DAT_10006c10 (*(double *)(0x10006c10U))
#undef DAT_10006c18
#define DAT_10006c18 (*(double *)(0x10006c18U))
#undef DAT_10006c20
#define DAT_10006c20 (*(double *)(0x10006c20U))
#undef DAT_10006c28
#define DAT_10006c28 (*(double *)(0x10006c28U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b78
 */

float recovered_10006b78(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_10006c08 < dVar1; dVar1 = dVar1 + DAT_10006c10) {
  }
  for (; dVar1 < DAT_10006c18; dVar1 = dVar1 + DAT_10006c20) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_10006c28);
}

#undef DAT_10006c08
#undef DAT_10006c10
#undef DAT_10006c18
#undef DAT_10006c20
#undef DAT_10006c28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c30
 */

float recovered_10006c30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c4c
 */

int recovered_10006c4c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10006da0
 */

int recovered_10006da0(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10006e1c;
  }
  bVar2 = false;
joined_r0x10006e1c:
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
 * Address: 0x10006f00
 */

double recovered_10006f00(byte *param_1,undefined4 *param_2)

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
      goto LAB_10006fec;
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
LAB_10006fec:
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
 * Address: 0x100070d4
 */

float recovered_100070d4(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006f00(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000fbce
#define DAT_1000fbce (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_1000fbd8
#define str_1000fbd8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000fbe9
#define str_1000fbe9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f0
 */

int recovered_100070f0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10007170:
  while( true ) {
    pcVar6 = str_1000fbe9;
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
LAB_10007190:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x100071b0;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_1000721c;
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
LAB_1000721c:
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
      goto LAB_10007248;
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
LAB_10007248:
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
switchD_1000741c_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10007cd0;
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
      goto LAB_100076ec;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_100076ec:
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
      local_60[-iVar7] = str_1000fbe9[uVar11 + uVar12 * -10];
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
      goto LAB_10007cd0;
    }
    break;
  default:
    goto switchD_1000741c_caseD_4a;
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
      pcVar6 = str_1000fbd8;
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
    goto LAB_10007cd0;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10007190;
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
                      goto LAB_10007bc4;
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
LAB_10007bc4:
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
        local_60[-iVar7] = str_1000fbe9[uVar10 + uVar12 * -10];
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
LAB_10007b8c:
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
                    goto LAB_10007b8c;
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
    goto LAB_10007170;
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
      local_60[iVar7] = str_1000fbe9[uVar10 & 0xf];
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
    goto LAB_10007170;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10007170;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000fbce;
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
      goto LAB_10007be8;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10007be8;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10007be8:
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
      local_60[-iVar7] = str_1000fbe9[uVar11 + uVar12 * -10];
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
LAB_10007cd0:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10007170;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10007170;
code_r0x100071b0:
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
  goto LAB_10007170;
}

#undef DAT_1000fbce
#undef str_1000fbd8
#undef str_1000fbe9
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007eb8
 */

int recovered_10007eb8(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_100070f0((byte *)buffer,capacity,(byte *)format,(double *)&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_10010084
#define DAT_10010084 (*(int * *)(((uintptr_t)pf_module_state + 0x4dcU)))
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
 * Address: 0x10007ee8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007ee8(int *param_1,int *param_2,int *param_3)

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
      goto LAB_100080cc;
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
LAB_100080cc:
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
 * Address: 0x100080e8
 */

uint * recovered_100080e8(uint *param_1,uint *param_2)

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
 * Address: 0x1000816c
 */

undefined4 recovered_1000816c(uint *param_1,int param_2)

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
#define DAT_10010088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
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
 * Address: 0x100081cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100081cc(char *param_1,int param_2)

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
        if (DAT_10010088 != (undefined8 *)0x0) {
          DAT_10010088 = (undefined8 *)((int)DAT_10010088 + -1);
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_10010088 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          else {
            recovered_10004710(local_224,(undefined8 *)&DAT_1001008c,DAT_10010088);
            puVar2 = DAT_10010088;
          }
          *(undefined1 *)((int)local_224 + (int)puVar2) = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_10010088 = (undefined8 *)0x0;
        }
        else {
          if ((int)DAT_10010088 - 0x1ffU < 0xfffffe00) {
            recovered_10004710(local_224,(undefined8 *)&DAT_1001008c,DAT_10010088);
            *(undefined1 *)((int)local_224 + (int)DAT_10010088) = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_10010088 = (undefined8 *)0x0;
          }
          *(char *)((int)DAT_10010088 + ((uintptr_t)pf_module_state+0x4e4U)) = cVar1;
          DAT_10010088 = (undefined8 *)((int)DAT_10010088 + 1);
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
#define DAT_10010088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
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
 * Address: 0x100083b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100083b0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)0x0;
  if (DAT_10010088 != (undefined8 *)0x0) {
    recovered_10004710(local_210,(undefined8 *)&DAT_1001008c,DAT_10010088);
    puVar1 = DAT_10010088;
  }
  *(undefined1 *)((int)local_210 + (int)puVar1) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_10010088 = (undefined8 *)0x0;
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
#define DAT_10010088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
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
 * Address: 0x10008470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008470(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_10010088 == (undefined8 *)0x0) {
    return;
  }
  recovered_10004710(auStack_214,(undefined8 *)&DAT_1001008c,DAT_10010088);
  *(undefined1 *)((int)auStack_214 + (int)DAT_10010088) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_10010088 = (undefined8 *)0x0;
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

#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000fbfa
#define DAT_1000fbfa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000852c
 */

void recovered_1000852c(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_1000fbfa;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000fbd7;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10007eb8(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_100081cc(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000fbd7
#undef DAT_1000fbfa
#undef acStack_14c

#undef DAT_1000fc18
#define DAT_1000fc18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000fbfd
#define str_1000fbfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008584
 */

void recovered_10008584(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x55U));
  recovered_100081cc(str_1000fbfd,iVar1);
  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x70U));
  recovered_100081cc(&DAT_1000fc18,iVar1);
  return;
}

#undef DAT_1000fc18
#undef str_1000fbfd

#undef DAT_1000fc18
#define DAT_1000fc18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000fc1b
#define str_1000fc1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085d0
 */

void recovered_100085d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x73U));
  recovered_100081cc(str_1000fc1b,iVar1);
  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x70U));
  recovered_100081cc(&DAT_1000fc18,iVar1);
  return;
}

#undef DAT_1000fc18
#undef str_1000fc1b

#undef DAT_10010088
#define DAT_10010088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
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
 * Address: 0x1000861c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000861c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_10010088 != (undefined8 *)0x0) {
    recovered_10004710(auStack_224,(undefined8 *)&DAT_1001008c,DAT_10010088);
    *(undefined1 *)((int)auStack_224 + (int)DAT_10010088) = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_10010088 = (undefined8 *)0x0;
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
 * Address: 0x10008770
 */

undefined4 recovered_10008770(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008778
 */

void recovered_10008778(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000877c
 */

undefined4 recovered_1000877c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000fbfa
#define DAT_1000fbfa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
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
#undef str_1000fc9c
#define str_1000fc9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_1000fca9
#define str_1000fca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_1000fcb7
#define str_1000fcb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_24 (*(undefined8 * *)(pf_stack_frame + 28))
#define local_20 (*(undefined8 * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008784
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * recovered_10008784(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *size;
  undefined4 uVar7;
  byte bVar8;
  char *unaff_r8;

  if (param_1 != (byte *)0x0) {
    unaff_r8 = param_2;
  }
  if (param_1 == (byte *)0x0 || param_2 == (char *)0x0) {
    uVar7 = 0x16;
    goto LAB_100089f8;
  }
  iVar2 = recovered_100057fc(param_1,(byte *)str_1000fc9c);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10008984:
    pbVar4 = recovered_10004618(800);
    if (pbVar4 != (byte *)0x0) {
      recovered_10004ea0(pbVar4,0,800);
      pbVar4[0x10c] = 0xff;
      pbVar4[0x10d] = 0xff;
      pbVar4[0x10e] = 0xff;
      pbVar4[0x10f] = 0xff;
      pbVar4[0x110] = iVar2 == 0;
      *(undefined4 *)pbVar4 = uVar7;
      pbVar4[0x111] = iVar2 != 0;
      recovered_10007eb8((char *)(pbVar4 + 4),0xf1,&DAT_1000fbfa,param_1);
      return pbVar4;
    }
  }
  else {
    iVar3 = recovered_100057fc(param_1,(byte *)str_1000fca9);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10008984;
    }
    iVar3 = recovered_100057fc(param_1,(byte *)str_1000fcb7);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10008984;
    }
    pbVar4 = recovered_10004618(800);
    if (pbVar4 != (byte *)0x0) {
      recovered_10004ea0(pbVar4,0,800);
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pcVar5 = recovered_10005bb4(unaff_r8,'r');
      bVar8 = 1;
      bVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10005bb4(unaff_r8,'+');
        bVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10005bb4(unaff_r8,'a');
          bVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            bVar1 = 1;
          }
        }
      }
      pbVar4[0x110] = bVar1;
      pcVar5 = recovered_10005bb4(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10005bb4(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10005bb4(unaff_r8,'+');
        bVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          bVar8 = 1;
        }
      }
      pbVar4[0x111] = bVar8;
      pcVar5 = recovered_10005bb4(unaff_r8,'a');
      pbVar4[0x112] = pcVar5 != (char *)0x0;
      pbVar4[0x10c] = 0xff;
      pbVar4[0x10d] = 0xff;
      pbVar4[0x10e] = 0xff;
      pbVar4[0x10f] = 0xff;
      recovered_10007eb8((char *)(pbVar4 + 4),0xf1,&DAT_1000fbfa,param_1);
      recovered_10004ea0((byte *)&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10005bb4(unaff_r8,'w');
        if ((pcVar5 == (char *)0x0) && (local_20 != (undefined8 *)0x0)) {
          if (pbVar4[0x111] == 1) {
            puVar6 = *(undefined8 **)(pbVar4 + 0x104);
            if (puVar6 < local_20) {
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x100;
              }
              do {
                size = puVar6;
                puVar6 = (undefined8 *)((int)size << 1);
              } while (size < local_20);
              puVar6 = recovered_100046bc(*(void **)(pbVar4 + 0xfc),(ulong)size);
              if (puVar6 == (undefined8 *)0x0) {
                pbVar4[0x115] = 1;
                uVar7 = 0xc;
                goto LAB_10008a20;
              }
              *(undefined8 **)(pbVar4 + 0x104) = size;
              *(undefined8 **)(pbVar4 + 0xfc) = puVar6;
              *(undefined8 **)(pbVar4 + 0xf8) = puVar6;
            }
            else {
              puVar6 = *(undefined8 **)(pbVar4 + 0xfc);
            }
            recovered_10004710(puVar6,local_24,local_20);
          }
          else {
            *(undefined8 **)(pbVar4 + 0xf8) = local_24;
          }
          *(undefined8 **)(pbVar4 + 0x100) = local_20;
        }
      }
      else if (pbVar4[0x111] == 0) {
        uVar7 = 2;
LAB_10008a20:
        *DAT_10014004 = uVar7;
        recovered_1000466c(pbVar4);
        return (byte *)0x0;
      }
      if (pbVar4[0x112] == 1) {
        *(undefined4 *)(pbVar4 + 0x108) = *(undefined4 *)(pbVar4 + 0x100);
        return pbVar4;
      }
      return pbVar4;
    }
  }
  uVar7 = 0xc;
LAB_100089f8:
  *DAT_10014004 = uVar7;
  return (byte *)0x0;
}

#undef DAT_1000fbfa
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000fc9c
#undef str_1000fca9
#undef str_1000fcb7
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
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
 * Address: 0x10008b08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008b08(byte *param_1,char *param_2,uint *param_3)

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
      recovered_1000466c((void *)param_3[0x3f]);
    }
    recovered_1000466c(param_3);
  }
  recovered_10008784(param_1,param_2);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
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
 * Address: 0x10008c08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008c08(uint *param_1)

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
    recovered_1000466c((void *)param_1[0x3f]);
  }
  recovered_1000466c(param_1);
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
 * Address: 0x10008d00
 */

uint recovered_10008d00(undefined8 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_10004710(param_1,(undefined8 *)(unaff_r4[0x3e] + uVar6),puVar4);
          unaff_r4[0x42] = unaff_r4[0x42] + (int)puVar4;
          if (puVar7 < puVar5) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10002b70((uint)puVar4,param_2);
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
            uVar1 = recovered_10008e2c(unaff_r4);
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


#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10010088
#define DAT_10010088 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
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
 * Address: 0x10008e2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10008e2c(int *param_1)

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
LAB_10008e88:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_10010088 != (undefined8 *)0x0) {
      recovered_10004710(auStack_220,(undefined8 *)&DAT_1001008c,DAT_10010088);
      *(undefined1 *)((int)auStack_220 + (int)DAT_10010088) = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_10010088 = (undefined8 *)0x0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      iVar3 = (int)param_1 + 0x116;
      uVar2 = 0;
      iVar1 = (*_DAT_40010844)(iVar3,0x1fe,&DAT_1000fbd7,0);
      if (iVar1 != 0) {
        iVar1 = recovered_100057d4(iVar3);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)(iVar3 + iVar1) = 10;
        *(undefined1 *)(iVar3 + param_1[0xc6]) = 0;
        goto LAB_10008e88;
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

#undef DAT_1000fbd7
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000902c
 */

int recovered_1000902c(char *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_100081cc(param_1,(int)puVar4);
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
        pvVar1 = recovered_100046bc((void *)param_4[0x3f],size);
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
        recovered_10004ea0((byte *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10004710((undefined8 *)(param_4[0x3f] + uVar2),(undefined8 *)param_1,puVar4);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091a4
 */

undefined4 recovered_100091a4(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_100091b8;
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
LAB_100091b8:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009254
 */

undefined4 recovered_10009254(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
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
 * Address: 0x1000927c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000927c(uint *param_1)

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
 * Address: 0x10009354
 */

undefined1 recovered_10009354(int param_1)

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
 * Address: 0x10009364
 */

undefined1 recovered_10009364(int param_1)

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
 * Address: 0x10009374
 */

void recovered_10009374(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009390
 */

void recovered_10009390(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
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
 * Address: 0x100093b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100093b4(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x445cU)))
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
 * Address: 0x10009444
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009444(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_10004ea0((byte *)&local_28,0,0xc);
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
 * Address: 0x100095b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100095b8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (undefined4 *)0x0)) &&
      (recovered_10004ea0((byte *)&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    puVar2 = local_20;
    if (local_20 < (undefined8 *)0x2) {
      puVar2 = (undefined8 *)0x1;
    }
    puVar2 = recovered_10004618((ulong)puVar2);
    if (puVar2 != (undefined8 *)0x0) {
      if (local_20 == (undefined8 *)0x0) {
        local_20 = (undefined8 *)0x0;
      }
      else {
        recovered_10004710(puVar2,local_24,local_20);
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
 * Address: 0x100096b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100096b8(int param_1,int param_2,int param_3)

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
 * Address: 0x10009740
 */

undefined4 recovered_10009740(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009748
 */

void recovered_10009748(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000974c
 */

undefined4 recovered_1000974c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009754
 */

undefined4 recovered_10009754(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000975c
 */

undefined4 recovered_1000975c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009764
 */

int recovered_10009764(byte *param_1,byte *param_2,int param_3)

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


#undef DAT_1000fc2b
#define DAT_1000fc2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_1000fc2e
#define str_1000fc2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000fc3b
#define str_1000fc3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_1000fc45
#define str_1000fc45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_1000fc59
#define str_1000fc59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000fc67
#define str_1000fc67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_1000fc79
#define str_1000fc79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_1000fc85
#define str_1000fc85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000fc96
#define str_1000fc96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097a8
 */

char * recovered_100097a8(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000fc2b;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_100097c8_caseD_0;
  default:
    pcVar1 = str_1000fc96;
switchD_100097c8_caseD_0:
    return pcVar1;
  case 2:
    return str_1000fc2e;
  case 5:
    return str_1000fc3b;
  case 9:
    return str_1000fc45;
  case 0xc:
    return str_1000fc59;
  case 0xd:
    return str_1000fc67;
  case 0x11:
    return str_1000fc79;
  case 0x16:
    return str_1000fc85;
  }
}

#undef DAT_1000fc2b
#undef str_1000fc2e
#undef str_1000fc3b
#undef str_1000fc45
#undef str_1000fc59
#undef str_1000fc67
#undef str_1000fc79
#undef str_1000fc85
#undef str_1000fc96

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098a8
 */

undefined4 recovered_100098a8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098b0
 */

undefined4 recovered_100098b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1001028c
#define DAT_1001028c (*(int *)(((uintptr_t)pf_module_state + 0x6e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098b8
 */

void recovered_100098b8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1001028c = DAT_1001028c + 1;
  return;
}

#undef DAT_1001028c

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100098e0(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100098f0(void *context){__asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr\ntrap ");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10009940(void *context,int value){__asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr\ntrap ");}


#undef DAT_10009a1c
#define DAT_10009a1c (*(int *)(0x10009a1cU))
#undef DAT_10009a20
#define DAT_10009a20 (*(int *)(0x10009a20U))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009998
 */

void recovered_10009998(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10009a24;
  local_20 = DAT_10009a1c + 0x100099c0;
  local_18 = DAT_10009a20 + 0x100099d0;
  local_38 = 1;
  recovered_1000a178(&uStack_3c);
  recovered_10004604();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x100099f8);
  (*pcVar1)();
}

#undef DAT_10009a1c
#undef DAT_10009a20
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a24
 */

undefined4 recovered_10009a24(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a2c
 */

void recovered_10009a2c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009a3c(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  recovered_10009998();
}


#undef DAT_10010290
#define DAT_10010290 (*(int *)(((uintptr_t)pf_module_state + 0x6e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a3c
 */

int recovered_10009a3c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_10009f90(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_10009998();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_10010290;
  DAT_10010290 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_10010290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a7c
 */

void * recovered_10009a7c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10004618(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10004604();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009aa8
 */

void * recovered_10009aa8(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10004618(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10004604();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10009b94
#define DAT_10009b94 (*(int *)(0x10009b94U))
#undef DAT_10009b98
#define DAT_10009b98 (*(int *)(0x10009b98U))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(code * *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ad4
 */

void recovered_10009ad4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009a24;
  local_78 = DAT_10009b94 + 0x10009b18;
  local_70 = DAT_10009b98 + 0x10009b28;
  local_90 = 1;
  recovered_1000a178(&uStack_94);
  recovered_1000466c(param_1);
  recovered_1000a19c(&uStack_94);
  return;
}

#undef DAT_10009b94
#undef DAT_10009b98
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c

#undef DAT_10009c5c
#define DAT_10009c5c (*(int *)(0x10009c5cU))
#undef DAT_10009c60
#define DAT_10009c60 (*(int *)(0x10009c60U))
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
 * Address: 0x10009b9c
 */

void recovered_10009b9c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009a24;
  local_78 = DAT_10009c5c + 0x10009be0;
  local_70 = DAT_10009c60 + 0x10009bf0;
  local_90 = 1;
  recovered_1000a178(&uStack_94);
  recovered_1000466c(param_1);
  recovered_1000a19c(&uStack_94);
  return;
}

#undef DAT_10009c5c
#undef DAT_10009c60
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10009d24
#define DAT_10009d24 (*(int *)(0x10009d24U))
#undef DAT_10009d28
#define DAT_10009d28 (*(int *)(0x10009d28U))
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
 * Address: 0x10009c64
 */

void recovered_10009c64(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009a24;
  local_78 = DAT_10009d24 + 0x10009ca8;
  local_70 = DAT_10009d28 + 0x10009cb8;
  local_90 = 1;
  recovered_1000a178(&uStack_94);
  recovered_1000466c(param_1);
  recovered_1000a19c(&uStack_94);
  return;
}

#undef DAT_10009d24
#undef DAT_10009d28
#undef auStack_a0
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10009dec
#define DAT_10009dec (*(int *)(0x10009decU))
#undef DAT_10009df0
#define DAT_10009df0 (*(int *)(0x10009df0U))
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
 * Address: 0x10009d2c
 */

void recovered_10009d2c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009a24;
  local_78 = DAT_10009dec + 0x10009d70;
  local_70 = DAT_10009df0 + 0x10009d80;
  local_90 = 1;
  recovered_1000a178(&uStack_94);
  recovered_1000466c(param_1);
  recovered_1000a19c(&uStack_94);
  return;
}

#undef DAT_10009dec
#undef DAT_10009df0
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
 * Address: 0x10009df4
 */

undefined4 recovered_10009df4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dfc
 */

uint recovered_10009dfc(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e0c
 */

void recovered_10009e0c(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e1c
 */

void recovered_10009e1c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010298
#define DAT_10010298 (*(uint *)(((uintptr_t)pf_module_state + 0x6f0U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e20
 */

undefined4 * recovered_10009e20(uint param_1)

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
  puVar1 = recovered_10004618(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10009998();
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
      if (size == uVar6) goto LAB_10009e9c;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10009e9c:
  DAT_10010298 = DAT_10010298 + 1;
  if (DAT_10010298 < 2) {
    DAT_10010298 = 1;
  }
  if (DAT_1001029c == (undefined4 *)0x0) {
LAB_10009ef8:
    puVar1[7] = DAT_10010298;
    puVar1[3] = DAT_1001029c;
    DAT_1001029c = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_1001029c;
    while (*(uint *)(iVar3 + 0x1c) != DAT_10010298) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10009ef8;
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
#define DAT_1001029c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f2c
 */

void recovered_10009f2c(int param_1)

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
      if (pvVar2 == (void *)0x0) goto LAB_10009f88;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10009f88:
  recovered_1000466c(pointer);
  return;
}

#undef DAT_1001029c

#undef DAT_1001029c
#define DAT_1001029c (*(int *)(((uintptr_t)pf_module_state + 0x6f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f90
 */

void recovered_10009f90(int param_1,undefined4 param_2,int param_3)

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
#define DAT_10010290 (*(void * *)(((uintptr_t)pf_module_state + 0x6e8U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fcc
 */

void recovered_10009fcc(void)

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
      if (pvVar4 == (void *)0x0) goto LAB_1000a078;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_1000a078:
  recovered_1000466c(pointer);
  return;
}

#undef DAT_10010290
#undef DAT_1001029c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a084
 */

void recovered_1000a084(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_1000a0ac((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6e8U)))
#undef DAT_10010294
#define DAT_10010294 (*(int * *)(((uintptr_t)pf_module_state + 0x6ecU)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0ac
 */

void recovered_1000a0ac(undefined4 *param_1)

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
      iVar1 = recovered_1000aa00((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_1000a26c(param_1);
        puVar3 = DAT_10010290;
                    /* WARNING: Subroutine does not return */
        if (DAT_10010290 == (undefined4 *)0x0) {
          recovered_10009998();
        }
        DAT_10010290[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
        recovered_1000a0ac(puVar3);
        *extraout_r0 = (int)DAT_10010294;
        DAT_10010294 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10009998();
}

#undef DAT_10010290
#undef DAT_10010294
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6e8U)))
#undef DAT_10010294
#define DAT_10010294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a140
 */

void recovered_1000a140(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_10010290;
                    /* WARNING: Subroutine does not return */
  if (DAT_10010290 == (undefined4 *)0x0) {
    recovered_10009998();
  }
  DAT_10010290[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_1000a0ac(puVar1);
  *extraout_r0 = DAT_10010294;
  DAT_10010294 = extraout_r0;
  return;
}

#undef DAT_10010290
#undef DAT_10010294

#undef DAT_10010294
#define DAT_10010294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a178
 */

void recovered_1000a178(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010294;
  DAT_10010294 = param_1;
  return;
}

#undef DAT_10010294

#undef DAT_10010294
#define DAT_10010294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a19c
 */

void recovered_1000a19c(undefined4 *param_1)

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
 * Address: 0x1000a1e4
 */

void recovered_1000a1e4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a0ac(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10009998();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1f0
 */

void recovered_1000a1f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10009998();
}


#undef DAT_10010294
#define DAT_10010294 (*(int * *)(((uintptr_t)pf_module_state + 0x6ecU)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1fc
 */

void recovered_1000a1fc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_1001029c; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_1000a240;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10009998();
  }
LAB_1000a240:
  if (DAT_10010294 != (int *)0x0) {
    DAT_10010294 = (int *)*DAT_10010294;
  }
  recovered_1000a26c(puVar1);
  return;
}

#undef DAT_10010294
#undef DAT_1001029c

#undef DAT_10010294
#define DAT_10010294 (*(int * *)(((uintptr_t)pf_module_state + 0x6ecU)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a26c
 */

undefined4 recovered_1000a26c(undefined4 *param_1)

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
LAB_1000a320:
        piVar1[1] = iVar3;
        recovered_100098e0((int)piVar1);
        recovered_1000a1fc(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_1000aa00((int)DAT_10010294,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_1000a320;
      }
      DAT_10010294 = (int *)*piVar1;
    } while (DAT_10010294 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10009998();
}

#undef DAT_10010294
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a32c
 */

undefined4 recovered_1000a32c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a1fc(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a338
 */

undefined4 recovered_1000a338(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a340
 */

void recovered_1000a340(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10009998();
}


#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a34c
 */

int recovered_1000a34c(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_1000a438:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_1000a438;
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
 * Address: 0x1000a440
 */

void recovered_1000a440(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a444
 */

undefined4 recovered_1000a444(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a44c
 */

bool recovered_1000a44c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a460
 */

bool recovered_1000a460(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4a0
 */

bool recovered_1000a4a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4cc
 */

bool recovered_1000a4cc(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4e8
 */

bool recovered_1000a4e8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a504
 */

bool recovered_1000a504(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a520
 */

bool recovered_1000a520(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


#undef DAT_1000a610
#define DAT_1000a610 (*(double *)(0x1000a610U))
#undef DAT_1000a618
#define DAT_1000a618 (*(double *)(0x1000a618U))
#undef DAT_1000a620
#define DAT_1000a620 (*(double *)(0x1000a620U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a540
 */

double recovered_1000a540(double value)

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
  if (dVar3 <= DAT_1000a618) {
    dVar4 = 0.0;
    if (DAT_1000a620 <= dVar3) {
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
  return DAT_1000a610;
}

#undef DAT_1000a610
#undef DAT_1000a618
#undef DAT_1000a620

#undef DAT_1000a710
#define DAT_1000a710 (*(double *)(0x1000a710U))
#undef DAT_1000a718
#define DAT_1000a718 (*(double *)(0x1000a718U))
#undef DAT_1000a720
#define DAT_1000a720 (*(double *)(0x1000a720U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a628
 */

float recovered_1000a628(float value)

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
  else if (dVar3 <= DAT_1000a718) {
    dVar4 = 0.0;
    if (DAT_1000a720 <= dVar3) {
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
    dVar4 = DAT_1000a710;
  }
  return (float)dVar4;
}

#undef DAT_1000a710
#undef DAT_1000a718
#undef DAT_1000a720

#undef DAT_1000a7f8
#define DAT_1000a7f8 (*(double *)(0x1000a7f8U))
#undef DAT_1000a800
#define DAT_1000a800 (*(double *)(0x1000a800U))
#undef DAT_1000a808
#define DAT_1000a808 (*(double *)(0x1000a808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a728
 */

double recovered_1000a728(double value)

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
  if (dVar3 <= DAT_1000a800) {
    dVar4 = 0.0;
    if (DAT_1000a808 <= dVar3) {
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
  return DAT_1000a7f8;
}

#undef DAT_1000a7f8
#undef DAT_1000a800
#undef DAT_1000a808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a810
 */

double recovered_1000a810(long end,long start)

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
 * Address: 0x1000a82c
 */

double recovered_1000a82c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10005ffc(param_1,param_2);
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
 * Address: 0x1000a884
 */

ulonglong recovered_1000a884(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000a8f0;
    }
  }
  bVar1 = false;
joined_r0x1000a8f0:
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
 * Address: 0x1000a9fc
 */

ulonglong recovered_1000a9fc(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000a8f0;
    }
  }
  bVar1 = false;
joined_r0x1000a8f0:
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


#undef DAT_1000ffc8
#define DAT_1000ffc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x420U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b8U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa00
 */

undefined4 recovered_1000aa00(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_1000adb4((uint)*pbVar10,&local_28);
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
          goto LAB_1000abd8;
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
LAB_1000abd8:
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
LAB_1000ad94:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000ffc8 + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000adb4(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000ad94;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000ad94;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000ad94;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010060) goto LAB_1000ad68;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000ad94;
  }
LAB_1000ad68:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_1000abd8;
}

#undef DAT_1000ffc8
#undef DAT_10010060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000adb4
 */

undefined4 * recovered_1000adb4(uint param_1,undefined4 *param_2)

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
      goto switchD_1000ade4_caseD_5;
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
switchD_1000ade4_caseD_5:
  return puVar5;
}


#undef DAT_1000fcc5
#define DAT_1000fcc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af44
 */

undefined * recovered_1000af44(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fcc5;
}

#undef DAT_1000fcc5

#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4460U)))
#undef str_1000fcc9
#define str_1000fcc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_1000fcd9
#define str_1000fcd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_1000fcfa
#define str_1000fcfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
#undef str_1000fdb1
#define str_1000fdb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x209U)))
#undef str_1000fdba
#define str_1000fdba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef str_1000fdcf
#define str_1000fdcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x227U)))
#undef str_1000fddd
#define str_1000fddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x235U)))
#undef str_1000fded
#define str_1000fded (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#define local_1098 (*(byte * *)(pf_stack_frame + 24))
#define local_108c (*(byte * *)(pf_stack_frame + 36))
#define local_84 (*(byte (*)[132])(pf_stack_frame + 4140))
#define acStack_1084 (*(char (*)[4228])(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af54
 */

uint recovered_1000af54(char *param_1,byte *param_2,char *param_3,char *param_4,char *param_5,
                       uint param_6,char *param_7,uint param_8,char *param_9,undefined8 *param_10,
                       uint param_11)

{
  unsigned char pf_stack_frame[4304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;

  if (param_2 == (byte *)0x0) {
    pbVar19 = (byte *)0x0;
  }
  else {
    iVar4 = recovered_100057d4((int)param_2);
    pbVar19 = param_2 + iVar4;
  }
  uVar12 = 0;
  if (param_5 != (char *)0x0) {
    uVar12 = param_6;
  }
  bVar2 = param_10 == (undefined8 *)0x0;
  if (param_5 != (char *)0x0 && uVar12 != 0) {
    *param_5 = '\0';
  }
  bVar3 = param_9 == (char *)0x0;
  if (!bVar3 && !bVar2) {
    *param_9 = (bVar3 || bVar2) && bVar3;
  }
  if (param_7 != (char *)0x0 && param_8 != 0) {
    *param_7 = '\0';
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  local_84[0] = 0;
  pbVar5 = param_2;
  while( true ) {
    uVar12 = (uint)*pbVar5;
    if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar16 = 0;
  while( true ) {
    uVar15 = uVar12 - 0x30;
    bVar22 = 9 < uVar15;
    if (bVar22) {
      uVar15 = (uVar12 & 0xdf) - 0x41;
    }
    if ((bVar22 && 0x19 < uVar15) && (uVar12 != 0x5f && uVar12 != 0x24)) break;
    if (uVar16 + 1 < 0x60) {
      local_84[uVar16] = (byte)uVar12;
      uVar16 = uVar16 + 1;
    }
    pbVar5 = pbVar5 + 1;
    uVar12 = (uint)*pbVar5;
  }
  iVar4 = 1;
  local_84[uVar16] = 0;
  while ((uVar12 - 9 < 0x18 && ((1 << (uVar12 - 9 & 0xff) & 0x800013U) != 0))) {
    uVar12 = (uint)pbVar5[iVar4];
    iVar4 = iVar4 + 1;
  }
  if ((uVar16 != 0) && (uVar12 == 0x28)) {
    if (param_1 == (char *)0x0) {
      local_1098 = (byte *)0x0;
LAB_1000b2fc:
      local_108c = (byte *)0x0;
    }
    else {
      local_1098 = (byte *)0x0;
      if (local_84[0] == 0) goto LAB_1000b2fc;
      iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x209U));
      local_108c = (byte *)0x0;
      if (iVar4 != 0) {
        local_1098 = (byte *)0x0;
LAB_1000b148:
        if (*param_1 != '\0') {
          do {
            iVar13 = 0;
            while (uVar12 = (uint)(byte)param_1[iVar13], uVar12 != 0) {
              uVar16 = (uint)(byte)str_1000fdb1[iVar13];
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar12 - 0x41 < 0x1a) {
                uVar12 = uVar12 | 0x20;
              }
              if (uVar12 != uVar16) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b1b0;
            }
            if (iVar4 == iVar13) goto LAB_1000b1b0;
            param_1 = param_1 + 1;
            if (*param_1 == '\0') break;
          } while( true );
        }
        goto LAB_1000b2fc;
      }
    }
LAB_1000b300:
    if (local_108c != (byte *)0x0 && local_1098 != (byte *)0x0) {
      param_2 = local_108c;
      pbVar19 = local_1098;
    }
  }
  uVar12 = 0;
  if ((param_11 & 2) != 0 && pbVar19 != (byte *)0x0) {
    iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x121U));
    uVar12 = 0;
    if (((param_2 <= pbVar19) && (param_2 != (byte *)0x0 && iVar4 != 0)) &&
       (param_2 + iVar4 <= pbVar19)) {
      pbVar5 = param_2;
      do {
        if (*pbVar5 == 0) {
          uVar12 = 0;
          break;
        }
        iVar13 = 0;
        while ((pbVar5 + iVar13 < pbVar19 && (uVar12 = (uint)pbVar5[iVar13], uVar12 != 0))) {
          uVar16 = (uint)(byte)str_1000fcc9[iVar13];
          if (uVar16 - 0x41 < 0x1a) {
            uVar16 = uVar16 | 0x20;
          }
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 != uVar16) break;
          iVar13 = iVar13 + 1;
          if (iVar4 == iVar13) goto LAB_1000bba8;
        }
        if (iVar4 == iVar13) {
LAB_1000bba8:
          uVar12 = 4;
          if ((!bVar3 && !bVar2) && (*param_9 == '\0')) {
            puVar10 = (undefined8 *)recovered_100057d4(((uintptr_t)pf_module_state+0x131U));
            if (param_10 <= puVar10) {
              puVar10 = (undefined8 *)((int)param_10 + -1);
            }
            if (puVar10 != (undefined8 *)0x0) {
              recovered_10004710((undefined8 *)param_9,(undefined8 *)str_1000fcd9,puVar10);
            }
            uVar12 = 4;
            param_9[(int)puVar10] = '\0';
          }
          break;
        }
        pbVar5 = pbVar5 + 1;
        uVar12 = 0;
      } while (pbVar5 + iVar4 <= pbVar19);
    }
  }
  if (param_5 != (char *)0x0) {
    if (param_6 == 0) {
      uVar16 = 0;
      goto LAB_1000b9f4;
    }
    uVar16 = 0;
    if (pbVar19 == (byte *)0x0) goto LAB_1000b9f4;
    if (param_2 < pbVar19) {
      pbVar5 = param_2;
      do {
        iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x212U));
        pbVar18 = (byte *)0x0;
        if ((pbVar5 != (byte *)0x0 && iVar4 != 0) && (pbVar5 + iVar4 <= pbVar19)) {
          pbVar18 = pbVar5;
          do {
            if (*pbVar18 == 0) break;
            iVar13 = 0;
            while ((pbVar18 + iVar13 < pbVar19 && (uVar16 = (uint)pbVar18[iVar13], uVar16 != 0))) {
              uVar15 = (uint)(byte)str_1000fdba[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b418;
            }
            if (iVar4 == iVar13) goto LAB_1000b418;
            pbVar18 = pbVar18 + 1;
          } while (pbVar18 + iVar4 <= pbVar19);
          pbVar18 = (byte *)0x0;
        }
LAB_1000b418:
        iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x227U));
        pbVar17 = (byte *)0x0;
        if ((pbVar5 != (byte *)0x0 && iVar4 != 0) && (pbVar5 + iVar4 <= pbVar19)) {
          pbVar17 = pbVar5;
          do {
            if (*pbVar17 == 0) break;
            iVar13 = 0;
            while ((pbVar17 + iVar13 < pbVar19 && (uVar16 = (uint)pbVar17[iVar13], uVar16 != 0))) {
              uVar15 = (uint)(byte)str_1000fdcf[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b43c;
            }
            if (iVar4 == iVar13) goto LAB_1000b43c;
            pbVar17 = pbVar17 + 1;
          } while (pbVar17 + iVar4 <= pbVar19);
          pbVar17 = (byte *)0x0;
        }
LAB_1000b43c:
        local_108c = (byte *)0x0;
        iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x235U));
        if (((pbVar5 != (byte *)0x0) && (iVar4 != 0)) && (pbVar5 + iVar4 <= pbVar19)) {
          pbVar21 = pbVar5;
          do {
            if (*pbVar21 == 0) goto LAB_1000b664;
            iVar13 = 0;
            while ((pbVar21 + iVar13 < pbVar19 && (uVar16 = (uint)pbVar21[iVar13], uVar16 != 0))) {
              uVar15 = (uint)(byte)str_1000fddd[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b634;
            }
            if (iVar4 == iVar13) {
LAB_1000b634:
              local_108c = pbVar21;
              goto LAB_1000b664;
            }
            pbVar21 = pbVar21 + 1;
          } while (pbVar21 + iVar4 <= pbVar19);
          local_108c = (byte *)0x0;
        }
LAB_1000b664:
        iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x245U));
        pbVar20 = (byte *)0x0;
        pbVar21 = pbVar20;
        if (((pbVar5 == (byte *)0x0) || (iVar4 == 0)) || (pbVar19 < pbVar5 + iVar4)) {
joined_r0x1000b770:
          if (pbVar18 == (byte *)0x0) goto LAB_1000b738;
LAB_1000b774:
          pbVar5 = pbVar18;
          if (pbVar17 < pbVar18) {
            pbVar5 = pbVar17;
          }
          bVar22 = pbVar17 == (byte *)0x0;
          pbVar17 = pbVar5;
          if (bVar22) {
            pbVar17 = pbVar18;
          }
LAB_1000b78c:
          pbVar18 = pbVar17;
          if (local_108c < pbVar17) {
            pbVar18 = local_108c;
          }
          if (local_108c == (byte *)0x0) {
            pbVar18 = pbVar17;
          }
LAB_1000b7a0:
          pbVar5 = pbVar18;
          if ((pbVar21 != (byte *)0x0) && (pbVar21 < pbVar18)) {
            pbVar5 = pbVar21;
          }
        }
        else {
          do {
            pbVar21 = pbVar20;
            if (*pbVar5 == 0) goto joined_r0x1000b770;
            iVar13 = 0;
            while( true ) {
              pbVar21 = pbVar5;
              if ((pbVar19 <= pbVar5 + iVar13) || (uVar16 = (uint)pbVar5[iVar13], uVar16 == 0))
              break;
              uVar15 = (uint)(byte)str_1000fded[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto joined_r0x1000b770;
            }
            if (iVar4 == iVar13) goto joined_r0x1000b770;
            pbVar5 = pbVar5 + 1;
          } while (pbVar5 + iVar4 <= pbVar19);
          pbVar21 = (byte *)0x0;
          if (pbVar18 != (byte *)0x0) goto LAB_1000b774;
LAB_1000b738:
          if (pbVar17 != (byte *)0x0) goto LAB_1000b78c;
          pbVar18 = local_108c;
          pbVar5 = pbVar21;
          if (local_108c != (byte *)0x0) goto LAB_1000b7a0;
        }
        if ((pbVar5 == (byte *)0x0) || (pbVar19 <= pbVar5)) break;
        if (param_2 < pbVar5) {
          bVar1 = pbVar5[-1];
          bVar11 = bVar1 - 0x30U;
          bVar22 = 9 < bVar11;
          if (bVar22) {
            bVar11 = (bVar1 & 0xdf) + 0xbf;
          }
          if (((bVar22 && 0x19 < bVar11) && (bVar1 != 0x24 && bVar1 != 0x5f)) && (bVar1 != 0x2e))
          goto LAB_1000b7cc;
          pbVar5 = pbVar5 + 1;
        }
        else {
LAB_1000b7cc:
          pbVar18 = (byte *)recovered_10005bb4((char *)pbVar5,'=');
          if ((pbVar18 == (byte *)0x0) || (pbVar19 <= pbVar18)) {
            pbVar5 = pbVar5 + 1;
          }
          else {
            pbVar17 = pbVar18 + 1;
            pbVar5 = pbVar17;
            if (pbVar17 < pbVar19) {
              pbVar18 = pbVar19 + (-1 - (int)pbVar18);
              do {
                bVar1 = *pbVar5;
                if ((bVar1 == 10) || (bVar1 == 0xd || bVar1 == 0x3b)) goto LAB_1000b830;
                pbVar18 = pbVar18 + -1;
                pbVar5 = pbVar5 + 1;
              } while (pbVar18 != (byte *)0x0);
              pbVar5 = pbVar19;
            }
LAB_1000b830:
            *param_5 = '\0';
            uVar16 = recovered_1000d2b4(param_5,param_6,(char *)pbVar17,(char *)pbVar5,param_3,
                                        param_4);
            if (((uVar16 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_1000b9f4;
          }
        }
      } while (pbVar5 < pbVar19);
    }
    iVar4 = 0;
    do {
      if (param_2 < pbVar19) {
        iVar13 = (&DAT_10014008)[iVar4];
        pbVar5 = param_2;
LAB_1000b8c4:
        iVar6 = recovered_100057d4(iVar13);
        if (pbVar5 != (byte *)0x0 && iVar6 != 0) {
          do {
            if ((pbVar19 < pbVar5 + iVar6) || (*pbVar5 == 0)) break;
            iVar14 = 0;
            while ((pbVar5 + iVar14 < pbVar19 && (uVar16 = (uint)pbVar5[iVar14], uVar16 != 0))) {
              uVar15 = (uint)*(byte *)(iVar13 + iVar14);
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar14 = iVar14 + 1;
              if (iVar6 == iVar14) goto LAB_1000b950;
            }
            if (iVar6 == iVar14) goto LAB_1000b950;
            pbVar5 = pbVar5 + 1;
          } while( true );
        }
      }
LAB_1000b89c:
      iVar4 = iVar4 + 1;
    } while (iVar4 != 5);
  }
  uVar16 = 0;
LAB_1000b9f4:
  uVar16 = uVar16 | uVar12;
  if ((param_11 & 1) != 0 && pbVar19 != (byte *)0x0) {
    pbVar5 = (byte *)0xfff;
    if (pbVar19 + -(int)param_2 < (byte *)0xfff) {
      pbVar5 = pbVar19 + -(int)param_2;
    }
    recovered_10004710((undefined8 *)acStack_1084,(undefined8 *)param_2,(undefined8 *)pbVar5);
    acStack_1084[(int)pbVar5] = '\0';
    uVar12 = recovered_1000bca8(acStack_1084,param_7,param_8);
    uVar15 = recovered_1000bf4c(acStack_1084,param_7,param_8);
    uVar8 = recovered_1000c73c(acStack_1084,param_7,param_8);
    uVar9 = recovered_1000c8dc(acStack_1084,param_7,param_8);
    uVar16 = uVar12 | uVar15 | uVar8 | uVar9 | uVar16;
  }
  uVar12 = 8;
  if (uVar16 != 0) {
    uVar12 = uVar16;
  }
  if ((!bVar3 && !bVar2) && uVar16 == 0) {
    if (*param_9 == '\0') {
      puVar10 = (undefined8 *)recovered_100057d4(((uintptr_t)pf_module_state+0x152U));
      if (param_10 <= puVar10) {
        puVar10 = (undefined8 *)((int)param_10 + -1);
      }
      if (puVar10 != (undefined8 *)0x0) {
        recovered_10004710((undefined8 *)param_9,(undefined8 *)str_1000fcfa,puVar10);
      }
      param_9[(int)puVar10] = '\0';
    }
    uVar12 = 8;
  }
  return uVar12;
LAB_1000b1b0:
  pbVar5 = (byte *)(param_1 + 8);
  while ((*pbVar5 - 9 < 0x18 && ((1 << (*pbVar5 - 9 & 0xff) & 0x800013U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = recovered_100057d4((int)local_84);
  iVar13 = recovered_10009764(pbVar5,local_84,iVar4);
  if (iVar13 == 0) {
    uVar12 = pbVar5[iVar4] - 9;
    pbVar18 = local_1098;
    pbVar17 = local_108c;
    if ((uVar12 < 0x20) && ((1 << (uVar12 & 0xff) & 0x80800013U) != 0)) {
      pcVar7 = recovered_10005bb4((char *)(pbVar5 + iVar4),'{');
      local_108c = (byte *)0x0;
      pbVar17 = local_108c;
      if (pcVar7 != (char *)0x0) {
        iVar4 = 1;
        pbVar5 = (byte *)(pcVar7 + 1);
LAB_1000b228:
        bVar1 = *pbVar5;
        if (bVar1 < 0x27) {
          if (bVar1 == 0x22) goto LAB_1000b25c;
          pbVar18 = local_1098;
          pbVar17 = local_108c;
          if (bVar1 == 0) goto joined_r0x1000b2a4;
        }
        else {
          if (bVar1 == 0x27) {
LAB_1000b25c:
            pbVar5 = pbVar5 + 1;
LAB_1000b274:
            do {
              bVar11 = *pbVar5;
              if (bVar11 == 0x5c) {
                if (pbVar5[1] != 0) {
                  pbVar5 = pbVar5 + 2;
                  goto LAB_1000b274;
                }
              }
              else if (bVar11 == 0) break;
              pbVar5 = pbVar5 + 1;
            } while (bVar11 != bVar1);
            goto LAB_1000b228;
          }
          if (bVar1 != 0x7b) {
            bVar22 = false;
            if (bVar1 == 0x7d) {
              iVar4 = iVar4 + -1;
              bVar22 = iVar4 == 0;
            }
            pbVar18 = pbVar5;
            pbVar17 = (byte *)(pcVar7 + 1);
            if (!bVar22) goto LAB_1000b224;
            goto joined_r0x1000b2a4;
          }
          iVar4 = iVar4 + 1;
        }
LAB_1000b224:
        pbVar5 = pbVar5 + 1;
        goto LAB_1000b228;
      }
    }
joined_r0x1000b2a4:
    local_108c = pbVar17;
    local_1098 = pbVar18;
    if ((uVar12 < 0x20) && ((1 << (uVar12 & 0xff) & 0x80800013U) != 0)) goto LAB_1000b300;
  }
  param_1 = param_1 + 1;
  iVar4 = recovered_100057d4(((uintptr_t)pf_module_state+0x209U));
  if (iVar4 == 0) goto LAB_1000b2fc;
  goto LAB_1000b148;
LAB_1000b950:
  if (pbVar19 <= pbVar5) goto LAB_1000b89c;
  pcVar7 = recovered_10005bb4((char *)pbVar5,'(');
  if (pcVar7 != (char *)0x0) {
    pbVar18 = (byte *)recovered_1000e4a0(pcVar7);
    if ((pbVar18 != (byte *)0x0) && (pbVar18 <= pbVar19)) {
      *param_5 = '\0';
      uVar16 = recovered_1000d2b4(param_5,param_6,pcVar7 + 1,(char *)pbVar18,param_3,param_4);
      pbVar5 = pbVar18;
      if (((uVar16 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_1000b9f4;
    }
  }
  pbVar5 = pbVar5 + 1;
  if (pbVar19 <= pbVar5) goto LAB_1000b89c;
  goto LAB_1000b8c4;
}

#undef DAT_10014008
#undef str_1000fcc9
#undef str_1000fcd9
#undef str_1000fcfa
#undef str_1000fdb1
#undef str_1000fdba
#undef str_1000fdcf
#undef str_1000fddd
#undef str_1000fded
#undef local_1098
#undef local_108c
#undef local_84
#undef acStack_1084

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc2c
 */

void recovered_1000bc2c(char *buffer,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  if ((buffer == (char *)0x0) || (capacity == 0 || text == (char *)0x0)) {
    return;
  }
  if (*buffer != '\0') {
    return;
  }
  puVar1 = (undefined8 *)recovered_100057d4((int)text);
  if (capacity <= puVar1) {
    puVar1 = (undefined8 *)(capacity - 1);
  }
  if (puVar1 != (undefined8 *)0x0) {
    recovered_10004710((undefined8 *)buffer,(undefined8 *)text,puVar1);
  }
  buffer[(int)puVar1] = '\0';
  return;
}


#undef str_1000fd56
#define str_1000fd56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_1000ff0d
#define str_1000ff0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x365U)))
#define local_28 (*(char * *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bca8
 */

uint recovered_1000bca8(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *first;
  char *last;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;

  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x1aeU));
  if (script != (char *)0x0) {
    local_28 = output;
  }
  if (script == (char *)0x0 || iVar1 == 0) {
    return 0;
  }
  local_24 = 0;
LAB_1000bd1c:
  pbVar5 = (byte *)script;
  if (*script == 0) {
    return local_24;
  }
  do {
    script = script + 1;
    iVar2 = 0;
    while (uVar3 = (uint)pbVar5[iVar2], uVar3 != 0) {
      uVar4 = (uint)(byte)str_1000fd56[iVar2];
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != uVar4) break;
      iVar2 = iVar2 + 1;
      if (iVar1 == iVar2) goto LAB_1000bd9c;
    }
    if (iVar1 == iVar2) break;
    pbVar5 = pbVar5 + 1;
    if (*pbVar5 == 0) {
      return local_24;
    }
  } while( true );
LAB_1000bd9c:
  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x365U));
  pbVar6 = (byte *)0x0;
  if ((iVar1 != 0) && (*pbVar5 != 0)) {
    pbVar6 = pbVar5;
    do {
      iVar2 = 0;
      while (uVar3 = (uint)pbVar6[iVar2], uVar3 != 0) {
        uVar4 = (uint)(byte)str_1000ff0d[iVar2];
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar4) break;
        iVar2 = iVar2 + 1;
        if (iVar1 == iVar2) goto LAB_1000be3c;
      }
      if (iVar1 == iVar2) goto LAB_1000be3c;
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 != 0);
    pbVar6 = (byte *)0x0;
  }
LAB_1000be3c:
  first = pbVar5;
  while( true ) {
    if (*first == 0) {
      return local_24;
    }
    if (*first == 0x28) break;
    script = script + 1;
    first = first + 1;
  }
  while (((byte)*script - 9 < 0x18 && ((1 << ((byte)*script - 9 & 0xff) & 0x800013U) != 0))) {
    script = script + 1;
  }
  last = recovered_1000e4a0((char *)first);
  if (last != (char *)0x0) {
    uVar3 = recovered_1000f284(local_28,capacity,script,last);
    if (uVar3 != 0) {
      local_24 = 1;
    }
    if (pbVar6 == pbVar5) {
      local_24 = 1;
    }
    if (pbVar6 == pbVar5 && (local_28 != (char *)0x0 && capacity != 0)) {
      iVar1 = recovered_100057d4((int)local_28);
      local_24 = 1;
      if (iVar1 + 1U < capacity) {
        local_28[iVar1 + 1U] = '\0';
        local_28[iVar1] = '\n';
      }
    }
    script = last + 1;
  }
  iVar1 = recovered_100057d4(((uintptr_t)pf_module_state+0x1aeU));
  if (iVar1 == 0) {
    return local_24;
  }
  goto LAB_1000bd1c;
}

#undef str_1000fd56
#undef str_1000ff0d
#undef local_28
#undef local_24

#undef DAT_1001401c
#define DAT_1001401c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4474U)))
#undef str_1000ff23
#define str_1000ff23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37bU)))
#undef str_1000ff2e
#define str_1000ff2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x386U)))
#undef str_1000ff51
#define str_1000ff51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a9U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf4c
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000bf4c(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r8;

  if (script == (char *)0x0) {
    local_24 = 0;
  }
  else {
    if (output != (char *)0x0) {
      unaff_r8 = capacity;
    }
    local_24 = 0;
    if (output != (char *)0x0 && capacity != 0) {
      iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x37bU));
      if (iVar3 != 0) {
        local_24 = 0;
        pcVar6 = script;
LAB_1000c004:
        if (*pcVar6 != '\0') {
          do {
            iVar7 = 0;
            while (uVar9 = (uint)(byte)pcVar6[iVar7], uVar9 != 0) {
              uVar11 = (uint)(byte)str_1000ff23[iVar7];
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != uVar11) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_1000c06c;
            }
            if (iVar3 == iVar7) goto LAB_1000c06c;
            pcVar6 = pcVar6 + 1;
            if (*pcVar6 == '\0') break;
          } while( true );
        }
        goto LAB_1000c0b0;
      }
      local_24 = 0;
LAB_1000c0b0:
      iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x386U));
      if (iVar3 != 0) {
        pcVar6 = script;
LAB_1000c118:
        if (*pcVar6 != '\0') {
          do {
            iVar7 = 0;
            while (uVar9 = (uint)(byte)pcVar6[iVar7], uVar9 != 0) {
              uVar11 = (uint)(byte)str_1000ff2e[iVar7];
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != uVar11) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_1000c180;
            }
            if (iVar3 == iVar7) goto LAB_1000c180;
            pcVar6 = pcVar6 + 1;
            if (*pcVar6 == '\0') break;
          } while( true );
        }
      }
LAB_1000c1b0:
      iVar3 = 0;
      bVar2 = true;
      do {
        bVar1 = bVar2;
        iVar7 = (&DAT_1001401c)[iVar3];
        iVar3 = recovered_100057d4(iVar7);
        pcVar6 = script;
        if (iVar3 != 0) {
LAB_1000c228:
          if (*pcVar6 != '\0') {
            do {
              iVar8 = 0;
              while (uVar9 = (uint)(byte)pcVar6[iVar8], uVar9 != 0) {
                uVar11 = (uint)*(byte *)(iVar7 + iVar8);
                if (uVar11 - 0x41 < 0x1a) {
                  uVar11 = uVar11 | 0x20;
                }
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != uVar11) break;
                iVar8 = iVar8 + 1;
                if (iVar3 == iVar8) goto LAB_1000c290;
              }
              if (iVar3 == iVar8) goto LAB_1000c290;
              pcVar6 = pcVar6 + 1;
              if (*pcVar6 == '\0') break;
            } while( true );
          }
        }
LAB_1000c1c4:
        iVar3 = 1;
        bVar2 = false;
      } while (bVar1);
      iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x3a9U));
      if (iVar3 != 0) {
LAB_1000c438:
        if (*script != '\0') {
          do {
            iVar7 = 0;
            while (uVar9 = (uint)(byte)script[iVar7], uVar9 != 0) {
              uVar11 = (uint)(byte)str_1000ff51[iVar7];
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != uVar11) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_1000c4a0;
            }
            if (iVar3 == iVar7) goto LAB_1000c4a0;
            script = script + 1;
            if (*script == '\0') {
              return local_24;
            }
          } while( true );
        }
      }
    }
  }
  return local_24;
LAB_1000c06c:
  pcVar4 = recovered_10005bb4(pcVar6,'=');
  if (pcVar4 == (char *)0x0) goto LAB_1000c0b0;
  pcVar4 = pcVar4 + 1;
  pcVar5 = recovered_1000f7e4(pcVar4);
  if (pcVar5 == (char *)0x0) {
    pcVar6 = pcVar4;
  }
  else {
    uVar9 = recovered_1000f284(output,unaff_r8,pcVar4,pcVar5);
    if (uVar9 != 0) {
      local_24 = 1;
    }
    pcVar6 = pcVar5 + 1;
    if (*pcVar5 == '\0') {
      pcVar6 = pcVar4;
    }
  }
  iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x37bU));
  if (iVar3 == 0) goto LAB_1000c0b0;
  goto LAB_1000c004;
LAB_1000c180:
  pcVar4 = recovered_10005bb4(pcVar6,'=');
  if (pcVar4 == (char *)0x0) goto LAB_1000c1b0;
  pcVar4 = pcVar4 + 1;
  pcVar5 = recovered_1000f7e4(pcVar4);
  if (pcVar5 == (char *)0x0) {
    pcVar6 = pcVar4;
  }
  else {
    uVar9 = recovered_1000f284(output,unaff_r8,pcVar4,pcVar5);
    if (uVar9 != 0) {
      local_24 = 1;
    }
    pcVar6 = pcVar5 + 1;
    if (*pcVar5 == '\0') {
      pcVar6 = pcVar4;
    }
  }
  iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x386U));
  if (iVar3 == 0) goto LAB_1000c1b0;
  goto LAB_1000c118;
LAB_1000c290:
  pcVar6 = recovered_10005bb4(pcVar6,'=');
  if (pcVar6 == (char *)0x0) goto LAB_1000c1c4;
  pcVar6 = pcVar6 + 1;
  pcVar4 = recovered_1000f7e4(pcVar6);
  if (pcVar4 != (char *)0x0) {
    uVar9 = recovered_100057d4((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'p';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    if (uVar10 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar10] = '\0';
    }
    recovered_1000f930(output,unaff_r8,pcVar6,pcVar4);
    uVar9 = recovered_100057d4((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = '/';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'p';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar11] = '\0';
    }
    pcVar5 = pcVar4 + 1;
    if (*pcVar4 == '\0') {
      pcVar5 = pcVar6;
    }
    local_24 = 1;
    pcVar6 = pcVar5;
  }
  iVar3 = recovered_100057d4(iVar7);
  if (iVar3 == 0) goto LAB_1000c1c4;
  goto LAB_1000c228;
LAB_1000c4a0:
  pcVar6 = recovered_10005bb4(script,'=');
  if (pcVar6 == (char *)0x0) {
    return local_24;
  }
  script = pcVar6 + 1;
  pcVar6 = recovered_1000f7e4(script);
  if (pcVar6 != (char *)0x0) {
    uVar9 = recovered_100057d4((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'i';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar11] = '\0';
      uVar9 = uVar11;
      uVar11 = uVar11 + 1;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'l';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'e';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar11] = '\0';
    }
    recovered_1000f930(output,unaff_r8,script,pcVar6);
    uVar9 = recovered_100057d4((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = '/';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'i';
      output[uVar11] = '\0';
      uVar9 = uVar11;
      uVar11 = uVar11 + 1;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'l';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'e';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    if (uVar10 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar10] = '\0';
    }
    pcVar4 = pcVar6 + 1;
    if (*pcVar6 == '\0') {
      pcVar4 = script;
    }
    local_24 = 1;
    script = pcVar4;
  }
  iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x3a9U));
  if (iVar3 == 0) {
    return local_24;
  }
  goto LAB_1000c438;
}

#undef DAT_1001401c
#undef str_1000ff23
#undef str_1000ff2e
#undef str_1000ff51
#undef local_24

#undef str_1000ff60
#define str_1000ff60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c73c
 */

uint recovered_1000c73c(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *last;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x3b8U));
  uVar8 = 0;
  if (script == (char *)0x0) {
    return 0;
  }
LAB_1000c790:
  if (iVar2 == 0) {
    return uVar8;
  }
  if (*script == 0) {
    return uVar8;
  }
  do {
    iVar4 = 0;
    while (uVar6 = (uint)(byte)script[iVar4], uVar6 != 0) {
      uVar7 = (uint)(byte)str_1000ff60[iVar4];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar6 != uVar7) break;
      iVar4 = iVar4 + 1;
      if (iVar2 == iVar4) goto LAB_1000c800;
    }
    if (iVar2 == iVar4) break;
    script = script + 1;
    if (*script == 0) {
      return uVar8;
    }
  } while( true );
LAB_1000c800:
  pbVar3 = (byte *)recovered_10005bb4(script,'(');
  if (pbVar3 == (byte *)0x0) {
    return uVar8;
  }
  last = (byte *)recovered_1000e4a0((char *)pbVar3);
  if (last == (byte *)0x0) {
    last = pbVar3;
  }
  else {
    pbVar3 = pbVar3 + 1;
LAB_1000c838:
    if (pbVar3 < last) {
      bVar1 = *pbVar3;
      if (bVar1 < 0x2c) {
        if (bVar1 == 0x22 || bVar1 == 0x27) goto LAB_1000c864;
LAB_1000c834:
        pbVar3 = pbVar3 + 1;
      }
      else {
        if (bVar1 != 0x60) {
          if (bVar1 != 0x2c) goto LAB_1000c834;
          uVar6 = recovered_1000f284(output,capacity,(char *)(pbVar3 + 1),(char *)last);
          if (uVar6 != 0) {
            uVar8 = 1;
          }
          goto LAB_1000c784;
        }
LAB_1000c864:
        pbVar3 = pbVar3 + 1;
        while (pbVar5 = pbVar3, pbVar3 < last) {
          while( true ) {
            pbVar3 = pbVar5 + 1;
            if ((*pbVar5 == 0x5c) && (pbVar3 < last)) break;
            if ((*pbVar5 == bVar1) || (pbVar5 = pbVar3, last <= pbVar3)) goto LAB_1000c838;
          }
          pbVar3 = pbVar5 + 2;
        }
      }
      goto LAB_1000c838;
    }
  }
LAB_1000c784:
  script = (char *)(last + 1);
  iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x3b8U));
  goto LAB_1000c790;
}

#undef str_1000ff60

#undef str_1000fd98
#define str_1000fd98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000fda4
#define str_1000fda4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8dc
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000c8dc(char *script,char *output,uint capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  uint extraout_r1 = 0;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  char *first;
  bool bVar14;

  uVar13 = 0;
  if ((script != (char *)0x0) && (*script != '\0')) {
    do {
      iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x1f0U));
      uVar7 = extraout_r1;
      if (iVar3 != 0) {
        uVar7 = (uint)(byte)*script;
      }
      pbVar12 = (byte *)0x0;
      if (iVar3 != 0 && uVar7 != 0) {
        pbVar12 = (byte *)script;
        do {
          iVar9 = 0;
          while (uVar7 = (uint)pbVar12[iVar9], uVar7 != 0) {
            uVar11 = (uint)(byte)str_1000fd98[iVar9];
            if (uVar11 - 0x41 < 0x1a) {
              uVar11 = uVar11 | 0x20;
            }
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 != uVar11) break;
            iVar9 = iVar9 + 1;
            if (iVar3 == iVar9) goto LAB_1000c978;
          }
          if (iVar3 == iVar9) goto LAB_1000c978;
          pbVar12 = pbVar12 + 1;
        } while (*pbVar12 != 0);
        pbVar12 = (byte *)0x0;
      }
LAB_1000c978:
      iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x1fcU));
      pbVar8 = (byte *)0x0;
      if ((iVar3 == 0) || (*script == 0)) {
LAB_1000ca10:
        if (pbVar12 != (byte *)0x0) goto LAB_1000ca18;
LAB_1000caa4:
        if (pbVar8 == (byte *)0x0) {
          return uVar13;
        }
      }
      else {
        do {
          pbVar8 = (byte *)script;
          iVar9 = 0;
          while (uVar7 = (uint)pbVar8[iVar9], uVar7 != 0) {
            uVar11 = (uint)(byte)str_1000fda4[iVar9];
            if (uVar11 - 0x41 < 0x1a) {
              uVar11 = uVar11 | 0x20;
            }
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 != uVar11) break;
            iVar9 = iVar9 + 1;
            if (iVar3 == iVar9) goto LAB_1000ca10;
          }
          if (iVar3 == iVar9) goto joined_r0x1000caa0;
          script = (char *)(pbVar8 + 1);
        } while (pbVar8[1] != 0);
        pbVar8 = (byte *)0x0;
joined_r0x1000caa0:
        if (pbVar12 == (byte *)0x0) goto LAB_1000caa4;
LAB_1000ca18:
        pbVar4 = pbVar12;
        if (pbVar8 < pbVar12) {
          pbVar4 = pbVar8;
        }
        bVar14 = pbVar8 == (byte *)0x0;
        pbVar8 = pbVar4;
        if (bVar14) {
          pbVar8 = pbVar12;
        }
      }
      pcVar5 = recovered_10005bb4((char *)pbVar8,'(');
      if (pcVar5 == (char *)0x0) {
        return uVar13;
      }
      pcVar6 = recovered_1000e4a0(pcVar5);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = pcVar5;
      }
      else {
        bVar14 = false;
LAB_1000cadc:
        do {
          first = pcVar5 + 1;
          if (pcVar6 <= first) break;
          bVar2 = true;
          iVar3 = 1;
          pcVar10 = first;
          do {
            cVar1 = *pcVar10;
            if (cVar1 == '\"' || cVar1 == '\'') {
              iVar9 = iVar3 + 1;
              do {
                while( true ) {
                  iVar3 = iVar9;
                  if (pcVar6 <= pcVar5 + iVar9) goto LAB_1000cb04;
                  pcVar10 = pcVar5 + iVar9;
                  iVar3 = iVar9 + 1;
                  if ((*pcVar10 != '\\') || (pcVar6 <= pcVar5 + iVar3)) break;
                  iVar9 = iVar9 + 2;
                }
                iVar9 = iVar3;
              } while (*pcVar10 != cVar1);
            }
            else {
              if (cVar1 == ',') goto LAB_1000cb68;
              iVar3 = iVar3 + 1;
            }
LAB_1000cb04:
            pcVar10 = pcVar5 + iVar3;
          } while (pcVar10 < pcVar6);
          bVar2 = false;
LAB_1000cb68:
          pcVar5 = pcVar10;
          if (iVar3 < 2) {
            if (!bVar2) break;
            goto LAB_1000cadc;
          }
          if (bVar14 && (output != (char *)0x0 && capacity != 0)) {
            iVar3 = recovered_100057d4((int)output);
            if (iVar3 + 1U < capacity) {
              output[iVar3 + 1U] = '\0';
              output[iVar3] = ' ';
            }
          }
          uVar7 = recovered_1000f284(output,capacity,first,pcVar10);
          if (uVar7 != 0) {
            bVar14 = true;
          }
        } while (bVar2);
        if (bVar14) {
          uVar13 = 1;
        }
        if (bVar14 && (output != (char *)0x0 && capacity != 0)) {
          iVar3 = recovered_100057d4((int)output);
          uVar13 = 1;
          if (iVar3 + 1U < capacity) {
            output[iVar3 + 1U] = '\0';
            output[iVar3] = '\n';
          }
        }
      }
      script = pcVar6 + 1;
    } while (*script != 0);
  }
  return uVar13;
}

#undef str_1000fd98
#undef str_1000fda4

#undef DAT_1000fd16
#define DAT_1000fd16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_1000fcc9
#define str_1000fcc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_1000fcd9
#define str_1000fcd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_1000fcfa
#define str_1000fcfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x152U)))
#undef str_1000fd1d
#define str_1000fd1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x175U)))
#undef str_1000fd4c
#define str_1000fd4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_1000fd56
#define str_1000fd56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_1000fd65
#define str_1000fd65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_1000fd6f
#define str_1000fd6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000fd7b
#define str_1000fd7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d3U)))
#undef str_1000fd85
#define str_1000fd85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddU)))
#undef str_1000fd98
#define str_1000fd98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000fda4
#define str_1000fda4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc6c
 */

uint recovered_1000cc6c(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  int iVar8;

  bVar1 = status != (char *)0x0 && status_capacity != 0;
  if (bVar1) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = 0;
    if ((flags & 1) != 0) {
      uVar2 = recovered_1000bca8(script,output,capacity);
      uVar3 = recovered_1000bf4c(script,output,capacity);
      uVar4 = recovered_1000c73c(script,output,capacity);
      local_24 = recovered_1000c8dc(script,output,capacity);
      local_24 = uVar3 | uVar2 | uVar4 | local_24;
    }
    iVar5 = recovered_100057d4(((uintptr_t)pf_module_state+0x16eU));
    uVar2 = extraout_r1;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)(&DAT_1000fd16)[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000cf7c;
        }
        if (iVar5 == iVar8) {
LAB_1000cf7c:
          local_24 = local_24 | 2;
          if ((bVar1) && (*status == '\0')) {
            puVar7 = (undefined8 *)recovered_100057d4(((uintptr_t)pf_module_state+0x175U));
            if (status_capacity <= puVar7) {
              puVar7 = (undefined8 *)(status_capacity - 1);
            }
            if (puVar7 != (undefined8 *)0x0) {
              recovered_10004710((undefined8 *)status,(undefined8 *)str_1000fd1d,puVar7);
            }
            status[(int)puVar7] = '\0';
          }
          break;
        }
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    if ((flags & 2) != 0) {
      iVar5 = recovered_100057d4(((uintptr_t)pf_module_state+0x121U));
      uVar2 = extraout_r1_00;
      if (iVar5 != 0) {
        uVar2 = (uint)(byte)*script;
      }
      if (iVar5 != 0 && uVar2 != 0) {
        pcVar6 = script;
        do {
          iVar8 = 0;
          while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
            uVar3 = (uint)(byte)str_1000fcc9[iVar8];
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != uVar3) break;
            iVar8 = iVar8 + 1;
            if (iVar5 == iVar8) goto LAB_1000d108;
          }
          if (iVar5 == iVar8) {
LAB_1000d108:
            local_24 = local_24 | 4;
            if ((bVar1) && (*status == '\0')) {
              puVar7 = (undefined8 *)recovered_100057d4(((uintptr_t)pf_module_state+0x131U));
              if (status_capacity <= puVar7) {
                puVar7 = (undefined8 *)(status_capacity - 1);
              }
              if (puVar7 != (undefined8 *)0x0) {
                recovered_10004710((undefined8 *)status,(undefined8 *)str_1000fcd9,puVar7);
              }
              status[(int)puVar7] = '\0';
            }
            break;
          }
          pcVar6 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
      }
    }
    iVar5 = recovered_100057d4(((uintptr_t)pf_module_state+0x1a4U));
    uVar2 = extraout_r1_01;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd4c[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ceb0;
        }
        if (iVar5 == iVar8) goto LAB_1000ceb0;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    iVar5 = recovered_100057d4(((uintptr_t)pf_module_state+0x1aeU));
    uVar2 = extraout_r1_02;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd56[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ceb0;
        }
        if (iVar5 == iVar8) goto LAB_1000ceb0;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    iVar5 = recovered_100057d4(((uintptr_t)pf_module_state+0x1bdU));
    uVar2 = extraout_r1_03;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd65[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ceb0;
        }
        if (iVar5 == iVar8) goto LAB_1000ceb0;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    iVar5 = recovered_100057d4(((uintptr_t)pf_module_state+0x1c7U));
    uVar2 = extraout_r1_04;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd6f[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ceb0;
        }
        if (iVar5 == iVar8) goto LAB_1000ceb0;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    pcVar6 = recovered_1000d204(script,str_1000fd7b);
    if ((((pcVar6 == (char *)0x0) &&
         (pcVar6 = recovered_1000d204(script,str_1000fd85), pcVar6 == (char *)0x0)) &&
        (pcVar6 = recovered_1000d204(script,str_1000fd98), pcVar6 == (char *)0x0)) &&
       (((pcVar6 = recovered_1000d204(script,str_1000fda4), pcVar6 == (char *)0x0 &&
         (pcVar6 = recovered_1000d204(script,&DAT_1000fd16), pcVar6 == (char *)0x0)) &&
        ((pcVar6 = recovered_1000d204(script,str_1000fcc9), pcVar6 == (char *)0x0 &&
         (*script != '\0')))))) {
      recovered_1000bc2c(status,status_capacity,str_1000fcfa);
      local_24 = local_24 | 8;
    }
  }
LAB_1000ceb0:
  return local_24;
}

#undef DAT_1000fd16
#undef str_1000fcc9
#undef str_1000fcd9
#undef str_1000fcfa
#undef str_1000fd1d
#undef str_1000fd4c
#undef str_1000fd56
#undef str_1000fd65
#undef str_1000fd6f
#undef str_1000fd7b
#undef str_1000fd85
#undef str_1000fd98
#undef str_1000fda4
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d204
 */

char * recovered_1000d204(char *text,char *pattern)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if ((pattern != (char *)0x0) &&
     (iVar2 = recovered_100057d4((int)pattern), text != (char *)0x0 && iVar2 != 0)) {
    cVar1 = *text;
    while (cVar1 != '\0') {
      iVar3 = 0;
      while (uVar4 = (uint)(byte)text[iVar3], uVar4 != 0) {
        uVar5 = (uint)(byte)pattern[iVar3];
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != uVar5) break;
        iVar3 = iVar3 + 1;
        if (iVar2 == iVar3) {
          return text;
        }
      }
      if (iVar2 == iVar3) {
        return text;
      }
      text = text + 1;
      cVar1 = *text;
    }
  }
  return (char *)0x0;
}


#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef str_1000fe52
#define str_1000fe52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_1000fe65
#define str_1000fe65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_1000fe6f
#define str_1000fe6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_1000fe87
#define str_1000fe87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_1000fe9c
#define str_1000fe9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f4U)))
#undef str_1000fea3
#define str_1000fea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fbU)))
#undef str_1000feba
#define str_1000feba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_1000fec5
#define str_1000fec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#define local_224 (*(char (*)[548])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2b4
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000d2b4(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  uint extraout_r1 = 0;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  uint extraout_r2 = 0;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;

  if ((first != (char *)0x0) && (first < last)) {
    pcVar4 = &DAT_1000fbd7;
    if (html != (char *)0x0) {
      pcVar4 = html;
    }
    do {
      bVar1 = *first;
      switch((uintptr_t)(bVar1)) {
      case 9:
      case 10:
      case 0xd:
      case 0x20:
      case 0x2b:
        first = first + 1;
        goto joined_r0x1000d9f8;
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
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
        goto switchD_1000d32c_caseD_b;
      case 0x22:
      case 0x27:
        pbVar7 = (byte *)(first + 1);
        iVar12 = 0;
        pbVar5 = pbVar7;
        if (pbVar7 < last) {
          do {
            pbVar10 = pbVar5 + 1;
            if ((*pbVar5 == 0x5c) && (pbVar10 < last)) {
              pbVar10 = pbVar5 + 2;
            }
            else if (*pbVar5 == bVar1) {
              iVar12 = 1;
              break;
            }
            pbVar5 = pbVar10;
          } while (pbVar10 < last);
        }
        recovered_1000df24(output,capacity,(char *)pbVar7,(char *)pbVar5);
        first = (char *)(pbVar5 + iVar12);
LAB_1000d9e4:
        goto LAB_1000d9e8;
      }
      if (bVar1 == 0x60) {
LAB_1000d424:
        pbVar7 = (byte *)(first + 1);
        iVar12 = 0;
        pbVar5 = pbVar7;
        if (pbVar7 < last) {
          do {
            pbVar10 = pbVar5 + 1;
            bVar1 = *pbVar5;
            if ((bVar1 == 0x5c) && (pbVar10 < last)) {
              pbVar10 = pbVar5 + 2;
            }
            else if (bVar1 == 0x24) {
              if ((pbVar10 < last) && (*pbVar10 == 0x7b)) goto code_r0x1000d490;
            }
            else if (bVar1 == 0x60) {
              iVar12 = 1;
              break;
            }
            pbVar5 = pbVar10;
            if (last <= pbVar10) break;
          } while( true );
        }
        recovered_1000df24(output,capacity,(char *)pbVar7,(char *)pbVar5);
        first = (char *)(pbVar5 + iVar12);
        goto LAB_1000d9e4;
      }
switchD_1000d32c_caseD_b:
      iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2aaU));
      pbVar5 = (byte *)0x0;
      if ((iVar12 != 0) && (*first != 0)) {
        pbVar5 = (byte *)first;
        do {
          iVar8 = 0;
          while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
            uVar16 = (uint)(byte)str_1000fe52[iVar8];
            if (uVar16 - 0x41 < 0x1a) {
              uVar16 = uVar16 | 0x20;
            }
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != uVar16) break;
            iVar8 = iVar8 + 1;
            if (iVar12 == iVar8) goto LAB_1000d664;
          }
          if (iVar12 == iVar8) goto LAB_1000d664;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar5 != 0);
        pbVar5 = (byte *)0x0;
      }
LAB_1000d664:
      if ((byte *)first == pbVar5) {
LAB_1000d7a8:
        pcVar3 = recovered_10005bb4(first,'(');
        if (pcVar3 == (char *)0x0) {
          return 8;
        }
        pcVar9 = recovered_1000e4a0(pcVar3);
        if (pcVar9 == (char *)0x0) {
          return 8;
        }
        if (last < pcVar9) {
          return 8;
        }
        uVar2 = recovered_1000e5d4(output,capacity,pcVar3 + 1,pcVar9,url,html,1);
        if ((uVar2 & 8) != 0) {
          return uVar2;
        }
        first = pcVar9 + 1;
      }
      else {
        iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2bdU));
        pbVar5 = (byte *)0x0;
        if ((iVar12 != 0) && (*first != 0)) {
          pbVar5 = (byte *)first;
          do {
            iVar8 = 0;
            while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
              uVar16 = (uint)(byte)str_1000fe65[iVar8];
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != uVar16) break;
              iVar8 = iVar8 + 1;
              if (iVar12 == iVar8) goto LAB_1000d6fc;
            }
            if (iVar12 == iVar8) goto LAB_1000d6fc;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar5 != 0);
          pbVar5 = (byte *)0x0;
        }
LAB_1000d6fc:
        if ((byte *)first == pbVar5) goto LAB_1000d7a8;
        iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2c7U));
        pbVar5 = (byte *)0x0;
        if ((iVar12 != 0) && (*first != 0)) {
          pbVar5 = (byte *)first;
          do {
            iVar8 = 0;
            while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
              uVar16 = (uint)(byte)str_1000fe6f[iVar8];
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != uVar16) break;
              iVar8 = iVar8 + 1;
              if (iVar12 == iVar8) goto LAB_1000d854;
            }
            if (iVar12 == iVar8) goto LAB_1000d854;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar5 != 0);
          pbVar5 = (byte *)0x0;
        }
LAB_1000d854:
        if ((byte *)first == pbVar5) {
          pcVar3 = recovered_10005bb4(first,'(');
          if (pcVar3 == (char *)0x0) {
            return 8;
          }
          pcVar3 = recovered_1000e4a0(pcVar3);
          if (pcVar3 == (char *)0x0) {
            return 8;
          }
          if (last < pcVar3) {
            return 8;
          }
          iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2dfU));
          pbVar5 = (byte *)0x0;
          if ((iVar12 != 0) && (*first != 0)) {
            pbVar5 = (byte *)first;
            do {
              iVar8 = 0;
              while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                uVar16 = (uint)(byte)str_1000fe87[iVar8];
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != uVar16) break;
                iVar8 = iVar8 + 1;
                if (iVar12 == iVar8) goto LAB_1000dbdc;
              }
              if (iVar12 == iVar8) goto LAB_1000dbdc;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar5 != 0);
            pbVar5 = (byte *)0x0;
          }
LAB_1000dbdc:
          pbVar7 = (byte *)(pcVar3 + 1);
          if ((byte *)first != pbVar5) {
            iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2dfU));
            uVar2 = extraout_r1;
            if (iVar12 != 0) {
              uVar2 = (uint)*pbVar7;
            }
            if (iVar12 != 0 && uVar2 != 0) {
              iVar8 = 1;
LAB_1000ddbc:
              pcVar15 = str_1000fe87;
              pcVar9 = pcVar3;
              iVar11 = iVar12;
              while (uVar2 = (uint)(byte)pcVar9[iVar8], uVar2 != 0) {
                uVar16 = (uint)(byte)*pcVar15;
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar2 != uVar16) break;
                pcVar9 = pcVar9 + 1;
                pcVar15 = pcVar15 + 1;
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) goto LAB_1000de30;
              }
              if (iVar11 != 0) goto code_r0x1000de1c;
LAB_1000de30:
              if (iVar8 == 1) {
                local_224[0] = '\0';
                uVar2 = recovered_100057d4((int)local_224);
                cVar6 = *pcVar4;
                if (cVar6 != '\0') {
                  pcVar3 = pcVar4;
                  do {
                    pcVar3 = pcVar3 + 1;
                    uVar16 = uVar2 + 1;
                    if (uVar16 >> 9 == 0) {
                      local_224[uVar16] = '\0';
                      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                        cVar6 = cVar6 + -0x20;
                      }
                      local_224[uVar2] = cVar6;
                      uVar2 = uVar16;
                    }
                    cVar6 = *pcVar3;
                  } while (cVar6 != '\0');
                }
                uVar2 = recovered_1000e5d4(output,capacity,first,last,url,local_224,0);
                iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2dfU));
                pbVar7 = pbVar7 + iVar12;
                goto LAB_1000dd30;
              }
            }
          }
LAB_1000dc10:
          uVar2 = recovered_1000e5d4(output,capacity,first,last,url,html,0);
          iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2f4U));
          if ((iVar12 != 0) && (*pbVar7 != 0)) {
            iVar8 = 1;
            do {
              pcVar15 = str_1000fe9c;
              pcVar9 = pcVar3;
              iVar11 = iVar12;
              while (uVar16 = (uint)(byte)pcVar9[iVar8], uVar16 != 0) {
                uVar14 = (uint)(byte)*pcVar15;
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar14 - 0x41 < 0x1a) {
                  uVar14 = uVar14 | 0x20;
                }
                if (uVar16 != uVar14) break;
                pcVar9 = pcVar9 + 1;
                pcVar15 = pcVar15 + 1;
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) goto LAB_1000dd00;
              }
              if (iVar11 == 0) {
LAB_1000dd00:
                if (iVar8 == 1) {
                  iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2f4U));
                  pbVar7 = pbVar7 + iVar12;
                }
                break;
              }
              iVar8 = iVar8 + 1;
            } while (pcVar3[iVar8] != '\0');
          }
LAB_1000dd30:
          first = (char *)pbVar7;
          if ((uVar2 & 8) != 0) {
            return uVar2;
          }
        }
        else {
          iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x2fbU));
          pbVar5 = (byte *)0x0;
          if ((iVar12 != 0) && (*first != 0)) {
            pbVar5 = (byte *)first;
            do {
              iVar8 = 0;
              while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                uVar16 = (uint)(byte)str_1000fea3[iVar8];
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != uVar16) break;
                iVar8 = iVar8 + 1;
                if (iVar12 == iVar8) goto LAB_1000da0c;
              }
              if (iVar12 == iVar8) goto LAB_1000da0c;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar5 != 0);
            pbVar5 = (byte *)0x0;
          }
LAB_1000da0c:
          if ((byte *)first == pbVar5) {
LAB_1000db54:
            uVar2 = recovered_1000e5d4(output,capacity,first,last,url,html,0);
            if ((uVar2 & 8) != 0) {
              return uVar2;
            }
            if (last <= first) goto LAB_1000d9e8;
            do {
              if (((byte)*first - 0x2b < 0x11) &&
                 ((1 << ((byte)*first - 0x2b & 0xff) & 0x10003U) != 0)) goto LAB_1000d9e8;
              first = first + 1;
            } while (first < last);
          }
          else {
            iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x312U));
            pbVar5 = (byte *)0x0;
            if ((iVar12 != 0) && (*first != 0)) {
              pbVar5 = (byte *)first;
              do {
                iVar8 = 0;
                while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                  uVar16 = (uint)(byte)str_1000feba[iVar8];
                  if (uVar16 - 0x41 < 0x1a) {
                    uVar16 = uVar16 | 0x20;
                  }
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != uVar16) break;
                  iVar8 = iVar8 + 1;
                  if (iVar12 == iVar8) goto LAB_1000daa0;
                }
                if (iVar12 == iVar8) goto LAB_1000daa0;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar5 != 0);
              pbVar5 = (byte *)0x0;
            }
LAB_1000daa0:
            if ((byte *)first == pbVar5) goto LAB_1000db54;
            iVar12 = recovered_100057d4(((uintptr_t)pf_module_state+0x31dU));
            pbVar5 = (byte *)0x0;
            uVar2 = extraout_r2;
            if (iVar12 != 0) {
              uVar2 = (uint)(byte)*first;
            }
            if (iVar12 != 0 && uVar2 != 0) {
              pbVar5 = (byte *)first;
              do {
                iVar8 = 0;
                while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                  uVar16 = (uint)(byte)str_1000fec5[iVar8];
                  if (uVar16 - 0x41 < 0x1a) {
                    uVar16 = uVar16 | 0x20;
                  }
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != uVar16) break;
                  iVar8 = iVar8 + 1;
                  if (iVar12 == iVar8) goto LAB_1000dacc;
                }
                if (iVar12 == iVar8) goto LAB_1000dacc;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar5 != 0);
              pbVar5 = (byte *)0x0;
            }
LAB_1000dacc:
            if ((byte *)first == pbVar5) goto LAB_1000db54;
            uVar2 = recovered_1000ed18(output,capacity,first,last,url,html,0);
            if ((uVar2 & 8) != 0) {
              return 8;
            }
            if (last <= first) goto LAB_1000d9e8;
            do {
              if (((byte)*first - 0x2b < 0x11) &&
                 ((1 << ((byte)*first - 0x2b & 0xff) & 0x10003U) != 0)) goto LAB_1000d9e8;
              first = first + 1;
            } while (first < last);
          }
          first = last;
        }
      }
LAB_1000d9e8:
      if ((byte *)first == (byte *)0x0) {
        return 0x10;
      }
joined_r0x1000d9f8:
    } while (first < last);
  }
  return 0x10;
code_r0x1000d490:
  pbVar10 = pbVar5 + 2;
  if (last <= pbVar10) {
    return 8;
  }
  iVar12 = 1;
  first = (char *)pbVar10;
LAB_1000d4bc:
  bVar1 = *first;
  if (bVar1 < 0x60) {
    if (!(bVar1 != 0x22 && bVar1 != 0x27)) goto LAB_1000d4e0;
  }
  else {
    if (bVar1 == 0x60) {
LAB_1000d4e0:
      first = first + 1;
      while (pbVar13 = (byte *)first, first < last) {
        while( true ) {
          first = (char *)(pbVar13 + 1);
          if ((*pbVar13 == 0x5c) && (first < last)) break;
          if ((*pbVar13 == bVar1) || (pbVar13 = (byte *)first, last <= first)) goto LAB_1000d4b4;
        }
        first = (char *)(pbVar13 + 2);
      }
      goto LAB_1000d4b4;
    }
    if (bVar1 != 0x7b) {
      bVar17 = false;
      if (bVar1 == 0x7d) {
        iVar12 = iVar12 + -1;
        bVar17 = iVar12 == 0;
      }
      if (!bVar17) goto LAB_1000d4b0;
      recovered_1000df24(output,capacity,(char *)pbVar7,(char *)pbVar5);
      uVar2 = recovered_1000d2b4(output,capacity,(char *)pbVar10,first,url,html);
      if ((uVar2 & 8) != 0) {
        return uVar2;
      }
      goto LAB_1000d424;
    }
    iVar12 = iVar12 + 1;
  }
LAB_1000d4b0:
  first = first + 1;
LAB_1000d4b4:
  if (last <= first) {
    return 8;
  }
  goto LAB_1000d4bc;
code_r0x1000de1c:
  iVar8 = iVar8 + 1;
  if (pcVar3[iVar8] == '\0') goto LAB_1000dc10;
  goto LAB_1000ddbc;
}

#undef DAT_1000fbd7
#undef str_1000fe52
#undef str_1000fe65
#undef str_1000fe6f
#undef str_1000fe87
#undef str_1000fe9c
#undef str_1000fea3
#undef str_1000feba
#undef str_1000fec5
#undef local_224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df24
 */

uint recovered_1000df24(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;

  uVar8 = 0;
  if (output != (char *)0x0) {
    unaff_r8 = capacity;
  }
  if (((output != (char *)0x0 && capacity != 0) && (first <= last)) &&
     (first != (char *)0x0 && last != (char *)0x0)) {
    uVar1 = recovered_100057d4((int)output);
    while (first < last) {
      if ((*first == '\\') && (pcVar10 = first + 1, pcVar10 < last)) {
        switch((uintptr_t)(*pcVar10)) {
        case '\"':
          uVar7 = uVar1 + 1;
          uVar8 = 1;
          if (uVar7 < unaff_r8) {
            output[uVar1] = '\"';
            output[uVar7] = '\0';
            uVar1 = uVar7;
          }
          break;
        default:
          uVar7 = uVar1 + 1;
          uVar8 = 1;
          if (uVar7 < unaff_r8) {
            output[uVar1] = *pcVar10;
            output[uVar7] = '\0';
            uVar1 = uVar7;
          }
          break;
        case '\'':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = '\'';
LAB_1000e48c:
            uVar8 = 1;
            output[uVar1] = cVar2;
            uVar1 = uVar1 + 1;
          }
          break;
        case '\\':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = '\\';
            goto LAB_1000e48c;
          }
          break;
        case 'b':
        case 'f':
        case 'v':
          uVar8 = 1;
          break;
        case 'n':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            cVar2 = '\n';
            output[uVar1 + 1] = '\0';
            goto LAB_1000e48c;
          }
          break;
        case 'r':
          break;
        case 't':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = ' ';
            goto LAB_1000e48c;
          }
          break;
        case 'u':
          pcVar6 = first + 5;
          if (pcVar6 < last) {
            cVar2 = first[2];
            iVar3 = (int)cVar2;
            uVar7 = iVar3 - 0x30;
            if (9 < (uVar7 & 0xff)) {
              if ((byte)(cVar2 + 0x9fU) < 6) {
                uVar7 = iVar3 - 0x57;
              }
              else {
                if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e470;
                uVar7 = iVar3 - 0x37;
              }
            }
            if (-1 < (int)uVar7) {
              cVar2 = first[3];
              iVar3 = (int)cVar2;
              uVar4 = iVar3 - 0x30;
              if (9 < (uVar4 & 0xff)) {
                if ((byte)(cVar2 + 0x9fU) < 6) {
                  uVar4 = iVar3 - 0x57;
                }
                else {
                  if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e470;
                  uVar4 = iVar3 - 0x37;
                }
              }
              if (-1 < (int)uVar4) {
                cVar2 = first[4];
                iVar3 = (int)cVar2;
                uVar9 = iVar3 - 0x30;
                if (9 < (uVar9 & 0xff)) {
                  if ((byte)(cVar2 + 0x9fU) < 6) {
                    uVar9 = iVar3 - 0x57;
                  }
                  else {
                    if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e470;
                    uVar9 = iVar3 - 0x37;
                  }
                }
                if (-1 < (int)uVar9) {
                  cVar2 = *pcVar6;
                  iVar3 = (int)cVar2;
                  uVar5 = iVar3 - 0x30;
                  if (9 < (uVar5 & 0xff)) {
                    if ((byte)(cVar2 + 0x9fU) < 6) {
                      uVar5 = iVar3 - 0x57;
                    }
                    else {
                      if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e470;
                      uVar5 = iVar3 - 0x37;
                    }
                  }
                  if (-1 < (int)uVar5) {
                    uVar11 = uVar1 + 1;
                    uVar8 = 1;
                    if (uVar11 < unaff_r8) {
                      output[uVar11] = '\0';
                      uVar5 = uVar5 | (uVar9 | uVar7 << 8 | uVar4 << 4) << 4;
                      if (0x5e < uVar5 - 0x20) {
                        uVar5 = 0x20;
                      }
                      output[uVar1] = (char)uVar5;
                      uVar1 = uVar11;
                    }
                    pcVar10 = pcVar6;
                    break;
                  }
                }
              }
            }
          }
LAB_1000e470:
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            cVar2 = 'u';
            output[uVar1 + 1] = '\0';
            goto LAB_1000e48c;
          }
          break;
        case 'x':
          pcVar6 = first + 3;
          if (pcVar6 < last) {
            cVar2 = first[2];
            iVar3 = (int)cVar2;
            uVar7 = iVar3 - 0x30;
            if (9 < (uVar7 & 0xff)) {
              if ((byte)(cVar2 + 0x9fU) < 6) {
                uVar7 = iVar3 - 0x57;
              }
              else {
                uVar7 = 0xffffffff;
                if ((byte)(cVar2 + 0xbfU) < 6) {
                  uVar7 = iVar3 - 0x37;
                }
              }
            }
            cVar2 = *pcVar6;
            iVar3 = (int)cVar2;
            uVar4 = iVar3 - 0x30;
            if (9 < (uVar4 & 0xff)) {
              if ((byte)(cVar2 + 0x9fU) < 6) {
                uVar4 = iVar3 - 0x57;
              }
              else {
                uVar4 = 0xffffffff;
                if ((byte)(cVar2 + 0xbfU) < 6) {
                  uVar4 = iVar3 - 0x37;
                }
              }
            }
            if (-1 < (int)uVar7 && -1 < (int)uVar4) {
              uVar9 = uVar1 + 1;
              uVar8 = 1;
              pcVar10 = pcVar6;
              if (uVar9 < unaff_r8) {
                output[uVar1] = (byte)uVar4 | (byte)(uVar7 << 4);
                output[uVar9] = '\0';
                uVar1 = uVar9;
              }
              else {
              }
              break;
            }
          }
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = 'x';
            goto LAB_1000e48c;
          }
        }
      }
      else {
        uVar7 = uVar1 + 1;
        uVar8 = 1;
        if (uVar7 < unaff_r8) {
          output[uVar1] = *first;
          output[uVar7] = '\0';
          uVar1 = uVar7;
        }
        pcVar10 = first;
      }
      first = pcVar10 + 1;
    }
  }
  return uVar8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e4a0
 */

char * recovered_1000e4a0(char *first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
switchD_1000e4d8_caseD_0:
    return (char *)0x0;
  }
  iVar3 = 1;
  do {
    first = first + 1;
LAB_1000e4c4:
    cVar1 = *first;
    switch((uintptr_t)(cVar1)) {
    case '\0':
      goto switchD_1000e4d8_caseD_0;
    case '\"':
    case '\'':
      first = first + 1;
LAB_1000e59c:
      do {
        cVar2 = *first;
        if (cVar2 == '\\') {
          if (first[1] != '\0') {
            first = first + 2;
            goto LAB_1000e59c;
          }
        }
        else if (cVar2 == '\0') break;
        first = first + 1;
      } while (cVar2 != cVar1);
      goto LAB_1000e4c4;
    case '(':
      iVar3 = iVar3 + 1;
      break;
    case ')':
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return first;
      }
    }
  } while( true );
}


#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef str_1000fe6f
#define str_1000fe6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_1000fea3
#define str_1000fea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fbU)))
#undef str_1000feba
#define str_1000feba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_1000fec5
#define str_1000fec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31dU)))
#undef str_1000fed8
#define str_1000fed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#define local_e4 (*(byte (*)[228])(pf_stack_frame + 28))
#define local_84 (*(byte (*)[132])(pf_stack_frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5d4
 */

uint recovered_1000e5d4(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint extraout_r0 = 0;
  char *pcVar3;
  char *extraout_r1 = 0;
  char *pcVar4;
  byte *pbVar5;
  uint extraout_r2 = 0;
  uint uVar6;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;

  if (first == (char *)0x0) {
    return 8;
  }
  if (last <= first) {
    return 8;
  }
  iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x2c7U));
  pcVar3 = (char *)0x0;
  uVar6 = extraout_r2;
  if (iVar2 != 0) {
    uVar6 = (uint)(byte)*first;
  }
  if (iVar2 != 0 && uVar6 != 0) {
    pcVar3 = first;
    do {
      iVar7 = 0;
      while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
        uVar12 = (uint)(byte)str_1000fe6f[iVar7];
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != uVar12) break;
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_1000e630;
      }
      if (iVar2 == iVar7) goto LAB_1000e630;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)0x0;
  }
LAB_1000e630:
  if (pcVar3 != first) {
    iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x2fbU));
    pcVar3 = (char *)0x0;
    uVar6 = extraout_r2_00;
    if (iVar2 != 0) {
      uVar6 = (uint)(byte)*first;
    }
    if (iVar2 != 0 && uVar6 != 0) {
      pcVar3 = first;
      do {
        iVar7 = 0;
        while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
          uVar12 = (uint)(byte)str_1000fea3[iVar7];
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != uVar12) break;
          iVar7 = iVar7 + 1;
          if (iVar2 == iVar7) goto LAB_1000e660;
        }
        if (iVar2 == iVar7) goto LAB_1000e660;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
    }
LAB_1000e660:
    if (pcVar3 != first) {
      uVar6 = recovered_1000ed18(output,capacity,first,last,url,html,depth);
      if ((uVar6 & 8) == 0) {
        return uVar6;
      }
      iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x312U));
      pcVar3 = (char *)0x0;
      uVar6 = extraout_r2_01;
      if (iVar2 != 0) {
        uVar6 = (uint)(byte)*first;
      }
      if (iVar2 != 0 && uVar6 != 0) {
        pcVar3 = first;
        do {
          iVar7 = 0;
          while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
            uVar12 = (uint)(byte)str_1000feba[iVar7];
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != uVar12) break;
            iVar7 = iVar7 + 1;
            if (iVar2 == iVar7) goto LAB_1000e6c8;
          }
          if (iVar2 == iVar7) goto LAB_1000e6c8;
          pcVar3 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3 = (char *)0x0;
      }
LAB_1000e6c8:
      if (pcVar3 != first) {
        iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x31dU));
        pcVar3 = (char *)0x0;
        uVar6 = extraout_r2_02;
        if (iVar2 != 0) {
          uVar6 = (uint)(byte)*first;
        }
        if (iVar2 != 0 && uVar6 != 0) {
          pcVar3 = first;
          do {
            iVar7 = 0;
            while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
              uVar12 = (uint)(byte)str_1000fec5[iVar7];
              if (uVar12 - 0x41 < 0x1a) {
                uVar12 = uVar12 | 0x20;
              }
              if (uVar6 - 0x41 < 0x1a) {
                uVar6 = uVar6 | 0x20;
              }
              if (uVar6 != uVar12) break;
              iVar7 = iVar7 + 1;
              if (iVar2 == iVar7) goto LAB_1000e6f8;
            }
            if (iVar2 == iVar7) goto LAB_1000e6f8;
            pcVar3 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          pcVar3 = (char *)0x0;
        }
LAB_1000e6f8:
        if (pcVar3 != first) {
          return 8;
        }
      }
      pcVar3 = &DAT_1000fbd7;
      if (html != (char *)0x0) {
        pcVar3 = html;
      }
      if (depth == 0) {
        if (output == (char *)0x0) {
          return 0x10;
        }
        uVar6 = recovered_100057d4((int)output);
        cVar1 = *pcVar3;
        while (cVar1 != '\0') {
          pcVar3 = pcVar3 + 1;
          if (capacity != 0) {
            uVar12 = uVar6 + 1;
            if (uVar12 < capacity) {
              output[uVar6] = cVar1;
              output[uVar12] = '\0';
              uVar6 = uVar12;
            }
          }
          cVar1 = *pcVar3;
        }
        return 0x10;
      }
      goto LAB_1000e730;
    }
  }
  pcVar3 = recovered_10005bb4(first,'(');
  if (pcVar3 == (char *)0x0) {
    return 8;
  }
  pcVar4 = extraout_r1;
  if (pcVar3 < last) {
    pcVar4 = pcVar3 + 1;
  }
  if (pcVar3 >= last || last <= pcVar4) {
    return 8;
  }
  pbVar9 = (byte *)0x0;
  while( true ) {
    uVar6 = (byte)pcVar3[(int)(pbVar9 + 1)] - 9;
    if (0x1e < uVar6) {
      return 8;
    }
    if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) break;
    pbVar10 = pbVar9 + 2;
    pbVar9 = pbVar9 + 1;
    if (pcVar3 + (int)pbVar10 == last) {
      return 8;
    }
  }
  if ((1 << (uVar6 & 0xff) & 0x42000000U) == 0) {
    return 8;
  }
  pbVar5 = (byte *)(pcVar3 + (int)(pbVar9 + 2));
  pbVar10 = pbVar5;
  if (pbVar5 < last) {
    do {
      if ((uint)*pbVar10 == (uint)(byte)pcVar3[(int)(pbVar9 + 1)]) goto LAB_1000e8bc;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < last);
    pbVar10 = (byte *)last;
  }
LAB_1000e8bc:
  uVar6 = 0;
  if (pbVar10 + (-2 - (int)pcVar3) == pbVar9) {
    pbVar10 = (byte *)0x0;
  }
  else if (*pbVar5 == 0x23) {
    pbVar5 = (byte *)(pcVar3 + (int)(pbVar9 + 3));
    pbVar10 = pbVar10 + (-(int)pbVar9 - (int)pcVar3) + -3;
  }
  else {
    pbVar10 = pbVar10 + (-2 - (int)pcVar3) + -(int)pbVar9;
  }
  if ((byte *)0x5e < pbVar10) {
    pbVar10 = (byte *)0x5f;
  }
  recovered_10004710((undefined8 *)local_e4,(undefined8 *)pbVar5,(undefined8 *)pbVar10);
  local_e4[(int)pbVar10] = 0;
  uVar12 = extraout_r0;
  if (url != (char *)0x0) {
    uVar12 = (uint)(byte)*url;
  }
  if (url == (char *)0x0 || uVar12 == 0) {
    return 8;
  }
  pbVar9 = local_e4;
  iVar2 = recovered_100057fc(pbVar9,(byte *)url);
  if (iVar2 != 0) {
    iVar2 = recovered_100057d4(((uintptr_t)pf_module_state+0x330U));
    if (iVar2 == 0) {
      return 8;
    }
    do {
      if (local_e4[0] == 0) {
        return 8;
      }
      iVar7 = 0;
      while (uVar12 = (uint)pbVar9[iVar7], uVar12 != 0) {
        uVar8 = (uint)(byte)str_1000fed8[iVar7];
        uVar6 = uVar12 - 0x41;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar6 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 != uVar8) break;
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_1000eafc;
      }
      if (iVar2 == iVar7) {
LAB_1000eafc:
        pbVar9 = pbVar9 + 5;
        goto LAB_1000eb00;
      }
      pbVar9 = pbVar9 + 1;
      local_e4[0] = *pbVar9;
    } while( true );
  }
  goto LAB_1000ec44;
LAB_1000eb00:
  do {
    uVar12 = (uint)*pbVar9;
    switch((uintptr_t)(uVar12)) {
    case 9:
    case 0x20:
      pbVar9 = pbVar9 + 1;
      break;
    default:
      goto switchD_1000eb18_caseD_a;
    case 0x22:
    case 0x27:
      pbVar9 = pbVar9 + 1;
      uVar8 = (uint)*pbVar9;
      goto LAB_1000ebb0;
    }
  } while( true );
switchD_1000eb18_caseD_a:
  uVar8 = uVar12;
  uVar12 = 0;
LAB_1000ebb0:
  if (uVar8 != 0) {
    uVar6 = (uint)(char)uVar8;
  }
  uVar11 = 0;
  if (uVar8 != 0 && uVar12 != uVar6) {
    uVar11 = 0;
    while ((uVar12 != 0 || ((uVar8 != 9 && (uVar8 != 0x20 && uVar8 != 0x5d))))) {
      local_84[uVar11] = (byte)uVar8;
      iVar2 = uVar11 + 1;
      uVar11 = uVar11 + 1;
      uVar8 = (uint)pbVar9[iVar2];
      if ((uVar8 == 0) || ((0x5e < uVar11 || (uVar12 == (int)(char)pbVar9[iVar2])))) break;
    }
  }
  local_84[uVar11] = 0;
  iVar2 = recovered_100057fc(local_84,(byte *)url);
  if (iVar2 != 0) {
    return 8;
  }
LAB_1000ec44:
  pcVar3 = &DAT_1000fbd7;
  if (html != (char *)0x0) {
    pcVar3 = html;
  }
  if (depth == 0) {
    recovered_1000f180(output,capacity,pcVar3);
    return 0x10;
  }
LAB_1000e730:
  recovered_1000eff0(output,capacity,pcVar3);
  return 0x10;
}

#undef DAT_1000fbd7
#undef str_1000fe6f
#undef str_1000fea3
#undef str_1000feba
#undef str_1000fec5
#undef str_1000fed8
#undef local_e4
#undef local_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec88
 */

uint recovered_1000ec88(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  uint uVar3;

  if (capacity == 0) {
    return (uint)output;
  }
  if (output == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100057d4((int)output);
  }
  cVar2 = *(char *)capacity;
  while (cVar2 != '\0') {
    capacity = capacity + 1;
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    if ((output != (char *)0x0) && (uVar3 = uVar1 + 1, uVar3 >> 9 == 0)) {
      output[uVar1] = cVar2;
      output[uVar3] = '\0';
      uVar1 = uVar3;
    }
    cVar2 = *(char *)capacity;
  }
  return uVar1;
}


#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef str_1000fe9c
#define str_1000fe9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f4U)))
#undef str_1000fefe
#define str_1000fefe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x356U)))
#define local_284 (*(char (*)[644])(pf_stack_frame + 28))
#define local_84 (*(byte (*)[132])(pf_stack_frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed18
 */

uint recovered_1000ed18(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  char *extraout_r2 = 0;
  char *text;
  char *text_00;
  int iVar6;
  uint uVar7;
  uint unaff_r6;
  uint uVar8;
  byte *pbVar9;
  char *capacity_00;
  bool bVar10;

  uVar2 = 8;
  if ((first != (char *)0x0 && last != (char *)0x0) && (first < last)) {
    if (url != (char *)0x0) {
      unaff_r6 = (uint)(byte)*url;
    }
    if ((url != (char *)0x0 && unaff_r6 != 0) &&
       ((uVar8 = (uint)(byte)*first, (uVar8 & 0xdf) - 0x41 < 0x1a ||
        (uVar8 == 0x5f || uVar8 == 0x24)))) {
      uVar2 = 0;
      do {
        bVar1 = *first;
        uVar7 = (uint)bVar1;
        uVar8 = uVar7 - 0x30;
        bVar10 = 9 < uVar8;
        if (bVar10) {
          uVar8 = (uVar7 & 0xdf) - 0x41;
        }
        if ((bVar10 && 0x19 < uVar8) && (uVar7 != 0x5f && uVar7 != 0x24)) goto LAB_1000edf0;
        first = first + 1;
        if (uVar2 + 1 < 0x60) {
          local_84[uVar2] = bVar1;
          uVar2 = uVar2 + 1;
        }
      } while (first != last);
      first = last;
LAB_1000edf0:
      pbVar9 = (byte *)0x0;
      local_84[uVar2] = 0;
      iVar3 = recovered_100057fc(local_84,(byte *)url);
      if (iVar3 == 0) {
        iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x2f4U));
        if ((iVar3 != 0) && (*first != 0)) {
          pbVar9 = (byte *)first;
          do {
            iVar6 = 0;
            while (uVar2 = (uint)pbVar9[iVar6], uVar2 != 0) {
              uVar8 = (uint)(byte)str_1000fe9c[iVar6];
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != uVar8) break;
              iVar6 = iVar6 + 1;
              if (iVar3 == iVar6) goto LAB_1000eea4;
            }
            if (iVar3 == iVar6) goto LAB_1000eea4;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar9 != 0);
          pbVar9 = (byte *)0x0;
        }
LAB_1000eea4:
        uVar2 = 8;
        if (pbVar9 == (byte *)first) {
          iVar3 = recovered_100057d4(((uintptr_t)pf_module_state+0x2f4U));
          pbVar9 = (byte *)(first + iVar3);
          capacity_00 = &DAT_1000fbd7;
          if (html != (char *)0x0) {
            capacity_00 = html;
          }
          pcVar4 = (char *)recovered_100057d4(((uintptr_t)pf_module_state+0x347U));
          pbVar5 = (byte *)0x0;
          text = extraout_r2;
          if (pcVar4 != (char *)0x0) {
            text = (char *)(uint)*pbVar9;
          }
          if (pcVar4 != (char *)0x0 && text != (char *)0x0) {
            pbVar5 = pbVar9;
            do {
              text = (char *)0x0;
              while (uVar2 = (uint)pbVar5[(int)text], uVar2 != 0) {
                uVar8 = (uint)(byte)text[((uintptr_t)pf_module_state+0x347U)];
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != uVar8) break;
                text = text + 1;
                if (pcVar4 == text) goto LAB_1000ef00;
              }
              if (pcVar4 == text) goto LAB_1000ef00;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar5 != 0);
            pbVar5 = (byte *)0x0;
            text = (char *)0x0;
          }
LAB_1000ef00:
          if (pbVar5 == pbVar9) {
            pcVar4 = local_284;
            local_284[0] = '\0';
            recovered_1000ec88(pcVar4,(uint)capacity_00,text);
          }
          else {
            pbVar5 = (byte *)recovered_1000d204((char *)pbVar9,str_1000fefe);
            if (pbVar5 == pbVar9) {
              pcVar4 = local_284;
              local_284[0] = '\0';
              recovered_1000f1f8(pcVar4,(uint)capacity_00,text_00);
            }
            else {
              pcVar4 = capacity_00;
            }
          }
          if (depth == 0) {
            recovered_1000f180(output,capacity,pcVar4);
          }
          else {
            recovered_1000eff0(output,capacity,pcVar4);
          }
          uVar2 = 0x10;
        }
      }
      else {
        uVar2 = 8;
      }
    }
  }
  return uVar2;
}

#undef DAT_1000fbd7
#undef str_1000fe9c
#undef str_1000fefe
#undef local_284
#undef local_84

#undef str_1000fede
#define str_1000fede (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eff0
 */

uint recovered_1000eff0(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (text == (char *)0x0) {
    return (uint)output;
  }
  if (output == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_100057d4((int)output);
  }
  uVar4 = (uint)(byte)*text;
  if (uVar4 != 0) {
    bVar1 = output != (char *)0x0 && capacity != 0;
    do {
      uVar5 = uVar4 - 0x30;
      bVar6 = 9 < uVar5;
      if (bVar6) {
        uVar5 = (uVar4 & 0xdf) - 0x41;
      }
      if (bVar6 && 0x19 < uVar5) {
        if (uVar4 < 0x5f) {
          if (1 < uVar4 - 0x2d) {
            if (uVar4 != 0x20) goto LAB_1000f104;
            uVar4 = 0x2b;
          }
          goto LAB_1000f0b8;
        }
        if (uVar4 == 0x7e || uVar4 == 0x5f) goto LAB_1000f0b8;
LAB_1000f104:
        if (bVar1) {
          uVar4 = uVar2 + 1;
          if (uVar4 < capacity) {
            uVar5 = uVar2 + 2;
            output[uVar4] = '\0';
            output[uVar2] = '%';
            uVar2 = uVar4;
            uVar4 = uVar5;
          }
          if (uVar4 < capacity) {
            output[uVar2] = str_1000fede[(byte)*text >> 4];
            output[uVar4] = '\0';
            uVar2 = uVar4;
            uVar4 = uVar4 + 1;
          }
          if (capacity <= uVar4) goto LAB_1000f088;
          cVar3 = str_1000fede[(byte)*text & 0xf];
          uVar5 = uVar2;
          goto LAB_1000f07c;
        }
      }
      else {
LAB_1000f0b8:
        cVar3 = (char)uVar4;
        uVar5 = uVar2;
        uVar4 = uVar2 + 1;
        if (bVar1 && uVar2 + 1 < capacity) {
LAB_1000f07c:
          uVar2 = uVar4;
          output[uVar5] = cVar3;
          output[uVar2] = '\0';
        }
      }
LAB_1000f088:
      uVar4 = (uint)(byte)text[1];
      text = text + 1;
    } while (uVar4 != 0);
  }
  return uVar2;
}

#undef str_1000fede

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f180
 */

uint recovered_1000f180(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  if (output == (char *)0x0) {
    return 0;
  }
  pcVar2 = output;
  if (text != (char *)0x0) {
    pcVar2 = (char *)recovered_100057d4((int)output);
    cVar1 = *text;
    while (cVar1 != '\0') {
      text = text + 1;
      if ((capacity != 0) && (pcVar3 = pcVar2 + 1, pcVar3 < capacity)) {
        output[(int)pcVar2] = cVar1;
        output[(int)pcVar3] = '\0';
        pcVar2 = pcVar3;
      }
      cVar1 = *text;
    }
  }
  return (uint)pcVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1f8
 */

uint recovered_1000f1f8(char *output,uint capacity,char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if (capacity == 0) {
    return (uint)output;
  }
  if (output == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100057d4((int)output);
  }
  bVar2 = *(byte *)capacity;
  while (bVar2 != 0) {
    capacity = capacity + 1;
    if (bVar2 - 0x41U < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if ((output != (char *)0x0) && (uVar3 = uVar1 + 1, uVar3 >> 9 == 0)) {
      output[uVar1] = bVar2;
      output[uVar3] = '\0';
      uVar1 = uVar3;
    }
    bVar2 = *(byte *)capacity;
  }
  return uVar1;
}


#undef DAT_1000ff1e
#define DAT_1000ff1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x376U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f284
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000f284(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;

  uVar9 = 0;
  if (((first == (char *)0x0) || (last <= first)) || (output == (char *)0x0 || capacity == 0)) {
    return 0;
  }
LAB_1000f2d0:
  pbVar2 = (byte *)first;
  do {
    bVar1 = *pbVar2;
    switch((uintptr_t)(bVar1)) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
    case 0x2b:
      pbVar2 = pbVar2 + 1;
      first = first + 1;
      if (last <= pbVar2) {
        return uVar9;
      }
      break;
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
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
      goto switchD_1000f2ec_caseD_b;
    case 0x22:
    case 0x27:
      pbVar2 = pbVar2 + 1;
      iVar8 = 0;
      pbVar3 = pbVar2;
      if (pbVar2 < last) goto LAB_1000f3c8;
      goto LAB_1000f61c;
    default:
      if (bVar1 == 0x60) {
        pbVar2 = pbVar2 + 1;
        iVar8 = 0;
        pbVar3 = pbVar2;
        if (last <= pbVar2) goto LAB_1000f724;
        goto LAB_1000f404;
      }
      goto switchD_1000f2ec_caseD_b;
    }
  } while( true );
LAB_1000f404:
  pbVar3 = pbVar2;
  do {
    pbVar5 = pbVar3 + 1;
    bVar1 = *pbVar3;
    if ((bVar1 == 0x5c) && (pbVar5 < last)) {
      pbVar5 = pbVar3 + 2;
    }
    else if (bVar1 == 0x24) {
      if ((pbVar5 < last) && (*pbVar5 == 0x7b)) break;
    }
    else if (bVar1 == 0x60) {
      iVar8 = 1;
      goto LAB_1000f724;
    }
    pbVar3 = pbVar5;
    if (last <= pbVar5) {
      iVar8 = 0;
      goto LAB_1000f724;
    }
  } while( true );
  pbVar5 = pbVar3 + 2;
  if (last <= pbVar5) {
    return 0;
  }
  iVar8 = 1;
  pbVar6 = pbVar5;
LAB_1000f480:
  bVar1 = *pbVar6;
  if (bVar1 < 0x60) {
    if (bVar1 == 0x22 || bVar1 == 0x27) goto LAB_1000f4a4;
  }
  else {
    if (bVar1 == 0x60) {
LAB_1000f4a4:
      pbVar6 = pbVar6 + 1;
      while (pbVar7 = pbVar6, pbVar6 < last) {
        while( true ) {
          pbVar6 = pbVar7 + 1;
          if ((*pbVar7 == 0x5c) && (pbVar6 < last)) break;
          if ((*pbVar7 == bVar1) || (pbVar7 = pbVar6, last <= pbVar6)) goto LAB_1000f478;
        }
        pbVar6 = pbVar7 + 2;
      }
      goto LAB_1000f478;
    }
    if (bVar1 == 0x7b) {
      iVar8 = iVar8 + 1;
      goto LAB_1000f474;
    }
    bVar10 = false;
    if (bVar1 == 0x7d) {
      iVar8 = iVar8 + -1;
      bVar10 = iVar8 == 0;
    }
    if (bVar10) goto code_r0x1000f504;
  }
LAB_1000f474:
  pbVar6 = pbVar6 + 1;
LAB_1000f478:
  if (last <= pbVar6) {
    return 0;
  }
  goto LAB_1000f480;
code_r0x1000f504:
  recovered_1000df24(output,capacity,(char *)pbVar2,(char *)pbVar3);
  uVar9 = recovered_1000f284(output,capacity,(char *)pbVar5,(char *)pbVar6);
  if (uVar9 == 0) {
    return 0;
  }
  pbVar2 = pbVar6 + 1;
  if (last <= pbVar2) goto code_r0x1000f558;
  goto LAB_1000f404;
code_r0x1000f558:
  iVar8 = 0;
  pbVar3 = pbVar2;
LAB_1000f724:
  uVar9 = recovered_1000df24(output,capacity,(char *)pbVar2,(char *)pbVar3);
  if ((uVar9 == 0) && (pbVar2 != pbVar3)) {
    return 0;
  }
  pbVar3 = pbVar3 + iVar8;
  goto LAB_1000f774;
LAB_1000f3c8:
  do {
    pbVar5 = pbVar3 + 1;
    if ((*pbVar3 == 0x5c) && (pbVar5 < last)) {
      pbVar5 = pbVar3 + 2;
    }
    else if (*pbVar3 == bVar1) {
      iVar8 = 1;
      goto LAB_1000f61c;
    }
    pbVar3 = pbVar5;
  } while (pbVar5 < last);
  iVar8 = 0;
LAB_1000f61c:
  uVar9 = recovered_1000df24(output,capacity,(char *)pbVar2,(char *)pbVar3);
  if (uVar9 == 0) {
    return 0;
  }
  pbVar3 = pbVar3 + iVar8;
  goto LAB_1000f774;
switchD_1000f2ec_caseD_b:
  pbVar3 = pbVar2;
  if (pbVar2 < last) {
    do {
      if (*pbVar3 - 0x2b < 2) goto LAB_1000f594;
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 < last);
    pbVar3 = (byte *)last;
  }
LAB_1000f594:
  if (pbVar2 < pbVar3) {
    pbVar5 = pbVar2 + ((int)pbVar3 - (int)first);
    do {
      if ((0x17 < *pbVar2 - 9) || ((1 << (*pbVar2 - 9 & 0xff) & 0x800013U) == 0)) goto LAB_1000f5cc;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar3);
    pbVar2 = pbVar5;
  }
LAB_1000f5cc:
  if (pbVar3 <= pbVar2) {
    return 0;
  }
  pbVar5 = (byte *)0x0;
  while( true ) {
    pbVar6 = pbVar3 + (int)pbVar5;
    if ((0x17 < pbVar6[-1] - 9) || ((1 << (pbVar6[-1] - 9 & 0xff) & 0x800013U) == 0)) break;
    pbVar5 = pbVar5 + -1;
    if (pbVar3 + (int)pbVar5 <= pbVar2) {
      return 0;
    }
  }
  if ((pbVar2 + (4 - (int)pbVar3) != pbVar5) ||
     (iVar8 = recovered_10009764(pbVar2,&DAT_1000ff1e,4), iVar8 != 0)) {
    pbVar5 = pbVar2;
    if (pbVar2 < pbVar6) {
      do {
        uVar9 = (uint)*pbVar5;
        if (((uVar9 & 0xdf) - 0x5b < 0xffffffe5 || (uVar9 & 0xdf) == 0x40) && (uVar9 != 0x2b)) {
          bVar10 = 0xfffffff4 < uVar9 - 0x3a;
          if (!bVar10 || uVar9 == 0x2f) {
            bVar10 = 0xfffffffd < uVar9 - 0x2f;
          }
          if (!bVar10) {
            return 0;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 < pbVar6);
      uVar9 = recovered_100057d4((int)output);
      do {
        uVar4 = uVar9 + 1;
        if (uVar4 < capacity) {
          output[uVar9] = *pbVar2;
          output[uVar4] = '\0';
          uVar9 = uVar4;
        }
        pbVar2 = pbVar2 + 1;
      } while (pbVar2 < pbVar6);
    }
    else {
      recovered_100057d4((int)output);
    }
  }
LAB_1000f774:
  uVar9 = 1;
  first = (char *)pbVar3;
  if (last <= pbVar3) {
    return 1;
  }
  goto LAB_1000f2d0;
}

#undef DAT_1000ff1e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7e4
 */

char * recovered_1000f7e4(char *first)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0;
LAB_1000f810:
  do {
    bVar1 = *first;
    if (bVar1 < 0x27) {
      if (bVar1 == 0x22) {
LAB_1000f844:
        first = first + 1;
LAB_1000f85c:
        do {
          bVar2 = *first;
          if (bVar2 == 0x5c) {
            if (first[1] != 0) {
              first = first + 2;
              goto LAB_1000f85c;
            }
          }
          else if (bVar2 == 0) break;
          first = first + 1;
        } while (bVar2 != bVar1);
      }
      else {
        if (bVar1 == 0) {
          return (char *)(byte *)first;
        }
LAB_1000f888:
        if ((bVar1 == 0x29) && (0 < iVar5)) {
          iVar5 = iVar5 + -1;
          first = first + 1;
        }
        else if (bVar1 == 0x5b) {
          iVar4 = iVar4 + 1;
          first = first + 1;
        }
        else if ((bVar1 == 0x5d) && (0 < iVar4)) {
          iVar4 = iVar4 + -1;
          first = first + 1;
        }
        else if (bVar1 == 0x7b) {
          iVar3 = iVar3 + 1;
          first = first + 1;
        }
        else if ((bVar1 == 0x7d) && (0 < iVar3)) {
          iVar3 = iVar3 + -1;
          first = first + 1;
        }
        else {
          if (((bVar1 == 10 || bVar1 == 0x3b) || (bVar1 == 0xd)) &&
             ((iVar5 == 0 && (iVar5 = 0, iVar4 == 0 && iVar3 == 0)))) {
            return (char *)(byte *)first;
          }
          first = first + 1;
        }
      }
      goto LAB_1000f810;
    }
    if (bVar1 == 0x27 || bVar1 == 0x60) goto LAB_1000f844;
    if (bVar1 != 0x28) goto LAB_1000f888;
    iVar5 = iVar5 + 1;
    first = first + 1;
  } while( true );
}


#define local_424 (*(byte (*)[1060])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f930
 */

uint recovered_1000f930(char *output,uint capacity,char *first,char *last)

{
  unsigned char pf_stack_frame[1120] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte *pbVar5;

  pbVar5 = local_424;
  local_424[0] = 0;
  uVar2 = recovered_1000f284((char *)local_424,0x400,first,last);
  uVar3 = 0;
  if (uVar2 != 0) {
    if (output != (char *)0x0) {
      uVar3 = recovered_100057d4((int)output);
    }
LAB_1000f9b4:
    for (; bVar1 = *pbVar5, 0x3b < bVar1; pbVar5 = pbVar5 + 1) {
      if (bVar1 != 0x3c) {
        if (bVar1 != 0x3e) goto LAB_1000fa7c;
        if (output == (char *)0x0) goto LAB_1000f9ac;
        uVar3 = recovered_100057d4((int)output);
        if (capacity != 0) {
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            output[uVar2] = '\0';
            output[uVar3] = '&';
            uVar3 = uVar2;
          }
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            cVar4 = 'g';
            goto LAB_1000fb48;
          }
          goto LAB_1000fb54;
        }
LAB_1000fb8c:
        uVar3 = recovered_100057d4((int)output);
        goto LAB_1000fb94;
      }
      if (output != (char *)0x0) {
        uVar3 = recovered_100057d4((int)output);
        if (capacity != 0) {
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            output[uVar2] = '\0';
            output[uVar3] = '&';
            uVar3 = uVar2;
          }
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            cVar4 = 'l';
LAB_1000fb48:
            output[uVar2] = '\0';
            output[uVar3] = cVar4;
          }
          else {
LAB_1000fb54:
            uVar2 = uVar3;
          }
          uVar3 = uVar2 + 1;
          if (uVar3 < capacity) {
            output[uVar3] = '\0';
            output[uVar2] = 't';
            uVar2 = uVar3;
          }
          if (uVar2 + 1 < capacity) {
            output[uVar2 + 1] = '\0';
            output[uVar2] = ';';
          }
        }
        goto LAB_1000fb8c;
      }
LAB_1000f9ac:
      uVar3 = 0;
    }
    if (bVar1 == 0x26) {
      if (output == (char *)0x0) goto LAB_1000f9ac;
      uVar3 = recovered_100057d4((int)output);
      if (capacity != 0) {
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = '&';
          uVar3 = uVar2;
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = 'a';
          uVar3 = uVar2;
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = 'm';
          uVar3 = uVar2;
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = 'p';
          uVar3 = uVar2;
        }
        if (uVar3 + 1 < capacity) {
          output[uVar3 + 1] = '\0';
          output[uVar3] = ';';
        }
      }
      goto LAB_1000fb8c;
    }
    if (bVar1 != 0) {
LAB_1000fa7c:
      if ((output == (char *)0x0 || capacity == 0) || (uVar2 = uVar3 + 1, capacity <= uVar2)) {
LAB_1000fb94:
        pbVar5 = pbVar5 + 1;
      }
      else {
        output[uVar3] = bVar1;
        pbVar5 = pbVar5 + 1;
        output[uVar2] = '\0';
        uVar3 = uVar2;
      }
      goto LAB_1000f9b4;
    }
  }
  return uVar3;
}

#undef local_424
