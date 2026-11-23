/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c0
 */

uint recovered_100010c0(uint a,uint b)

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
 * Address: 0x10001110
 */

uint recovered_10001110(uint a,uint b)

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
 * Address: 0x10001148
 */

uint recovered_10001148(uint a,uint b)

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
 * Address: 0x100011b8
 */

uint recovered_100011b8(uint a,uint b)

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


/* Recovered compiler scalar conversion; Pooka's Free Software License. */
unsigned long long recovered_10001224(float value){return (unsigned long long)value;}


/* Recovered compiler scalar conversion; Pooka's Free Software License. */
long long recovered_10001234(float value){return (long long)value;}


/* Recovered compiler scalar conversion; Pooka's Free Software License. */
float recovered_10001244(unsigned long long value){return (float)value;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc8
 */

float recovered_10001260(undefined4 param_1,undefined4 param_2)

{
  double dVar1;

  dVar1 = recovered_10004a98(CONCAT44(param_2,param_1));
  return (float)(double)(((ulonglong)dVar1 & 0xffffffff00000000) + ((ulonglong)dVar1 & 0xffffffff));
}



#undef DAT_100100a8
#define DAT_100100a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

void recovered_10001280(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  DAT_100100a8 = 0;
  recovered_1000130c();
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return;
}

#undef DAT_100100a8
#undef DAT_100100b0

#undef DAT_100100a8
#define DAT_100100a8 (*(char *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef DAT_100100ac
#define DAT_100100ac (*(int *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b4
#define DAT_100100b4 (*(int *)(((uintptr_t)pf_module_state + 0x2c4U)))
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
 * Address: 0x1000130c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000130c(void)

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
  if (DAT_100100a8 != '\0') {
    return;
  }
  DAT_100100ac = 0;
  DAT_100100b4 = 0;
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
        if (iVar11 == 0) goto LAB_1000150c;
      }
      puVar9 = local_ac + 3;
      do {
        recovered_10006438((int *)puVar9[-1],(int *)*puVar9,&local_24);
        iVar11 = iVar11 + -1;
        puVar9 = puVar9 + 2;
      } while (iVar11 != 0);
      if (DAT_100100ac != 0) goto LAB_1000153c;
    }
  }
LAB_1000150c:
  uVar2 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar2 = _DAT_40010088 & 0xfffffff0;
  }
  piVar4 = (int *)(uVar2 - 0x300000);
  if (uVar2 < 0x300021) {
    piVar4 = (int *)0x3d00000;
  }
  recovered_10006438((int *)0x300000,piVar4,&local_24);
LAB_1000153c:
  if (DAT_100100b4 == 0) {
    DAT_100100b4 = DAT_100100ac;
  }
  DAT_100100a8 = 1;
  return;
}

#undef DAT_100100a8
#undef DAT_100100ac
#undef DAT_100100b4
#undef DAT_40010088
#undef DAT_4001008c
#undef _DAT_40010088
#undef _DAT_4001008c
#undef local_ac
#undef local_24

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000158c
 */

bool recovered_1000158c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar3 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar3 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  bVar1 = recovered_10001608(param_1,param_2,param_3);
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return bVar1;
}

#undef DAT_100100b0

#undef DAT_100100ac
#define DAT_100100ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b4
#define DAT_100100b4 (*(int * *)(((uintptr_t)pf_module_state + 0x2c4U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001608
 */

bool recovered_10001608(undefined4 *param_1,undefined4 *param_2,int param_3)

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
      recovered_1000130c();
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
        piVar1 = DAT_100100ac;
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
      piVar3 = (int *)&DAT_100100ac;
      iVar6 = 0;
      do {
        iVar5 = iVar6;
        iVar6 = *piVar3;
        piVar3 = (int *)(iVar6 + 4);
      } while (iVar6 != 0);
      local_24 = iVar5;
      do {
        recovered_10006438((int *)*param_1,(int *)*param_2,&local_24);
        unaff_r6 = unaff_r6 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (unaff_r6 != 0);
      if (DAT_100100b4 == (int *)0x0) {
        DAT_100100b4 = DAT_100100ac;
      }
      bVar10 = local_24 != iVar5;
    }
  }
  return bVar10;
}

#undef DAT_100100ac
#undef DAT_100100b4
#undef DAT_68000000
#undef local_24

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
#define local_10 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001850
 */

bool recovered_10001850(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  local_14 = param_2;
  local_10 = param_1;
  bVar1 = recovered_10001608(&local_10,&local_14,1);
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return bVar1;
}

#undef DAT_100100b0
#undef local_14
#undef local_10

#undef DAT_100100ac
#define DAT_100100ac (*(uint * *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e8
 */

int recovered_100018e8(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000130c();
  iVar1 = 0;
  puVar3 = DAT_100100ac;
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
  DAT_100100b0 = 0;
  return iVar1;
}

#undef DAT_100100ac
#undef DAT_100100b0

#undef DAT_100100ac
#define DAT_100100ac (*(int * *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001998
 */

long recovered_10001998(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000130c();
  iVar1 = 0;
  for (piVar3 = DAT_100100ac; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((char)piVar3[3] == '\x01') {
      iVar1 = iVar1 + *piVar3;
    }
  }
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return iVar1;
}

#undef DAT_100100ac
#undef DAT_100100b0

#undef DAT_100100ac
#define DAT_100100ac (*(int * *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a54
 */

int recovered_10001a54(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000130c();
  iVar1 = 0;
  for (piVar3 = DAT_100100ac; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3 + iVar1;
  }
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return iVar1;
}

#undef DAT_100100ac
#undef DAT_100100b0

#undef DAT_100100ac
#define DAT_100100ac (*(int * *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001afc
 */

long recovered_10001afc(int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000130c();
  iVar1 = 0;
  for (piVar3 = DAT_100100ac; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = iVar1 + *piVar3;
  }
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return iVar1;
}

#undef DAT_100100ac
#undef DAT_100100b0

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bac
 */

uint * recovered_10001bac(int param_1,int *in_r3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int iVar3;

  do {
    iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar1 = recovered_10001c30(param_1,(uint *)0x0,(uint *)0xffffffff);
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return puVar1;
}

#undef DAT_100100b0

#undef DAT_100100ac
#define DAT_100100ac (*(uint * *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b4
#define DAT_100100b4 (*(uint * *)(((uintptr_t)pf_module_state + 0x2c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c30
 */

uint * recovered_10001c30(int param_1,uint *param_2,uint *param_3)

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
    recovered_1000130c();
    puVar4 = DAT_100100ac;
    puVar5 = DAT_100100b4;
    if (DAT_100100b4 == (uint *)0x0) {
      puVar5 = DAT_100100ac;
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
              if (uVar7 < uVar8) goto joined_r0x10001d10;
            }
          }
          else {
joined_r0x10001d10:
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
LAB_10001e08:
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
                    DAT_100100b4 = DAT_100100ac;
                    *(undefined1 *)(puVar2 + 3) = 0;
                    if (puVar4 != (uint *)0x0) {
                      DAT_100100b4 = puVar4;
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
                      puVar2 = recovered_10006638(puVar2,puVar3);
                      if (puVar2 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *puVar2;
                      goto LAB_10001e08;
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

#undef DAT_100100ac
#undef DAT_100100b4

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e88
 */

void recovered_10001e88(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_10001c30(param_1,(uint *)0x0,param_2);
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return;
}

#undef DAT_100100b0

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f10
 */

uint * recovered_10001f10(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar3 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar3 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001c30(param_1,param_2,param_3);
  }
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return puVar2;
}

#undef DAT_100100b0

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa0
 */

void recovered_10001fa0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  do {
    iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar2 != 0);
  DataMemoryBarrier(0xb);
  while (iVar1 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar1 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar2 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar2 != 0);
    DataMemoryBarrier(0xb);
  }
  recovered_1000201c(param_1);
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return;
}

#undef DAT_100100b0

#undef DAT_100100b4
#define DAT_100100b4 (*(uint * *)(((uintptr_t)pf_module_state + 0x2c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000201c
 */

void recovered_1000201c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  if (param_1 == 0) {
    return;
  }
  recovered_1000130c();
  *(undefined1 *)(param_1 + -4) = 1;
  puVar1 = *(uint **)(param_1 + -0xc);
  puVar4 = (uint *)(param_1 + -0x10);
  if ((puVar1 != (uint *)0x0) && ((char)puVar1[3] == '\x01')) {
    uVar3 = *puVar4;
    while (((uVar3 < 0xfffffff0 && ((uint *)(param_1 + uVar3) == puVar1)) &&
           (*puVar1 <= -uVar3 - 0x11))) {
      puVar2 = (uint *)puVar1[1];
      uVar3 = uVar3 + *puVar1 + 0x10;
      if (DAT_100100b4 == puVar1) {
        DAT_100100b4 = puVar4;
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
          if (DAT_100100b4 == puVar4) {
            DAT_100100b4 = puVar1;
          }
          puVar2[2] = (uint)puVar1;
          puVar4 = puVar2;
        } while ((char)puVar2[3] != '\0');
      }
      puVar4 = puVar1;
    }
  }
  DAT_100100b4 = puVar4;
  return;
}

#undef DAT_100100b4

#undef DAT_100100b0
#define DAT_100100b0 (*(int *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef DAT_100100b4
#define DAT_100100b4 (*(uint * *)(((uintptr_t)pf_module_state + 0x2c4U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002188
 */

uint * recovered_10002188(uint *param_1,uint param_2)

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
    iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
    iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
  } while (iVar8 != 0);
  DataMemoryBarrier(0xb);
  while (iVar4 != 0) {
    while (DAT_100100b0 != 0) {
      HintYield();
    }
    do {
      iVar4 = pf_arm_ldrex32(((uintptr_t)pf_module_state+0x2c0U));
      iVar8 = pf_arm_strex32(((uintptr_t)pf_module_state+0x2c0U),1);
    } while (iVar8 != 0);
    DataMemoryBarrier(0xb);
  }
  if (param_1 == (uint *)0x0) {
    puVar3 = recovered_10001c30(param_2,(uint *)0x0,(uint *)0xffffffff);
    goto LAB_100023bc;
  }
  if (param_2 == 0) {
    recovered_1000201c((int)param_1);
    puVar3 = (uint *)0x0;
    goto LAB_100023bc;
  }
  puVar3 = (uint *)0x0;
  if (0xfffffff0 < param_2) goto LAB_100023bc;
  recovered_1000130c();
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
          DAT_100100b4 = (uint *)((int)param_1 + (int)puVar12);
          *DAT_100100b4 = ((int)puVar7 - (int)puVar12) - 0x10;
          uVar1 = param_1[-3];
          *(undefined1 *)(DAT_100100b4 + 3) = 1;
          DAT_100100b4[2] = (uint)puVar6;
          DAT_100100b4[1] = uVar1;
          if (uVar1 != 0) {
            *(uint **)(uVar1 + 8) = DAT_100100b4;
          }
          param_1[-3] = (uint)DAT_100100b4;
          param_1[-4] = (uint)puVar12;
          puVar3 = param_1;
        }
      }
    }
    goto LAB_100023bc;
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
      puVar3 = DAT_100100b4;
      do {
        if (((puVar2 == (uint *)0x0) || ((char)puVar2[3] != '\x01')) ||
           (((uint *)0xffffffef < puVar7 ||
            (((uint *)((int)param_1 + (int)puVar7) != puVar2 ||
             (uVar1 = *puVar2, -(int)puVar7 - 0x11U < uVar1)))))) break;
        bVar15 = puVar3 == puVar2;
        puVar2 = (uint *)puVar2[1];
        if (bVar15) {
          puVar3 = puVar6;
          DAT_100100b4 = puVar6;
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
        iVar4 = recovered_100066bc(puVar6,(int)puVar12);
        if (iVar4 != 0) {
          DAT_100100b4 = (uint *)param_1[-3];
        }
        *(undefined1 *)(param_1 + -1) = 0;
        puVar3 = param_1;
      }
      goto LAB_100023bc;
    }
  }
  puVar7 = recovered_10001c30((int)puVar12,(uint *)0x0,(uint *)0xffffffff);
  puVar3 = (uint *)0x0;
  if (puVar7 == (uint *)0x0) goto LAB_100023bc;
  puVar6 = (uint *)*puVar6;
  if (puVar6 < puVar12) {
    puVar12 = puVar6;
  }
  puVar3 = puVar7;
  puVar2 = param_1;
  if (puVar12 < &SupervisorCall) {
LAB_1000248c:
    if (puVar12 != (uint *)0x0) goto LAB_10002494;
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
            if (uVar14 == uVar11) goto LAB_10002674;
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
LAB_10002674:
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
          if (uVar14 == uVar11) goto LAB_1000248c;
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
      goto LAB_1000248c;
    }
LAB_10002494:
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
      if (puVar12 == puVar13) goto LAB_100024f0;
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
LAB_100024f0:
  recovered_1000201c((int)param_1);
  puVar3 = puVar7;
LAB_100023bc:
  DataMemoryBarrier(0xb);
  DAT_100100b0 = 0;
  return puVar3;
}

#undef DAT_100100b0
#undef DAT_100100b4
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_0000000c
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002728
 */

