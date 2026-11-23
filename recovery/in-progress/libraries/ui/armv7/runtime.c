/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d50
 */

uint recovered_10003d50(uint param_1,uint param_2)

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
 * Address: 0x10003da0
 */

uint recovered_10003da0(uint param_1,uint param_2)

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
 * Address: 0x10003dd8
 */

uint recovered_10003dd8(uint param_1,uint param_2)

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
 * Address: 0x10003e48
 */

uint recovered_10003e48(uint param_1,uint param_2)

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
 * Address: 0x10003eb4
 */

ulonglong recovered_10003eb4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007658((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec4
 */

longlong recovered_10003ec4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10007598((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ed4
 */

float recovered_10003ed4(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100076e0(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ef0
 */

float recovered_10003ef0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007728(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1001407c
#define DAT_1001407c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae4U)))
#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f10
 */

void recovered_10003f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_1001407c = 0;
  recovered_10003f9c();
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return;
}

#undef DAT_1001407c
#undef DAT_10014084

#undef DAT_1001407c
#define DAT_1001407c (*(char *)(((uintptr_t)pf_module_state + 0xae4U)))
#undef DAT_10014080
#define DAT_10014080 (*(int *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014088
#define DAT_10014088 (*(int *)(((uintptr_t)pf_module_state + 0xaf0U)))
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
 * Address: 0x10003f9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003f9c(void)

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
  if (DAT_1001407c != '\0') {
    return;
  }
  DAT_10014080 = 0;
  DAT_10014088 = 0;
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
        if (iVar11 == 0) goto LAB_1000419c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_100090c8((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_10014080 != 0) goto LAB_100041cc;
    }
  }
LAB_1000419c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_100090c8((int *)0x300000,piVar4,&local_24);
LAB_100041cc:
  if (DAT_10014088 == 0) {
    DAT_10014088 = DAT_10014080;
  }
  DAT_1001407c = 1;
  return;
}

#undef DAT_1001407c
#undef DAT_10014080
#undef DAT_10014088
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000421c
 */

bool recovered_1000421c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10004298(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return bVar1;
}

#undef DAT_10014084

#undef DAT_10014080
#define DAT_10014080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014088
#define DAT_10014088 (*(int * *)(((uintptr_t)pf_module_state + 0xaf0U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004298
 */

bool recovered_10004298(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_10003f9c();
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
        piVar1 = DAT_10014080;
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
      piVar3 = (int *)&DAT_10014080;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_100090c8((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_10014088 == (int *)0x0) {
        DAT_10014088 = DAT_10014080;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_10014080
#undef DAT_10014088
#undef DAT_68000000
#undef local_24

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e0
 */

bool recovered_100044e0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  bVar1 = recovered_10004298(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return bVar1;
}

#undef DAT_10014084
#undef local_14
#undef local_10

#undef DAT_10014080
#define DAT_10014080 (*(uint * *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004578
 */

int recovered_10004578(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f9c();
  iVar1 = 0;
  puVar3 = DAT_10014080;
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
  DAT_10014084 = 0;
  return iVar1;
}

#undef DAT_10014080
#undef DAT_10014084

#undef DAT_10014080
#define DAT_10014080 (*(int *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004628
 */

void recovered_10004628(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f9c();
  for (iVar1 = DAT_10014080; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return;
}

#undef DAT_10014080
#undef DAT_10014084

#undef DAT_10014080
#define DAT_10014080 (*(int * *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046e4
 */

int recovered_100046e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f9c();
  iVar1 = 0;
  for (piVar3 = DAT_10014080; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return iVar1;
}

#undef DAT_10014080
#undef DAT_10014084

#undef DAT_10014080
#define DAT_10014080 (*(int *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000478c
 */

void recovered_1000478c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10003f9c();
  for (iVar1 = DAT_10014080; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return;
}

#undef DAT_10014080
#undef DAT_10014084

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000483c
 */

void recovered_1000483c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_100048c0(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return;
}

#undef DAT_10014084

#undef DAT_10014080
#define DAT_10014080 (*(uint * *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014088
#define DAT_10014088 (*(uint * *)(((uintptr_t)pf_module_state + 0xaf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c0
 */

uint * recovered_100048c0(int param_1,uint *param_2,uint *param_3)

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
    recovered_10003f9c();
    puVar4 = DAT_10014080;
    puVar5 = DAT_10014088;
    if (DAT_10014088 == (uint *)0x0) {
      puVar5 = DAT_10014080;
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
              if (uVar7 < uVar8) goto joined_r0x100049a0;
            }
          }
          else {
joined_r0x100049a0:
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
LAB_10004a98:
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
                    DAT_10014088 = DAT_10014080;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_10014088 = puVar4;
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
                      puVar2 = recovered_100092c8(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10004a98;
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

#undef DAT_10014080
#undef DAT_10014088

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b18
 */

void recovered_10004b18(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_100048c0(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return;
}

#undef DAT_10014084

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ba0
 */

uint * recovered_10004ba0(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_100048c0(param_1,param_2,param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return puVar2;
}

#undef DAT_10014084

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c30
 */

void recovered_10004c30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10004cac(param_1);
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return;
}

#undef DAT_10014084

#undef DAT_10014088
#define DAT_10014088 (*(uint * *)(((uintptr_t)pf_module_state + 0xaf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cac
 */

void recovered_10004cac(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_10003f9c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_10014088 == puVar1) {
        DAT_10014088 = puVar4;
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
          if (DAT_10014088 == puVar4) {
            DAT_10014088 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_10014088 = puVar4;
  return;
}

#undef DAT_10014088

#undef DAT_10014084
#define DAT_10014084 (*(int *)(((uintptr_t)pf_module_state + 0xaecU)))
#undef DAT_10014088
#define DAT_10014088 (*(uint * *)(((uintptr_t)pf_module_state + 0xaf0U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e18
 */

uint * recovered_10004e18(uint *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_10014084 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0xaecU));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0xaecU),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (uint *)0x0) {
    puVar3 = recovered_100048c0(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_1000504c;
  }
  if (param_2 == 0) {
    recovered_10004cac((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_1000504c;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_1000504c;
  recovered_10003f9c();
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
          DAT_10014088 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_10014088 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = param_1[-3];
          *(undefined1 *)(DAT_10014088 + 3) = 1;
          DAT_10014088[2] = (uint)puVar6;
          DAT_10014088[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_10014088;
          }
          param_1[-3] = (uint)DAT_10014088;
          param_1[-4] = (uint)puVar12;
          puVar3 = param_1;
        }
      }
    }
    goto LAB_1000504c;
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
      puVar3 = DAT_10014088;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_10014088 = puVar6;
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
        iVar4 = recovered_1000934c(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_10014088 = (uint *)param_1[-3];
        }
        *(undefined1 *)(param_1 + -1) = 0;
        puVar3 = param_1;
      }
      goto LAB_1000504c;
    }
  }
  puVar7 = recovered_100048c0((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_1000504c;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = param_1;
  if (puVar12 < &SupervisorCall) {
LAB_1000511c:
    if (puVar12 != (uint *)0x0) goto LAB_10005124;
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
            if (uVar14 == uVar11) goto LAB_10005304;
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
LAB_10005304:
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
          if (uVar14 == uVar11) goto LAB_1000511c;
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
      goto LAB_1000511c;
    }
LAB_10005124:
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
      if (puVar12 == puVar13) goto LAB_10005180;
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
LAB_10005180:
  recovered_10004cac((int)param_1);
  puVar3 = puVar7;
LAB_1000504c:
  DataMemoryBarrier(0xb);
  DAT_10014084 = 0;
  return puVar3;
}

#undef DAT_10014084
#undef DAT_10014088
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053b8
 */

longlong recovered_100053b8(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000540c
 */

ulonglong recovered_1000540c(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10005460
 */

undefined8 recovered_10005460(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100054ac
 */

undefined8 recovered_100054ac(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10005590
 */

undefined8 recovered_10005590(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10005610
 */

undefined8 recovered_10005610(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10005728
 */

undefined8 recovered_10005728(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100057e4
 */

void recovered_100057e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057ec
 */

int recovered_100057ec(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100057f8(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_1000584c(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_1000589c(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058f0
 */

void * recovered_100058f0(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1000592c;
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
          if (uVar6 == uVar9) goto LAB_10005ac0;
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
LAB_10005ac0:
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
        if (uVar9 == uVar6) goto LAB_10005924;
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
LAB_10005924:
  if (uVar8 == 0) {
    return destination;
  }
LAB_1000592c:
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
 * Address: 0x10005b74
 */

void * recovered_10005b74(void *destination,void *source,ulong count)

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
      goto LAB_10005bbc;
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
          if (puVar8 == (undefined8 *)count) goto LAB_10005e48;
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
LAB_10005e48:
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
        if ((undefined8 *)count == puVar8) goto LAB_10005ec4;
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
LAB_10005ec4:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10005bbc:
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
    goto LAB_10005c38;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10005ed4:
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
          goto LAB_10005ed4;
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
        if (uVar5 == uVar7) goto LAB_10005fb0;
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
LAB_10005fb0:
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
      if (uVar7 == uVar5) goto LAB_1000606c;
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
LAB_1000606c:
  if (uVar9 == 0) {
    return destination;
  }
LAB_10005c38:
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
 * Address: 0x10006080
 */

void * recovered_10006080(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x10006208;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x10006120:
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
        if (uVar6 == uVar7) goto joined_r0x100061ac;
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
      goto joined_r0x10006120;
    }
  }
joined_r0x100061ac:
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
      if (uVar7 == uVar6) goto joined_r0x10006208;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x10006208:
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
 * Address: 0x10006280
 */

void recovered_10006280(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10006400;
  if (((uint)param_1 & 3) == 0) {
joined_r0x1000631c:
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
        if (uVar7 == uVar8) goto joined_r0x100063a0;
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
      goto joined_r0x1000631c;
    }
  }
joined_r0x100063a0:
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
      if (uVar7 == uVar8) goto joined_r0x10006400;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10006400:
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
 * Address: 0x1000647c
 */

void recovered_1000647c(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100065fc;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10006518:
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
        if (uVar7 == uVar8) goto joined_r0x1000659c;
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
      goto joined_r0x10006518;
    }
  }
joined_r0x1000659c:
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
      if (uVar7 == uVar8) goto joined_r0x100065fc;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100065fc:
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
 * Address: 0x10006678
 */

char * recovered_10006678(char *param_1,char param_2,int param_3)

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
 * Address: 0x100066ac
 */

int recovered_100066ac(void *left,void *right,ulong count)

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
LAB_100067a4:
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
      if (uVar5 != uVar6) goto LAB_1000689c;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_1000689c;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_1000689c;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_1000689c;
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
LAB_100067d4:
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
      if (uVar5 != uVar6) goto LAB_100067d4;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_100068a4(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_100067a4;
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
LAB_1000689c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a4
 */

int recovered_100068a4(byte *param_1,byte *param_2)

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
 * Address: 0x100068f4
 */

bool recovered_100068f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006908
 */

bool recovered_10006908(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000691c
 */

bool recovered_1000691c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006934
 */

bool recovered_10006934(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006960
 */

bool recovered_10006960(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006980
 */

bool recovered_10006980(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006994
 */

int recovered_10006994(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069a4
 */

int recovered_100069a4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b4
 */

ulong recovered_100069b4(char *text)

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
 * Address: 0x100069dc
 */

int recovered_100069dc(char *left,char *right)

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
LAB_10006a14:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_10006a14;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a20
 */

int recovered_10006a20(byte *param_1,byte *param_2)

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
LAB_10006a58:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10006a58;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a64
 */

void recovered_10006a64(int param_1,int param_2)

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
 * Address: 0x10006a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10006a80(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10006b48;
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
          if (uVar8 == uVar11) goto LAB_10006cdc;
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
LAB_10006cdc:
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
        if (uVar11 == uVar8) goto LAB_10006b40;
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
LAB_10006b40:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10006b48:
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
 * Address: 0x10006d94
 */

char * recovered_10006d94(char *param_1,char param_2)

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
 * Address: 0x10006dc8
 */

int recovered_10006dc8(char *param_1,char *param_2)

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
 * Address: 0x10006e2c
 */

int recovered_10006e2c(char *param_1,char *param_2)

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
 * Address: 0x10006e94
 */

char * recovered_10006e94(char *param_1,char *param_2)

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
 * Address: 0x10006ef4
 */

char * recovered_10006ef4(char *param_1,char *param_2)

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


#undef DAT_100135bc
#define DAT_100135bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f58
 */

undefined * recovered_10006f58(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100135bc;
}

#undef DAT_100135bc

#undef PTR_DAT_1001400c
#define PTR_DAT_1001400c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f68
 */

undefined ** recovered_10006f68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001400c;
}

#undef PTR_DAT_1001400c

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
 * Address: 0x10006f78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006f78(undefined4 *param_1)

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
 * Address: 0x10007028
 */

double recovered_10007028(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x1000706c
 */

double recovered_1000706c(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10007124
 */

double recovered_10007124(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x1000715c
 */

double recovered_1000715c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100071dc
 */

double recovered_100071dc(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000720c
 */

double recovered_1000720c(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10007250
 */

double recovered_10007250(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100073c8
#define DAT_100073c8 (*(double *)(((uintptr_t)&pf_ui_literal_100073c8)))
#undef DAT_100073d0
#define DAT_100073d0 (*(double *)(((uintptr_t)&pf_ui_literal_100073d0)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007298
 */

double recovered_10007298(undefined4 param_1,undefined4 param_2)

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
    return DAT_100073c8;
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
  return dVar4 + dVar4 + dVar5 * DAT_100073d0;
}

#undef DAT_100073c8
#undef DAT_100073d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d8
 */

longlong recovered_100073d8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10007598(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10007498
#define DAT_10007498 (*(double *)(((uintptr_t)&pf_ui_literal_10007498)))
#undef DAT_100074a0
#define DAT_100074a0 (*(double *)(((uintptr_t)&pf_ui_literal_100074a0)))
#undef DAT_100074a8
#define DAT_100074a8 (*(double *)(((uintptr_t)&pf_ui_literal_100074a8)))
#undef DAT_100074b0
#define DAT_100074b0 (*(double *)(((uintptr_t)&pf_ui_literal_100074b0)))
#undef DAT_100074b8
#define DAT_100074b8 (*(double *)(((uintptr_t)&pf_ui_literal_100074b8)))
#undef DAT_100074c0
#define DAT_100074c0 (*(double *)(((uintptr_t)&pf_ui_literal_100074c0)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007408
 */

double recovered_10007408(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10007498 < dVar1; dVar1 = dVar1 + DAT_100074a0
      ) {
  }
  for (; dVar1 < DAT_100074a8; dVar1 = dVar1 + DAT_100074b0) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100074b8 +
                 (dVar2 * dVar2 * dVar2) / DAT_100074c0);
}

#undef DAT_10007498
#undef DAT_100074a0
#undef DAT_100074a8
#undef DAT_100074b0
#undef DAT_100074b8
#undef DAT_100074c0

#undef DAT_10007550
#define DAT_10007550 (*(double *)(((uintptr_t)&pf_ui_literal_10007550)))
#undef DAT_10007558
#define DAT_10007558 (*(double *)(((uintptr_t)&pf_ui_literal_10007558)))
#undef DAT_10007560
#define DAT_10007560 (*(double *)(((uintptr_t)&pf_ui_literal_10007560)))
#undef DAT_10007568
#define DAT_10007568 (*(double *)(((uintptr_t)&pf_ui_literal_10007568)))
#undef DAT_10007570
#define DAT_10007570 (*(double *)(((uintptr_t)&pf_ui_literal_10007570)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074c8
 */

double recovered_100074c8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); DAT_10007550 < dVar1; dVar1 = dVar1 + DAT_10007558
      ) {
  }
  for (; dVar1 < DAT_10007560; dVar1 = dVar1 + DAT_10007568) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10007570;
}

#undef DAT_10007550
#undef DAT_10007558
#undef DAT_10007560
#undef DAT_10007568
#undef DAT_10007570

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007578
 */

double recovered_10007578(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10007598(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10007658(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100076e0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10007728(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_100077f8
#define DAT_100077f8 (*(float *)(((uintptr_t)&pf_ui_literal_100077f8)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b8
 */

float recovered_100077b8(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return DAT_100077f8;
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_100077f8

#undef DAT_100078b4
#define DAT_100078b4 (*(float *)(((uintptr_t)&pf_ui_literal_100078b4)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077fc
 */

float recovered_100077fc(float param_1,float *param_2)

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
    return DAT_100078b4;
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

#undef DAT_100078b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078b8
 */

float recovered_100078b8(float param_1,uint param_2)

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


#undef DAT_10007988
#define DAT_10007988 (*(float *)(((uintptr_t)&pf_ui_literal_10007988)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007904
 */

float recovered_10007904(float param_1,float param_2)

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
    return DAT_10007988;
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

#undef DAT_10007988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000798c
 */

float recovered_1000798c(float param_1)

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
 * Address: 0x100079c4
 */

float recovered_100079c4(float param_1)

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
 * Address: 0x10007a10
 */

double recovered_10007a10(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10007a64
 */

float recovered_10007a64(float param_1)

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


#undef DAT_10007b14
#define DAT_10007b14 (*(float *)(((uintptr_t)&pf_ui_literal_10007b14)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ac0
 */

float recovered_10007ac0(float param_1)

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
  return DAT_10007b14;
}

#undef DAT_10007b14

#undef DAT_10007c50
#define DAT_10007c50 (*(double *)(((uintptr_t)&pf_ui_literal_10007c50)))
#undef DAT_10007c58
#define DAT_10007c58 (*(float *)(((uintptr_t)&pf_ui_literal_10007c58)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b18
 */

float recovered_10007b18(float param_1)

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
    return DAT_10007c58;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10007c50);
}

#undef DAT_10007c50
#undef DAT_10007c58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c5c
 */

longlong recovered_10007c5c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10007598(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10007d28
#define DAT_10007d28 (*(double *)(((uintptr_t)&pf_ui_literal_10007d28)))
#undef DAT_10007d30
#define DAT_10007d30 (*(double *)(((uintptr_t)&pf_ui_literal_10007d30)))
#undef DAT_10007d38
#define DAT_10007d38 (*(double *)(((uintptr_t)&pf_ui_literal_10007d38)))
#undef DAT_10007d40
#define DAT_10007d40 (*(double *)(((uintptr_t)&pf_ui_literal_10007d40)))
#undef DAT_10007d48
#define DAT_10007d48 (*(double *)(((uintptr_t)&pf_ui_literal_10007d48)))
#undef DAT_10007d50
#define DAT_10007d50 (*(double *)(((uintptr_t)&pf_ui_literal_10007d50)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c90
 */

float recovered_10007c90(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; DAT_10007d28 < dVar1; dVar1 = dVar1 + DAT_10007d30) {
  }
  for (; dVar1 < DAT_10007d38; dVar1 = dVar1 + DAT_10007d40) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_10007d48 +
                         (dVar2 * dVar2 * dVar2) / DAT_10007d50));
}

#undef DAT_10007d28
#undef DAT_10007d30
#undef DAT_10007d38
#undef DAT_10007d40
#undef DAT_10007d48
#undef DAT_10007d50

#undef DAT_10007de8
#define DAT_10007de8 (*(double *)(((uintptr_t)&pf_ui_literal_10007de8)))
#undef DAT_10007df0
#define DAT_10007df0 (*(double *)(((uintptr_t)&pf_ui_literal_10007df0)))
#undef DAT_10007df8
#define DAT_10007df8 (*(double *)(((uintptr_t)&pf_ui_literal_10007df8)))
#undef DAT_10007e00
#define DAT_10007e00 (*(double *)(((uintptr_t)&pf_ui_literal_10007e00)))
#undef DAT_10007e08
#define DAT_10007e08 (*(double *)(((uintptr_t)&pf_ui_literal_10007e08)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d58
 */

float recovered_10007d58(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; DAT_10007de8 < dVar1; dVar1 = dVar1 + DAT_10007df0) {
  }
  for (; dVar1 < DAT_10007df8; dVar1 = dVar1 + DAT_10007e00) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_10007e08);
}

#undef DAT_10007de8
#undef DAT_10007df0
#undef DAT_10007df8
#undef DAT_10007e00
#undef DAT_10007e08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e10
 */

float recovered_10007e10(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e2c
 */

int recovered_10007e2c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10007f80
 */

int recovered_10007f80(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x10007ffc;
  }
  bVar2 = false;
joined_r0x10007ffc:
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
 * Address: 0x100080e0
 */

double recovered_100080e0(byte *param_1,undefined4 *param_2)

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
      goto LAB_100081cc;
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
LAB_100081cc:
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
 * Address: 0x100082b4
 */

float recovered_100082b4(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100080e0(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_100135be
#define DAT_100135be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_100135c8
#define str_100135c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_100135d9
#define str_100135d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d0
 */

int recovered_100082d0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10008350:
  while( true ) {
    pcVar6 = str_100135d9;
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
LAB_10008370:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10008390;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_100083fc;
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
LAB_100083fc:
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
      goto LAB_10008428;
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
LAB_10008428:
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
switchD_100085fc_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10008eb0;
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
      goto LAB_100088cc;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_100088cc:
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
      local_60[-iVar7] = str_100135d9[uVar11 + uVar12 * -10];
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
      goto LAB_10008eb0;
    }
    break;
  default:
    goto switchD_100085fc_caseD_4a;
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
      pcVar6 = str_100135c8;
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
    goto LAB_10008eb0;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_10008370;
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
                      goto LAB_10008da4;
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
LAB_10008da4:
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
        local_60[-iVar7] = str_100135d9[uVar10 + uVar12 * -10];
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
LAB_10008d6c:
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
                    goto LAB_10008d6c;
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
    goto LAB_10008350;
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
      local_60[iVar7] = str_100135d9[uVar10 & 0xf];
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
    goto LAB_10008350;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_10008350;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_100135be;
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
      goto LAB_10008dc8;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10008dc8;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10008dc8:
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
      local_60[-iVar7] = str_100135d9[uVar11 + uVar12 * -10];
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
LAB_10008eb0:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_10008350;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_10008350;
code_r0x10008390:
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
  goto LAB_10008350;
}

#undef DAT_100135be
#undef str_100135c8
#undef str_100135d9
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10009098(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_100082d0(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_10014080
#define DAT_10014080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xae8U)))
#undef DAT_10014088
#define DAT_10014088 (*(int * *)(((uintptr_t)pf_module_state + 0xaf0U)))
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
 * Address: 0x100090c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100090c8(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_10014080 != 0;
          puVar4 = &DAT_10014080;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_10014088;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_10014088 = piVar3;
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
      puVar4 = &DAT_10014080;
      if (DAT_10014080 != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_10014088;
      goto LAB_100092ac;
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
      bVar7 = DAT_10014080 != 0;
      puVar4 = &DAT_10014080;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_10014088;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_100092ac:
      if (piVar5 == (int *)0x0) {
        DAT_10014088 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10014080
#undef DAT_10014088
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092c8
 */

uint * recovered_100092c8(uint *param_1,uint *param_2)

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
 * Address: 0x1000934c
 */

undefined4 recovered_1000934c(uint *param_1,int param_2)

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


#undef DAT_1001408c
#define DAT_1001408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaf4U)))
#undef DAT_10014090
#define DAT_10014090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
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
 * Address: 0x100093ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100093ac(char *param_1,int param_2)

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
        if (DAT_1001408c != 0) {
          DAT_1001408c = DAT_1001408c - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1001408c == 0) {
            uVar2 = 0;
          }
          else {
            recovered_100058f0(local_224,&DAT_10014090,DAT_1001408c);
            uVar2 = DAT_1001408c;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_1001408c = 0;
        }
        else {
          if (DAT_1001408c - 0x1ff < 0xfffffe00) {
            recovered_100058f0(local_224,&DAT_10014090,DAT_1001408c);
            local_224[DAT_1001408c] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_1001408c = 0;
          }
          (&DAT_10014090)[DAT_1001408c] = cVar1;
          DAT_1001408c = DAT_1001408c + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1001408c
#undef DAT_10014090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_1001408c
#define DAT_1001408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaf4U)))
#undef DAT_10014090
#define DAT_10014090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
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
 * Address: 0x10009590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009590(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_1001408c != 0) {
    recovered_100058f0(local_210,&DAT_10014090,DAT_1001408c);
    uVar1 = DAT_1001408c;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_1001408c = 0;
  return;
}

#undef DAT_1001408c
#undef DAT_10014090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_1001408c
#define DAT_1001408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaf4U)))
#undef DAT_10014090
#define DAT_10014090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
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
 * Address: 0x10009650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009650(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_1001408c == 0) {
    return;
  }
  recovered_100058f0(auStack_214,&DAT_10014090,DAT_1001408c);
  auStack_214[DAT_1001408c] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_1001408c = 0;
  return;
}

#undef DAT_1001408c
#undef DAT_10014090
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_100135c7
#define DAT_100135c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_100135ea
#define DAT_100135ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000970c
 */

void recovered_1000970c(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_100135ea;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_100135c7;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10009098(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_100093ac(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_100135c7
#undef DAT_100135ea
#undef acStack_14c

#undef DAT_10013608
#define DAT_10013608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_100135ed
#define str_100135ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009764
 */

void recovered_10009764(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100069b4(str_100135ed);
  recovered_100093ac(str_100135ed,uVar1);
  uVar1 = recovered_100069b4(&DAT_10013608);
  recovered_100093ac(&DAT_10013608,uVar1);
  return;
}

#undef DAT_10013608
#undef str_100135ed

#undef DAT_10013608
#define DAT_10013608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1001360b
#define str_1001360b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097b0
 */

void recovered_100097b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100069b4(str_1001360b);
  recovered_100093ac(str_1001360b,uVar1);
  uVar1 = recovered_100069b4(&DAT_10013608);
  recovered_100093ac(&DAT_10013608,uVar1);
  return;
}

#undef DAT_10013608
#undef str_1001360b

#undef DAT_1001408c
#define DAT_1001408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaf4U)))
#undef DAT_10014090
#define DAT_10014090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
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
 * Address: 0x100097fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100097fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1001408c != 0) {
    recovered_100058f0(auStack_224,&DAT_10014090,DAT_1001408c);
    auStack_224[DAT_1001408c] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_1001408c = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_1001408c
#undef DAT_10014090
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
 * Address: 0x10009950
 */

undefined4 recovered_10009950(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009958
 */

void recovered_10009958(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000995c
 */

undefined4 recovered_1000995c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_100135ea
#define DAT_100135ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
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
#undef str_1001368c
#define str_1001368c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10013699
#define str_10013699 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_100136a7
#define str_100136a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009964
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10009964(char *param_1,char *param_2)

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
    goto LAB_10009bd8;
  }
  iVar2 = recovered_100069dc(param_1,str_1001368c);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10009b64:
    puVar4 = recovered_100057f8(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10006080(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      recovered_10009098((char *)(puVar4 + 1),0xf1,&DAT_100135ea,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_100069dc(param_1,str_10013699);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10009b64;
    }
    iVar3 = recovered_100069dc(param_1,str_100136a7);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10009b64;
    }
    puVar4 = recovered_100057f8(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10006080(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10006d94(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10006d94(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10006d94(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10006d94(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10006d94(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10006d94(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10006d94(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      recovered_10009098((char *)(puVar4 + 1),0xf1,&DAT_100135ea,param_1);
      recovered_10006080(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10006d94(unaff_r8,'w');
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
              destination = recovered_1000589c((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_10009c00;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_100058f0(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_10009c00:
        *DAT_10018004 = uVar7;
        recovered_1000584c(puVar4);
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
LAB_10009bd8:
  *DAT_10018004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_100135ea
#undef DAT_10018004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1001368c
#undef str_10013699
#undef str_100136a7
#undef local_24
#undef local_20

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
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
 * Address: 0x10009ce8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009ce8(char *param_1,char *param_2,uint *param_3)

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
        *DAT_10018004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_1000584c((void *)param_3[0x3f]);
    }
    recovered_1000584c(param_3);
  }
  recovered_10009964(param_1,param_2);
  return;
}

#undef DAT_10018004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
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
 * Address: 0x10009de8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009de8(uint *param_1)

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
      *DAT_10018004 = 5;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_1000584c((void *)param_1[0x3f]);
  }
  recovered_1000584c(param_1);
  return uVar3;
}

#undef DAT_10018004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ee0
 */

uint recovered_10009ee0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_100058f0(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10003d50(count,param_2);
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
            uVar1 = recovered_1000a00c(unaff_r4);
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


#undef DAT_100135c7
#define DAT_100135c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1001408c
#define DAT_1001408c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaf4U)))
#undef DAT_10014090
#define DAT_10014090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf8U)))
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
 * Address: 0x1000a00c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000a00c(int *param_1)

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
LAB_1000a068:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1001408c != 0) {
      recovered_100058f0(auStack_220,&DAT_10014090,DAT_1001408c);
      auStack_220[DAT_1001408c] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_1001408c = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_100135c7,0);
      if (iVar1 != 0) {
        uVar2 = recovered_100069b4(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_1000a068;
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

#undef DAT_100135c7
#undef DAT_1001408c
#undef DAT_10014090
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

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a20c
 */

int recovered_1000a20c(char *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_100093ac(param_1,count);
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
        pvVar1 = recovered_1000589c((void *)param_4[0x3f],size);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_10018004 = 0xc;
          return 0;
        }
        uVar2 = param_4[0x42];
        param_4[0x3f] = (uint)pvVar1;
        param_4[0x3e] = (uint)pvVar1;
        param_4[0x41] = size;
      }
      uVar3 = param_4[0x40];
      if (uVar3 < uVar2) {
        recovered_10006080((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_100058f0((void *)(param_4[0x3f] + uVar2),param_1,count);
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

#undef DAT_10018004

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a384
 */

undefined4 recovered_1000a384(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *DAT_10018004 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000a398;
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
LAB_1000a398:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10018004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10018004

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a434
 */

undefined4 recovered_1000a434(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *DAT_10018004 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef DAT_10018004

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
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
 * Address: 0x1000a45c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a45c(uint *param_1)

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
        *DAT_10018004 = 5;
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10018004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a534
 */

undefined1 recovered_1000a534(int param_1)

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
 * Address: 0x1000a544
 */

undefined1 recovered_1000a544(int param_1)

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
 * Address: 0x1000a554
 */

void recovered_1000a554(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a570
 */

void recovered_1000a570(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
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
 * Address: 0x1000a594
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a594(int param_1)

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
  *DAT_10018004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10018004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c

#undef DAT_10018004
#define DAT_10018004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4a6cU)))
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
 * Address: 0x1000a624
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a624(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10018004 = 0x16;
    return 0xffffffff;
  }
  recovered_10006080(&local_28,0,0xc);
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
  *DAT_10018004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10018004
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
 * Address: 0x1000a798
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a798(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10006080(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_100057f8(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_100058f0(destination,local_24,local_20);
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
 * Address: 0x1000a898
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000a898(int param_1,int param_2,int param_3)

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
 * Address: 0x1000a920
 */

undefined4 recovered_1000a920(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a928
 */

void recovered_1000a928(void)

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

undefined4 recovered_1000a934(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a93c
 */

undefined4 recovered_1000a93c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a944
 */

int recovered_1000a944(char *left,char *right,ulong count)

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


#undef DAT_1001361b
#define DAT_1001361b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_1001361e
#define str_1001361e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1001362b
#define str_1001362b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_10013635
#define str_10013635 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_10013649
#define str_10013649 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_10013657
#define str_10013657 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_10013669
#define str_10013669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_10013675
#define str_10013675 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_10013686
#define str_10013686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a988
 */

char * recovered_1000a988(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1001361b;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_1000a9a8_caseD_0;
  default:
    pcVar1 = str_10013686;
switchD_1000a9a8_caseD_0:
    return pcVar1;
  case 2:
    return str_1001361e;
  case 5:
    return str_1001362b;
  case 9:
    return str_10013635;
  case 0xc:
    return str_10013649;
  case 0xd:
    return str_10013657;
  case 0x11:
    return str_10013669;
  case 0x16:
    return str_10013675;
  }
}

#undef DAT_1001361b
#undef str_1001361e
#undef str_1001362b
#undef str_10013635
#undef str_10013649
#undef str_10013657
#undef str_10013669
#undef str_10013675
#undef str_10013686

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa88
 */

undefined4 recovered_1000aa88(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa90
 */

undefined4 recovered_1000aa90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10014290
#define DAT_10014290 (*(int *)(((uintptr_t)pf_module_state + 0xcf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa98
 */

void recovered_1000aa98(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10014290 = DAT_10014290 + 1;
  return;
}

#undef DAT_10014290

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1000aac0(void *context){__asm__ volatile("ldr sp,[r0,#40]\nldr r7,[r0,#32]\nldr ip,[r0,#36]\nbx ip");}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_1000aad0(void *context){
 __asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) int recovered_1000ab20(int context,int value){
 __asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr");
}


#undef DAT_1000abfc
#define DAT_1000abfc (*(int *)(((uintptr_t)&pf_ui_literal_1000abfc)))
#undef DAT_1000ac00
#define DAT_1000ac00 (*(int *)(((uintptr_t)&pf_ui_literal_1000ac00)))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab78
 */

void recovered_1000ab78(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_1000ac04;
  local_20 = DAT_1000abfc + 0x1000aba0;
  local_18 = DAT_1000ac00 + 0x1000abb0;
  local_38 = 1;
  recovered_1000b358(&uStack_3c);
  recovered_100057e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1000abd8);
  (*pcVar1)();
}

#undef DAT_1000abfc
#undef DAT_1000ac00
#undef uStack_3c
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef auStack_10
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac04
 */

undefined4 recovered_1000ac04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac0c
 */

void recovered_1000ac0c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000ac1c(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  recovered_1000ab78();
}


#undef DAT_10014294
#define DAT_10014294 (*(int *)(((uintptr_t)pf_module_state + 0xcfcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac1c
 */

int recovered_1000ac1c(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_1000b170(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_1000ab78();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_10014294;
  DAT_10014294 = extraout_r0;
  return extraout_r0 + 0x24;
}

#undef DAT_10014294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac5c
 */

void * recovered_1000ac5c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100057f8(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100057e4();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac88
 */

void * recovered_1000ac88(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100057f8(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100057e4();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_1000ad74
#define DAT_1000ad74 (*(int *)(((uintptr_t)&pf_ui_literal_1000ad74)))
#undef DAT_1000ad78
#define DAT_1000ad78 (*(int *)(((uintptr_t)&pf_ui_literal_1000ad78)))
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
 * Address: 0x1000acb4
 */

void recovered_1000acb4(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000ac04;
  local_78 = DAT_1000ad74 + 0x1000acf8;
  local_70 = DAT_1000ad78 + 0x1000ad08;
  local_90 = 1;
  recovered_1000b358(&uStack_94);
  recovered_1000584c(param_1);
  recovered_1000b37c(&uStack_94);
  return;
}

#undef DAT_1000ad74
#undef DAT_1000ad78
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000ae3c
#define DAT_1000ae3c (*(int *)(((uintptr_t)&pf_ui_literal_1000ae3c)))
#undef DAT_1000ae40
#define DAT_1000ae40 (*(int *)(((uintptr_t)&pf_ui_literal_1000ae40)))
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
 * Address: 0x1000ad7c
 */

void recovered_1000ad7c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000ac04;
  local_78 = DAT_1000ae3c + 0x1000adc0;
  local_70 = DAT_1000ae40 + 0x1000add0;
  local_90 = 1;
  recovered_1000b358(&uStack_94);
  recovered_1000584c(param_1);
  recovered_1000b37c(&uStack_94);
  return;
}

#undef DAT_1000ae3c
#undef DAT_1000ae40
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000af04
#define DAT_1000af04 (*(int *)(((uintptr_t)&pf_ui_literal_1000af04)))
#undef DAT_1000af08
#define DAT_1000af08 (*(int *)(((uintptr_t)&pf_ui_literal_1000af08)))
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
 * Address: 0x1000ae44
 */

void recovered_1000ae44(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000ac04;
  local_78 = DAT_1000af04 + 0x1000ae88;
  local_70 = DAT_1000af08 + 0x1000ae98;
  local_90 = 1;
  recovered_1000b358(&uStack_94);
  recovered_1000584c(param_1);
  recovered_1000b37c(&uStack_94);
  return;
}

#undef DAT_1000af04
#undef DAT_1000af08
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef auStack_68
#undef local_7c
#undef local_78

#undef DAT_1000afcc
#define DAT_1000afcc (*(int *)(((uintptr_t)&pf_ui_literal_1000afcc)))
#undef DAT_1000afd0
#define DAT_1000afd0 (*(int *)(((uintptr_t)&pf_ui_literal_1000afd0)))
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
 * Address: 0x1000af0c
 */

void recovered_1000af0c(void *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_1000ac04;
  local_78 = DAT_1000afcc + 0x1000af50;
  local_70 = DAT_1000afd0 + 0x1000af60;
  local_90 = 1;
  recovered_1000b358(&uStack_94);
  recovered_1000584c(param_1);
  recovered_1000b37c(&uStack_94);
  return;
}

#undef DAT_1000afcc
#undef DAT_1000afd0
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
 * Address: 0x1000afd4
 */

undefined4 recovered_1000afd4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afdc
 */

uint recovered_1000afdc(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afec
 */

void recovered_1000afec(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000affc
 */

void recovered_1000affc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1001429c
#define DAT_1001429c (*(uint *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef DAT_100142a0
#define DAT_100142a0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b000
 */

undefined4 * recovered_1000b000(uint param_1)

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
  puVar1 = recovered_100057f8(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_1000ab78();
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
      if (size == uVar6) goto LAB_1000b07c;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_1000b07c:
  DAT_1001429c = DAT_1001429c + 1;
  if (DAT_1001429c < 2) {
    DAT_1001429c = 1;
  }
  if (DAT_100142a0 == (undefined4 *)0x0) {
LAB_1000b0d8:
    puVar1[7] = DAT_1001429c;
    puVar1[3] = DAT_100142a0;
    DAT_100142a0 = puVar1;
    return puVar1 + 9;
  }
  do {
    iVar3 = (int)DAT_100142a0;
    while (*(uint *)(iVar3 + 0x1c) != DAT_1001429c) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000b0d8;
    }
    DAT_1001429c = DAT_1001429c + 1;
    if (DAT_1001429c < 2) {
      DAT_1001429c = 1;
    }
  } while( true );
}

#undef DAT_1001429c
#undef DAT_100142a0

#undef DAT_100142a0
#define DAT_100142a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b10c
 */

void recovered_1000b10c(int param_1)

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
  pvVar1 = DAT_100142a0;
  if (DAT_100142a0 == pointer) {
    puVar3 = &DAT_100142a0;
  }
  else {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) goto LAB_1000b168;
      pvVar1 = *(void **)((int)pvVar2 + 0xc);
    } while (*(void **)((int)pvVar2 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
  }
  *puVar3 = *(undefined4 *)(param_1 + -0x18);
  *(undefined4 *)(param_1 + -0x18) = 0;
LAB_1000b168:
  recovered_1000584c(pointer);
  return;
}

#undef DAT_100142a0

#undef DAT_100142a0
#define DAT_100142a0 (*(int *)(((uintptr_t)pf_module_state + 0xd08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b170
 */

void recovered_1000b170(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_100142a0;
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

#undef DAT_100142a0

#undef DAT_10014294
#define DAT_10014294 (*(void * *)(((uintptr_t)pf_module_state + 0xcfcU)))
#undef DAT_100142a0
#define DAT_100142a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1ac
 */

void recovered_1000b1ac(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_10014294;
  if (DAT_10014294 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_10014294 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_10014294 + 8);
  *(undefined4 *)((int)DAT_10014294 + 8) = 0;
  DAT_10014294 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_100142a0;
  if (DAT_100142a0 == pointer) {
    puVar3 = &DAT_100142a0;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_1000b258;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_1000b258:
  recovered_1000584c(pointer);
  return;
}

#undef DAT_10014294
#undef DAT_100142a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b264
 */

void recovered_1000b264(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  recovered_1000b28c((undefined4 *)(param_1 + -0x24));
  return;
}


#undef DAT_10014294
#define DAT_10014294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xcfcU)))
#undef DAT_10014298
#define DAT_10014298 (*(int * *)(((uintptr_t)pf_module_state + 0xd00U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b28c
 */

void recovered_1000b28c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_10014298 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_10014298;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_1000bbe0((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar2;
        param_1[6] = local_20;
        recovered_1000b44c(param_1);
        puVar3 = DAT_10014294;
                    /* WARNING: Subroutine does not return */
        if (DAT_10014294 == (undefined4 *)0x0) {
          recovered_1000ab78();
        }
        DAT_10014294[6] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined1 *)(puVar3 + 8) = 1;
        recovered_1000b28c(puVar3);
        *extraout_r0 = (int)DAT_10014298;
        DAT_10014298 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_1000ab78();
}

#undef DAT_10014294
#undef DAT_10014298
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10014294
#define DAT_10014294 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xcfcU)))
#undef DAT_10014298
#define DAT_10014298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b320
 */

void recovered_1000b320(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_10014294;
                    /* WARNING: Subroutine does not return */
  if (DAT_10014294 == (undefined4 *)0x0) {
    recovered_1000ab78();
  }
  DAT_10014294[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_1000b28c(puVar1);
  *extraout_r0 = DAT_10014298;
  DAT_10014298 = extraout_r0;
  return;
}

#undef DAT_10014294
#undef DAT_10014298

#undef DAT_10014298
#define DAT_10014298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b358
 */

void recovered_1000b358(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10014298;
  DAT_10014298 = param_1;
  return;
}

#undef DAT_10014298

#undef DAT_10014298
#define DAT_10014298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b37c
 */

void recovered_1000b37c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10014298;
  if (DAT_10014298 == param_1) {
    puVar2 = &DAT_10014298;
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

#undef DAT_10014298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3c4
 */

void recovered_1000b3c4(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000b28c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_1000ab78();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3d0
 */

void recovered_1000b3d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000ab78();
}


#undef DAT_10014298
#define DAT_10014298 (*(int * *)(((uintptr_t)pf_module_state + 0xd00U)))
#undef DAT_100142a0
#define DAT_100142a0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3dc
 */

void recovered_1000b3dc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_100142a0; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_1000b420;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_1000ab78();
  }
LAB_1000b420:
  if (DAT_10014298 != (int *)0x0) {
    DAT_10014298 = (int *)*DAT_10014298;
  }
  recovered_1000b44c(puVar1);
  return;
}

#undef DAT_10014298
#undef DAT_100142a0

#undef DAT_10014298
#define DAT_10014298 (*(int * *)(((uintptr_t)pf_module_state + 0xd00U)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b44c
 */

undefined4 recovered_1000b44c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_10014298 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_10014298;
      if (DAT_10014298 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_10014298[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_1000b500:
        piVar1[1] = iVar3;
        recovered_1000aac0((int)piVar1);
        recovered_1000b3dc(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_1000bbe0((int)DAT_10014298,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_1000b500;
      }
      DAT_10014298 = (int *)*piVar1;
    } while (DAT_10014298 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_1000ab78();
}

#undef DAT_10014298
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b50c
 */

undefined4 recovered_1000b50c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000b3dc(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b518
 */

undefined4 recovered_1000b518(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b520
 */

void recovered_1000b520(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000ab78();
}


#undef DAT_10014064
#define DAT_10014064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b52c
 */

int recovered_1000b52c(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_1000b618:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_1000b618;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_10014064) {
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

#undef DAT_10014064

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b620
 */

void recovered_1000b620(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b624
 */

undefined4 recovered_1000b624(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b62c
 */

bool recovered_1000b62c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b640
 */

bool recovered_1000b640(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b680
 */

bool recovered_1000b680(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6ac
 */

bool recovered_1000b6ac(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6c8
 */

bool recovered_1000b6c8(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b6e4
 */

bool recovered_1000b6e4(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b700
 */

bool recovered_1000b700(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_1000b720(double value) {
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
float recovered_1000b808(float value){return (float)recovered_1000b720((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_1000b908(long double value){return (long double)recovered_1000b720((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_1000b9f0(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba0c
 */

double recovered_1000ba0c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100071dc(param_1,param_2);
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
 * Address: 0x1000ba64
 */

ulonglong recovered_1000ba64(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000bad0;
    }
  }
  bVar1 = false;
joined_r0x1000bad0:
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
 * Address: 0x1000bbdc
 */

ulonglong recovered_1000bbdc(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000bad0;
    }
  }
  bVar1 = false;
joined_r0x1000bad0:
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


#undef DAT_10013fc0
#define DAT_10013fc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa28U)))
#undef DAT_10014064
#define DAT_10014064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaccU)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbe0
 */

undefined4 recovered_1000bbe0(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_1000bf94((uint)*pbVar10,&local_28);
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
          goto LAB_1000bdb8;
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
LAB_1000bdb8:
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
LAB_1000bf74:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_10013fc0 + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000bf94(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000bf74;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000bf74;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000bf74;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10014064) goto LAB_1000bf48;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000bf74;
  }
LAB_1000bf48:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_1000bdb8;
}

#undef DAT_10013fc0
#undef DAT_10014064
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf94
 */

undefined4 * recovered_1000bf94(uint param_1,undefined4 *param_2)

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
      goto switchD_1000bfc4_caseD_5;
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
switchD_1000bfc4_caseD_5:
  return puVar5;
}


#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100143c8
#define DAT_100143c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe30U)))
#undef DAT_10018008
#define DAT_10018008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4a70U)))
#undef DAT_1001800c
#define DAT_1001800c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4a74U)))
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
#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c130(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar3 = 0;
  do {
    uVar4 = (&DAT_1001800c)[iVar3 * -2];
    bVar5 = false;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    uVar2 = 0;
    if (_DAT_40010800 == 0x50414d57) {
      if (_DAT_40010804 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        bVar5 = false;
        if ((0xb < _DAT_40010808) && (bVar5 = false, 0x207 < _DAT_40010808)) {
          if (_DAT_40010a04 == (code *)0x0) {
            bVar5 = false;
          }
          else {
            iVar1 = (*_DAT_40010a04)((&DAT_10018008)[iVar3 * -2],&local_38);
            bVar5 = iVar1 != 0 && local_38 == 1;
            uVar2 = local_34;
          }
        }
      }
    }
    if (0xffffff < uVar2) {
      uVar2 = uVar4;
    }
    if (!bVar5) {
      uVar2 = uVar4;
    }
    (&DAT_100142a4)[-iVar3] = uVar2;
    bVar5 = iVar3 != -0x48;
    iVar3 = iVar3 + -1;
  } while (bVar5);
  DAT_100143c8 = 1;
  return;
}

#undef DAT_100142a4
#undef DAT_100143c8
#undef DAT_10018008
#undef DAT_1001800c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a04
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a04
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
#undef DAT_1001800c
#define DAT_1001800c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c268
 */

undefined4 recovered_1000c268(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 *puVar2;

  uVar1 = 0;
  if (param_1 < 0x49) {
    puVar2 = &DAT_1001800c + param_1 * 2;
    if (DAT_100143c8 != '\0') {
      puVar2 = &DAT_100142a4 + param_1;
    }
    uVar1 = *puVar2;
  }
  return uVar1;
}

#undef DAT_100142a4
#undef DAT_100143c8
#undef DAT_1001800c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2b8
 */

undefined4
recovered_1000c2b8(int *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r6;
  uint uVar4;
  int iVar5;

  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    *(undefined1 *)(param_1 + 9) = 0;
    if (param_2 != 0) {
      unaff_r6 = *(uint *)(param_2 + 0x2c);
    }
    if ((param_2 != 0 && unaff_r6 != 0) && (-1 < param_3 && -1 < param_4)) {
      uVar4 = param_5;
      if (0 < (int)param_5) {
        uVar4 = param_6;
        unaff_r6 = param_6;
      }
      if ((((0 < (int)uVar4) && (uVar4 = *(uint *)(param_2 + 4), param_3 + param_5 <= uVar4)) &&
          (param_4 + unaff_r6 <= *(uint *)(param_2 + 8))) &&
         (((uint)-(int)((ulonglong)unaff_r6 * (ulonglong)param_5 >> 0x20) <
           (uint)((uint)((ulonglong)unaff_r6 * (ulonglong)param_5) < 0x40000000) &&
          (-(uVar4 >> 0x1e) < (uint)(uVar4 << 2 <= *(uint *)(param_2 + 0xc)))))) {
        if (param_1[1] != unaff_r6 * (uintptr_t)(uintptr_t)param_5 * 4) {
          iVar1 = recovered_1000c43c();
          if (iVar1 == 0) {
            return 0;
          }
          param_1[1] = unaff_r6 * (uintptr_t)(uintptr_t)param_5 * 4;
          *param_1 = iVar1;
        }
        param_1[4] = param_5;
        param_1[5] = unaff_r6;
        param_1[3] = param_4;
        param_1[2] = param_3;
        iVar1 = *(int *)(param_2 + 8);
        iVar5 = *(int *)(param_2 + 0xc);
        param_1[6] = *(int *)(param_2 + 4);
        iVar3 = 0;
        param_1[7] = iVar1;
        param_1[8] = iVar5;
        do {
          recovered_100058f0((void *)(*param_1 + iVar3),
                             (void *)(*(int *)(param_2 + 0xc) * param_4 + *(int *)(param_2 + 0x2c) +
                                     param_3 * 4),(uintptr_t)(uintptr_t)param_5 * 4);
          iVar3 = iVar3 + (uintptr_t)(uintptr_t)param_5 * 4;
          param_4 = param_4 + 1;
          unaff_r6 = unaff_r6 - 1;
        } while (unaff_r6 != 0);
        uVar2 = 1;
        *(undefined1 *)(param_1 + 9) = 1;
      }
    }
  }
  return uVar2;
}


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
 * Address: 0x1000c43c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000c43c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x57 < _DAT_40010808)) &&
     (_DAT_40010854 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000c48c. Too many branches */
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c490
 */

undefined4 recovered_1000c490(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r10;
  int iVar7;
  bool bVar8;

  if (param_1 != (int *)0x0) {
    unaff_r10 = param_2;
  }
  uVar1 = 0;
  if (param_1 != (int *)0x0 && param_2 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 9);
    bVar8 = (*(byte *)(param_1 + 9) & 1) != 0;
    if (bVar8) {
      uVar3 = *(uint *)(unaff_r10 + 0x2c);
    }
    if ((((bVar8 && uVar3 != 0) && (*(int *)(unaff_r10 + 4) == param_1[6])) &&
        (*(int *)(unaff_r10 + 8) == param_1[7])) && (*(int *)(unaff_r10 + 0xc) == param_1[8])) {
      iVar6 = param_1[5];
      uVar1 = 1;
      if (0 < iVar6) {
        iVar2 = param_1[2];
        iVar7 = 0;
        iVar4 = param_1[4];
        iVar5 = param_1[3];
        do {
          recovered_100058f0((void *)(*(int *)(unaff_r10 + 0xc) * iVar5 + *(int *)(unaff_r10 + 0x2c)
                                     + iVar2 * 4),(void *)(*param_1 + iVar7),iVar4 * 4);
          iVar7 = iVar7 + iVar4 * 4;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


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
 * Address: 0x1000c570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c570(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x53 < _DAT_40010808)) &&
     (_DAT_40010850 != (code *)0x0)) {
    (*_DAT_40010850)(*param_1);
  }
  recovered_10006080(param_1,0,0x28);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5f0
 */

int recovered_1000c5f0(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == (int *)0x0) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar2 = *param_1;
    iVar1 = param_1[1];
    if (iVar1 < iVar2) {
      iVar1 = 0;
      iVar2 = 0;
    }
  }
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  if (param_2 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c62c
 */

void recovered_1000c62c(int param_1,int param_2,uint param_3,uint param_4,uint *param_5,
                       uint *param_6,int *param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_7 != (int *)0x0) {
    recovered_10006080(param_7,0,0xbc);
    iVar1 = param_1;
    if (param_5 != (uint *)0x0) {
      iVar1 = param_1 + 2;
    }
    *param_7 = iVar1;
    *(bool *)((int)param_7 + 0x11) = param_6 != (uint *)0x0;
    *(bool *)(param_7 + 4) = param_5 != (uint *)0x0;
    uVar2 = param_4;
    if (param_6 != (uint *)0x0) {
      uVar2 = param_4 - 2;
    }
    param_7[1] = param_2;
    param_7[3] = uVar2 & ~((int)uVar2 >> 0x1f);
    uVar2 = param_3;
    if (param_5 != (uint *)0x0) {
      uVar2 = param_3 - 2;
    }
    param_7[2] = uVar2 & ~((int)uVar2 >> 0x1f);
    if (param_5 != (uint *)0x0) {
      uVar2 = param_4;
      if (param_6 != (uint *)0x0) {
        uVar2 = param_4 - 0xc;
      }
      recovered_1000c75c(param_1,param_2,0xc,uVar2 & ~((int)uVar2 >> 0x1f),0,param_5,param_7 + 5);
    }
    if (param_6 != (uint *)0x0) {
      iVar1 = 0;
      if (param_5 != (uint *)0x0) {
        iVar1 = 0xc;
      }
      recovered_1000c75c(iVar1 + param_1,param_4 + param_2 + -0xc,
                         param_3 - iVar1 & ~((int)(param_3 - iVar1) >> 0x1f),0xc,1,param_6,
                         param_7 + 0x1a);
    }
  }
  return;
}


#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c75c
 */

void recovered_1000c75c(int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,
                       int *param_7)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;

  uVar12 = *param_6;
  uVar8 = param_6[1];
  uVar3 = param_6[2];
  uVar5 = param_6[3];
  if ((int)uVar8 < (int)uVar12) {
    uVar8 = 0;
    uVar12 = 0;
  }
  uVar11 = uVar8 - uVar12;
  uVar13 = ((int)uVar8 >> 0x1f) - (((int)uVar12 >> 0x1f) + (uint)(uVar8 < uVar12));
  if ((int)uVar3 <= (int)uVar8) {
    uVar8 = uVar3;
  }
  if ((int)uVar3 < (int)uVar12) {
    uVar8 = uVar12;
  }
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  iVar9 = param_2;
  iVar2 = param_4;
  if (param_5 == 1) {
    iVar9 = param_1;
    iVar2 = param_3;
  }
  if (param_7 != (int *)0x0) {
    uVar3 = iVar2 - 0x20;
    local_24 = iVar9 + 0x10;
    recovered_10006080(param_7,0,0x54);
    iVar6 = 0xc;
    bVar14 = param_5 != 1;
    piVar4 = param_7 + 9;
    *piVar4 = param_1;
    if (param_5 == 1) {
      iVar6 = 8;
    }
    param_7[10] = param_2;
    piVar4[bVar14] = iVar9;
    param_7[0xc] = param_4;
    param_7[0xb] = param_3;
    *(undefined4 *)((int)piVar4 + iVar6) = 0xe;
    param_7[0xe] = param_2;
    piVar4 = param_7 + 0xd;
    *piVar4 = param_1;
    param_7[0x10] = param_4;
    piVar4[bVar14] = iVar2 + iVar9 + -0xe;
    param_7[6] = param_2;
    param_7[8] = param_4;
    param_7[4] = param_4;
    piVar10 = param_7 + 5;
    *piVar10 = param_1;
    param_7[0xf] = param_3;
    *(undefined4 *)((int)piVar4 + iVar6) = 0xe;
    uVar7 = uVar3 & ~((int)uVar3 >> 0x1f);
    param_7[2] = param_2;
    param_7[7] = param_3;
    *param_7 = param_5;
    piVar10[bVar14] = local_24;
    *(uint *)((int)piVar10 + iVar6) = uVar7;
    piVar4 = param_7 + 0x11;
    param_7[3] = param_3;
    param_7[1] = param_1;
    *(undefined8 *)piVar4 = *(undefined8 *)piVar10;
    *(undefined8 *)(param_7 + 0x13) = *(undefined8 *)(param_7 + 7);
    if (((int)(uint)(uVar11 == 0) <= (int)uVar13) && (0x20 < iVar2)) {
      uVar15 = recovered_100054ac((uint)((ulonglong)uVar7 * (ulonglong)uVar5),
                                  (uint)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20),uVar11 + uVar5
                                  ,uVar13 + CARRY4(uVar11,uVar5));
      uVar5 = (uint)uVar15;
      if (0x7ffffffe < uVar5) {
        uVar5 = 0x7fffffff;
      }
      if ((int)((ulonglong)uVar15 >> 0x20) != 0) {
        uVar5 = 0x7fffffff;
      }
      if (uVar5 < 0x13) {
        uVar5 = 0x12;
      }
      if (uVar3 < uVar5) {
        uVar5 = uVar7;
      }
      if (uVar5 < uVar3) {
        uVar7 = uVar7 - uVar5;
        lVar1 = (ulonglong)uVar7 * (ulonglong)(uVar8 - uVar12);
        uVar15 = recovered_10005610((uint)lVar1,
                                    (((int)uVar8 >> 0x1f) -
                                    (((int)uVar12 >> 0x1f) + (uint)(uVar8 < uVar12))) * uVar7 +
                                    (uVar8 - uVar12) * ((int)uVar7 >> 0x1f) +
                                    (int)((ulonglong)lVar1 >> 0x20),uVar11,uVar13);
        local_24 = local_24 + (int)uVar15;
      }
      uVar3 = uVar5;
    }
    *(uint *)((int)piVar4 + iVar6) = uVar3;
    piVar4[bVar14] = local_24;
  }
  return;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9a8
 */

uint recovered_1000c9a8(int *param_1,uint *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar8 = *param_2;
  uVar10 = param_2[1];
  if ((int)uVar10 < (int)uVar8) {
    uVar10 = 0;
    uVar8 = 0;
  }
  if ((param_1 != (int *)0x0) && ((int)uVar8 < (int)uVar10)) {
    piVar9 = param_1 + 8;
    piVar3 = param_1 + 0x14;
    if (*param_1 == 1) {
      piVar9 = param_1 + 7;
      piVar3 = param_1 + 0x13;
    }
    uVar11 = *piVar9 - *piVar3;
    if (0 < (int)uVar11) {
      puVar4 = (uint *)(param_1 + 6);
      if (*param_1 == 1) {
        puVar4 = (uint *)(param_1 + 5);
      }
      uVar2 = *puVar4;
      uVar5 = param_3 - (param_4 + uVar2);
      uVar7 = ((int)param_3 >> 0x1f) -
              (((int)param_4 >> 0x1f) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_4,uVar2) +
              (uint)(param_3 < param_4 + uVar2));
      uVar2 = uVar5;
      if ((int)uVar7 < 0) {
        uVar2 = 0;
      }
      bVar1 = (int)-(uVar7 + (uVar11 < uVar5)) < 0 !=
              (SBORROW4(0,uVar7) != SBORROW4(-uVar7,(uint)(uVar11 < uVar5)));
      if (bVar1) {
        uVar2 = uVar11;
      }
      lVar12 = (ulonglong)(uVar10 - uVar8) * (ulonglong)uVar2;
      uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
      if (bVar1) {
        uVar7 = 0;
      }
      lVar12 = recovered_10005610((uint)lVar12,
                                  uVar7 * (uVar10 - uVar8) +
                                  uVar2 * (((int)uVar10 >> 0x1f) -
                                          (((int)uVar8 >> 0x1f) + (uint)(uVar10 < uVar8))) +
                                  (int)((ulonglong)lVar12 >> 0x20),uVar11,0);
      uVar2 = (uint)(lVar12 + (int)uVar8);
      iVar6 = (int)((ulonglong)(lVar12 + (int)uVar8) >> 0x20);
      uVar11 = 0x80000000;
      if (((int)(iVar6 - ((uVar2 < 0x80000000) - 1)) < 0 ==
           (SBORROW4(iVar6,-1) != SBORROW4(iVar6 + 1,(uint)(uVar2 < 0x80000000)))) &&
         (uVar11 = 0x7fffffff,
         (int)-(iVar6 + (uint)(0x7fffffff < uVar2)) < 0 ==
         (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(0x7fffffff < uVar2))))) {
        if ((int)uVar2 <= (int)uVar10) {
          uVar10 = uVar2;
        }
        uVar11 = uVar10;
        if ((int)uVar2 < (int)uVar8) {
          uVar11 = uVar8;
        }
      }
      return uVar11;
    }
  }
  return uVar8;
}


#undef DAT_1000cf20
#define DAT_1000cf20 (*(uint64_t *)(((uintptr_t)&pf_ui_literal_1000cf20)))
#undef DAT_1000cf28
#define DAT_1000cf28 (*(uint64_t *)(((uintptr_t)&pf_ui_literal_1000cf28)))
#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
#undef DAT_10018008
#define DAT_10018008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4a70U)))
#undef DAT_1001800c
#define DAT_1001800c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4a74U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108bc
#define DAT_400108bc (*(uint8_t *)(0x400108bcU))
#undef DAT_400108c0
#define DAT_400108c0 (*(uint8_t *)(0x400108c0U))
#undef DAT_40010a00
#define DAT_40010a00 (*(uint8_t *)(0x40010a00U))
#undef DAT_40010a04
#define DAT_40010a04 (*(uint8_t *)(0x40010a04U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108bc
#define _DAT_400108bc (*(code * *)(0x400108bcU))
#undef _DAT_400108c0
#define _DAT_400108c0 (*(code * *)(0x400108c0U))
#undef _DAT_40010a00
#define _DAT_40010a00 (*(code * *)(0x40010a00U))
#undef _DAT_40010a04
#define _DAT_40010a04 (*(code * *)(0x40010a04U))
#undef str_10013f52
#define str_10013f52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9baU)))
#define local_3f40 (*(uint *)(pf_stack_frame + 16))
#define local_3f3c (*(int *)(pf_stack_frame + 20))
#define local_3f38 (*(uint *)(pf_stack_frame + 24))
#define local_3f34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_3f30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3f2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_3f28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_3c (*(undefined4 *)(pf_stack_frame + 16148))
#define local_38 (*(undefined4 *)(pf_stack_frame + 16152))
#define local_34 (*(undefined4 *)(pf_stack_frame + 16156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 16160))
#define local_2c (*(undefined4 *)(pf_stack_frame + 16164))
#define local_28 (*(undefined4 *)(pf_stack_frame + 16168))
#define aiStack_3d4c (*(int (*)[3923])(pf_stack_frame + 516))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000cad0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[16240] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  if (DAT_100143c8 != '\0') goto LAB_1000cd34;
  iVar7 = 0;
  do {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x207 < _DAT_40010808)) &&
       ((_DAT_40010a04 != (code *)0x0 &&
        (iVar4 = (*_DAT_40010a04)((&DAT_10018008)[iVar7 * -2],&local_3c), iVar4 != 0))))
    goto LAB_1000cc24;
    bVar10 = iVar7 != -0x48;
    iVar7 = iVar7 + -1;
  } while (bVar10);
  iVar7 = -1;
  if (((((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
         ((_DAT_40010808 < 0xc0 ||
          (((_DAT_400108bc == (code *)0x0 || (iVar7 = (*_DAT_400108bc)(), iVar7 < 0)) ||
           (_DAT_40010800 != 0x50414d57)))))) || ((_DAT_40010804 == 0 || (_DAT_40010808 < 0x204))))
       || (_DAT_40010a00 == (code *)0x0)) ||
      (iVar4 = (*_DAT_40010a00)(iVar7,str_10013f52), iVar4 == 0)) &&
     (((local_3f40 = 0, _DAT_40010800 == 0x50414d57 && (_DAT_40010804 != 0)) &&
      ((0xc3 < _DAT_40010808 &&
       ((_DAT_400108c0 != (code *)0x0 &&
        (iVar4 = (*_DAT_400108c0)(&local_3f3c,0x20,&local_3f40), iVar4 != 0)))))))) {
    if (local_3f40 < 0x21) {
      if (local_3f40 == 0) goto LAB_1000cc24;
    }
    else {
      local_3f40 = 0x20;
    }
    uVar8 = 0;
    uVar9 = local_3f40;
    piVar6 = aiStack_3d4c;
    do {
      if ((((*piVar6 != iVar7) && (_DAT_40010800 == 0x50414d57)) && (_DAT_40010804 != 0)) &&
         ((0x203 < _DAT_40010808 && (_DAT_40010a00 != (code *)0x0)))) {
        iVar4 = (*_DAT_40010a00)(*piVar6,str_10013f52);
        if (iVar4 != 0) break;
        uVar9 = local_3f40;
      }
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 0x7e;
    } while (uVar8 < uVar9);
  }
LAB_1000cc24:
  iVar7 = 0;
  do {
    uVar9 = (&DAT_1001800c)[iVar7 * -2];
    bVar10 = false;
    local_3f28 = 0;
    local_3f2c = 0;
    local_3f30 = 0;
    local_3f34 = 0;
    local_3f38 = 0;
    local_3f3c = 0;
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((bVar10 = false, 0xb < _DAT_40010808 && (bVar10 = false, 0x207 < _DAT_40010808)))) {
      if (_DAT_40010a04 == (code *)0x0) {
        bVar10 = false;
      }
      else {
        iVar4 = (*_DAT_40010a04)((&DAT_10018008)[iVar7 * -2],&local_3f3c);
        bVar10 = iVar4 != 0 && local_3f3c == 1;
      }
    }
    uVar8 = local_3f38;
    if (0xffffff < local_3f38) {
      uVar8 = uVar9;
    }
    if (!bVar10) {
      uVar8 = uVar9;
    }
    (&DAT_100142a4)[-iVar7] = uVar8;
    bVar10 = iVar7 != -0x48;
    iVar7 = iVar7 + -1;
  } while (bVar10);
  DAT_100143c8 = '\x01';
LAB_1000cd34:
  recovered_10006080(param_1,0,0x34);
  uVar2 = DAT_100142a4;
  uVar1 = DAT_1000cf28;
  *(undefined8 *)(param_1 + 5) = DAT_1000cf20;
  *(undefined8 *)(param_1 + 7) = uVar1;
  param_1[3] = param_3 << 2;
  cVar3 = DAT_100143c8;
  param_1[2] = param_4;
  param_1[1] = param_3;
  uVar5 = 0xf6f6f6;
  if (cVar3 != '\0') {
    uVar5 = uVar2;
  }
  *param_1 = param_2;
  param_1[4] = uVar5;
  return;
}

#undef DAT_1000cf20
#undef DAT_1000cf28
#undef DAT_100142a4
#undef DAT_100143c8
#undef DAT_10018008
#undef DAT_1001800c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108bc
#undef DAT_400108c0
#undef DAT_40010a00
#undef DAT_40010a04
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108bc
#undef _DAT_400108c0
#undef _DAT_40010a00
#undef _DAT_40010a04
#undef str_10013f52
#undef local_3f40
#undef local_3f3c
#undef local_3f38
#undef local_3f34
#undef local_3f30
#undef local_3f2c
#undef local_3f28
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef aiStack_3d4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf30
 */

void recovered_1000cf30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[7] = param_9;
  param_1[6] = param_8;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[5] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cfa8
 */

void recovered_1000cfa8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[7] = param_9;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[6] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d020
 */

void recovered_1000d020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,int param_15,
                       uint param_16)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_2;
  if (99 < param_16) {
    param_16 = 100;
  }
  if (4 < param_15 + 1U) {
    param_15 = -1;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  param_1[8] = param_16;
  param_1[7] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d0a4
 */

void recovered_1000d0a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d110
 */

void recovered_1000d110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[0xc] = param_14;
  param_1[8] = 0;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[7] = 1;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d180
 */

void recovered_1000d180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[7] = 2;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[8] = param_15;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1f8
 */

void recovered_1000d1f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[0xc] = param_14;
  param_1[0xb] = param_13;
  param_1[10] = param_12;
  param_1[9] = param_11;
  param_1[7] = 3;
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[8] = param_15;
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
#undef DAT_400108a0
#define DAT_400108a0 (*(uint8_t *)(0x400108a0U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
#undef _DAT_400108a0
#define _DAT_400108a0 (*(code * *)(0x400108a0U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000d270(int *param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int extraout_r3 = 0;
  uint unaff_r4;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;

  if (param_1 == (int *)0x0 || param_2 == (int *)0x0) {
    return 0;
  }
  uVar24 = param_2[1];
  if (uVar24 != 0) {
    unaff_r4 = param_2[2];
  }
  if (uVar24 == 0 || unaff_r4 == 0) {
    return 0;
  }
  iVar7 = *param_2;
  iVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar13 = param_2[0xc];
  uVar20 = (uint)((ulonglong)uVar24 * (ulonglong)unaff_r4 >> 0x20);
  puVar14 = (undefined *)param_2[0xb];
  puVar15 = (undefined *)param_2[10];
  puVar16 = (undefined *)param_2[9];
  uVar17 = param_2[8];
  iVar18 = param_2[7];
  uVar22 = param_2[3];
  uVar3 = param_2[6];
  if (uVar20 == 0 && (0x3fffffff < (uint)((ulonglong)uVar24 * (ulonglong)unaff_r4)) <= uVar20) {
LAB_1000d52c:
    uVar11 = uVar24;
    uVar20 = unaff_r4;
    if (uVar22 == 0) goto LAB_1000d53c;
  }
  else {
    if (uVar24 < unaff_r4) {
      uVar26 = recovered_100054ac((uint)((ulonglong)unaff_r4 * 0x3fffffff),
                                  (uint)((ulonglong)unaff_r4 * 0x3fffffff >> 0x20),uVar24,0);
      uVar5 = (uint)((ulonglong)uVar26 >> 0x20);
      uVar20 = 0;
      uVar11 = 0x40000000;
      do {
        uVar6 = uVar11;
        uVar10 = uVar20;
        uVar20 = uVar10 >> 2 | uVar6 << 0x1e;
        uVar11 = uVar6 >> 2;
      } while (uVar5 <= uVar6 && (uint)(uVar10 <= (uint)uVar26) <= uVar5 - uVar6);
      uVar20 = 0;
      if (uVar10 != 0 || uVar6 != 0) {
        uVar11 = 0;
        do {
          uVar4 = (uint)((ulonglong)uVar26 >> 0x20);
          uVar5 = (uint)uVar26;
          uVar21 = uVar20 + uVar10;
          uVar19 = uVar11 + uVar6 + (uint)CARRY4(uVar20,uVar10);
          bVar1 = (byte)uVar11;
          uVar11 = uVar11 >> 1;
          uVar20 = (uint)(bVar1 & 1) << 0x1f | uVar20 >> 1;
          bVar25 = CARRY4(uVar20,uVar10);
          uVar23 = uVar20 + uVar10;
          uVar10 = uVar10 >> 2 | uVar6 << 0x1e;
          if (uVar19 < uVar4 || uVar4 - uVar19 < (uint)(uVar21 <= uVar5)) {
            uVar20 = uVar23;
            uVar11 = uVar11 + uVar6 + (uint)bVar25;
            uVar26 = CONCAT44(uVar4 - (uVar19 + (uVar21 > uVar5)),uVar5 - uVar21);
          }
          uVar5 = uVar6 >> 2;
          uVar6 = uVar6 >> 2;
        } while (uVar10 != 0 || uVar5 != 0);
      }
      if (uVar20 < 2) {
        uVar20 = 1;
      }
      uVar26 = recovered_100054ac((uint)((ulonglong)uVar24 * (ulonglong)uVar20),
                                  (uint)((ulonglong)uVar24 * (ulonglong)uVar20 >> 0x20),unaff_r4,0);
      uVar11 = 1;
      if (1 < (uint)uVar26) {
        uVar11 = (uint)uVar26;
      }
    }
    else {
      uVar26 = recovered_100054ac((uint)((ulonglong)uVar24 * 0x3fffffff),
                                  (uint)((ulonglong)uVar24 * 0x3fffffff >> 0x20),unaff_r4,0);
      uVar5 = (uint)((ulonglong)uVar26 >> 0x20);
      uVar20 = 0;
      uVar11 = 0x40000000;
      do {
        uVar6 = uVar11;
        uVar10 = uVar20;
        uVar20 = uVar10 >> 2 | uVar6 << 0x1e;
        uVar11 = uVar6 >> 2;
      } while (uVar5 <= uVar6 && (uint)(uVar10 <= (uint)uVar26) <= uVar5 - uVar6);
      uVar20 = 0;
      uVar11 = 0;
      if (uVar10 != 0 || uVar6 != 0) {
        do {
          uVar4 = (uint)((ulonglong)uVar26 >> 0x20);
          uVar5 = (uint)uVar26;
          uVar21 = uVar11 + uVar10;
          uVar19 = uVar20 + uVar6 + (uint)CARRY4(uVar11,uVar10);
          bVar1 = (byte)uVar20;
          uVar20 = uVar20 >> 1;
          uVar11 = (uint)(bVar1 & 1) << 0x1f | uVar11 >> 1;
          bVar25 = CARRY4(uVar11,uVar10);
          uVar23 = uVar11 + uVar10;
          uVar10 = uVar10 >> 2 | uVar6 << 0x1e;
          if (uVar19 < uVar4 || uVar4 - uVar19 < (uint)(uVar21 <= uVar5)) {
            uVar11 = uVar23;
            uVar20 = uVar20 + uVar6 + (uint)bVar25;
            uVar26 = CONCAT44(uVar4 - (uVar19 + (uVar21 > uVar5)),uVar5 - uVar21);
          }
          uVar5 = uVar6 >> 2;
          uVar6 = uVar6 >> 2;
        } while (uVar10 != 0 || uVar5 != 0);
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar26 = recovered_100054ac((uint)((ulonglong)unaff_r4 * (ulonglong)uVar11),
                                  (uint)((ulonglong)unaff_r4 * (ulonglong)uVar11 >> 0x20),uVar24,0);
      uVar20 = 1;
      if (1 < (uint)uVar26) {
        uVar20 = (uint)uVar26;
      }
    }
    uVar5 = (uint)((ulonglong)uVar20 * (ulonglong)uVar11 >> 0x20);
    if (uVar5 != 0 || uVar5 < (0x3fffffff < (uint)((ulonglong)uVar20 * (ulonglong)uVar11))) {
      if (uVar11 < uVar20) {
        uVar20 = recovered_10003d50(0x3fffffff,uVar11);
      }
      else {
        uVar11 = recovered_10003d50(0x3fffffff,uVar20);
      }
    }
    if (uVar11 == uVar24 && uVar20 == unaff_r4) goto LAB_1000d52c;
LAB_1000d53c:
    unaff_r4 = uVar20;
    uVar22 = uVar11 << 2;
  }
  if (unaff_r4 == 0) {
    return 0;
  }
  if (uVar11 + 0xc0000000 < 0xc0000001) {
    return 0;
  }
  if ((uint)((uint)((ulonglong)unaff_r4 * (ulonglong)uVar11) < 0x40000000) <=
      (uint)-(int)((ulonglong)unaff_r4 * (ulonglong)uVar11 >> 0x20)) {
    return 0;
  }
  uVar24 = uVar22;
  if (uVar22 == 0) {
    uVar24 = uVar11 << 2;
  }
  if (uVar24 < uVar11 << 2) {
    return 0;
  }
  iVar12 = (int)((ulonglong)unaff_r4 * (ulonglong)uVar24);
  if ((int)((ulonglong)unaff_r4 * (ulonglong)uVar24 >> 0x20) != 0) {
    return 0;
  }
  recovered_10006080(param_1,0,0x340);
  if (_DAT_40010800 == 0x50414d57) {
    if (_DAT_40010804 == 0) {
      return 0;
    }
    if (_DAT_40010808 < 0xa4) {
      return 0;
    }
    if (_DAT_400108a0 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_400108a0)(iVar7,uVar11,unaff_r4);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0xc] = iVar7;
    if (99 < uVar17) {
      uVar17 = 100;
    }
    param_1[3] = uVar22;
    param_1[8] = uVar17;
    param_1[4] = iVar8;
    if (4 < iVar18 + 1U) {
      iVar18 = -1;
    }
    param_1[2] = unaff_r4;
    uVar24 = 100;
    if (uVar3 < 100) {
      uVar24 = uVar3;
    }
    param_1[1] = uVar11;
    uVar22 = 0;
    if (uVar3 != 0xffffffff) {
      uVar22 = uVar24;
    }
    uVar24 = 100;
    if (uVar9 < 100) {
      uVar24 = uVar9;
    }
    if (uVar9 == 0xffffffff) {
      uVar24 = 0xf;
    }
    *param_1 = iVar2;
    param_1[5] = uVar24;
    param_1[7] = iVar18;
    param_1[6] = uVar22;
    if ((uVar13 & 1) == 0) {
LAB_1000d6a8:
      if ((puVar16 != (undefined *)0x0 || puVar15 != (undefined *)0x0) ||
         (iVar7 = 0, puVar14 != (undefined *)0x0)) {
        recovered_1000d8bc(param_1,puVar16,puVar15,puVar14);
        iVar7 = extraout_r3;
      }
      if (uVar9 != 0xffffffff || uVar3 != 0xffffffff) {
        recovered_1000d950(param_1,param_1[5],param_1[6],iVar7);
      }
      uVar24 = param_1[7];
      if ((uVar24 == 0xffffffff) || (*param_1 == 0)) {
        return iVar2;
      }
      uVar3 = param_1[8];
      uVar22 = 0;
      if (99 < uVar3) {
        uVar3 = 100;
      }
      if (uVar24 < 4) {
        uVar22 = param_1[2];
        if ((uint)param_1[1] < (uint)param_1[2]) {
          uVar22 = param_1[1];
        }
        uVar22 = (uVar22 * uVar3 + 0x32) / 100;
      }
      else {
        uVar24 = 0xffffffff;
      }
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
         ((_DAT_40010964 != (code *)0x0 &&
          (iVar7 = (*_DAT_40010964)(*param_1,uVar24,uVar22), iVar7 != 0)))) {
        param_1[8] = uVar3;
        param_1[7] = uVar24;
      }
      return iVar2;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x4f < _DAT_40010808)) &&
       (_DAT_4001084c != (code *)0x0)) {
      iVar7 = (*_DAT_4001084c)(iVar12);
      param_1[0xb] = iVar7;
      if (iVar7 != 0) {
        param_1[10] = iVar12;
        param_1[9] = param_1[9] | 1;
        goto LAB_1000d6a8;
      }
    }
    else {
      param_1[0xb] = 0;
    }
    recovered_1000d86c();
    recovered_10006080(param_1,0,0x340);
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef DAT_400108a0
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c
#undef _DAT_400108a0
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108a8
#define DAT_400108a8 (*(uint8_t *)(0x400108a8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108a8
#define _DAT_400108a8 (*(code * *)(0x400108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d86c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000d86c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0xac)) || (_DAT_400108a8 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000d8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_400108a8)();
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108a8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108a8

#undef DAT_100135c7
#define DAT_100135c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108ec
#define DAT_400108ec (*(uint8_t *)(0x400108ecU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108ec
#define _DAT_400108ec (*(code * *)(0x400108ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000d8bc(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_100135c7;
    }
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_100135c7;
    }
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_100135c7;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xef < _DAT_40010808)) &&
       (_DAT_400108ec != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000d94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*_DAT_400108ec)(iVar1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_100135c7
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108ec
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108ec

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000d950(int *param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_3) {
      param_3 = 100;
    }
    uVar2 = 100;
    if (param_2 < 100) {
      uVar2 = param_2;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
       (_DAT_40010960 != (code *)0x0)) {
      iVar1 = (*_DAT_40010960)(param_4,(uVar2 * 0xff + 0x32) * 0x147b >> 0x13,
                               (param_3 * 0xff + 0x32) * 0x147b >> 0x13);
      if (iVar1 != 0) {
        param_1[6] = param_3;
        param_1[5] = uVar2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010960
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010960

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000da28(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    uVar2 = 0;
    if (4 < param_2 + 1U) {
      param_2 = -1;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    if (param_2 != -1) {
      uVar2 = param_1[2];
      if ((uint)param_1[1] < (uint)param_1[2]) {
        uVar2 = param_1[1];
      }
      uVar2 = (uVar2 * param_3 + 0x32) / 100;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_4,param_2,uVar2);
      if (iVar1 != 0) {
        param_1[8] = param_3;
        param_1[7] = param_2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108a4
#define DAT_400108a4 (*(uint8_t *)(0x400108a4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108a4
#define _DAT_400108a4 (*(code * *)(0x400108a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000db1c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000db1c(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_r12;
  bool bVar8;
  byte *pf_pixels=param_3;

  if (param_1 != (int *)0x0) {
    in_r12 = *param_1;
  }
  if (param_1 == (int *)0x0 || in_r12 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    param_4 = param_1[1];
  }
  param_1[0xf] = 0;
  if (param_5 == 0) {
    param_5 = param_1[2];
  }
  uVar7 = 0;
  iVar4 = (int)((ulonglong)param_4 * (ulonglong)param_5 >> 0x20);
  if (param_6 == 0) {
    param_6 = param_4 << 2;
  }
  bVar8 = (uint)((ulonglong)param_4 * (ulonglong)param_5) < 0x40000000;
  bVar1 = (uint)-iVar4 < (uint)bVar8;
  uVar5 = -(iVar4 + (uint)!bVar8);
  if (bVar1) {
    uVar5 = param_4 + 0xc0000000;
  }
  if ((bVar1 && 0xc0000000 < uVar5) && (param_5 != 0)) {
    if ((-(param_4 >> 0x1e) < (uint)(param_4 << 2 <= param_6)) &&
       (lVar2 = (ulonglong)param_6 * (ulonglong)(param_5 - 1) +
                CONCAT44(param_4 >> 0x1e,param_4 << 2), iVar4 = (int)lVar2,
       (int)((ulonglong)lVar2 >> 0x20) == 0)) {
      if (param_2 == (byte *)0x0) {
        param_2 = (byte *)param_1[0xc];
      }
      uVar6 = (param_7 & 0xffffff) >> 0x10;
      uVar5 = ((((((((((param_5 & 0xff ^
                       ((((param_4 & 0xff ^ 0x811c9dc5) * 0x1000193 ^ (param_4 & 0xffff) >> 8) *
                         0x1000193 ^ (param_4 & 0xffffff) >> 0x10) * 0x1000193 ^ param_4 >> 0x18) *
                       0x1000193) * 0x1000193 ^ (param_5 & 0xffff) >> 8) * 0x1000193 ^
                     (param_5 & 0xffffff) >> 0x10) * 0x1000193 ^ param_5 >> 0x18) * 0x1000193 ^
                   param_6 & 0xff) * 0x1000193 ^ (param_6 & 0xffff) >> 8) * 0x1000193 ^
                 (param_6 & 0xffffff) >> 0x10) * 0x1000193 ^ param_6 >> 0x18) * 0x1000193 ^
               param_7 & 0xff) * 0x1000193 ^ (param_7 & 0xffff) >> 8) * 0x1000193 ^ uVar6;
      if (param_2 != (byte *)0x0) {
        uVar6 = (uint)*param_2;
      }
      uVar5 = (uVar5 * 0x1000193 ^ param_7 >> 0x18) * 0x1000193;
      pbVar3 = param_2;
      if (param_2 != (byte *)0x0 && uVar6 != 0) {
        do {
          uVar5 = uVar5 ^ uVar6;
          uVar6 = (uint)pbVar3[1];
          uVar5 = uVar5 * 0x1000193;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
      }
      if ((param_3 != (byte *)0x0) && (iVar4 != 0)) {
        do {
          iVar4 = iVar4 + -1;
          uVar5 = (uVar5 ^ *param_3) * 0x1000193;
          param_3 = param_3 + 1;
        } while (iVar4 != 0);
      }
      if ((param_1[0xe] == 0) || (uVar5 != param_1[0xd])) {
        if (_DAT_40010800 != 0x50414d57) {
          return 0;
        }
        if (_DAT_40010804 == 0) {
          return 0;
        }
        if (_DAT_40010808 < 0xa8) {
          return 0;
        }
        if (_DAT_400108a4 == (code *)0x0) {
          return 0;
        }
        iVar4 = (*_DAT_400108a4)(in_r12,param_2,pf_pixels,param_4,param_5,param_6,param_7);
        if (iVar4 == 0) {
          return 0;
        }
        param_1[0xe] = 1;
        param_1[0xd] = uVar5;
      }
      uVar7 = 1;
      param_1[4] = param_7;
      param_1[3] = param_6;
      param_1[2] = param_5;
      param_1[1] = param_4;
      param_1[0xc] = (int)param_2;
    }
  }
  return uVar7;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108a4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108a4

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a14
#define DAT_40010a14 (*(uint8_t *)(0x40010a14U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010a14
#define _DAT_40010a14 (*(code * *)(0x40010a14U))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(byte * *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(byte * *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddcc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ddcc(int *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *in_r12;
  byte *pbVar6;

  uVar5 = 0;
  pbVar2 = param_3;
  local_20 = in_r12;
  if (param_1 != (int *)0x0) {
    pbVar2 = (byte *)param_1[0xb];
    local_20 = param_3;
  }
  if (((param_1 != (int *)0x0 && pbVar2 != (byte *)0x0) && (-1 < param_2 && -1 < (int)local_20)) &&
     (0 < param_4)) {
    if (((0 < param_5) && (uVar3 = param_1[1], (uint)(param_2 + param_4) <= uVar3)) &&
       (pbVar6 = (byte *)param_1[2], local_20 + param_5 <= pbVar6)) {
      param_1[0xf] = 0;
      local_18 = param_5;
      uVar4 = param_1[3];
      local_30 = uVar3;
      local_2c = pbVar6;
      local_28 = uVar4;
      local_24 = param_2;
      local_1c = param_4;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x217 < _DAT_40010808 && (_DAT_40010a14 != (code *)0x0)))) {
        iVar1 = (*_DAT_40010a14)(*param_1,pbVar2,&local_30);
        if (iVar1 != 0) {
          param_1[0xe] = 0;
          return 1;
        }
        uVar3 = param_1[1];
        pbVar6 = (byte *)param_1[2];
        uVar4 = param_1[3];
        pbVar2 = (byte *)param_1[0xb];
      }
      uVar5 = recovered_1000db1c(param_1,(byte *)param_1[0xc],pbVar2,uVar3,(uint)pbVar6,uVar4,
                                 param_1[4]);
    }
    return uVar5;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a14
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a14
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df20
 */

void recovered_1000df20(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (int *)0x0) {
    return;
  }
  recovered_1000db1c(param_1,(byte *)param_1[0xc],(byte *)param_1[0xb],param_1[1],param_1[2],
                     param_1[3],param_1[4]);
  return;
}


#undef DAT_100142a4
#define DAT_100142a4 (*(uint *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df60
 */

void recovered_1000df60(int *param_1,byte *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_3 == (uint *)0x0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    uVar1 = 0xf6f6f6;
    if (DAT_100143c8 != '\0') {
      uVar1 = DAT_100142a4;
    }
  }
  else {
    uVar1 = param_1[4];
  }
  recovered_1000db1c(param_1,param_2,(byte *)param_3[3],*param_3,param_3[1],param_3[2],uVar1);
  return;
}

#undef DAT_100142a4
#undef DAT_100143c8

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
 * Address: 0x1000dfd4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000dfd4(int *param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2 = 0;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;

  if (param_1 == (int *)0x0 || param_3 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    param_4 = *param_1;
  }
  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar9 = (uint)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20);
  if (!(uVar9 == 0 && (0x3fffffff < (uint)((ulonglong)param_2 * (ulonglong)param_3)) <= uVar9)) {
    if (param_2 < param_3) {
      uVar15 = recovered_100054ac((uint)((ulonglong)param_3 * 0x3fffffff),
                                  (uint)((ulonglong)param_3 * 0x3fffffff >> 0x20),param_2,0);
      uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
      uVar9 = 0x40000000;
      uVar10 = 0;
      do {
        uVar8 = uVar10;
        uVar4 = uVar9;
        uVar9 = uVar4 >> 2;
        uVar10 = uVar8 >> 2 | uVar4 << 0x1e;
      } while (uVar6 <= uVar4 && (uint)(uVar8 <= (uint)uVar15) <= uVar6 - uVar4);
      uVar9 = 0;
      if (uVar8 != 0 || uVar4 != 0) {
        uVar10 = 0;
        do {
          uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
          uVar6 = (uint)uVar15;
          uVar7 = uVar9 + uVar8;
          uVar12 = uVar10 + uVar4 + (uint)CARRY4(uVar9,uVar8);
          bVar2 = (byte)uVar10;
          uVar10 = uVar10 >> 1;
          uVar9 = (uint)(bVar2 & 1) << 0x1f | uVar9 >> 1;
          bVar14 = CARRY4(uVar9,uVar8);
          uVar11 = uVar9 + uVar8;
          uVar8 = uVar8 >> 2 | uVar4 << 0x1e;
          if (uVar12 < uVar3 || uVar3 - uVar12 < (uint)(uVar7 <= uVar6)) {
            uVar9 = uVar11;
            uVar10 = uVar10 + uVar4 + (uint)bVar14;
            uVar15 = CONCAT44(uVar3 - (uVar12 + (uVar7 > uVar6)),uVar6 - uVar7);
          }
          uVar6 = uVar4 >> 2;
          uVar4 = uVar4 >> 2;
        } while (uVar8 != 0 || uVar6 != 0);
      }
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uVar15 = recovered_100054ac((uint)((ulonglong)param_2 * (ulonglong)uVar9),
                                  (uint)((ulonglong)param_2 * (ulonglong)uVar9 >> 0x20),param_3,0);
      param_2 = 1;
      if (1 < (uint)uVar15) {
        param_2 = (uint)uVar15;
      }
    }
    else {
      uVar15 = recovered_100054ac((uint)((ulonglong)param_2 * 0x3fffffff),
                                  (uint)((ulonglong)param_2 * 0x3fffffff >> 0x20),param_3,0);
      uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
      uVar9 = 0;
      uVar10 = 0x40000000;
      do {
        uVar4 = uVar10;
        uVar8 = uVar9;
        uVar9 = uVar8 >> 2 | uVar4 << 0x1e;
        uVar10 = uVar4 >> 2;
      } while (uVar6 <= uVar4 && (uint)(uVar8 <= (uint)uVar15) <= uVar6 - uVar4);
      uVar9 = 0;
      uVar10 = 0;
      if (uVar8 != 0 || uVar4 != 0) {
        do {
          uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
          uVar6 = (uint)uVar15;
          uVar11 = uVar10 + uVar8;
          uVar7 = uVar9 + uVar4 + (uint)CARRY4(uVar10,uVar8);
          bVar2 = (byte)uVar9;
          uVar9 = uVar9 >> 1;
          uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
          bVar14 = CARRY4(uVar10,uVar8);
          uVar12 = uVar10 + uVar8;
          uVar8 = uVar8 >> 2 | uVar4 << 0x1e;
          if (uVar7 < uVar3 || uVar3 - uVar7 < (uint)(uVar11 <= uVar6)) {
            uVar10 = uVar12;
            uVar9 = uVar9 + uVar4 + (uint)bVar14;
            uVar15 = CONCAT44(uVar3 - (uVar7 + (uVar11 > uVar6)),uVar6 - uVar11);
          }
          uVar6 = uVar4 >> 2;
          uVar4 = uVar4 >> 2;
        } while (uVar8 != 0 || uVar6 != 0);
      }
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      uVar15 = recovered_100054ac((uint)((ulonglong)param_3 * (ulonglong)uVar10),
                                  (uint)((ulonglong)param_3 * (ulonglong)uVar10 >> 0x20),param_2,0);
      param_2 = uVar10;
      uVar9 = 1;
      if (1 < (uint)uVar15) {
        uVar9 = (uint)uVar15;
      }
    }
    uVar10 = (uint)((ulonglong)uVar9 * (ulonglong)param_2 >> 0x20);
    param_3 = uVar9;
    if (uVar10 != 0 || uVar10 < (0x3fffffff < (uint)((ulonglong)uVar9 * (ulonglong)param_2))) {
      if (param_2 < uVar9) {
        uVar9 = recovered_10003d50(0x3fffffff,param_2);
      }
      else {
        param_2 = recovered_10003d50(0x3fffffff,uVar9);
      }
      param_3 = uVar9;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 + 0xc0000000 < 0xc0000001) {
    return 0;
  }
  if ((uint)((uint)((ulonglong)param_3 * (ulonglong)param_2) < 0x40000000) <=
      (uint)-(int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20)) {
    return 0;
  }
  lVar1 = (ulonglong)param_3 * (ulonglong)(param_2 * 4);
  uVar9 = (uint)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    return 0;
  }
  uVar10 = param_1[1];
  bVar14 = true;
  uVar6 = param_1[10];
  bVar13 = uVar10 == param_2;
  if (bVar13) {
    uVar10 = param_1[2];
  }
  if (bVar13 && uVar10 == param_3) {
    bVar14 = param_1[3] + param_2 * -4 != 0;
  }
  iVar5 = param_1[0xb];
  if (uVar9 <= uVar6) {
    if (iVar5 != 0) goto LAB_1000e290;
    iVar5 = 0;
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
  iVar5 = (*_DAT_40010854)(iVar5,uVar9);
  if (iVar5 == 0) {
    return 0;
  }
  param_1[10] = uVar9;
  param_1[0xb] = iVar5;
  param_1[9] = param_1[9] | 1;
  if (uVar6 < uVar9) {
    recovered_10006080((void *)(iVar5 + uVar6),0,uVar9 - uVar6);
    iVar5 = extraout_r2;
  }
  param_1[0xe] = 0;
LAB_1000e290:
  if (bVar14) {
    iVar5 = 0;
  }
  param_1[3] = param_2 * 4;
  param_1[2] = param_3;
  param_1[1] = param_2;
  if (bVar14) {
    param_1[0xe] = iVar5;
  }
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e378
 */

void recovered_1000e378(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    uVar2 = 0;
    uVar1 = param_1[1];
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x50);
    uVar2 = *(uint *)(param_2 + 0x54);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
    }
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_2 + 0x1c);
    }
    if (uVar1 == 0) {
      uVar1 = param_1[1];
    }
  }
  if (uVar2 == 0) {
    uVar2 = param_1[2];
  }
  recovered_1000dfd4(param_1,uVar1,uVar2,param_2);
  return;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
#define auStack_290 (*(undefined1 (*)[656])(pf_stack_frame + 16))
#define iStack_270 (*(int *)(pf_stack_frame + 48))
#define iStack_26c (*(int *)(pf_stack_frame + 52))
#define local_278 (*(uint *)(pf_stack_frame + 40))
#define local_274 (*(uint *)(pf_stack_frame + 44))
#define local_250 (*(uint *)(pf_stack_frame + 80))
#define local_24c (*(uint *)(pf_stack_frame + 84))
#define local_248 (*(int *)(pf_stack_frame + 88))
#define local_244 (*(uint *)(pf_stack_frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e3c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000e3c8(int *param_1,void *param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 == (int *)0x0 || param_4 == 0) {
    return 0;
  }
  if (param_1[0xf] == 0) {
    recovered_10006080(auStack_290,0,0x278);
    if (_DAT_40010800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_40010804 == 0) {
      return 0;
    }
    if (_DAT_40010808 < 0xb8) {
      return 0;
    }
    if (_DAT_400108b4 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_400108b4)(*param_1,auStack_290);
    if (iVar2 == 0) {
      return 0;
    }
    recovered_100058f0(param_1 + 0x10,auStack_290,0x278);
    param_1[0xf] = 1;
    param_1[1] = local_278;
    param_1[2] = local_274;
    param_1[3] = iStack_270;
    param_1[4] = iStack_26c;
    if (local_250 == 0xffffffff) {
      uVar3 = 0xf;
    }
    else {
      if (0xfe < local_250) {
        local_250 = 0xff;
      }
      uVar3 = (local_250 * 100 + 0x7f) * 0x8081 >> 0x17;
    }
    uVar4 = 0;
    param_1[5] = uVar3;
    uVar3 = 0;
    if (local_24c != 0xffffffff) {
      if (0xfe < local_24c) {
        local_24c = 0xff;
      }
      uVar3 = (local_24c * 100 + 0x7f) * 0x8081 >> 0x17;
    }
    if (local_278 < local_274) {
      local_274 = local_278;
    }
    param_1[6] = uVar3;
    if (4 < local_248 + 1U) {
      local_248 = -1;
    }
    param_1[7] = local_248;
    uVar3 = local_274 * 100 + 0x32;
    if (99 < uVar3) {
      lVar1 = (ulonglong)local_244 * 100 + (ulonglong)(uVar3 / 200);
      uVar5 = recovered_100054ac((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),uVar3 / 100,0);
      uVar4 = 100;
      if ((uint)uVar5 < 100) {
        uVar4 = (uint)uVar5;
      }
    }
    param_1[8] = uVar4;
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_100058f0(param_2,auStack_290,0x278);
  }
  else {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_100058f0(param_2,param_1 + 0x10,0x278);
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b4
#undef auStack_290
#undef iStack_270
#undef iStack_26c
#undef local_278
#undef local_274
#undef local_250
#undef local_24c
#undef local_248
#undef local_244

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5fc
 */

void recovered_1000e5fc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e60c
 */

byte recovered_1000e60c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0) {
    return 1;
  }
  bVar1 = *(byte *)(param_1 + 0x28) & 0x11;
  if ((*(byte *)(param_1 + 0x28) & 0x11) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e628
 */

void recovered_1000e628(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  recovered_10006080(param_1,0,0x18);
  return;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e63c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000e63c(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  recovered_10006080(param_1,0,0x18);
  while ((((_DAT_40010800 == 0x50414d57 && (_DAT_40010804 != 0)) && (0x2f < _DAT_40010808)) &&
         ((_DAT_4001082c != (code *)0x0 && (uVar1 = (*_DAT_4001082c)(), uVar1 != 0))))) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if ((uVar1 & 0xff) - 0x20 < 0x5f) {
      *(uint *)(param_1 + 0x10) = uVar1 & 0xff;
    }
    switch((uintptr_t)(uVar1 & 0xff)) {
    case 8:
    case 0x7f:
      param_1[4] = 1;
      break;
    case 10:
    case 0xd:
      param_1[5] = 1;
      break;
    case 0x1b:
      param_1[6] = 1;
      break;
    case 0x41:
    case 0x61:
      param_1[7] = 1;
      break;
    case 0x44:
    case 100:
      param_1[8] = 1;
      break;
    case 0x51:
    case 0x71:
      param_1[9] = 1;
      break;
    case 0x52:
    case 0x72:
      param_1[10] = 1;
      break;
    case 0x53:
    case 0x73:
      param_1[0xb] = 1;
      break;
    case 0x57:
    case 0x77:
      param_1[0xc] = 1;
    }
    uVar1 = uVar1 >> 8 & 0xff;
    if (uVar1 < 0x48) {
      if (uVar1 == 1) {
        param_1[6] = 1;
      }
      else if (uVar1 == 0xe) {
        param_1[4] = 1;
      }
      else if (uVar1 == 0x1c) {
        param_1[5] = 1;
      }
    }
    else {
      switch((uintptr_t)(uVar1)) {
      case 0x48:
        *param_1 = 1;
        break;
      case 0x4b:
        param_1[2] = 1;
        break;
      case 0x4d:
        param_1[3] = 1;
        break;
      case 0x50:
        param_1[1] = 1;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x14);
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c

#define local_25c (*(uint *)(pf_stack_frame + 68))
#define auStack_284 (*(undefined1 (*)[644])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9c4
 */

bool recovered_1000e9c4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;

  iVar1 = recovered_1000e3c8(param_1,auStack_284,param_3,param_4);
  bVar2 = (byte)(local_25c & 0x11);
  if ((local_25c & 0x11) != 0) {
    bVar2 = 1;
  }
  return (bool)(iVar1 == 0 | bVar2);
}

#undef local_25c
#undef auStack_284

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_400108a8
#define DAT_400108a8 (*(uint8_t *)(0x400108a8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_400108a8
#define _DAT_400108a8 (*(code * *)(0x400108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000e9f8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  bool bVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xab < _DAT_40010808)) &&
       (_DAT_400108a8 != (code *)0x0)) {
      uVar2 = (*_DAT_400108a8)(*param_1);
    }
  }
  uVar1 = (uint)*(byte *)(param_1 + 9);
  bVar3 = (*(byte *)(param_1 + 9) & 1) != 0;
  if (bVar3) {
    uVar1 = param_1[0xb];
  }
  if (((bVar3 && uVar1 != 0) && (_DAT_40010800 == 0x50414d57)) &&
     ((_DAT_40010804 != 0 && ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))))) {
    (*_DAT_40010850)(uVar1);
  }
  recovered_10006080(param_1,0,0x340);
  return uVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_400108a8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_400108a8

#undef DAT_100135c7
#define DAT_100135c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a08
#define DAT_40010a08 (*(uint8_t *)(0x40010a08U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010a08
#define _DAT_40010a08 (*(code * *)(0x40010a08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000eb08(int *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    puVar3 = &DAT_100135c7;
    if (param_2 != (undefined *)0x0) {
      puVar3 = param_2;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x20b < _DAT_40010808)) &&
       (_DAT_40010a08 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000eb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*_DAT_40010a08)(iVar1,puVar3);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_100135c7
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a08
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a08

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000eb84(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = 100;
    if ((uint)param_1[6] < 100) {
      uVar2 = param_1[6];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
       (_DAT_40010960 != (code *)0x0)) {
      iVar1 = (*_DAT_40010960)(param_4,(param_2 * 0xff + 0x32) * 0x147b >> 0x13,
                               (uVar2 * 0xff + 0x32) * 0x147b >> 0x13);
      if (iVar1 != 0) {
        param_1[6] = uVar2;
        param_1[5] = param_2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010960
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010960

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ec60(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = 100;
    if ((uint)param_1[5] < 100) {
      uVar2 = param_1[5];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x163 < _DAT_40010808)) &&
       (_DAT_40010960 != (code *)0x0)) {
      iVar1 = (*_DAT_40010960)(param_4,(uVar2 * 0xff + 0x32) * 0x147b >> 0x13,
                               (param_2 * 0xff + 0x32) * 0x147b >> 0x13);
      if (iVar1 != 0) {
        param_1[6] = param_2;
        param_1[5] = uVar2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010960
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010960

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed3c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ed3c(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != (int *)0x0) {
    param_2 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_2 != 0) {
    if (_DAT_40010800 != 0x50414d57) {
      return false;
    }
    if (((_DAT_40010804 != 0) && (0x167 < _DAT_40010808)) && (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_2,0,0);
      if (iVar1 != 0) {
        param_1[8] = 0;
        param_1[7] = 0;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edd4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000edd4(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != (int *)0x0) {
    param_2 = *param_1;
  }
  if ((((param_1 != (int *)0x0 && param_2 != 0) && (_DAT_40010800 == 0x50414d57)) &&
      (_DAT_40010804 != 0)) && ((0x167 < _DAT_40010808 && (_DAT_40010964 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010964)(param_2,1,0);
    if (iVar1 != 0) {
      param_1[7] = 1;
      param_1[8] = 0;
    }
    return iVar1 != 0;
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ee70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ee70(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar2 = param_1[1];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_4,2,(uVar2 * param_2 + 0x32) / 100);
      if (iVar1 != 0) {
        param_1[8] = param_2;
        param_1[7] = 2;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef48
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000ef48(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar2 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar2 = param_1[1];
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar1 = (*_DAT_40010964)(param_4,3,(uVar2 * param_2 + 0x32) / 100);
      if (iVar1 != 0) {
        param_1[8] = param_2;
        param_1[7] = 3;
      }
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010964

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010900
#define DAT_40010900 (*(uint8_t *)(0x40010900U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010900
#define _DAT_40010900 (*(code * *)(0x40010900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f020(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 != (int *)0x0) {
    if (param_2 != 0) {
      param_1 = (int *)*param_1;
    }
    if ((((param_2 != 0 && param_1 != (int *)0x0) && (_DAT_40010800 == 0x50414d57)) &&
        (_DAT_40010804 != 0)) && ((0x103 < _DAT_40010808 && (_DAT_40010900 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000f088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*_DAT_40010900)();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010900
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010900

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a30
#define DAT_40010a30 (*(uint8_t *)(0x40010a30U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010a30
#define _DAT_40010a30 (*(code * *)(0x40010a30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f08c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f08c(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 != (int *)0x0) {
    if (param_2 != 0) {
      param_1 = (int *)*param_1;
    }
    if ((((param_2 != 0 && param_1 != (int *)0x0) && (_DAT_40010800 == 0x50414d57)) &&
        (_DAT_40010804 != 0)) && ((0x233 < _DAT_40010808 && (_DAT_40010a30 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*_DAT_40010a30)();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a30
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a30

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010a34
#define DAT_40010a34 (*(uint8_t *)(0x40010a34U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010a34
#define _DAT_40010a34 (*(code * *)(0x40010a34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f0f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f0f8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if ((((param_1 != (int *)0x0 && iVar1 != 0) && (_DAT_40010800 == 0x50414d57)) &&
      (_DAT_40010804 != 0)) && ((0x237 < _DAT_40010808 && (_DAT_40010a34 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000f158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*_DAT_40010a34)();
    return uVar2;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a34
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010a34

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f15c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f15c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) &&
     (_DAT_400108b0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001097c
#define DAT_4001097c (*(uint8_t *)(0x4001097cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001097c
#define _DAT_4001097c (*(code * *)(0x4001097cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f1c4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17f < _DAT_40010808)) &&
     (_DAT_4001097c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_4001097c)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001097c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001097c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108ac
#define DAT_400108ac (*(uint8_t *)(0x400108acU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108ac
#define _DAT_400108ac (*(code * *)(0x400108acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f218
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f218(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xaf < _DAT_40010808)) &&
     (_DAT_400108ac != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108ac)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108ac
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108ac

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108f0
#define DAT_400108f0 (*(uint8_t *)(0x400108f0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108f0
#define _DAT_400108f0 (*(code * *)(0x400108f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f26c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f26c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xf3 < _DAT_40010808)) &&
     (_DAT_400108f0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108f0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108f0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108f0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108fc
#define DAT_400108fc (*(uint8_t *)(0x400108fcU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108fc
#define _DAT_400108fc (*(code * *)(0x400108fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f2c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f2c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xff < _DAT_40010808)) &&
     (_DAT_400108fc != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000f324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_400108fc)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108fc
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108fc

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f328
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f328(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) &&
     (_DAT_400108b0 != (code *)0x0)) {
    uVar1 = (*_DAT_400108b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f39c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f39c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) &&
     (_DAT_400108b0 != (code *)0x0)) {
    uVar1 = (*_DAT_400108b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f40c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000f40c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;

  while( true ) {
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x30)) ||
       ((_DAT_4001082c == (code *)0x0 || (uVar1 = (*_DAT_4001082c)(), uVar1 == 0)))) {
      return 0;
    }
    uVar2 = uVar1 & 0xff00;
    bVar3 = uVar2 == 0x100;
    if (!bVar3) {
      uVar2 = uVar1 & 0xdf;
    }
    if (bVar3 || uVar2 == 0x51) break;
    if ((uVar1 & 0xff) == 0x1b) {
      return 1;
    }
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef DAT_40010974
#define DAT_40010974 (*(uint8_t *)(0x40010974U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
#undef _DAT_40010974
#define _DAT_40010974 (*(code * *)(0x40010974U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f498
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000f498(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != 0) {
    do {
      uVar2 = 0x20c49b;
      if (param_1 < 0x20c49b) {
        uVar2 = param_1;
      }
      if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x178)) ||
         ((_DAT_40010974 == (code *)0x0 || (iVar1 = (*_DAT_40010974)(uVar2 * 2000), iVar1 == 0)))) {
        if (_DAT_40010800 != 0x50414d57) {
          return;
        }
        if (_DAT_40010804 == 0) {
          return;
        }
        if (_DAT_40010808 < 0xa0) {
          return;
        }
        if (_DAT_4001089c == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x1000f574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_DAT_4001089c)();
        return;
      }
      param_1 = param_1 - uVar2;
    } while (param_1 != 0);
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef DAT_40010974
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c
#undef _DAT_40010974

#undef DAT_100142b8
#define DAT_100142b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd20U)))
#undef DAT_100142bc
#define DAT_100142bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd24U)))
#undef DAT_100142c4
#define DAT_100142c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd2cU)))
#undef DAT_100142c8
#define DAT_100142c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd30U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
#define local_94 (*(int *)(pf_stack_frame + 28))
#define local_88 (*(uint *)(pf_stack_frame + 40))
#define local_84 (*(int *)(pf_stack_frame + 44))
#define local_78 (*(uint *)(pf_stack_frame + 56))
#define local_74 (*(int *)(pf_stack_frame + 60))
#define local_68 (*(int *)(pf_stack_frame + 72))
#define local_64 (*(int *)(pf_stack_frame + 76))
#define local_60 (*(int *)(pf_stack_frame + 80))
#define local_5c (*(int *)(pf_stack_frame + 84))
#define local_58 (*(int *)(pf_stack_frame + 88))
#define local_48 (*(int *)(pf_stack_frame + 104))
#define local_44 (*(int *)(pf_stack_frame + 108))
#define iStack_90 (*(int *)(pf_stack_frame + 32))
#define local_40 (*(uint *)(pf_stack_frame + 112))
#define local_3c (*(int *)(pf_stack_frame + 116))
#define uStack_8c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(uint *)(pf_stack_frame + 120))
#define local_34 (*(undefined4 *)(pf_stack_frame + 124))
#define iStack_80 (*(int *)(pf_stack_frame + 48))
#define local_30 (*(undefined4 *)(pf_stack_frame + 128))
#define local_2c (*(undefined4 *)(pf_stack_frame + 132))
#define uStack_7c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 136))
#define local_24 (*(int *)(pf_stack_frame + 140))
#define iStack_70 (*(int *)(pf_stack_frame + 64))
#define iStack_6c (*(int *)(pf_stack_frame + 68))
#define auStack_54 (*(undefined4 (*)[21])(pf_stack_frame + 92))
#define iStack_4c (*(int *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f578
 */

void recovered_1000f578(int param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_r4;
  uint uVar5;
  int unaff_r9;

  if (param_1 == 0 || param_2 == (uint *)0x0) {
    return;
  }
  local_44 = *(int *)(param_1 + 0x2c);
  if (local_44 != 0) {
    uVar4 = param_2[3];
    uVar5 = uVar4;
    if (0 < (int)uVar4) {
      uVar5 = param_2[4];
      unaff_r4 = uVar5;
    }
    if ((0 < (int)uVar5) && (uVar5 = *param_2, uVar5 < 2)) {
      local_40 = *(uint *)(param_1 + 4);
      if (-1 < (int)local_40) {
        unaff_r9 = *(int *)(param_1 + 8);
      }
      if ((-1 < (int)local_40 && -1 < unaff_r9) &&
         (local_38 = *(uint *)(param_1 + 0xc),
         -(local_40 >> 0x1e) < (uint)(local_40 << 2 <= local_38))) {
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_3c = unaff_r9;
        local_28 = local_40;
        local_24 = unaff_r9;
        recovered_1000f890(auStack_54,param_2[1],param_2[2],uVar4,unaff_r4,uVar5,param_3);
        piVar1 = &iStack_4c;
        if (uVar5 == 1) {
          piVar1 = &local_48;
        }
        iVar2 = *piVar1;
        recovered_1000f890(&local_64,param_2[5],param_2[6],param_2[7],param_2[8],uVar5,param_3);
        recovered_1000f890(&local_74,param_2[0x11],param_2[0x12],param_2[0x13],param_2[0x14],uVar5,
                           param_3);
        recovered_1000f890(&local_84,param_2[9],param_2[10],param_2[0xb],param_2[0xc],uVar5,param_3)
        ;
        recovered_1000f890(&local_94,param_2[0xd],param_2[0xe],param_2[0xf],param_2[0x10],uVar5,
                           param_3);
        uVar3 = DAT_100142b8;
        if (DAT_100143c8 == '\0') {
          uVar3 = 0xe4e4e4;
        }
        recovered_1000f990(&local_44,local_64,local_60,local_5c,local_58,uVar3);
        uVar3 = DAT_100142c4;
        if (DAT_100143c8 == '\0') {
          uVar3 = 0xacacac;
        }
        recovered_1000fb0c(&local_44,local_64,local_60,local_5c,local_58,uVar3);
        uVar3 = DAT_100142bc;
        if (DAT_100143c8 == '\0') {
          uVar3 = 0xbebebe;
        }
        uVar5 = (uint)(2 < iVar2);
        recovered_1000f990(&local_44,local_74 + uVar5,iStack_70 + uVar5,iStack_6c + uVar5 * -2,
                           local_68 + uVar5 * -2,uVar3);
        uVar3 = DAT_100142c8;
        if (DAT_100143c8 == '\0') {
          uVar3 = 0x747474;
        }
        recovered_1000fb0c(&local_44,local_74,iStack_70,iStack_6c,local_68,uVar3);
        recovered_10010090(&local_44,local_84,iStack_80,uStack_7c,local_78,*param_2,1);
        recovered_10010090(&local_44,local_94,iStack_90,uStack_8c,local_88,*param_2,0);
      }
    }
  }
  return;
}

#undef DAT_100142b8
#undef DAT_100142bc
#undef DAT_100142c4
#undef DAT_100142c8
#undef DAT_100143c8
#undef local_94
#undef local_88
#undef local_84
#undef local_78
#undef local_74
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_48
#undef local_44
#undef iStack_90
#undef local_40
#undef local_3c
#undef uStack_8c
#undef local_38
#undef local_34
#undef iStack_80
#undef local_30
#undef local_2c
#undef uStack_7c
#undef local_28
#undef local_24
#undef iStack_70
#undef iStack_6c
#undef auStack_54
#undef iStack_4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f890
 */

void recovered_1000f890(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                       int param_6,uint param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_6 == 1) {
    if (param_5 < 3) {
      uVar2 = 0;
      if (0 < param_5) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = (param_5 + 2U) / 5;
    }
    if (0x1f < param_7) {
      param_7 = 0x20;
    }
    iVar1 = param_3 + param_5;
    param_5 = uVar2 + ((param_5 - uVar2) *
                       (param_7 * 0x20 * param_7 * 0x20 * (param_7 * -0x40 + 0xc00) + 0x80000 >>
                       0x14) + 0x200 >> 10);
    param_3 = iVar1 - param_5;
  }
  else {
    if (param_4 < 3) {
      uVar2 = 0;
      if (0 < param_4) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = (param_4 + 2U) / 5;
    }
    if (0x1f < param_7) {
      param_7 = 0x20;
    }
    param_4 = uVar2 + ((param_4 - uVar2) *
                       (param_7 * 0x20 * param_7 * 0x20 * (param_7 * -0x40 + 0xc00) + 0x80000 >>
                       0x14) + 0x200 >> 10);
  }
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f990
 */

void recovered_1000f990(int *surface,int x,int y,int width,int height,unsigned color)
{
 if(!surface || !surface[0] || width<=0 || height<=0)return;
 int right=(int)((unsigned)x+(unsigned)width),bottom=(int)((unsigned)y+(unsigned)height);
 int clip_right=(int)((unsigned)surface[5]+(unsigned)surface[7]);
 int clip_bottom=(int)((unsigned)surface[6]+(unsigned)surface[8]);
 if(x<surface[5])x=surface[5];if(y<surface[6])y=surface[6];
 if(right>clip_right)right=clip_right;if(bottom>clip_bottom)bottom=clip_bottom;
 if(right<=x || bottom<=y)return;
 for(int row=y;row<bottom;row++)for(int column=x;column<right;column++){
  unsigned char *pixel=(unsigned char *)(uintptr_t)(unsigned)surface[0]+(intptr_t)row*surface[3]+(intptr_t)column*4;
  pixel[0]=color>>16;pixel[1]=color>>8;pixel[2]=color;pixel[3]=255;
 }
}


#define local_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fb0c
 */

void recovered_1000fb0c(int *param_1,int param_2,int param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 uVar8;
  undefined1 uVar7;
  undefined1 uVar6;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  bool bVar23;
  bool bVar24;
  undefined1 *puVar25;
  longlong lVar26;

  if (param_4 < 1) {
    return;
  }
  if ((0 < param_5) && (param_1 != (int *)0x0)) {
    iVar16 = param_1[6];
    iVar13 = param_2 + param_4;
    iVar14 = param_1[5];
    iVar12 = *param_1;
    iVar18 = param_1[8] + iVar16;
    iVar15 = iVar16;
    if (iVar16 < param_3) {
      iVar15 = param_3;
    }
    iVar21 = param_1[7] + iVar14;
    iVar10 = iVar14;
    if (iVar14 < param_2) {
      iVar10 = param_2;
    }
    iVar20 = param_3 + 1;
    if (iVar18 <= param_3 + 1) {
      iVar20 = iVar18;
    }
    local_2c = iVar21;
    if (iVar13 < iVar21) {
      local_2c = iVar13;
    }
    uVar6 = (undefined1)param_6;
    uVar7 = (undefined1)((uint)param_6 >> 8);
    uVar8 = (undefined1)((uint)param_6 >> 0x10);
    if (((iVar15 < iVar20) && (iVar10 < local_2c)) && (iVar12 != 0)) {
      uVar9 = local_2c - iVar10;
      uVar17 = uVar9 & 0xfffffff0;
      do {
        puVar22 = (undefined1 *)(param_1[3] * iVar15 + *param_1 + iVar10 * 4);
        if (uVar9 < 0x10) {
          iVar14 = iVar10;
LAB_1000fc7c:
          iVar14 = local_2c - iVar14;
          do {
            puVar22[3] = 0xff;
            iVar14 = iVar14 + -1;
            puVar22[2] = uVar6;
            puVar22[1] = uVar7;
            *puVar22 = uVar8;
            puVar22 = puVar22 + 4;
          } while (iVar14 != 0);
        }
        else {
          puVar11 = (undefined1 *)(param_1[3] * iVar15 + *param_1 + iVar10 * 4);
          puVar22 = puVar22 + uVar17 * 4;
          uVar19 = uVar17;
          do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar11+lane*4;pixel[0]=uVar8;pixel[1]=uVar7;pixel[2]=uVar6;pixel[3]=255;}
              puVar11+=64;uVar19-=16;
            } while (uVar19 != 0);
          iVar14 = iVar10 + uVar17;
          if (uVar9 != uVar17) goto LAB_1000fc7c;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar20);
      iVar14 = param_1[5];
      iVar16 = param_1[6];
      iVar21 = param_1[7] + iVar14;
      iVar18 = param_1[8] + iVar16;
      iVar12 = *param_1;
      iVar10 = iVar14;
      if (iVar14 < param_2) {
        iVar10 = param_2;
      }
      local_2c = iVar21;
      if (iVar13 < iVar21) {
        local_2c = iVar13;
      }
    }
    iVar15 = param_3 + param_5;
    if (iVar15 < iVar18) {
      iVar18 = iVar15;
    }
    iVar20 = iVar15 + -1;
    if (iVar15 + -1 <= iVar16) {
      iVar20 = iVar16;
    }
    bVar24 = SBORROW4(iVar18,iVar20);
    iVar5 = iVar18 - iVar20;
    bVar23 = iVar18 == iVar20;
    if (iVar20 < iVar18) {
      bVar24 = SBORROW4(local_2c,iVar10);
      iVar5 = local_2c - iVar10;
      bVar23 = local_2c == iVar10;
    }
    if ((!bVar23 && iVar5 < 0 == bVar24) && (iVar12 != 0)) {
      uVar9 = local_2c - iVar10;
      uVar17 = uVar9 & 0xfffffff0;
      do {
        puVar22 = (undefined1 *)(param_1[3] * iVar20 + *param_1 + iVar10 * 4);
        if (uVar9 < 0x10) {
          iVar14 = iVar10;
LAB_1000fdc8:
          iVar14 = local_2c - iVar14;
          do {
            puVar22[3] = 0xff;
            iVar14 = iVar14 + -1;
            puVar22[2] = uVar6;
            puVar22[1] = uVar7;
            *puVar22 = uVar8;
            puVar22 = puVar22 + 4;
          } while (iVar14 != 0);
        }
        else {
          puVar11 = (undefined1 *)(param_1[3] * iVar20 + *param_1 + iVar10 * 4);
          puVar22 = puVar22 + uVar17 * 4;
          uVar19 = uVar17;
          do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar11+lane*4;pixel[0]=uVar8;pixel[1]=uVar7;pixel[2]=uVar6;pixel[3]=255;}
              puVar11+=64;uVar19-=16;
            } while (uVar19 != 0);
          iVar14 = iVar10 + uVar17;
          if (uVar9 != uVar17) goto LAB_1000fdc8;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar18);
      iVar14 = param_1[5];
      iVar16 = param_1[6];
      iVar12 = *param_1;
      iVar10 = iVar14;
      if (iVar14 < param_2) {
        iVar10 = param_2;
      }
      iVar21 = param_1[7] + iVar14;
      iVar18 = param_1[8] + iVar16;
      if (iVar15 < param_1[8] + iVar16) {
        iVar18 = iVar15;
      }
    }
    if (iVar16 < param_3) {
      iVar16 = param_3;
    }
    iVar20 = param_2 + 1;
    if (iVar21 <= param_2 + 1) {
      iVar20 = iVar21;
    }
    bVar24 = SBORROW4(iVar18,iVar16);
    iVar5 = iVar18 - iVar16;
    bVar23 = iVar18 == iVar16;
    if (iVar16 < iVar18) {
      bVar24 = SBORROW4(iVar20,iVar10);
      iVar5 = iVar20 - iVar10;
      bVar23 = iVar20 == iVar10;
    }
    if ((!bVar23 && iVar5 < 0 == bVar24) && (iVar12 != 0)) {
      uVar9 = iVar20 - iVar10;
      uVar17 = uVar9 & 0xfffffff0;
      do {
        puVar22 = (undefined1 *)(param_1[3] * iVar16 + *param_1 + iVar10 * 4);
        if (uVar9 < 0x10) {
          iVar14 = iVar10;
LAB_1000ff14:
          iVar14 = iVar20 - iVar14;
          do {
            puVar22[3] = 0xff;
            iVar14 = iVar14 + -1;
            puVar22[2] = uVar6;
            puVar22[1] = uVar7;
            *puVar22 = uVar8;
            puVar22 = puVar22 + 4;
          } while (iVar14 != 0);
        }
        else {
          puVar11 = (undefined1 *)(param_1[3] * iVar16 + *param_1 + iVar10 * 4);
          puVar22 = puVar22 + uVar17 * 4;
          uVar19 = uVar17;
          do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar11+lane*4;pixel[0]=uVar8;pixel[1]=uVar7;pixel[2]=uVar6;pixel[3]=255;}
              puVar11+=64;uVar19-=16;
            } while (uVar19 != 0);
          iVar14 = iVar10 + uVar17;
          if (uVar9 != uVar17) goto LAB_1000ff14;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar18);
      iVar10 = param_1[6];
      iVar14 = param_1[5];
      iVar16 = param_3;
      if (param_3 <= iVar10) {
        iVar16 = iVar10;
      }
      iVar12 = *param_1;
      iVar21 = param_1[7] + iVar14;
      iVar18 = param_1[8] + iVar10;
      if (iVar15 < param_1[8] + iVar10) {
        iVar18 = iVar15;
      }
    }
    if (iVar13 < iVar21) {
      iVar21 = iVar13;
    }
    if (iVar14 < iVar13 + -1) {
      iVar14 = iVar13 + -1;
    }
    bVar24 = SBORROW4(iVar18,iVar16);
    iVar15 = iVar18 - iVar16;
    bVar23 = iVar18 == iVar16;
    if (iVar16 < iVar18) {
      bVar24 = SBORROW4(iVar21,iVar14);
      iVar15 = iVar21 - iVar14;
      bVar23 = iVar21 == iVar14;
    }
    if ((!bVar23 && iVar15 < 0 == bVar24) && (iVar12 != 0)) {
      uVar17 = iVar21 - iVar14;
      uVar9 = uVar17 & 0xfffffff0;
      do {
        puVar22 = (undefined1 *)(param_1[3] * iVar16 + *param_1 + iVar14 * 4);
        if (uVar17 < 0x10) {
          iVar15 = iVar14;
LAB_10010068:
          iVar15 = iVar21 - iVar15;
          do {
            puVar22[3] = 0xff;
            iVar15 = iVar15 + -1;
            puVar22[2] = uVar6;
            puVar22[1] = uVar7;
            *puVar22 = uVar8;
            puVar22 = puVar22 + 4;
          } while (iVar15 != 0);
        }
        else {
          puVar11 = (undefined1 *)(param_1[3] * iVar16 + *param_1 + iVar14 * 4);
          puVar22 = puVar22 + uVar9 * 4;
          uVar19 = uVar9;
          do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar11+lane*4;pixel[0]=uVar8;pixel[1]=uVar7;pixel[2]=uVar6;pixel[3]=255;}
              puVar11+=64;uVar19-=16;
            } while (uVar19 != 0);
          iVar15 = iVar14 + uVar9;
          if (uVar17 != uVar9) goto LAB_10010068;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar18);
    }
  }
  return;
}

#undef local_2c

#undef DAT_100142c0
#define DAT_100142c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd28U)))
#undef DAT_100142cc
#define DAT_100142cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd34U)))
#undef DAT_100142d0
#define DAT_100142d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd38U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
#define local_50 (*(int *)(pf_stack_frame + 16))
#define local_4c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010090
 */

void recovered_10010090(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                       int param_7)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 uVar7;
  undefined1 uVar6;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  undefined1 *puVar31;
  longlong lVar32;

  cVar8 = DAT_100143c8;
  if ((int)param_4 < 1) {
    return;
  }
  if (0 < (int)param_5) {
    uVar12 = param_4;
    if (param_6 == 1) {
      uVar12 = param_5;
    }
    uVar25 = 4;
    if (uVar12 + 1 >> 1 < 4) {
      uVar25 = uVar12 + 1 >> 1;
    }
    uVar11 = 0xeeeeee;
    if (DAT_100143c8 != '\0') {
      uVar11 = DAT_100142c0;
    }
    if (param_1 != (int *)0x0) {
      iVar16 = param_1[6];
      iVar23 = param_1[5];
      iVar20 = param_1[8] + iVar16;
      if ((int)(param_3 + param_5) < param_1[8] + iVar16) {
        iVar20 = param_3 + param_5;
      }
      if (iVar16 < param_3) {
        iVar16 = param_3;
      }
      iVar17 = iVar23;
      if (iVar23 < param_2) {
        iVar17 = param_2;
      }
      iVar19 = param_1[7] + iVar23;
      if ((int)(param_2 + param_4) < param_1[7] + iVar23) {
        iVar19 = param_2 + param_4;
      }
      bVar30 = SBORROW4(iVar20,iVar16);
      iVar23 = iVar20 - iVar16;
      bVar29 = iVar20 == iVar16;
      if (iVar16 < iVar20) {
        bVar30 = SBORROW4(iVar19,iVar17);
        iVar23 = iVar19 - iVar17;
        bVar29 = iVar19 == iVar17;
      }
      if ((!bVar29 && iVar23 < 0 == bVar30) && (*param_1 != 0)) {
        uVar21 = iVar19 - iVar17;
        uVar13 = uVar21 & 0xfffffff0;
        do {
          puVar15 = (undefined1 *)(param_1[3] * iVar16 + *param_1 + iVar17 * 4);
          if (uVar21 < 0x10) {
            iVar23 = iVar17;
LAB_100106c0:
            iVar23 = iVar19 - iVar23;
            do {
              puVar15[3] = 0xff;
              iVar23 = iVar23 + -1;
              puVar15[2] = (char)uVar11;
              puVar15[1] = (char)((uint)uVar11 >> 8);
              *puVar15 = (char)((uint)uVar11 >> 0x10);
              puVar15 = puVar15 + 4;
            } while (iVar23 != 0);
          }
          else {
            puVar10 = (undefined1 *)(param_1[3] * iVar16 + *param_1 + iVar17 * 4);
            puVar15 = puVar15 + uVar13 * 4;
            uVar14 = uVar13;
            do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar10+lane*4;pixel[0]=(char)((uint)uVar11 >> 0x10);pixel[1]=(char)((uint)uVar11 >> 8);pixel[2]=(char)uVar11;pixel[3]=255;}
              puVar10+=64;uVar14-=16;
            } while (uVar14 != 0);
            iVar23 = iVar17 + uVar13;
            if (uVar21 != uVar13) goto LAB_100106c0;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != iVar20);
      }
    }
    uVar11 = DAT_100142cc;
    if (cVar8 == '\0') {
      uVar11 = 0x969696;
    }
    recovered_1000fb0c(param_1,param_2,param_3,param_4,param_5,uVar11);
    if (uVar12 != 0) {
      iVar20 = param_3 + (param_5 >> 1);
      iVar16 = param_2 + (param_4 >> 1);
      uVar12 = uVar25;
      if (uVar25 < 2) {
        uVar12 = 1;
      }
      iVar23 = -2;
      if (param_7 != 0) {
        iVar23 = -4;
      }
      iVar17 = iVar16 + iVar23;
      local_4c = param_2 + iVar23 + (param_4 >> 1);
      uVar21 = 0;
      local_50 = iVar17;
      do {
        local_4c = local_4c + 1;
        uVar11 = DAT_100142d0;
        if (cVar8 == '\0') {
          uVar11 = 0x464646;
        }
        uVar13 = uVar21;
        if (param_7 == 0) {
          uVar13 = uVar25 + ~uVar21;
        }
        uVar6 = (undefined1)((uint)uVar11 >> 8);
        uVar7 = (undefined1)((uint)uVar11 >> 0x10);
        if (param_6 == 1) {
          if (param_1 != (int *)0x0) {
            iVar28 = param_1[6];
            iVar26 = param_1[5];
            iVar18 = iVar20 - uVar13;
            iVar22 = iVar18 + uVar13 * 2 + 1;
            iVar9 = param_1[7] + iVar26;
            iVar19 = param_1[8] + iVar28;
            if (iVar22 < param_1[8] + iVar28) {
              iVar19 = iVar22;
            }
            if (iVar28 < iVar18) {
              iVar28 = iVar18;
            }
            iVar18 = iVar17 + uVar21;
            iVar22 = iVar26;
            if (iVar26 < iVar18) {
              iVar22 = iVar18;
            }
            iVar24 = iVar18 + 1;
            if (iVar9 <= iVar18 + 1) {
              iVar24 = iVar9;
            }
            bVar30 = SBORROW4(iVar19,iVar28);
            iVar5 = iVar19 - iVar28;
            bVar29 = iVar19 == iVar28;
            if (iVar28 < iVar19) {
              bVar30 = SBORROW4(iVar24,iVar22);
              iVar5 = iVar24 - iVar22;
              bVar29 = iVar24 == iVar22;
              iVar18 = iVar9;
            }
            if (((!bVar29 && iVar5 < 0 == bVar30) && (-1 < (int)uVar13)) && (*param_1 != 0)) {
              if (iVar26 <= local_50) {
                iVar26 = local_50;
              }
              if (local_4c < iVar18) {
                iVar18 = local_4c;
              }
              uVar13 = iVar24 - iVar22;
              uVar14 = uVar13 & 0xfffffff0;
              do {
                puVar15 = (undefined1 *)(param_1[3] * iVar28 + *param_1 + iVar22 * 4);
                if (uVar13 < 0x10) {
                  iVar9 = iVar22;
LAB_1001045c:
                  iVar9 = iVar18 - iVar9;
                  do {
                    puVar15[3] = 0xff;
                    iVar9 = iVar9 + -1;
                    puVar15[2] = (char)uVar11;
                    puVar15[1] = uVar6;
                    *puVar15 = uVar7;
                    puVar15 = puVar15 + 4;
                  } while (iVar9 != 0);
                }
                else {
                  puVar10 = (undefined1 *)(param_1[3] * iVar28 + *param_1 + iVar26 * 4);
                  puVar15 = puVar15 + uVar14 * 4;
                  uVar27 = iVar18 - iVar26 & 0xfffffff0;
                  do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar10+lane*4;pixel[0]=uVar7;pixel[1]=uVar6;pixel[2]=(char)uVar11;pixel[3]=255;}
              puVar10+=64;uVar27-=16;
            } while (uVar27 != 0);
                  iVar9 = iVar22 + uVar14;
                  if (uVar13 != uVar14) goto LAB_1001045c;
                }
                iVar28 = iVar28 + 1;
              } while (iVar28 != iVar19);
            }
          }
        }
        else if (param_1 != (int *)0x0) {
          iVar19 = param_1[6];
          iVar28 = param_1[5];
          iVar9 = iVar20 + iVar23 + uVar21;
          iVar26 = param_1[8] + iVar19;
          if (iVar9 + 1 < param_1[8] + iVar19) {
            iVar26 = iVar9 + 1;
          }
          if (iVar19 < iVar9) {
            iVar19 = iVar9;
          }
          iVar18 = iVar16 - uVar13;
          iVar9 = iVar28;
          if (iVar28 < iVar18) {
            iVar9 = iVar18;
          }
          iVar22 = iVar18 + uVar13 * 2 + 1;
          iVar18 = param_1[7] + iVar28;
          if (iVar22 < param_1[7] + iVar28) {
            iVar18 = iVar22;
          }
          bVar30 = SBORROW4(iVar26,iVar19);
          iVar28 = iVar26 - iVar19;
          bVar29 = iVar26 == iVar19;
          if (iVar19 < iVar26) {
            bVar30 = SBORROW4(iVar18,iVar9);
            iVar28 = iVar18 - iVar9;
            bVar29 = iVar18 == iVar9;
          }
          if (((!bVar29 && iVar28 < 0 == bVar30) && (-1 < (int)uVar13)) && (*param_1 != 0)) {
            uVar13 = iVar18 - iVar9;
            uVar14 = uVar13 & 0xfffffff0;
            do {
              puVar15 = (undefined1 *)(param_1[3] * iVar19 + *param_1 + iVar9 * 4);
              if (uVar13 < 0x10) {
                iVar28 = iVar9;
LAB_100105c4:
                iVar28 = iVar18 - iVar28;
                do {
                  puVar15[3] = 0xff;
                  iVar28 = iVar28 + -1;
                  puVar15[2] = (char)uVar11;
                  puVar15[1] = uVar6;
                  *puVar15 = uVar7;
                  puVar15 = puVar15 + 4;
                } while (iVar28 != 0);
              }
              else {
                puVar10 = (undefined1 *)(param_1[3] * iVar19 + *param_1 + iVar9 * 4);
                puVar15 = puVar15 + uVar14 * 4;
                uVar27 = uVar14;
                do {
                  uVar27 = uVar27 - 0x10;
                  puVar1 = (undefined1 *)0x3b0;
                  puVar2 = (undefined1 *)0x3c0;
                  puVar3 = (undefined1 *)0x3d0;
                  puVar4 = (undefined1 *)0x3e0;
                  lVar32 = 8;
                  puVar31 = puVar10;
                  while( true ) {
                    *puVar31 = *puVar1;
                    puVar31[1] = *puVar2;
                    puVar31[2] = *puVar3;
                    puVar31[3] = *puVar4;
                    puVar31 = puVar31 + 4;
                    lVar32 = lVar32 + -1;
                    if (lVar32 == 0) break;
                    puVar1 = puVar1 + 1;
                    puVar2 = puVar2 + 1;
                    puVar3 = puVar3 + 1;
                    puVar4 = puVar4 + 1;
                  }
                  puVar31 = puVar10 + 0x20;
                  puVar1 = (undefined1 *)0x3b8;
                  puVar2 = (undefined1 *)0x3c8;
                  puVar3 = (undefined1 *)0x3d8;
                  puVar4 = (undefined1 *)0x3e8;
                  lVar32 = 8;
                  while( true ) {
                    *puVar31 = *puVar1;
                    puVar31[1] = *puVar2;
                    puVar31[2] = *puVar3;
                    puVar31[3] = *puVar4;
                    puVar31 = puVar31 + 4;
                    lVar32 = lVar32 + -1;
                    if (lVar32 == 0) break;
                    puVar1 = puVar1 + 1;
                    puVar2 = puVar2 + 1;
                    puVar3 = puVar3 + 1;
                    puVar4 = puVar4 + 1;
                  }
                  puVar10 = puVar10 + 0x40;
                } while (uVar27 != 0);
                iVar28 = iVar9 + uVar14;
                if (uVar13 != uVar14) goto LAB_100105c4;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 != iVar26);
          }
        }
        uVar21 = uVar21 + 1;
        local_50 = local_50 + 1;
      } while (uVar21 != uVar12);
    }
  }
  return;
}

#undef DAT_100142c0
#undef DAT_100142cc
#undef DAT_100142d0
#undef DAT_100143c8
#undef local_50
#undef local_4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100106e8
 */

void recovered_100106e8(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[1] = param_2;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100106fc
 */

void recovered_100106fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010714
 */

void recovered_10010714(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[3] = param_2;
  param_1[2] = param_3;
  param_1[1] = param_2;
  *param_1 = param_3;
  return;
}


#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010728
 */

void recovered_10010728(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;

  recovered_10006080(param_1,0,0x4c);
  uVar2 = DAT_100142a8;
  uVar1 = DAT_100142a4;
  *(undefined4 *)((int)param_1 + 0x1c) = 1;
  *(undefined4 *)((int)param_1 + 0x28) = 1;
  bVar4 = DAT_100143c8 != '\0';
  uVar3 = 0x202020;
  if (bVar4) {
    uVar3 = uVar2;
  }
  *(undefined4 *)((int)param_1 + 0x20) = uVar3;
  uVar2 = 0xf6f6f6;
  if (bVar4) {
    uVar2 = uVar1;
  }
  *(undefined4 *)((int)param_1 + 0x24) = uVar2;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100107a0
 */

void recovered_100107a0(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  recovered_10006080(param_1,0,0x4c);
  uVar3 = DAT_100142a8;
  uVar1 = DAT_100142a4;
  param_1[7] = 1;
  param_1[10] = 1;
  cVar2 = DAT_100143c8;
  *param_1 = 1;
  uVar4 = 0x202020;
  if (cVar2 != '\0') {
    uVar4 = uVar3;
  }
  param_1[2] = param_2;
  uVar3 = 0xf6f6f6;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010824
 */

void recovered_10010824(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;

  recovered_10006080(param_1,0,0x4c);
  param_1[7] = 1;
  param_1[10] = 1;
  cVar1 = DAT_100143c8;
  param_1[1] = param_1[1] | 2;
  uVar2 = DAT_100142a8;
  if (cVar1 == '\0') {
    uVar2 = 0x202020;
  }
  param_1[9] = param_2;
  *param_1 = 2;
  param_1[8] = uVar2;
  return;
}

#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001089c
 */

void recovered_1001089c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  recovered_10006080(param_1,0,0x4c);
  param_1[7] = 1;
  param_1[10] = 1;
  cVar2 = DAT_100143c8;
  uVar3 = DAT_100142a8;
  *param_1 = 4;
  uVar1 = DAT_100142a4;
  uVar4 = 0x202020;
  if (cVar2 != '\0') {
    uVar4 = uVar3;
  }
  param_1[8] = uVar4;
  uVar3 = 0xf6f6f6;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  param_1[9] = uVar3;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001091c
 */

void recovered_1001091c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  recovered_10006080(param_1,0,0x4c);
  uVar1 = DAT_100142a4;
  param_1[7] = 1;
  param_1[10] = 1;
  cVar2 = DAT_100143c8;
  uVar3 = DAT_100142a8;
  *param_1 = 3;
  uVar4 = 0x202020;
  if (cVar2 != '\0') {
    uVar4 = uVar3;
  }
  param_1[0x12] = param_4;
  uVar3 = 0xf6f6f6;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  param_1[0x11] = param_3;
  param_1[2] = param_2;
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100109bc
 */

void recovered_100109bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined4 param_5,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;

  recovered_10006080(param_1,0,0x4c);
  param_1[0x12] = param_6;
  *param_1 = 8;
  cVar3 = DAT_100143c8;
  param_1[10] = 1;
  uVar2 = DAT_100142a8;
  uVar1 = DAT_100142a4;
  param_1[0x11] = param_5;
  uVar5 = 0x202020;
  uVar4 = 0xf6f6f6;
  if (cVar3 != '\0') {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  bVar6 = param_4 != 0;
  param_1[9] = uVar4;
  if (bVar6) {
    uVar4 = param_1[1];
  }
  param_1[7] = 0;
  if (bVar6) {
    uVar4 = uVar4 | 0x10;
  }
  param_1[3] = param_3;
  param_1[2] = param_2;
  param_1[8] = uVar5;
  if (bVar6) {
    param_1[1] = uVar4;
  }
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010a7c
 */

void recovered_10010a7c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  recovered_10006080(param_1,0,0x4c);
  uVar1 = DAT_100142a4;
  param_1[10] = 1;
  param_1[7] = 1;
  cVar2 = DAT_100143c8;
  uVar3 = DAT_100142a8;
  *param_1 = 5;
  uVar4 = 0x202020;
  if (cVar2 != '\0') {
    uVar4 = uVar3;
  }
  param_1[6] = param_4;
  uVar3 = 0xf6f6f6;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  param_1[5] = param_3;
  param_1[4] = param_2;
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010b1c
 */

void recovered_10010b1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  recovered_10006080(param_1,0,0x4c);
  uVar1 = DAT_100142a4;
  param_1[10] = 1;
  param_1[7] = 1;
  cVar2 = DAT_100143c8;
  uVar3 = DAT_100142a8;
  *param_1 = 6;
  uVar4 = 0x202020;
  if (cVar2 != '\0') {
    uVar4 = uVar3;
  }
  param_1[6] = param_4;
  uVar3 = 0xf6f6f6;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  param_1[5] = param_3;
  param_1[4] = param_2;
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#undef DAT_100142a4
#define DAT_100142a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010bbc
 */

void recovered_10010bbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  recovered_10006080(param_1,0,0x4c);
  uVar1 = DAT_100142a4;
  param_1[10] = 1;
  param_1[7] = 1;
  cVar2 = DAT_100143c8;
  uVar3 = DAT_100142a8;
  *param_1 = 7;
  uVar4 = 0x202020;
  if (cVar2 != '\0') {
    uVar4 = uVar3;
  }
  param_1[5] = param_3;
  uVar3 = 0xf6f6f6;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  param_1[4] = param_2;
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  return;
}

#undef DAT_100142a4
#undef DAT_100142a8
#undef DAT_100143c8

#define local_c (*(undefined4 *)(pf_stack_frame + 20))
#define local_8 (*(undefined4 *)(pf_stack_frame + 24))
#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010c4c
 */

void recovered_10010c4c(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  recovered_100058f0(param_1,&local_c,0x4c);
  return;
}

#undef local_c
#undef local_8
#undef local_4

#define local_c (*(undefined4 *)(pf_stack_frame + 20))
#define local_8 (*(uint *)(pf_stack_frame + 24))
#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010c9c
 */

void recovered_10010c9c(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_8 = param_3 | 1;
  local_c = param_2;
  local_4 = param_4;
  recovered_100058f0(param_1,&local_c,0x4c);
  return;
}

#undef local_c
#undef local_8
#undef local_4

#define local_c (*(undefined4 *)(pf_stack_frame + 20))
#define local_8 (*(uint *)(pf_stack_frame + 24))
#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010cd8
 */

void recovered_10010cd8(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_8 = param_3 | 2;
  local_c = param_2;
  local_4 = param_4;
  recovered_100058f0(param_1,&local_c,0x4c);
  return;
}

#undef local_c
#undef local_8
#undef local_4

#define in_stack_00000040 (*(int *)(pf_stack_frame + 96))
#define in_stack_00000044 (*(int *)(pf_stack_frame + 100))
#define local_c (*(undefined4 *)(pf_stack_frame + 20))
#define local_8 (*(uint *)(pf_stack_frame + 24))
#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010d14
 */

void recovered_10010d14(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_8 = param_3;
  if (-1 < in_stack_00000040) {
    local_8 = param_3 | 4;
  }
  if (-1 < in_stack_00000044) {
    local_8 = local_8 | 8;
  }
  local_c = param_2;
  local_4 = param_4;
  recovered_100058f0(param_1,&local_c,0x4c);
  return;
}

#undef in_stack_00000040
#undef in_stack_00000044
#undef local_c
#undef local_8
#undef local_4

#define uStack0000001c (*(uint *)(pf_stack_frame + 60))
#define in_stack_00000040 (*(uint *)(pf_stack_frame + 96))
#define local_c (*(undefined4 *)(pf_stack_frame + 20))
#define local_8 (*(undefined4 *)(pf_stack_frame + 24))
#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010d74
 */

void recovered_10010d74(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  if (in_stack_00000040 < 2) {
    in_stack_00000040 = 1;
  }
  uStack0000001c = in_stack_00000040;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  recovered_100058f0(param_1,&local_c,0x4c);
  return;
}

#undef uStack0000001c
#undef in_stack_00000040
#undef local_c
#undef local_8
#undef local_4

#define uStack00000010 (*(uint *)(pf_stack_frame + 48))
#define in_stack_00000040 (*(uint *)(pf_stack_frame + 96))
#define local_c (*(undefined4 *)(pf_stack_frame + 20))
#define local_8 (*(undefined4 *)(pf_stack_frame + 24))
#define local_4 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010db4
 */

void recovered_10010db4(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  if (3 < in_stack_00000040) {
    in_stack_00000040 = 1;
  }
  uStack00000010 = in_stack_00000040;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  recovered_100058f0(param_1,&local_c,0x4c);
  return;
}

#undef uStack00000010
#undef in_stack_00000040
#undef local_c
#undef local_8
#undef local_4

#undef DAT_10010e74
#define DAT_10010e74 (*(uint *)(0x10010e74U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef switchdataD_10010e74
#define switchdataD_10010e74 (*(uint *)(0x10010e74U))
#define local_28 (*(uint * *)(pf_stack_frame + 24))
#define local_24 (*(uint * *)(pf_stack_frame + 28))
#define local_30 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010df4
 */

void recovered_10010df4(undefined4 *param_1,uint *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *extraout_r1 = 0;
  byte *pbVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;

  if (param_2 == (uint *)0x0) {
    puVar5 = (undefined1 *)0x0;
    puVar10 = (undefined1 *)0x0;
    goto LAB_10011194;
  }
  puVar7 = (uint *)0x0;
  uVar1 = *param_2 - 1;
  if (7 < uVar1) {
    puVar3 = param_2;
    puVar12 = (uint *)0x0;
    goto switchD_10010e70_caseD_4;
  }
  puVar12 = (uint *)0x0;
  uVar2 = param_4 - ((param_2[0xd] & ~((int)param_2[0xd] >> 0x1f)) +
                    (param_2[0xf] & ~((int)param_2[0xf] >> 0x1f)));
  puVar11 = (uint *)(uVar2 & ~((int)uVar2 >> 0x1f));
  uVar2 = param_3 - ((param_2[0xe] & ~((int)param_2[0xe] >> 0x1f)) +
                    (param_2[0x10] & ~((int)param_2[0x10] >> 0x1f)));
  puVar6 = (uint *)(uVar2 & ~((int)uVar2 >> 0x1f));
  puVar3 = &DAT_10010e74;
  uVar1 = (&DAT_10010e74)[uVar1];
  switch((uintptr_t)(*param_2)) {
  case 1:
    uVar1 = param_2[10];
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    recovered_10012c78((uint *)&local_28,(undefined *)param_2[2],uVar1);
    puVar3 = extraout_r1;
    puVar7 = local_28;
    puVar12 = local_24;
    break;
  case 2:
    puVar7 = (uint *)&DataAbort;
    puVar12 = (uint *)&DataAbort;
    break;
  case 3:
    uVar1 = param_2[10];
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    recovered_10012c78((uint *)&local_28,(undefined *)param_2[2],uVar1);
    puVar3 = local_24;
    if ((int)local_24 < 0xd) {
      puVar3 = (uint *)&PrefetchAbort;
    }
    goto LAB_10010f9c;
  case 5:
    uVar1 = param_2[5];
    if (uVar1 < 2) {
      puVar3 = (uint *)0x0;
      puVar8 = (uint *)0x0;
      if (uVar1 != 0) goto LAB_10011000;
    }
    else {
      puVar3 = (uint *)(param_2[6] * (uVar1 - 1));
LAB_10011000:
      uVar2 = 0;
      local_30 = (uint *)0x0;
      puVar8 = puVar3;
      puVar3 = puVar12;
      do {
        puVar12 = (uint *)param_2[4];
        if (puVar12 != (uint *)0x0) {
          puVar12 = (uint *)((int)puVar12 + (int)puVar7);
        }
        if ((puVar12 == (uint *)0x0) || (*puVar12 != 4)) {
          recovered_10010df4(&local_28,puVar12,(int)puVar6,(int)puVar11);
          puVar8 = (uint *)((int)local_28 + (int)puVar8);
          uVar1 = param_2[5];
          if ((int)puVar3 <= (int)local_24) {
            puVar3 = local_24;
          }
        }
        else {
          local_30 = (uint *)((int)local_30 + 1);
        }
        uVar2 = uVar2 + 1;
        puVar7 = puVar7 + 0x13;
      } while (uVar2 < uVar1);
      if ((int)puVar6 <= (int)puVar8) {
        puVar6 = puVar8;
      }
      puVar7 = puVar6;
      puVar12 = puVar3;
      if (local_30 != (uint *)0x0) break;
    }
    puVar7 = puVar8;
    puVar12 = puVar3;
    break;
  case 6:
    uVar1 = param_2[5];
    if (uVar1 < 2) {
      puVar8 = (uint *)0x0;
      if (uVar1 == 0) {
        puVar12 = (uint *)0x0;
        break;
      }
    }
    else {
      puVar8 = (uint *)(param_2[6] * (uVar1 - 1));
    }
    uVar2 = 0;
    local_30 = (uint *)0x0;
    do {
      puVar3 = (uint *)param_2[4];
      if (puVar3 != (uint *)0x0) {
        puVar3 = (uint *)((int)puVar3 + (int)puVar12);
      }
      if ((puVar3 == (uint *)0x0) || (*puVar3 != 4)) {
        recovered_10010df4(&local_28,puVar3,(int)puVar6,(int)puVar11);
        puVar8 = (uint *)((int)local_24 + (int)puVar8);
        uVar1 = param_2[5];
        puVar3 = local_28;
        if ((int)puVar7 <= (int)local_28) {
          puVar7 = local_28;
        }
      }
      else {
        local_30 = (uint *)((int)local_30 + 1);
        puVar3 = local_30;
      }
      uVar2 = uVar2 + 1;
      puVar12 = puVar12 + 0x13;
    } while (uVar2 < uVar1);
    if ((int)puVar11 <= (int)puVar8) {
      puVar11 = puVar8;
    }
    puVar12 = puVar11;
    if (local_30 == (uint *)0x0) {
      puVar12 = puVar8;
    }
    break;
  case 7:
    if (param_2[5] != 0) {
      iVar9 = 0;
      uVar1 = 0;
      do {
        puVar3 = (uint *)param_2[4];
        if (puVar3 != (uint *)0x0) {
          puVar3 = (uint *)((int)puVar3 + iVar9);
        }
        recovered_10010df4(&local_28,puVar3,(int)puVar6,(int)puVar11);
        iVar9 = iVar9 + 0x4c;
        uVar1 = uVar1 + 1;
        if ((int)puVar12 <= (int)local_24) {
          puVar12 = local_24;
        }
        if ((int)puVar7 <= (int)local_28) {
          puVar7 = local_28;
        }
        puVar3 = local_24;
      } while (uVar1 < param_2[5]);
    }
    break;
  case 8:
    pbVar4 = (byte *)param_2[2];
    uVar2 = param_2[10];
    if (pbVar4 != (byte *)0x0) {
      uVar1 = (uint)*pbVar4;
    }
    if (pbVar4 == (byte *)0x0 || uVar1 == 0) {
      pbVar4 = (byte *)param_2[3];
    }
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    recovered_10012c78((uint *)&local_28,pbVar4,uVar2);
    if ((int)local_24 < 0x11) {
      local_24 = (uint *)&DataAbort;
    }
    puVar3 = local_24;
    if ((int)local_28 < 0x65) {
      local_28 = (uint *)0x64;
    }
LAB_10010f9c:
    puVar7 = local_28 + 5;
    puVar12 = puVar3 + 3;
  }
switchD_10010e70_caseD_4:
  bVar13 = (param_2[1] & 4) != 0;
  if (bVar13) {
    puVar3 = (uint *)param_2[0xb];
  }
  if (bVar13) {
    puVar7 = (uint *)((uint)puVar3 & ~((int)puVar3 >> 0x1f));
  }
  if ((param_2[1] & 8) != 0) {
    puVar12 = (uint *)(param_2[0xc] & ~((int)param_2[0xc] >> 0x1f));
  }
  puVar10 = (undefined1 *)
            ((int)puVar12 +
            (param_2[0xf] & ~((int)param_2[0xf] >> 0x1f)) +
            (param_2[0xd] & ~((int)param_2[0xd] >> 0x1f)));
  puVar5 = (undefined1 *)
           ((int)puVar7 +
           (param_2[0x10] & ~((int)param_2[0x10] >> 0x1f)) +
           (param_2[0xe] & ~((int)param_2[0xe] >> 0x1f)));
LAB_10011194:
  param_1[1] = puVar10;
  *param_1 = puVar5;
  return;
}

#undef DAT_10010e74
#undef EXT_0000000c
#undef EXT_00000010
#undef switchdataD_10010e74
#undef local_28
#undef local_24
#undef local_30

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010900
#define DAT_40010900 (*(uint8_t *)(0x40010900U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010900
#define _DAT_40010900 (*(code * *)(0x40010900U))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
#define auStack_30 (*(undefined1 (*)[48])(pf_stack_frame + 16))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100111a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100111a8(int *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  int iVar3;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  iVar3 = 0;
  recovered_10006080(param_2,0,0x2c);
  pvVar1 = recovered_10006080(auStack_30,0,0x1c);
  if (param_1 != (int *)0x0) {
    pvVar1 = (void *)*param_1;
  }
  if ((((param_1 != (int *)0x0 && pvVar1 != (void *)0x0) && (_DAT_40010800 == 0x50414d57)) &&
      (_DAT_40010804 != 0)) &&
     (((0x103 < _DAT_40010808 && (_DAT_40010900 != (code *)0x0)) &&
      (iVar2 = (*_DAT_40010900)(pvVar1,auStack_30), iVar2 != 0)))) {
    param_2[3] = uStack_2c;
    iVar3 = 1;
    param_2[1] = local_1c;
    param_2[2] = local_18;
    param_2[4] = uStack_28;
    *param_2 = *param_2 | 1;
  }
  *param_2 = *param_2 | 2;
  iVar2 = recovered_1000e63c((undefined1 *)(param_2 + 5));
  return iVar2 + iVar3;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010900
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010900
#undef local_1c
#undef local_18
#undef auStack_30
#undef uStack_2c
#undef uStack_28

#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_40 (*(byte * *)(pf_stack_frame + 32))
#define local_3c (*(int *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(int *)(pf_stack_frame + 56))
#define local_24 (*(int *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112a4
 */

undefined4
recovered_100112a4(int param_1,int *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  undefined4 param_7)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  byte *pbVar2;
  int unaff_r6;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r10;
  uint uVar6;
  uint unaff_lr;
  bool bVar7;

  uVar1 = 0;
  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      unaff_r6 = *(int *)(param_1 + 0x2c);
    }
    if (param_2 != (int *)0x0 && unaff_r6 != 0) {
      uVar4 = *(uint *)(param_1 + 4);
      if (-1 < (int)uVar4) {
        unaff_lr = *(uint *)(param_1 + 8);
      }
      if ((((-1 < (int)uVar4 && -1 < (int)unaff_lr) && (0xc0000000 < uVar4 + 0xc0000000)) &&
          (unaff_lr != 0)) &&
         ((uint)-(int)((ulonglong)uVar4 * (ulonglong)unaff_lr >> 0x20) <
          (uint)((uint)((ulonglong)uVar4 * (ulonglong)unaff_lr) < 0x40000000))) {
        uVar5 = *(uint *)(param_1 + 0xc);
        uVar6 = uVar5;
        if (uVar5 == 0) {
          uVar6 = uVar4 << 2;
        }
        if (((uVar4 << 2 <= uVar6) && ((int)((ulonglong)unaff_lr * (ulonglong)uVar6 >> 0x20) == 0))
           && (uVar4 * 4 <= uVar5)) {
          uVar4 = param_5;
          if (0 < (int)param_5) {
            uVar4 = param_6;
            unaff_r10 = param_6;
          }
          if (0 < (int)uVar4) {
            iVar3 = ((int)param_3 >> 0x1f) + (uint)CARRY4((uint)param_3,param_5);
            if ((int)-(iVar3 + (uint)((byte *)0x7fffffff < param_3 + param_5)) < 0 ==
                (SBORROW4(0,iVar3) !=
                SBORROW4(-iVar3,(uint)((byte *)0x7fffffff < param_3 + param_5)))) {
              iVar3 = ((int)param_4 >> 0x1f) + (uint)CARRY4(param_4,unaff_r10);
              bVar7 = 0x7fffffff < param_4 + unaff_r10;
              if ((int)-(iVar3 + (uint)bVar7) < 0 ==
                  (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar7))) {
                recovered_10006080(&local_44,0,0x24);
                local_40 = *(byte **)(param_1 + 4);
                local_3c = *(int *)(param_1 + 8);
                local_2c = param_4 & ~((int)param_4 >> 0x1f);
                local_38 = *(undefined4 *)(param_1 + 0xc);
                local_30 = (uint)param_3 & ~((int)param_3 >> 0x1f);
                local_44 = *(int *)(param_1 + 0x2c);
                local_34 = param_7;
                local_24 = local_3c;
                if ((int)(param_4 + unaff_r10) < local_3c) {
                  local_24 = param_4 + unaff_r10;
                }
                local_24 = local_24 - local_2c;
                pbVar2 = local_40;
                if ((int)(param_3 + param_5) < (int)local_40) {
                  pbVar2 = param_3 + param_5;
                }
                local_28 = (int)pbVar2 - local_30;
                if (local_28 < 1) {
                  uVar1 = 0;
                }
                else {
                  uVar1 = 0;
                  if (0 < local_24) {
                    recovered_1001144c(&local_44,param_2,param_3,param_4,param_5,unaff_r10);
                    uVar1 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_100135c7
#define DAT_100135c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_100142a8
#define DAT_100142a8 (*(int *)(((uintptr_t)pf_module_state + 0xd10U)))
#undef DAT_100142ac
#define DAT_100142ac (*(int *)(((uintptr_t)pf_module_state + 0xd14U)))
#undef DAT_100142b0
#define DAT_100142b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd18U)))
#undef DAT_100142b4
#define DAT_100142b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd1cU)))
#undef DAT_100142d8
#define DAT_100142d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd40U)))
#undef DAT_10014320
#define DAT_10014320 (*(uint *)(((uintptr_t)pf_module_state + 0xd88U)))
#undef DAT_10014368
#define DAT_10014368 (*(int *)(((uintptr_t)pf_module_state + 0xdd0U)))
#undef DAT_100143c8
#define DAT_100143c8 (*(char *)(((uintptr_t)pf_module_state + 0xe30U)))
#define local_3c (*(byte * *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001144c
 */

void recovered_1001144c(int *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  byte *pbVar7;
  uint uVar8;
  undefined *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  code *extraout_r1;
  code *pcVar15;
  code *extraout_r1_00;
  byte *pbVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  int unaff_r4;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  uint uVar30;
  uint uVar31;
  undefined4 *puVar32;
  byte bVar33;
  short sVar34;
  uint uVar35;
  uint uVar36;
  short sVar37;
  undefined1 *puVar38;
  undefined4 uVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  longlong lVar45;

  if (param_1 == (int *)0x0 || param_2 == (int *)0x0) {
    return;
  }
  iVar28 = param_5;
  if (0 < param_5) {
    iVar28 = param_6;
    unaff_r4 = param_6;
  }
  if (iVar28 < 1) {
    return;
  }
  iVar28 = *param_2;
  if ((((*(byte *)(param_2 + 1) & 2) == 0) || (iVar28 == 3)) || (iVar28 == 8)) {
  }
  else {
    pbVar29 = (byte *)param_1[5];
    iVar12 = param_1[6];
    iVar18 = param_1[8] + iVar12;
    if (param_4 + unaff_r4 < param_1[8] + iVar12) {
      iVar18 = param_4 + unaff_r4;
    }
    if (iVar12 < param_4) {
      iVar12 = param_4;
    }
    pbVar7 = pbVar29;
    if ((int)pbVar29 < (int)param_3) {
      pbVar7 = param_3;
    }
    pbVar16 = pbVar29 + param_1[7];
    if ((int)(param_3 + param_5) < (int)(pbVar29 + param_1[7])) {
      pbVar16 = param_3 + param_5;
    }
    bVar41 = SBORROW4(iVar18,iVar12);
    iVar22 = iVar18 - iVar12;
    bVar40 = iVar18 == iVar12;
    if (iVar12 < iVar18) {
      bVar41 = SBORROW4((int)pbVar16,(int)pbVar7);
      iVar22 = (int)pbVar16 - (int)pbVar7;
      bVar40 = pbVar16 == pbVar7;
    }
    if ((!bVar40 && iVar22 < 0 == bVar41) && (*param_1 != 0)) {
      uVar26 = (int)pbVar16 - (int)pbVar7;
      uVar11 = uVar26 & 0xfffffff0;
      iVar28 = param_2[9];
      do {
        puVar38 = (undefined1 *)(param_1[3] * iVar12 + *param_1 + (int)(uintptr_t)pbVar7 * 4);
        if (uVar26 < 0x10) {
          pbVar29 = pbVar7;
LAB_100116c0:
          iVar22 = (int)pbVar16 - (int)pbVar29;
          do {
            puVar38[3] = 0xff;
            iVar22 = iVar22 + -1;
            puVar38[2] = (char)iVar28;
            puVar38[1] = (char)((uint)iVar28 >> 8);
            *puVar38 = (char)((uint)iVar28 >> 0x10);
            puVar38 = puVar38 + 4;
          } while (iVar22 != 0);
        }
        else {
          puVar21 = (undefined1 *)(param_1[3] * iVar12 + *param_1 + (int)(uintptr_t)pbVar7 * 4);
          puVar38 = puVar38 + uVar11 * 4;
          uVar27 = uVar11;
          do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar21+lane*4;pixel[0]=(char)((uint)iVar28 >> 0x10);pixel[1]=(char)((uint)iVar28 >> 8);pixel[2]=(char)iVar28;pixel[3]=255;}
              puVar21+=64;uVar27-=16;
            } while (uVar27 != 0);
          pbVar29 = pbVar7 + uVar11;
          if (uVar26 != uVar11) goto LAB_100116c0;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar18);
      iVar28 = *param_2;
      unaff_r4 = param_6;
    }
  }
  cVar6 = DAT_100143c8;
  if (7 < iVar28 - 1U) {
    return;
  }
  uVar11 = param_2[0xd] & ~(param_2[0xd] >> 0x1f);
  uVar26 = param_2[0xe] & ~(param_2[0xe] >> 0x1f);
  local_3c = (byte *)(uVar11 + param_4);
  uVar11 = unaff_r4 - (uVar11 + (param_2[0xf] & ~(param_2[0xf] >> 0x1f)));
  pbVar29 = param_3 + uVar26;
  local_38 = uVar11 & ~((int)uVar11 >> 0x1f);
  uVar26 = param_5 - (uVar26 + (param_2[0x10] & ~(param_2[0x10] >> 0x1f)));
  local_34 = uVar26 & ~((int)uVar26 >> 0x1f);
  bVar33 = 0;
  switch((uintptr_t)(iVar28)) {
  case 1:
    uVar11 = param_2[10];
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    recovered_10012c78(&local_28,(undefined *)param_2[2],uVar11);
    iVar12 = param_2[7];
    if ((int)local_38 < (int)local_24) {
      local_24 = local_38;
    }
    if ((int)local_34 < (int)local_28) {
      local_28 = local_34;
    }
    if (iVar12 == 1) {
      local_3c = local_3c + (int)(local_38 - local_24) / 2;
      pbVar29 = pbVar29 + (int)(local_34 - local_28) / 2;
LAB_10011f2c:
      local_38 = local_24;
      local_34 = local_28;
    }
    else {
      if (iVar12 == 2) {
        local_3c = local_3c + (local_38 - local_24);
        pbVar29 = pbVar29 + (local_34 - local_28);
        goto LAB_10011f2c;
      }
      if (iVar12 != 3) goto LAB_10011f2c;
    }
    puVar9 = &DAT_100135c7;
    if ((undefined *)param_2[2] != (undefined *)0x0) {
      puVar9 = (undefined *)param_2[2];
    }
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      iVar28 = 0x202020;
      if (DAT_100143c8 != '\0') {
        iVar28 = DAT_100142a8;
      }
    }
    else {
      iVar28 = param_2[8];
    }
    uVar27 = param_2[10];
    if (uVar27 < 2) {
      uVar27 = 1;
    }
    goto LAB_100121c8;
  case 2:
    pbVar7 = (byte *)param_1[6];
    iVar28 = DAT_100142ac;
    if (DAT_100143c8 == '\0') {
      iVar28 = 0xf4f4f4;
    }
    if ((*(byte *)(param_2 + 1) & 2) != 0) {
      iVar28 = param_2[9];
    }
    pbVar24 = (byte *)param_1[5];
    pbVar16 = pbVar7 + param_1[8];
    if ((int)(local_3c + local_38) < (int)(pbVar7 + param_1[8])) {
      pbVar16 = local_3c + local_38;
    }
    if ((int)pbVar7 < (int)local_3c) {
      pbVar7 = local_3c;
    }
    pbVar25 = pbVar24;
    if ((int)pbVar24 < (int)pbVar29) {
      pbVar25 = pbVar29;
    }
    pbVar20 = pbVar24 + param_1[7];
    if ((int)(pbVar29 + local_34) < (int)(pbVar24 + param_1[7])) {
      pbVar20 = pbVar29 + local_34;
    }
    bVar41 = SBORROW4((int)pbVar16,(int)pbVar7);
    iVar12 = (int)pbVar16 - (int)pbVar7;
    bVar40 = pbVar16 == pbVar7;
    if ((int)pbVar7 < (int)pbVar16) {
      bVar41 = SBORROW4((int)pbVar20,(int)pbVar25);
      iVar12 = (int)pbVar20 - (int)pbVar25;
      bVar40 = pbVar20 == pbVar25;
    }
    if (!bVar40 && iVar12 < 0 == bVar41) {
      if (0 < (int)uVar11) {
        uVar11 = uVar26;
      }
      if ((0 < (int)uVar11) && (*param_1 != 0)) {
        uVar11 = (int)pbVar20 - (int)pbVar25;
        uVar26 = uVar11 & 0xfffffff0;
        do {
          puVar38 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
          if (uVar11 < 0x10) {
            pbVar29 = pbVar25;
LAB_10011998:
            iVar12 = (int)pbVar29 - (int)pbVar20;
            do {
              puVar38[3] = 0xff;
              bVar40 = iVar12 != -1;
              iVar12 = iVar12 + 1;
              puVar38[2] = (char)iVar28;
              puVar38[1] = (char)((uint)iVar28 >> 8);
              *puVar38 = (char)((uint)iVar28 >> 0x10);
              puVar38 = puVar38 + 4;
            } while (bVar40);
          }
          else {
            puVar21 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
            puVar38 = puVar38 + uVar26 * 4;
            uVar27 = uVar26;
            do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar21+lane*4;pixel[0]=(char)((uint)iVar28 >> 0x10);pixel[1]=(char)((uint)iVar28 >> 8);pixel[2]=(char)iVar28;pixel[3]=255;}
              puVar21+=64;uVar27-=16;
            } while (uVar27 != 0);
            pbVar29 = pbVar25 + uVar26;
            if (uVar11 != uVar26) goto LAB_10011998;
          }
          pbVar7 = pbVar7 + 1;
        } while (pbVar7 != pbVar16);
      }
    }
    break;
  case 3:
    pbVar7 = (byte *)param_1[4];
    bVar33 = 0;
    if (pbVar7 != (byte *)0x0) {
      param_3 = (byte *)(uint)*pbVar7;
    }
    if (pbVar7 == (byte *)0x0 || ((uint)param_3 & 1) == 0) {
LAB_10011cf0:
      bVar40 = false;
      bVar17 = 0;
    }
    else {
      pbVar16 = *(byte **)(pbVar7 + 4);
      bVar41 = SBORROW4((int)pbVar29,(int)pbVar16);
      iVar28 = (int)pbVar29 - (int)pbVar16;
      bVar40 = pbVar29 == pbVar16;
      if ((int)pbVar29 <= (int)pbVar16) {
        param_3 = *(byte **)(pbVar7 + 8);
        bVar41 = SBORROW4((int)local_3c,(int)param_3);
        iVar28 = (int)local_3c - (int)param_3;
        bVar40 = local_3c == param_3;
      }
      if (!bVar40 && iVar28 < 0 == bVar41) goto LAB_10011cf0;
      pbVar24 = pbVar29 + local_34;
      bVar41 = SBORROW4((int)pbVar24,(int)pbVar16);
      iVar28 = (int)pbVar24 - (int)pbVar16;
      bVar40 = pbVar24 == pbVar16;
      if ((int)pbVar16 < (int)pbVar24) {
        pbVar24 = local_3c + local_38;
        bVar41 = SBORROW4((int)pbVar24,(int)param_3);
        iVar28 = (int)pbVar24 - (int)param_3;
        bVar40 = pbVar24 == param_3;
      }
      if (bVar40 || iVar28 < 0 != bVar41) {
LAB_10012550:
        bVar17 = 0;
        bVar40 = false;
      }
      else {
        pbVar25 = (byte *)param_1[5];
        bVar41 = SBORROW4((int)pbVar25,(int)pbVar16);
        iVar28 = (int)pbVar25 - (int)pbVar16;
        bVar40 = pbVar25 == pbVar16;
        if ((int)pbVar25 <= (int)pbVar16) {
          pbVar24 = (byte *)param_1[6];
          bVar41 = SBORROW4((int)pbVar24,(int)param_3);
          iVar28 = (int)pbVar24 - (int)param_3;
          bVar40 = pbVar24 == param_3;
        }
        if ((!bVar40 && iVar28 < 0 == bVar41) || ((int)(pbVar25 + param_1[7]) <= (int)pbVar16))
        goto LAB_10012550;
        bVar17 = 0;
        bVar40 = (int)param_3 < (int)(pbVar24 + param_1[8]);
        if (bVar40) {
          bVar33 = pbVar7[0xc] & 1;
          bVar17 = pbVar7[0x10] & 1;
        }
      }
    }
    iVar28 = DAT_100142ac;
    if (DAT_100143c8 == '\0') {
      iVar28 = 0xf4f4f4;
    }
    if ((*(byte *)(param_2 + 1) & 2) != 0) {
      iVar28 = param_2[9];
    }
    if (bVar33 == 0) {
      if (bVar40) {
        puVar32 = &DAT_100142d8;
        sVar37 = 0x12;
        sVar34 = 0x52;
        uVar39 = 0xffffff;
        goto LAB_10011e18;
      }
      pbVar24 = (byte *)param_1[6];
      pbVar16 = (byte *)param_1[5];
      pbVar7 = pbVar24;
      if ((int)pbVar24 < (int)local_3c) {
        pbVar7 = local_3c;
      }
      pbVar25 = pbVar16;
      if ((int)pbVar16 < (int)pbVar29) {
        pbVar25 = pbVar29;
      }
      pbVar20 = pbVar24 + param_1[8];
      if ((int)(local_3c + local_38) < (int)(pbVar24 + param_1[8])) {
        pbVar20 = local_3c + local_38;
      }
      pbVar24 = pbVar16 + param_1[7];
      if ((int)(pbVar29 + local_34) < (int)(pbVar16 + param_1[7])) {
        pbVar24 = pbVar29 + local_34;
      }
      bVar41 = SBORROW4((int)pbVar20,(int)pbVar7);
      iVar12 = (int)pbVar20 - (int)pbVar7;
      bVar40 = pbVar20 == pbVar7;
      if ((int)pbVar7 < (int)pbVar20) {
        bVar41 = SBORROW4((int)pbVar24,(int)pbVar25);
        iVar12 = (int)pbVar24 - (int)pbVar25;
        bVar40 = pbVar24 == pbVar25;
      }
      if (!bVar40 && iVar12 < 0 == bVar41) {
        uVar27 = uVar11;
        if (0 < (int)uVar11) {
          uVar27 = uVar26;
        }
        if ((0 < (int)uVar27) && (*param_1 != 0)) {
          uVar27 = (int)pbVar24 - (int)pbVar25;
          uVar35 = uVar27 & 0xfffffff0;
          do {
            puVar38 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
            if (uVar27 < 0x10) {
              pbVar16 = pbVar25;
LAB_1001279c:
              iVar12 = (int)pbVar16 - (int)pbVar24;
              do {
                puVar38[3] = 0xff;
                bVar40 = iVar12 != -1;
                iVar12 = iVar12 + 1;
                puVar38[2] = (char)iVar28;
                puVar38[1] = (char)((uint)iVar28 >> 8);
                *puVar38 = (char)((uint)iVar28 >> 0x10);
                puVar38 = puVar38 + 4;
              } while (bVar40);
            }
            else {
              puVar21 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
              puVar38 = puVar38 + uVar35 * 4;
              uVar19 = uVar35;
              do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar21+lane*4;pixel[0]=(char)((uint)iVar28 >> 0x10);pixel[1]=(char)((uint)iVar28 >> 8);pixel[2]=(char)iVar28;pixel[3]=255;}
              puVar21+=64;uVar19-=16;
            } while (uVar19 != 0);
              pbVar16 = pbVar25 + uVar35;
              if (uVar27 != uVar35) goto LAB_1001279c;
            }
            pbVar7 = pbVar7 + 1;
          } while (pbVar7 != pbVar20);
        }
      }
LAB_100120b4:
      uVar39 = 0x9a9a9a;
      puVar32 = &DAT_100142b0;
    }
    else {
      puVar32 = (undefined4 *)((uintptr_t)pf_module_state+0xd3cU);
      sVar37 = 0xc;
      sVar34 = 0x58;
      uVar39 = 0;
LAB_10011e18:
      pbVar24 = (byte *)param_1[6];
      pbVar16 = (byte *)param_1[5];
      pbVar7 = pbVar24;
      if ((int)pbVar24 < (int)local_3c) {
        pbVar7 = local_3c;
      }
      pbVar25 = pbVar16;
      if ((int)pbVar16 < (int)pbVar29) {
        pbVar25 = pbVar29;
      }
      pbVar20 = pbVar24 + param_1[8];
      if ((int)(local_3c + local_38) < (int)(pbVar24 + param_1[8])) {
        pbVar20 = local_3c + local_38;
      }
      pbVar24 = pbVar16 + param_1[7];
      if ((int)(pbVar29 + local_34) < (int)(pbVar16 + param_1[7])) {
        pbVar24 = pbVar29 + local_34;
      }
      bVar42 = SBORROW4((int)pbVar20,(int)pbVar7);
      iVar12 = (int)pbVar20 - (int)pbVar7;
      bVar41 = pbVar20 == pbVar7;
      if ((int)pbVar7 < (int)pbVar20) {
        bVar42 = SBORROW4((int)pbVar24,(int)pbVar25);
        iVar12 = (int)pbVar24 - (int)pbVar25;
        bVar41 = pbVar24 == pbVar25;
      }
      if (!bVar41 && iVar12 < 0 == bVar42) {
        uVar27 = uVar11;
        if (0 < (int)uVar11) {
          uVar27 = uVar26;
        }
        if ((0 < (int)uVar27) && (*param_1 != 0)) {
          if (DAT_100143c8 != '\0') {
            uVar39 = *puVar32;
          }
          uVar27 = (int)pbVar24 - (int)pbVar25;
          uVar35 = uVar27 & 0xfffffff0;
          uVar1 = (ushort)(((int)sVar34 * (int)(short)((ushort)((uint)iVar28 >> 8) & 0xff) +
                            (int)(short)((ushort)((uint)uVar39 >> 8) & 0xff) * (int)sVar37 + 0x32U &
                           0xffff) >> 2);
          uVar2 = (ushort)(((int)sVar34 * (int)(short)((ushort)iVar28 & 0xff) +
                            (int)(short)((ushort)uVar39 & 0xff) * (int)sVar37 + 0x32U & 0xffff) >> 2
                          );
          do {
            pbVar16 = (byte *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
            if (uVar27 < 0x10) {
              pbVar10 = pbVar25;
LAB_10012698:
              iVar12 = (int)pbVar10 - (int)pbVar24;
              do {
                pbVar16[3] = 0xff;
                bVar41 = iVar12 != -1;
                iVar12 = iVar12 + 1;
                pbVar16[2] = (byte)((uint)((short)uVar2 * 0x147b) >> 0x11);
                pbVar16[1] = (byte)(uVar2 / 0xc80) >> 1 |
                             (byte)((uint)((short)uVar1 * 0x147b) >> 0x11);
                *pbVar16 = (byte)(uVar1 / 0xc80) >> 1 |
                           (byte)((uint)((short)(((int)sVar34 *
                                                  (int)(short)((ushort)((uint)iVar28 >> 0x10) & 0xff
                                                              ) +
                                                  (int)(short)((ushort)((uint)uVar39 >> 0x10) & 0xff
                                                              ) * (int)sVar37 + 0x32U & 0xffff) >> 2
                                                ) * 0x147b) >> 0x11);
                pbVar16 = pbVar16 + 4;
              } while (bVar41);
            }
            else {
              puVar38 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
              pbVar16 = pbVar16 + uVar35 * 4;
              uVar19 = uVar35;
              do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar38+lane*4;pixel[0]=(byte)(uVar1 / 0xc80) >> 1 |
                           (byte)((uint)((short)(((int)sVar34 *
                                                  (int)(short)((ushort)((uint)iVar28 >> 0x10) & 0xff
                                                              ) +
                                                  (int)(short)((ushort)((uint)uVar39 >> 0x10) & 0xff
                                                              ) * (int)sVar37 + 0x32U & 0xffff) >> 2
                                                ) * 0x147b) >> 0x11);pixel[1]=(byte)(uVar2 / 0xc80) >> 1 |
                             (byte)((uint)((short)uVar1 * 0x147b) >> 0x11);pixel[2]=(byte)((uint)((short)uVar2 * 0x147b) >> 0x11);pixel[3]=255;}
              puVar38+=64;uVar19-=16;
            } while (uVar19 != 0);
              pbVar10 = pbVar25 + uVar35;
              if (uVar27 != uVar35) goto LAB_10012698;
            }
            pbVar7 = pbVar7 + 1;
          } while (pbVar7 != pbVar20);
        }
      }
      if (!bVar40) goto LAB_100120b4;
      uVar39 = 0x286dc4;
      puVar32 = &DAT_100142b4;
    }
    uVar14 = *puVar32;
    if (cVar6 == '\0') {
      uVar14 = uVar39;
    }
    recovered_1000fb0c(param_1,(int)pbVar29,(int)local_3c,local_34,local_38,uVar14);
    pcVar15 = extraout_r1_00;
    if (bVar17 != 0) {
      pcVar15 = (code *)param_2[0x11];
    }
    if (bVar17 != 0 && pcVar15 != (code *)0x0) {
      (*pcVar15)(param_2[0x12]);
    }
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      iVar28 = 0x202020;
      if (DAT_100143c8 != '\0') {
        iVar28 = DAT_100142a8;
      }
    }
    else {
      iVar28 = param_2[8];
    }
    iVar12 = 1;
    uVar27 = 1;
    if (1 < (uint)param_2[10]) {
      uVar27 = param_2[10];
    }
    puVar9 = &DAT_100135c7;
    if ((undefined *)param_2[2] != (undefined *)0x0) {
      puVar9 = (undefined *)param_2[2];
    }
    if ((int)uVar11 < 0xd) {
      uVar11 = 0xc;
    }
    local_38 = uVar11 - 0xc;
    if ((int)uVar26 < 0x15) {
      uVar26 = 0x14;
    }
    local_34 = uVar26 - 0x14;
    local_3c = local_3c + 6;
    pbVar29 = pbVar29 + 10;
LAB_100121c8:
    recovered_1001311c(param_1,(int)pbVar29,(int)local_3c,local_34,local_38,(int)puVar9,iVar28,
                       uVar27,iVar12,0);
    break;
  case 5:
    iVar28 = 1;
    goto LAB_10011d88;
  case 6:
    iVar28 = 0;
LAB_10011d88:
    recovered_10012e10(param_1,(int)param_2,(int)param_3,param_4,param_5,unaff_r4,iVar28);
    break;
  case 7:
    iVar28 = 0;
    if (param_2[4] != 0) {
      iVar28 = param_2[5];
    }
    if (param_2[4] != 0 && iVar28 != 0) {
      iVar28 = 0;
      uVar11 = 0;
      do {
        iVar12 = param_2[4];
        recovered_10010df4(&local_28,(uint *)(iVar12 + iVar28),local_34,local_38);
        iVar18 = param_2[7];
        uVar26 = local_24;
        if ((int)local_38 < (int)local_24) {
          uVar26 = local_38;
        }
        uVar27 = local_28;
        if ((int)local_34 < (int)local_28) {
          uVar27 = local_34;
        }
        if (iVar18 == 1) {
          iVar18 = (int)(local_38 - uVar26) / 2;
          iVar22 = (int)(local_34 - uVar27) / 2;
LAB_10011738:
          pbVar16 = local_3c + iVar18;
          pbVar7 = pbVar29 + iVar22;
        }
        else {
          if (iVar18 == 2) {
            iVar18 = local_38 - uVar26;
            iVar22 = local_34 - uVar27;
            goto LAB_10011738;
          }
          pbVar7 = pbVar29;
          pbVar16 = local_3c;
          if (iVar18 == 3) {
            uVar27 = local_34;
            uVar26 = local_38;
          }
        }
        recovered_1001144c(param_1,(int *)(iVar12 + iVar28),pbVar7,(int)pbVar16,uVar27,uVar26);
        iVar28 = iVar28 + 0x4c;
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_2[5]);
    }
    break;
  case 8:
    pbVar7 = (byte *)param_1[4];
    uVar27 = 0;
    bVar40 = false;
    if (pbVar7 != (byte *)0x0) {
      bVar33 = *pbVar7;
    }
    if (pbVar7 != (byte *)0x0 && (bVar33 & 1) != 0) {
      pbVar16 = *(byte **)(pbVar7 + 4);
      bVar42 = SBORROW4((int)pbVar29,(int)pbVar16);
      iVar28 = (int)pbVar29 - (int)pbVar16;
      bVar41 = pbVar29 == pbVar16;
      if ((int)pbVar29 <= (int)pbVar16) {
        pbVar7 = *(byte **)(pbVar7 + 8);
        bVar42 = SBORROW4((int)local_3c,(int)pbVar7);
        iVar28 = (int)local_3c - (int)pbVar7;
        bVar41 = local_3c == pbVar7;
      }
      if (bVar41 || iVar28 < 0 != bVar42) {
        pbVar24 = pbVar29 + local_34;
        bVar42 = SBORROW4((int)pbVar24,(int)pbVar16);
        iVar28 = (int)pbVar24 - (int)pbVar16;
        bVar41 = pbVar24 == pbVar16;
        if ((int)pbVar16 < (int)pbVar24) {
          pbVar24 = local_3c + local_38;
          bVar42 = SBORROW4((int)pbVar24,(int)pbVar7);
          iVar28 = (int)pbVar24 - (int)pbVar7;
          bVar41 = pbVar24 == pbVar7;
        }
        if (!bVar41 && iVar28 < 0 == bVar42) {
          pbVar25 = (byte *)param_1[5];
          bVar42 = SBORROW4((int)pbVar25,(int)pbVar16);
          iVar28 = (int)pbVar25 - (int)pbVar16;
          bVar41 = pbVar25 == pbVar16;
          if ((int)pbVar25 <= (int)pbVar16) {
            pbVar24 = (byte *)param_1[6];
            bVar42 = SBORROW4((int)pbVar24,(int)pbVar7);
            iVar28 = (int)pbVar24 - (int)pbVar7;
            bVar41 = pbVar24 == pbVar7;
          }
          if ((bVar41 || iVar28 < 0 != bVar42) && ((int)pbVar16 < (int)(pbVar25 + param_1[7]))) {
            bVar40 = (int)pbVar7 < (int)(pbVar24 + param_1[8]);
          }
        }
      }
    }
    uVar35 = param_2[1];
    if (((char *)param_2[2] != (char *)0x0) && (uVar27 = 0, *(char *)param_2[2] != '\0')) {
      uVar27 = 1;
    }
    uVar23 = param_2[10];
    uVar19 = DAT_10014320;
    if (DAT_100143c8 == '\0') {
      uVar19 = 0xffffff;
    }
    if (uVar23 < 2) {
      uVar23 = 1;
    }
    uVar13 = uVar11;
    if ((int)uVar11 < 0xd) {
      uVar13 = 0xc;
    }
    if ((uVar35 & 2) != 0) {
      uVar19 = param_2[9];
    }
    uVar8 = uVar35 & 0x10;
    if ((bVar40) && (uVar8 == 0)) {
      uVar30 = DAT_100142d8;
      if (DAT_100143c8 == '\0') {
        uVar30 = 0xffffff;
      }
      uVar19 = (uint)((short)(((short)((ushort)(uVar19 >> 8) & 0xff) * 0x5a +
                               (((uVar30 & 0xffff) >> 8) * 4 + (uVar30 >> 8 & 0xff)) * 2 + 0x32 &
                              0xffff) >> 2) * 0x147b) >> 9 & 0xffffff00 |
               (uint)((short)(((short)((ushort)uVar19 & 0xff) * 0x5a +
                               ((uVar30 & 0xff) * 4 + (uVar30 & 0xff)) * 2 + 0x32 & 0xffff) >> 2) *
                     0x147b) >> 0x11 |
               (uint)((short)(((short)((ushort)(uVar19 >> 0x10) & 0xff) * 0x5a +
                               (((uVar30 & 0xffffff) >> 0x10) * 4 + (uVar30 >> 0x10 & 0xff)) * 2 +
                               0x32 & 0xffff) >> 2) * 0x147b) >> 1 & 0x3ff0000;
    }
    pbVar7 = (byte *)param_1[6];
    pbVar24 = (byte *)param_1[5];
    pbVar16 = pbVar7 + param_1[8];
    if ((int)(local_3c + local_38) < (int)(pbVar7 + param_1[8])) {
      pbVar16 = local_3c + local_38;
    }
    if ((int)pbVar7 < (int)local_3c) {
      pbVar7 = local_3c;
    }
    pbVar25 = pbVar24;
    if ((int)pbVar24 < (int)pbVar29) {
      pbVar25 = pbVar29;
    }
    pbVar20 = pbVar24 + param_1[7];
    if ((int)(pbVar29 + local_34) < (int)(pbVar24 + param_1[7])) {
      pbVar20 = pbVar29 + local_34;
    }
    bVar42 = SBORROW4((int)pbVar16,(int)pbVar7);
    iVar28 = (int)pbVar16 - (int)pbVar7;
    bVar41 = pbVar16 == pbVar7;
    if ((int)pbVar7 < (int)pbVar16) {
      bVar42 = SBORROW4((int)pbVar20,(int)pbVar25);
      iVar28 = (int)pbVar20 - (int)pbVar25;
      bVar41 = pbVar20 == pbVar25;
    }
    if (!bVar41 && iVar28 < 0 == bVar42) {
      uVar30 = uVar11;
      if (0 < (int)uVar11) {
        uVar30 = uVar26;
      }
      if ((0 < (int)uVar30) && (*param_1 != 0)) {
        uVar36 = (int)pbVar20 - (int)pbVar25;
        uVar30 = uVar36 & 0xfffffff0;
        do {
          puVar38 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
          if (uVar36 < 0x10) {
            pbVar24 = pbVar25;
LAB_10012318:
            iVar28 = (int)pbVar24 - (int)pbVar20;
            do {
              puVar38[3] = 0xff;
              bVar41 = iVar28 != -1;
              iVar28 = iVar28 + 1;
              puVar38[2] = (char)uVar19;
              puVar38[1] = (char)(uVar19 >> 8);
              *puVar38 = (char)(uVar19 >> 0x10);
              puVar38 = puVar38 + 4;
            } while (bVar41);
          }
          else {
            puVar21 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar25 * 4);
            puVar38 = puVar38 + uVar30 * 4;
            uVar31 = uVar30;
            do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar21+lane*4;pixel[0]=(char)(uVar19 >> 0x10);pixel[1]=(char)(uVar19 >> 8);pixel[2]=(char)uVar19;pixel[3]=255;}
              puVar21+=64;uVar31-=16;
            } while (uVar31 != 0);
            pbVar24 = pbVar25 + uVar30;
            if (uVar36 != uVar30) goto LAB_10012318;
          }
          pbVar7 = pbVar7 + 1;
        } while (pbVar7 != pbVar16);
      }
    }
    uVar14 = DAT_100142b4;
    uVar39 = DAT_100142b0;
    if (cVar6 == '\0') {
      uVar14 = 0x286dc4;
      uVar39 = 0x9a9a9a;
    }
    if (bVar40) {
      uVar39 = uVar14;
    }
    if ((uVar35 & 0x10) != 0) {
      uVar39 = uVar14;
    }
    uVar35 = local_34 - 0x14;
    recovered_1000fb0c(param_1,(int)pbVar29,(int)local_3c,local_34,local_38,uVar39);
    if (bVar40) {
      bVar40 = (*(byte *)(param_1[4] + 0x10) & 1) != 0;
      pcVar15 = extraout_r1;
      if (bVar40) {
        pcVar15 = (code *)param_2[0x11];
      }
      if (bVar40 && pcVar15 != (code *)0x0) {
        (*pcVar15)(param_2[0x12]);
      }
    }
    uVar13 = uVar13 - 0xc;
    if (uVar27 == 0) {
      iVar28 = DAT_10014368;
      if (DAT_100143c8 == '\0') {
        iVar28 = 0x5c5c5c;
      }
      puVar9 = &DAT_100135c7;
      if ((undefined *)param_2[3] != (undefined *)0x0) {
        puVar9 = (undefined *)param_2[3];
      }
    }
    else {
      puVar9 = (undefined *)param_2[2];
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        iVar28 = 0x202020;
        if (DAT_100143c8 != '\0') {
          iVar28 = DAT_100142a8;
        }
      }
      else {
        iVar28 = param_2[8];
      }
    }
    recovered_1001311c(param_1,(int)(pbVar29 + 10),(int)(local_3c + 6),
                       uVar35 & ~((int)uVar35 >> 0x1f),uVar13,(int)puVar9,iVar28,uVar23,0,
                       uVar27 & uVar8 >> 4);
    if (uVar8 != 0) {
      bVar40 = SBORROW4(uVar26,0x15);
      iVar28 = uVar26 - 0x15;
      if (0x14 < (int)uVar26) {
        bVar40 = SBORROW4(uVar11,0xd);
        iVar28 = uVar11 - 0xd;
      }
      if (iVar28 < 0 == bVar40) {
        if (uVar27 == 0) {
          puVar9 = &DAT_100135c7;
        }
        else {
          puVar9 = (undefined *)param_2[2];
        }
        recovered_10012c78(&local_28,puVar9,uVar23);
        pbVar7 = (byte *)param_1[6];
        if ((int)local_24 < 9) {
          local_24 = 8;
        }
        if (uVar13 < local_24) {
          local_24 = uVar13;
        }
        pbVar24 = (byte *)param_1[5];
        pbVar25 = local_3c + 6 + (int)(uVar13 - local_24) / 2;
        pbVar16 = pbVar7 + param_1[8];
        if ((int)(pbVar25 + local_24) < (int)(pbVar7 + param_1[8])) {
          pbVar16 = pbVar25 + local_24;
        }
        if (uVar35 < 3) {
          uVar35 = 2;
        }
        uVar11 = uVar35 - 2;
        if ((int)local_28 < (int)(uVar35 - 2)) {
          uVar11 = local_28;
        }
        pbVar20 = pbVar29 + 10 + uVar11;
        pbVar29 = pbVar24;
        if ((int)pbVar24 < (int)pbVar20) {
          pbVar29 = pbVar20;
        }
        pbVar10 = pbVar24 + param_1[7];
        if ((int)(pbVar20 + 1) < (int)(pbVar24 + param_1[7])) {
          pbVar10 = pbVar20 + 1;
        }
        if ((int)pbVar7 < (int)pbVar25) {
          pbVar7 = pbVar25;
        }
        bVar41 = SBORROW4((int)pbVar16,(int)pbVar7);
        iVar28 = (int)pbVar16 - (int)pbVar7;
        bVar40 = pbVar16 == pbVar7;
        if ((int)pbVar7 < (int)pbVar16) {
          bVar41 = SBORROW4((int)pbVar10,(int)pbVar29);
          iVar28 = (int)pbVar10 - (int)pbVar29;
          bVar40 = pbVar10 == pbVar29;
        }
        if ((!bVar40 && iVar28 < 0 == bVar41) && (*param_1 != 0)) {
          uVar39 = 0x286dc4;
          if (DAT_100143c8 != '\0') {
            uVar39 = DAT_100142b4;
          }
          uVar11 = (int)pbVar10 - (int)pbVar29;
          uVar26 = uVar11 & 0xfffffff0;
          do {
            puVar38 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar29 * 4);
            if (uVar11 < 0x10) {
              pbVar24 = pbVar29;
LAB_100124e4:
              iVar28 = (int)pbVar24 - (int)pbVar10;
              do {
                puVar38[3] = 0xff;
                bVar40 = iVar28 != -1;
                iVar28 = iVar28 + 1;
                puVar38[2] = (char)uVar39;
                puVar38[1] = (char)((uint)uVar39 >> 8);
                *puVar38 = (char)((uint)uVar39 >> 0x10);
                puVar38 = puVar38 + 4;
              } while (bVar40);
            }
            else {
              puVar21 = (undefined1 *)(param_1[3] * (int)pbVar7 + *param_1 + (int)(uintptr_t)pbVar29 * 4);
              puVar38 = puVar38 + uVar26 * 4;
              uVar27 = uVar26;
              do {
              for(unsigned lane=0;lane<16;lane++){unsigned char *pixel=puVar21+lane*4;pixel[0]=(char)((uint)uVar39 >> 0x10);pixel[1]=(char)((uint)uVar39 >> 8);pixel[2]=(char)uVar39;pixel[3]=255;}
              puVar21+=64;uVar27-=16;
            } while (uVar27 != 0);
              pbVar24 = pbVar29 + uVar26;
              if (uVar11 != uVar26) goto LAB_100124e4;
            }
            pbVar7 = pbVar7 + 1;
          } while (pbVar7 != pbVar16);
        }
      }
    }
  }
  return;
}

#undef DAT_100135c7
#undef DAT_100142a8
#undef DAT_100142ac
#undef DAT_100142b0
#undef DAT_100142b4
#undef DAT_100142d8
#undef DAT_10014320
#undef DAT_10014368
#undef DAT_100143c8
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24

#define local_2c0 (*(int *)(pf_stack_frame + 16))
#define local_2b4 (*(int *)(pf_stack_frame + 28))
#define local_2b0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2ac (*(undefined4 *)(pf_stack_frame + 36))
#define local_2a8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_284 (*(uint *)(pf_stack_frame + 76))
#define local_280 (*(uint *)(pf_stack_frame + 80))
#define local_274 (*(byte *)(pf_stack_frame + 92))
#define local_24c (*(uint *)(pf_stack_frame + 132))
#define local_248 (*(uint *)(pf_stack_frame + 136))
#define uStack_2bc (*(uint *)(pf_stack_frame + 20))
#define uStack_2b8 (*(uint *)(pf_stack_frame + 24))
#define uStack_2a4 (*(uint *)(pf_stack_frame + 44))
#define uStack_2a0 (*(uint *)(pf_stack_frame + 48))
#define auStack_29c (*(undefined1 (*)[668])(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012818
 */

undefined4 recovered_10012818(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[752] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r2 = 0;
  int extraout_r3 = 0;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  longlong lVar14;

  if (param_1 != (int *)0x0) {
    if (param_2 != (int *)0x0) {
      param_4 = *param_1;
    }
    if (param_2 != (int *)0x0 && param_4 != 0) {
      recovered_10006080(auStack_29c,0,0x278);
      iVar5 = recovered_1000e3c8(param_1,auStack_29c,extraout_r2,extraout_r3);
      if ((iVar5 != 0) && ((local_274 & 0x11) == 0)) {
        if (local_248 != 0) {
          local_280 = local_248;
        }
        if (local_24c != 0) {
          local_284 = local_24c;
        }
        if (local_284 == 0) {
          local_284 = param_1[1];
        }
        if (local_280 == 0) {
          local_280 = param_1[2];
        }
        iVar5 = recovered_1000dfd4(param_1,local_284,local_280,local_248);
        if (iVar5 != 0) {
          if (param_1[0xb] == 0) {
            return 0;
          }
          recovered_10006080(&local_2c0,0,0x24);
          local_2c0 = param_1[0xb];
          uStack_2bc = param_1[1];
          uStack_2b8 = param_1[2];
          local_2b4 = param_1[3];
          local_2ac = 0;
          local_2a8 = 0;
          uVar9 = uStack_2bc;
          uVar10 = uStack_2b8;
          if (local_2c0 != 0) {
            for(uint32_t y=0;y<uStack_2b8;y++)for(uint32_t x=0;x<uStack_2bc;x++){
              unsigned char *pixel=(unsigned char *)(uintptr_t)local_2c0+(uintptr_t)y*(uint32_t)local_2b4+(uintptr_t)x*4;
              uint32_t color=param_1[4];pixel[0]=color>>16;pixel[1]=color>>8;pixel[2]=color;pixel[3]=255;
            }
            uVar9=param_1[1];uVar10=param_1[2];
          }
          local_2b0 = param_3;
          uStack_2a4 = uStack_2bc;
          uStack_2a0 = uStack_2b8;
          recovered_1001144c(&local_2c0,param_2,(byte *)0x0,0,uVar9,uVar10);
          uVar6 = recovered_1000db1c(param_1,(byte *)param_1[0xc],(byte *)param_1[0xb],param_1[1],
                                     param_1[2],param_1[3],param_1[4]);
          return uVar6;
        }
      }
    }
  }
  return 0;
}

#undef local_2c0
#undef local_2b4
#undef local_2b0
#undef local_2ac
#undef local_2a8
#undef local_284
#undef local_280
#undef local_274
#undef local_24c
#undef local_248
#undef uStack_2bc
#undef uStack_2b8
#undef uStack_2a4
#undef uStack_2a0
#undef auStack_29c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef DAT_40010974
#define DAT_40010974 (*(uint8_t *)(0x40010974U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
#undef _DAT_40010974
#define _DAT_40010974 (*(code * *)(0x40010974U))
#define auStack_854 (*(undefined1 (*)[2132])(pf_stack_frame + 28))
#define auStack_29c (*(undefined1 (*)[668])(pf_stack_frame + 1492))
#define local_5dc (*(int (*)[375])(pf_stack_frame + 660))
#define local_274 (*(uint *)(pf_stack_frame + 1532))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012a3c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10012a3c(int *param_1)

{
  unsigned char pf_stack_frame[2192] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 extraout_r2_01 = 0;
  undefined4 extraout_r2_02 = 0;
  undefined4 extraout_r2_03 = 0;
  undefined4 uVar3;
  undefined4 extraout_r2_04 = 0;
  int extraout_r3 = 0;
  int extraout_r3_00 = 0;
  int extraout_r3_01 = 0;
  int extraout_r3_02 = 0;
  int extraout_r3_03 = 0;
  int extraout_r3_04 = 0;
  uint uVar4;
  int *unaff_r5;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;

  uVar4 = 0;
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0xe];
    unaff_r5 = param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    recovered_10006080(local_5dc,0,0x340);
    piVar5 = (int *)*unaff_r5;
    piVar8 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar8 = local_5dc;
    }
    uVar3 = extraout_r2;
    iVar1 = extraout_r3;
    if ((*piVar8 != 0) ||
       (iVar2 = recovered_1000d270(piVar8,unaff_r5 + 1), uVar3 = extraout_r2_00,
       iVar1 = extraout_r3_00, iVar2 != 0)) {
      piVar6 = local_5dc;
      if (piVar5 != (int *)0x0) {
        piVar6 = piVar5;
      }
      piVar6[0xf] = 0;
      iVar1 = recovered_1000e3c8(piVar8,auStack_29c,uVar3,iVar1);
      if ((iVar1 != 0) && ((local_274 & 0x11) == 0)) {
        while( true ) {
          recovered_10006080(auStack_854,0,0x278);
          recovered_1000e3c8(piVar8,auStack_854,extraout_r2_01,extraout_r3_01);
          if ((((code *)unaff_r5[0xf] != (code *)0x0) &&
              (iVar1 = (*(code *)unaff_r5[0xf])(piVar8,auStack_854,unaff_r5[0x10]), iVar1 == 0)) ||
             ((iVar1 = (*(code *)unaff_r5[0xe])(piVar8,unaff_r5[0x10]), iVar1 == 0 ||
              (uVar4 = uVar4 + 1, unaff_r5[0x11] - 1U < uVar4)))) break;
          uVar9 = unaff_r5[0x12];
          uVar3 = extraout_r2_02;
          iVar1 = extraout_r3_02;
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          do {
            uVar7 = 0x20c49b;
            if (uVar9 < 0x20c49b) {
              uVar7 = uVar9;
            }
            if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x178))
               || ((_DAT_40010974 == (code *)0x0 ||
                   (iVar2 = (*_DAT_40010974)(uVar7 * 2000), uVar3 = extraout_r2_03,
                   iVar1 = extraout_r3_03, iVar2 == 0)))) {
              if (((_DAT_40010800 == 0x50414d57) && ((_DAT_40010804 != 0 && (0x9f < _DAT_40010808)))
                  ) && (_DAT_4001089c != (code *)0x0)) {
                (*_DAT_4001089c)();
                uVar3 = extraout_r2_04;
                iVar1 = extraout_r3_04;
              }
              break;
            }
            uVar9 = uVar9 - uVar7;
          } while (uVar9 != 0);
          piVar6[0xf] = 0;
          iVar1 = recovered_1000e3c8(piVar8,auStack_29c,uVar3,iVar1);
          if ((iVar1 == 0) || ((local_274 & 0x11) != 0)) break;
        }
      }
      recovered_1000e9f8(piVar8);
      uVar4 = 1;
    }
  }
  return uVar4;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef DAT_40010974
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c
#undef _DAT_40010974
#undef auStack_854
#undef auStack_29c
#undef local_5dc
#undef local_274

#undef DAT_100135c7
#define DAT_100135c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010978
#define DAT_40010978 (*(uint8_t *)(0x40010978U))
#undef DAT_40010a10
#define DAT_40010a10 (*(uint8_t *)(0x40010a10U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010978
#define _DAT_40010978 (*(code * *)(0x40010978U))
#undef _DAT_40010a10
#define _DAT_40010a10 (*(code * *)(0x40010a10U))
#define iStack_58 (*(int *)(pf_stack_frame + 24))
#define iStack_54 (*(int *)(pf_stack_frame + 28))
#define local_4c (*(uint *)(pf_stack_frame + 36))
#define local_48 (*(uint *)(pf_stack_frame + 40))
#define local_40 (*(uint *)(pf_stack_frame + 48))
#define local_3c (*(uint *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10012c78(uint *param_1,undefined *param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;

  recovered_10006080(&local_40,0,0x20);
  recovered_10006080(&iStack_58,0,0x18);
  puVar2 = &DAT_100135c7;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x213 < _DAT_40010808)) &&
     ((_DAT_40010a10 != (code *)0x0 &&
      (iVar1 = (*_DAT_40010a10)(0,puVar2,param_3,&local_40), iVar1 != 0)))) {
    local_4c = local_40;
    local_48 = local_3c;
  }
  else {
    if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
       ((_DAT_40010808 < 0x17c ||
        ((_DAT_40010978 == (code *)0x0 ||
         (iVar1 = (*_DAT_40010978)(puVar2,0xffffffff,param_3,0,&iStack_58), iVar1 == 0)))))) {
      local_48 = 0;
      *param_1 = 0;
      goto LAB_10012d3c;
    }
    if ((((iStack_58 != 0 || iStack_54 != 0) && (_DAT_40010800 == 0x50414d57)) &&
        (_DAT_40010804 != 0)) && ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
      (*_DAT_40010850)();
    }
  }
  *param_1 = local_4c & ~((int)local_4c >> 0x1f);
  local_48 = local_48 & ~((int)local_48 >> 0x1f);
LAB_10012d3c:
  param_1[1] = local_48;
  return;
}

#undef DAT_100135c7
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010978
#undef DAT_40010a10
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_40010978
#undef _DAT_40010a10
#undef iStack_58
#undef iStack_54
#undef local_4c
#undef local_48
#undef local_40
#undef local_3c

#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e10
 */

void recovered_10012e10(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;

  iVar15 = 0;
  uVar10 = *(uint *)(param_2 + 0x14);
  uVar1 = *(uint *)(param_2 + 0x34) & ~((int)*(uint *)(param_2 + 0x34) >> 0x1f);
  uVar12 = *(uint *)(param_2 + 0x38) & ~((int)*(uint *)(param_2 + 0x38) >> 0x1f);
  pbVar7 = (byte *)(uVar1 + param_4);
  pbVar5 = (byte *)(uVar12 + param_3);
  pbVar17 = pbVar7;
  if (param_7 != 0) {
    pbVar17 = pbVar5;
  }
  if (1 < uVar10) {
    iVar15 = *(int *)(param_2 + 0x18) * (uVar10 - 1);
  }
  if (*(int *)(param_2 + 0x10) != 0 && uVar10 != 0) {
    iVar16 = 0;
    uVar14 = 0;
    uVar2 = param_6 - (uVar1 + (*(uint *)(param_2 + 0x3c) &
                               ~((int)*(uint *)(param_2 + 0x3c) >> 0x1f)));
    uVar13 = 0;
    uVar1 = param_5 - (uVar12 + (*(uint *)(param_2 + 0x40) &
                                ~((int)*(uint *)(param_2 + 0x40) >> 0x1f)));
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
    uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
    do {
      puVar3 = (uint *)(*(int *)(param_2 + 0x10) + iVar16);
      if (*puVar3 == 4) {
        uVar13 = uVar13 + 1;
      }
      else {
        puVar11 = &local_28;
        recovered_10010df4(puVar11,puVar3,uVar1,uVar2);
        if (param_7 == 0) {
          puVar11 = &local_24;
        }
        uVar10 = *(uint *)(param_2 + 0x14);
        iVar15 = *puVar11 + iVar15;
      }
      uVar14 = uVar14 + 1;
      iVar16 = iVar16 + 0x4c;
    } while (uVar14 < uVar10);
    if (uVar13 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar2;
      if (param_7 != 0) {
        uVar12 = uVar1;
      }
      uVar12 = recovered_10003dd8(uVar12 - iVar15 & ~((int)(uVar12 - iVar15) >> 0x1f),uVar13);
    }
    if (uVar10 != 0) {
      iVar15 = 0;
      uVar10 = 0;
      do {
        iVar16 = *(int *)(param_2 + 0x10);
        puVar3 = (uint *)(iVar16 + iVar15);
        recovered_10010df4(&local_28,puVar3,uVar1,uVar2);
        if (*(int *)(iVar16 + iVar15) == 4) {
          uVar13 = uVar12;
          uVar4 = uVar2;
          uVar8 = uVar1;
          uVar14 = uVar12;
          if (param_7 == 0) goto LAB_10013064;
LAB_100130bc:
          iVar16 = *(int *)(param_2 + 0x1c);
          uVar13 = uVar4;
          if (iVar16 == 3) {
            uVar13 = uVar2;
          }
          if ((iVar16 == 1) && ((int)uVar13 < (int)uVar2)) {
            pbVar9 = pbVar7 + (int)(uVar2 - uVar4) / 2;
          }
          else {
            pbVar9 = pbVar7;
            if ((int)uVar13 < (int)uVar2) {
              pbVar9 = pbVar7 + (uVar2 - uVar4);
            }
            if (iVar16 != 2) {
              pbVar9 = pbVar7;
            }
          }
          pbVar6 = pbVar17;
          uVar4 = uVar14;
        }
        else {
          uVar13 = local_24;
          uVar4 = local_24;
          uVar8 = local_28;
          uVar14 = local_28;
          if (param_7 != 0) goto LAB_100130bc;
LAB_10013064:
          iVar16 = *(int *)(param_2 + 0x1c);
          uVar14 = uVar8;
          if (iVar16 == 3) {
            uVar14 = uVar1;
          }
          if ((iVar16 == 1) && ((int)uVar14 < (int)uVar1)) {
            pbVar6 = pbVar5 + (int)(uVar1 - uVar8) / 2;
          }
          else {
            pbVar6 = pbVar5;
            if ((int)uVar14 < (int)uVar1) {
              pbVar6 = pbVar5 + (uVar1 - uVar8);
            }
            if (iVar16 != 2) {
              pbVar6 = pbVar5;
            }
          }
          pbVar9 = pbVar17;
          uVar4 = uVar13;
        }
        iVar16 = *(int *)(param_2 + 0x18);
        recovered_1001144c(param_1,(int *)puVar3,pbVar6,(int)pbVar9,uVar14,uVar13);
        pbVar17 = pbVar17 + iVar16 + uVar4;
        uVar10 = uVar10 + 1;
        iVar15 = iVar15 + 0x4c;
      } while (uVar10 < *(uint *)(param_2 + 0x14));
    }
  }
  return;
}

#undef local_28
#undef local_24

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010978
#define DAT_40010978 (*(uint8_t *)(0x40010978U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010978
#define _DAT_40010978 (*(code * *)(0x40010978U))
#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_38 (*(int (*)[14])(pf_stack_frame + 24))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001311c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1001311c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,undefined4 param_8,int param_9,int param_10)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte bVar2;
  int iVar3;
  int extraout_r1 = 0;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r11;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;

  recovered_10006080(local_38,0,0x18);
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = extraout_r1;
  if (param_6 != 0) {
    iVar4 = *param_1;
  }
  if (param_6 == 0 || iVar4 == 0) {
    return;
  }
  iVar4 = param_4;
  if (0 < param_4) {
    iVar4 = param_5;
    unaff_r11 = param_5;
  }
  if (iVar4 < 1) {
    return;
  }
  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (_DAT_40010804 == 0) {
    return;
  }
  if (_DAT_40010808 < 0x17c) {
    return;
  }
  if (_DAT_40010978 == (code *)0x0) {
    return;
  }
  uVar17 = (*_DAT_40010978)(param_6,0xffffffff,param_8,param_7 << 8 | 0xff,local_38);
  bVar15 = (int)uVar17 == 0;
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  if (!bVar15) {
    iVar4 = local_38[0];
  }
  if (bVar15 || iVar4 == 0) {
    return;
  }
  if ((param_10 == 0) || (iVar5 = param_4 + -2, (int)local_2c < iVar5)) {
    iVar13 = param_2;
    if (param_9 == 2) {
      iVar5 = param_4;
      if ((int)local_2c < param_4) goto LAB_10013268;
    }
    else if ((param_9 == 1) && ((int)local_2c < param_4)) {
      iVar13 = param_2 + (int)(param_4 - local_2c) / 2;
    }
  }
  else {
LAB_10013268:
    iVar13 = (param_2 + iVar5) - local_2c;
  }
  iVar5 = param_3;
  if ((int)local_28 < unaff_r11) {
    if (local_28 == 0) goto LAB_10013544;
    iVar5 = param_3 + (int)(unaff_r11 - local_28) / 2;
  }
  uVar10 = 0;
  iVar8 = iVar5;
  do {
    iVar14 = uVar10 + iVar5;
    if ((((param_3 <= iVar14) && (iVar14 < param_3 + unaff_r11)) && (-1 < iVar14)) &&
       ((iVar14 < param_1[2] && (local_2c != 0)))) {
      uVar12 = 0;
      iVar11 = 3;
      do {
        iVar9 = iVar13 + uVar12;
        if (((param_2 <= iVar9) && (iVar9 < param_2 + param_4)) &&
           ((-1 < iVar9 && (((iVar9 < param_1[1] && (*param_1 != 0)) && (iVar14 < param_1[2])))))) {
          iVar6 = param_1[5];
          bVar16 = SBORROW4(iVar6,iVar9);
          iVar3 = iVar6 - iVar9;
          bVar15 = iVar6 == iVar9;
          iVar7 = iVar6;
          if (iVar6 <= iVar9) {
            iVar7 = param_1[6];
            bVar16 = SBORROW4(iVar7,iVar14);
            iVar3 = iVar7 - iVar14;
            bVar15 = iVar7 == iVar14;
            local_40 = iVar6;
          }
          if (((bVar15 || iVar3 < 0 != bVar16) && (iVar9 < param_1[7] + local_40)) &&
             (iVar14 < param_1[8] + iVar7)) {
            iVar9 = uVar10 * local_24 + iVar11;
            bVar2 = *(byte *)(iVar4 + iVar9);
            if (bVar2 != 0) {
              iVar9 = iVar4 + iVar9;
              local_40 = iVar8 * param_1[3] + *param_1 + iVar13 * 4;
              iVar3 = local_40 + iVar11;
              if (bVar2 == 0xff) {
                *(undefined1 *)(iVar3 + -3) = *(undefined1 *)(iVar9 + -3);
                iVar9 = uVar10 * local_24 + iVar4 + uVar12 * 4;
                iVar3 = local_40 + uVar12 * 4;
                *(undefined1 *)(iVar3 + 1) = *(undefined1 *)(iVar9 + 1);
                *(undefined1 *)(iVar3 + 2) = *(undefined1 *)(iVar9 + 2);
              }
              else {
                uVar1 = bVar2 ^ 0xff;
                iVar7 = local_40 + uVar12 * 4;
                *(char *)(iVar3 + -3) =
                     (char)((ulonglong)
                            ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar3 + -3) +
                             (int)(short)(ushort)*(byte *)(iVar9 + -3) * (int)(short)(ushort)bVar2 +
                            0x7f) * 0x1010102 >> 0x20);
                iVar9 = uVar10 * local_24 + iVar4 + uVar12 * 4;
                *(char *)(iVar7 + 1) =
                     (char)((ulonglong)
                            ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar7 + 1) +
                             (int)(short)(ushort)*(byte *)(iVar9 + 1) * (int)(short)(ushort)bVar2 +
                            0x7f) * 0x1010102 >> 0x20);
                *(char *)(iVar7 + 2) =
                     (char)((ulonglong)
                            ((int)(short)uVar1 * (int)(short)(ushort)*(byte *)(iVar7 + 2) +
                             (int)(short)(ushort)*(byte *)(iVar9 + 2) * (int)(short)(ushort)bVar2 +
                            0x7f) * 0x1010102 >> 0x20);
              }
              *(undefined1 *)(local_40 + iVar11) = 0xff;
            }
          }
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar12 < local_2c);
    }
    uVar10 = uVar10 + 1;
    iVar8 = iVar8 + 1;
  } while (uVar10 < local_28);
LAB_10013544:
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
    (*_DAT_40010850)(iVar4);
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010978
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_40010978
#undef local_40
#undef local_38
#undef local_2c
#undef local_28
#undef local_24

/* Release 1.1 aggregate exports. */
PFUIInsets pf_ui_insets(int32_t all){return (PFUIInsets){all,all,all,all};}
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y){return (PFUIInsets){y,x,y,x};}
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l){return (PFUIInsets){t,r,b,l};}
PFUIView pf_ui_view_empty(void){PFUIView v;recovered_10010728(&v);return v;}
PFUIView pf_ui_text(uintptr_t text){PFUIView v=pf_ui_view_empty();v.type=1;v.text=text;return v;}
PFUIView pf_ui_rectangle(uint32_t color){PFUIView v=pf_ui_view_empty();v.type=2;v.background=color;v.flags=2;return v;}
PFUIView pf_ui_spacer(void){PFUIView v=pf_ui_view_empty();v.type=4;return v;}
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_text(text);v.type=3;v.callback=callback;v.userdata=userdata;return v;}
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_view_empty();v.type=5;v.children=children;v.count=count;v.spacing=spacing;return v;}
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_hstack(children,count,spacing);v.type=6;return v;}
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count){PFUIView v=pf_ui_hstack(children,count,0);v.type=7;return v;}
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding){v.padding=padding;return v;}
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color){v.foreground=color;v.flags|=1;return v;}
PFUIView pf_ui_view_background(PFUIView v,uint32_t color){v.background=color;v.flags|=2;return v;}
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height){if(width>=0){v.flags|=4;v.width=width;}if(height>=0){v.flags|=8;v.height=height;}return v;}
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale){v.scale=scale?scale:1;return v;}
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment){v.alignment=alignment<4?alignment:1;return v;}
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height){PFUIWindowSpec value;recovered_1000cad0(&value,title,width,height);return value;}
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value){s.transparency=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value){s.shadow=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount){s.mode=(uint32_t)mode+1<5?mode:-1;s.amount=amount<100?amount:100;return s;}
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s){s.mode=0;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s){s.mode=1;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value){s.mode=2;s.amount=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value){s.mode=3;s.amount=value<100?value:100;return s;}

PFUIView pf_ui_text_field(uintptr_t text,uintptr_t capacity,int password,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_view_empty();v.type=8;v.text=text;v.text_capacity=capacity;v.alignment=0;v.callback=callback;v.userdata=userdata;if(password)v.flags|=16;return v;}

/* Release 1.1 service forwards. */
/* Explicit service wrappers preserve arguments across native tail calls. */
static uintptr_t pf_ui_service(uint32_t offset){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x280800U;
#endif
 if(api[0]!=0x50414d57U||!api[1]||api[2]<offset+4)return 0;
 return api[offset/4];
}
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b){uintptr_t fn=pf_ui_service(0xb0);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,a,b):0;}
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count){uintptr_t fn=pf_ui_service(0xac);return fn?((uint32_t(*)(void*,uint32_t,void*))fn)(records,capacity,count):0;}
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command){uintptr_t fn=pf_ui_service(0xf0);return fn?((uint32_t(*)(uint32_t,uint32_t,uint32_t))fn)(id,menu,command):0;}
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons,uint32_t flags){uintptr_t fn=pf_ui_service(0xfc);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,buttons,flags):0;}
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state){uintptr_t fn=pf_ui_service(0x100);return window&&*window&&state&&fn?((uint32_t(*)(uint32_t,void*))fn)(*window,state):0;}
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,14,10);}
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,1,1);}