longlong recovered_10002728(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000277c
 */

undefined8 recovered_1000277c(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_100027d0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1000281c
 */

undefined8 recovered_1000281c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002900
 */

undefined8 recovered_10002900(uint in_r0,uint in_r1,uint in_r2,uint in_r3)

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
 * Address: 0x10002980
 */

undefined8 recovered_10002980(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002a98
 */

undefined8 recovered_10002a98(uint param_1,uint param_2,uint param_3,uint param_4)

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

void recovered_10002b54(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002b5c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002b68(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10002bbc(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002c0c(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c60
 */

void * recovered_10002c60(void *dst,void *src,uint bytes)

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
    if ((((uint)src ^ (uint)dst) & 3) != 0) goto LAB_10002c9c;
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
          if (uVar6 == uVar9) goto LAB_10002e30;
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
LAB_10002e30:
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
        if (uVar9 == uVar6) goto LAB_10002c94;
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
LAB_10002c94:
  if (uVar8 == 0) {
    return dst;
  }
LAB_10002c9c:
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
 * Address: 0x10002ee4
 */

void * recovered_10002ee4(void *dst,void *src,uint bytes)

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
      goto LAB_10002f2c;
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
          if (puVar8 == (undefined8 *)bytes) goto LAB_100031b8;
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
LAB_100031b8:
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
        if ((undefined8 *)bytes == puVar8) goto LAB_10003234;
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
LAB_10003234:
    if (uVar9 == 0) {
      return dst;
    }
LAB_10002f2c:
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
    goto LAB_10002fa8;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_10003244:
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
          goto LAB_10003244;
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
        if (uVar5 == uVar7) goto LAB_10003320;
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
LAB_10003320:
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
      if (uVar7 == uVar5) goto LAB_100033dc;
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
LAB_100033dc:
  if (uVar9 == 0) {
    return dst;
  }
LAB_10002fa8:
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
 * Address: 0x100033f0
 */

void * recovered_100033f0(void *dst,int byte,uint bytes)

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
  if (bytes < 8) goto joined_r0x10003578;
  iVar8 = (byte & 0xffU) * 0x1010101;
  piVar10 = dst;
  if (((uint)dst & 3) == 0) {
joined_r0x10003490:
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
        if (uVar6 == uVar7) goto joined_r0x1000351c;
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
      goto joined_r0x10003490;
    }
  }
joined_r0x1000351c:
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
      if (uVar7 == uVar6) goto joined_r0x10003578;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x10003578:
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
 * Address: 0x100035f0
 */

void recovered_100035f0(undefined1 *param_1,int param_2)

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
  if ((uint)param_2 < 8) goto joined_r0x10003770;
  if (((uint)param_1 & 3) == 0) {
joined_r0x1000368c:
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
        if (uVar7 == uVar8) goto joined_r0x10003710;
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
      goto joined_r0x1000368c;
    }
  }
joined_r0x10003710:
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
      if (uVar7 == uVar8) goto joined_r0x10003770;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10003770:
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
 * Address: 0x100037ec
 */

void recovered_100037ec(undefined1 *param_1,int param_2)

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
  if ((uint)param_2 < 8) goto joined_r0x1000396c;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10003888:
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
        if (uVar7 == uVar8) goto joined_r0x1000390c;
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
      goto joined_r0x10003888;
    }
  }
joined_r0x1000390c:
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
      if (uVar7 == uVar8) goto joined_r0x1000396c;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x1000396c:
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
 * Address: 0x100039e8
 */

char * recovered_100039e8(int param_1,char param_2,int param_3)

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
 * Address: 0x10003a1c
 */

int recovered_10003a1c(char *param_1,char *param_2,int param_3)

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
LAB_10003b14:
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
      if (uVar5 != uVar6) goto LAB_10003c0c;
      puVar7 = (uint *)(param_1 + 1);
      uVar5 = param_3 - 1U;
      puVar1 = (uint *)(param_2 + 1);
      if (param_3 - 1U != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)(byte)*(uint *)(param_2 + 1);
        uVar5 = (uint)(byte)*puVar7;
        if (uVar5 != uVar6) goto LAB_10003c0c;
        puVar7 = (uint *)(param_1 + 2);
        uVar5 = param_3 - 2U;
        puVar1 = (uint *)(param_2 + 2);
        if (param_3 - 2U != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)(byte)*(uint *)(param_2 + 2);
          uVar5 = (uint)(byte)*puVar7;
          if (uVar5 != uVar6) goto LAB_10003c0c;
          puVar7 = (uint *)(param_1 + 3);
          uVar5 = param_3 - 3U;
          puVar1 = (uint *)(param_2 + 3);
          if (param_3 - 3U != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)(byte)*(uint *)(param_2 + 3);
            uVar5 = (uint)(byte)*puVar7;
            if (uVar5 != uVar6) goto LAB_10003c0c;
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
LAB_10003b44:
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
      if (uVar5 != uVar6) goto LAB_10003b44;
      puVar1 = (uint *)((int)param_2 + 0x10);
      puVar7 = (uint *)((int)param_1 + 0x10);
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < (uint)param_3; param_3 = param_3 - 4) {
      if (*(uint *)param_1 != *(uint *)param_2) {
        iVar2 = recovered_10003c14((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = (char *)((int)param_2 + 4);
      param_1 = (char *)((int)param_1 + 4);
    }
    goto LAB_10003b14;
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
LAB_10003c0c:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c14
 */

int recovered_10003c14(byte *param_1,byte *param_2)

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

bool recovered_10003c64(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003c78(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003c8c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003ca4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cd0
 */

uchar recovered_10003cd0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003cf0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003d04(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003d14(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d24
 */

uint recovered_10003d24(char *text)

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
 * Address: 0x10003d4c
 */

int recovered_10003d4c(byte *param_1,byte *param_2)

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
LAB_10003d84:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003d84;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

int recovered_10003d90(byte *param_1,byte *param_2)

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
LAB_10003dc8:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003dc8;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003dd4(int param_1,int param_2)

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
 * Address: 0x10003df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10003df0(int param_1)

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
    if ((((uint)puVar3 ^ param_1) & 3) != 0) goto LAB_10003eb8;
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
          if (uVar8 == uVar11) goto LAB_1000404c;
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
LAB_1000404c:
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
        if (uVar11 == uVar8) goto LAB_10003eb0;
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
LAB_10003eb0:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10003eb8:
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
 * Address: 0x10004104
 */

char * recovered_10004104(char *param_1,char param_2)

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
 * Address: 0x10004138
 */

int recovered_10004138(int param_1,char *param_2)

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
 * Address: 0x1000419c
 */

int recovered_1000419c(char *param_1,char *param_2)

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
 * Address: 0x10004204
 */

char * recovered_10004204(char *param_1,char *param_2)

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
 * Address: 0x10004264
 */

char * recovered_10004264(char *param_1,char *param_2)

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


#undef DAT_1000fe14
#define DAT_1000fe14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c8
 */

undefined * recovered_100042c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fe14;
}

#undef DAT_1000fe14

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x218U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042d8
 */

undefined ** recovered_100042d8(void)

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
#define local_14 (*(undefined4 *)(pf_stack_frame + 44))
#define local_10 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_20 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_18 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100042e8(undefined4 *param_1)

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
#undef local_14
#undef local_10
#undef uStack_20
#undef uStack_18
#undef local_24
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004398
 */

double recovered_10004398(undefined4 param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double in_d0;

  if (param_3 < 1) {
    if (0x7fffffff < (uint)param_3) {
      do {
        bVar2 = param_3 != -1;
        param_3 = param_3 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = param_3 + 1;
    do {
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return in_d0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043dc
 */

double recovered_100043dc(undefined4 param_1,undefined4 param_2,int *param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10004494(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100044cc
 */

double recovered_100044cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  uint in_s1;
  double dVar3;

  uVar2 = VectorFloatToSigned(CONCAT44(param_4,param_3),3);
  dVar3 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar3 != pf_bits_double(CONCAT44(param_4,param_3))) {
    return pf_bits_double(CONCAT44(in_s1,uVar2));
  }
  if (uVar2 == 0) {
    return (double)((ulonglong)in_s1 << 0x20);
  }
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
  }
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return pf_bits_double(CONCAT44(in_s1,uVar2));
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_1000454c(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000457c
 */

double recovered_1000457c(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  int iVar1;
  undefined4 in_s1;

  iVar1 = VectorFloatToSigned(CONCAT44(param_2,param_1),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44(in_s1,iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

double recovered_100045c0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double in_d0;

  if (0.0 < pf_bits_double(CONCAT44(param_2,param_1))) {
    iVar1 = 0x18;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return in_d0;
}


#undef DAT_10004738
#define DAT_10004738 (*(uint64_t *)(((uintptr_t)&pf_window_literal_10004738)))
#undef DAT_10004740
#define DAT_10004740 (*(uint64_t *)(((uintptr_t)&pf_window_literal_10004740)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004608
 */

double recovered_10004608(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  undefined4 in_s0;
  undefined4 in_s1;
  double dVar4;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar4 < 0.0) {
    return pf_bits_double(CONCAT44(in_s1,in_s0));
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
  return pf_bits_double(CONCAT44(in_s1,iVar2));
}

#undef DAT_10004738
#undef DAT_10004740

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004748
 */

undefined8 recovered_10004748(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10004908(dVar1);
  return uVar2;
}


#undef DAT_10004808
#define DAT_10004808 (*(double *)(((uintptr_t)&pf_window_literal_10004808)))
#undef DAT_10004810
#define DAT_10004810 (*(double *)(((uintptr_t)&pf_window_literal_10004810)))
#undef DAT_10004818
#define DAT_10004818 (*(double *)(((uintptr_t)&pf_window_literal_10004818)))
#undef DAT_10004820
#define DAT_10004820 (*(double *)(((uintptr_t)&pf_window_literal_10004820)))
#undef DAT_10004828
#define DAT_10004828 (*(uint64_t *)(((uintptr_t)&pf_window_literal_10004828)))
#undef DAT_10004830
#define DAT_10004830 (*(uint64_t *)(((uintptr_t)&pf_window_literal_10004830)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004778
 */

double recovered_10004778(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double in_d0;
  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0)); DAT_10004808 < dVar1; dVar1 = dVar1 + DAT_10004810) {
  }
  for (; dVar1 < DAT_10004818; dVar1 = dVar1 + DAT_10004820) {
  }
  return in_d0;
}

#undef DAT_10004808
#undef DAT_10004810
#undef DAT_10004818
#undef DAT_10004820
#undef DAT_10004828
#undef DAT_10004830

#undef DAT_100048c0
#define DAT_100048c0 (*(double *)(((uintptr_t)&pf_window_literal_100048c0)))
#undef DAT_100048c8
#define DAT_100048c8 (*(double *)(((uintptr_t)&pf_window_literal_100048c8)))
#undef DAT_100048d0
#define DAT_100048d0 (*(double *)(((uintptr_t)&pf_window_literal_100048d0)))
#undef DAT_100048d8
#define DAT_100048d8 (*(double *)(((uintptr_t)&pf_window_literal_100048d8)))
#undef DAT_100048e0
#define DAT_100048e0 (*(uint64_t *)(((uintptr_t)&pf_window_literal_100048e0)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004838
 */

double recovered_10004838(undefined4 param_1,undefined4 in_r1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double in_d0;
  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(in_r1,param_1)); DAT_100048c0 < dVar1; dVar1 = dVar1 + DAT_100048c8)
  {
  }
  for (; dVar1 < DAT_100048d0; dVar1 = dVar1 + DAT_100048d8) {
  }
  return in_d0;
}

#undef DAT_100048c0
#undef DAT_100048c8
#undef DAT_100048d0
#undef DAT_100048d8
#undef DAT_100048e0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100048e8(undefined4 param_1,undefined4 param_2)

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
long long recovered_10004908(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_100049c8(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10004a50(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10004a98(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_10004b68
#define DAT_10004b68 (*(float *)(((uintptr_t)&pf_window_literal_10004b68)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b28
 */

float recovered_10004b28(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (in_r1 == 0.0) {
    return DAT_10004b68;
  }
  uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)in_r0 - dVar2 * (double)in_r1);
}

#undef DAT_10004b68

/* Native bounded-magnitude float decomposition; Pooka's Free Software License. */
float recovered_10004b6c(float value,int *exponent){
 if(exponent)*exponent=0;if(value==0.0f)return 0.0f;
 int power=0;float fraction=value<0?-value:value;
 while(fraction>=1.0f){fraction*=0.5f;power++;}
 while(fraction>0.0f && fraction<0.5f){fraction+=fraction;power--;}
 if(exponent)*exponent=power;return value<0?-fraction:fraction;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c28
 */

float recovered_10004c28(float param_1,int param_2)

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


#undef DAT_10004cf8
#define DAT_10004cf8 (*(float *)(((uintptr_t)&pf_window_literal_10004cf8)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c74
 */

float recovered_10004c74(float param_1,float param_2)

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
    return DAT_10004cf8;
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

#undef DAT_10004cf8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cfc
 */

float recovered_10004cfc(float param_1)

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
 * Address: 0x10004d34
 */

float recovered_10004d34(float param_1)

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
 * Address: 0x10004d80
 */

undefined4 recovered_10004d80(undefined4 param_1,undefined4 param_2)

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
  return SUB84(dVar5,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dd4
 */

float recovered_10004dd4(float param_1)

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


#undef DAT_10004e84
#define DAT_10004e84 (*(float *)(((uintptr_t)&pf_window_literal_10004e84)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e30
 */

float recovered_10004e30(float param_1)

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
  return DAT_10004e84;
}

#undef DAT_10004e84

#undef DAT_10004fc0
#define DAT_10004fc0 (*(double *)(((uintptr_t)&pf_window_literal_10004fc0)))
#undef DAT_10004fc8
#define DAT_10004fc8 (*(float *)(((uintptr_t)&pf_window_literal_10004fc8)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e88
 */

float recovered_10004e88(float param_1)

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
    return DAT_10004fc8;
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
  return (float)(dVar4 + dVar4 + dVar5 * DAT_10004fc0);
}

#undef DAT_10004fc0
#undef DAT_10004fc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fcc
 */

long recovered_10004fcc(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(in_r1,in_r0));
  uVar2 = recovered_10004908(dVar1);
  return (long)uVar2;
}


#undef DAT_10005098
#define DAT_10005098 (*(double *)(((uintptr_t)&pf_window_literal_10005098)))
#undef DAT_100050a0
#define DAT_100050a0 (*(double *)(((uintptr_t)&pf_window_literal_100050a0)))
#undef DAT_100050a8
#define DAT_100050a8 (*(double *)(((uintptr_t)&pf_window_literal_100050a8)))
#undef DAT_100050b0
#define DAT_100050b0 (*(double *)(((uintptr_t)&pf_window_literal_100050b0)))
#undef DAT_100050b8
#define DAT_100050b8 (*(double *)(((uintptr_t)&pf_window_literal_100050b8)))
#undef DAT_100050c0
#define DAT_100050c0 (*(double *)(((uintptr_t)&pf_window_literal_100050c0)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

float recovered_10005000(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  double dVar1;
  double dVar2;

  for (dVar1 = (double)in_r0; DAT_10005098 < dVar1; dVar1 = dVar1 + DAT_100050a0) {
  }
  for (; dVar1 < DAT_100050a8; dVar1 = dVar1 + DAT_100050b0) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / DAT_100050b8 +
                         (dVar2 * dVar2 * dVar2) / DAT_100050c0));
}

#undef DAT_10005098
#undef DAT_100050a0
#undef DAT_100050a8
#undef DAT_100050b0
#undef DAT_100050b8
#undef DAT_100050c0

#undef DAT_10005158
#define DAT_10005158 (*(double *)(((uintptr_t)&pf_window_literal_10005158)))
#undef DAT_10005160
#define DAT_10005160 (*(double *)(((uintptr_t)&pf_window_literal_10005160)))
#undef DAT_10005168
#define DAT_10005168 (*(double *)(((uintptr_t)&pf_window_literal_10005168)))
#undef DAT_10005170
#define DAT_10005170 (*(double *)(((uintptr_t)&pf_window_literal_10005170)))
#undef DAT_10005178
#define DAT_10005178 (*(double *)(((uintptr_t)&pf_window_literal_10005178)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050c8
 */

float recovered_100050c8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  double dVar1;

  for (dVar1 = (double)in_r0; DAT_10005158 < dVar1; dVar1 = dVar1 + DAT_10005160) {
  }
  for (; dVar1 < DAT_10005168; dVar1 = dVar1 + DAT_10005170) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / DAT_10005178);
}

#undef DAT_10005158
#undef DAT_10005160
#undef DAT_10005168
#undef DAT_10005170
#undef DAT_10005178

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10005180(float param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000519c
 */

int recovered_1000519c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x100052f0
 */

int recovered_100052f0(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x1000536c;
  }
  bVar2 = false;
joined_r0x1000536c:
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
 * Address: 0x10005450
 */

double recovered_10005450(byte *param_1,undefined4 *param_2)

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

  for (pbVar2 = param_1; (uVar1 = (uint)*pbVar2, uVar1 - 9 < 5 || (uVar1 == 0x20));
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
    if (9 < uVar1 - 0x30) goto LAB_10005530;
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
LAB_10005530:
    if (9 < uVar7) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = param_1;
        return pf_bits_double(CONCAT44(in_s1,in_s0));
      }
      goto LAB_1000561c;
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
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar5;
  }
LAB_1000561c:
  return pf_bits_double(CONCAT44(in_s1,in_s0));
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10005624(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10005450(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000fe16
#define DAT_1000fe16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef str_1000fe20
#define str_1000fe20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000fe31
#define str_1000fe31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(double * *)(pf_stack_frame + 16))
#define local_6c (*(int *)(pf_stack_frame + 20))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(byte * *)(pf_stack_frame + 28))
#define local_60 (*(byte (*)[96])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005640
 */

int recovered_10005640(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_100056c0:
  while( true ) {
    pcVar6 = str_1000fe31;
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
LAB_100056e0:
    local_70 = pdVar19;
    local_6c = local_6c + 1;
    param_3 = param_3 + 1;
    param_1 = pbVar9;
  }
  uVar10 = (uint)param_3[1];
  if (uVar10 == 0x25) goto code_r0x10005700;
  pbVar8 = param_3 + 2;
  while (uVar10 = uVar10 - 0x20, uVar10 < 0x11) {
    if ((1 << (uVar10 & 0xff) & 0x12809U) == 0) {
      if (uVar10 == 10) {
        bVar13 = *pbVar8;
        local_70 = (double *)((int)local_70 + 4);
        param_3 = pbVar8;
        goto LAB_1000576c;
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
LAB_1000576c:
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
      goto LAB_10005798;
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
LAB_10005798:
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
switchD_1000596c_caseD_4a:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = 0x3f;
    }
    local_6c = local_6c + 1;
    goto LAB_10006220;
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
      goto LAB_10005c3c;
    }
    uVar10 = (int)uVar11 >> 0x1f;
LAB_10005c3c:
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
      local_60[-iVar7] = str_1000fe31[uVar11 + uVar12 * -10];
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
      goto LAB_10006220;
    }
    break;
  default:
    goto switchD_1000596c_caseD_4a;
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
      pcVar6 = str_1000fe20;
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
    goto LAB_10006220;
  case 99:
    if (1 < local_68) {
      local_68 = local_68 - 1;
      pbVar9 = param_1 + 1;
      *param_1 = (byte)*(undefined4 *)local_70;
    }
    goto LAB_100056e0;
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
                      goto LAB_10006114;
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
LAB_10006114:
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
        local_60[-iVar7] = str_1000fe31[uVar10 + uVar12 * -10];
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
LAB_100060dc:
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
                    goto LAB_100060dc;
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
    goto LAB_100056c0;
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
      local_60[iVar7] = str_1000fe31[uVar10 & 0xf];
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
    goto LAB_100056c0;
  case 0x73:
    if (iVar20 == 0) {
      param_3 = param_3 + 1;
      local_70 = pdVar19;
      goto LAB_100056c0;
    }
    pbVar9 = *(byte **)local_70;
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_1000fe16;
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
      goto LAB_10006138;
    case 6:
      uVar11 = *(uint *)local_70;
      uVar10 = (int)uVar11 >> 0x1f;
      local_70 = pdVar19;
      goto LAB_10006138;
    }
    uVar10 = 0;
    local_70 = pdVar19;
LAB_10006138:
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
      local_60[-iVar7] = str_1000fe31[uVar11 + uVar12 * -10];
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
LAB_10006220:
      param_3 = param_3 + 1;
      param_1 = pbVar9;
      goto LAB_100056c0;
    }
  }
  param_3 = param_3 + 1;
  param_1 = local_64;
  goto LAB_100056c0;
code_r0x10005700:
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
  goto LAB_100056c0;
}

#undef DAT_1000fe16
#undef str_1000fe20
#undef str_1000fe31
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10006408(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10005640(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_100100ac
#define DAT_100100ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_100100b4
#define DAT_100100b4 (*(int * *)(((uintptr_t)pf_module_state + 0x2c4U)))
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
 * Address: 0x10006438
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006438(int *param_1,int *param_2,int *param_3)

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
          bVar7 = DAT_100100ac != 0;
          puVar4 = &DAT_100100ac;
          piVar3[2] = iVar6;
          if (bVar7) {
            puVar4 = (undefined4 *)(iVar6 + 4);
          }
          *puVar4 = piVar3;
          *param_3 = (int)piVar3;
          *piVar3 = uVar2 - 0x10;
          piVar1 = DAT_100100b4;
          *(undefined1 *)(piVar3 + 3) = 1;
          if (piVar1 == (int *)0x0) {
            DAT_100100b4 = piVar3;
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
      puVar4 = &DAT_100100ac;
      if (DAT_100100ac != 0) {
        puVar4 = (undefined4 *)(_DAT_68000008 + 4);
      }
      piVar3 = (int *)&DAT_68000000;
      *puVar4 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar5 = DAT_100100b4;
      goto LAB_1000661c;
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
      bVar7 = DAT_100100ac != 0;
      puVar4 = &DAT_100100ac;
      piVar3[2] = iVar6;
      if (bVar7) {
        puVar4 = (undefined4 *)(iVar6 + 4);
      }
      *puVar4 = piVar3;
      *param_3 = (int)piVar3;
      *piVar3 = uVar2 - 0x10;
      piVar5 = DAT_100100b4;
      *(undefined1 *)(piVar3 + 3) = 1;
LAB_1000661c:
      if (piVar5 == (int *)0x0) {
        DAT_100100b4 = piVar3;
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_100100ac
#undef DAT_100100b4
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006638
 */

uint * recovered_10006638(uint *param_1,uint *param_2)

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
 * Address: 0x100066bc
 */

undefined4 recovered_100066bc(uint *param_1,int param_2)

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


#undef DAT_100100b8
#define DAT_100100b8 (*(uint *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef DAT_100100bc
#define DAT_100100bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
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
 * Address: 0x1000671c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000671c(char *param_1,int param_2)

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
        if (DAT_100100b8 != 0) {
          DAT_100100b8 = DAT_100100b8 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_100100b8 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10002c60(local_224,&DAT_100100bc,DAT_100100b8);
            uVar2 = DAT_100100b8;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_100100b8 = 0;
        }
        else {
          if (DAT_100100b8 - 0x1ff < 0xfffffe00) {
            recovered_10002c60(local_224,&DAT_100100bc,DAT_100100b8);
            local_224[DAT_100100b8] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_100100b8 = 0;
          }
          (&DAT_100100bc)[DAT_100100b8] = cVar1;
          DAT_100100b8 = DAT_100100b8 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_100100b8
#undef DAT_100100bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_100100b8
#define DAT_100100b8 (*(uint *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef DAT_100100bc
#define DAT_100100bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
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
 * Address: 0x10006900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006900(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (DAT_100100b8 != 0) {
    recovered_10002c60(local_210,&DAT_100100bc,DAT_100100b8);
    uVar1 = DAT_100100b8;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_100100b8 = 0;
  return;
}

#undef DAT_100100b8
#undef DAT_100100bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_100100b8
#define DAT_100100b8 (*(uint *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef DAT_100100bc
#define DAT_100100bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
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
 * Address: 0x100069c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100069c0(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_100100b8 == 0) {
    return;
  }
  recovered_10002c60(auStack_214,&DAT_100100bc,DAT_100100b8);
  auStack_214[DAT_100100b8] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_100100b8 = 0;
  return;
}

#undef DAT_100100b8
#undef DAT_100100bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000fe42
#define DAT_1000fe42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define abStack_14c (*(byte (*)[332])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a7c
 */

void recovered_10006a7c(int param_1,int param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  byte *in_r2;

  in_r2 = &DAT_1000fe42;
  if (param_1 != 0) {
    in_r2 = (byte *)param_1;
  }
  recovered_10006408(abStack_14c,0x140,in_r2);
  if (0 < extraout_r0) {
    recovered_1000671c((char *)abStack_14c,extraout_r0);
  }
  return;
}

#undef DAT_1000fe42
#undef abStack_14c

#undef DAT_1000fe60
#define DAT_1000fe60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000fe45
#define str_1000fe45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ad4
 */

void recovered_10006ad4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10003d24(str_1000fe45);
  recovered_1000671c(str_1000fe45,uVar1);
  uVar1 = recovered_10003d24(&DAT_1000fe60);
  recovered_1000671c(&DAT_1000fe60,uVar1);
  return;
}

#undef DAT_1000fe60
#undef str_1000fe45

#undef DAT_1000fe60
#define DAT_1000fe60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000fe63
#define str_1000fe63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b20
 */

void recovered_10006b20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10003d24(str_1000fe63);
  recovered_1000671c(str_1000fe63,uVar1);
  uVar1 = recovered_10003d24(&DAT_1000fe60);
  recovered_1000671c(&DAT_1000fe60,uVar1);
  return;
}

#undef DAT_1000fe60
#undef str_1000fe63

#undef DAT_100100b8
#define DAT_100100b8 (*(uint *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef DAT_100100bc
#define DAT_100100bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
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
 * Address: 0x10006b6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10006b6c(int param_1,int param_2,char *param_3,int param_4)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return '\0';
  }
  if (DAT_100100b8 != 0) {
    recovered_10002c60(auStack_224,&DAT_100100bc,DAT_100100b8);
    auStack_224[DAT_100100b8] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_100100b8 = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_100100b8
#undef DAT_100100bc
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

undefined4 recovered_10006cc0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006cc8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006ccc(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_1000fe42
#define DAT_1000fe42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
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
#undef str_1000fee4
#define str_1000fee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_1000fef1
#define str_1000fef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_1000feff
#define str_1000feff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10fU)))
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cd4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006cd4(int param_1,int param_2)

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
    goto LAB_10006f48;
  }
  iVar2 = recovered_10003d4c((byte *)param_1,(byte *)str_1000fee4);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10006ed4:
    puVar4 = recovered_10002b68(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100033f0(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      recovered_10006408((byte *)(puVar4 + 1),0xf1,&DAT_1000fe42);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10003d4c((byte *)param_1,(byte *)str_1000fef1);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10006ed4;
    }
    iVar3 = recovered_10003d4c((byte *)param_1,(byte *)str_1000feff);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10006ed4;
    }
    puVar4 = recovered_10002b68(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100033f0(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10004104(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10004104(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10004104(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10004104(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10004104(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10004104(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10004104(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      recovered_10006408((byte *)(puVar4 + 1),0xf1,&DAT_1000fe42);
      recovered_100033f0(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10004104(unaff_r8,'w');
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
              dst = recovered_10002c0c((void *)puVar4[0x3f],size);
              if (dst == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_10006f70;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = dst;
              puVar4[0x3e] = dst;
            }
            else {
              dst = (void *)puVar4[0x3f];
            }
            recovered_10002c60(dst,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_10006f70:
        *DAT_10014004 = uVar7;
        recovered_10002bbc(puVar4);
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
LAB_10006f48:
  *DAT_10014004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000fe42
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000fee4
#undef str_1000fef1
#undef str_1000feff
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
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
 * Address: 0x10007058
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10007058(int param_1,int param_2,uint *param_3)

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
        *DAT_10014004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_10002bbc((void *)param_3[0x3f]);
    }
    recovered_10002bbc(param_3);
  }
  puVar1 = recovered_10006cd4(param_1,param_2);
  return puVar1;
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
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
 * Address: 0x10007158
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007158(uint *param_1)

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
    recovered_10002bbc((void *)param_1[0x3f]);
  }
  recovered_10002bbc(param_1);
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
 * Address: 0x10007250
 */

int recovered_10007250(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          recovered_10002c60(param_1,(void *)(unaff_r4[0x3e] + uVar1),bytes);
          unaff_r4[0x42] = unaff_r4[0x42] + bytes;
          if (uVar5 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_100010c0(bytes,param_2);
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
            uVar1 = recovered_1000737c(unaff_r4);
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


#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_100100b8
#define DAT_100100b8 (*(uint *)(((uintptr_t)pf_module_state + 0x2c8U)))
#undef DAT_100100bc
#define DAT_100100bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
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
 * Address: 0x1000737c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000737c(int *param_1)

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
LAB_100073d8:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_100100b8 != 0) {
      recovered_10002c60(auStack_220,&DAT_100100bc,DAT_100100b8);
      auStack_220[DAT_100100b8] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_100100b8 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000fe1f,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10003d24(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_100073d8;
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

#undef DAT_1000fe1f
#undef DAT_100100b8
#undef DAT_100100bc
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000757c
 */

int recovered_1000757c(int param_1,int param_2,int param_3,uint *param_4)

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
      recovered_1000671c((char *)param_1,uVar4);
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
        pvVar1 = recovered_10002c0c((void *)param_4[0x3f],size);
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
        recovered_100033f0((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10002c60((void *)(param_4[0x3f] + uVar2),(void *)param_1,uVar4);
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

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f4
 */

undefined4 recovered_100076f4(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10007708;
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
LAB_10007708:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a4
 */

undefined4 recovered_100077a4(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
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
 * Address: 0x100077cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100077cc(uint *param_1)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100078a4(int param_1)

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

undefined1 recovered_100078b4(int param_1)

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

void recovered_100078c4(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_100078e0(uint param_1,int param_2)

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


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
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
 * Address: 0x10007904
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007904(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4214U)))
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
 * Address: 0x10007994
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007994(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_100033f0(&local_28,0,0xc);
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
#define local_24 (*(void * *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007b08(int param_1,int *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *dst;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (int *)0x0 && param_3 != (uint *)0x0)) &&
      (recovered_100033f0(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    dst = recovered_10002b68(size);
    if (dst != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_10002c60(dst,local_24,local_20);
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
 * Address: 0x10007c08
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10007c08(int param_1,int param_2,int param_3)

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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007c90(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007c98(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007c9c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007ca4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007cac(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cb4
 */

int recovered_10007cb4(byte *param_1,byte *param_2,int param_3)

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


#undef DAT_1000fe73
#define DAT_1000fe73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef str_1000fe76
#define str_1000fe76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000fe83
#define str_1000fe83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_1000fe8d
#define str_1000fe8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9dU)))
#undef str_1000fea1
#define str_1000fea1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1U)))
#undef str_1000feaf
#define str_1000feaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfU)))
#undef str_1000fec1
#define str_1000fec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_1000fecd
#define str_1000fecd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_1000fede
#define str_1000fede (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf8
 */

char * recovered_10007cf8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000fe73;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10007d18_caseD_0;
  default:
    pcVar1 = str_1000fede;
switchD_10007d18_caseD_0:
    return pcVar1;
  case 2:
    return str_1000fe76;
  case 5:
    return str_1000fe83;
  case 9:
    return str_1000fe8d;
  case 0xc:
    return str_1000fea1;
  case 0xd:
    return str_1000feaf;
  case 0x11:
    return str_1000fec1;
  case 0x16:
    return str_1000fecd;
  }
}

#undef DAT_1000fe73
#undef str_1000fe76
#undef str_1000fe83
#undef str_1000fe8d
#undef str_1000fea1
#undef str_1000feaf
#undef str_1000fec1
#undef str_1000fecd
#undef str_1000fede

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007df8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007e00(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_100102bc
#define DAT_100102bc (*(int *)(((uintptr_t)pf_module_state + 0x4ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e08
 */

void recovered_10007e08(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100102bc = DAT_100102bc + 1;
  return;
}

#undef DAT_100102bc

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007e30(void *context,...){
 __asm__ volatile("ldr sp, [r0, #0x28]\nldr r7, [r0, #0x20]\nldr ip, [r0, #0x24]\nbx ip");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10007e40(void *context){
 __asm__ volatile("stm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nstr sp, [r0, #0x20]\nstr lr, [r0, #0x24]\nvstr d8, [r0, #0x28]\nvstr d9, [r0, #0x30]\nvstr d10, [r0, #0x38]\nvstr d11, [r0, #0x40]\nvstr d12, [r0, #0x48]\nvstr d13, [r0, #0x50]\nvstr d14, [r0, #0x58]\nvstr d15, [r0, #0x60]\nvmrs r2, fpscr\nstr r2, [r0, #0x68]\nmrc p15, #0, r2, c13, c0, #2\nstr r2, [r0, #0x6c]\nmrc p15, #0, r2, c13, c0, #3\nstr r2, [r0, #0x70]\nmovs r0, #0\nbx lr");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) int recovered_10007e90(int context,int value){
 __asm__ volatile("cmp r1, #0\nmoveq r1, #1\nvldr d8, [r0, #0x28]\nvldr d9, [r0, #0x30]\nvldr d10, [r0, #0x38]\nvldr d11, [r0, #0x40]\nvldr d12, [r0, #0x48]\nvldr d13, [r0, #0x50]\nvldr d14, [r0, #0x58]\nvldr d15, [r0, #0x60]\nldr r2, [r0, #0x68]\nvmsr fpscr, r2\nldr r2, [r0, #0x6c]\nmcr p15, #0, r2, c13, c0, #2\nldr r2, [r0, #0x70]\nmcr p15, #0, r2, c13, c0, #3\nldm r0, {r4, r5, r6, r7, r8, sb, sl, fp}\nldr sp, [r0, #0x20]\nldr lr, [r0, #0x24]\nmov r0, r1\nbx lr");
}


#undef DAT_10007f6c
#define DAT_10007f6c (*(int *)(((uintptr_t)&pf_window_literal_10007f6c)))
#undef DAT_10007f70
#define DAT_10007f70 (*(int *)(((uintptr_t)&pf_window_literal_10007f70)))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 20))
#define auStack_10 (*(undefined1 (*)[16])(pf_stack_frame + 64))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(code * *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(undefined1 * *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_14 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ee8
 */

void recovered_10007ee8(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10007f74;
  local_20 = DAT_10007f6c + 0x10007f10;
  local_18 = DAT_10007f70 + 0x10007f20;
  local_38 = 1;
  recovered_100086c8(&uStack_3c);
  recovered_10002b54();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10007f48);
  (*pcVar1)();
}

#undef DAT_10007f6c
#undef DAT_10007f70
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007f74(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007f7c(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007f8c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10007ee8();
}


#undef DAT_100102c0
#define DAT_100102c0 (*(int *)(((uintptr_t)pf_module_state + 0x4d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f8c
 */

long recovered_10007f8c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int iVar1;
  undefined4 in_r1;
  int in_r2;

  recovered_100084e0(param_1,in_r1,in_r2);
                    /* WARNING: Subroutine does not return */
  if (extraout_r0 == 0) {
    recovered_10007ee8();
  }
  *(undefined1 *)(extraout_r0 + 0x20) = 0;
  *(int *)(extraout_r0 + 8) = DAT_100102c0;
  DAT_100102c0 = extraout_r0;
  iVar1 = recovered_10008514(extraout_r0);
  return iVar1;
}

#undef DAT_100102c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fcc
 */

void * recovered_10007fcc(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002b68(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002b54();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff8
 */

void * recovered_10007ff8(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002b68(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002b54();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_100080e4
#define DAT_100080e4 (*(int *)(((uintptr_t)&pf_window_literal_100080e4)))
#undef DAT_100080e8
#define DAT_100080e8 (*(int *)(((uintptr_t)&pf_window_literal_100080e8)))
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
 * Address: 0x10008024
 */

void recovered_10008024(void *pointer)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007f74;
  local_78 = DAT_100080e4 + 0x10008068;
  local_70 = DAT_100080e8 + 0x10008078;
  local_90 = 1;
  recovered_100086c8(&uStack_94);
  recovered_10002bbc(pointer);
  recovered_100086ec(&uStack_94);
  return;
}

#undef DAT_100080e4
#undef DAT_100080e8
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

#undef DAT_100081ac
#define DAT_100081ac (*(int *)(((uintptr_t)&pf_window_literal_100081ac)))
#undef DAT_100081b0
#define DAT_100081b0 (*(int *)(((uintptr_t)&pf_window_literal_100081b0)))
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
 * Address: 0x100080ec
 */

void recovered_100080ec(void *pointer)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007f74;
  local_78 = DAT_100081ac + 0x10008130;
  local_70 = DAT_100081b0 + 0x10008140;
  local_90 = 1;
  recovered_100086c8(&uStack_94);
  recovered_10002bbc(pointer);
  recovered_100086ec(&uStack_94);
  return;
}

#undef DAT_100081ac
#undef DAT_100081b0
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

#undef DAT_10008274
#define DAT_10008274 (*(int *)(((uintptr_t)&pf_window_literal_10008274)))
#undef DAT_10008278
#define DAT_10008278 (*(int *)(((uintptr_t)&pf_window_literal_10008278)))
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
 * Address: 0x100081b4
 */

void recovered_100081b4(void *pointer,uint size)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007f74;
  local_78 = DAT_10008274 + 0x100081f8;
  local_70 = DAT_10008278 + 0x10008208;
  local_90 = 1;
  recovered_100086c8(&uStack_94);
  recovered_10002bbc(pointer);
  recovered_100086ec(&uStack_94);
  return;
}

#undef DAT_10008274
#undef DAT_10008278
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c

#undef DAT_1000833c
#define DAT_1000833c (*(int *)(((uintptr_t)&pf_window_literal_1000833c)))
#undef DAT_10008340
#define DAT_10008340 (*(int *)(((uintptr_t)&pf_window_literal_10008340)))
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
 * Address: 0x1000827c
 */

void recovered_1000827c(void *pointer,uint size)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007f74;
  local_78 = DAT_1000833c + 0x100082c0;
  local_70 = DAT_10008340 + 0x100082d0;
  local_90 = 1;
  recovered_100086c8(&uStack_94);
  recovered_10002bbc(pointer);
  recovered_100086ec(&uStack_94);
  return;
}

#undef DAT_1000833c
#undef DAT_10008340
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10008344(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_1000834c(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000835c(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000836c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100102c8
#define DAT_100102c8 (*(uint *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_100102cc
#define DAT_100102cc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008370
 */

undefined1 * recovered_10008370(uint param_1)

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
  puVar1 = recovered_10002b68(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007ee8();
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
      if (size == uVar6) goto LAB_100083ec;
    }
    iVar3 = (param_1 - uVar6) + 0x24;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_100083ec:
  DAT_100102c8 = DAT_100102c8 + 1;
  if (DAT_100102c8 < 2) {
    DAT_100102c8 = 1;
  }
  if (DAT_100102cc == (undefined4 *)0x0) {
LAB_10008448:
    puVar1[7] = DAT_100102c8;
    puVar1[3] = DAT_100102cc;
    DAT_100102cc = puVar1;
    return (undefined1 *)(puVar1 + 9);
  }
  do {
    iVar3 = (int)DAT_100102cc;
    while (*(uint *)(iVar3 + 0x1c) != DAT_100102c8) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10008448;
    }
    DAT_100102c8 = DAT_100102c8 + 1;
    if (DAT_100102c8 < 2) {
      DAT_100102c8 = 1;
    }
  } while( true );
}

#undef DAT_100102c8
#undef DAT_100102cc

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000847c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10002bbc((void *)(param_1 + -0x1c));
  return;
}


#undef DAT_100102cc
#define DAT_100102cc (*(int *)(((uintptr_t)pf_module_state + 0x4dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084e0
 */

void recovered_100084e0(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_100102cc;
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

#undef DAT_100102cc

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10008514(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_100102c0
#define DAT_100102c0 (*(void * *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_100102cc
#define DAT_100102cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000851c
 */

void recovered_1000851c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;

  pointer = DAT_100102c0;
  if (DAT_100102c0 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_100102c0 + 0x20);
  uVar5 = *(undefined4 *)((int)DAT_100102c0 + 8);
  *(undefined4 *)((int)DAT_100102c0 + 8) = 0;
  DAT_100102c0 = (void *)uVar5;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x24);
  }
  pvVar2 = DAT_100102cc;
  if (DAT_100102cc == pointer) {
    puVar3 = &DAT_100102cc;
  }
  else {
    do {
      pvVar4 = pvVar2;
      if (pvVar4 == (void *)0x0) goto LAB_100085c8;
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
    } while (*(void **)((int)pvVar4 + 0xc) != pointer);
    puVar3 = (undefined4 *)((int)pvVar4 + 0xc);
  }
  *puVar3 = *(undefined4 *)((int)pointer + 0xc);
  *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_100085c8:
  recovered_10002bbc(pointer);
  return;
}

#undef DAT_100102c0
#undef DAT_100102cc

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100085d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_100085fc((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_100102c0
#define DAT_100102c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_100102c4
#define DAT_100102c4 (*(int * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085fc
 */

void recovered_100085fc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  int *extraout_r0 = 0;
  int *piVar3;
  int *piVar4;

  if (DAT_100102c4 != (int *)0x0) {
    piVar4 = (int *)*param_1;
    piVar3 = DAT_100102c4;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar2 = recovered_10008f50((int)piVar3,piVar4,(undefined2 *)&local_28);
      if ((iVar2 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[5] = local_24;
        param_1[4] = piVar3;
        param_1[6] = local_20;
        recovered_100087bc(param_1);
        puVar1 = DAT_100102c0;
                    /* WARNING: Subroutine does not return */
        if (DAT_100102c0 == (undefined4 *)0x0) {
          recovered_10007ee8();
        }
        DAT_100102c0[6] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        *(undefined1 *)(puVar1 + 8) = 1;
        recovered_100085fc(puVar1);
        *extraout_r0 = (int)DAT_100102c4;
        DAT_100102c4 = extraout_r0;
        return;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007ee8();
}

#undef DAT_100102c0
#undef DAT_100102c4
#undef local_28
#undef local_24
#undef local_20

#undef DAT_100102c0
#define DAT_100102c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_100102c4
#define DAT_100102c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008690
 */

void recovered_10008690(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_100102c0;
                    /* WARNING: Subroutine does not return */
  if (DAT_100102c0 == (undefined4 *)0x0) {
    recovered_10007ee8();
  }
  DAT_100102c0[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  recovered_100085fc(puVar1);
  *extraout_r0 = DAT_100102c4;
  DAT_100102c4 = extraout_r0;
  return;
}

#undef DAT_100102c0
#undef DAT_100102c4

#undef DAT_100102c4
#define DAT_100102c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086c8
 */

void recovered_100086c8(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_100102c4;
  DAT_100102c4 = param_1;
  return;
}

#undef DAT_100102c4

#undef DAT_100102c4
#define DAT_100102c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086ec
 */

void recovered_100086ec(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_100102c4;
  if (DAT_100102c4 == param_1) {
    puVar2 = &DAT_100102c4;
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

#undef DAT_100102c4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008734(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100085fc(in_r0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008740(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007ee8();
}


#undef DAT_100102c4
#define DAT_100102c4 (*(int * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_100102cc
#define DAT_100102cc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000874c
 */

void recovered_1000874c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  for (puVar1 = DAT_100102cc; puVar1 != (undefined4 *)0x0 && puVar1 != param_1;
      puVar1 = (undefined4 *)puVar1[3]) {
    if ((undefined4 *)puVar1[7] == param_1) goto LAB_10008790;
  }
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10007ee8();
  }
LAB_10008790:
  if (DAT_100102c4 != (int *)0x0) {
    DAT_100102c4 = (int *)*DAT_100102c4;
  }
  recovered_100087bc(puVar1);
  return;
}

#undef DAT_100102c4
#undef DAT_100102cc

#undef DAT_100102c4
#define DAT_100102c4 (*(int * *)(((uintptr_t)pf_module_state + 0x4d4U)))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087bc
 */

void recovered_100087bc(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_100102c4 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    do {
      piVar1 = DAT_100102c4;
      if (DAT_100102c4 == piVar5) {
        iVar4 = param_1[6];
        iVar3 = param_1[5];
        DAT_100102c4[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_10008870:
        piVar1[1] = iVar3;
        recovered_10007e30((int)piVar1);
                    /* WARNING: Subroutine does not return */
        recovered_1000874c(extraout_r0);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_10008f50((int)DAT_100102c4,(int *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_10008870;
      }
      DAT_100102c4 = (int *)*piVar1;
    } while (DAT_100102c4 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007ee8();
}

#undef DAT_100102c4
#undef local_30
#undef local_2c
#undef local_28

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000887c(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000874c(in_r0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10008888(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008890(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007ee8();
}


#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000889c
 */

int recovered_1000889c(int *param_1,undefined4 param_2,int *param_3)

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
LAB_10008988:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_10008988;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*piVar4 != &DAT_10010060) {
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

#undef DAT_10010060

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008990(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10008994(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000899c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089b0
 */

uchar recovered_100089b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return '\x01';
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100089f0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a1c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a38(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a54(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10008a70(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10008a90(double value) {
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
float recovered_10008b78(float value){return (float)recovered_10008a90((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10008c78(long double value){return (long double)recovered_10008a90((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10008d60(long end,long start){return (double)end-(double)start;}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10008d7c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_1000454c(param_1,param_2);
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
 * Address: 0x10008dd4
 */

ulonglong recovered_10008dd4(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x10008e40;
    }
  }
  bVar1 = false;
joined_r0x10008e40:
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

ulonglong recovered_10008f4c(byte *param_1,undefined4 *param_2,uint param_3)

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


#undef DAT_1000ffc4
#define DAT_1000ffc4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#define local_28 (*(byte * *)(pf_stack_frame + 24))
#define local_24 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f50
 */

undefined4 recovered_10008f50(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10009304((uint)*pbVar10,(int *)&local_28);
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
          goto LAB_10009128;
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
LAB_10009128:
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
LAB_100092e4:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000ffc4 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10009304(uVar13,(int *)&local_24);
    if (puVar7 == (uint *)0x0) goto LAB_100092e4;
    bVar23 = param_2 != (int *)0x0;
    if ((param_2 != (int *)0x0) && (puVar7 != (uint *)param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = (uint *)param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_100092e4;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_100092e4;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010060) goto LAB_100092b8;
        puVar12 = (uint *)puVar12[2];
        bVar23 = puVar12 != (uint *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (uint *)0x0);
    }
    if (bVar23) goto LAB_100092e4;
  }
LAB_100092b8:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10009128;
}

#undef DAT_1000ffc4
#undef DAT_10010060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009304
 */

uint * recovered_10009304(uint param_1,int *param_2)

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
      goto switchD_10009334_caseD_5;
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
switchD_10009334_caseD_5:
  return puVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094a0
 */

undefined4 * recovered_100094a0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10008024((void *)*param_1);
  return param_1;
}


#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_100102d4
#define DAT_100102d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_100102dc
#define DAT_100102dc (*(int * *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_100102e0
#define DAT_100102e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef DAT_100102e4
#define DAT_100102e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010814
#define DAT_40010814 (*(uint8_t *)(0x40010814U))
#undef DAT_40010818
#define DAT_40010818 (*(uint8_t *)(0x40010818U))
#undef DAT_400108a0
#define DAT_400108a0 (*(uint8_t *)(0x400108a0U))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010814
#define _DAT_40010814 (*(code * *)(0x40010814U))
#undef _DAT_40010818
#define _DAT_40010818 (*(code * *)(0x40010818U))
#undef _DAT_400108a0
#define _DAT_400108a0 (*(code * *)(0x400108a0U))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
#undef str_1000ff0d
#define str_1000ff0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#define local_54 (*(uint (*)[21])(pf_stack_frame + 28))
#define local_3c (*(undefined4 *)(pf_stack_frame + 52))
#define local_2c (*(undefined4 *)(pf_stack_frame + 68))
#define local_28 (*(undefined4 *)(pf_stack_frame + 72))
#define local_24 (*(undefined4 *)(pf_stack_frame + 76))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_30 (*(undefined4 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_100094c4(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *pointer;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_r3 = 0;
  uint uVar8;
  undefined8 uVar9;

  pointer = recovered_10007fcc(0x2fc);
  iVar4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  iVar1 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  iVar2 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  pointer[0x36] = 0;
  pointer[0x35] = 0;
  pointer[0x1b] = 0;
  pointer[0x1a] = 0;
  pointer[0x19] = 0;
  *(undefined1 *)((int)pointer + 0x4e) = 0;
  *(undefined2 *)(pointer + 0x13) = 0;
  pointer[0x12] = 0;
  pointer[0x11] = 0;
  pointer[0x10] = 0;
  *(undefined1 *)(pointer + 10) = 0xf6;
  pointer[0x14] = 0;
  pointer[0x15] = iVar4;
  pointer[0x16] = iVar1;
  pointer[0x17] = iVar2;
  pointer[0x18] = 0;
  pointer[0xb] = 0;
  pointer[0xc] = iVar4;
  pointer[0xd] = iVar1;
  pointer[0xe] = iVar2;
  pointer[0xf] = 0;
  pointer[5] = 0;
  pointer[6] = iVar4;
  pointer[7] = iVar1;
  pointer[8] = iVar2;
  pointer[9] = -0x90a0000;
  pointer[0x1c] = 0;
  pointer[0x1d] = iVar4;
  pointer[0x1e] = iVar1;
  pointer[0x1f] = iVar2;
  pointer[0x20] = 0;
  pointer[0x21] = iVar4;
  pointer[0x22] = iVar1;
  pointer[0x23] = iVar2;
  pointer[0x24] = 0;
  pointer[0x25] = iVar4;
  pointer[0x26] = iVar1;
  pointer[0x27] = iVar2;
  pointer[0x28] = 0;
  pointer[0x29] = iVar4;
  pointer[0x2a] = iVar1;
  pointer[0x2b] = iVar2;
  pointer[0x2c] = 0;
  pointer[0x2d] = iVar4;
  pointer[0x2e] = iVar1;
  pointer[0x2f] = iVar2;
  pointer[0x30] = 0;
  pointer[0x31] = iVar4;
  pointer[0x32] = iVar1;
  pointer[0x33] = iVar2;
  pointer[0x34] = 0;
  *(undefined1 *)(pointer + 4) = 0;
  pointer[3] = 0;
  pointer[2] = 0;
  pointer[1] = 0;
  *pointer = 0;
  recovered_100033f0(pointer + 0x37,0,0x220);
  pcVar5 = str_1000ff0d;
  if (param_1 != 0) {
    pcVar5 = (char *)param_1;
  }
  uVar7 = 0;
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 + 1;
  } while (pcVar5[uVar8] != '\0');
  recovered_1000f5c4(pointer,(int)pcVar5,uVar8,extraout_r3);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  uVar7 = 1;
  if (1 < (int)param_2) {
    uVar7 = param_2;
  }
  pointer[6] = param_3;
  pointer[5] = uVar7;
  pointer[0xf] = param_3 >> 1;
  pointer[0xe] = uVar7 >> 1;
  pointer[0xd] = param_3 >> 1;
  iVar4 = _DAT_40010800;
  pointer[0xc] = uVar7 >> 1;
  if ((((iVar4 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17 < _DAT_40010808)) &&
     (_DAT_40010814 != (code *)0x0)) {
    iVar4 = (*_DAT_40010814)();
    *(bool *)(pointer + 4) = iVar4 != 0;
    if (iVar4 != 0) {
      local_54[3] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      uStack_44 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      uStack_40 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      local_54[2] = 0;
      local_3c = 0;
      local_54[1] = 0;
      local_54[0] = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      uStack_38 = local_54[3];
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uVar9 = recovered_10009904(local_54);
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 != 0) {
        DAT_100102e0 = 0;
        DAT_100102e4 = 0;
        DAT_100102d4 = 0;
        DAT_100102dc = pointer;
        recovered_10009d98(pointer);
        if (*(char *)((int)pointer + 0x25) != '\0') {
          return pointer;
        }
        uVar6 = 0;
        DAT_100102dc = (int *)0x0;
      }
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x1b < _DAT_40010808 && (_DAT_40010818 != (code *)0x0)))) {
        (*_DAT_40010818)(_DAT_40010818,uVar6);
      }
      pointer[0x1c] = 0;
      recovered_10008024((void *)pointer[0x1b]);
      pointer[0x19] = 0;
      recovered_10008024((void *)pointer[0x18]);
      recovered_10008024((void *)*pointer);
      recovered_10008024(pointer);
      return (int *)0x0;
    }
    uVar7 = pointer[5];
    param_3 = pointer[6];
  }
  else {
    *(undefined1 *)(pointer + 4) = 0;
  }
  puVar3 = &DAT_1000fe1f;
  if ((undefined1 *)*pointer != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*pointer;
  }
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0xa3 < _DAT_40010808 && (_DAT_400108a0 != (code *)0x0)))) {
    iVar4 = (*_DAT_400108a0)(puVar3,uVar7,param_3);
    pointer[3] = iVar4;
    if (iVar4 != 0) {
      DAT_100102e0 = 0;
      DAT_100102e4 = 0;
      DAT_100102d4 = 0;
      DAT_100102dc = pointer;
      recovered_10009d98(pointer);
      if ((char)pointer[4] != '\0') {
        return pointer;
      }
      if (pointer[3] == 0) {
        return pointer;
      }
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb7 < _DAT_40010808)) &&
         ((_DAT_400108b4 != (code *)0x0 &&
          (iVar4 = (*_DAT_400108b4)(pointer[3],pointer + 0x21), iVar4 != 0)))) {
        pointer[7] = pointer[0x2c];
        pointer[8] = pointer[0x2d];
        if ((*(byte *)(pointer + 0x2b) & 1) == 0) {
          return pointer;
        }
      }
      *(undefined1 *)(pointer + 9) = 1;
      return pointer;
    }
  }
  else {
    pointer[3] = 0;
  }
  pointer[0x1c] = 0;
  recovered_10008024((void *)pointer[0x1b]);
  pointer[0x19] = 0;
  recovered_10008024((void *)pointer[0x18]);
  recovered_10008024((void *)*pointer);
  recovered_10008024(pointer);
  return (int *)0x0;
}

#undef DAT_1000fe1f
#undef DAT_100102d4
#undef DAT_100102dc
#undef DAT_100102e0
#undef DAT_100102e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010814
#undef DAT_40010818
#undef DAT_400108a0
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010814
#undef _DAT_40010818
#undef _DAT_400108a0
#undef _DAT_400108b4
#undef str_1000ff0d
#undef local_54
#undef local_3c
#undef local_2c
#undef local_28
#undef local_24
#undef uStack_44
#undef uStack_40
#undef uStack_38
#undef uStack_34
#undef uStack_30

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
#define puStack_54 (*(uint * *)(pf_stack_frame + 44))
#define puStack_50 (*(uint * *)(pf_stack_frame + 48))
#define puStack_4c (*(uint * *)(pf_stack_frame + 52))
#define puStack_44 (*(uint * *)(pf_stack_frame + 60))
#define puStack_34 (*(uint * *)(pf_stack_frame + 76))
#define local_64 (*(uint * *)(pf_stack_frame + 28))
#define local_60 (*(uint *)(pf_stack_frame + 32))
#define local_5c (*(uint * *)(pf_stack_frame + 36))
#define local_58 (*(uint *)(pf_stack_frame + 40))
#define local_48 (*(uint *)(pf_stack_frame + 56))
#define local_40 (*(uint * *)(pf_stack_frame + 64))
#define local_3c (*(uint * *)(pf_stack_frame + 68))
#define local_38 (*(uint * *)(pf_stack_frame + 72))
#define local_30 (*(uint * *)(pf_stack_frame + 80))
#define local_2c (*(uint * *)(pf_stack_frame + 84))
#define local_28 (*(uint * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009904
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10009904(uint *param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;

  puStack_54 = *(uint **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  puStack_50 = *(uint **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  puStack_4c = *(uint **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  uVar3 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = (uint *)0x0;
  local_28 = (uint *)0x0;
  puVar5 = param_1;
  if ((((param_1 != (uint *)0x0) && (_DAT_40010800 == 0x50414d57)) && (_DAT_40010804 != 0)) &&
     ((0x7f < _DAT_40010808 && (_DAT_4001087c != (code *)0x0)))) {
    puStack_44 = puStack_54;
    local_40 = puStack_50;
    local_3c = puStack_4c;
    puStack_34 = puStack_54;
    local_30 = puStack_50;
    local_2c = puStack_4c;
    iVar4 = (*_DAT_4001087c)(&local_58);
    uVar3 = 0;
    puVar5 = (uint *)0x0;
    if (iVar4 != 0) {
      uVar13 = 0;
      uVar12 = 0;
      puVar5 = (uint *)(uint)(((((((((((local_3c != (uint *)0x0 && puStack_34 != (uint *)0x0) &&
                                      local_2c != (uint *)0x0) && local_3c <= local_40) &&
                                    puStack_34 <= local_40) && local_2c <= local_40) &&
                                  local_38 < local_40) && local_30 < local_40) &&
                                local_28 < local_40) &&
                               (uint *)((int)local_38 + (int)local_3c) <= local_40) &&
                              (uint *)((int)local_30 + (int)puStack_34) <= local_40) &&
                             (uint *)((int)local_28 + (int)local_2c) <= local_40);
      uVar6 = 0;
      uVar10 = 0;
      local_5c = (uint *)0x0;
      local_60 = 0;
      if (puVar5 == (uint *)0x1) {
        uVar8 = 0xffffffff;
        uVar13 = 0xffffffff;
        uVar10 = -1 << ((uint)local_2c & 0xff);
        if (-1 < (int)(local_2c + -8)) {
          uVar10 = 0;
          uVar13 = -1 << ((uint)(local_2c + -8) & 0xff);
        }
        uVar10 = ~uVar10;
        puVar11 = local_28 + -8;
        local_60 = uVar10 >> (0x20U - (int)local_28 & 0xff) | ~uVar13 << ((uint)local_28 & 0xff);
        if (-1 < (int)puVar11) {
          local_60 = uVar10 << ((uint)puVar11 & 0xff);
        }
        uVar13 = 0xffffffff;
        uVar6 = -1 << ((uint)puStack_34 & 0xff);
        if (-1 < (int)(puStack_34 + -8)) {
          uVar6 = 0;
          uVar13 = -1 << ((uint)(puStack_34 + -8) & 0xff);
        }
        uVar6 = ~uVar6;
        puVar7 = local_30 + -8;
        uVar13 = uVar6 >> (0x20U - (int)local_30 & 0xff) | ~uVar13 << ((uint)local_30 & 0xff);
        uVar12 = -1 << ((uint)local_3c & 0xff);
        if (-1 < (int)puVar7) {
          uVar13 = uVar6 << ((uint)puVar7 & 0xff);
        }
        puVar14 = local_3c + -8;
        if (-1 < (int)puVar14) {
          uVar12 = 0;
        }
        uVar10 = uVar10 << ((uint)local_28 & 0xff);
        if (-1 < (int)puVar14) {
          uVar8 = -1 << ((uint)puVar14 & 0xff);
        }
        uVar12 = ~uVar12;
        puVar14 = local_38 + -8;
        local_5c = (uint *)(uVar12 >> (0x20U - (int)local_38 & 0xff) |
                           ~uVar8 << ((uint)local_38 & 0xff));
        if (-1 < (int)puVar14) {
          local_5c = (uint *)(uVar12 << ((uint)puVar14 & 0xff));
        }
        uVar6 = uVar6 << ((uint)local_30 & 0xff);
        if (-1 < (int)puVar11) {
          uVar10 = 0;
        }
        if (-1 < (int)puVar7) {
          uVar6 = 0;
        }
        uVar12 = uVar12 << ((uint)local_38 & 0xff);
        if (-1 < (int)puVar14) {
          uVar12 = 0;
        }
      }
      uVar8 = (int)local_40 + 7U >> 3;
      if (puStack_44 == (uint *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = (ulonglong)local_48 * (ulonglong)uVar8 +
                ZEXT48(puStack_4c) * (ulonglong)((int)puStack_44 - 1);
      }
      puVar7 = (uint *)((ulonglong)lVar1 >> 0x20);
      local_64 = (uint *)lVar1;
      bVar15 = puStack_44 != (uint *)0x0;
      puVar11 = puStack_50;
      uVar9 = 0;
      if (bVar15) {
        puVar11 = (uint *)0x20203;
        uVar9 = (int)local_40 - 0xfU;
      }
      uVar3 = 0;
      if (bVar15) {
        uVar9 = (uint)((((local_58 != 0 || puStack_54 != (uint *)0x0) && puStack_50 != (uint *)0x0)
                       && puStack_4c != (uint *)0x0) && local_48 != 0) &
                (uint)((int)local_40 - 0xfU < 0x12) & (uint)puVar11 >> (uVar9 & 0xff);
        puVar11 = puVar5;
      }
      puVar5 = puVar7;
      if (bVar15 && ((uint)puVar11 & uVar9) != 0) {
        uVar9 = (uint)local_5c & uVar13;
        bVar15 = (uVar12 & uVar6) == 0;
        bVar16 = bVar15 && uVar9 == 0;
        puVar5 = local_5c;
        uVar2 = local_58;
        if (bVar15 && uVar9 == 0) {
          puVar5 = (uint *)(uVar10 & uVar12 | local_60 & (uint)local_5c);
          bVar16 = puVar5 == (uint *)0x0;
          uVar9 = local_60;
          uVar2 = uVar10;
        }
        if ((bVar16) && (puVar5 = (uint *)(uVar2 & uVar6 | uVar9 & uVar13), puVar5 == (uint *)0x0))
        {
          lVar1 = (ulonglong)local_48 * (ulonglong)uVar8;
          iVar4 = (int)((ulonglong)lVar1 >> 0x20);
          uVar3 = 0;
          bVar15 = (uint *)lVar1 <= puStack_4c;
          puVar5 = (uint *)-(iVar4 + (uint)!bVar15);
          if (((uint)-iVar4 < (uint)bVar15) &&
             (((puVar5 = (uint *)-((int)puVar7 + (uint)(local_64 > puStack_50)),
               (uint)-(int)puVar7 < (uint)(local_64 <= puStack_50) && (puStack_54 == (uint *)0x0))
              && (bVar15 = ~local_58 < (int)puStack_50 - 1U, puVar5 = (uint *)-(uint)bVar15, !bVar15
                 )))) {
            param_1[0xc] = (uint)local_28;
            param_1[0xb] = (uint)local_30;
            param_1[10] = (uint)local_38;
            param_1[9] = (uint)local_2c;
            param_1[8] = (uint)puStack_34;
            param_1[7] = (uint)local_3c;
            *param_1 = local_58;
            param_1[6] = (uint)local_40;
            param_1[5] = (uint)puStack_44;
            param_1[4] = local_48;
            param_1[3] = (uint)puStack_4c;
            param_1[2] = (uint)puStack_50;
            param_1[1] = 0;
            uVar3 = 1;
            puVar5 = puStack_44;
          }
        }
      }
    }
  }
  return CONCAT44(puVar5,uVar3);
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001087c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001087c
#undef puStack_54
#undef puStack_50
#undef puStack_4c
#undef puStack_44
#undef puStack_34
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_1000a2f0
#define DAT_1000a2f0 (*(int *)(((uintptr_t)&pf_window_literal_1000a2f0)))
#undef DAT_1000a2f4
#define DAT_1000a2f4 (*(int *)(((uintptr_t)&pf_window_literal_1000a2f4)))
#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400108a4
#define DAT_400108a4 (*(uint8_t *)(0x400108a4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef PTR_recovered_10007f74_10014010
#define PTR_recovered_10007f74_10014010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4220U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108a4
#define _DAT_400108a4 (*(code * *)(0x400108a4U))
#define local_e0 (*(uint *)(pf_stack_frame + 16))
#define local_c8 (*(uint *)(pf_stack_frame + 40))
#define local_c4 (*(uint *)(pf_stack_frame + 44))
#define iStack_dc (*(int *)(pf_stack_frame + 20))
#define local_c0 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_bc (*(undefined4 * *)(pf_stack_frame + 52))
#define uStack_d8 (*(uint *)(pf_stack_frame + 24))
#define local_b8 (*(uint *)(pf_stack_frame + 56))
#define local_b4 (*(uint *)(pf_stack_frame + 60))
#define local_b0 (*(int *)(pf_stack_frame + 64))
#define local_ac (*(uint *)(pf_stack_frame + 68))
#define local_a8 (*(uint *)(pf_stack_frame + 72))
#define local_a4 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_a0 (*(int *)(pf_stack_frame + 80))
#define local_9c (*(uint *)(pf_stack_frame + 84))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 88))
#define local_90 (*(undefined4 *)(pf_stack_frame + 96))
#define local_7c (*(undefined * *)(pf_stack_frame + 116))
#define local_78 (*(int *)(pf_stack_frame + 120))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 124))
#define local_70 (*(int *)(pf_stack_frame + 128))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 92))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 132))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d98
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009d98(undefined4 *param_1)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined8 uVar22;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_e0;
  local_7c = PTR_recovered_10007f74_10014010;
  local_78 = DAT_1000a2f0 + 0x10009ddc;
  local_70 = DAT_1000a2f4 + 0x10009dec;
  recovered_100086c8(&uStack_94);
  if (param_1 == (undefined4 *)0x0) goto LAB_1000a218;
  if (*(char *)(param_1 + 4) == '\x01') {
    local_90 = 0xffffffff;
    bVar7 = recovered_1000b2e4((int)param_1);
    *(bool *)((int)param_1 + 0x25) = bVar7;
    if (!bVar7) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    goto LAB_1000a218;
  }
  if (param_1[0x19] == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = param_1[0x18];
  }
  if (param_1[3] == 0) goto LAB_1000a218;
  uVar14 = param_1[6];
  uVar15 = param_1[5];
  uVar16 = 1;
  if (1 < (int)uVar14) {
    uVar16 = uVar14;
  }
  uVar13 = 1;
  if (1 < (int)uVar15) {
    uVar13 = uVar15;
  }
  puVar8 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 9) == '\0') {
    local_98 = (undefined4 *)0x0;
    if (((iVar11 != 0) && (uVar18 = param_1[0x1f], 0 < (int)uVar18)) &&
       (uVar19 = param_1[0x20], 0 < (int)uVar19)) {
      if (uVar15 == uVar18 && uVar14 == uVar19) {
        uVar13 = uVar18;
        uVar16 = uVar19;
      }
      else {
        puVar9 = (undefined1 *)(uVar15 * (uintptr_t)uVar14 * 4);
        local_c8 = uVar13;
        local_c4 = uVar16;
        local_bc = param_1;
        local_b4 = uVar19;
        local_a0 = iVar11;
        local_9c = uVar18;
        if (puVar9 == (undefined1 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          local_90 = 1;
          local_a4 = puVar9;
          puVar8 = recovered_10007fcc((uint)puVar9);
          recovered_10008024((void *)0x0);
          puVar9 = (undefined1 *)0x0;
          if (local_a4 < &DataAbort) {
LAB_10009f34:
            iVar11 = (int)puVar9 - (int)local_a4;
            puVar9 = (undefined1 *)((int)puVar8 + (int)puVar9);
            do {
              *puVar9 = 0;
              bVar7 = iVar11 != -1;
              iVar11 = iVar11 + 1;
              puVar9 = puVar9 + 1;
            } while (bVar7);
          }
          else {
            puVar9 = (undefined1 *)((uint)local_a4 & 0xfffffff0);
            puVar10 = puVar9;
            puVar12 = puVar8;
            do {
              *puVar12 = 0;
              puVar12[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
              puVar12[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
              puVar12[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
              puVar12 = puVar12 + 4;
              puVar10 = puVar10 + -0x10;
            } while (puVar10 != (undefined1 *)0x0);
            if (local_a4 != puVar9) goto LAB_10009f34;
          }
          uVar4 = *(undefined1 *)((int)local_bc + 0x26);
          puVar9 = (undefined1 *)0x0;
          uVar5 = *(undefined1 *)((int)local_bc + 0x27);
          uVar6 = *(undefined1 *)(local_bc + 10);
          if (local_a4 < (undefined1 *)0x3d) {
LAB_10009fac:
            do {
              puVar10 = (undefined1 *)((int)puVar8 + (int)puVar9);
              *puVar10 = uVar4;
              puVar9 = puVar9 + 4;
              puVar10[3] = 0xff;
              puVar10[2] = uVar6;
              puVar10[1] = uVar5;
            } while (puVar9 < local_a4);
          }
          else {
            uVar15 = ((uint)(local_a4 + -1) >> 2) + 1;
            uVar14 = uVar15 & 0xfffffff0;
            puVar9 = (undefined1 *)(uVar14 << 2);
            uVar16 = uVar14;
            puVar12 = puVar8;
            do {
              puVar10 = (undefined1 *)0x370;
              puVar1 = (undefined1 *)0x380;
              puVar2 = (undefined1 *)0x390;
              puVar3 = (undefined1 *)0x3a0;
              lVar21 = 8;
              puVar20 = puVar12;
              while( true ) {
                *(undefined1 *)puVar20 = *puVar10;
                *(undefined1 *)((int)puVar20 + 1) = *puVar1;
                *(undefined1 *)((int)puVar20 + 2) = *puVar2;
                *(undefined1 *)((int)puVar20 + 3) = *puVar3;
                puVar20 = puVar20 + 1;
                lVar21 = lVar21 + -1;
                if (lVar21 == 0) break;
                puVar10 = puVar10 + 1;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
              }
              puVar20 = puVar12 + 8;
              uVar16 = uVar16 - 0x10;
              puVar10 = (undefined1 *)0x378;
              puVar1 = (undefined1 *)0x388;
              puVar2 = (undefined1 *)0x398;
              puVar3 = (undefined1 *)0x3a8;
              lVar21 = 8;
              while( true ) {
                *(undefined1 *)puVar20 = *puVar10;
                *(undefined1 *)((int)puVar20 + 1) = *puVar1;
                *(undefined1 *)((int)puVar20 + 2) = *puVar2;
                *(undefined1 *)((int)puVar20 + 3) = *puVar3;
                puVar20 = puVar20 + 1;
                lVar21 = lVar21 + -1;
                if (lVar21 == 0) break;
                puVar10 = puVar10 + 1;
                puVar1 = puVar1 + 1;
                puVar2 = puVar2 + 1;
                puVar3 = puVar3 + 1;
              }
              puVar12 = puVar12 + 0x10;
            } while (uVar16 != 0);
            if (uVar15 != uVar14) goto LAB_10009fac;
          }
          uVar15 = local_bc[5];
          uVar14 = local_bc[6];
        }
        uVar13 = local_9c;
        param_1 = local_bc;
        uVar16 = local_c4;
        iVar11 = 0;
        local_c0 = puVar8;
        uVar22 = recovered_10002980((uint)((ulonglong)local_b4 * (ulonglong)uVar15),
                                    ((int)uVar15 >> 0x1f) * local_b4 +
                                    (int)((ulonglong)local_b4 * (ulonglong)uVar15 >> 0x20),local_9c,
                                    0);
        uVar18 = (uint)uVar22;
        if ((int)uVar18 < 2) {
          uVar18 = 1;
        }
        if ((int)uVar14 < (int)uVar18) {
          lVar21 = (ulonglong)uVar13 * (ulonglong)uVar14;
          iVar17 = 0;
          uVar22 = recovered_10002980((uint)lVar21,
                                      ((int)uVar14 >> 0x1f) * uVar13 +
                                      (int)((ulonglong)lVar21 >> 0x20),local_b4,0);
          uVar13 = 1;
          if (1 < (int)(uint)uVar22) {
            uVar13 = (uint)uVar22;
          }
          if ((int)uVar14 < 1) {
            uVar13 = local_c8;
            local_98 = local_c0;
            goto LAB_1000a198;
          }
          iVar11 = (int)(uVar15 - uVar13) / 2;
          uVar18 = uVar14;
        }
        else {
          iVar17 = (int)(uVar14 - uVar18) / 2;
          uVar13 = uVar15;
        }
        local_a4 = (undefined1 *)((int)local_c0 + (uVar15 * iVar17 + iVar11) * 4 + 3);
        local_b0 = uVar15 << 2;
        uVar16 = local_9c - 1;
        local_b8 = local_b4 - 1;
        local_a8 = 0;
        local_ac = uVar18;
        do {
          if (0 < (int)uVar13) {
            uVar14 = recovered_100010c0(local_a8 * local_b4,local_ac);
            uVar15 = 0;
            if ((int)local_b8 < (int)uVar14) {
              uVar14 = local_b8;
            }
            iVar11 = uVar14 * local_9c;
            uVar14 = uVar13;
            puVar9 = local_a4;
            do {
              uVar18 = recovered_100010c0(uVar15,uVar13);
              if ((int)uVar16 < (int)uVar18) {
                uVar18 = uVar16;
              }
              uVar14 = uVar14 - 1;
              puVar10 = (undefined1 *)(local_a0 + (uVar18 + iVar11) * 4);
              puVar9[-3] = *puVar10;
              puVar9[-2] = puVar10[1];
              puVar9[-1] = puVar10[2];
              *puVar9 = puVar10[3];
              puVar9 = puVar9 + 4;
              uVar15 = uVar15 + local_9c;
            } while (uVar14 != 0);
          }
          local_a4 = local_a4 + local_b0;
          local_a8 = local_a8 + 1;
        } while (local_a8 != local_ac);
        uVar13 = local_c8;
        local_98 = local_c0;
        uVar16 = local_c4;
        param_1 = local_bc;
      }
    }
LAB_1000a198:
    puVar9 = &DAT_1000fe1f;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)*param_1;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0xa7 < _DAT_40010808 && (_DAT_400108a4 != (code *)0x0)))) {
      iStack_dc = uVar13 << 2;
      uStack_d8 = (uint)*(byte *)((int)param_1 + 0x27) << 8 |
                  (uint)*(byte *)((int)param_1 + 0x26) << 0x10 | (uint)*(byte *)(param_1 + 10);
      local_90 = 2;
      local_e0 = uVar16;
      local_bc = param_1;
      iVar11 = (*_DAT_400108a4)(param_1[3],puVar9);
      *(bool *)((int)local_bc + 0x25) = iVar11 != 0;
      puVar8 = local_98;
      param_1 = local_bc;
      if (iVar11 != 0) goto LAB_1000a214;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x25) = 0;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    puVar8 = local_98;
  }
LAB_1000a214:
  recovered_10008024(puVar8);
LAB_1000a218:
  recovered_100086ec(&uStack_94);
  return;
}

#undef DAT_1000a2f0
#undef DAT_1000a2f4
#undef DAT_1000fe1f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108a4
#undef EXT_00000010
#undef PTR_recovered_10007f74_10014010
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108a4
#undef local_e0
#undef local_c8
#undef local_c4
#undef iStack_dc
#undef local_c0
#undef local_bc
#undef uStack_d8
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
#undef uStack_94
#undef local_6c
#undef auStack_68

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
 * Address: 0x1000a2f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a2f8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((param_1 != 0) && (*(undefined1 *)(param_1 + 0x24) = 1, *(char *)(param_1 + 0x10) == '\0'))
     && (*(int *)(param_1 + 0xc) != 0)) {
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb3 < _DAT_40010808)) {
      if (_DAT_400108b0 == (code *)0x0) {
        return;
      }
      (*_DAT_400108b0)(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),1,1);
      return;
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0

#undef DAT_100102d4
#define DAT_100102d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_100102dc
#define DAT_100102dc (*(int *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_100102e0
#define DAT_100102e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef DAT_100102e4
#define DAT_100102e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010818
#define DAT_40010818 (*(uint8_t *)(0x40010818U))
#undef DAT_400108a8
#define DAT_400108a8 (*(uint8_t *)(0x400108a8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010818
#define _DAT_40010818 (*(code * *)(0x40010818U))
#undef _DAT_400108a8
#define _DAT_400108a8 (*(code * *)(0x400108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a398
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a398(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  if (DAT_100102dc == param_1) {
    DAT_100102dc = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x1b < _DAT_40010808 && (_DAT_40010818 != (code *)0x0)))) {
      (*_DAT_40010818)();
    }
  }
  else if ((((*(int *)(param_1 + 0xc) != 0) && (_DAT_40010800 == 0x50414d57)) &&
           (_DAT_40010804 != 0)) && ((0xab < _DAT_40010808 && (_DAT_400108a8 != (code *)0x0)))) {
    (*_DAT_400108a8)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  DAT_100102d4 = 0;
  DAT_100102e4 = 0;
  DAT_100102e0 = 0;
  recovered_10008024(*(void **)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 100) = 0;
  recovered_10008024(*(void **)(param_1 + 0x60));
  recovered_10008024(*(void **)param_1);
  recovered_10008024((void *)param_1);
  return;
}

#undef DAT_100102d4
#undef DAT_100102dc
#undef DAT_100102e0
#undef DAT_100102e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010818
#undef DAT_400108a8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010818
#undef _DAT_400108a8

#undef DAT_1000a65c
#define DAT_1000a65c (*(int *)(((uintptr_t)&pf_window_literal_1000a65c)))
#undef DAT_1000a660
#define DAT_1000a660 (*(int *)(((uintptr_t)&pf_window_literal_1000a660)))
#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef PTR_recovered_10007f74_10014010
#define PTR_recovered_10007f74_10014010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4220U)))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_a4 (*(void * *)(pf_stack_frame + 28))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 32))
#define local_9c (*(int *)(pf_stack_frame + 36))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined * *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4fc
 */

int recovered_1000a4fc(int *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint size;
  undefined1 *puVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (undefined1 *)0x0;
  local_7c = PTR_recovered_10007f74_10014010;
  local_78 = DAT_1000a65c + 0x1000a550;
  local_70 = DAT_1000a660 + 0x1000a560;
  recovered_100086c8(&uStack_94);
  size = 1;
  if (param_1 != (int *)0x0) {
    puVar2 = (undefined1 *)*param_1;
    local_90 = 0xffffffff;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_1000fe1f;
    }
    recovered_1000f5c4((int *)&local_a0,(int)puVar2,param_1[1],((uintptr_t)pf_module_state+0x2fU));
    size = local_9c + 1;
  }
  local_90 = 1;
  local_a4 = recovered_10007ff8(size);
  local_90 = 2;
  puVar2 = &DAT_1000fe1f;
  if (local_a0 != (undefined1 *)0x0) {
    puVar2 = local_a0;
  }
  recovered_10002c60(local_a4,puVar2,local_9c + 1);
  pvVar1 = local_a4;
  recovered_10008024(local_a0);
  recovered_100086ec(&uStack_94);
  return (int)pvVar1;
}

#undef DAT_1000a65c
#undef DAT_1000a660
#undef DAT_1000fe1f
#undef PTR_recovered_10007f74_10014010
#undef local_70
#undef local_6c
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a664
 */

void recovered_1000a664(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
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
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a698
 */

void recovered_1000a698(int param_1,int param_2,int param_3)

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
  iVar2 = 1;
  if (1 < param_2) {
    iVar2 = param_2;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x14) = iVar2;
  iVar1 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x18) = param_3;
  iVar3 = iVar2 + -1;
  if (iVar4 <= iVar2 + -1) {
    iVar3 = iVar4;
  }
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  iVar2 = param_3 + -1;
  if (iVar1 <= param_3 + -1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar2;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
    return;
  }
  recovered_10009d98((undefined4 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a710
 */

void recovered_1000a710(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  iVar2 = iVar1 + -1;
  if (iVar3 <= iVar1 + -1) {
    iVar2 = iVar3;
  }
  if (iVar3 < 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x18);
  }
  iVar3 = iVar1 + -1;
  if (iVar4 <= iVar1 + -1) {
    iVar3 = iVar4;
  }
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar3;
  return;
}


#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a768
 */

void recovered_1000a768(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int in_r3;

  if (param_1 == 0) {
    return;
  }
  puVar3 = &DAT_1000fe1f;
  if (param_2 != 0) {
    puVar3 = (undefined1 *)param_2;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (puVar3[uVar2] != '\0');
  recovered_1000f5c4((int *)param_1,(int)puVar3,uVar2,in_r3);
  if (*(char *)(param_1 + 0x10) == '\0') {
    recovered_10009d98((undefined4 *)param_1);
    return;
  }
  return;
}

#undef DAT_1000fe1f

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a7d0(int param_1,int *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;

  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      param_3 = param_2[2];
    }
    if (param_2 != (int *)0x0 && param_3 != 0) {
      iVar2 = *param_2;
      if (0 < iVar2) {
        iVar2 = param_2[1];
      }
      if (0 < iVar2) {
        if (*(char *)(param_1 + 0x10) == '\0') {
          if (*(int *)(param_1 + 0xc) == 0) {
            return;
          }
          if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0xb8)) ||
             ((_DAT_400108b4 == (code *)0x0 ||
              (iVar2 = (*_DAT_400108b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar2 == 0)))) {
            *(undefined1 *)(param_1 + 0x24) = 1;
            return;
          }
          uVar4 = *(undefined4 *)(param_1 + 0xb0);
          bVar6 = (*(byte *)(param_1 + 0xac) & 1) != 0;
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
          if (bVar6) {
            uVar4 = 1;
          }
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
          if (bVar6) {
            *(char *)(param_1 + 0x24) = (char)uVar4;
          }
        }
        if (*(char *)(param_1 + 0x24) == '\0') {
          iVar2 = *param_2;
          iVar5 = param_2[1];
          puVar3 = (undefined1 *)param_2[2];
          *(undefined4 *)(param_1 + 100) = 0;
          cVar1 = *(char *)(param_1 + 0x10);
          recovered_1000fc54((int *)(param_1 + 0x60),*(int *)(param_1 + 0x60),puVar3,
                             puVar3 + iVar2 * (uintptr_t)iVar5 * 4);
          iVar2 = param_2[1];
          *(int *)(param_1 + 0x7c) = *param_2;
          *(int *)(param_1 + 0x80) = iVar2;
          if (cVar1 == '\x01') {
            *(undefined1 *)(param_1 + 0x25) = 0;
            return;
          }
          recovered_10009d98((undefined4 *)param_1);
          return;
        }
      }
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b4

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a94c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a94c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if (*(char *)(param_1 + 0x4c) == '\0') {
        recovered_1000aa04(param_1);
      }
      bVar2 = recovered_1000b2e4(param_1);
      *(bool *)(param_1 + 0x25) = bVar2;
      if (!bVar2) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x25) == '\0') {
      recovered_10009d98((undefined4 *)param_1);
    }
    iVar1 = _DAT_40010800;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (iVar1 != 0x50414d57) {
      return;
    }
    if (((_DAT_40010804 != 0) && (0x9f < _DAT_40010808)) && (_DAT_4001089c != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_4001089c)();
      return;
    }
  }
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010880
#define DAT_40010880 (*(uint8_t *)(0x40010880U))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef DAT_40010900
#define DAT_40010900 (*(uint8_t *)(0x40010900U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010880
#define _DAT_40010880 (*(code * *)(0x40010880U))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
#undef _DAT_40010900
#define _DAT_40010900 (*(code * *)(0x40010900U))
#define uStack_54 (*(uint *)(pf_stack_frame + 92))
#define uStack_50 (*(uint *)(pf_stack_frame + 96))
#define uStack_3c (*(uint *)(pf_stack_frame + 116))
#define uStack_2c (*(uint *)(pf_stack_frame + 132))
#define local_94 (*(uint *)(pf_stack_frame + 28))
#define local_90 (*(uint *)(pf_stack_frame + 32))
#define local_88 (*(uint *)(pf_stack_frame + 40))
#define local_84 (*(undefined4 *)(pf_stack_frame + 44))
#define local_7c (*(uint *)(pf_stack_frame + 52))
#define local_78 (*(uint *)(pf_stack_frame + 56))
#define local_74 (*(uint (*)[29])(pf_stack_frame + 60))
#define local_64 (*(uint *)(pf_stack_frame + 76))
#define local_60 (*(uint *)(pf_stack_frame + 80))
#define local_5c (*(undefined4 *)(pf_stack_frame + 84))
#define local_4c (*(undefined4 *)(pf_stack_frame + 100))
#define local_48 (*(undefined4 *)(pf_stack_frame + 104))
#define local_44 (*(undefined4 *)(pf_stack_frame + 108))
#define local_40 (*(uint *)(pf_stack_frame + 112))
#define local_38 (*(uint *)(pf_stack_frame + 120))
#define local_34 (*(uint *)(pf_stack_frame + 124))
#define local_30 (*(uint *)(pf_stack_frame + 128))
#define local_28 (*(uint *)(pf_stack_frame + 136))
#define local_24 (*(uint *)(pf_stack_frame + 140))
#define uStack_8c (*(uint *)(pf_stack_frame + 36))
#define uStack_80 (*(uint *)(pf_stack_frame + 48))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa04
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000aa04(int param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r2 = 0;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;

  if (param_1 == 0) {
    return;
  }
  uStack_8c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_88 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_78 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_40 = 0;
  local_30 = 0;
  local_24 = local_78;
  local_28 = local_88;
  local_34 = local_78;
  local_38 = local_88;
  uStack_3c = uStack_8c;
  uStack_2c = uStack_8c;
  if (*(char *)(param_1 + 0x10) != '\x01') {
    local_90 = 0;
    local_84 = 0;
    local_60 = 0;
    local_64 = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0xb8)) ||
       (_DAT_400108b4 == (code *)0x0)) {
LAB_1000ab4c:
      *(undefined1 *)(param_1 + 0x24) = 1;
      return;
    }
    uStack_80 = uStack_8c;
    local_7c = local_88;
    iVar3 = (*_DAT_400108b4)(*(int *)(param_1 + 0xc),param_1 + 0x84);
    if (iVar3 == 0) goto LAB_1000ab4c;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
    if ((*(byte *)(param_1 + 0xac) & 1) != 0) goto LAB_1000ab4c;
    if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
      return;
    }
    if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
       ((_DAT_40010808 < 0x104 ||
        ((_DAT_40010900 == (code *)0x0 ||
         (iVar3 = (*_DAT_40010900)(*(undefined4 *)(param_1 + 0xc),&local_90), iVar3 == 0)))))) {
      if (_DAT_40010800 != 0x50414d57) {
        return;
      }
      if (_DAT_40010804 == 0) {
        return;
      }
      if (_DAT_40010808 < 0x84) {
        return;
      }
      if (_DAT_40010880 == (code *)0x0) {
        return;
      }
      iVar3 = (*_DAT_40010880)(&local_40);
      if (iVar3 == 0) {
        return;
      }
      uVar18 = recovered_10009904(local_74);
      bVar17 = (int)uVar18 == 0;
      uVar5 = 0;
      if (!bVar17) {
        uVar5 = local_40 & 1;
        bVar17 = uVar5 == 0;
      }
      if (bVar17) {
        bVar17 = (local_40 & 2) != 0;
        uVar14 = local_40;
        if (bVar17) {
          uVar5 = uStack_2c;
          uVar14 = local_30;
        }
        if (!bVar17 || uVar14 == 0 && uVar5 == 0) goto LAB_1000b230;
        uVar1 = SignedSaturate(*(int *)(param_1 + 0x38) + uVar14,0x20);
        SignedDoesSaturate(uVar1,0x20);
        *(undefined4 *)(param_1 + 0x30) = uVar1;
        iVar3 = SignedSaturate(*(int *)(param_1 + 0x3c) + uVar5,0x20);
        SignedDoesSaturate(iVar3,0x20);
      }
      else {
        uVar5 = 0;
        iVar15 = *(int *)(param_1 + 0x1c);
        uVar14 = 0;
        iVar3 = *(int *)(param_1 + 0x20);
        if (1 < (int)local_64) {
          if (local_28 == 0) {
            uVar14 = local_64 - 1;
            if (local_38 <= local_64 - 1) {
              uVar14 = local_38;
            }
            if ((int)local_38 < 0) {
              uVar14 = 0;
            }
          }
          else {
            uVar14 = local_38 & ~((int)local_38 >> 0x1f);
            if (local_28 <= uVar14) {
              uVar14 = local_28;
            }
            lVar2 = (ulonglong)uVar14 * (ulonglong)(local_64 - 1);
            uVar18 = recovered_1000281c((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),local_28,0);
            uVar14 = (uint)uVar18;
          }
        }
        if (1 < (int)local_60) {
          if (local_24 == 0) {
            uVar5 = local_60 - 1;
            if (local_34 <= local_60 - 1) {
              uVar5 = local_34;
            }
            if ((int)local_34 < 0) {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = local_34 & ~((int)local_34 >> 0x1f);
            if (local_24 <= uVar5) {
              uVar5 = local_24;
            }
            lVar2 = (ulonglong)uVar5 * (ulonglong)(local_60 - 1);
            uVar18 = recovered_1000281c((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),local_24,0);
            uVar5 = (uint)uVar18;
          }
        }
        *(uint *)(param_1 + 0x30) = (uVar14 - iVar15) + -0xe;
        iVar3 = (uVar5 - iVar3) + -0x26;
      }
      *(int *)(param_1 + 0x34) = iVar3;
LAB_1000b230:
      uVar9 = 0;
      uVar5 = *(uint *)(param_1 + 0xac) & 6;
      if (uVar5 == 2) {
        if (((uStack_3c & 1) != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
          *(undefined1 *)(param_1 + 0x49) = 1;
        }
        if (((uStack_3c & 2) != 0) && (*(char *)(param_1 + 0x41) == '\0')) {
          *(undefined1 *)(param_1 + 0x4a) = 1;
        }
        if (((uStack_3c & 4) != 0) && (uVar9 = 1, *(char *)(param_1 + 0x42) == '\0')) {
          *(undefined1 *)(param_1 + 0x4b) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x42) = uVar9;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
      *(byte *)(param_1 + 0x41) = uVar5 == 2 & (byte)((uStack_3c & 2) >> 1);
      *(byte *)(param_1 + 0x40) = uVar5 == 2 & (byte)uStack_3c;
      recovered_1000a710(param_1);
      return;
    }
    if ((local_90 & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x42) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      iVar15 = *(int *)(param_1 + 0x30);
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      local_78 = *(uint *)(param_1 + 0x34);
      iVar7 = iVar3 + -1;
      if (iVar15 <= iVar3 + -1) {
        iVar7 = iVar15;
      }
      if (iVar15 < 0) {
        iVar7 = 0;
      }
      *(int *)(param_1 + 0x30) = iVar7;
      iVar3 = 1;
      if (1 < *(int *)(param_1 + 0x18)) {
        iVar3 = *(int *)(param_1 + 0x18);
      }
      uVar5 = iVar3 - 1U;
      if ((int)local_78 <= (int)(iVar3 - 1U)) {
        uVar5 = local_78;
      }
      goto LAB_1000b1a4;
    }
    bVar17 = (*(uint *)(param_1 + 0xac) & 6) == 2;
    uVar5 = (local_90 & 4) >> 2 ^ 1;
    *(uint *)(param_1 + 0x3c) = local_78;
    *(uint *)(param_1 + 0x38) = local_7c;
    if (uStack_80 == *(uint *)(param_1 + 0x2c)) {
      bVar8 = 0;
      uVar9 = 0;
      uVar11 = 0;
      if ((local_90 & 2) == 2 && (bVar17 && uVar5 == 0)) goto LAB_1000b148;
    }
    else {
      *(uint *)(param_1 + 0x2c) = uStack_80;
      bVar8 = 0;
      uVar9 = 0;
      uVar11 = 0;
      if ((local_90 & 2) == 2 && (bVar17 && uVar5 == 0)) {
        uStack_8c = local_88 | uStack_8c;
        if ((local_88 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x49) = 1;
        }
        if ((local_88 & 2) != 0) {
          *(undefined1 *)(param_1 + 0x4a) = 1;
        }
        if ((local_88 & 4) != 0) {
          *(undefined1 *)(param_1 + 0x4b) = 1;
        }
LAB_1000b148:
        uVar11 = (undefined1)((uStack_8c & 7) >> 2);
        uVar9 = (undefined1)((uStack_8c & 3) >> 1);
        bVar8 = (byte)uStack_8c & 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x14);
    *(byte *)(param_1 + 0x40) = bVar8;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x42) = uVar11;
    *(undefined1 *)(param_1 + 0x41) = uVar9;
    uVar5 = iVar3 - 1U;
    if ((int)local_7c <= (int)(iVar3 - 1U)) {
      uVar5 = local_7c;
    }
    if ((int)local_7c < 0) {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0x30) = uVar5;
    iVar3 = 1;
    if (1 < *(int *)(param_1 + 0x18)) {
      iVar3 = *(int *)(param_1 + 0x18);
    }
    uVar5 = iVar3 - 1U;
    if ((int)local_78 <= (int)(iVar3 - 1U)) {
      uVar5 = local_78;
    }
LAB_1000b1a4:
    if ((int)local_78 < 0) {
      uVar5 = 0;
    }
    *(uint *)(param_1 + 0x34) = uVar5;
    return;
  }
  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (_DAT_40010804 == 0) {
    return;
  }
  if (_DAT_40010808 < 0x84) {
    return;
  }
  if (_DAT_40010880 == (code *)0x0) {
    return;
  }
  iVar3 = (*_DAT_40010880)(&local_40);
  if (iVar3 == 0) {
    return;
  }
  if ((local_40 & 1) == 0) {
    if (((local_40 & 2) != 0) &&
       (*(undefined2 *)(param_1 + 0x4d) = 0, local_30 != 0 || uStack_2c != 0)) {
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_30;
      *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uStack_2c;
    }
    goto LAB_1000acf8;
  }
  if (((*(char *)(param_1 + 0x4d) == '\x01') && (*(uint *)(param_1 + 0x58) == local_28)) &&
     (*(uint *)(param_1 + 0x5c) == local_24)) {
    if ((*(uint *)(param_1 + 0x50) == local_38) && (*(uint *)(param_1 + 0x54) == local_34)) {
      if ((*(byte *)(param_1 + 0x4e) & 1) == 0) goto LAB_1000ace8;
    }
    else {
      *(undefined1 *)(param_1 + 0x4e) = 1;
    }
    local_74[3] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_64 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_60 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    uVar16 = 0;
    local_74[1] = 0;
    local_74[2] = 0;
    local_5c = 0;
    local_74[0] = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    uStack_58 = local_74[3];
    uStack_54 = local_64;
    uStack_50 = local_60;
    uVar18 = recovered_10009904(local_74);
    uVar13 = local_28;
    uVar14 = local_38;
    uVar5 = local_64;
    uVar10 = *(uint *)(param_1 + 0x14);
    if ((int)uVar18 == 0) goto LAB_1000ae48;
    if ((int)uVar10 < 1) {
LAB_1000af34:
      uVar10 = local_24;
      uVar5 = local_34;
      iVar3 = *(int *)(param_1 + 0x18);
      uVar4 = 0;
      *(uint *)(param_1 + 0x30) = uVar16;
      if (1 < iVar3) {
        if (local_24 != 0) {
          uVar16 = local_34 & ~((int)local_34 >> 0x1f);
          if (local_24 <= uVar16) {
            uVar16 = local_24;
          }
          lVar2 = (ulonglong)uVar16 * (ulonglong)(iVar3 - 1);
          uVar18 = recovered_1000281c((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),local_24,0);
          uVar4 = (uint)uVar18;
          goto LAB_1000af78;
        }
        uVar4 = iVar3 - 1U;
        if (local_34 <= iVar3 - 1U) {
          uVar4 = local_34;
        }
        if ((int)local_34 < 0) {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x18);
      if ((int)uVar4 < 1) {
LAB_1000ae48:
        if (1 < (int)uVar10) {
          if (local_28 == 0) {
            uVar13 = 0;
            uVar16 = uVar10 - 1;
            if (local_38 <= uVar10 - 1) {
              uVar16 = local_38;
            }
            if ((int)local_38 < 0) {
              uVar16 = 0;
            }
          }
          else {
            uVar5 = local_38 & ~((int)local_38 >> 0x1f);
            if (local_28 <= uVar5) {
              uVar5 = local_28;
            }
            lVar2 = (ulonglong)uVar5 * (ulonglong)(uVar10 - 1);
            uVar18 = recovered_1000281c((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),local_28,0);
            uVar16 = (uint)uVar18;
          }
        }
        goto LAB_1000af34;
      }
      uVar6 = extraout_r2;
      if (local_64 != 0) {
        local_94 = local_60;
        uVar6 = local_60;
      }
      if (local_64 == 0 || uVar6 == 0) goto LAB_1000ae48;
      uVar18 = recovered_1000281c((uint)((ulonglong)uVar4 * (ulonglong)local_64),
                                  (uint)((ulonglong)uVar4 * (ulonglong)local_64 >> 0x20),uVar10,0);
      uVar14 = (uint)uVar18;
      uVar16 = 1;
      if (1 < uVar14) {
        uVar16 = uVar14;
      }
      uVar6 = uVar5;
      if (local_94 < uVar14) {
        uVar18 = recovered_1000281c((uint)((ulonglong)uVar10 * (ulonglong)local_94),
                                    (uint)((ulonglong)uVar10 * (ulonglong)local_94 >> 0x20),uVar4,0)
        ;
        uVar6 = 1;
        if (1 < (uint)uVar18) {
          uVar6 = (uint)uVar18;
        }
        uVar16 = local_94;
      }
      uVar13 = local_28;
      uVar14 = local_38;
      uVar18 = recovered_1000f788(local_38,local_28,uVar5,uVar5 - uVar6 >> 1,uVar6,uVar10);
      uVar10 = local_24;
      uVar5 = local_34;
      *(int *)(param_1 + 0x30) = (int)uVar18;
      uVar18 = recovered_1000f788(local_34,local_24,local_94,local_94 - uVar16 >> 1,uVar16,uVar4);
      uVar4 = (uint)uVar18;
LAB_1000af78:
      local_24 = uVar10;
      local_34 = uVar5;
    }
    *(uint *)(param_1 + 0x34) = uVar4;
    local_28 = uVar13;
    local_38 = uVar14;
  }
  else {
    *(undefined2 *)(param_1 + 0x4d) = 1;
  }
LAB_1000ace8:
  *(uint *)(param_1 + 0x5c) = local_24;
  *(uint *)(param_1 + 0x58) = local_28;
  *(uint *)(param_1 + 0x54) = local_34;
  *(uint *)(param_1 + 0x50) = local_38;
LAB_1000acf8:
  if (((uStack_3c & 1) != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    *(undefined1 *)(param_1 + 0x49) = 1;
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  *(char *)(param_1 + 0x40) = (char)(uStack_3c & 1);
  if ((((uStack_3c & 0xff) >> 1 & 1) != 0) && (*(char *)(param_1 + 0x41) == '\0')) {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    *(undefined1 *)(param_1 + 0x47) = 1;
  }
  *(char *)(param_1 + 0x41) = (char)((uStack_3c & 3) >> 1);
  if ((((uStack_3c & 0xff) >> 2 & 1) != 0) && (*(char *)(param_1 + 0x42) == '\0')) {
    *(undefined1 *)(param_1 + 0x4b) = 1;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(char *)(param_1 + 0x42) = (char)((uStack_3c & 7) >> 2);
  iVar15 = *(int *)(param_1 + 0x30);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar12 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x38) = iVar15;
  iVar7 = iVar3 + -1;
  if (iVar15 <= iVar3 + -1) {
    iVar7 = iVar15;
  }
  if (iVar15 < 0) {
    iVar7 = 0;
  }
  iVar3 = 1;
  if (1 < *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x3c) = iVar12;
  *(int *)(param_1 + 0x30) = iVar7;
  iVar15 = iVar3 + -1;
  if (iVar12 <= iVar3 + -1) {
    iVar15 = iVar12;
  }
  if (iVar12 < 0) {
    iVar15 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar15;
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010880
#undef DAT_400108b4
#undef DAT_40010900
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010880
#undef _DAT_400108b4
#undef _DAT_40010900
#undef uStack_54
#undef uStack_50
#undef uStack_3c
#undef uStack_2c
#undef local_94
#undef local_90
#undef local_88
#undef local_84
#undef local_7c
#undef local_78
#undef local_74
#undef local_64
#undef local_60
#undef local_5c
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef uStack_8c
#undef uStack_80
#undef uStack_58

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001095c
#define DAT_4001095c (*(uint8_t *)(0x4001095cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001095c
#define _DAT_4001095c (*(code * *)(0x4001095cU))
#define uStack_38 (*(uint *)(pf_stack_frame + 56))
#define local_54 (*(uint (*)[21])(pf_stack_frame + 28))
#define local_44 (*(uint *)(pf_stack_frame + 44))
#define local_40 (*(uint *)(pf_stack_frame + 48))
#define local_3c (*(int *)(pf_stack_frame + 52))
#define local_34 (*(uint *)(pf_stack_frame + 60))
#define local_30 (*(uint *)(pf_stack_frame + 64))
#define local_2c (*(uint *)(pf_stack_frame + 68))
#define local_28 (*(uint *)(pf_stack_frame + 72))
#define local_24 (*(uint *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b2e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000b2e4(int param_1)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
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

  cVar2 = *(char *)(param_1 + 0x10);
  bVar24 = cVar2 == '\x01';
  if (bVar24) {
    cVar2 = *(char *)(param_1 + 0x24);
  }
  if (!bVar24 || cVar2 != '\0') {
    return false;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  if (0 < iVar7) {
    iVar7 = *(int *)(param_1 + 0x18);
  }
  if (iVar7 < 1) {
    return false;
  }
  local_54[3] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_44 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_40 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_54[2] = 0;
  local_3c = 0;
  local_54[1] = 0;
  local_54[0] = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  uStack_38 = local_54[3];
  local_34 = local_44;
  local_30 = local_40;
  uVar26 = recovered_10009904(local_54);
  uVar1 = local_44;
  if ((int)uVar26 == 0) {
    return false;
  }
  uVar23 = 0;
  uVar8 = 0;
  if (uStack_38 != 0) {
    uVar19 = uStack_38 - 0x20;
    uVar8 = -1 << (uStack_38 & 0xff);
    uVar11 = 0xffffffffU >> (0x20 - uStack_38 & 0xff) | -1 << (uStack_38 & 0xff);
    if (-1 < (int)uVar19) {
      uVar11 = -1 << (uVar19 & 0xff);
    }
    uVar11 = ~uVar11;
    if (0x1f < uStack_38) {
      uVar11 = 0;
    }
    if (-1 < (int)uVar19) {
      uVar8 = 0;
    }
    uVar8 = ~uVar8;
    if (0x1f < uStack_38) {
      uVar8 = 0xffffffff;
    }
    lVar3 = (ulonglong)(uint)*(byte *)(param_1 + 0x26) * (ulonglong)uVar8 +
            ((ulonglong)(uVar11 * *(byte *)(param_1 + 0x26)) << 0x20 | 0x7f);
    uVar8 = ((int)lVar3 -
            (uint)((ulonglong)(lVar3 + CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20))) >> 0x20
                  ) % 0xff) * -0x1010101 << (local_2c & 0xff);
    if (-1 < (int)(local_2c - 0x20)) {
      uVar8 = 0;
    }
  }
  if (local_34 != 0) {
    uVar19 = local_34 - 0x20;
    uVar23 = -1 << (local_34 & 0xff);
    uVar11 = 0xffffffffU >> (0x20 - local_34 & 0xff) | -1 << (local_34 & 0xff);
    if (-1 < (int)uVar19) {
      uVar11 = -1 << (uVar19 & 0xff);
    }
    uVar11 = ~uVar11;
    if (0x1f < local_34) {
      uVar11 = 0;
    }
    if (-1 < (int)uVar19) {
      uVar23 = 0;
    }
    uVar23 = ~uVar23;
    if (0x1f < local_34) {
      uVar23 = 0xffffffff;
    }
    lVar3 = (ulonglong)(uint)*(byte *)(param_1 + 0x27) * (ulonglong)uVar23 +
            ((ulonglong)(uVar11 * *(byte *)(param_1 + 0x27)) << 0x20 | 0x7f);
    uVar23 = ((int)lVar3 -
             (uint)((ulonglong)(lVar3 + CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20))) >>
                   0x20) % 0xff) * -0x1010101 << (local_28 & 0xff);
    if (-1 < (int)(local_28 - 0x20)) {
      uVar23 = 0;
    }
  }
  uVar11 = 0;
  if (local_30 != 0) {
    uVar14 = local_30 - 0x20;
    uVar11 = -1 << (local_30 & 0xff);
    uVar19 = 0xffffffffU >> (0x20 - local_30 & 0xff) | -1 << (local_30 & 0xff);
    if (-1 < (int)uVar14) {
      uVar19 = -1 << (uVar14 & 0xff);
    }
    uVar19 = ~uVar19;
    if (0x1f < local_30) {
      uVar19 = 0;
    }
    if (-1 < (int)uVar14) {
      uVar11 = 0;
    }
    uVar11 = ~uVar11;
    if (0x1f < local_30) {
      uVar11 = 0xffffffff;
    }
    lVar3 = (ulonglong)(uint)*(byte *)(param_1 + 0x28) * (ulonglong)uVar11 +
            ((ulonglong)(uVar19 * *(byte *)(param_1 + 0x28)) << 0x20 | 0x7f);
    uVar11 = ((int)lVar3 -
             (uint)((ulonglong)(lVar3 + CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20))) >>
                   0x20) % 0xff) * -0x1010101 << (local_24 & 0xff);
    if (-1 < (int)(local_24 - 0x20)) {
      uVar11 = 0;
    }
  }
  uVar14 = 0;
  uVar19 = local_40;
  if (local_40 != 0) {
    uVar9 = 0;
    uVar20 = local_44;
    do {
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar19 = local_40;
          if (uVar9 < local_40) {
            uVar20 = local_3c + 7U >> 3;
            uVar19 = 0;
            if (uVar20 != 0) {
              uVar19 = 0;
              puVar10 = (undefined1 *)(uVar20 * uVar14 + local_54[3] * uVar9 + local_54[0]);
              do {
                uVar4 = uVar19 & 0xff;
                uVar19 = uVar19 + 8;
                *puVar10 = (char)((uVar23 | uVar8 | uVar11) >> uVar4);
                uVar20 = uVar20 - 1;
                puVar10 = puVar10 + 1;
              } while (uVar20 != 0);
              uVar19 = 0;
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < local_44);
        uVar20 = local_44;
      }
      uVar9 = uVar9 + 1;
      uVar14 = local_40;
    } while (uVar9 < local_40);
  }
  uVar23 = *(uint *)(param_1 + 0x14);
  uVar8 = uVar23;
  if (0 < (int)uVar23) {
    uVar8 = *(uint *)(param_1 + 0x18);
    uVar19 = uVar8;
  }
  if ((int)uVar8 < 1) {
    return false;
  }
  if (local_44 == 0 || uVar14 == 0) {
    return false;
  }
  uVar26 = recovered_1000281c((uint)((ulonglong)uVar19 * (ulonglong)local_44),
                              (uint)((ulonglong)uVar19 * (ulonglong)local_44 >> 0x20),uVar23,0);
  uVar11 = (uint)uVar26;
  uVar8 = 1;
  if (1 < uVar11) {
    uVar8 = uVar11;
  }
  uVar20 = uVar1;
  if (uVar14 < uVar11) {
    uVar26 = recovered_1000281c((uint)((ulonglong)uVar23 * (ulonglong)uVar14),
                                (uint)((ulonglong)uVar23 * (ulonglong)uVar14 >> 0x20),uVar19,0);
    uVar8 = uVar14;
    uVar20 = 1;
    if (1 < (uint)uVar26) {
      uVar20 = (uint)uVar26;
    }
  }
  uVar11 = uVar14 - uVar8 >> 1;
  uVar1 = uVar1 - uVar20 >> 1;
  if (*(int *)(param_1 + 100) != 0) {
    uVar9 = *(uint *)(param_1 + 0x7c);
    uVar14 = uVar9;
    if (0 < (int)uVar9) {
      uVar14 = *(uint *)(param_1 + 0x80);
      uVar19 = uVar14;
    }
    if (0 < (int)uVar14) {
      uVar26 = recovered_1000281c((uint)((ulonglong)uVar20 * (ulonglong)uVar19),
                                  (uint)((ulonglong)uVar20 * (ulonglong)uVar19 >> 0x20),uVar9,0);
      uVar23 = (uint)uVar26;
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      if (uVar8 < uVar23) {
        uVar26 = recovered_1000281c((uint)((ulonglong)uVar8 * (ulonglong)uVar9),
                                    (uint)((ulonglong)uVar8 * (ulonglong)uVar9 >> 0x20),uVar19,0);
        uVar19 = 1;
        if (1 < (uint)uVar26) {
          uVar19 = (uint)uVar26;
        }
        uVar23 = uVar8;
      }
      else {
        uVar19 = uVar20;
      }
      uVar14 = 0;
      do {
        lVar3 = (ulonglong)uVar14 * (ulonglong)*(uint *)(param_1 + 0x80);
        uVar26 = recovered_1000281c((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),uVar23,0);
        uVar4 = 0;
        uVar9 = uVar11 + (uVar8 - uVar23 >> 1) + uVar14;
        do {
          uVar18 = *(uint *)(param_1 + 0x7c);
          iVar7 = *(int *)(param_1 + 0x60);
          lVar3 = (ulonglong)uVar4 * (ulonglong)uVar18;
          uVar27 = recovered_1000281c((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),uVar19,0);
          uVar17 = 0;
          pbVar15 = (byte *)(iVar7 + (uVar18 * (int)uVar26 + (int)uVar27) * 4);
          uVar18 = 0;
          if (uStack_38 != 0) {
            uVar21 = uStack_38 - 0x20;
            uVar17 = -1 << (uStack_38 & 0xff);
            uVar16 = 0xffffffffU >> (0x20 - uStack_38 & 0xff) | -1 << (uStack_38 & 0xff);
            if (-1 < (int)uVar21) {
              uVar16 = -1 << (uVar21 & 0xff);
            }
            uVar16 = ~uVar16;
            if (0x1f < uStack_38) {
              uVar16 = 0;
            }
            if (-1 < (int)uVar21) {
              uVar17 = 0;
            }
            uVar17 = ~uVar17;
            if (0x1f < uStack_38) {
              uVar17 = 0xffffffff;
            }
            lVar3 = (ulonglong)(uint)*pbVar15 * (ulonglong)uVar17 +
                    ((ulonglong)(uVar16 * *pbVar15) << 0x20 | 0x7f);
            uVar17 = ((int)lVar3 -
                     (uint)((ulonglong)
                            (lVar3 + CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20))) >> 0x20)
                     % 0xff) * -0x1010101 << (local_2c & 0xff);
            if (-1 < (int)(local_2c - 0x20)) {
              uVar17 = 0;
            }
          }
          if (local_34 != 0) {
            uVar21 = local_34 - 0x20;
            uVar18 = -1 << (local_34 & 0xff);
            uVar16 = 0xffffffffU >> (0x20 - local_34 & 0xff) | -1 << (local_34 & 0xff);
            if (-1 < (int)uVar21) {
              uVar16 = -1 << (uVar21 & 0xff);
            }
            uVar16 = ~uVar16;
            if (0x1f < local_34) {
              uVar16 = 0;
            }
            if (-1 < (int)uVar21) {
              uVar18 = 0;
            }
            uVar18 = ~uVar18;
            if (0x1f < local_34) {
              uVar18 = 0xffffffff;
            }
            lVar3 = (ulonglong)(uint)pbVar15[1] * (ulonglong)uVar18 +
                    ((ulonglong)(uVar16 * pbVar15[1]) << 0x20 | 0x7f);
            uVar18 = ((int)lVar3 -
                     (uint)((ulonglong)
                            (lVar3 + CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20))) >> 0x20)
                     % 0xff) * -0x1010101 << (local_28 & 0xff);
            if (-1 < (int)(local_28 - 0x20)) {
              uVar18 = 0;
            }
          }
          if (local_30 == 0) {
            uVar16 = 0;
          }
          else {
            uVar22 = local_30 - 0x20;
            uVar16 = -1 << (local_30 & 0xff);
            uVar21 = 0xffffffffU >> (0x20 - local_30 & 0xff) | -1 << (local_30 & 0xff);
            if (-1 < (int)uVar22) {
              uVar21 = -1 << (uVar22 & 0xff);
            }
            uVar21 = ~uVar21;
            if (0x1f < local_30) {
              uVar21 = 0;
            }
            if (-1 < (int)uVar22) {
              uVar16 = 0;
            }
            uVar16 = ~uVar16;
            if (0x1f < local_30) {
              uVar16 = 0xffffffff;
            }
            lVar3 = (ulonglong)(uint)pbVar15[2] * (ulonglong)uVar16 +
                    ((ulonglong)(uVar21 * pbVar15[2]) << 0x20 | 0x7f);
            uVar16 = ((int)lVar3 -
                     (uint)((ulonglong)
                            (lVar3 + CONCAT44((int)lVar3,(int)((ulonglong)lVar3 >> 0x20))) >> 0x20)
                     % 0xff) * -0x1010101 << (local_24 & 0xff);
            if (-1 < (int)(local_24 - 0x20)) {
              uVar16 = 0;
            }
          }
          uVar21 = uVar1 + (uVar20 - uVar19 >> 1) + uVar4;
          bVar25 = uVar21 <= local_44;
          bVar24 = local_44 == uVar21;
          if (bVar25 && !bVar24) {
            bVar25 = uVar9 <= local_40;
            bVar24 = local_40 == uVar9;
          }
          if ((bVar25 && !bVar24) && (uVar22 = local_3c + 7U >> 3, uVar22 != 0)) {
            uVar13 = 0;
            puVar10 = (undefined1 *)(uVar22 * uVar21 + local_54[3] * uVar9 + local_54[0]);
            do {
              uVar21 = uVar13 & 0xff;
              uVar13 = uVar13 + 8;
              *puVar10 = (char)((uVar18 | uVar17 | uVar16) >> uVar21);
              uVar22 = uVar22 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar22 != 0);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar19);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar23);
      uVar23 = *(uint *)(param_1 + 0x14);
      if ((int)uVar23 < 1) goto LAB_1000bebc;
    }
  }
  uVar19 = *(uint *)(param_1 + 0x18);
  if ((int)uVar19 < 1) goto LAB_1000bebc;
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar17 = *(uint *)(param_1 + 0x34);
  uVar14 = 0;
  uVar9 = uVar23 - 1;
  if ((int)uVar4 <= (int)(uVar23 - 1)) {
    uVar9 = uVar4;
  }
  if ((int)uVar4 < 0) {
    uVar9 = 0;
  }
  uVar26 = recovered_1000281c((uint)((ulonglong)uVar20 * (ulonglong)uVar9),
                              ((int)uVar9 >> 0x1f) * uVar20 +
                              (int)((ulonglong)uVar20 * (ulonglong)uVar9 >> 0x20),uVar23,0);
  uVar23 = uVar19 - 1;
  if ((int)uVar17 <= (int)(uVar19 - 1)) {
    uVar23 = uVar17;
  }
  if ((int)uVar17 < 0) {
    uVar23 = 0;
  }
  uVar27 = recovered_1000281c((uint)((ulonglong)uVar8 * (ulonglong)uVar23),
                              ((int)uVar23 >> 0x1f) * uVar8 +
                              (int)((ulonglong)uVar8 * (ulonglong)uVar23 >> 0x20),uVar19,0);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (uStack_38 != 0) {
      uVar23 = uStack_38 - 0x20;
      uVar8 = 0xff >> (0x20 - uStack_38 & 0xff);
      if (-1 < (int)uVar23) {
        uVar8 = 0xff << (uVar23 & 0xff);
      }
      uVar19 = 0xff << (uStack_38 & 0xff);
      if (-1 < (int)uVar23) {
        uVar19 = 0;
      }
      uVar23 = uVar19 - 0x80;
      uVar8 = uVar8 - (uVar19 < 0x80);
      iVar7 = (uVar23 - (uVar23 + uVar8 + (uint)CARRY4(uVar23,uVar8)) % 0xff) * -0x1010101;
      if (0x1f < uStack_38) {
        iVar7 = -1;
      }
      uVar14 = iVar7 << (local_2c & 0xff);
      if (-1 < (int)(local_2c - 0x20)) {
        uVar14 = 0;
      }
    }
    uVar8 = 0;
    iVar7 = 0x3c3c3c3c;
    uVar23 = 0;
    if (local_34 != 0) {
      uVar19 = local_34 - 0x20;
      uVar23 = 0x3c >> (0x20 - local_34 & 0xff);
      if (-1 < (int)uVar19) {
        uVar23 = 0x3c << (uVar19 & 0xff);
      }
      uVar20 = 0x3c << (local_34 & 0xff);
      if (-1 < (int)uVar19) {
        uVar20 = 0;
      }
      uVar19 = uVar20 + 0x43;
      uVar23 = uVar23 + (0xffffffbc < uVar20);
      iVar12 = 0x3c3c3c3c;
      if (local_34 < 0x20) {
        iVar12 = (uVar19 - (uVar19 + uVar23 + (uint)CARRY4(uVar19,uVar23)) % 0xff) * -0x1010101;
      }
      uVar23 = iVar12 << (local_28 & 0xff);
      if (-1 < (int)(local_28 - 0x20)) {
        uVar23 = 0;
      }
    }
    if (local_30 != 0) {
      uVar19 = local_30 - 0x20;
      uVar8 = 0x3c >> (0x20 - local_30 & 0xff);
      if (-1 < (int)uVar19) {
        uVar8 = 0x3c << (uVar19 & 0xff);
      }
      uVar20 = 0x3c << (local_30 & 0xff);
      if (-1 < (int)uVar19) {
        uVar20 = 0;
      }
      uVar19 = uVar20 + 0x43;
      uVar8 = uVar8 + (0xffffffbc < uVar20);
      if (local_30 < 0x20) {
        iVar7 = (uVar19 - (uVar19 + uVar8 + (uint)CARRY4(uVar19,uVar8)) % 0xff) * -0x1010101;
      }
      uVar8 = iVar7 << (local_24 & 0xff);
      if (-1 < (int)(local_24 - 0x20)) {
        uVar8 = 0;
      }
    }
    uVar8 = uVar23 | uVar14 | uVar8;
  }
  else {
    if (*(char *)(param_1 + 0x41) == '\x01') {
      uVar8 = 0;
      iVar7 = 0x3c3c3c3c;
      uVar23 = 0;
      if (uStack_38 != 0) {
        uVar19 = uStack_38 - 0x20;
        uVar23 = 0x3c >> (0x20 - uStack_38 & 0xff);
        if (-1 < (int)uVar19) {
          uVar23 = 0x3c << (uVar19 & 0xff);
        }
        uVar14 = 0x3c << (uStack_38 & 0xff);
        if (-1 < (int)uVar19) {
          uVar14 = 0;
        }
        uVar19 = uVar14 + 0x43;
        uVar23 = uVar23 + (0xffffffbc < uVar14);
        iVar12 = 0x3c3c3c3c;
        if (uStack_38 < 0x20) {
          iVar12 = (uVar19 - (uVar19 + uVar23 + (uint)CARRY4(uVar19,uVar23)) % 0xff) * -0x1010101;
        }
        uVar23 = iVar12 << (local_2c & 0xff);
        if (-1 < (int)(local_2c - 0x20)) {
          uVar23 = 0;
        }
      }
      if (local_34 != 0) {
        uVar19 = local_34 - 0x20;
        uVar8 = 0xff >> (0x20 - local_34 & 0xff);
        if (-1 < (int)uVar19) {
          uVar8 = 0xff << (uVar19 & 0xff);
        }
        uVar14 = 0xff << (local_34 & 0xff);
        if (-1 < (int)uVar19) {
          uVar14 = 0;
        }
        uVar19 = uVar14 - 0x80;
        uVar8 = uVar8 - (uVar14 < 0x80);
        iVar12 = (uVar19 - (uVar19 + uVar8 + (uint)CARRY4(uVar19,uVar8)) % 0xff) * -0x1010101;
        if (0x1f < local_34) {
          iVar12 = -1;
        }
        uVar8 = iVar12 << (local_28 & 0xff);
        if (-1 < (int)(local_28 - 0x20)) {
          uVar8 = 0;
        }
      }
      if (local_30 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = local_30 - 0x20;
        uVar19 = 0x3c >> (0x20 - local_30 & 0xff);
        if (-1 < (int)uVar14) {
          uVar19 = 0x3c << (uVar14 & 0xff);
        }
        uVar20 = 0x3c << (local_30 & 0xff);
        if (-1 < (int)uVar14) {
          uVar20 = 0;
        }
        uVar14 = uVar20 + 0x43;
        uVar19 = uVar19 + (0xffffffbc < uVar20);
        if (local_30 < 0x20) {
          iVar7 = (uVar14 - (uVar14 + uVar19 + (uint)CARRY4(uVar14,uVar19)) % 0xff) * -0x1010101;
        }
        uVar19 = iVar7 << (local_24 & 0xff);
        if (-1 < (int)(local_24 - 0x20)) {
          uVar19 = 0;
        }
      }
      uVar8 = uVar8 | uVar23;
    }
    else {
      uVar8 = 0;
      if (*(char *)(param_1 + 0x42) == '\x01') {
        uVar23 = 0;
        if (uStack_38 != 0) {
          uVar19 = uStack_38 - 0x20;
          uVar23 = 0x50 >> (0x20 - uStack_38 & 0xff);
          if (-1 < (int)uVar19) {
            uVar23 = 0x50 << (uVar19 & 0xff);
          }
          uVar14 = 0x50 << (uStack_38 & 0xff);
          if (-1 < (int)uVar19) {
            uVar14 = 0;
          }
          uVar19 = uVar14 + 0x2f;
          uVar23 = uVar23 + (0xffffffd0 < uVar14);
          iVar7 = (uVar19 - (uVar19 + uVar23 + (uint)CARRY4(uVar19,uVar23)) % 0xff) * -0x1010101;
          if (0x1f < uStack_38) {
            iVar7 = 0x50505050;
          }
          uVar23 = iVar7 << (local_2c & 0xff);
          if (-1 < (int)(local_2c - 0x20)) {
            uVar23 = 0;
          }
        }
        if (local_34 != 0) {
          uVar19 = local_34 - 0x20;
          uVar8 = 0x82 >> (0x20 - local_34 & 0xff);
          if (-1 < (int)uVar19) {
            uVar8 = 0x82 << (uVar19 & 0xff);
          }
          uVar14 = 0x82 << (local_34 & 0xff);
          if (-1 < (int)uVar19) {
            uVar14 = 0;
          }
          uVar19 = uVar14 - 3;
          uVar8 = uVar8 - (uVar14 < 3);
          iVar7 = (uVar19 - (uVar19 + uVar8 + (uint)CARRY4(uVar19,uVar8)) % 0xff) * -0x1010101;
          if (0x1f < local_34) {
            iVar7 = -0x7d7d7d7e;
          }
          uVar8 = iVar7 << (local_28 & 0xff);
          if (-1 < (int)(local_28 - 0x20)) {
            uVar8 = 0;
          }
        }
        if (local_30 != 0) goto LAB_1000bb7c;
LAB_1000c008:
        uVar19 = 0;
      }
      else {
        uVar23 = 0;
        if (uStack_38 != 0) {
          uVar19 = uStack_38 - 0x20;
          uVar23 = 0xff >> (0x20 - uStack_38 & 0xff);
          if (-1 < (int)uVar19) {
            uVar23 = 0xff << (uVar19 & 0xff);
          }
          uVar14 = 0xff << (uStack_38 & 0xff);
          if (-1 < (int)uVar19) {
            uVar14 = 0;
          }
          uVar19 = uVar14 - 0x80;
          uVar23 = uVar23 - (uVar14 < 0x80);
          iVar7 = (uVar19 - (uVar19 + uVar23 + (uint)CARRY4(uVar19,uVar23)) % 0xff) * -0x1010101;
          if (0x1f < uStack_38) {
            iVar7 = -1;
          }
          uVar23 = iVar7 << (local_2c & 0xff);
          if (-1 < (int)(local_2c - 0x20)) {
            uVar23 = 0;
          }
        }
        if (local_34 != 0) {
          uVar19 = local_34 - 0x20;
          uVar8 = 0xff >> (0x20 - local_34 & 0xff);
          if (-1 < (int)uVar19) {
            uVar8 = 0xff << (uVar19 & 0xff);
          }
          uVar14 = 0xff << (local_34 & 0xff);
          if (-1 < (int)uVar19) {
            uVar14 = 0;
          }
          uVar19 = uVar14 - 0x80;
          uVar8 = uVar8 - (uVar14 < 0x80);
          iVar7 = (uVar19 - (uVar19 + uVar8 + (uint)CARRY4(uVar19,uVar8)) % 0xff) * -0x1010101;
          if (0x1f < local_34) {
            iVar7 = -1;
          }
          uVar8 = iVar7 << (local_28 & 0xff);
          if (-1 < (int)(local_28 - 0x20)) {
            uVar8 = 0;
          }
        }
        if (local_30 == 0) goto LAB_1000c008;
LAB_1000bb7c:
        uVar14 = local_30 - 0x20;
        uVar19 = 0xff >> (0x20 - local_30 & 0xff);
        if (-1 < (int)uVar14) {
          uVar19 = 0xff << (uVar14 & 0xff);
        }
        uVar20 = 0xff << (local_30 & 0xff);
        if (-1 < (int)uVar14) {
          uVar20 = 0;
        }
        uVar14 = uVar20 - 0x80;
        uVar19 = uVar19 - (uVar20 < 0x80);
        iVar7 = (uVar14 - (uVar14 + uVar19 + (uint)CARRY4(uVar14,uVar19)) % 0xff) * -0x1010101;
        if (0x1f < local_30) {
          iVar7 = -1;
        }
        uVar19 = iVar7 << (local_24 & 0xff);
        if (-1 < (int)(local_24 - 0x20)) {
          uVar19 = 0;
        }
      }
      uVar8 = uVar8 | uVar23;
    }
    uVar8 = uVar8 | uVar19;
  }
  iVar7 = -7;
  do {
    iVar12 = -7;
    uVar23 = uVar11 + (int)uVar27 + iVar7;
    do {
      iVar5 = recovered_10002b5c(iVar12);
      iVar6 = recovered_10002b5c(iVar7);
      if ((iVar6 + iVar5 < 8) &&
         (uVar19 = uVar1 + (int)uVar26 + iVar12, -1 < (int)uVar19 && -1 < (int)uVar23)) {
        uVar14 = uVar8;
        if (5 < iVar6 + iVar5) {
          uVar14 = 0;
        }
        bVar25 = uVar19 <= local_44;
        bVar24 = local_44 == uVar19;
        if (bVar25 && !bVar24) {
          bVar25 = uVar23 <= local_40;
          bVar24 = local_40 == uVar23;
        }
        if ((bVar25 && !bVar24) && (uVar20 = local_3c + 7U >> 3, uVar20 != 0)) {
          uVar9 = 0;
          puVar10 = (undefined1 *)(uVar20 * uVar19 + local_54[3] * uVar23 + local_54[0]);
          do {
            uVar19 = uVar9 & 0xff;
            uVar9 = uVar9 + 8;
            *puVar10 = (char)(uVar14 >> uVar19);
            uVar20 = uVar20 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar20 != 0);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 8);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
LAB_1000bebc:
  bVar24 = false;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x15f < _DAT_40010808)) &&
     (_DAT_4001095c != (code *)0x0)) {
    iVar7 = (*_DAT_4001095c)(0,0,local_44,local_40);
    bVar24 = iVar7 != 0;
  }
  return bVar24;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001095c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001095c
#undef uStack_38
#undef local_54
#undef local_44
#undef local_40
#undef local_3c
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_100102d0
#define DAT_100102d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_100102d4
#define DAT_100102d4 (*(uint *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_100102d8
#define DAT_100102d8 (*(uint *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_100102dc
#define DAT_100102dc (*(uint *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_100102e4
#define DAT_100102e4 (*(int *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte recovered_1000c0e8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *pointer;
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  iVar3 = DAT_100102e4;
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar4 = DAT_100102dc;
    if (DAT_100102dc == param_1) {
      uVar4 = (uint)*(byte *)(param_1 + 0x24);
    }
    if (DAT_100102dc == param_1 && uVar4 == 0) {
joined_r0x1000c164:
      do {
        while( true ) {
          if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
             ((_DAT_40010808 < 0x30 ||
              ((_DAT_4001082c == (code *)0x0 || (uVar4 = (*_DAT_4001082c)(), uVar4 == 0))))))
          goto LAB_1000c3f4;
          uVar5 = (uVar4 & 0xffff) >> 8;
          uVar12 = uVar4 & 0xff;
          if (((uVar12 == 0x1b) || (uVar5 != 1)) && (uVar12 != 0 || uVar5 != 0x17)) break;
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        if (DAT_100102d4 == DAT_100102d8) {
          uVar5 = DAT_100102d4 << 1;
          if (DAT_100102d4 == 0) {
            uVar5 = 4;
          }
          if (DAT_100102d4 < uVar5) {
            puVar2 = recovered_10007fcc(uVar5 << 2);
            uVar1 = DAT_100102d4;
            pointer = DAT_100102d0;
            puVar6 = &DAT_100102d0;
            if (DAT_100102d4 != 0) {
              bVar14 = DAT_100102d4 == 4;
              uVar13 = 0;
              if (3 < DAT_100102d4) {
                puVar6 = (undefined4 *)((int)puVar2 - (int)DAT_100102d0);
                bVar14 = puVar6 == (undefined4 *)0xf;
              }
              if ((3 < DAT_100102d4 && (undefined4 *)0xe < puVar6) && !bVar14) {
                uVar13 = DAT_100102d4 & 0xfffffffc;
                puVar7 = puVar2;
                uVar9 = uVar13;
                puVar10 = DAT_100102d0;
                do {
                  uVar15 = *puVar10;
                  uVar16 = puVar10[1];
                  puVar10 = puVar10 + 2;
                  uVar9 = uVar9 - 4;
                  *puVar7 = uVar15;
                  puVar7[1] = uVar16;
                  puVar7 = puVar7 + 2;
                } while (uVar9 != 0);
                if (uVar1 == uVar13) goto LAB_1000c28c;
              }
              iVar8 = uVar1 - uVar13;
              puVar6 = (undefined4 *)((int)pointer + uVar13 * 4);
              puVar11 = (undefined4 *)((int)puVar2 + uVar13 * 4);
              do {
                iVar8 = iVar8 + -1;
                *puVar11 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar11 = puVar11 + 1;
              } while (iVar8 != 0);
            }
LAB_1000c28c:
            recovered_10008024(pointer);
            DAT_100102d0 = puVar2;
            DAT_100102d8 = uVar5;
          }
        }
        *(uint *)((int)DAT_100102d0 + DAT_100102d4 * 4) = uVar4;
        DAT_100102d4 = DAT_100102d4 + 1;
      } while (uVar12 == 0);
      if (DAT_100102e4 == 2) {
        DAT_100102e4 = 0;
        if ((uVar12 != 0x1b) || (0xfffffffb < (uVar4 & 0xff) - 0x45)) goto joined_r0x1000c164;
      }
      else {
        if (DAT_100102e4 == 1) {
          if (uVar12 == 0x5b) {
            DAT_100102e4 = 2;
            goto joined_r0x1000c164;
          }
          *(undefined1 *)(param_1 + 0x24) = 1;
          DAT_100102e4 = 0;
        }
        if (uVar12 != 0x1b) goto joined_r0x1000c164;
      }
      DAT_100102e4 = 1;
      goto joined_r0x1000c164;
    }
  }
  else if (*(int *)(param_1 + 0xc) != 0) {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb7 < _DAT_40010808)) &&
       ((_DAT_400108b4 != (code *)0x0 &&
        (iVar3 = (*_DAT_400108b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar3 != 0)))) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
      if ((*(byte *)(param_1 + 0xac) & 1) == 0) goto LAB_1000c3d0;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
LAB_1000c3d0:
  return *(byte *)(param_1 + 0x24) & 1;
LAB_1000c3f4:
  if (iVar3 == 1 && DAT_100102e4 == 1) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else if (iVar3 != 2 || DAT_100102e4 != 2) goto LAB_1000c3d0;
  DAT_100102e4 = 0;
  goto LAB_1000c3d0;
}

#undef DAT_100102d0
#undef DAT_100102d4
#undef DAT_100102d8
#undef DAT_100102dc
#undef DAT_100102e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c
#undef _DAT_400108b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c470
 */

void recovered_1000c470(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x27) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_4;
  *(undefined1 *)(param_1 + 0x26) = param_2;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
    return;
  }
  recovered_10009d98((undefined4 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4a0
 */

int * recovered_1000c4a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint size;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int *piVar8;
  undefined1 *dst;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined1 *puVar18;
  longlong lVar19;

  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar8 = recovered_10007fcc(0x18);
  iVar15 = *(int *)(param_1 + 0x7c);
  iVar10 = *(int *)(param_1 + 0x80);
  if (iVar15 < 1) {
    iVar15 = *(int *)(param_1 + 0x14);
  }
  if (iVar10 < 1) {
    iVar10 = *(int *)(param_1 + 0x18);
  }
  *piVar8 = iVar15;
  piVar8[1] = iVar10;
  size = iVar15 * (uintptr_t)iVar10 * 4;
  dst = recovered_10007ff8(size);
  iVar9 = *(int *)(param_1 + 100);
  piVar8[2] = (int)dst;
  if (iVar9 != 0) {
    iVar9 = *(int *)(param_1 + 0x7c);
    bVar17 = iVar9 == iVar15;
    if (bVar17) {
      iVar9 = *(int *)(param_1 + 0x80);
    }
    if (bVar17 && iVar9 == iVar10) {
      recovered_10002c60(dst,*(void **)(param_1 + 0x60),size);
      goto LAB_1000c5b8;
    }
  }
  if (size != 0) {
    uVar5 = *(undefined1 *)(param_1 + 0x26);
    uVar6 = *(undefined1 *)(param_1 + 0x27);
    uVar7 = *(undefined1 *)(param_1 + 0x28);
    uVar13 = 0;
    if (0x3c < size) {
      uVar14 = (size - 1 >> 2) + 1;
      uVar16 = uVar14 & 0xfffffff0;
      uVar13 = uVar16 << 2;
      uVar11 = uVar16;
      puVar12 = dst;
      do {
        puVar1 = (undefined1 *)0x370;
        puVar2 = (undefined1 *)0x380;
        puVar3 = (undefined1 *)0x390;
        puVar4 = (undefined1 *)0x3a0;
        lVar19 = 8;
        puVar18 = puVar12;
        while( true ) {
          *puVar18 = *puVar1;
          puVar18[1] = *puVar2;
          puVar18[2] = *puVar3;
          puVar18[3] = *puVar4;
          puVar18 = puVar18 + 4;
          lVar19 = lVar19 + -1;
          if (lVar19 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar18 = puVar12 + 0x20;
        uVar11 = uVar11 - 0x10;
        puVar1 = (undefined1 *)0x378;
        puVar2 = (undefined1 *)0x388;
        puVar3 = (undefined1 *)0x398;
        puVar4 = (undefined1 *)0x3a8;
        lVar19 = 8;
        while( true ) {
          *puVar18 = *puVar1;
          puVar18[1] = *puVar2;
          puVar18[2] = *puVar3;
          puVar18[3] = *puVar4;
          puVar18 = puVar18 + 4;
          lVar19 = lVar19 + -1;
          if (lVar19 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar12 = puVar12 + 0x40;
      } while (uVar11 != 0);
      if (uVar14 == uVar16) goto LAB_1000c5b8;
    }
    do {
      puVar12 = dst + uVar13;
      *puVar12 = uVar5;
      uVar13 = uVar13 + 4;
      puVar12[3] = 0xff;
      puVar12[2] = uVar7;
      puVar12[1] = uVar6;
    } while (uVar13 < size);
  }
LAB_1000c5b8:
  piVar8[5] = 0;
  piVar8[4] = 0;
  piVar8[3] = 0;
  return piVar8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5d4
 */

void recovered_1000c5d4(int param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_2 = *(undefined4 *)(param_1 + 0x30);
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x34);
  return;
}


#undef DAT_100102dc
#define DAT_100102dc (*(int *)(((uintptr_t)pf_module_state + 0x4ecU)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c618
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte recovered_1000c618(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;

  bVar2 = 0;
  if ((param_1 == 0) || (2 < param_2)) goto LAB_1000c6f4;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(param_1 + 0x24) == '\0') {
LAB_1000c64c:
      if (DAT_100102dc == param_1) {
        bVar2 = *(byte *)(param_1 + param_2 + 0x43);
      }
      else {
        recovered_1000aa04(param_1);
        iVar1 = param_1 + param_2;
        bVar2 = 1;
        if (*(char *)(iVar1 + 0x40) == '\0') {
          bVar2 = *(byte *)(iVar1 + 0x46);
        }
        *(undefined1 *)(iVar1 + 0x46) = 0;
        *(byte *)(iVar1 + 0x43) = bVar2 & 1;
      }
      goto LAB_1000c6f4;
    }
  }
  else if (*(int *)(param_1 + 0xc) != 0) {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb7 < _DAT_40010808)) &&
       ((_DAT_400108b4 != (code *)0x0 &&
        (iVar1 = (*_DAT_400108b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar1 != 0)))) {
      uVar3 = *(undefined4 *)(param_1 + 0xb0);
      bVar4 = (*(uint *)(param_1 + 0xac) & 1) != 0;
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      if (bVar4) {
        uVar3 = 1;
      }
      if (bVar4) {
        *(char *)(param_1 + 0x24) = (char)uVar3;
      }
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
      if ((*(uint *)(param_1 + 0xac) & 6) == 2) goto LAB_1000c64c;
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
  bVar2 = 0;
  *(undefined1 *)(param_1 + param_2 + 0x43) = 0;
LAB_1000c6f4:
  return bVar2 & 1;
}

#undef DAT_100102dc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b4

#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_10010079
#define DAT_10010079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1001007a
#define DAT_1001007a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1001007b
#define DAT_1001007b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_1001007c
#define DAT_1001007c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1001007d
#define DAT_1001007d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1001007e
#define DAT_1001007e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
#undef DAT_1001007f
#define DAT_1001007f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_10010081
#define DAT_10010081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10010082
#define DAT_10010082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x292U)))
#undef DAT_10010083
#define DAT_10010083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x293U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_10010085
#define DAT_10010085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_10010086
#define DAT_10010086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef DAT_10010087
#define DAT_10010087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_10010089
#define DAT_10010089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef DAT_1001008a
#define DAT_1001008a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_1001008b
#define DAT_1001008b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_1001008d
#define DAT_1001008d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef DAT_1001008e
#define DAT_1001008e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29eU)))
#undef DAT_1001008f
#define DAT_1001008f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_10010091
#define DAT_10010091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef DAT_10010092
#define DAT_10010092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10010093
#define DAT_10010093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a3U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_10010095
#define DAT_10010095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_10010096
#define DAT_10010096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10010097
#define DAT_10010097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a7U)))
#undef DAT_10010098
#define DAT_10010098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef DAT_10010099
#define DAT_10010099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef DAT_1001009a
#define DAT_1001009a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef DAT_1001009b
#define DAT_1001009b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2abU)))
#undef DAT_1001009c
#define DAT_1001009c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1001009d
#define DAT_1001009d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef DAT_1001009e
#define DAT_1001009e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aeU)))
#undef DAT_1001009f
#define DAT_1001009f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef DAT_100100a0
#define DAT_100100a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef DAT_100100a1
#define DAT_100100a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef DAT_100100a2
#define DAT_100100a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b2U)))
#undef DAT_100100a3
#define DAT_100100a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b3U)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b4U)))
#undef DAT_100100a5
#define DAT_100100a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b5U)))
#undef DAT_100100a6
#define DAT_100100a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b6U)))
#undef DAT_100102d0
#define DAT_100102d0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_100102d4
#define DAT_100102d4 (*(uint *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_100102d8
#define DAT_100102d8 (*(uint *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_100102dc
#define DAT_100102dc (*(int *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_100102e0
#define DAT_100102e0 (*(int *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef DAT_100102e4
#define DAT_100102e4 (*(int *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef PTR_DAT_10014018
#define PTR_DAT_10014018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4228U)))
#undef PTR_DAT_10014080
#define PTR_DAT_10014080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4290U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c770(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint extraout_r1 = 0;
  uint uVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined1 uVar12;
  uint extraout_r2 = 0;
  uint uVar13;
  uint uVar14;
  uint extraout_r2_00 = 0;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;

  iVar2 = DAT_100102dc;
  DAT_10010079 = 0;
  DAT_10010078 = 0;
  DAT_1001007a = 0;
  DAT_1001007b = 0;
  DAT_1001007c = 0;
  DAT_1001007d = 0;
  DAT_1001007e = 0;
  DAT_1001007f = 0;
  DAT_10010080 = 0;
  DAT_10010081 = 0;
  DAT_10010082 = 0;
  DAT_10010083 = 0;
  DAT_10010084 = 0;
  DAT_10010085 = 0;
  DAT_10010086 = 0;
  DAT_10010087 = 0;
  DAT_10010088 = 0;
  DAT_10010089 = 0;
  DAT_1001008a = 0;
  DAT_1001008c = 0;
  DAT_1001008b = 0;
  DAT_1001008d = 0;
  DAT_1001008e = 0;
  DAT_1001008f = 0;
  DAT_10010090 = 0;
  DAT_10010091 = 0;
  DAT_10010092 = 0;
  DAT_10010093 = 0;
  DAT_10010094 = 0;
  DAT_10010095 = 0;
  DAT_10010096 = 0;
  DAT_10010097 = 0;
  DAT_10010098 = 0;
  DAT_10010099 = 0;
  DAT_1001009a = 0;
  DAT_1001009b = 0;
  DAT_1001009c = 0;
  DAT_1001009d = 0;
  DAT_1001009f = 0;
  DAT_1001009e = 0;
  DAT_100100a0 = 0;
  DAT_100100a1 = 0;
  DAT_100100a2 = 0;
  DAT_100100a3 = 0;
  DAT_100100a4 = 0;
  DAT_100100a5 = 0;
  DAT_100100a6 = 0;
  if (DAT_100102dc == 0) {
    DAT_10010078 = 0;
    DAT_10010079 = 0;
    DAT_1001007a = 0;
    DAT_1001007b = 0;
    DAT_1001007c = 0;
    DAT_1001007d = 0;
    DAT_1001007e = 0;
    DAT_1001007f = 0;
    DAT_10010080 = 0;
    DAT_10010081 = 0;
    DAT_10010082 = 0;
    DAT_10010083 = 0;
    DAT_10010084 = 0;
    DAT_10010085 = 0;
    DAT_10010086 = 0;
    DAT_10010087 = 0;
    DAT_10010088 = 0;
    DAT_10010089 = 0;
    DAT_1001008a = 0;
    DAT_1001008b = 0;
    DAT_1001008c = 0;
    DAT_1001008d = 0;
    DAT_1001008e = 0;
    DAT_1001008f = 0;
    DAT_10010090 = 0;
    DAT_10010091 = 0;
    DAT_10010092 = 0;
    DAT_10010093 = 0;
    DAT_10010094 = 0;
    DAT_10010095 = 0;
    DAT_10010096 = 0;
    DAT_10010097 = 0;
    DAT_10010098 = 0;
    DAT_10010099 = 0;
    DAT_1001009a = 0;
    DAT_1001009b = 0;
    DAT_1001009c = 0;
    DAT_1001009d = 0;
    DAT_1001009e = 0;
    DAT_1001009f = 0;
    DAT_100100a0 = 0;
    DAT_100100a1 = 0;
    DAT_100100a2 = 0;
    DAT_100100a3 = 0;
    DAT_100100a4 = 0;
    DAT_100100a5 = 0;
    DAT_100100a6 = 0;
    return;
  }
  if (*(char *)(DAT_100102dc + 0x10) == '\x01') {
    if (*(char *)(DAT_100102dc + 0x24) != '\0') {
      DAT_10010078 = 0;
      DAT_10010079 = 0;
      DAT_1001007a = 0;
      DAT_1001007b = 0;
      DAT_1001007c = 0;
      DAT_1001007d = 0;
      DAT_1001007e = 0;
      DAT_1001007f = 0;
      DAT_10010080 = 0;
      DAT_10010081 = 0;
      DAT_10010082 = 0;
      DAT_10010083 = 0;
      DAT_10010084 = 0;
      DAT_10010085 = 0;
      DAT_10010086 = 0;
      DAT_10010087 = 0;
      DAT_10010088 = 0;
      DAT_10010089 = 0;
      DAT_1001008a = 0;
      DAT_1001008b = 0;
      DAT_1001008c = 0;
      DAT_1001008d = 0;
      DAT_1001008e = 0;
      DAT_1001008f = 0;
      DAT_10010090 = 0;
      DAT_10010091 = 0;
      DAT_10010092 = 0;
      DAT_10010093 = 0;
      DAT_10010094 = 0;
      DAT_10010095 = 0;
      DAT_10010096 = 0;
      DAT_10010097 = 0;
      DAT_10010098 = 0;
      DAT_10010099 = 0;
      DAT_1001009a = 0;
      DAT_1001009b = 0;
      DAT_1001009c = 0;
      DAT_1001009d = 0;
      DAT_1001009e = 0;
      DAT_1001009f = 0;
      DAT_100100a0 = 0;
      DAT_100100a1 = 0;
      DAT_100100a2 = 0;
      DAT_100100a3 = 0;
      DAT_100100a4 = 0;
      DAT_100100a5 = 0;
      DAT_100100a6 = 0;
      return;
    }
  }
  else {
    if (*(int *)(DAT_100102dc + 0xc) == 0) {
      DAT_10010078 = 0;
      DAT_10010079 = 0;
      DAT_1001007a = 0;
      DAT_1001007b = 0;
      DAT_1001007c = 0;
      DAT_1001007d = 0;
      DAT_1001007e = 0;
      DAT_1001007f = 0;
      DAT_10010080 = 0;
      DAT_10010081 = 0;
      DAT_10010082 = 0;
      DAT_10010083 = 0;
      DAT_10010084 = 0;
      DAT_10010085 = 0;
      DAT_10010086 = 0;
      DAT_10010087 = 0;
      DAT_10010088 = 0;
      DAT_10010089 = 0;
      DAT_1001008a = 0;
      DAT_1001008b = 0;
      DAT_1001008c = 0;
      DAT_1001008d = 0;
      DAT_1001008e = 0;
      DAT_1001008f = 0;
      DAT_10010090 = 0;
      DAT_10010091 = 0;
      DAT_10010092 = 0;
      DAT_10010093 = 0;
      DAT_10010094 = 0;
      DAT_10010095 = 0;
      DAT_10010096 = 0;
      DAT_10010097 = 0;
      DAT_10010098 = 0;
      DAT_10010099 = 0;
      DAT_1001009a = 0;
      DAT_1001009b = 0;
      DAT_1001009c = 0;
      DAT_1001009d = 0;
      DAT_1001009e = 0;
      DAT_1001009f = 0;
      DAT_100100a0 = 0;
      DAT_100100a1 = 0;
      DAT_100100a2 = 0;
      DAT_100100a3 = 0;
      DAT_100100a4 = 0;
      DAT_100100a5 = 0;
      DAT_100100a6 = 0;
      return;
    }
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0xb8)) ||
       ((_DAT_400108b4 == (code *)0x0 ||
        (iVar6 = (*_DAT_400108b4)(*(int *)(DAT_100102dc + 0xc),DAT_100102dc + 0x84), iVar6 == 0))))
    {
      *(undefined1 *)(iVar2 + 0x24) = 1;
      return;
    }
    uVar15 = *(undefined4 *)(iVar2 + 0xb0);
    bVar26 = (*(uint *)(iVar2 + 0xac) & 1) != 0;
    *(undefined4 *)(iVar2 + 0x1c) = uVar15;
    if (bVar26) {
      uVar15 = 1;
    }
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0xb4);
    if (bVar26) {
      *(char *)(iVar2 + 0x24) = (char)uVar15;
    }
    if ((*(uint *)(iVar2 + 0xac) & 6) != 2) {
      return;
    }
  }
  iVar6 = DAT_100102e0;
  iVar2 = DAT_100102dc;
  *(undefined4 *)(DAT_100102dc + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  DAT_100102e4 = 0;
  recovered_1000aa04(iVar2);
  iVar2 = DAT_100102dc;
  bVar7 = 1;
  pcVar1 = (char *)(DAT_100102dc + 0x40);
  *(undefined1 *)(DAT_100102dc + 0x4c) = 1;
  bVar11 = 1;
  if (*pcVar1 == '\0') {
    bVar11 = *(byte *)(iVar2 + 0x46);
  }
  *(byte *)(iVar2 + 0x43) = bVar11 & 1;
  *(undefined1 *)(iVar2 + 0x46) = 0;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    bVar7 = *(byte *)(iVar2 + 0x47);
  }
  *(undefined1 *)(iVar2 + 0x47) = 0;
  *(byte *)(iVar2 + 0x44) = bVar7 & 1;
  bVar11 = 1;
  if (*(char *)(iVar2 + 0x42) == '\0') {
    bVar11 = *(byte *)(iVar2 + 0x48);
  }
  *(undefined1 *)(iVar2 + 0x48) = 0;
  *(byte *)(iVar2 + 0x45) = bVar11 & 1;
  while (((_DAT_40010800 == 0x50414d57 && (_DAT_40010804 != 0)) &&
         ((0x2f < _DAT_40010808 &&
          ((_DAT_4001082c != (code *)0x0 && (iVar2 = (*_DAT_4001082c)(), iVar2 != 0))))))) {
    if (DAT_100102d4 == DAT_100102d8) {
      uVar21 = DAT_100102d4 << 1;
      if (DAT_100102d4 == 0) {
        uVar21 = 4;
      }
      if (DAT_100102d4 < uVar21) {
        puVar3 = recovered_10007fcc(uVar21 << 2);
        uVar20 = DAT_100102d4;
        puVar5 = DAT_100102d0;
        if (DAT_100102d4 != 0) {
          bVar26 = DAT_100102d4 == 4;
          uVar22 = 0;
          uVar13 = extraout_r2;
          if (3 < DAT_100102d4) {
            uVar13 = (int)puVar3 - (int)DAT_100102d0;
            bVar26 = uVar13 == 0xf;
          }
          if ((3 < DAT_100102d4 && 0xe < uVar13) && !bVar26) {
            uVar22 = DAT_100102d4 & 0xfffffffc;
            puVar10 = puVar3;
            uVar13 = uVar22;
            puVar17 = DAT_100102d0;
            do {
              uVar27 = *puVar17;
              uVar28 = puVar17[1];
              puVar17 = puVar17 + 2;
              uVar13 = uVar13 - 4;
              *puVar10 = uVar27;
              puVar10[1] = uVar28;
              puVar10 = puVar10 + 2;
            } while (uVar13 != 0);
            if (uVar20 == uVar22) goto LAB_1000cc4c;
          }
          iVar8 = uVar20 - uVar22;
          puVar16 = (undefined4 *)((int)puVar3 + uVar22 * 4);
          puVar19 = (undefined4 *)((int)puVar5 + uVar22 * 4);
          do {
            iVar8 = iVar8 + -1;
            *puVar16 = *puVar19;
            puVar16 = puVar16 + 1;
            puVar19 = puVar19 + 1;
          } while (iVar8 != 0);
        }
LAB_1000cc4c:
        recovered_10008024(puVar5);
        DAT_100102d0 = puVar3;
        DAT_100102d8 = uVar21;
      }
    }
    *(int *)((int)DAT_100102d0 + DAT_100102d4 * 4) = iVar2;
    DAT_100102d4 = DAT_100102d4 + 1;
  }
  if (DAT_100102d4 != 0) {
    uVar21 = 0;
    do {
      iVar2 = DAT_100102dc;
      uVar20 = *(uint *)((int)DAT_100102d0 + uVar21 * 4);
      uVar22 = (uVar20 & 0xffff) >> 8;
      uVar13 = uVar20 & 0xff;
      if ((*(char *)(DAT_100102dc + 0x10) == '\x01' && uVar22 == 1) && (uVar13 != 0x1b)) {
switchD_1000cdbc_caseD_17:
        *(undefined1 *)(DAT_100102dc + 0x24) = 1;
        goto LAB_1000cd24;
      }
      uVar25 = uVar20 >> 8;
      if (uVar13 == 0) {
        switch((uintptr_t)(uVar25 & 0xff)) {
        case 1:
          DAT_10010079 = 1;
          break;
        case 2:
          DAT_1001007a = 1;
          break;
        case 3:
          DAT_1001007c = 1;
          break;
        case 4:
          DAT_1001007b = 1;
          break;
        default:
          goto switchD_1000cdbc_caseD_5;
        case 0x17:
          goto switchD_1000cdbc_caseD_17;
        }
        goto LAB_1000cd24;
      }
      if (DAT_100102e0 != 2) {
        if (DAT_100102e0 == 1) {
          if (uVar13 != 0x5b) {
            *(undefined1 *)(DAT_100102dc + 0x24) = 1;
            DAT_100102e0 = 0;
            goto LAB_1000cf10;
          }
          DAT_100102e0 = 2;
          goto switchD_1000d184_caseD_5;
        }
LAB_1000cf10:
        if (uVar13 != 0x1b) goto switchD_1000ce4c_caseD_1c;
switchD_1000ce4c_caseD_1b:
        DAT_100102e0 = 1;
        goto switchD_1000d184_caseD_5;
      }
      DAT_100102e0 = 0;
      switch((uintptr_t)(uVar20 & 0xff)) {
      case 0x1b:
        goto switchD_1000ce4c_caseD_1b;
      default:
switchD_1000ce4c_caseD_1c:
        if (uVar13 < 0x20) {
          if (uVar13 < 0xe) {
            if ((1 << uVar13 & 0x2500U) != 0) goto LAB_1000cf3c;
            if ((1 << uVar13 & 0x18U) != 0) {
              *(undefined1 *)(iVar2 + 0x24) = 1;
            }
          }
          goto switchD_1000d184_caseD_5;
        }
LAB_1000cf3c:
        uVar23 = *(uint *)(iVar2 + 0x70);
        uVar14 = uVar20;
        if (uVar13 == 10) {
          uVar14 = 0xd;
        }
        uVar12 = (undefined1)uVar14;
        if (uVar13 == 0x7f) {
          uVar12 = 8;
        }
        if (uVar23 == *(uint *)(iVar2 + 0x74)) {
          uVar14 = uVar23 << 1;
          if (uVar23 == 0) {
            uVar14 = 4;
          }
          if (uVar23 < uVar14) {
            puVar5 = recovered_10007fcc(uVar14);
            uVar23 = *(uint *)(iVar2 + 0x70);
            puVar3 = *(undefined8 **)(iVar2 + 0x6c);
            if (uVar23 != 0) {
              bVar26 = uVar23 == 0x10;
              uVar24 = 0;
              uVar9 = extraout_r1;
              if (0xf < uVar23) {
                uVar9 = (int)puVar5 - (int)puVar3;
                bVar26 = uVar9 == 0xf;
              }
              if ((0xf < uVar23 && 0xe < uVar9) && !bVar26) {
                uVar24 = uVar23 & 0xfffffff0;
                puVar10 = puVar5;
                uVar9 = uVar24;
                puVar17 = puVar3;
                do {
                  uVar27 = *puVar17;
                  uVar28 = puVar17[1];
                  puVar17 = puVar17 + 2;
                  uVar9 = uVar9 - 0x10;
                  *puVar10 = uVar27;
                  puVar10[1] = uVar28;
                  puVar10 = puVar10 + 2;
                } while (uVar9 != 0);
                if (uVar23 == uVar24) goto LAB_1000cfec;
              }
              iVar8 = uVar23 - uVar24;
              puVar4 = (undefined1 *)((int)puVar3 + uVar24);
              puVar18 = (undefined1 *)((int)puVar5 + uVar24);
              do {
                iVar8 = iVar8 + -1;
                *puVar18 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar8 != 0);
            }
LAB_1000cfec:
            recovered_10008024(puVar3);
            *(undefined8 **)(iVar2 + 0x6c) = puVar5;
            *(uint *)(iVar2 + 0x74) = uVar14;
            uVar23 = *(uint *)(iVar2 + 0x70);
          }
        }
        *(undefined1 *)(*(int *)(iVar2 + 0x6c) + uVar23) = uVar12;
        *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
        if ((uVar20 - 0x20 & 0xff) < 0x5f) {
          DAT_100100a6 = (undefined1)uVar20;
          if ((uVar20 - 0x61 & 0xff) < 0x1a) {
            puVar4 = *(undefined1 **)
                      ((int)&PTR_DAT_10014018 + ((int)(uVar20 * 0x1000000 + -0x61000000) >> 0x16));
          }
          else {
            uVar14 = uVar20 - 0x41 & 0xff;
            if (uVar14 < 0x1a) {
              if (uVar14 < 0x1a) {
                puVar4 = (&PTR_DAT_10014018)[uVar14];
                break;
              }
              goto switchD_1000d184_caseD_5;
            }
            if (9 < (uVar20 - 0x30 & 0xff)) goto LAB_1000d168;
            puVar4 = (&PTR_DAT_10014080)[uVar20 + 0xd0 & 0xff];
          }
          *puVar4 = 1;
          goto switchD_1000d184_caseD_5;
        }
LAB_1000d168:
        switch((uintptr_t)(uVar20 & 0xff)) {
        case 3:
        case 4:
          *(undefined1 *)(iVar2 + 0x24) = 1;
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
          goto switchD_1000d184_caseD_5;
        case 8:
switchD_1000d184_caseD_8:
          puVar4 = &DAT_100100a3;
          break;
        case 10:
        case 0xd:
          puVar4 = &DAT_10010078;
          break;
        case 0x20:
          puVar4 = &DAT_100100a5;
          break;
        case 0x2d:
          puVar4 = &DAT_100100a1;
          break;
        case 0x2e:
          puVar4 = &DAT_100100a2;
          break;
        default:
          if (uVar13 == 0x7f) goto switchD_1000d184_caseD_8;
          goto switchD_1000d184_caseD_5;
        }
        break;
      case 0x41:
        puVar4 = &DAT_10010079;
        break;
      case 0x42:
        puVar4 = &DAT_1001007a;
        break;
      case 0x43:
        puVar4 = &DAT_1001007c;
        break;
      case 0x44:
        puVar4 = &DAT_1001007b;
      }
      *puVar4 = 1;
switchD_1000d184_caseD_5:
      if (uVar13 == 0x1b) goto LAB_1000cd24;
      if (DAT_100102dc == 0) {
        iVar2 = 0;
        goto switchD_1000d2d0_caseD_f;
      }
switchD_1000cdbc_caseD_5:
      iVar2 = DAT_100102dc;
      switch((uintptr_t)(uVar25 & 0xff)) {
      case 0xe:
        puVar4 = &DAT_100100a3;
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
        goto switchD_1000d2d0_caseD_f;
      case 0x1c:
        puVar4 = &DAT_10010078;
        break;
      case 0x48:
        puVar4 = &DAT_10010079;
        break;
      case 0x4b:
        puVar4 = &DAT_1001007b;
        break;
      case 0x4d:
        puVar4 = &DAT_1001007c;
        break;
      case 0x50:
        puVar4 = &DAT_1001007a;
        break;
      case 0x53:
        puVar4 = &DAT_100100a4;
        break;
      default:
        if ((uVar25 & 0xff) == 1) {
          *(undefined1 *)(DAT_100102dc + 0x24) = 1;
        }
        goto switchD_1000d2d0_caseD_f;
      }
      *puVar4 = 1;
switchD_1000d2d0_caseD_f:
      if (uVar13 == 0 && uVar22 == 0xe) {
        uVar20 = *(uint *)(iVar2 + 0x70);
        if (uVar20 == *(uint *)(iVar2 + 0x74)) {
          uVar13 = uVar20 << 1;
          if (uVar20 == 0) {
            uVar13 = 4;
          }
          if (uVar20 < uVar13) {
            puVar5 = recovered_10007fcc(uVar13);
            uVar20 = *(uint *)(iVar2 + 0x70);
            puVar3 = *(undefined8 **)(iVar2 + 0x6c);
            if (uVar20 != 0) {
              bVar26 = uVar20 == 0x10;
              uVar25 = 0;
              uVar22 = extraout_r2_00;
              if (0xf < uVar20) {
                uVar22 = (int)puVar5 - (int)puVar3;
                bVar26 = uVar22 == 0xf;
              }
              if ((0xf < uVar20 && 0xe < uVar22) && !bVar26) {
                uVar25 = uVar20 & 0xfffffff0;
                puVar10 = puVar5;
                uVar22 = uVar25;
                puVar17 = puVar3;
                do {
                  uVar27 = *puVar17;
                  uVar28 = puVar17[1];
                  puVar17 = puVar17 + 2;
                  uVar22 = uVar22 - 0x10;
                  *puVar10 = uVar27;
                  puVar10[1] = uVar28;
                  puVar10 = puVar10 + 2;
                } while (uVar22 != 0);
                if (uVar20 == uVar25) goto LAB_1000d51c;
              }
              iVar8 = uVar20 - uVar25;
              puVar4 = (undefined1 *)((int)puVar5 + uVar25);
              puVar18 = (undefined1 *)((int)puVar3 + uVar25);
              do {
                iVar8 = iVar8 + -1;
                *puVar4 = *puVar18;
                puVar4 = puVar4 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar8 != 0);
            }
LAB_1000d51c:
            recovered_10008024(puVar3);
            *(uint *)(iVar2 + 0x74) = uVar13;
            uVar20 = *(uint *)(iVar2 + 0x70);
            *(undefined8 **)(iVar2 + 0x6c) = puVar5;
          }
        }
        *(undefined1 *)(*(int *)(iVar2 + 0x6c) + uVar20) = 8;
        *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
      }
LAB_1000cd24:
      uVar21 = uVar21 + 1;
    } while (uVar21 < DAT_100102d4);
  }
  DAT_100102d4 = 0;
  if (iVar6 == 1 && DAT_100102e0 == 1) {
    *(undefined1 *)(DAT_100102dc + 0x24) = 1;
  }
  else {
    if (iVar6 != 2) {
      DAT_100102d4 = 0;
      DAT_100102e4 = DAT_100102e0;
      return;
    }
    if (DAT_100102e0 != 2) {
      DAT_100102d4 = 0;
      DAT_100102e4 = DAT_100102e0;
      return;
    }
  }
  DAT_100102e4 = 0;
  DAT_100102e0 = 0;
  return;
}

#undef DAT_10010078
#undef DAT_10010079
#undef DAT_1001007a
#undef DAT_1001007b
#undef DAT_1001007c
#undef DAT_1001007d
#undef DAT_1001007e
#undef DAT_1001007f
#undef DAT_10010080
#undef DAT_10010081
#undef DAT_10010082
#undef DAT_10010083
#undef DAT_10010084
#undef DAT_10010085
#undef DAT_10010086
#undef DAT_10010087
#undef DAT_10010088
#undef DAT_10010089
#undef DAT_1001008a
#undef DAT_1001008b
#undef DAT_1001008c
#undef DAT_1001008d
#undef DAT_1001008e
#undef DAT_1001008f
#undef DAT_10010090
#undef DAT_10010091
#undef DAT_10010092
#undef DAT_10010093
#undef DAT_10010094
#undef DAT_10010095
#undef DAT_10010096
#undef DAT_10010097
#undef DAT_10010098
#undef DAT_10010099
#undef DAT_1001009a
#undef DAT_1001009b
#undef DAT_1001009c
#undef DAT_1001009d
#undef DAT_1001009e
#undef DAT_1001009f
#undef DAT_100100a0
#undef DAT_100100a1
#undef DAT_100100a2
#undef DAT_100100a3
#undef DAT_100100a4
#undef DAT_100100a5
#undef DAT_100100a6
#undef DAT_100102d0
#undef DAT_100102d4
#undef DAT_100102d8
#undef DAT_100102dc
#undef DAT_100102e0
#undef DAT_100102e4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef DAT_400108b4
#undef PTR_DAT_10014018
#undef PTR_DAT_10014080
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c
#undef _DAT_400108b4

#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_10010079
#define DAT_10010079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1001007a
#define DAT_1001007a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1001007b
#define DAT_1001007b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_1001007c
#define DAT_1001007c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1001007d
#define DAT_1001007d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1001007e
#define DAT_1001007e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
#undef DAT_1001007f
#define DAT_1001007f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_10010081
#define DAT_10010081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10010082
#define DAT_10010082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x292U)))
#undef DAT_10010083
#define DAT_10010083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x293U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_10010085
#define DAT_10010085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_10010086
#define DAT_10010086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef DAT_10010087
#define DAT_10010087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_10010089
#define DAT_10010089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef DAT_1001008a
#define DAT_1001008a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_1001008b
#define DAT_1001008b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_1001008c
#define DAT_1001008c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_1001008d
#define DAT_1001008d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef DAT_1001008e
#define DAT_1001008e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29eU)))
#undef DAT_1001008f
#define DAT_1001008f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29fU)))
#undef DAT_10010090
#define DAT_10010090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_10010091
#define DAT_10010091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef DAT_10010092
#define DAT_10010092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a2U)))
#undef DAT_10010093
#define DAT_10010093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a3U)))
#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_10010095
#define DAT_10010095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a5U)))
#undef DAT_10010096
#define DAT_10010096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10010097
#define DAT_10010097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a7U)))
#undef DAT_10010098
#define DAT_10010098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef DAT_10010099
#define DAT_10010099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef DAT_1001009a
#define DAT_1001009a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef DAT_1001009b
#define DAT_1001009b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2abU)))
#undef DAT_1001009c
#define DAT_1001009c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1001009d
#define DAT_1001009d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef DAT_1001009e
#define DAT_1001009e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aeU)))
#undef DAT_1001009f
#define DAT_1001009f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2afU)))
#undef DAT_100100a0
#define DAT_100100a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef DAT_100100a1
#define DAT_100100a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef DAT_100100a2
#define DAT_100100a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b2U)))
#undef DAT_100100a3
#define DAT_100100a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b3U)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b4U)))
#undef DAT_100100a5
#define DAT_100100a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b5U)))
#undef DAT_100100a6
#define DAT_100100a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d65c
 */

void recovered_1000d65c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010079 = 0;
  DAT_10010078 = 0;
  DAT_1001007a = 0;
  DAT_1001007b = 0;
  DAT_1001007c = 0;
  DAT_1001007d = 0;
  DAT_1001007e = 0;
  DAT_1001007f = 0;
  DAT_10010080 = 0;
  DAT_10010081 = 0;
  DAT_10010082 = 0;
  DAT_10010083 = 0;
  DAT_10010084 = 0;
  DAT_10010085 = 0;
  DAT_10010086 = 0;
  DAT_10010087 = 0;
  DAT_10010088 = 0;
  DAT_10010089 = 0;
  DAT_1001008a = 0;
  DAT_1001008c = 0;
  DAT_1001008b = 0;
  DAT_1001008d = 0;
  DAT_1001008e = 0;
  DAT_1001008f = 0;
  DAT_10010090 = 0;
  DAT_10010091 = 0;
  DAT_10010092 = 0;
  DAT_10010093 = 0;
  DAT_10010094 = 0;
  DAT_10010095 = 0;
  DAT_10010096 = 0;
  DAT_10010097 = 0;
  DAT_10010098 = 0;
  DAT_10010099 = 0;
  DAT_1001009a = 0;
  DAT_1001009b = 0;
  DAT_1001009c = 0;
  DAT_1001009d = 0;
  DAT_1001009f = 0;
  DAT_1001009e = 0;
  DAT_100100a0 = 0;
  DAT_100100a1 = 0;
  DAT_100100a2 = 0;
  DAT_100100a3 = 0;
  DAT_100100a4 = 0;
  DAT_100100a5 = 0;
  DAT_100100a6 = 0;
  return;
}

#undef DAT_10010078
#undef DAT_10010079
#undef DAT_1001007a
#undef DAT_1001007b
#undef DAT_1001007c
#undef DAT_1001007d
#undef DAT_1001007e
#undef DAT_1001007f
#undef DAT_10010080
#undef DAT_10010081
#undef DAT_10010082
#undef DAT_10010083
#undef DAT_10010084
#undef DAT_10010085
#undef DAT_10010086
#undef DAT_10010087
#undef DAT_10010088
#undef DAT_10010089
#undef DAT_1001008a
#undef DAT_1001008b
#undef DAT_1001008c
#undef DAT_1001008d
#undef DAT_1001008e
#undef DAT_1001008f
#undef DAT_10010090
#undef DAT_10010091
#undef DAT_10010092
#undef DAT_10010093
#undef DAT_10010094
#undef DAT_10010095
#undef DAT_10010096
#undef DAT_10010097
#undef DAT_10010098
#undef DAT_10010099
#undef DAT_1001009a
#undef DAT_1001009b
#undef DAT_1001009c
#undef DAT_1001009d
#undef DAT_1001009e
#undef DAT_1001009f
#undef DAT_100100a0
#undef DAT_100100a1
#undef DAT_100100a2
#undef DAT_100100a3
#undef DAT_100100a4
#undef DAT_100100a5
#undef DAT_100100a6

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d964(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d968(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000d96c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d974(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000d978(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000e188
#define DAT_1000e188 (*(int *)(((uintptr_t)&pf_window_literal_1000e188)))
#undef DAT_1000e18c
#define DAT_1000e18c (*(int *)(((uintptr_t)&pf_window_literal_1000e18c)))
#undef DAT_1000fe1d
#define DAT_1000fe1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000ff25
#define DAT_1000ff25 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x135U)))
#undef PTR_recovered_10007f74_10014010
#define PTR_recovered_10007f74_10014010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4220U)))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 104))
#define local_c0 (*(int * *)(pf_stack_frame + 16))
#define local_bc (*(undefined4 * *)(pf_stack_frame + 20))
#define local_b8 (*(uint *)(pf_stack_frame + 24))
#define local_b4 (*(uint *)(pf_stack_frame + 28))
#define local_b0 (*(uint *)(pf_stack_frame + 32))
#define local_ac (*(char * *)(pf_stack_frame + 36))
#define local_a8 (*(uint *)(pf_stack_frame + 40))
#define local_a4 (*(uint *)(pf_stack_frame + 44))
#define local_a0 (*(void * *)(pf_stack_frame + 48))
#define local_9c (*(uint *)(pf_stack_frame + 52))
#define local_98 (*(undefined4 *)(pf_stack_frame + 56))
#define local_90 (*(undefined4 *)(pf_stack_frame + 64))
#define local_7c (*(undefined * *)(pf_stack_frame + 84))
#define local_78 (*(int *)(pf_stack_frame + 88))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_70 (*(int *)(pf_stack_frame + 96))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbac
 */

void recovered_1000dbac(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte *pointer;
  undefined4 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  iVar11 = param_2[1];
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_7c = PTR_recovered_10007f74_10014010;
  local_78 = DAT_1000e188 + 0x1000dc08;
  local_70 = DAT_1000e18c + 0x1000dc18;
  local_c0 = param_1;
  recovered_100086c8(&uStack_94);
  local_b8 = 0;
  if (iVar11 != 0) {
    pcVar2 = (char *)*param_2;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = &DAT_1000fe1f;
    }
    local_b8 = (uint)(*pcVar2 == '/');
  }
  uVar3 = 0;
  local_bc = param_2;
  do {
    uVar7 = local_bc[1];
    if (uVar7 <= uVar3) break;
    puVar5 = (undefined1 *)*local_bc;
    uVar12 = uVar3;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_1000fe1f;
    }
    do {
      if (puVar5[uVar12] == '/') {
        local_b4 = 0;
        local_b0 = uVar12;
        if (uVar12 != 0xffffffff) goto LAB_1000dd14;
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
    local_b4 = 1;
    uVar12 = uVar7;
    local_b0 = 0xffffffff;
LAB_1000dd14:
    uVar12 = uVar12 - uVar3;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = (char *)0x0;
    uVar7 = uVar7 - uVar3;
    uVar8 = uVar12;
    if (uVar7 < uVar12) {
      uVar8 = uVar7;
    }
    if (uVar12 == 0xffffffff) {
      uVar8 = uVar7;
    }
    local_90 = 1;
    recovered_1000f5c4((int *)&local_ac,(int)(puVar5 + uVar3),uVar8,uVar12);
    if (local_a8 != 0) {
      pcVar2 = local_ac;
      if (local_ac == (char *)0x0) {
        pcVar2 = &DAT_1000fe1f;
      }
      if (local_a8 == 2) {
        cVar1 = *pcVar2;
        if (cVar1 == '.') {
          pcVar2 = (char *)(uint)(byte)pcVar2[1];
        }
        if (cVar1 == '.' && pcVar2 == (char *)0x2e) {
          if (local_9c != 0) {
            pointer = *(byte **)((int)local_a0 + local_9c * 0xc + -0xc);
            uVar3 = *(uint *)((int)local_a0 + local_9c * 0xc + -8);
            pbVar6 = pointer;
            if (pointer == (byte *)0x0) {
              pbVar6 = &DAT_1000fe1f;
            }
            bVar14 = uVar3 == 2;
            if (bVar14) {
              uVar3 = (uint)*pbVar6;
            }
            bVar13 = bVar14 && uVar3 == 0x2e;
            if (bVar14 && uVar3 == 0x2e) {
              bVar13 = pbVar6[1] == 0x2e;
            }
            if (!bVar13) {
              recovered_10008024(pointer);
              local_9c = local_9c - 1;
              goto LAB_1000dc94;
            }
          }
          if (local_b8 != 0) goto LAB_1000dc94;
        }
      }
      else if ((local_a8 == 1) && (*pcVar2 == '.')) goto LAB_1000dc94;
      local_90 = 2;
      recovered_1000f8d4((int *)&local_a0,(int *)&local_ac);
    }
LAB_1000dc94:
    recovered_10008024(local_ac);
    uVar3 = local_b0 + 1;
  } while (local_b4 == 0);
  local_a4 = 0;
  puVar5 = &DAT_1000fe1f;
  if (local_b8 != 0) {
    puVar5 = &DAT_1000ff25;
  }
  local_a8 = 0;
  local_ac = (char *)0x0;
  uVar3 = 0;
  do {
    uVar7 = uVar3;
    uVar3 = uVar7 + 1;
  } while (puVar5[uVar7] != '\0');
  local_90 = 3;
  recovered_1000f5c4((int *)&local_ac,(int)puVar5,uVar7,((uintptr_t)pf_module_state+0x2fU));
  if (local_9c != 0) {
    uVar3 = 0;
    do {
      local_b0 = uVar3;
      if (uVar3 != 0 || (local_b8 & 1) != 0) {
        if (local_a8 == local_a4) {
          uVar7 = local_a8 << 1;
          if (local_a8 == 0) {
            uVar7 = 0x10;
          }
          if (uVar7 <= local_a8) goto LAB_1000df64;
          local_90 = 4;
          local_b4 = uVar7;
          pcVar2 = recovered_10007fcc(uVar7 | 1);
          uVar3 = local_b0;
          uVar7 = 0;
          *pcVar2 = '\0';
          if (local_a8 != 0) {
            bVar14 = local_a8 == 0x10;
            uVar12 = 0;
            if (0xf < local_a8) {
              uVar7 = (int)pcVar2 - (int)local_ac;
              bVar14 = uVar7 == 0xf;
            }
            if ((0xf < local_a8 && 0xe < uVar7) && !bVar14) {
              uVar12 = local_a8 & 0xfffffff0;
              uVar7 = uVar12;
              pcVar9 = pcVar2;
              pcVar10 = local_ac;
              do {
                uVar15 = *(undefined8 *)pcVar10;
                uVar16 = *(undefined8 *)(pcVar10 + 8);
                pcVar10 = pcVar10 + 0x10;
                uVar7 = uVar7 - 0x10;
                *(undefined8 *)pcVar9 = uVar15;
                *(undefined8 *)(pcVar9 + 8) = uVar16;
                pcVar9 = pcVar9 + 0x10;
              } while (uVar7 != 0);
              if (local_a8 == uVar12) goto LAB_1000df50;
            }
            iVar11 = local_a8 - uVar12;
            pcVar9 = pcVar2 + uVar12;
            pcVar10 = local_ac + uVar12;
            do {
              iVar11 = iVar11 + -1;
              *pcVar9 = *pcVar10;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            } while (iVar11 != 0);
          }
LAB_1000df50:
          pcVar2[local_a8] = '\0';
          recovered_10008024(local_ac);
          local_a4 = local_b4;
LAB_1000df90:
          local_ac = pcVar2;
        }
        else {
LAB_1000df64:
          if (local_ac == (char *)0x0) {
            local_90 = 5;
            pcVar2 = recovered_10007fcc(1);
            local_a4 = 0;
            *pcVar2 = '\0';
            uVar3 = local_b0;
            goto LAB_1000df90;
          }
        }
        local_ac[local_a8] = '/';
        local_ac[local_a8 + 1] = '\0';
        local_a8 = local_a8 + 1;
      }
      puVar4 = (undefined4 *)((int)local_a0 + uVar3 * 0xc);
      puVar5 = (undefined1 *)*puVar4;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_1000fe1f;
      }
      local_90 = 6;
      recovered_1000f9fc((int *)&local_ac,(int)puVar5,puVar4[1],((uintptr_t)pf_module_state+0x2fU));
      uVar3 = local_b0 + 1;
    } while (uVar3 < local_9c);
  }
  if (local_a8 == 0) {
    local_c0[2] = 0;
    pcVar2 = &DAT_1000fe1d;
    local_c0[1] = 0;
    *local_c0 = 0;
    uVar3 = 0;
    if (local_b8 != 0) {
      pcVar2 = &DAT_1000ff25;
    }
    do {
      uVar7 = uVar3;
      uVar3 = uVar7 + 1;
    } while (pcVar2[uVar7] != '\0');
  }
  else {
    local_c0[2] = 0;
    local_c0[1] = 0;
    *local_c0 = 0;
    pcVar2 = &DAT_1000fe1f;
    uVar7 = local_a8;
    if (local_ac != (char *)0x0) {
      pcVar2 = local_ac;
    }
  }
  local_90 = 7;
  recovered_1000f5c4(local_c0,(int)pcVar2,uVar7,7);
  recovered_10008024(local_ac);
  if (local_9c != 0) {
    iVar11 = local_9c * 0xc;
    uVar3 = local_9c;
    do {
      iVar11 = iVar11 + -0xc;
      recovered_10008024(*(void **)((int)local_a0 + iVar11));
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  local_9c = 0;
  recovered_10008024(local_a0);
  recovered_100086ec(&uStack_94);
  return;
}

#undef DAT_1000e188
#undef DAT_1000e18c
#undef DAT_1000fe1d
#undef DAT_1000fe1f
#undef DAT_1000ff25
#undef PTR_recovered_10007f74_10014010
#undef uStack_94
#undef auStack_68
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

#undef DAT_1000e578
#define DAT_1000e578 (*(int *)(((uintptr_t)&pf_window_literal_1000e578)))
#undef DAT_1000e57c
#define DAT_1000e57c (*(int *)(((uintptr_t)&pf_window_literal_1000e57c)))
#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
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
#undef PTR_recovered_10007f74_10014010
#define PTR_recovered_10007f74_10014010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4220U)))
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
#define local_b0 (*(char * *)(pf_stack_frame + 64))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define local_a8 (*(uint *)(pf_stack_frame + 72))
#define local_a4 (*(int *)(pf_stack_frame + 76))
#define local_a0 (*(int *)(pf_stack_frame + 80))
#define local_9c (*(undefined4 *)(pf_stack_frame + 84))
#define local_90 (*(undefined4 *)(pf_stack_frame + 96))
#define local_7c (*(undefined * *)(pf_stack_frame + 116))
#define local_78 (*(int *)(pf_stack_frame + 120))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 124))
#define local_70 (*(int *)(pf_stack_frame + 128))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 132))
#define iStack_ac (*(int *)(pf_stack_frame + 68))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 92))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 136))
#define local_d8 (*(void * *)(pf_stack_frame + 24))
#define local_d4 (*(int * *)(pf_stack_frame + 28))
#define local_d0 (*(int * *)(pf_stack_frame + 32))
#define local_cc (*(char * *)(pf_stack_frame + 36))
#define local_c8 (*(void * *)(pf_stack_frame + 40))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_bc (*(char * *)(pf_stack_frame + 52))
#define local_b8 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000e190(char *param_1,int *param_2,int *param_3)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int extraout_r3 = 0;
  void *pvVar6;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = PTR_recovered_10007f74_10014010;
  local_78 = DAT_1000e578 + 0x1000e1dc;
  local_70 = DAT_1000e57c + 0x1000e1ec;
  recovered_100086c8(&uStack_94);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (char *)0x0) {
    pvVar6 = (void *)0x0;
    goto LAB_1000e3d4;
  }
  iStack_ac = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_a8 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_a4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_b0 = (char *)0x0;
  local_a0 = 0;
  local_9c = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = (void *)0x0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (param_1[uVar2] != '\0');
  local_90 = 0xffffffff;
  local_d4 = param_2;
  local_d0 = param_3;
  local_cc = param_1;
  recovered_1000f5c4((int *)&local_c8,(int)param_1,uVar2,extraout_r3);
  local_90 = 1;
  recovered_1000dbac((int *)&local_bc,&local_c8);
  recovered_10008024(local_c8);
  pcVar3 = local_bc;
  if (local_bc == (char *)0x0) {
    pcVar3 = &DAT_1000fe1f;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x5b < _DAT_40010808)) &&
     (_DAT_40010858 != (code *)0x0)) {
    local_90 = 2;
    iVar4 = (*_DAT_40010858)(pcVar3,&local_b0);
    if (iVar4 == 0) goto LAB_1000e344;
LAB_1000e424:
    pvVar6 = (void *)0x0;
    if (iStack_ac == 0) {
      local_cc = local_b0;
      uVar1 = 0;
      if (local_b0 != (char *)0x0) {
        uVar1 = local_a8;
      }
      if (local_b0 != (char *)0x0 && uVar1 != 0) {
        iVar4 = 0;
        if (local_a4 != 0) {
          iVar4 = local_a0;
        }
        if (local_a4 != 0 && iVar4 != 0) {
          local_90 = 4;
          local_d8 = recovered_10007ff8(uVar1);
          local_90 = 5;
          recovered_10002c60(local_d8,local_cc,local_a8);
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
            local_90 = 6;
            (*_DAT_40010850)(local_cc);
          }
          if (local_d4 != (int *)0x0) {
            *local_d4 = local_a4;
          }
          pvVar6 = local_d8;
          if (local_d0 != (int *)0x0) {
            *local_d0 = local_a0;
          }
        }
      }
    }
  }
  else {
LAB_1000e344:
    iVar4 = 0;
    do {
      pcVar3 = local_cc + iVar4;
      iVar4 = iVar4 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = &DAT_1000fe1f;
    if (local_bc != (char *)0x0) {
      pcVar3 = local_bc;
    }
    if (local_b8 + 1 == iVar4) {
      pvVar6 = (void *)0x0;
      if (local_b8 != 0) {
        pcVar5 = local_cc;
        do {
          if (*pcVar3 != *pcVar5) goto LAB_1000e39c;
          local_b8 = local_b8 + -1;
          pcVar5 = pcVar5 + 1;
          pcVar3 = pcVar3 + 1;
        } while (local_b8 != 0);
      }
    }
    else {
LAB_1000e39c:
      pvVar6 = (void *)0x0;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x5b < _DAT_40010808 && (_DAT_40010858 != (code *)0x0)))) {
        local_90 = 3;
        iVar4 = (*_DAT_40010858)(local_cc,&local_b0);
        pvVar6 = (void *)0x0;
        if (iVar4 != 0) goto LAB_1000e424;
      }
    }
  }
  recovered_10008024(local_bc);
LAB_1000e3d4:
  recovered_100086ec(&uStack_94);
  return (uint)pvVar6;
}

#undef DAT_1000e578
#undef DAT_1000e57c
#undef DAT_1000fe1f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010858
#undef PTR_recovered_10007f74_10014010
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_40010858
#undef local_b0
#undef auStack_e0
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef iStack_ac
#undef uStack_94
#undef auStack_68
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8

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
 * Address: 0x1000e580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e580(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x54)) || (_DAT_40010850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000e5cc. Too many branches */
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
#undef DAT_40010868
#define DAT_40010868 (*(uint8_t *)(0x40010868U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010868
#define _DAT_40010868 (*(code * *)(0x40010868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000e5d0(char *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x6b < _DAT_40010808)) &&
     (_DAT_40010868 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_40010868)(param_1);
    return uVar1;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010868
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010868

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010870
#define DAT_40010870 (*(uint8_t *)(0x40010870U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010870
#define _DAT_40010870 (*(code * *)(0x40010870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e624
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e624(void *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x74)) || (_DAT_40010870 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000e670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_40010870)(param_1);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010870
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010870

#undef DAT_1000e870
#define DAT_1000e870 (*(double *)(((uintptr_t)&pf_window_literal_1000e870)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010874
#define DAT_40010874 (*(uint8_t *)(0x40010874U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010874
#define _DAT_40010874 (*(code * *)(0x40010874U))
#define in_stack_00000004 (*(double *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e678
 */

/* WARNING: Removing unreachable block (ram,0x1000e774) */
/* WARNING: Removing unreachable block (ram,0x1000e784) */
/* WARNING: Removing unreachable block (ram,0x1000e790) */
/* WARNING: Removing unreachable block (ram,0x1000e798) */
/* WARNING: Removing unreachable block (ram,0x1000e7a0) */
/* WARNING: Removing unreachable block (ram,0x1000e7a4) */
/* WARNING: Removing unreachable block (ram,0x1000e7b0) */
/* WARNING: Removing unreachable block (ram,0x1000e760) */
/* WARNING: Removing unreachable block (ram,0x1000e7c0) */
/* WARNING: Removing unreachable block (ram,0x1000e7cc) */
/* WARNING: Removing unreachable block (ram,0x1000e7e8) */
/* WARNING: Removing unreachable block (ram,0x1000e7ec) */
/* WARNING: Removing unreachable block (ram,0x1000e830) */
/* WARNING: Removing unreachable block (ram,0x1000e83c) */
/* WARNING: Removing unreachable block (ram,0x1000e844) */
/* WARNING: Removing unreachable block (ram,0x1000e84c) */
/* WARNING: Removing unreachable block (ram,0x1000e850) */
/* WARNING: Removing unreachable block (ram,0x1000e85c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_1000e678(int param_1,int param_2,uint param_3,int param_4,uint param_5,
                        double param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  double dVar3;

  if (param_1 != 0 && param_2 != 0) {
    bVar1 = in_stack_00000004 < 0.0;
    if (1.0 < in_stack_00000004) {
      in_stack_00000004 = 1.0;
    }
    dVar3 = in_stack_00000004 * DAT_1000e870;
    if (bVar1) {
      dVar3 = 0.0;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x77 < _DAT_40010808)) &&
       (_DAT_40010874 != (code *)0x0)) {
      uVar2 = VectorFloatToUnsigned(dVar3,3);
      (*_DAT_40010874)(uVar2,(int)(pf_double_bits(param_6) >> 0x20),param_1);
    }
  }
  return (int *)0x0;
}

#undef DAT_1000e870
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010874
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010874
#undef in_stack_00000004

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010878
#define DAT_40010878 (*(uint8_t *)(0x40010878U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010878
#define _DAT_40010878 (*(code * *)(0x40010878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e878
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e878(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (_DAT_40010800 != 0x50414d57) {
    return;
  }
  if (((_DAT_40010804 == 0) || (_DAT_40010808 < 0x7c)) || (_DAT_40010878 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000e8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_40010878)(param_1);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010878
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010878

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e8c8
 */

uint * recovered_1000e8c8(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5,undefined1 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint unaff_r5;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  longlong lVar14;

  puVar10 = (uint *)0x0;
  uVar5 = param_1;
  if (0 < (int)param_1) {
    uVar5 = param_2;
    unaff_r5 = param_2;
  }
  if ((0 < (int)uVar5) && (uVar5 = recovered_100010c0(0x3fffffff,unaff_r5), param_1 <= uVar5)) {
    uVar5 = 0;
    uVar7 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uVar11 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    uVar12 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    uVar9 = 0;
    puVar10 = recovered_10007fcc(0x18);
    puVar10[5] = 0;
    *puVar10 = uVar5;
    puVar10[1] = uVar7;
    puVar10[2] = uVar11;
    puVar10[3] = uVar12;
    puVar10[1] = unaff_r5;
    uVar5 = param_1 * (uintptr_t)unaff_r5 * 4;
    puVar10[4] = 0;
    *puVar10 = param_1;
    puVar6 = recovered_10007ff8(uVar5);
    puVar10[2] = (uint)puVar6;
    if (uVar5 != 0) {
      if (0x3c < uVar5) {
        uVar11 = (uVar5 - 1 >> 2) + 1;
        uVar12 = uVar11 & 0xfffffff0;
        uVar9 = uVar12 << 2;
        uVar7 = uVar12;
        puVar8 = puVar6;
        do {
          puVar1 = (undefined1 *)0x370;
          puVar2 = (undefined1 *)0x380;
          puVar3 = (undefined1 *)0x390;
          puVar4 = (undefined1 *)0x3a0;
          lVar14 = 8;
          puVar13 = puVar8;
          while( true ) {
            *puVar13 = *puVar1;
            puVar13[1] = *puVar2;
            puVar13[2] = *puVar3;
            puVar13[3] = *puVar4;
            puVar13 = puVar13 + 4;
            lVar14 = lVar14 + -1;
            if (lVar14 == 0) break;
            puVar1 = puVar1 + 1;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar13 = puVar8 + 0x20;
          uVar7 = uVar7 - 0x10;
          puVar1 = (undefined1 *)0x378;
          puVar2 = (undefined1 *)0x388;
          puVar3 = (undefined1 *)0x398;
          puVar4 = (undefined1 *)0x3a8;
          lVar14 = 8;
          while( true ) {
            *puVar13 = *puVar1;
            puVar13[1] = *puVar2;
            puVar13[2] = *puVar3;
            puVar13[3] = *puVar4;
            puVar13 = puVar13 + 4;
            lVar14 = lVar14 + -1;
            if (lVar14 == 0) break;
            puVar1 = puVar1 + 1;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar8 = puVar8 + 0x40;
        } while (uVar7 != 0);
        if (uVar11 == uVar12) {
          return puVar10;
        }
      }
      do {
        puVar8 = puVar6 + uVar9;
        *puVar8 = param_3;
        uVar9 = uVar9 + 4;
        puVar8[3] = param_6;
        puVar8[2] = param_5;
        puVar8[1] = param_4;
      } while (uVar9 < uVar5);
    }
  }
  return puVar10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e9f8
 */

void recovered_1000e9f8(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;

  if (param_1 != (uint *)0x0) {
    if ((int)(param_3 | param_2) < 0) {
      return;
    }
    if (param_1[2] != 0) {
      uVar4 = *param_1;
      bVar6 = SBORROW4(uVar4,param_2);
      iVar1 = uVar4 - param_2;
      bVar5 = uVar4 == param_2;
      if ((int)param_2 < (int)uVar4) {
        uVar2 = param_1[1];
        bVar6 = SBORROW4(uVar2,param_3);
        iVar1 = uVar2 - param_3;
        bVar5 = uVar2 == param_3;
      }
      if (!bVar5 && iVar1 < 0 == bVar6) {
        puVar3 = (undefined1 *)(param_1[2] + (uVar4 * param_3 + param_2) * 4);
        *puVar3 = param_4;
        puVar3[3] = param_7;
        puVar3[2] = param_6;
        puVar3[1] = param_5;
        return;
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea5c
 */

void recovered_1000ea5c(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 8) != (void *)0x0) {
    recovered_100080ec(*(void **)((int)param_1 + 8));
  }
  if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
    recovered_100080ec(*(void **)((int)param_1 + 0x14));
  }
  recovered_10008024(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea9c
 */

void recovered_1000ea9c(uint *param_1,int *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int *unaff_r9;
  byte *pbVar13;
  uint uVar14;

  if (param_1 != (uint *)0x0) {
    unaff_r9 = param_2;
  }
  if (param_1 != (uint *)0x0 && param_2 != (int *)0x0) {
    iVar6 = 0;
    if (param_1[2] != 0) {
      iVar6 = unaff_r9[2];
    }
    if (param_1[2] != 0 && iVar6 != 0) {
      iVar6 = unaff_r9[1];
      if (iVar6 < 1) {
        return;
      }
      uVar14 = 0;
      do {
        uVar9 = uVar14 + param_4;
        iVar7 = ((int)param_4 >> 0x1f) + (uint)CARRY4(uVar14,param_4);
        if (((-1 < iVar7) &&
            (uVar10 = param_1[1], iVar3 = (int)uVar10 >> 0x1f,
            (int)(iVar7 - (iVar3 + (uint)(uVar9 < uVar10))) < 0 !=
            (SBORROW4(iVar7,iVar3) != SBORROW4(iVar7 - iVar3,(uint)(uVar9 < uVar10))))) &&
           (iVar7 = *unaff_r9, 0 < iVar7)) {
          uVar10 = 0;
          do {
            uVar8 = uVar10 + param_3;
            iVar6 = ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar10,param_3);
            if (-1 < iVar6) {
              uVar11 = *param_1;
              iVar3 = (int)uVar11 >> 0x1f;
              if ((int)(iVar6 - (iVar3 + (uint)(uVar8 < uVar11))) < 0 !=
                  (SBORROW4(iVar6,iVar3) != SBORROW4(iVar6 - iVar3,(uint)(uVar8 < uVar11)))) {
                pbVar13 = (byte *)(unaff_r9[2] + (uVar14 * iVar7 + uVar10) * 4);
                bVar4 = pbVar13[3];
                pbVar12 = (byte *)(param_1[2] + (uVar11 * uVar9 + uVar8) * 4);
                uVar8 = (int)(short)(bVar4 ^ 0xff) * (int)(short)(ushort)pbVar12[3] + 0x7fU & 0xffff
                ;
                uVar11 = (uint)bVar4 + uVar8 / 0xff;
                if (uVar11 != 0) {
                  bVar5 = pbVar12[1];
                  uVar1 = (ushort)bVar4;
                  bVar4 = pbVar12[2];
                  sVar2 = (short)(uVar8 / 0xff);
                  uVar8 = recovered_100010c0((int)(short)(ushort)*pbVar12 * (int)sVar2 +
                                             (int)(short)(ushort)*pbVar13 * (int)(short)uVar1 +
                                             (uVar11 >> 1),uVar11);
                  *pbVar12 = (byte)uVar8;
                  uVar8 = recovered_100010c0((int)(short)(ushort)bVar5 * (int)sVar2 +
                                             (int)(short)(ushort)pbVar13[1] * (int)(short)uVar1 +
                                             (uVar11 >> 1),uVar11);
                  pbVar12[1] = (byte)uVar8;
                  bVar5 = pbVar13[2];
                  pbVar12[3] = (byte)uVar11;
                  uVar8 = recovered_100010c0((int)(short)(ushort)bVar4 * (int)sVar2 +
                                             (int)(short)(ushort)bVar5 * (int)(short)uVar1 +
                                             (uVar11 >> 1),uVar11);
                  pbVar12[2] = (byte)uVar8;
                  iVar7 = *unaff_r9;
                }
              }
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar7);
          iVar6 = unaff_r9[1];
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar6);
      return;
    }
  }
  return;
}


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
#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define iStack_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec5c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * recovered_1000ec5c(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                         uint param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  void *dst;

  iStack_34 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_30 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_2c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  if (param_1 != 0) {
    uVar6 = 0xff;
    if (param_4 < 0xff) {
      uVar6 = param_4;
    }
    uVar5 = 0xff;
    if (param_3 < 0xff) {
      uVar5 = param_3;
    }
    uVar5 = uVar5 << 0x18;
    if ((int)param_3 < 0) {
      uVar5 = 0;
    }
    if (-1 < (int)param_4) {
      uVar5 = uVar5 | uVar6 << 0x10;
    }
    uVar5 = uVar5 | param_6;
    uVar6 = 0xff;
    if (param_5 < 0xff) {
      uVar6 = param_5;
    }
    if (-1 < (int)param_5) {
      uVar5 = uVar5 | uVar6 << 8;
    }
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17b < _DAT_40010808)) &&
       ((_DAT_40010978 != (code *)0x0 &&
        (iVar3 = (*_DAT_40010978)(param_1,0xffffffff,param_2,uVar5,&local_38), iVar2 = local_38,
        iVar3 != 0)))) {
      if (local_38 == 0) {
        return (uint *)0x0;
      }
      if (iStack_34 != 0) {
        return (uint *)0x0;
      }
      uVar6 = local_2c;
      uVar5 = 0;
      if (0 < (int)local_2c) {
        uVar6 = local_28;
        uVar5 = local_28;
      }
      if (0 < (int)uVar6) {
        if ((-(local_2c >> 0x1e) < (uint)(local_2c << 2 <= local_24)) &&
           (lVar1 = (ulonglong)(uVar5 - 1) * (ulonglong)local_24 +
                    CONCAT44(local_2c >> 0x1e,local_2c << 2),
           (uint)-(int)((ulonglong)lVar1 >> 0x20) < (uint)((uint)lVar1 <= local_30))) {
          puVar4 = recovered_1000e8c8(local_2c,uVar5,0,0,0,0);
          uVar6 = 0;
          if (puVar4 != (uint *)0x0) {
            uVar6 = local_28;
          }
          if (puVar4 != (uint *)0x0 && uVar6 != 0) {
            uVar5 = 0;
            dst = (void *)puVar4[2];
            uVar6 = local_2c * 4;
            do {
              recovered_10002c60(dst,(void *)(local_24 * uVar5 + iVar2),uVar6);
              uVar5 = uVar5 + 1;
              dst = (void *)((int)dst + uVar6);
            } while (uVar5 < local_28);
          }
          recovered_1000e580();
          return puVar4;
        }
      }
      if (_DAT_40010800 != 0x50414d57) {
        return (uint *)0x0;
      }
      if (_DAT_40010804 == 0) {
        return (uint *)0x0;
      }
      if (_DAT_40010808 < 0x54) {
        return (uint *)0x0;
      }
      if (_DAT_40010850 == (code *)0x0) {
        return (uint *)0x0;
      }
      (*_DAT_40010850)(local_38);
    }
  }
  return (uint *)0x0;
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
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef iStack_34

/* Native system-font selection through the WinterScript variable service.
 * Pooka's Free Software License. */
void *recovered_1000ee80(float size){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 unsigned char value[48]={0};char path[1024];const char *selected="\\Fonts\\EBGaramond08-Regular.ttf";
 if(api[0]==0x50414d57 && api[1] && api[2]>0x207 && api[0x204/4]){
  int found=((int (*)(const char *,void *))(uintptr_t)api[0x204/4])("TundraFont",value);
  uint32_t kind=*(uint32_t *)value;int32_t number=*(int32_t *)(value+4);
  if(found && kind==3 && *(const char **)(value+(sizeof(uintptr_t)==8?16:12)))selected=*(const char **)(value+(sizeof(uintptr_t)==8?16:12));
  else if(found && kind==1){
   unsigned magnitude=number<0?0U-(unsigned)number:(unsigned)number;char digits[12];unsigned count=0,used=0;
   do{digits[count++]=(char)('0'+magnitude%10);magnitude/=10;}while(magnitude);
   if(number<0)path[used++]='-';while(count)path[used++]=digits[--count];path[used]=0;selected=path;
  }else if(found && kind==5)selected=number?"true":"false";
 }
 if(selected!=path){unsigned n=0;while(n<1023 && selected[n]){path[n]=selected[n];n++;}path[n]=0;}
 if(!path[0] || api[0]!=0x50414d57 || !api[1] || api[2]<0x6c || !api[0x68/4])return 0;
 return ((void *(*)(const char *,float))(uintptr_t)api[0x68/4])(path,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f130
 */

undefined1 recovered_1000f130(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  uVar1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x78);
  if (uVar3 < uVar2) {
    uVar4 = uVar3 + 1;
    *(uint *)(param_1 + 0x78) = uVar4;
    bVar5 = uVar4 == uVar2;
    if (bVar5) {
      uVar2 = 0;
    }
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x6c) + uVar3);
    if (bVar5) {
      *(uint *)(param_1 + 0x78) = uVar2;
      *(uint *)(param_1 + 0x70) = uVar2;
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f174
 */

void recovered_1000f174(int param_1,undefined4 *param_2,undefined4 *param_3)

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
  if (*(char *)(param_1 + 0x4c) == '\0') {
    recovered_1000aa04(param_1);
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x38);
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x3c);
  return;
}


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
 * Address: 0x1000f1f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000f1f0(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  bool bVar3;

  bVar1 = false;
  bVar3 = false;
  if ((param_1 != 0) && (param_2 < 4)) {
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      return false;
    }
    bVar3 = bVar1;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x167 < _DAT_40010808)) &&
       (_DAT_40010964 != (code *)0x0)) {
      iVar2 = (*_DAT_40010964)(*(undefined4 *)(param_1 + 0xc));
      bVar3 = iVar2 != 0;
    }
  }
  return bVar3;
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
#undef DAT_400108b0
#define DAT_400108b0 (*(uint8_t *)(0x400108b0U))
#undef DAT_400108b4
#define DAT_400108b4 (*(uint8_t *)(0x400108b4U))
#undef DAT_40010960
#define DAT_40010960 (*(uint8_t *)(0x40010960U))
#undef DAT_40010964
#define DAT_40010964 (*(uint8_t *)(0x40010964U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_400108b0
#define _DAT_400108b0 (*(code * *)(0x400108b0U))
#undef _DAT_400108b4
#define _DAT_400108b4 (*(code * *)(0x400108b4U))
#undef _DAT_40010960
#define _DAT_40010960 (*(code * *)(0x40010960U))
#undef _DAT_40010964
#define _DAT_40010964 (*(code * *)(0x40010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f284
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000f284(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return false;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return false;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return false;
  }
  if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0xb8)) ||
     ((_DAT_400108b4 == (code *)0x0 ||
      (iVar1 = (*_DAT_400108b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar1 == 0)))) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    return false;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
  if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
  if (_DAT_40010800 != 0x50414d57) {
    return false;
  }
  if (_DAT_40010804 == 0) {
    return false;
  }
  if (_DAT_40010808 < 0x168) {
    return false;
  }
  if (_DAT_40010964 == (code *)0x0) {
    return false;
  }
  iVar1 = (*_DAT_40010964)(*(undefined4 *)(param_1 + 0xc),1,0);
  if (((iVar1 != 0) && (_DAT_40010800 == 0x50414d57)) &&
     ((_DAT_40010804 != 0 && ((0xb < _DAT_40010808 && (0x163 < _DAT_40010808)))))) {
    if (_DAT_40010960 == (code *)0x0) {
      return false;
    }
    iVar1 = (*_DAT_40010960)(*(undefined4 *)(param_1 + 0xc),0xff,0);
    if (iVar1 != 0) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb < _DAT_40010808)) &&
         (0xb3 < _DAT_40010808)) {
        if (_DAT_400108b0 == (code *)0x0) {
          return false;
        }
        iVar1 = (*_DAT_400108b0)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xb0),
                                 *(undefined4 *)(param_1 + 0xb4),0x100,0x100);
        return iVar1 != 0;
      }
    }
  }
  return false;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b0
#undef DAT_400108b4
#undef DAT_40010960
#undef DAT_40010964
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b0
#undef _DAT_400108b4
#undef _DAT_40010960
#undef _DAT_40010964

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f484
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte recovered_1000f484(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;

  bVar3 = 0;
  if ((param_1 == 0) || (2 < param_2)) goto LAB_1000f554;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(param_1 + 0x24) != '\0') goto LAB_1000f53c;
LAB_1000f4b8:
    if (*(char *)(param_1 + 0x4c) == '\0') {
      recovered_1000aa04(param_1);
      *(undefined1 *)(param_1 + 0x4c) = 1;
    }
    pbVar1 = (byte *)(param_1 + param_2 + 0x49);
    bVar3 = *pbVar1;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0xb7 < _DAT_40010808)) &&
         ((_DAT_400108b4 != (code *)0x0 &&
          (iVar2 = (*_DAT_400108b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar2 != 0)))) {
        uVar4 = *(undefined4 *)(param_1 + 0xb0);
        bVar5 = (*(uint *)(param_1 + 0xac) & 1) != 0;
        *(undefined4 *)(param_1 + 0x1c) = uVar4;
        if (bVar5) {
          uVar4 = 1;
        }
        if (bVar5) {
          *(char *)(param_1 + 0x24) = (char)uVar4;
        }
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
        if ((*(uint *)(param_1 + 0xac) & 6) == 2) goto LAB_1000f4b8;
      }
      else {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
LAB_1000f53c:
    bVar3 = 0;
    pbVar1 = (byte *)(param_1 + param_2 + 0x49);
  }
  *pbVar1 = 0;
LAB_1000f554:
  return bVar3 & 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400108b4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_400108b4

#define local_2c (*(void * *)(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f5c4
 */

void recovered_1000f5c4(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *pointer;
  void *pointer_00;
  uint extraout_r1 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  puVar10 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar10 != (undefined1 *)0x0) {
    uVar11 = param_2 - (int)puVar10;
    uVar4 = 0;
    do {
      if (uVar11 == uVar4) {
        uVar4 = param_1[1] - uVar11;
        local_24 = 0;
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_1000f5c4((int *)&local_2c,(int)(puVar10 + uVar11),uVar4,uVar11);
        pointer_00 = (void *)*param_1;
        iVar5 = param_1[1];
        iVar6 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pointer_00;
        local_28 = iVar5;
        local_24 = iVar6;
        recovered_10008024(pointer_00);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar10 = recovered_10007fcc(1);
      *param_1 = (int)puVar10;
      *puVar10 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000f6b0;
  puVar2 = recovered_10007fcc(uVar1 + 1);
  uVar11 = param_1[1];
  pointer = (undefined8 *)*param_1;
  uVar4 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar11 != 0) {
    bVar12 = uVar11 == 0x10;
    uVar3 = extraout_r1;
    if (0xf < uVar11) {
      uVar3 = (int)puVar2 - (int)pointer;
      bVar12 = uVar3 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar3) && !bVar12) {
      uVar4 = uVar11 & 0xfffffff0;
      uVar3 = uVar4;
      puVar7 = puVar2;
      puVar9 = pointer;
      do {
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar7 = uVar13;
        puVar7[1] = uVar14;
        puVar7 = puVar7 + 2;
      } while (uVar3 != 0);
      if (uVar11 == uVar4) goto LAB_1000f694;
    }
    iVar5 = uVar11 - uVar4;
    puVar10 = (undefined1 *)((int)puVar2 + uVar4);
    puVar8 = (undefined1 *)((int)pointer + uVar4);
    do {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar8;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_1000f694:
  *(undefined1 *)((int)puVar2 + uVar11) = 0;
  recovered_10008024(pointer);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000f6b0:
  uVar4 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f788
 */

undefined8
recovered_1000f788(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;

  uVar7 = 0;
  if (((1 < param_3) && (1 < param_5)) && (1 < param_6)) {
    uVar8 = 0;
    if (1 < (int)param_3) {
      if (param_2 == 0) {
        uVar8 = param_3 - 1;
        if (param_1 <= param_3 - 1) {
          uVar8 = param_1;
        }
        if ((int)param_1 < 0) {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = param_1 & ~((int)param_1 >> 0x1f);
        if (param_2 <= uVar8) {
          uVar8 = param_2;
        }
        lVar2 = (ulonglong)uVar8 * (ulonglong)(param_3 - 1);
        uVar9 = recovered_1000281c((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),param_2,0);
        uVar8 = (uint)uVar9;
      }
    }
    uVar3 = uVar8 - param_4;
    uVar5 = param_5 - 1;
    iVar4 = ((int)uVar8 >> 0x1f) - (uint)(uVar8 < param_4);
    bVar1 = (int)-(iVar4 + (uint)(uVar5 < uVar3)) < 0 !=
            (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(uVar5 < uVar3)));
    if (bVar1) {
      uVar3 = uVar5;
    }
    if (iVar4 < 0) {
      uVar3 = 0;
    }
    lVar2 = (ulonglong)(param_6 - 1U) * (ulonglong)uVar3;
    iVar6 = iVar4;
    if (bVar1) {
      iVar6 = 0;
    }
    if (iVar4 < 0) {
      iVar6 = 0;
    }
    uVar9 = recovered_1000281c((uint)lVar2,iVar6 * (param_6 - 1U) + (int)((ulonglong)lVar2 >> 0x20),
                               uVar5,0);
    param_2 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar7 = (undefined4)uVar9;
  }
  return CONCAT44(param_2,uVar7);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f880
 */

int * recovered_1000f880(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar2 = iVar1 * 0xc;
    do {
      iVar2 = iVar2 + -0xc;
      recovered_10008024(*(void **)(*param_1 + iVar2));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10008024((void *)*param_1);
  return param_1;
}


#undef DAT_1000fe1f
#define DAT_1000fe1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f8d4
 */

int recovered_1000f8d4(int *param_1,int *param_2)

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
      pvVar2 = recovered_10007fcc(uVar1 * 0xc);
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
          recovered_10008024((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar9 = iVar9 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10008024((void *)*param_1);
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
  puVar8 = &DAT_1000fe1f;
  if (puVar10 != (undefined1 *)0x0) {
    puVar8 = puVar10;
  }
  piVar4[2] = 0;
  recovered_1000f5c4(piVar4,(int)puVar8,uVar5,(int)puVar8);
  iVar9 = param_1[1];
  param_1[1] = iVar9 + 1;
  return *param_1 + iVar9 * 0xc;
}

#undef DAT_1000fe1f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9fc
 */

int * recovered_1000f9fc(int *param_1,int param_2,uint param_3,int in_r3)

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
    return param_1;
  }
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != (undefined8 *)0x0) {
    uVar10 = param_2 - (int)puVar12;
    uVar11 = param_1[1];
    uVar6 = 0;
LAB_1000fa38:
    if (uVar10 != uVar6) goto code_r0x1000fa40;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_1000fc04;
    puVar12 = recovered_10007fcc(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_1000fbe4;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_1000fbc8;
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
LAB_1000fbc8:
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
LAB_1000fbe4:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    recovered_10008024(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_1000fc04:
    if (param_3 == 0) goto LAB_1000fc30;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_1000fc2c;
  }
  uVar11 = param_1[1];
LAB_1000fa54:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_1000fb10;
  puVar12 = recovered_10007fcc(uVar11 + 1);
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
      if (uVar6 == uVar10) goto LAB_1000faf0;
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
LAB_1000faf0:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  recovered_10008024(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_1000fb10:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_1000fc2c:
  puVar12 = (undefined8 *)*param_1;
LAB_1000fc30:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return param_1;
code_r0x1000fa40:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_1000fa54;
  goto LAB_1000fa38;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fc54
 */

int recovered_1000fc54(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
  if (param_3 == param_4) goto LAB_1000fd98;
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
    puVar3 = recovered_10007fcc(size);
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
        if (uVar8 == uVar9) goto LAB_1000fd2c;
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
LAB_1000fd2c:
    recovered_10008024(pointer);
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
LAB_1000fd98:
  iVar11 = iVar1 + uVar10;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  return iVar11;
}


#undef DAT_100102d0
#define DAT_100102d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_100102d4
#define DAT_100102d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_100102d8
#define DAT_100102d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4218U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x421cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fdb8
 */

void recovered_1000fdb8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100102d8 = 0;
  DAT_100102d4 = 0;
  DAT_100102d0 = 0;
  recovered_10008344();
  return;
}

#undef DAT_100102d0
#undef DAT_100102d4
#undef DAT_100102d8
#undef DAT_10014008
#undef DAT_1001400c
