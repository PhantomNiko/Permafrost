/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f2bc
#define DAT_1000f2bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdfbU)))
#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c40
 */

/* WARNING: Removing unreachable block (ram,0x10000c7c) */

void recovered_10000c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000f2bc = 0;
    recovered_10000ca0();
    DAT_1000f2c4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f2bc
#undef DAT_1000f2c4

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000f2bc
#define DAT_1000f2bc (*(char *)(((uintptr_t)pf_module_state + 0xdfbU)))
#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(int *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c8
#define DAT_1000f2c8 (*(int *)(((uintptr_t)pf_module_state + 0xe07U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000ca0(void)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;

  local_9c[0] = 0;
  if (DAT_1000f2bc != '\0') {
    return;
  }
  DAT_1000f2c0 = 0;
  DAT_1000f2c8 = 0;
  local_9c[1] = 0x10;
  if (_DAT_0028008c < 0x10) {
    local_9c[1] = _DAT_0028008c;
  }
  if (_DAT_0028008c != 0) {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(uint *)(&DAT_00280090 + uVar4 * 8);
      uVar1 = *(uint *)(&DAT_00280094 + uVar4 * 8);
      bVar10 = CARRY4(uVar1,uVar5);
      uVar6 = uVar1 + uVar5;
      if ((uVar6 < 0x300001) <= bVar10 && uVar1 != 0) {
        if (uVar5 < 0x300001) {
          uVar5 = 0x300000;
        }
        if (((uVar7 < 0x10) && (!bVar10)) && (uVar5 <= uVar6)) {
          uVar2 = 0;
          uVar1 = uVar7;
          if (uVar7 != 0) {
            do {
              uVar2 = uVar1;
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_10000d0b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_10000d0b:
          local_9c[uVar2 * 2 + 2] = uVar5;
          local_9c[uVar2 * 2 + 3] = uVar6 - uVar5;
          uVar7 = uVar7 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_9c[1]);
    if (uVar7 != 0) {
      iVar9 = 1;
      if (uVar7 != 1) {
        iVar8 = uVar7 - 1;
        puVar3 = local_9c + 4;
        iVar9 = 1;
        do {
          uVar4 = local_9c[iVar9 * 2 + 1] + local_9c[iVar9 * 2];
          if (uVar4 < *puVar3) {
            uVar4 = *puVar3;
            local_9c[iVar9 * 2 + 3] = puVar3[1];
            local_9c[iVar9 * 2 + 2] = uVar4;
            iVar9 = iVar9 + 1;
          }
          else {
            uVar7 = *puVar3 + puVar3[1];
            if (uVar4 < uVar7) {
              local_9c[iVar9 * 2 + 1] = uVar7 - local_9c[iVar9 * 2];
            }
          }
          puVar3 = puVar3 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if (iVar9 == 0) goto LAB_10000e60;
      }
      puVar3 = local_9c + 3;
      do {
        recovered_10005000((undefined *)puVar3[-1],*puVar3,(int *)local_9c);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000f2c0 != 0) goto LAB_10000e9b;
    }
  }
LAB_10000e60:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  uVar7 = 0x3d00000;
  if (0x300020 < uVar4) {
    uVar7 = uVar4 - 0x300000;
  }
  recovered_10005000((undefined *)0x300000,uVar7,(int *)local_9c);
LAB_10000e9b:
  if (DAT_1000f2c8 == 0) {
    DAT_1000f2c8 = DAT_1000f2c0;
  }
  DAT_1000f2bc = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000f2bc
#undef DAT_1000f2c0
#undef DAT_1000f2c8
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_9c

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec0
 */

/* WARNING: Removing unreachable block (ram,0x10000f0c) */

void recovered_10000ec0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000f30(param_1,param_2,param_3);
    DAT_1000f2c4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f2c4

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c8
#define DAT_1000f2c8 (*(int * *)(((uintptr_t)pf_module_state + 0xe07U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

bool recovered_10000f30(int in_ECX,int in_EDX,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;

  iVar10 = 0;
  bVar11 = false;
  if (param_3 != 0 && (in_EDX != 0 && in_ECX != 0)) {
    recovered_10000ca0();
    local_18 = DAT_1000f2c0;
    do {
      piVar5 = *(int **)(in_ECX + iVar10 * 4);
      uVar2 = *(uint *)(in_EDX + iVar10 * 4);
      piVar6 = (int *)((int)piVar5 + uVar2);
      if (CARRY4((uint)piVar5,uVar2)) {
        piVar6 = (int *)0xffffffff;
      }
      if (~(uint)piVar5 < uVar2) {
        return false;
      }
      if (piVar6 <= piVar5) {
        return false;
      }
      if (piVar5 < (int *)0x10000000 && (int *)0x8000000 < piVar6) {
        if (piVar5 < (int *)0x8000000) {
          uVar2 = 0x8000000 - (int)piVar5;
          if (~(uint)piVar5 < uVar2) {
            return false;
          }
          uVar7 = ((uint)((int)piVar5 + 0xf) & 0xffffff0) - (int)piVar5;
          uVar3 = uVar2 - uVar7;
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10001030;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10001030:
          bVar11 = false;
        }
        if ((piVar6 < &DAT_10000001 || 0xffffffde < ((uint)piVar6 & 0xfffffff0) + 0xefffffdf) &&
           (!bVar11)) {
          return false;
        }
      }
      else {
        if ((int *)0xfffffff0 < piVar5) {
          return false;
        }
        uVar3 = ((uint)((int)piVar5 + 0xf) & 0xfffffff0) - (int)piVar5;
        uVar7 = uVar2 - uVar3;
        if (uVar2 < uVar3 || uVar7 == 0) {
          return false;
        }
        if ((uVar7 & 0xfffffff0) < 0x21) {
          return false;
        }
      }
      piVar1 = DAT_1000f2c0;
      if (iVar10 != 0) {
        iVar4 = 0;
        do {
          piVar9 = *(int **)(in_ECX + iVar4 * 4);
          uVar2 = *(uint *)(in_EDX + iVar4 * 4);
          piVar8 = (int *)(uVar2 + (int)piVar9);
          if (CARRY4(uVar2,(uint)piVar9)) {
            piVar8 = (int *)0xffffffff;
          }
          if ((piVar9 < piVar6) && (piVar5 < piVar8)) {
            return false;
          }
          iVar4 = iVar4 + 1;
        } while (iVar10 != iVar4);
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        piVar9 = (int *)(*piVar1 + 0x10U + (int)piVar1);
        if (CARRY4(*piVar1 + 0x10U,(uint)piVar1)) {
          piVar9 = (int *)0xffffffff;
        }
        if ((piVar1 < piVar6) && (piVar5 < piVar9)) {
          return false;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_3);
    piVar5 = (int *)&DAT_1000f2c0;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10005000(*(undefined **)(in_ECX + iVar10 * 4),*(uint *)(in_EDX + iVar10 * 4),
                         &local_1c);
      iVar10 = iVar10 + 1;
    } while (param_3 != iVar10);
    if (DAT_1000f2c8 == (int *)0x0) {
      DAT_1000f2c8 = DAT_1000f2c0;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_1000f2c0
#undef DAT_1000f2c8
#undef local_1c
#undef local_18

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
#define local_24 (*(undefined1 (*)[36])(pf_stack_frame + 28))
#define local_20 (*(undefined1 (*)[32])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001170
 */

/* WARNING: Removing unreachable block (ram,0x100011bc) */

void recovered_10001170(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000f30((int)local_20,(int)local_24,1);
    DAT_1000f2c4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f2c4
#undef local_24
#undef local_20

#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(int * *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

/* WARNING: Removing unreachable block (ram,0x1000122c) */

int recovered_100011f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  iVar1 = 0;
  for (piVar2 = DAT_1000f2c0; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_1000f2c4 = 0;
  return iVar1;
}

#undef DAT_1000f2c0
#undef DAT_1000f2c4

#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(int *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001270
 */

/* WARNING: Removing unreachable block (ram,0x100012ac) */

void recovered_10001270(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  for (iVar1 = DAT_1000f2c0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000f2c4 = 0;
  return;
}

#undef DAT_1000f2c0
#undef DAT_1000f2c4

#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(int * *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f0
 */

/* WARNING: Removing unreachable block (ram,0x1000132c) */

int recovered_100012f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  iVar2 = 0;
  for (piVar1 = DAT_1000f2c0; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_1000f2c4 = 0;
  return iVar2;
}

#undef DAT_1000f2c0
#undef DAT_1000f2c4

#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(int *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001360
 */

/* WARNING: Removing unreachable block (ram,0x1000139c) */

void recovered_10001360(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000ca0();
  for (iVar1 = DAT_1000f2c0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000f2c4 = 0;
  return;
}

#undef DAT_1000f2c0
#undef DAT_1000f2c4

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

/* WARNING: Removing unreachable block (ram,0x1000142c) */

void recovered_100013e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001450(in_stack_00000004,(uint *)0x0,(uint *)0xffffffff);
    DAT_1000f2c4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f2c4
#undef in_stack_00000004

#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(uint * *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c8
#define DAT_1000f2c8 (*(uint * *)(((uintptr_t)pf_module_state + 0xe07U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001450
 */

uint * recovered_10001450(int in_ECX,uint *in_EDX,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *in_ECX_00;
  uint *in_EDX_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (0xf < in_ECX + 0xfU) {
    recovered_10000ca0();
    puVar3 = DAT_1000f2c0;
    puVar4 = DAT_1000f2c8;
    if (DAT_1000f2c8 == (uint *)0x0) {
      puVar4 = DAT_1000f2c0;
    }
    if (puVar4 != (uint *)0x0) {
      uVar7 = in_ECX + 0xfU & 0xfffffff0;
      puVar5 = (uint *)((int)in_EDX + 0xfU & 0xfffffff0);
      in_ECX_00 = puVar4;
      do {
        if (((char)in_ECX_00[3] == '\x01') && (uVar8 = *in_ECX_00, uVar7 <= uVar8)) {
          puVar1 = in_ECX_00 + 4;
          uVar6 = 0;
          in_EDX_00 = puVar1;
          if (puVar1 < in_EDX) {
            if ((in_EDX < (uint *)0xfffffff1) && (puVar1 < (uint *)0xffffffe0)) {
              in_EDX_00 = puVar5;
              if (puVar5 <= in_ECX_00 + 0xc) {
                in_EDX_00 = in_ECX_00 + 0xc;
              }
              uVar6 = (int)in_EDX_00 - (int)puVar1;
              if (uVar6 < uVar8) goto LAB_10001532;
            }
          }
          else {
LAB_10001532:
            if ((uVar7 - 1 <= (uint)((int)param_3 - (int)in_EDX_00) && in_EDX_00 <= param_3) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10001614:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_1000f2c8 = (uint *)((int)in_ECX_00 + uVar7 + 0x10);
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = in_ECX_00[1];
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)in_ECX_00 + uVar7 + 0x18) = in_ECX_00;
                      *(undefined1 *)((int)in_ECX_00 + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_1000f2c8;
                      }
                      *in_ECX_00 = uVar7;
                      in_ECX_00[1] = (uint)DAT_1000f2c8;
                    }
                    else {
                      DAT_1000f2c8 = (uint *)in_ECX_00[1];
                    }
                    *(undefined1 *)(in_ECX_00 + 3) = 0;
                    if (DAT_1000f2c8 == (uint *)0x0) {
                      DAT_1000f2c8 = DAT_1000f2c0;
                    }
                    return in_ECX_00 + 4;
                  }
                  if ((uVar6 - 1) + uVar7 < uVar8) {
                    uVar6 = uVar6 + uVar7;
                    bVar2 = 0xffffffdf < uVar6;
                    if (-(uint)(uVar8 < uVar6) < (uint)(uVar8 - uVar6 < 0x20)) {
                      bVar2 = 0xffffffef < uVar8;
                    }
                    if (!bVar2) {
                      in_ECX_00 = recovered_100051a0(in_ECX_00,in_EDX_00);
                      if (in_ECX_00 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *in_ECX_00;
                      goto LAB_10001614;
                    }
                  }
                }
              }
              *(undefined1 *)(in_ECX_00 + 3) = 0;
            }
          }
        }
        puVar1 = in_ECX_00 + 1;
        in_ECX_00 = puVar3;
        if ((uint *)*puVar1 != (uint *)0x0) {
          in_ECX_00 = (uint *)*puVar1;
        }
        if (in_ECX_00 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (in_ECX_00 == puVar4) {
          return (uint *)0x0;
        }
      } while( true );
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000f2c0
#undef DAT_1000f2c8

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

/* WARNING: Removing unreachable block (ram,0x100016cc) */

void recovered_10001680(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001450(param_1,(uint *)0x0,param_2);
    DAT_1000f2c4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f2c4

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

/* WARNING: Removing unreachable block (ram,0x1000173c) */

uint * recovered_100016f0(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001450(param_1,param_2,param_3);
  }
  DAT_1000f2c4 = 0;
  return puVar2;
}

#undef DAT_1000f2c4

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001760
 */

/* WARNING: Removing unreachable block (ram,0x100017ac) */

void recovered_10001760(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_100017d0(in_stack_00000004);
    DAT_1000f2c4 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000f2c4
#undef in_stack_00000004

#undef DAT_1000f2c8
#define DAT_1000f2c8 (*(uint * *)(((uintptr_t)pf_module_state + 0xe07U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d0
 */

void recovered_100017d0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (in_ECX == 0) {
    return;
  }
  recovered_10000ca0();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000f2c8 == puVar3) {
        DAT_1000f2c8 = puVar2;
      }
      *(uint *)(in_ECX + -0x10) = uVar4;
      puVar3 = (uint *)puVar3[1];
      *(uint **)(in_ECX + -0xc) = puVar3;
      if ((puVar3 == (uint *)0x0) || (puVar3[2] = (uint)puVar2, (char)puVar3[3] == '\0')) break;
    }
  }
  puVar3 = *(uint **)(in_ECX + -8);
  if (puVar3 != (uint *)0x0) {
    if ((char)puVar3[3] != '\x01') {
      DAT_1000f2c8 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000f2c8 = puVar2;
      return;
    }
    puVar2 = (uint *)puVar3[1];
    if ((puVar2 != (uint *)0x0) && ((char)puVar2[3] == '\x01')) {
      do {
        if ((0xffffffef < uVar4) ||
           (((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2 || (-uVar4 - 0x11 < *puVar2)))) break;
        uVar4 = uVar4 + 0x10 + *puVar2;
        *puVar3 = uVar4;
        puVar1 = (uint *)puVar2[1];
        puVar3[1] = (uint)puVar1;
        if (puVar1 == (uint *)0x0) break;
        if (DAT_1000f2c8 == puVar2) {
          DAT_1000f2c8 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000f2c8 = puVar2;
  return;
}

#undef DAT_1000f2c8

#undef DAT_1000f2c4
#define DAT_1000f2c4 (*(int *)(((uintptr_t)pf_module_state + 0xe03U)))
#undef DAT_1000f2c8
#define DAT_1000f2c8 (*(uint * *)(((uintptr_t)pf_module_state + 0xe07U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018f0
 */

/* WARNING: Removing unreachable block (ram,0x1000193c) */

uint * recovered_100018f0(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint in_ECX;
  uint *puVar9;
  bool bVar10;

  iVar1 = DAT_1000f2c4;
  { __typeof__(DAT_1000f2c4) pf_atomic_old = __atomic_exchange_n(&(DAT_1000f2c4),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (uint *)0x0) {
    puVar5 = recovered_10001450(param_2,(uint *)0x0,(uint *)0xffffffff);
    DAT_1000f2c4 = 0;
    return puVar5;
  }
  if (param_2 == 0) {
    recovered_100017d0((int)param_1);
    DAT_1000f2c4 = 0;
    return (uint *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_1000f2c4 = 0;
    return (uint *)0x0;
  }
  recovered_10000ca0();
  in_ECX = param_2 + 0xf & 0xfffffff0;
  puVar5 = param_1 + -4;
  uVar7 = param_1[-4];
  if (in_ECX <= uVar7) {
    if (uVar7 <= in_ECX - 1) {
      DAT_1000f2c4 = 0;
      return (uint *)0x0;
    }
    uVar2 = uVar7 - in_ECX;
    bVar10 = 0xffffffdf < in_ECX;
    if (-(uint)(uVar7 < in_ECX) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar7;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_1000f2c4 = 0;
        return param_1;
      }
      DAT_1000f2c8 = (uint *)((int)param_1 + in_ECX);
      *(uint *)((int)param_1 + in_ECX) = uVar2 - 0x10;
      uVar7 = param_1[-3];
      *(uint *)((int)param_1 + in_ECX + 4) = uVar7;
      *(uint **)((int)param_1 + in_ECX + 8) = puVar5;
      *(undefined1 *)((int)param_1 + in_ECX + 0xc) = 1;
      if (uVar7 != 0) {
        *(uint **)(uVar7 + 8) = DAT_1000f2c8;
      }
      param_1[-4] = in_ECX;
      param_1[-3] = (uint)DAT_1000f2c8;
      DAT_1000f2c4 = 0;
      return param_1;
    }
    DAT_1000f2c4 = 0;
    return (uint *)0x0;
  }
  puVar3 = puVar5;
  uVar2 = uVar7;
  uVar6 = uVar7;
  do {
    puVar9 = (uint *)puVar3[1];
    if ((((puVar9 == (uint *)0x0) || ((char)puVar9[3] != '\x01')) || (0xffffffef < uVar2)) ||
       (((uint *)((int)puVar3 + uVar6 + 0x10) != puVar9 || (uVar6 = *puVar9, -uVar2 - 0x11 < uVar6))
       )) break;
    uVar2 = uVar2 + 0x10 + uVar6;
    puVar3 = puVar9;
  } while (uVar2 < in_ECX);
  if (in_ECX - 1 < uVar2) {
    bVar10 = 0xffffffdf < in_ECX;
    if (-(uint)(uVar2 < in_ECX) < (uint)(uVar2 - in_ECX < 0x20)) {
      bVar10 = 0xffffffef < uVar2;
    }
    if (!bVar10) {
      local_20 = DAT_1000f2c8;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar7 ||
            (((uint *)(uVar7 + (int)param_1) != puVar3 || (-uVar7 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar5;
          DAT_1000f2c8 = puVar5;
        }
        uVar7 = uVar7 + 0x10 + *puVar3;
        param_1[-4] = uVar7;
        puVar3 = (uint *)puVar3[1];
        param_1[-3] = (uint)puVar3;
        if (puVar3 != (uint *)0x0) {
          puVar3[2] = (uint)puVar5;
        }
      } while (uVar7 < in_ECX);
      if (uVar7 < in_ECX) {
        DAT_1000f2c4 = 0;
        return (uint *)0x0;
      }
      uVar4 = recovered_10005200(puVar5,in_ECX);
      if ((char)uVar4 != '\0') {
        DAT_1000f2c8 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000f2c4 = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10001450(in_ECX,(uint *)0x0,(uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_1000f2c4 = 0;
    return (uint *)0x0;
  }
  if (*puVar5 < in_ECX) {
    in_ECX = *puVar5;
  }
  puVar5 = param_1;
  puVar9 = puVar3;
  if (in_ECX < 8) {
LAB_10001b65:
    if (in_ECX == 0) goto LAB_10001b7c;
  }
  else if ((((uint)puVar3 ^ (uint)param_1) & 3) == 0) {
    if (((uint)puVar3 & 3) != 0) {
      puVar8 = puVar3;
      do {
        puVar8 = (uint *)((int)puVar8 + 1);
        uVar7 = *puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        *(char *)puVar9 = (char)uVar7;
        puVar9 = (uint *)((int)puVar9 + 1);
        bVar10 = in_ECX == 1;
        in_ECX = in_ECX - 1;
        if (bVar10) break;
      } while (((uint)puVar8 & 3) != 0);
    }
    for (; 0xf < in_ECX; in_ECX = in_ECX - 0x10) {
      *puVar9 = *puVar5;
      puVar9[1] = puVar5[1];
      puVar9[2] = puVar5[2];
      puVar9[3] = puVar5[3];
      puVar5 = puVar5 + 4;
      puVar9 = puVar9 + 4;
    }
    while( true ) {
      if (in_ECX < 4) break;
      uVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar9 = uVar7;
      puVar9 = puVar9 + 1;
      in_ECX = in_ECX - 4;
    }
    goto LAB_10001b65;
  }
  uVar7 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar7) = *(undefined1 *)((int)puVar5 + uVar7);
    uVar7 = uVar7 + 1;
  } while (in_ECX != uVar7);
LAB_10001b7c:
  recovered_100017d0((int)param_1);
  DAT_1000f2c4 = 0;
  return puVar3;
}

#undef DAT_1000f2c4
#undef DAT_1000f2c8
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c90
 */

undefined8 recovered_10001c90(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10001ccb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10001ccb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10001ccb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce0
 */

undefined8 recovered_10001ce0(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d30
 */

undefined8 recovered_10001d30(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d70
 */

undefined8 recovered_10001d70(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  if (param_3 == 0 && param_4 == 0) {
    uVar1 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = 0x3f;
    uVar9 = 0;
    iVar10 = 0;
    uVar1 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)uVar4;
      uVar2 = 1 << (bVar3 & 0x1f);
      uVar7 = uVar2;
      if ((uVar4 & 0x20) != 0) {
        uVar7 = 0;
      }
      uVar8 = 0 << (bVar3 & 0x1f) | 1U >> 0x20 - (bVar3 & 0x1f);
      if ((uVar4 & 0x20) != 0) {
        uVar8 = uVar2;
      }
      uVar2 = param_2 >> (bVar3 & 0x1f);
      if ((uVar4 & 0x20) == 0) {
        uVar2 = param_1 >> (bVar3 & 0x1f) | param_2 << 0x20 - (bVar3 & 0x1f);
      }
      uVar11 = iVar10 << 1 | uVar9 >> 0x1f;
      uVar2 = (uVar2 & 1) + uVar9 * 2;
      local_20 = 0;
      local_24 = 0;
      uVar9 = 0;
      uVar6 = 0;
      if (param_4 <= uVar11 && (uint)(uVar2 < param_3) <= uVar11 - param_4) {
        local_24 = param_4;
        uVar9 = uVar7;
        uVar6 = param_3;
        local_20 = uVar8;
      }
      uVar1 = uVar1 | uVar9;
      uVar5 = uVar5 | local_20;
      uVar9 = uVar2 - uVar6;
      iVar10 = (uVar11 - local_24) - (uint)(uVar2 < uVar6);
      bVar12 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar12);
  }
  return CONCAT44(uVar5,uVar1);
}

#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e60
 */

undefined8 recovered_10001e60(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = 0x3f;
    iVar4 = 0;
    do {
      uVar5 = iVar4 << 1 | uVar2 >> 0x1f;
      bVar1 = (byte)uVar3 & 0x1f;
      uVar8 = param_2 >> ((byte)uVar3 & 0x1f);
      if ((uVar3 & 0x20) == 0) {
        uVar8 = param_1 >> bVar1 | param_2 << 0x20 - bVar1;
      }
      uVar8 = (uVar8 & 1) + uVar2 * 2;
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 <= uVar5 && (uint)(uVar8 < param_3) <= uVar5 - param_4) {
        uVar6 = param_4;
        uVar7 = param_3;
      }
      uVar2 = uVar8 - uVar7;
      iVar4 = (uVar5 - uVar6) - (uint)(uVar8 < uVar7);
      bVar9 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar9);
  }
  return CONCAT44(iVar4,uVar2);
}


#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed0
 */

undefined8 recovered_10001ed0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = (int)param_2 >> 0x1f;
    uVar11 = ((param_2 ^ uVar1) - uVar1) - (uint)((param_1 ^ uVar1) < uVar1);
    uVar2 = (int)param_4 >> 0x1f;
    uVar7 = (param_3 ^ uVar2) - uVar2;
    uVar2 = ((param_4 ^ uVar2) - uVar2) - (uint)((param_3 ^ uVar2) < uVar2);
    uVar6 = 0x3f;
    uVar8 = 0;
    iVar14 = 0;
    uVar12 = 0;
    uVar3 = 0;
    do {
      bVar5 = (byte)uVar6;
      uVar13 = 1 << (bVar5 & 0x1f);
      uVar10 = uVar13;
      if ((uVar6 & 0x20) != 0) {
        uVar10 = 0;
      }
      uVar4 = 0 << (bVar5 & 0x1f) | 1U >> 0x20 - (bVar5 & 0x1f);
      if ((uVar6 & 0x20) != 0) {
        uVar4 = uVar13;
      }
      uVar13 = uVar11 >> (bVar5 & 0x1f);
      if ((uVar6 & 0x20) == 0) {
        uVar13 = (param_1 ^ uVar1) - uVar1 >> (bVar5 & 0x1f) | uVar11 << 0x20 - (bVar5 & 0x1f);
      }
      uVar15 = iVar14 << 1 | uVar8 >> 0x1f;
      uVar13 = (uVar13 & 1) + uVar8 * 2;
      local_30 = 0;
      local_34 = 0;
      uVar9 = 0;
      uVar8 = 0;
      if (uVar2 <= uVar15 && (uint)(uVar13 < uVar7) <= uVar15 - uVar2) {
        uVar9 = uVar7;
        uVar8 = uVar10;
        local_34 = uVar2;
        local_30 = uVar4;
      }
      uVar12 = uVar12 | uVar8;
      uVar3 = uVar3 | local_30;
      uVar8 = uVar13 - uVar9;
      iVar14 = (uVar15 - local_34) - (uint)(uVar13 < uVar9);
      bVar16 = uVar6 != 0;
      uVar6 = uVar6 - 1;
    } while (bVar16);
    uVar2 = -uVar12;
    uVar1 = -(uint)(uVar12 != 0) - uVar3;
    if (param_2 >> 0x1f == param_4 >> 0x1f) {
      uVar2 = uVar12;
      uVar1 = uVar3;
    }
  }
  return CONCAT44(uVar1,uVar2);
}

#undef local_34
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002020
 */

undefined8 recovered_10002020(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar8 = 0;
  }
  else {
    uVar2 = (int)param_2 >> 0x1f;
    uVar13 = ((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2);
    uVar3 = (int)param_4 >> 0x1f;
    uVar6 = (param_3 ^ uVar3) - uVar3;
    uVar4 = ((param_4 ^ uVar3) - uVar3) - (uint)((param_3 ^ uVar3) < uVar3);
    uVar3 = 0;
    uVar5 = 0x3f;
    iVar9 = 0;
    do {
      uVar10 = iVar9 << 1 | uVar3 >> 0x1f;
      bVar1 = (byte)uVar5 & 0x1f;
      uVar12 = uVar13 >> ((byte)uVar5 & 0x1f);
      if ((uVar5 & 0x20) == 0) {
        uVar12 = (param_1 ^ uVar2) - uVar2 >> bVar1 | uVar13 << 0x20 - bVar1;
      }
      uVar12 = (uVar12 & 1) + uVar3 * 2;
      uVar7 = 0;
      uVar11 = 0;
      if (uVar4 <= uVar10 && (uint)(uVar12 < uVar6) <= uVar10 - uVar4) {
        uVar7 = uVar6;
        uVar11 = uVar4;
      }
      uVar3 = uVar12 - uVar7;
      iVar9 = (uVar10 - uVar11) - (uint)(uVar12 < uVar7);
      bVar14 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar14);
    uVar2 = -uVar3;
    iVar8 = -(uint)(uVar3 != 0) - iVar9;
    if (-1 < (int)param_2) {
      uVar2 = uVar3;
      iVar8 = iVar9;
    }
  }
  return CONCAT44(iVar8,uVar2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

void recovered_100020f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002110
 */

int recovered_10002110(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002130(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10002180(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100021d0(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002220
 */

void * recovered_10002220(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;

  pvVar3 = destination;
  if (7 < count) {
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1000224a;
    if (((uint)destination & 3) != 0) {
      pvVar5 = destination;
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        uVar1 = *(undefined1 *)source;
        source = (void *)((int)source + 1);
        *(undefined1 *)destination = uVar1;
        destination = (void *)((int)destination + 1);
        bVar6 = count == 1;
        count = count - 1;
        if (bVar6) break;
      } while (((uint)pvVar5 & 3) != 0);
    }
    for (; 0xf < count; count = count - 0x10) {
      *(undefined4 *)destination = *(undefined4 *)source;
      *(undefined4 *)((int)destination + 4) = *(undefined4 *)((int)source + 4);
      *(undefined4 *)((int)destination + 8) = *(undefined4 *)((int)source + 8);
      *(undefined4 *)((int)destination + 0xc) = *(undefined4 *)((int)source + 0xc);
      destination = (void *)((int)destination + 0x10);
      source = (void *)((int)source + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      uVar2 = *(undefined4 *)source;
      source = (void *)((int)source + 4);
      *(undefined4 *)destination = uVar2;
      destination = (void *)((int)destination + 4);
    }
  }
  if (count == 0) {
    return pvVar3;
  }
LAB_1000224a:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022e0
 */

void * recovered_100022e0(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  if (count != 0 && destination != source) {
    if ((destination < source) || (pvVar5 = (void *)((int)source + count), pvVar5 <= destination)) {
      puVar7 = destination;
      if ((7 < count) && (pvVar5 = destination, (((uint)source ^ (uint)destination) & 3) == 0)) {
        do {
          if (((uint)pvVar5 & 3) == 0) break;
          pvVar5 = (void *)((int)pvVar5 + 1);
          uVar2 = *(undefined1 *)source;
          source = (void *)((int)source + 1);
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          bVar8 = count != 1;
          count = count - 1;
        } while (bVar8);
        for (; 0xf < count; count = count - 0x10) {
          *puVar7 = *(undefined4 *)source;
          puVar7[1] = *(undefined4 *)((int)source + 4);
          puVar7[2] = *(undefined4 *)((int)source + 8);
          puVar7[3] = *(undefined4 *)((int)source + 0xc);
          puVar7 = puVar7 + 4;
          source = (void *)((int)source + 0x10);
        }
        for (; 3 < count; count = count - 4) {
          uVar3 = *(undefined4 *)source;
          source = (void *)((int)source + 4);
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        }
        if (count == 0) {
          return destination;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar7 + uVar4) = *(undefined1 *)((int)source + uVar4);
        uVar4 = uVar4 + 1;
      } while (count != uVar4);
    }
    else {
      uVar4 = (int)destination + count;
      if ((7 < count) && ((((uint)pvVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)destination + (count - 1)) =
                 *(undefined1 *)((int)source + (count - 1));
            uVar1 = count - 1;
            if (count == 1) break;
            iVar6 = count - 1;
            count = uVar1;
          } while (((int)destination + iVar6 & 3U) != 0);
          pvVar5 = (void *)((int)source + uVar1);
          uVar4 = (int)destination + uVar1;
          count = uVar1;
        }
        for (; 0xf < count; count = count - 0x10) {
          *(undefined4 *)(uVar4 - 4) = *(undefined4 *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 8) = *(undefined4 *)((int)pvVar5 - 8);
          *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)((int)pvVar5 - 0xc);
          *(undefined4 *)(uVar4 - 0x10) = *(undefined4 *)((int)pvVar5 - 0x10);
          uVar4 = uVar4 - 0x10;
          pvVar5 = (void *)((int)pvVar5 - 0x10);
        }
        for (; 3 < count; count = count - 4) {
          puVar7 = (undefined4 *)((int)pvVar5 - 4);
          pvVar5 = (void *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (count == 0) {
          return destination;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)pvVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b0
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_100024b0(void *destination,int value,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;

  piVar1 = destination;
  if (7 < count) {
    if (((uint)destination & 3) != 0) {
      pvVar2 = destination;
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        *(char *)piVar1 = (char)value;
        piVar1 = (int *)((int)piVar1 + 1);
        bVar4 = count == 1;
        count = count - 1;
        if (bVar4) break;
      } while (((uint)pvVar2 & 3) != 0);
    }
    iVar3 = (value & 0xffU) * 0x1010101;
    for (; 0xf < count; count = count - 0x10) {
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
      piVar1[2] = iVar3;
      piVar1[3] = iVar3;
      piVar1 = piVar1 + 4;
    }
    for (; 3 < count; count = count - 4) {
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
    }
  }
  for (; count != 0; count = count - 1) {
    *(char *)piVar1 = (char)value;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002560
 */

void recovered_10002560(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < param_2; param_2 = param_2 - 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (; 3 < param_2; param_2 = param_2 - 4) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002600
 */

void recovered_10002600(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < param_2; param_2 = param_2 - 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (; 3 < param_2; param_2 = param_2 - 4) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

char * recovered_100026a0(char *param_1,char param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != 0) {
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

int recovered_100026e0(void *left,void *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;

  if (7 < count) {
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_1000277e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10002795;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_100027c6:
        if ((char)uVar8 == (char)uVar9) {
          uVar5 = uVar8 >> 8;
          uVar4 = uVar9 >> 8;
          if ((char)(uVar8 >> 8) == (char)(uVar9 >> 8)) {
            uVar5 = uVar8 >> 0x10;
            uVar4 = uVar9 >> 0x10;
            if ((char)(uVar8 >> 0x10) == (char)(uVar9 >> 0x10)) {
              uVar5 = uVar8 >> 0x18;
              uVar4 = uVar9 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar8;
          uVar4 = uVar9;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar8 = *(uint *)((int)left + 4);
      uVar9 = *(uint *)((int)right + 4);
      if (uVar8 != uVar9) goto LAB_100027c6;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_100027c6;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_100027c6;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_10002810(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_1000277e:
  uVar8 = 0;
  while( true ) {
    bVar1 = *(byte *)((int)left + uVar8);
    bVar2 = *(byte *)((int)right + uVar8);
    if (bVar1 != bVar2) break;
    uVar8 = uVar8 + 1;
    if (count == uVar8) {
      return 0;
    }
  }
LAB_10002795:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

int recovered_10002810(char *in_ECX,char *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (uint)CONCAT11(*in_EDX,*in_ECX);
  if ((((*in_ECX == *in_EDX) &&
       (uVar1 = (uint)CONCAT11(in_EDX[1],in_ECX[1]), in_ECX[1] == in_EDX[1])) &&
      (uVar1 = (uint)CONCAT11(in_EDX[2],in_ECX[2]), in_ECX[2] == in_EDX[2])) &&
     (uVar1 = (uint)CONCAT11(in_EDX[3],in_ECX[3]), in_ECX[3] == in_EDX[3])) {
    return 0;
  }
  return (uVar1 & 0xff) - (uVar1 >> 8);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

bool recovered_10002860(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

bool recovered_10002880(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

bool recovered_100028a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028c0
 */

bool recovered_100028c0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

bool recovered_100028f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002910
 */

bool recovered_10002910(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

int recovered_10002930(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002950
 */

int recovered_10002950(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

ulong recovered_10002970(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;

  if (text == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      iVar1 = uVar3 + 1;
      uVar3 = uVar2;
    } while (text[iVar1] != '\0');
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b0
 */

int recovered_100029b0(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *left;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = (uint)bVar1;
      left = left + 1;
      if (bVar1 != *right) goto LAB_100029e6;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100029e6:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f0
 */

int recovered_100029f0(byte *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = (uint)bVar1;
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_10002a26;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002a26:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a30
 */

void recovered_10002a30(int param_1,int param_2)

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


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002a60(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;

  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (*(char *)((int)param_1 + uVar5) != '\0');
  if (_DAT_00280800 != 0x50414d57) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00280804 == 0) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00280808 < 0xc) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00280808 < 0x50) {
    return (undefined4 *)0x0;
  }
  if (_DAT_0028084c == (code *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)(*_DAT_0028084c)(uVar7);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar6 = puVar4;
  if (7 < uVar7) {
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002b78;
    if (((uint)puVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar8) = *(undefined1 *)((int)param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      uVar7 = uVar7 - uVar1;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      puVar6[2] = param_1[2];
      puVar6[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (uVar7 == 0) {
    return puVar4;
  }
LAB_10002b78:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)((int)param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  return puVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba0
 */

char * recovered_10002ba0(char *param_1,char param_2)

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
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be0
 */

int recovered_10002be0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10002c2b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10002c2b;
      pcVar5 = param_2;
      while (pcVar5 = pcVar5 + 1, (char)uVar3 != cVar4) {
        cVar4 = *pcVar5;
        if (cVar4 == '\0') {
          return iVar2;
        }
      }
      iVar1 = iVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),param_1[iVar1]);
      iVar2 = iVar2 + 1;
    } while (param_1[iVar1] != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c40
 */

int recovered_10002c40(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 != '\0') {
        pcVar5 = param_2;
        do {
          pcVar5 = pcVar5 + 1;
          if ((char)uVar3 == cVar4) {
            return iVar2;
          }
          cVar4 = *pcVar5;
        } while (cVar4 != '\0');
      }
      iVar1 = iVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),param_1[iVar1]);
      iVar2 = iVar2 + 1;
    } while (param_1[iVar1] != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca0
 */

char * recovered_10002ca0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar2;
  uint uVar1;
  char *pcVar3;

  if (*param_1 != '\0') {
    uVar1 = (uint)CONCAT11(*param_2,*param_1);
    do {
      cVar2 = (char)(uVar1 >> 8);
      if (cVar2 != '\0') {
        pcVar3 = param_2;
        do {
          pcVar3 = pcVar3 + 1;
          if ((char)uVar1 == cVar2) {
            return param_1;
          }
          cVar2 = *pcVar3;
        } while (cVar2 != '\0');
      }
      pcVar3 = param_1 + 1;
      uVar1 = CONCAT31((int3)(uVar1 >> 8),*pcVar3);
      param_1 = param_1 + 1;
    } while (*pcVar3 != '\0');
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

char * recovered_10002cf0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;

  pcVar3 = param_1;
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      pcVar3 = (char *)0x0;
    }
    else {
      do {
        iVar2 = 0;
        cVar4 = *param_2;
        while (param_1[iVar2] == cVar4) {
          cVar4 = param_2[iVar2 + 1];
          iVar2 = iVar2 + 1;
          pcVar3 = param_1;
          if (cVar4 == '\0') goto LAB_10002d33;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002d33:
  return pcVar3;
}


#undef DAT_1000e5b0
#define DAT_1000e5b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xefU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

undefined * recovered_10002d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000e5b0;
}

#undef DAT_1000e5b0

#undef PTR_DAT_1000f24c
#define PTR_DAT_1000f24c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd8bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d60
 */

undefined ** recovered_10002d60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000f24c;
}

#undef PTR_DAT_1000f24c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(code * *)(0x280968U))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002d80(undefined4 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     (((_DAT_00280808 < 0x16c || (_DAT_00280968 == (code *)0x0)) ||
      (iVar1 = (*_DAT_00280968)(&local_34), iVar1 == 0)))) {
    local_2c = 0x574d4236;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_2c;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e20
 */

longdouble recovered_10002e20(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000e4d0;
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      lVar2 = lVar2 + lVar2;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return lVar2;
}

#undef DAT_1000e4d0

#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e70
 */

void recovered_10002e70(double param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if (param_1 < -param_1) {
      param_1 = -param_1;
    }
    iVar1 = 0;
    if (1.0 <= param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * (double)DAT_1000e4d0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000e4d0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000e4d0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000e4d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

longdouble recovered_10002f30(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_2;
  lVar2 = (longdouble)0;
  if ((lVar1 != lVar2) || (NAN(lVar1) || NAN(lVar2))) {
    lVar2 = (longdouble)param_1 - lVar1 * (longdouble)(int)ROUND((longdouble)param_1 / lVar1);
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

longdouble recovered_10002f90(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  longdouble lVar3;
  uint uVar4;
  longdouble lVar5;
  longdouble lVar6;

  lVar5 = (longdouble)param_1;
  uVar1 = (uint)ROUND(param_2);
  lVar6 = (longdouble)0;
  if ((((double)(int)uVar1 == param_2) && (!NAN((double)(int)uVar1) && !NAN(param_2))) &&
     (lVar6 = (longdouble)1, uVar1 != 0)) {
    uVar4 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar4 = uVar1;
    }
    lVar6 = (longdouble)1;
    do {
      lVar3 = lVar6 * lVar5;
      if ((uVar4 & 1) == 0) {
        lVar3 = lVar6;
      }
      lVar6 = lVar3;
      lVar5 = lVar5 * lVar5;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      lVar6 = (longdouble)1 / lVar6;
    }
  }
  return lVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003020
 */

longdouble recovered_10003020(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;

  iVar1 = (int)ROUND((longdouble)param_1);
  lVar2 = (longdouble)iVar1;
  if ((longdouble)param_1 < lVar2) {
    lVar2 = (longdouble)(iVar1 + -1);
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

longdouble recovered_10003070(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  if (lVar1 < lVar2) {
    lVar2 = (longdouble)((int)ROUND(lVar1) + -1);
  }
  if (lVar2 < lVar1) {
    lVar2 = (longdouble)1 + lVar2;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

void recovered_100030d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000e4d4
#define DAT_1000e4d4 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000e4d8
#define DAT_1000e4d8 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000e4dc
#define DAT_1000e4dc (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_1000e4e0
#define DAT_1000e4e0 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000e4e4
#define DAT_1000e4e4 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_1000e4e8
#define DAT_1000e4e8 (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000e4ec
#define DAT_1000e4ec (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_1000e4f0
#define DAT_1000e4f0 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000e4f4
#define DAT_1000e4f4 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000e4f8
#define DAT_1000e4f8 (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000e4fc
#define DAT_1000e4fc (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000e500
#define DAT_1000e500 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000e528
#define DAT_1000e528 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d0
 */

longdouble recovered_100031d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;

  lVar2 = (longdouble)param_1;
  if (lVar2 <= (longdouble)0) {
    lVar2 = (longdouble)DAT_1000e4d4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000e4d8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000e4d0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000e4d8 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000e4dc) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000e4dc);
    }
    lVar10 = (-(longdouble)1 + lVar2) / (lVar2 + (longdouble)1);
    lVar2 = lVar10 * lVar10;
    lVar3 = lVar10 * lVar2 * lVar2;
    lVar4 = lVar3 * lVar2;
    lVar5 = lVar4 * lVar2;
    lVar6 = lVar5 * lVar2;
    lVar7 = lVar6 * lVar2;
    lVar8 = lVar7 * lVar2;
    lVar9 = lVar8 * lVar2;
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000e500 +
            lVar9 / (longdouble)DAT_1000e4fc +
            lVar8 / (longdouble)DAT_1000e4f8 +
            lVar7 / (longdouble)DAT_1000e4f4 +
            lVar6 / (longdouble)DAT_1000e4f0 +
            lVar5 / (longdouble)DAT_1000e4ec +
            lVar4 / (longdouble)DAT_1000e4e8 +
            lVar3 / (longdouble)DAT_1000e4e4 +
            (lVar10 * lVar2) / (longdouble)DAT_1000e4e0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000e528;
  }
  return lVar2;
}

#undef DAT_1000e4d0
#undef DAT_1000e4d4
#undef DAT_1000e4d8
#undef DAT_1000e4dc
#undef DAT_1000e4e0
#undef DAT_1000e4e4
#undef DAT_1000e4e8
#undef DAT_1000e4ec
#undef DAT_1000e4f0
#undef DAT_1000e4f4
#undef DAT_1000e4f8
#undef DAT_1000e4fc
#undef DAT_1000e500
#undef DAT_1000e528

#undef DAT_1000e550
#define DAT_1000e550 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e0
 */

longlong recovered_100032e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000e550 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000e550

#undef DAT_1000e504
#define DAT_1000e504 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000e508
#define DAT_1000e508 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000e50c
#define DAT_1000e50c (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000e530
#define DAT_1000e530 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000e538
#define DAT_1000e538 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000e540
#define DAT_1000e540 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000e548
#define DAT_1000e548 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003340
 */

longdouble recovered_10003340(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000e530 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e538;
    } while ((longdouble)DAT_1000e530 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000e540) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e548;
    } while (lVar1 < (longdouble)DAT_1000e540);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000e50c +
         (lVar2 * lVar2) / (longdouble)DAT_1000e508 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000e504) * lVar1;
}

#undef DAT_1000e504
#undef DAT_1000e508
#undef DAT_1000e50c
#undef DAT_1000e530
#undef DAT_1000e538
#undef DAT_1000e540
#undef DAT_1000e548

#undef DAT_1000e510
#define DAT_1000e510 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000e514
#define DAT_1000e514 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000e518
#define DAT_1000e518 (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000e530
#define DAT_1000e530 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000e538
#define DAT_1000e538 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000e540
#define DAT_1000e540 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000e548
#define DAT_1000e548 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d0
 */

longdouble recovered_100033d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000e530 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e538;
    } while ((longdouble)DAT_1000e530 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000e540) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000e548;
    } while (lVar1 < (longdouble)DAT_1000e540);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000e518 +
         (lVar1 * lVar1) / (longdouble)DAT_1000e514 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000e510;
}

#undef DAT_1000e510
#undef DAT_1000e514
#undef DAT_1000e518
#undef DAT_1000e530
#undef DAT_1000e538
#undef DAT_1000e540
#undef DAT_1000e548

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003460
 */

longdouble recovered_10003460(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10003480(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003540(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100035d0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10003640(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003700
 */

void recovered_10003700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

void recovered_10003770(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if (param_1 < 0.0) {
      param_1 = -param_1;
    }
    iVar1 = 0;
    if (1.0 <= param_1) {
      iVar1 = 0;
      do {
        param_1 = param_1 * DAT_1000e4d0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000e4d0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000e4d0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000e4d0

#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003860
 */

longdouble recovered_10003860(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000e4d0;
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      param_1 = param_1 + param_1;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return (longdouble)param_1;
}

#undef DAT_1000e4d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c0
 */

longdouble recovered_100038c0(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longdouble lVar6;

  uVar1 = (uint)ROUND(param_2);
  lVar6 = (longdouble)0;
  if ((((float)(int)uVar1 == param_2) && (!NAN((float)(int)uVar1) && !NAN(param_2))) &&
     (lVar6 = (longdouble)1, uVar1 != 0)) {
    uVar5 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar5 = uVar1;
    }
    fVar4 = 1.0;
    do {
      fVar3 = fVar4 * param_1;
      if ((uVar5 & 1) == 0) {
        fVar3 = fVar4;
      }
      param_1 = param_1 * param_1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
      fVar4 = fVar3;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
    lVar6 = (longdouble)fVar3;
  }
  return lVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003960
 */

longdouble recovered_10003960(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

longdouble recovered_100039c0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  if (fVar1 < param_1) {
    fVar1 = fVar1 + 1.0;
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a30
 */

longdouble recovered_10003a30(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  if (lVar1 < lVar2) {
    lVar2 = (longdouble)((int)ROUND(lVar1) + -1);
  }
  lVar3 = lVar2;
  if (lVar2 < lVar1) {
    lVar3 = (longdouble)1 + lVar2;
  }
  if (lVar1 < (longdouble)0) {
    lVar2 = lVar3;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003aa0
 */

longdouble recovered_10003aa0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  if (param_1 < fVar1) {
    fVar1 = (float)((int)ROUND(param_1) + -1);
  }
  fVar2 = fVar1;
  if (fVar1 < param_1) {
    fVar2 = fVar1 + 1.0;
  }
  if (param_1 < 0.0) {
    fVar1 = fVar2;
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b10
 */

longdouble recovered_10003b10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_100030d0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000e4d8
#define DAT_1000e4d8 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000e4dc
#define DAT_1000e4dc (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b30
 */

void recovered_10003b30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000e4d8 < param_1) {
      do {
        param_1 = param_1 * DAT_1000e4d0;
      } while (DAT_1000e4d8 < param_1);
    }
    for (; param_1 < DAT_1000e4dc; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000e4d0
#undef DAT_1000e4d8
#undef DAT_1000e4dc

#undef DAT_1000e550
#define DAT_1000e550 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c50
 */

undefined4 recovered_10003c50(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000e550 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1000e550
#undef local_10

#undef DAT_1000e504
#define DAT_1000e504 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000e508
#define DAT_1000e508 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000e50c
#define DAT_1000e50c (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000e530
#define DAT_1000e530 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000e538
#define DAT_1000e538 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000e540
#define DAT_1000e540 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000e548
#define DAT_1000e548 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

longdouble recovered_10003ca0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000e530 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000e538;
    } while ((float)DAT_1000e530 < param_1);
  }
  if (param_1 < (float)DAT_1000e540) {
    do {
      param_1 = param_1 + (float)DAT_1000e548;
    } while (param_1 < (float)DAT_1000e540);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000e50c +
          (fVar1 * fVar1) / DAT_1000e508 + fVar1 / DAT_1000e504 + 1.0) * param_1);
}

#undef DAT_1000e504
#undef DAT_1000e508
#undef DAT_1000e50c
#undef DAT_1000e530
#undef DAT_1000e538
#undef DAT_1000e540
#undef DAT_1000e548

#undef DAT_1000e510
#define DAT_1000e510 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000e514
#define DAT_1000e514 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000e518
#define DAT_1000e518 (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000e530
#define DAT_1000e530 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000e538
#define DAT_1000e538 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000e540
#define DAT_1000e540 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000e548
#define DAT_1000e548 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d30
 */

longdouble recovered_10003d30(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000e530 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000e538;
    } while ((float)DAT_1000e530 < param_1);
  }
  if (param_1 < (float)DAT_1000e540) {
    do {
      param_1 = param_1 + (float)DAT_1000e548;
    } while (param_1 < (float)DAT_1000e540);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000e518 +
         (fVar1 * fVar1) / DAT_1000e514 + fVar1 * DAT_1000e510 + 1.0);
}

#undef DAT_1000e510
#undef DAT_1000e514
#undef DAT_1000e518
#undef DAT_1000e530
#undef DAT_1000e538
#undef DAT_1000e540
#undef DAT_1000e548

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc0
 */

longdouble recovered_10003dc0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#define local_14 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

int recovered_10003de0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  pbVar4 = param_1;
  while( true ) {
    bVar1 = *pbVar4;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar6 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar4 + uVar6;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar4[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar4 + uVar6 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar3 == 0x30) {
      if ((pbVar4[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar4 + uVar6 + 2;
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
  iVar7 = 0;
  local_14 = param_1;
  while( true ) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    iVar5 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar6 = iVar5 - 0x57;
    }
    else {
      uVar6 = iVar5 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar6 = 0xffffffff;
      }
    }
    if (param_3 <= uVar6) break;
    iVar7 = iVar7 * param_3 + uVar6;
    pbVar3 = pbVar4;
    local_14 = pbVar4;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_14;
  }
  iVar5 = -iVar7;
  if (bVar1 != 0x2d) {
    iVar5 = iVar7;
  }
  return iVar5;
}

#undef local_14

#define local_14 (*(byte * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f30
 */

int recovered_10003f30(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  pbVar4 = param_1;
  while( true ) {
    bVar1 = *pbVar4;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar6 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar4 + uVar6;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar4[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar4 + uVar6 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar3 == 0x30) {
      if ((pbVar4[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar4 + uVar6 + 2;
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
  iVar7 = 0;
  local_14 = param_1;
  while( true ) {
    pbVar4 = pbVar3 + 1;
    bVar2 = *pbVar3;
    iVar5 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar6 = iVar5 - 0x57;
    }
    else {
      uVar6 = iVar5 - 0x37;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar6 = 0xffffffff;
      }
    }
    if (param_3 <= uVar6) break;
    iVar7 = iVar7 * param_3 + uVar6;
    pbVar3 = pbVar4;
    local_14 = pbVar4;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_14;
  }
  iVar5 = -iVar7;
  if (bVar1 != 0x2d) {
    iVar5 = iVar7;
  }
  return iVar5;
}

#undef local_14

#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000e520
#define DAT_1000e520 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

longdouble recovered_10004080(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;

  pbVar3 = param_1;
  while( true ) {
    bVar4 = *pbVar3;
    if ((4 < bVar4 - 9) && (bVar4 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  pbVar3 = pbVar3 + ((bVar4 - 0x2b & 0xfd) == 0);
  uVar2 = (uint)CONCAT11(*pbVar3,bVar4);
  bVar4 = *pbVar3 - 0x30U;
  lVar9 = (longdouble)0;
  if (bVar4 < 10) {
    lVar9 = (longdouble)0;
    do {
      lVar9 = lVar9 * (longdouble)DAT_1000e520 + (longdouble)(int)((uVar2 >> 8) - 0x30);
      pbVar8 = pbVar3 + 1;
      uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
      pbVar3 = pbVar3 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
  }
  if ((char)(uVar2 >> 8) == '.') {
    pbVar8 = pbVar3 + 1;
    uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
    pbVar3 = pbVar3 + 1;
    if ((byte)(*pbVar8 - 0x30U) < 10) {
      lVar10 = (longdouble)0;
      lVar11 = (longdouble)1;
      do {
        lVar10 = lVar10 * (longdouble)DAT_1000e520 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000e520;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004153;
    }
  }
  lVar10 = (longdouble)0;
  if (9 < bVar4) {
    if (param_2 == (undefined4 *)0x0) {
      return (longdouble)0;
    }
    *param_2 = param_1;
    return (longdouble)0;
  }
LAB_10004153:
  lVar10 = lVar10 + lVar9;
  if ((uVar2 >> 8 | 0x20) == 0x65) {
    iVar5 = 1;
    if (pbVar3[1] == 0x2b) {
      pbVar8 = pbVar3 + 2;
    }
    else if (pbVar3[1] == 0x2d) {
      pbVar8 = pbVar3 + 2;
      iVar5 = -1;
    }
    else {
      pbVar8 = pbVar3 + 1;
    }
    uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
    bVar4 = *pbVar8 - 0x30U;
    if (bVar4 < 10) {
      iVar6 = 0;
      do {
        iVar6 = ((uVar2 >> 8) - 0x30) + iVar6 * 10;
        pbVar1 = pbVar8 + 1;
        uVar2 = (uint)CONCAT11(*pbVar1,(char)uVar2);
        pbVar8 = pbVar8 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar4 < 10) {
        iVar6 = iVar6 * iVar5;
        pbVar3 = pbVar8;
        if (iVar6 < 1) {
          if (iVar6 < 0) {
            do {
              lVar10 = lVar10 * (longdouble)DAT_1000e4d0;
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0);
          }
        }
        else {
          uVar7 = iVar6 + 1;
          do {
            lVar10 = lVar10 + lVar10;
            uVar7 = uVar7 - 1;
          } while (1 < uVar7);
        }
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar3;
  }
  if ((char)uVar2 == '-') {
    lVar10 = -lVar10;
  }
  return lVar10;
}

#undef DAT_1000e4d0
#undef DAT_1000e520

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004240
 */

longdouble recovered_10004240(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10004080(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000e520
#define DAT_1000e520 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef str_1000e5b2
#define str_1000e5b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1U)))
#undef str_1000e5bc
#define str_1000e5bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbU)))
#undef str_1000e5cd
#define str_1000e5cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004270
 */

int recovered_10004270(byte *param_1,uint param_2,byte *param_3,double *param_4)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;

  if (param_2 != 0) {
    *param_1 = 0;
  }
  local_c4 = param_4;
  local_c0 = 0;
  local_bc = param_2;
  do {
    bVar6 = *param_3;
    if (bVar6 != 0x25) {
      if (bVar6 == 0) {
        if (param_2 != 0) {
          *param_1 = 0;
        }
        return local_c0;
      }
      if (1 < local_bc) {
        *param_1 = bVar6;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004303;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10004303;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004365;
        }
        break;
      }
      param_3 = param_3 + 1;
      bVar6 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    do {
      bVar6 = param_3[1];
      pbVar10 = param_3 + 1;
      param_3 = pbVar10;
    } while ((byte)(bVar6 - 0x30U) < 10);
LAB_10004365:
    iVar12 = -1;
    if (bVar6 == 0x2e) {
      bVar6 = pbVar10[1];
      if (bVar6 == 0x2a) {
        iVar12 = *(int *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        bVar6 = pbVar10[2];
        pbVar10 = pbVar10 + 2;
      }
      else {
        pbVar10 = pbVar10 + 1;
        iVar12 = 0;
        if ((byte)(bVar6 - 0x30U) < 10) {
          iVar13 = 0;
          do {
            iVar12 = (uint)(byte)(bVar6 - 0x30U) + iVar13 * 10;
            if ((int)(((byte)(bVar6 - 0x30U) ^ 0x7ffffffe) / 10) < iVar13) {
              iVar12 = 0x7fffffff;
            }
            bVar6 = pbVar10[1];
            pbVar10 = pbVar10 + 1;
            iVar13 = iVar12;
          } while ((byte)(bVar6 - 0x30U) < 10);
        }
      }
    }
    cVar7 = '\0';
    bVar19 = false;
    param_3 = pbVar10;
    switch((uintptr_t)(bVar6)) {
    case 0x4c:
      param_3 = pbVar10 + 1;
      cVar7 = '\b';
      bVar19 = true;
      break;
    case 0x68:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x68) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] != 0x68) + '\x01';
      goto LAB_1000444c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004458;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000444c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004458;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004458:
      param_3 = pbVar10 + 1;
      bVar19 = false;
    }
    local_b8 = param_1;
    switch((uintptr_t)(*param_3)) {
    case 0x49:
    case 100:
    case 0x69:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(char *)local_c4;
        break;
      case '\x02':
        uVar15 = (uint)*(short *)local_c4;
        break;
      default:
        uVar15 = *(uint *)local_c4;
        break;
      case '\x04':
      case '\a':
        uVar15 = *(uint *)local_c4;
        uVar8 = *(uint *)((int)local_c4 + 4);
        local_c4 = local_c4 + 1;
        goto LAB_10004769;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004769:
      if ((int)uVar8 < 0) {
        if (1 < local_bc) {
          *param_1 = 0x2d;
          param_1 = param_1 + 1;
          local_bc = local_bc - 1;
        }
        local_c0 = local_c0 + 1;
        bVar19 = uVar15 != 0;
        uVar15 = -uVar15;
        uVar8 = -(uint)bVar19 - uVar8;
        local_b8 = param_1;
      }
      iVar12 = 0;
      do {
        uVar16 = uVar8 << 0x1f | uVar15 >> 1;
        uVar11 = uVar8 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000e5cd[uVar15 + uVar9 * -10];
        iVar12 = iVar12 + 1;
        bVar19 = 9 < uVar15;
        bVar20 = uVar8 != 0;
        uVar5 = -uVar8;
        uVar8 = (uVar11 - (uVar16 < uVar18)) * -0x33333333 +
                uVar17 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        uVar15 = uVar9;
      } while (bVar20 || uVar5 < bVar19);
      if (iVar12 != 0) {
        local_c0 = local_c0 + iVar12;
        do {
          if (1 < local_bc) {
            *local_b8 = abStack_51[iVar12];
            local_b8 = local_b8 + 1;
            local_bc = local_bc - 1;
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto LAB_100042b8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004303;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004897;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004897;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004897:
        local_c4 = (double *)((int)local_c4 + 4);
        uVar8 = 0;
        break;
      case '\x04':
      case '\a':
        uVar15 = *(uint *)local_c4;
        uVar8 = *(uint *)((int)local_c4 + 4);
        local_c4 = local_c4 + 1;
        break;
      case '\x06':
        uVar15 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar8 = (int)uVar15 >> 0x1f;
        break;
      default:
        uVar15 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar8 = 0;
      }
      pcVar14 = str_1000e5cd;
      if (*param_3 == 0x58) {
        pcVar14 = str_1000e5bc;
      }
      iVar12 = 0;
      do {
        abStack_51[iVar12 + 1] = pcVar14[uVar15 & 0xf];
        iVar12 = iVar12 + 1;
        bVar19 = 0xf < uVar15;
        bVar20 = uVar8 != 0;
        uVar5 = -uVar8;
        uVar15 = uVar8 << 0x1c | uVar15 >> 4;
        uVar8 = uVar8 >> 4;
      } while (bVar20 || uVar5 < bVar19);
      local_c0 = local_c0 + iVar12;
      do {
        if (1 < local_bc) {
          *param_1 = abStack_51[iVar12];
          param_1 = param_1 + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
        pdVar1 = local_c4;
      } while (iVar12 != 0);
LAB_1000486c:
      local_c4 = pdVar1;
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_bc) {
        *param_1 = *(byte *)local_c4;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      local_c4 = (double *)((int)local_c4 + 4);
LAB_10004303:
      local_c0 = local_c0 + 1;
LAB_10004304:
      param_3 = param_3 + 1;
      break;
    case 0x66:
      if (bVar19) {
        if (1 < local_bc) {
          *param_1 = 0x30;
          if (local_bc - 3 < 0xfffffffe) {
            param_1[1] = 0x2e;
            uVar8 = local_bc & 0xfffffffe;
            if (uVar8 == 2) {
              param_1 = param_1 + 2;
            }
            else {
              param_1[2] = 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                param_1[3] = 0x30;
                if (uVar8 == 4) {
                  param_1 = param_1 + 4;
                }
                else {
                  param_1[4] = 0x30;
                  if (local_bc - 7 < 0xfffffffe) {
                    param_1[5] = 0x30;
                    if (uVar8 == 6) {
                      param_1 = param_1 + 6;
                    }
                    else {
                      param_1[6] = 0x30;
                      if (local_bc - 9 < 0xfffffffe) {
                        param_1[7] = 0x30;
                        param_1 = param_1 + 8;
                        local_bc = local_bc - 8;
                        goto LAB_100049a5;
                      }
                      param_1 = param_1 + 7;
                    }
                  }
                  else {
                    param_1 = param_1 + 5;
                  }
                }
              }
              else {
                param_1 = param_1 + 3;
              }
            }
          }
          else {
            param_1 = param_1 + 1;
          }
          local_bc = 1;
        }
LAB_100049a5:
        local_c4 = local_c4 + 2;
        local_c0 = local_c0 + 8;
        param_3 = param_3 + 1;
      }
      else {
        dVar2 = *local_c4;
        if (dVar2 < 0.0) {
          if (1 < local_bc) {
            *param_1 = 0x2d;
            param_1 = param_1 + 1;
            local_bc = local_bc - 1;
          }
          local_c0 = local_c0 + 1;
          dVar2 = -dVar2;
          local_b8 = param_1;
        }
        local_c4 = local_c4 + 1;
        iVar12 = 0;
        uVar8 = (int)ROUND(dVar2);
        uVar15 = 0;
        do {
          uVar16 = uVar15 << 0x1f | uVar8 >> 1;
          uVar11 = uVar15 >> 1;
          uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
          uVar17 = uVar16 - uVar18;
          lVar3 = (ulonglong)uVar17 * 0xcccccccd;
          uVar9 = (uint)lVar3;
          abStack_51[iVar12 + 1] = str_1000e5cd[uVar8 + uVar9 * -10];
          iVar12 = iVar12 + 1;
          bVar19 = 9 < uVar8;
          bVar20 = uVar15 != 0;
          uVar5 = -uVar15;
          uVar8 = uVar9;
          uVar15 = (uVar11 - (uVar16 < uVar18)) * -0x33333333 +
                   uVar17 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        } while (bVar20 || uVar5 < bVar19);
        if (iVar12 != 0) {
          local_c0 = local_c0 + iVar12;
          do {
            if (1 < local_bc) {
              *local_b8 = abStack_51[iVar12];
              local_b8 = local_b8 + 1;
              local_bc = local_bc - 1;
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        if (1 < local_bc) {
          *local_b8 = 0x2e;
          if (local_bc - 1 < 2) {
            local_b8 = local_b8 + 1;
            local_bc = local_bc - 1;
          }
          else {
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000e520;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000e520;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000e520;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000e520;
                  dVar2 = (dVar2 - (double)iVar12) * dVar4;
                  iVar12 = (int)ROUND(dVar2);
                  local_b8[4] = (char)iVar12 + 0x30;
                  dVar4 = (dVar2 - (double)iVar12) * dVar4;
                  iVar12 = (int)ROUND(dVar4);
                  if (local_bc - 7 < 0xfffffffe) {
                    local_b8[5] = (char)iVar12 + 0x30;
                    if (uVar15 == 6) {
                      local_b8 = local_b8 + 6;
                    }
                    else {
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000e520);
                      local_b8[6] = local_80 + 0x30;
                      local_b8 = local_b8 + 7;
                      uVar8 = local_bc - 7;
                    }
                  }
                  else {
                    local_b8 = local_b8 + 5;
                  }
                }
              }
              else {
                local_b8 = local_b8 + 3;
              }
              local_bc = uVar8;
            }
          }
        }
        local_c0 = local_c0 + 7;
        param_3 = param_3 + 1;
        param_1 = local_b8;
      }
      break;
    case 0x70:
      uVar8 = *(uint *)local_c4;
      if (1 < local_bc) {
        *param_1 = 0x30;
        if (local_bc - 3 < 0xfffffffe) {
          param_1[1] = 0x78;
          local_b8 = param_1 + 2;
          local_bc = local_bc - 2;
        }
        else {
          local_b8 = param_1 + 1;
          local_bc = 1;
        }
      }
      local_c4 = (double *)((int)local_c4 + 4);
      iVar12 = 0;
      do {
        abStack_51[iVar12 + 1] = str_1000e5cd[uVar8 & 0xf];
        iVar12 = iVar12 + 1;
        bVar19 = 0xf < uVar8;
        uVar8 = uVar8 >> 4;
      } while (bVar19);
      local_c0 = local_c0 + 2 + iVar12;
      param_1 = local_b8;
      do {
        if (1 < local_bc) {
          *param_1 = abStack_51[iVar12];
          param_1 = param_1 + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      goto LAB_10004304;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000e5b2;
        if (*(byte **)local_c4 != (byte *)0x0) {
          pbVar10 = *(byte **)local_c4;
        }
        do {
          if (*pbVar10 == 0) break;
          if (1 < local_bc) {
            *param_1 = *pbVar10;
            param_1 = param_1 + 1;
            local_bc = local_bc - 1;
          }
          pbVar10 = pbVar10 + 1;
          local_c0 = local_c0 + 1;
          iVar12 = iVar12 - (uint)(0 < iVar12);
        } while (iVar12 != 0);
      }
      goto LAB_1000486c;
    case 0x75:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar8 = (uint)*(byte *)local_c4;
        break;
      case '\x02':
        uVar8 = (uint)*(ushort *)local_c4;
        break;
      case '\x03':
      case '\x05':
        uVar8 = *(uint *)local_c4;
        break;
      case '\x04':
      case '\a':
        uVar8 = *(uint *)local_c4;
        uVar15 = *(uint *)((int)local_c4 + 4);
        local_c4 = local_c4 + 1;
        goto LAB_10004a7f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004a7f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004a7f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000e5cd[uVar8 + uVar9 * -10];
        iVar12 = iVar12 + 1;
        bVar19 = 9 < uVar8;
        bVar20 = uVar15 != 0;
        uVar5 = -uVar15;
        uVar8 = uVar9;
        uVar15 = (uVar11 - (uVar16 < uVar18)) * -0x33333333 +
                 uVar17 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
      } while (bVar20 || uVar5 < bVar19);
      if (iVar12 != 0) {
        local_c0 = local_c0 + iVar12;
        do {
          if (1 < local_bc) {
            *local_b8 = abStack_51[iVar12];
            local_b8 = local_b8 + 1;
            local_bc = local_bc - 1;
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
LAB_100042b8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_1000e520
#undef str_1000e5b2
#undef str_1000e5bc
#undef str_1000e5cd
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10004fd0(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004270(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_10000000
#define DAT_10000000 (*(uint8_t *)(0x10000000U))
#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10000004
#define DAT_10000004 (*(uint8_t *)(0x10000004U))
#undef DAT_10000008
#define DAT_10000008 (*(uint8_t *)(0x10000008U))
#undef DAT_1000000c
#define DAT_1000000c (*(uint8_t *)(0x1000000cU))
#undef DAT_1000f2c0
#define DAT_1000f2c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xdffU)))
#undef DAT_1000f2c8
#define DAT_1000f2c8 (*(int * *)(((uintptr_t)pf_module_state + 0xe07U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005000(undefined *in_ECX,uint in_EDX,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;

  puVar5 = (undefined *)0xffffffff;
  if (!CARRY4((uint)in_ECX,in_EDX)) {
    puVar5 = in_ECX + in_EDX;
  }
  if (((in_ECX < (undefined *)0x10000000) && (in_ECX < puVar5)) && ((undefined *)0x8000000 < puVar5)
     ) {
    if (in_ECX < (undefined *)0x8000000) {
      if (param_3 == (int *)0x0) {
        return;
      }
      piVar4 = (int *)((uint)(in_ECX + 0xf) & 0xffffff0);
      uVar3 = (0x8000000U - (int)in_ECX) - ((int)piVar4 - (int)in_ECX);
      if (((uint)((int)piVar4 - (int)in_ECX) <= 0x8000000U - (int)in_ECX && uVar3 != 0) &&
         (uVar3 = uVar3 & 0xfffffff0, 0x20 < uVar3)) {
        *piVar4 = uVar3 - 0x10;
        piVar4[1] = 0;
        iVar1 = *param_3;
        piVar4[2] = iVar1;
        *(undefined1 *)(piVar4 + 3) = 1;
        puVar2 = (undefined4 *)(iVar1 + 4);
        if (DAT_1000f2c0 == 0) {
          puVar2 = &DAT_1000f2c0;
        }
        *puVar2 = piVar4;
        *param_3 = (int)piVar4;
        if (DAT_1000f2c8 == (int *)0x0) {
          DAT_1000f2c8 = piVar4;
        }
      }
    }
    if (param_3 == (int *)0x0 || puVar5 < &DAT_10000001) {
      return;
    }
    if (((uint)puVar5 & 0xfffffff0) + 0xf0000000 < 0x21) {
      return;
    }
    _DAT_10000000 = ((uint)puVar5 & 0xfffffff0) + 0xeffffff0;
    _DAT_10000004 = 0;
    _DAT_10000008 = *param_3;
    DAT_1000000c = 1;
    puVar2 = (undefined4 *)(_DAT_10000008 + 4);
    if (DAT_1000f2c0 == 0) {
      puVar2 = &DAT_1000f2c0;
    }
    *puVar2 = 0x10000000;
    *param_3 = 0x10000000;
    if (DAT_1000f2c8 != (int *)0x0) {
      return;
    }
    piVar4 = (int *)&DAT_10000000;
  }
  else {
    if (CARRY4((uint)in_ECX,in_EDX)) {
      return;
    }
    if ((undefined *)0xfffffff0 < in_ECX) {
      return;
    }
    if (param_3 == (int *)0x0) {
      return;
    }
    piVar4 = (int *)((uint)(in_ECX + 0xf) & 0xfffffff0);
    uVar3 = in_EDX - ((int)piVar4 - (int)in_ECX);
    if (in_EDX < (uint)((int)piVar4 - (int)in_ECX) || uVar3 == 0) {
      return;
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 < 0x21) {
      return;
    }
    *piVar4 = uVar3 - 0x10;
    piVar4[1] = 0;
    iVar1 = *param_3;
    piVar4[2] = iVar1;
    *(undefined1 *)(piVar4 + 3) = 1;
    puVar2 = (undefined4 *)(iVar1 + 4);
    if (DAT_1000f2c0 == 0) {
      puVar2 = &DAT_1000f2c0;
    }
    *puVar2 = piVar4;
    *param_3 = (int)piVar4;
    if (DAT_1000f2c8 != (int *)0x0) {
      return;
    }
  }
  DAT_1000f2c8 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000f2c0
#undef DAT_1000f2c8
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051a0
 */

uint * recovered_100051a0(uint *in_ECX,uint *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;

  puVar2 = (uint *)0x0;
  if ((((in_ECX != (uint *)0x0) && (((uint)in_EDX & 0xf) == 0)) && ((char)in_ECX[3] != '\0')) &&
     (((in_ECX + 4 < in_EDX && (uVar3 = (int)in_EDX - (int)(in_ECX + 4), 0x1f < uVar3)) &&
      (uVar3 <= *in_ECX)))) {
    puVar2 = in_EDX + -4;
    in_EDX[-4] = *in_ECX - uVar3;
    uVar1 = in_ECX[1];
    in_EDX[-3] = uVar1;
    in_EDX[-2] = (uint)in_ECX;
    *(undefined1 *)(in_EDX + -1) = 1;
    if (uVar1 != 0) {
      *(uint **)(uVar1 + 8) = puVar2;
    }
    *in_ECX = uVar3 - 0x10;
    in_ECX[1] = (uint)puVar2;
  }
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005200
 */

undefined4 recovered_10005200(uint *in_ECX,int in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;

  if (in_ECX == (uint *)0x0) {
    return 0;
  }
  uVar3 = in_EDX + 0xfU & 0xfffffff0;
  uVar4 = *in_ECX - uVar3;
  if (uVar4 < 0x20 || *in_ECX < uVar3) {
    uVar2 = 0;
  }
  else {
    uVar1 = (int)in_ECX + uVar3 + 0x10;
    *(uint *)((int)in_ECX + uVar3 + 0x10) = uVar4 - 0x10;
    uVar4 = in_ECX[1];
    *(uint *)((int)in_ECX + uVar3 + 0x14) = uVar4;
    *(uint **)((int)in_ECX + uVar3 + 0x18) = in_ECX;
    *(undefined1 *)((int)in_ECX + uVar3 + 0x1c) = 1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = uVar1;
    }
    *in_ECX = uVar3;
    in_ECX[1] = uVar1;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1000f2cc
#define DAT_1000f2cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe0bU)))
#undef DAT_1000f2d0
#define DAT_1000f2d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005260(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000f2cc != 0) {
          DAT_1000f2cc = DAT_1000f2cc - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000f2cc == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10002220(local_214,&DAT_1000f2d0,DAT_1000f2cc);
            uVar3 = DAT_1000f2cc;
          }
          local_214[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000f2cc = 0;
        }
        else {
          if (DAT_1000f2cc - 0x1ff < 0xfffffe00) {
            recovered_10002220(local_214,&DAT_1000f2d0,DAT_1000f2cc);
            local_214[DAT_1000f2cc] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000f2cc = 0;
          }
          pcVar1 = &DAT_1000f2d0 + DAT_1000f2cc;
          DAT_1000f2cc = DAT_1000f2cc + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000f2cc
#undef DAT_1000f2d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_214

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1000f2cc
#define DAT_1000f2cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe0bU)))
#undef DAT_1000f2d0
#define DAT_1000f2d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_21c (*(undefined1 (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005420(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000f2cc == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10002220(local_21c,&DAT_1000f2d0,DAT_1000f2cc);
    uVar1 = DAT_1000f2cc;
  }
  local_21c[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000f2cc = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000f2cc
#undef DAT_1000f2d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_21c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_1000f2cc
#define DAT_1000f2cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe0bU)))
#undef DAT_1000f2d0
#define DAT_1000f2d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#define local_210 (*(undefined1 (*)[528])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100054c0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000f2cc != 0) {
    recovered_10002220(local_210,&DAT_1000f2d0,DAT_1000f2cc);
    local_210[DAT_1000f2cc] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000f2cc = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000f2cc
#undef DAT_1000f2d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000e5bb
#define DAT_1000e5bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef DAT_1000e5de
#define DAT_1000e5de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11dU)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

void recovered_10005550(char *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  char *format;

  format = &DAT_1000e5de;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_1000e5bb;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_10004fd0(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_10005260(acStack_150,iVar2);
  }
  return;
}

#undef DAT_1000e5bb
#undef DAT_1000e5de
#undef acStack_150

#undef DAT_1000e5fc
#define DAT_1000e5fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_1000e5e1
#define str_1000e5e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002970(str_1000e5e1);
  recovered_10005260(str_1000e5e1,uVar1);
  uVar1 = recovered_10002970(&DAT_1000e5fc);
  recovered_10005260(&DAT_1000e5fc,uVar1);
  return;
}

#undef DAT_1000e5fc
#undef str_1000e5e1

#undef DAT_1000e5fc
#define DAT_1000e5fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_1000e5ff
#define str_1000e5ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005600
 */

void recovered_10005600(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002970(str_1000e5ff);
  recovered_10005260(str_1000e5ff,uVar1);
  uVar1 = recovered_10002970(&DAT_1000e5fc);
  recovered_10005260(&DAT_1000e5fc,uVar1);
  return;
}

#undef DAT_1000e5fc
#undef str_1000e5ff

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_1000f2cc
#define DAT_1000f2cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe0bU)))
#undef DAT_1000f2d0
#define DAT_1000f2d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#undef _DAT_00280844
#define _DAT_00280844 (*(code * *)(0x280844U))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005650(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000f2cc != 0) {
      recovered_10002220(local_214,&DAT_1000f2d0,DAT_1000f2cc);
      local_214[DAT_1000f2cc] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000f2cc = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000f2cc
#undef DAT_1000f2d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005750
 */

undefined4 recovered_10005750(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

void recovered_10005760(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005770
 */

undefined1 recovered_10005770(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_1000e5de
#define DAT_1000e5de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11dU)))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_1000e680
#define str_1000e680 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bfU)))
#undef str_1000e68d
#define str_1000e68d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ccU)))
#undef str_1000e69b
#define str_1000e69b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005780(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *destination;
  bool bVar8;

  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_100029b0(param_1,str_1000e680);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_100029b0(param_1,str_1000e68d);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_100029b0(param_1,str_1000e69b);
      if (iVar4 != 0) {
        puVar5 = recovered_10002130(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100024b0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10002ba0(param_2,'r');
          bVar8 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002ba0(param_2,'+');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002ba0(param_2,'a');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar8;
          pcVar6 = recovered_10002ba0(param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002ba0(param_2,'a');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002ba0(param_2,'+');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar8 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar8;
          pcVar6 = recovered_10002ba0(param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          recovered_10004fd0((char *)(puVar5 + 1),0xf1,&DAT_1000e5de,param_1);
          recovered_100024b0(&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002ba0(param_2,'w');
            if (local_1c != 0 && pcVar6 == (char *)0x0) {
              if (*(char *)((int)puVar5 + 0x111) == '\x01') {
                uVar7 = puVar5[0x41];
                if (uVar7 < local_1c) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < local_1c);
                  destination = recovered_100021d0((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000f000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_10005ac7;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10002220(destination,local_20,local_1c);
              }
              else {
                puVar5[0x3e] = local_20;
              }
              puVar5[0x40] = local_1c;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x10005aa4;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000f000 = 2;
LAB_10005ac7:
            recovered_10002180(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x10005aa4:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10005925;
      }
      local_24 = 3;
    }
  }
  puVar5 = recovered_10002130(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100024b0(puVar5,0,800);
    *puVar5 = local_24;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    recovered_10004fd0((char *)(puVar5 + 1),0xf1,&DAT_1000e5de,param_1);
    return puVar5;
  }
LAB_10005925:
  *(undefined4 *)PTR_DAT_1000f000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000e5de
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000e680
#undef str_1000e68d
#undef str_1000e69b
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005b30(char *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_10005c07;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10005bea;
      }
    }
    *(undefined4 *)PTR_DAT_1000f000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10005bea:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10002180((void *)param_3[0x3f]);
  }
  recovered_10002180(param_3);
LAB_10005c07:
  recovered_10005780(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005c20(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       ((_DAT_00280838 != (code *)0x0 &&
        (iVar1 = (*_DAT_00280838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined4 *)PTR_DAT_1000f000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002180((void *)param_1[0x3f]);
  }
  recovered_10002180(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d00
 */

uint recovered_10005d00(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;

  uVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    if ((*param_4 == 0) && (param_4[0x43] == -1)) {
      uVar3 = param_4[0x42];
      uVar2 = param_4[0x40] - uVar3;
      if ((uint)param_4[0x40] < uVar3 || uVar2 == 0) {
        *(undefined1 *)(param_4 + 0x45) = 1;
      }
      else {
        uVar5 = 0xffffffff;
        if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
          uVar5 = param_3 * param_2;
        }
        uVar1 = uVar5;
        if (uVar2 < uVar5) {
          uVar1 = uVar2;
        }
        recovered_10002220(param_1,(void *)(uVar3 + param_4[0x3e]),uVar1);
        param_4[0x42] = param_4[0x42] + uVar1;
        if (uVar2 < uVar5) {
          *(undefined1 *)(param_4 + 0x45) = 1;
        }
        uVar1 = uVar1 / param_2;
      }
    }
    else {
      uVar1 = 0;
      do {
        uVar3 = param_2;
        puVar4 = param_1;
        do {
          uVar2 = recovered_10005e10(param_4);
          if (uVar2 == 0xffffffff) {
            return uVar1;
          }
          *puVar4 = (char)uVar2;
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        uVar1 = uVar1 + 1;
        param_1 = param_1 + param_2;
      } while (uVar1 != param_3);
      uVar1 = param_3;
    }
  }
  return uVar1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280840
#define DAT_00280840 (*(uint8_t *)(0x280840U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_1000e5bb
#define DAT_1000e5bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef DAT_1000f2cc
#define DAT_1000f2cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe0bU)))
#undef DAT_1000f2d0
#define DAT_1000f2d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe0fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280840
#define _DAT_00280840 (*(code * *)(0x280840U))
#undef _DAT_00280844
#define _DAT_00280844 (*(code * *)(0x280844U))
#define local_214 (*(undefined1 (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10005e10(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;

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
LAB_10005e71:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000f2cc != 0) {
      recovered_10002220(local_214,&DAT_1000f2d0,DAT_1000f2cc);
      local_214[DAT_1000f2cc] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000f2cc = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000e5bb,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002970((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10005e71;
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

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000e5bb
#undef DAT_1000f2cc
#undef DAT_1000f2d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fd0
 */

int recovered_10005fd0(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000613a:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005260(param_1,count);
      param_4[0x42] = param_4[0x42] + count;
      return param_3;
    }
    if (*(char *)((int)param_4 + 0x112) == '\0') {
      uVar4 = param_4[0x42];
    }
    else {
      uVar4 = param_4[0x40];
      param_4[0x42] = uVar4;
    }
    uVar2 = param_4[0x41];
    if (uVar2 < uVar4 + count) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + count);
      pvVar3 = recovered_100021d0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000f000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000613a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100024b0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10002220((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000f000

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006150
 */

undefined4 recovered_10006150(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006169;
        iVar1 = 0x100;
      }
      param_2 = param_2 + *(int *)((int)param_1 + iVar1);
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      param_1[0x43] = -1;
      return 0;
    }
  }
LAB_10006169:
  *(undefined4 *)PTR_DAT_1000f000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000f000

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f0
 */

undefined4 recovered_100061f0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000f000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006220(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
        ((0xb < _DAT_00280808 && ((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)))))) &&
       (iVar2 = (*_DAT_00280838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar2 != 0)) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
    *(undefined4 *)PTR_DAT_1000f000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e0
 */

undefined1 recovered_100062e0(int param_1)

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
 * Address: 0x10006300
 */

undefined1 recovered_10006300(int param_1)

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
 * Address: 0x10006320
 */

void recovered_10006320(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006350
 */

uint recovered_10006350(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
    *(undefined1 *)(param_2 + 0x114) = 0;
  }
  return uVar1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028083c
#define DAT_0028083c (*(uint8_t *)(0x28083cU))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006390(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 5;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x3f < _DAT_00280808 && (_DAT_0028083c != (code *)0x0)) &&
        (iVar1 = (*_DAT_0028083c)(param_1), iVar1 != 0)))) {
      return 0;
    }
  }
  *(undefined4 *)PTR_DAT_1000f000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028083c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_0028083c
#define DAT_0028083c (*(uint8_t *)(0x28083cU))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb3fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006410(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
  }
  else {
    recovered_100024b0(&local_20,0,0xc);
    uVar2 = 2;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
      iVar1 = (*_DAT_00280834)(param_1,&local_20);
      uVar2 = 2;
      if (iVar1 != 0) {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 &&
            (((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)) &&
             (iVar1 = (*_DAT_00280838)(param_2,local_20,local_1c), iVar1 != 0)))))) {
          uVar2 = 5;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x3f < _DAT_00280808 && (_DAT_0028083c != (code *)0x0))))))
          {
            iVar1 = (*_DAT_0028083c)(param_1);
            uVar2 = 5;
            if (iVar1 != 0) {
              return 0;
            }
          }
        }
        else {
          uVar2 = 5;
        }
      }
    }
    *(undefined4 *)PTR_DAT_1000f000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000f000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028083c
#undef local_20
#undef local_1c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#define local_1c (*(ulong *)(pf_stack_frame + 20))
#define local_20 (*(void * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006590(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if ((((param_3 == (ulong *)0x0 || (param_2 == (undefined4 *)0x0 || param_1 == 0)) ||
       (recovered_100024b0(&local_20,0,0xc), _DAT_00280800 != 0x50414d57)) || (_DAT_00280804 == 0))
     || (((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x38)) ||
         ((_DAT_00280834 == (code *)0x0 || (iVar1 = (*_DAT_00280834)(param_1,&local_20), iVar1 == 0)
          ))))) {
    return 0;
  }
  destination = recovered_10002130(local_1c + (local_1c == 0));
  if (destination == (void *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (local_1c != 0) {
    recovered_10002220(destination,local_20,local_1c);
    uVar2 = local_1c;
  }
  *param_2 = destination;
  *param_3 = uVar2;
  return CONCAT31((int3)(uVar2 >> 8),1);
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef local_1c
#undef local_20

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006670(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) || (_DAT_00280800 != 0x50414d57)) ||
     (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x3c || (_DAT_00280838 == (code *)0x0)))))) {
    return false;
  }
  iVar1 = (*_DAT_00280838)(param_1,param_2,param_3);
  return iVar1 != 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f0
 */

undefined4 recovered_100066f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006700
 */

void recovered_10006700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

undefined4 recovered_10006710(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006720
 */

undefined4 recovered_10006720(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006730
 */

undefined4 recovered_10006730(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

int recovered_10006740(char *left,char *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;

  if (count == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      bVar1 = left[iVar2];
      if (bVar1 != right[iVar2]) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar3 = count - 1 == iVar2;
      iVar2 = iVar2 + 1;
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = (uint)bVar1 - (uint)(byte)right[iVar2];
  }
  return iVar2;
}


#undef DAT_1000e60f
#define DAT_1000e60f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14eU)))
#undef str_1000e612
#define str_1000e612 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_1000e61f
#define str_1000e61f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_1000e629
#define str_1000e629 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x168U)))
#undef str_1000e63d
#define str_1000e63d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000e64b
#define str_1000e64b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18aU)))
#undef str_1000e65d
#define str_1000e65d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19cU)))
#undef str_1000e669
#define str_1000e669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a8U)))
#undef str_1000e67a
#define str_1000e67a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006790
 */

char * recovered_10006790(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000e60f;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000e67a;
    break;
  case 2:
    pcVar1 = str_1000e612;
    break;
  case 5:
    pcVar1 = str_1000e61f;
    break;
  case 9:
    pcVar1 = str_1000e629;
    break;
  case 0xc:
    pcVar1 = str_1000e63d;
    break;
  case 0xd:
    pcVar1 = str_1000e64b;
    break;
  case 0x11:
    pcVar1 = str_1000e65d;
    break;
  case 0x16:
    pcVar1 = str_1000e669;
  }
  return pcVar1;
}

#undef DAT_1000e60f
#undef str_1000e612
#undef str_1000e61f
#undef str_1000e629
#undef str_1000e63d
#undef str_1000e64b
#undef str_1000e65d
#undef str_1000e669
#undef str_1000e67a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006860
 */

undefined4 recovered_10006860(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

undefined4 recovered_10006870(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000f4d0
#define DAT_1000f4d0 (*(int *)(((uintptr_t)pf_module_state + 0x100fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006880
 */

void recovered_10006880(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f4d0 = DAT_1000f4d0 + 1;
  return;
}

#undef DAT_1000f4d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a0
 */

longlong recovered_100068a0(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100032e0((double)param_1);
  return lVar1;
}


#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

uint recovered_100068c0(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004270(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005260((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(byte (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

uint recovered_10006910(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004270(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005260((char *)local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native scope-unwind register ABI; Pooka's Free Software License. */
/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006970(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}



/* Native IA32 nonlocal context and floating-point control state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006980(void *context){
 __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nmovl $-1,24(%eax)\nmovl %eax,%esi\nmovl $1,%eax\ncpuid\nandl $0x3000000,%edx\ncmpl $0x3000000,%edx\njne 1f\nstmxcsr 24(%esi)\n1: fnstcw 28(%esi)\nxorl %eax,%eax\nmovl 0(%esi),%ebx\nmovl 4(%esi),%esi\nret");
}


/* Native IA32 context restore and zero-to-one longjmp normalization.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100069d0(void *context,int value){
 __asm__ volatile("movl 4(%esp),%edx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njne 1f\nmovl $1,%eax\n1: cmpl $-1,24(%edx)\nje 2f\nldmxcsr 24(%edx)\n2: fldcw 28(%edx)\nmovl 0(%edx),%ebx\nmovl 4(%edx),%esi\nmovl 8(%edx),%edi\nmovl 12(%edx),%ebp\nmovl 16(%edx),%esp\njmpl *20(%edx)");
}


#undef DAT_1000ef60
#define DAT_1000ef60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa9fU)))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a10
 */

void recovered_10006a10(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000ef60;
  local_24 = 0x40;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_100020f0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000ef60
#undef local_28
#undef auStackY_d0
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a90
 */

undefined4 recovered_10006a90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa0
 */

void recovered_10006aa0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006ac0();
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}


#undef DAT_1000f4d4
#define DAT_1000f4d4 (*(int *)(((uintptr_t)pf_module_state + 0x1013U)))
#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

void recovered_10006ac0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  recovered_10006f00(in_stack_00000004);
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
  *(int *)(in_ECX + 8) = DAT_1000f4d4;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  DAT_1000f4d4 = in_ECX;
  recovered_10006f50(in_ECX);
  return;
}

#undef DAT_1000f4d4
#undef in_stack_00000004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b00
 */

void * recovered_10006b00(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002130(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100020f0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

void * recovered_10006b30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002130(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100020f0();
  }
  return pvVar1;
}


#undef DAT_1000ef70
#define DAT_1000ef70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaafU)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b60
 */

void recovered_10006b60(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000ef70;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000ef70
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef auStack_1c
#undef local_20

#undef DAT_1000ef80
#define DAT_1000ef80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabfU)))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bf0
 */

void recovered_10006bf0(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000ef80;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000ef80
#undef local_30
#undef auStackY_d0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44

#undef DAT_1000ef90
#define DAT_1000ef90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacfU)))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

void recovered_10006c80(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &DAT_1000ef90;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef DAT_1000ef90
#undef local_28
#undef auStackY_d0
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c

#undef LAB_1000efa0
#define LAB_1000efa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadfU)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined1 * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d10
 */

void recovered_10006d10(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a90;
  local_2c = &LAB_1000efa0;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007100(&local_48);
  recovered_10002180(param_1);
  recovered_10007130(&local_48);
  return;
}

#undef LAB_1000efa0
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef auStack_1c
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da0
 */

undefined4 recovered_10006da0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006db0
 */

uint recovered_10006db0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dd0
 */

void recovered_10006dd0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de0
 */

void recovered_10006de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000f4dc
#define DAT_1000f4dc (*(int *)(((uintptr_t)pf_module_state + 0x101bU)))
#undef DAT_1000f4e0
#define DAT_1000f4e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x101fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

undefined1 * recovered_10006df0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10002130(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1000f4dc = DAT_1000f4dc + 1 + (uint)(DAT_1000f4dc == -1);
  if (DAT_1000f4e0 == (undefined1 *)0x0) {
LAB_10006e6c:
    *(int *)(puVar1 + 0x1c) = DAT_1000f4dc;
    *(undefined1 **)(puVar1 + 0xc) = DAT_1000f4e0;
    DAT_1000f4e0 = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_1000f4e0;
    while (*(int *)(iVar3 + 0x1c) != DAT_1000f4dc) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_10006e6c;
    }
    DAT_1000f4dc = DAT_1000f4dc + 1 + (uint)(DAT_1000f4dc == -1);
  } while( true );
}

#undef DAT_1000f4dc
#undef DAT_1000f4e0

#undef DAT_1000f4e0
#define DAT_1000f4e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x101fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e90
 */

void recovered_10006e90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_1000f4e0;
    if (DAT_1000f4e0 == pointer) {
      puVar2 = &DAT_1000f4e0;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_10006ee4;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_10006ee4:
    recovered_10002180(pointer);
  }
  return;
}

#undef DAT_1000f4e0

#undef DAT_1000f4e0
#define DAT_1000f4e0 (*(int *)(((uintptr_t)pf_module_state + 0x101fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f00
 */

void recovered_10006f00(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000f4e0;
  if (DAT_1000f4e0 != in_ECX && DAT_1000f4e0 != 0) {
    do {
      if (*(int *)(iVar1 + 0x1c) == in_ECX) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        return;
      }
    } while (iVar1 != in_ECX);
  }
  return;
}

#undef DAT_1000f4e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f50
 */

int recovered_10006f50(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x24;
}


#undef DAT_1000f4d4
#define DAT_1000f4d4 (*(void * *)(((uintptr_t)pf_module_state + 0x1013U)))
#undef DAT_1000f4e0
#define DAT_1000f4e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x101fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f60
 */

void recovered_10006f60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000f4d4;
  if (DAT_1000f4d4 != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000f4d4 + 8);
    DAT_1000f4d4 = *(void **)((int)DAT_1000f4d4 + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000f4e0;
      if (DAT_1000f4e0 == pointer) {
        puVar2 = &DAT_1000f4e0;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_10006fd4;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10006fd4:
      recovered_10002180(pointer);
    }
  }
  return;
}

#undef DAT_1000f4d4
#undef DAT_1000f4e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

void recovered_10006ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007030(param_1 + -0x24);
}


#undef DAT_1000f4d4
#define DAT_1000f4d4 (*(int *)(((uintptr_t)pf_module_state + 0x1013U)))
#undef DAT_1000f4d8
#define DAT_1000f4d8 (*(int * *)(((uintptr_t)pf_module_state + 0x1017U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007030
 */

void recovered_10007030(int in_ECX)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  if (DAT_1000f4d8 != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_1000f4d8;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10007a00((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX + 0x10) = in_ECX_01;
        *(undefined4 *)(in_ECX + 0x14) = local_1c;
        *(undefined4 *)(in_ECX + 0x18) = local_18;
        recovered_10007200(in_ECX);
        in_ECX_00 = DAT_1000f4d4;
        if (DAT_1000f4d4 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006a10();
        }
        *(undefined1 *)(DAT_1000f4d4 + 0x20) = 1;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
        *(undefined4 *)(in_ECX_00 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007030(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}

#undef DAT_1000f4d4
#undef DAT_1000f4d8
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000f4d4
#define DAT_1000f4d4 (*(int *)(((uintptr_t)pf_module_state + 0x1013U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070c0
 */

void recovered_100070c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000f4d4;
  if (DAT_1000f4d4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
  *(undefined1 *)(DAT_1000f4d4 + 0x20) = 1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007030(in_ECX);
}

#undef DAT_1000f4d4

#undef DAT_1000f4d8
#define DAT_1000f4d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1017U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007100
 */

void recovered_10007100(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000f4d8;
  DAT_1000f4d8 = param_1;
  return;
}

#undef DAT_1000f4d8

#undef DAT_1000f4d8
#define DAT_1000f4d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1017U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

void recovered_10007130(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000f4d8;
  if (DAT_1000f4d8 == param_1) {
    puVar2 = &DAT_1000f4d8;
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

#undef DAT_1000f4d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007170
 */

void recovered_10007170(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007030(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007190
 */

void recovered_10007190(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}


#undef DAT_1000f4d8
#define DAT_1000f4d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1017U)))
#undef DAT_1000f4e0
#define DAT_1000f4e0 (*(int *)(((uintptr_t)pf_module_state + 0x101fU)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071a0
 */

undefined4 recovered_100071a0(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *extraout_ECX = 0;

  in_ECX = DAT_1000f4e0;
  if (DAT_1000f4e0 != param_1 && DAT_1000f4e0 != 0) {
    do {
      if (*(int *)(in_ECX + 0x1c) == param_1) goto LAB_100071e2;
      in_ECX = *(int *)(in_ECX + 0xc);
    } while ((in_ECX != 0) && (in_ECX != param_1));
  }
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006a10();
  }
LAB_100071e2:
  if (DAT_1000f4d8 != (undefined4 *)0x0) {
    DAT_1000f4d8 = (undefined4 *)*DAT_1000f4d8;
  }
  recovered_10007200(in_ECX);
  if (DAT_1000f4d8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[4];
    do {
      puVar2 = DAT_1000f4d8;
      if (DAT_1000f4d8 == puVar1) {
        DAT_1000f4d8[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[6];
        uVar3 = extraout_ECX[5];
LAB_1000729e:
        puVar2[1] = uVar3;
        recovered_10006970((int)puVar2);
        recovered_100071a0(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_10007a00((int)DAT_1000f4d8,(byte *)*extraout_ECX,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_1000729e;
      }
      DAT_1000f4d8 = (undefined4 *)*puVar2;
    } while (DAT_1000f4d8 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}

#undef DAT_1000f4d8
#undef DAT_1000f4e0
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_1000f4d8
#define DAT_1000f4d8 (*(int * *)(((uintptr_t)pf_module_state + 0x1017U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007200
 */

undefined4 recovered_10007200(int in_ECX)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000f4d8 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_1000f4d8;
      if (DAT_1000f4d8 == piVar1) {
        DAT_1000f4d8[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_1000729e:
        piVar2[1] = iVar3;
        recovered_10006970((int)piVar2);
        recovered_100071a0(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_10007a00((int)DAT_1000f4d8,*(byte **)in_ECX,(undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_1000729e;
      }
      DAT_1000f4d8 = (int *)*piVar2;
    } while (DAT_1000f4d8 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}

#undef DAT_1000f4d8
#undef local_20
#undef local_1c
#undef local_18
#undef iStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072b0
 */

undefined4 recovered_100072b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100071a0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072d0
 */

undefined4 recovered_100072d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072e0
 */

void recovered_100072e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006a10();
}


#undef DAT_1000f2a4
#define DAT_1000f2a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde3U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f0
 */

int recovered_100072f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;

  local_1c = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    puVar6 = *(undefined4 **)(*param_1 + -4);
    bVar7 = puVar6 != (undefined4 *)0x0;
    if (puVar6 != param_3 && bVar7) {
      iVar3 = param_3[1];
      do {
        iVar4 = puVar6[1];
        if ((iVar3 == 0) || (iVar4 == 0)) {
          if (iVar4 == iVar3) goto LAB_100073b0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100073b0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000f2a4) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100073b0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000f2a4
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

void recovered_100073d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100020f0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

undefined4 recovered_100073f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007400
 */

bool recovered_10007400(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007420
 */

bool recovered_10007420(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007460
 */

bool recovered_10007460(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

bool recovered_10007490(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074b0
 */

bool recovered_100074b0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

byte recovered_100074d0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007510
 */

bool recovered_10007510(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10007530(double value) {
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
float recovered_10007620(float value){return (float)recovered_10007530((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007720(long double value){return (long double)recovered_10007530((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10007810(long end,long start){return (double)end-(double)start;}


#undef DAT_1000e4d0
#define DAT_1000e4d0 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000e510
#define DAT_1000e510 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007840
 */

longdouble recovered_10007840(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10003020(param_1);
  if ((longdouble)DAT_1000e4d0 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000e510 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000e4d0
#undef DAT_1000e510

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a0
 */

ulonglong recovered_100078a0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  pbVar7 = param_1;
  if (param_1 == (byte *)0x0) {
    bVar8 = false;
    pbVar7 = (byte *)0x0;
  }
  else {
    while( true ) {
      uVar3 = (uint)*pbVar7;
      if ((4 < uVar3 - 9) && (uVar3 != 0x20)) break;
      pbVar7 = pbVar7 + 1;
    }
    if ((uVar3 == 0x2b) || (uVar3 == 0x2d)) {
      bVar8 = *pbVar7 == 0x2d;
      pbVar7 = pbVar7 + 1;
    }
    else {
      bVar8 = false;
    }
  }
  if (param_3 == 0x10) {
    if ((*pbVar7 == 0x30) && ((pbVar7[1] | 0x20) == 0x78)) {
      local_18 = 0x10;
      pbVar7 = pbVar7 + 2;
      goto LAB_10007953;
    }
  }
  else {
    if (param_3 != 0) {
      local_18 = param_3;
      goto LAB_10007953;
    }
    if (*pbVar7 != 0x30) {
      local_18 = 10;
      goto LAB_10007953;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_18 = 8;
      goto LAB_10007953;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_18 = 0x10;
LAB_10007953:
  iVar4 = 0;
  uVar1 = 0;
  while( true ) {
    iVar6 = (int)(uVar1 >> 0x20);
    uVar5 = (uint)pbVar7[iVar4];
    uVar3 = uVar5 - 0x30;
    if (9 < uVar3) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar3 = uVar5 - 0x57;
      }
      else {
        uVar3 = uVar5 - 0x37;
        if (0x19 < uVar5 - 0x41) {
          uVar3 = 0xffffffff;
        }
      }
    }
    if (((int)uVar3 < 0) || ((int)local_18 <= (int)uVar3)) break;
    uVar1 = (uVar1 & 0xffffffff) * (ulonglong)local_18 + CONCAT44(iVar6 * local_18,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    pbVar7 = pbVar7 + iVar4;
    if (iVar4 == 0) {
      pbVar7 = param_1;
    }
    *param_2 = pbVar7;
  }
  uVar2 = CONCAT44(-(uint)((int)uVar1 != 0) - iVar6,-(int)uVar1);
  if (!bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079e0
 */

ulonglong recovered_100079e0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_100078a0(param_1,param_2,param_3);
  return uVar1;
}


#define local_38 (*(byte * *)(pf_stack_frame + 24))
#define local_34 (*(byte * *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(byte * *)(pf_stack_frame + 52))
#define local_18 (*(byte * (*)[6])(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

undefined4 recovered_10007a00(int in_ECX,byte *in_EDX,undefined2 *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;

  local_2c = 0x10007a15;
  pbVar11 = *(byte **)(in_ECX + 0x1c);
  if (pbVar11 != (byte *)0x0) {
    local_38 = pbVar11 + 1;
    if (*pbVar11 != 0xff) {
      recovered_10007d90((uint)*pbVar11,(int *)&local_38);
    }
    local_30 = (uint)*local_38;
    local_34 = (byte *)0x0;
    if (local_30 != 0xff) {
      bVar8 = 0;
      uVar6 = 0;
      pbVar11 = local_38 + 1;
      do {
        local_38 = pbVar11;
        uVar6 = uVar6 | (*local_38 & 0x7f) << (bVar8 & 0x1f);
        bVar8 = bVar8 + 7;
        pbVar11 = local_38 + 1;
      } while ((char)*local_38 < '\0');
      local_34 = local_38 + 1 + uVar6;
    }
    bVar8 = 0;
    local_38 = local_38 + 2;
    uVar6 = 0;
    pbVar11 = local_38;
    do {
      bVar1 = *pbVar11;
      uVar6 = uVar6 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
      pbVar11 = pbVar11 + 1;
      bVar8 = bVar8 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(in_ECX + 4)) && (0 < (int)uVar6)) {
      local_1c = pbVar11 + uVar6;
      iVar9 = 0;
      do {
        bVar8 = 0;
        uVar6 = 0;
        do {
          bVar1 = *pbVar11;
          uVar6 = uVar6 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
          pbVar11 = pbVar11 + 1;
          bVar8 = bVar8 + 7;
        } while ((char)bVar1 < '\0');
        bVar8 = 0;
        uVar7 = 0;
        do {
          bVar1 = *pbVar11;
          uVar7 = uVar7 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
          pbVar11 = pbVar11 + 1;
          bVar8 = bVar8 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar9 == *(int *)(in_ECX + 4) + -1) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(uint *)(param_3 + 2) = uVar6;
          *(undefined4 *)(param_3 + 4) = 0;
          if (uVar7 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          local_1c = local_1c + (uVar7 - 1);
          bVar16 = local_34 == (byte *)0x0;
          local_28 = local_30 & 0xf;
          bVar8 = (byte)local_28;
          local_24 = 0x1c1dU >> bVar8 ^ 1;
          local_20 = 0;
          goto LAB_10007bb0;
        }
        iVar9 = iVar9 + 1;
      } while (pbVar11 < local_1c);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  return 0;
LAB_10007bb0:
  uVar7 = 0;
  uVar6 = 0;
  do {
    bVar1 = *local_1c;
    uVar7 = uVar7 | (bVar1 & 0x7f) << ((byte)uVar6 & 0x1f);
    local_1c = local_1c + 1;
    uVar6 = uVar6 + 7;
  } while ((char)bVar1 < '\0');
  uVar12 = -1 << ((byte)uVar6 & 0x1f);
  uVar15 = 0;
  uVar10 = 0;
  pbVar11 = local_1c;
  do {
    bVar2 = *pbVar11;
    uVar15 = uVar15 | (bVar2 & 0x7f) << ((byte)uVar10 & 0x1f);
    pbVar11 = pbVar11 + 1;
    uVar10 = uVar10 + 7;
  } while ((char)bVar2 < '\0');
  if (bVar1 < 0x40) {
    uVar12 = 0;
  }
  if (0x1f < uVar6) {
    uVar12 = 0;
  }
  uVar6 = -1 << ((byte)uVar10 & 0x1f);
  if (bVar2 < 0x40) {
    uVar6 = 0;
  }
  if (0x1f < uVar10) {
    uVar6 = 0;
  }
  uVar7 = uVar7 | uVar12;
  if (uVar7 == 0) {
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else if (0 < (int)uVar7) {
    if ((0xc < bVar8 || bVar16) || ((local_24 & 1) != 0)) {
LAB_10007d6e:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar7;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    local_18[0] = local_34 + *(int *)(local_2c + 0x6b67 + local_28 * 4) * uVar7;
    pbVar11 = recovered_10007d90(local_30,(int *)local_18);
    if (pbVar11 == (byte *)0x0) goto LAB_10007d6e;
    bVar17 = in_EDX != (byte *)0x0;
    if ((in_EDX != (byte *)0x0) && (pbVar11 != in_EDX)) {
      iVar9 = *(int *)(pbVar11 + 4);
      pbVar13 = in_EDX;
      do {
        iVar5 = *(int *)(pbVar13 + 4);
        if ((iVar9 == 0) || (iVar5 == 0)) {
          if (iVar5 == iVar9) goto LAB_10007d6e;
        }
        else {
          iVar14 = 0;
          do {
            cVar3 = *(char *)(iVar5 + iVar14);
            cVar4 = *(char *)(iVar9 + iVar14);
            if ((cVar3 == '\0') || (cVar4 == '\0')) {
              if (cVar3 == cVar4) goto LAB_10007d6e;
              break;
            }
            iVar14 = iVar14 + 1;
          } while (cVar3 == cVar4);
        }
        if (*(int *)pbVar13 != local_2c + 0x788f) goto LAB_10007d47;
        pbVar13 = *(byte **)(pbVar13 + 8);
        bVar17 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar11) && (pbVar13 != (byte *)0x0));
    }
    if (bVar17) goto LAB_10007d6e;
  }
LAB_10007d47:
  if ((uVar15 | uVar6) == 0) {
    return 0;
  }
  local_1c = local_1c + (uVar15 | uVar6);
  bVar17 = 0x3e < local_20;
  local_20 = local_20 + 1;
  if (bVar17) {
    return 0;
  }
  goto LAB_10007bb0;
}

#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d90
 */

byte * recovered_10007d90(uint in_ECX,int *in_EDX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ushort *puVar7;
  byte *pbVar8;
  uint uVar9;

  pbVar3 = (byte *)0x0;
  if (in_ECX == 0xff) {
    return (byte *)0x0;
  }
  pbVar8 = (byte *)(in_ECX & 0xf);
  if ((byte *)0xc < pbVar8) {
    return (byte *)0x0;
  }
  puVar1 = (ushort *)*in_EDX;
  switch((uintptr_t)(pbVar8)) {
  case 0x0:
  case 0x3:
  case 0xb:
    pbVar8 = *(byte **)puVar1;
    puVar7 = puVar1 + 2;
    goto LAB_10007e75;
  case 0x1:
    bVar5 = 0;
    pbVar8 = (byte *)0x0;
    puVar7 = puVar1;
    do {
      *in_EDX = (int)puVar7 + 1;
      uVar2 = *puVar7;
      pbVar8 = (byte *)((uint)pbVar8 | ((byte)uVar2 & 0x7f) << (bVar5 & 0x1f));
      bVar5 = bVar5 + 7;
      puVar7 = (ushort *)((int)puVar7 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 0x2:
    pbVar8 = (byte *)(uint)*puVar1;
    puVar7 = puVar1 + 1;
    goto LAB_10007e75;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_10007dcf_caseD_5;
  case 0x9:
    uVar9 = 0;
    uVar6 = 0;
    puVar7 = puVar1;
    do {
      *in_EDX = (int)puVar7 + 1;
      bVar5 = (byte)*puVar7;
      uVar9 = uVar9 | (bVar5 & 0x7f) << ((byte)uVar6 & 0x1f);
      uVar6 = uVar6 + 7;
      puVar7 = (ushort *)((int)puVar7 + 1);
    } while ((char)bVar5 < '\0');
    uVar4 = -1 << ((byte)uVar6 & 0x1f);
    if (bVar5 < 0x40) {
      uVar4 = 0;
    }
    if (0x1f < uVar6) {
      uVar4 = 0;
    }
    pbVar8 = (byte *)(uVar9 | uVar4);
    break;
  case 0xa:
    pbVar8 = (byte *)((uint)(-1 < (char)*(byte *)((int)puVar1 + 1)) * 0x10000 + -0x10000 +
                     (uint)*puVar1);
    puVar7 = puVar1 + 1;
LAB_10007e75:
    *in_EDX = (int)puVar7;
  }
  pbVar3 = pbVar8;
  if ((in_ECX & 0x70) != 0) {
    if ((in_ECX & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar3 = pbVar8 + (int)puVar1;
  }
  if (((char)in_ECX < '\0') && (pbVar3 != (byte *)0x0)) {
    pbVar3 = *(byte **)pbVar3;
  }
switchD_10007dcf_caseD_5:
  return pbVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1000f008
#define DAT_1000f008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb47U)))
#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1147U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#define local_2c (*(int *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007ee0(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;

  iVar7 = 0x49;
  puVar5 = &DAT_1000f4e4;
  puVar6 = &DAT_1000f008;
  do {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = *puVar6;
    bVar2 = false;
    uVar3 = 0;
    if (_DAT_00280800 == 0x50414d57) {
      if (_DAT_00280804 == 0) {
LAB_10007f10:
        uVar3 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = false;
        uVar3 = 0;
        if (0xb < _DAT_00280808) {
          bVar2 = false;
          uVar3 = 0;
          if (0x207 < _DAT_00280808) {
            if (_DAT_00280a04 == (code *)0x0) goto LAB_10007f10;
            iVar4 = (*_DAT_00280a04)(puVar6[-1],&local_2c);
            bVar2 = local_2c == 1 && iVar4 != 0;
            uVar3 = local_28;
          }
        }
      }
    }
    if (0xffffff < uVar3) {
      uVar3 = uVar1;
    }
    if (!bVar2) {
      uVar3 = uVar1;
    }
    *puVar5 = uVar3;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 2;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      DAT_1000f608 = 1;
      return;
    }
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_1000f008
#undef DAT_1000f4e4
#undef DAT_1000f608
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a04
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000f008
#define DAT_1000f008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb47U)))
#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008000
 */

undefined4 recovered_10008000(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 *puVar2;

  uVar1 = 0;
  if (param_1 < 0x49) {
    puVar2 = &DAT_1000f008 + param_1 * 2;
    if (DAT_1000f608 != '\0') {
      puVar2 = &DAT_1000f4e4 + param_1;
    }
    uVar1 = *puVar2;
  }
  return uVar1;
}

#undef DAT_1000f008
#undef DAT_1000f4e4
#undef DAT_1000f608

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008040
 */

undefined4
recovered_10008040(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  uint uVar1;
  int iVar2;

  if ((((param_1 == (int *)0x0) || (*(undefined1 *)(param_1 + 9) = 0, param_2 == 0)) ||
      (((int)param_6 < 1 || ((int)param_5 < 1 || (int)(param_3 | param_4) < 0)) ||
       *(int *)(param_2 + 0x2c) == 0)) ||
     (uVar1 = *(uint *)(param_2 + 4), uVar1 < param_3 + param_5)) {
    return 0;
  }
  if (*(uint *)(param_2 + 8) < param_6 + param_4) {
    return 0;
  }
  iVar2 = (int)((ulonglong)param_6 * (ulonglong)param_5 >> 0x20);
  if (iVar2 != 0 ||
      (uint)-iVar2 < (uint)(0x3fffffff < (uint)((ulonglong)param_6 * (ulonglong)param_5))) {
    return 0;
  }
  if (uVar1 >> 0x1e != 0 || -(uVar1 >> 0x1e) < (uint)(*(uint *)(param_2 + 0xc) < uVar1 << 2)) {
    return 0;
  }
  count = param_5 * 4;
  if (count * param_6 != param_1[1]) {
    iVar2 = recovered_100081b0();
    if (iVar2 == 0) {
      return 0;
    }
    *param_1 = iVar2;
    param_1[1] = count * param_6;
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = *(int *)(param_2 + 4);
  param_1[7] = *(int *)(param_2 + 8);
  param_1[8] = *(int *)(param_2 + 0xc);
  iVar2 = 0;
  do {
    recovered_10002220((void *)(*param_1 + iVar2),
                       (void *)(*(int *)(param_2 + 0xc) * param_4 + *(int *)(param_2 + 0x2c) +
                               param_3 * 4),count);
    param_4 = param_4 + 1;
    iVar2 = iVar2 + count;
    param_6 = param_6 - 1;
  } while (param_6 != 0);
  *(undefined1 *)(param_1 + 9) = 1;
  return CONCAT31((int3)(count >> 8),1);
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280854
#define _DAT_00280854 (*(code * *)(0x280854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100081b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && (_DAT_00280854 != (code *)0x0)))) {
    uVar1 = (*_DAT_00280854)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008200
 */

undefined4 recovered_10008200(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      return 0;
    }
    if ((char)param_1[9] == '\0') {
      return 0;
    }
    if ((((*(int *)(param_2 + 0x2c) != 0) && (*(int *)(param_2 + 4) == param_1[6])) &&
        (*(int *)(param_2 + 8) == param_1[7])) && (*(int *)(param_2 + 0xc) == param_1[8])) {
      iVar6 = param_1[5];
      if (iVar6 < 1) {
        return CONCAT31((int3)((uint)*(int *)(param_2 + 0xc) >> 8),1);
      }
      iVar5 = param_1[3];
      iVar1 = param_1[2];
      iVar2 = param_1[4];
      iVar4 = 0;
      do {
        pvVar3 = recovered_10002220((void *)(*(int *)(param_2 + 0xc) * iVar5 +
                                             *(int *)(param_2 + 0x2c) + iVar1 * 4),
                                    (void *)(*param_1 + iVar4),iVar2 * 4);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + iVar2 * 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return CONCAT31((int3)((uint)pvVar3 >> 8),1);
    }
  }
  return 0;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100082d0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
      (*_DAT_00280850)(*param_1);
    }
    recovered_100024b0(param_1,0,0x28);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008340
 */

int recovered_10008340(int *param_1,int param_2)

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
      iVar2 = 0;
      iVar1 = 0;
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
 * Address: 0x10008380
 */

void recovered_10008380(int param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6,
                       int *param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  if (param_7 != (int *)0x0) {
    recovered_100024b0(param_7,0,0xbc);
    iVar1 = param_3 + -2;
    if (param_5 == (uint *)0x0) {
      iVar1 = param_3;
    }
    *(bool *)((int)param_7 + 0x11) = param_6 != (uint *)0x0;
    iVar3 = param_4 + -2;
    if (param_6 == (uint *)0x0) {
      iVar3 = param_4;
    }
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    bVar4 = param_5 == (uint *)0x0;
    *(bool *)(param_7 + 4) = !bVar4;
    iVar2 = param_1 + 2;
    if (bVar4) {
      iVar2 = param_1;
    }
    *param_7 = iVar2;
    param_7[1] = param_2;
    param_7[2] = iVar1;
    param_7[3] = iVar3;
    if (!bVar4) {
      iVar1 = -0xc;
      if (param_6 == (uint *)0x0) {
        iVar1 = 0;
      }
      iVar3 = 0;
      if (0 < iVar1 + param_4) {
        iVar3 = iVar1 + param_4;
      }
      recovered_10008480(param_1,param_2,0xc,iVar3,0,param_5,param_7 + 5);
    }
    if (param_6 != (uint *)0x0) {
      iVar1 = 0xc;
      if (param_5 == (uint *)0x0) {
        iVar1 = 0;
      }
      iVar3 = 0;
      if (0 < param_3 - iVar1) {
        iVar3 = param_3 - iVar1;
      }
      recovered_10008480(param_1 + iVar1,param_2 + -0xc + param_4,iVar3,0xc,1,param_6,param_7 + 0x1a
                        );
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008480
 */

void recovered_10008480(int in_ECX,int in_EDX,int param_3,int param_4,int param_5,uint *param_6,
                       int *param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;

  iVar3 = param_4;
  iVar2 = in_EDX;
  if (param_5 == 1) {
    iVar3 = param_3;
    iVar2 = in_ECX;
  }
  uVar8 = *param_6;
  uVar12 = param_6[1];
  if ((int)uVar12 < (int)uVar8) {
    uVar8 = 0;
    uVar12 = 0;
  }
  uVar6 = param_6[2];
  uVar7 = uVar6;
  if ((int)uVar12 < (int)uVar6) {
    uVar7 = uVar12;
  }
  if ((int)uVar6 < (int)uVar8) {
    uVar7 = uVar8;
  }
  uVar6 = 1;
  if (1 < (int)param_6[3]) {
    uVar6 = param_6[3];
  }
  uVar13 = uVar12 - uVar8;
  uVar12 = (((int)uVar12 >> 0x1f) - ((int)uVar8 >> 0x1f)) - (uint)(uVar12 < uVar8);
  if (param_7 != (int *)0x0) {
    iVar4 = iVar2 + 0x10;
    uVar5 = iVar3 - 0x20;
    uVar9 = (uint)(param_5 != 1);
    recovered_100024b0(param_7,0,0x54);
    *param_7 = param_5;
    param_7[1] = in_ECX;
    param_7[2] = in_EDX;
    param_7[3] = param_3;
    param_7[4] = param_4;
    param_7[9] = in_ECX;
    param_7[10] = in_EDX;
    param_7[0xb] = param_3;
    param_7[0xc] = param_4;
    param_7[0xd] = in_ECX;
    param_7[0xe] = in_EDX;
    param_7[0xf] = param_3;
    param_7[0x10] = param_4;
    param_7[5] = in_ECX;
    param_7[6] = in_EDX;
    param_7[7] = param_3;
    param_7[8] = param_4;
    param_7[uVar9 + 9] = iVar2;
    param_7[uVar9 + 0xb] = 0xe;
    param_7[uVar9 + 0xd] = iVar3 + -0xe + iVar2;
    uVar10 = 0;
    if (0 < (int)uVar5) {
      uVar10 = uVar5;
    }
    param_7[uVar9 + 0xf] = 0xe;
    param_7[uVar9 + 5] = iVar4;
    param_7[uVar9 + 7] = uVar10;
    param_7[0x14] = param_7[8];
    param_7[0x13] = param_7[7];
    param_7[0x12] = param_7[6];
    param_7[0x11] = param_7[5];
    if (!(iVar3 < 0x21 ||
         (SBORROW4(0,uVar12) != SBORROW4(-uVar12,(uint)(uVar13 != 0))) ==
         (int)(-uVar12 - (uint)(uVar13 != 0)) < 0)) {
      uVar14 = recovered_10001d70((uint)((ulonglong)uVar6 * (ulonglong)uVar10),
                                  (uint)((ulonglong)uVar6 * (ulonglong)uVar10 >> 0x20),
                                  uVar6 + uVar13,uVar12 + CARRY4(uVar6,uVar13));
      uVar6 = (uint)uVar14;
      if (0x7ffffffe < uVar6) {
        uVar6 = 0x7fffffff;
      }
      if ((int)((ulonglong)uVar14 >> 0x20) != 0) {
        uVar6 = 0x7fffffff;
      }
      uVar11 = 0x12;
      if (0x12 < uVar6) {
        uVar11 = uVar6;
      }
      if (uVar5 < uVar11) {
        uVar11 = uVar10;
      }
      if (uVar11 < uVar5) {
        uVar10 = uVar10 - uVar11;
        lVar1 = (ulonglong)(uVar7 - uVar8) * (ulonglong)uVar10;
        uVar14 = recovered_10001ed0((uint)lVar1,
                                    uVar10 * ((((int)uVar7 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                                             (uint)(uVar7 < uVar8)) +
                                    ((int)uVar10 >> 0x1f) * (uVar7 - uVar8) +
                                    (int)((ulonglong)lVar1 >> 0x20),uVar13,uVar12);
        iVar4 = iVar4 + (int)uVar14;
      }
      uVar5 = uVar11;
    }
    param_7[uVar9 + 0x11] = iVar4;
    param_7[uVar9 + 0x13] = uVar5;
  }
  return;
}


#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086f0
 */

uint recovered_100086f0(int *param_1,uint *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;

  if (param_2 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = *param_2;
    uVar9 = param_2[1];
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = 0;
      uVar9 = 0;
    }
    uVar6 = uVar8;
    if ((int)uVar8 < (int)uVar9 && param_1 != (int *)0x0) {
      piVar3 = param_1 + 0x14;
      piVar1 = param_1 + 8;
      if (*param_1 == 1) {
        piVar3 = param_1 + 0x13;
        piVar1 = param_1 + 7;
      }
      uVar2 = *piVar1 - *piVar3;
      if (uVar2 != 0 && *piVar3 <= *piVar1) {
        uVar6 = param_1[(*param_1 != 1) + 5];
        uVar4 = param_3 - (param_4 + uVar6);
        iVar7 = (((int)param_3 >> 0x1f) -
                (((int)param_4 >> 0x1f) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(param_4,uVar6))) -
                (uint)(param_3 < param_4 + uVar6);
        local_24 = 0;
        uVar6 = (uint)(uVar2 < uVar4);
        uVar5 = uVar2;
        if ((SBORROW4(0,iVar7) != SBORROW4(-iVar7,uVar6)) == (int)(-iVar7 - uVar6) < 0) {
          bVar10 = iVar7 < 0;
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          uVar5 = uVar4;
          if (bVar10) {
            uVar5 = 0;
          }
          local_24 = iVar7;
        }
        lVar11 = (ulonglong)uVar5 * (ulonglong)(uVar9 - uVar8);
        lVar11 = recovered_10001ed0((uint)lVar11,
                                    (uVar9 - uVar8) * local_24 +
                                    ((((int)uVar9 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                                    (uint)(uVar9 < uVar8)) * uVar5 +
                                    (int)((ulonglong)lVar11 >> 0x20),uVar2,0);
        uVar2 = (uint)(lVar11 + (int)uVar8);
        iVar7 = (int)((ulonglong)(lVar11 + (int)uVar8) >> 0x20);
        uVar6 = 0x80000000;
        if (((SBORROW4(iVar7,-1) != SBORROW4(iVar7 + 1,(uint)(uVar2 < 0x80000000))) ==
             (int)((iVar7 + 1) - (uint)(uVar2 < 0x80000000)) < 0) &&
           (uVar6 = 0x7fffffff,
           (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(0x7fffffff < uVar2))) ==
           (int)(-iVar7 - (uint)(0x7fffffff < uVar2)) < 0)) {
          if ((int)uVar2 <= (int)uVar9) {
            uVar9 = uVar2;
          }
          if ((int)uVar2 < (int)uVar8) {
            uVar9 = uVar8;
          }
          uVar6 = uVar9;
        }
      }
    }
  }
  return uVar6;
}

#undef local_24

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808bc
#define DAT_002808bc (*(uint8_t *)(0x2808bcU))
#undef DAT_002808c0
#define DAT_002808c0 (*(uint8_t *)(0x2808c0U))
#undef DAT_00280a00
#define DAT_00280a00 (*(uint8_t *)(0x280a00U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1000f008
#define DAT_1000f008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb47U)))
#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
#undef PTR_str_1000e6a9_1000f004
#define PTR_str_1000e6a9_1000f004 (*(char * *)(((uintptr_t)pf_module_state + 0xb43U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808bc
#define _DAT_002808bc (*(code * *)(0x2808bcU))
#undef _DAT_002808c0
#define _DAT_002808c0 (*(code * *)(0x2808c0U))
#undef _DAT_00280a00
#define _DAT_00280a00 (*(code * *)(0x280a00U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef str_1000ef46
#define str_1000ef46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa85U)))
#define local_3f34 (*(uint *)(pf_stack_frame + 28))
#define local_3f30 (*(char * *)(pf_stack_frame + 32))
#define local_3f2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_3f28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_3f24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_3f20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_3f1c (*(undefined4 *)(pf_stack_frame + 52))
#define local_3f18 (*(undefined4 *)(pf_stack_frame + 56))
#define local_3f14 (*(int *)(pf_stack_frame + 60))
#define local_3f10 (*(uint *)(pf_stack_frame + 64))
#define local_3f0c (*(undefined4 *)(pf_stack_frame + 68))
#define local_3f08 (*(undefined4 *)(pf_stack_frame + 72))
#define local_3f04 (*(undefined4 *)(pf_stack_frame + 76))
#define local_3f00 (*(undefined4 *)(pf_stack_frame + 80))
#define local_3d24 (*(int (*)[3913])(pf_stack_frame + 556))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_10008840(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[16240] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined **ppuVar10;
  int *piVar11;

  local_3f2c = 0;
  local_3f28 = 0;
  local_3f24 = 0;
  local_3f20 = 0;
  local_3f1c = 0;
  local_3f18 = 0;
  if (DAT_1000f608 != '\0') goto LAB_10008bae;
  iVar7 = 0x49;
  ppuVar10 = &PTR_str_1000e6a9_1000f004;
  do {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x207 < _DAT_00280808 && (_DAT_00280a04 != (code *)0x0)) &&
        (iVar2 = (*_DAT_00280a04)(*ppuVar10,&local_3f2c), iVar2 != 0)))) goto LAB_10008aa2;
    ppuVar10 = ppuVar10 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = -1;
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
      ((((_DAT_00280808 < 0xc ||
         (((((_DAT_00280808 < 0xc0 || (_DAT_002808bc == (code *)0x0)) ||
            (iVar7 = (*_DAT_002808bc)(), iVar7 < 0)) ||
           ((_DAT_00280800 != 0x50414d57 || (_DAT_00280804 == 0)))) || (_DAT_00280808 < 0xc)))) ||
        ((_DAT_00280808 < 0x204 || (_DAT_00280a00 == (code *)0x0)))) ||
       (iVar2 = (*_DAT_00280a00)(iVar7,str_1000ef46), iVar2 == 0)))) &&
     ((((local_3f34 = 0, _DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)) &&
       (0xb < _DAT_00280808)) &&
      (((0xc3 < _DAT_00280808 && (_DAT_002808c0 != (code *)0x0)) &&
       (iVar2 = (*_DAT_002808c0)(&local_3f14,0x20,&local_3f34), iVar2 != 0)))))) {
    if (local_3f34 < 0x21) {
      if (local_3f34 == 0) goto LAB_10008aa2;
    }
    else {
      local_3f34 = 0x20;
    }
    uVar8 = 0;
    piVar11 = local_3d24;
    local_3f30 = str_1000ef46;
    uVar3 = local_3f34;
    do {
      if (((*piVar11 != iVar7) && (_DAT_00280800 == 0x50414d57)) &&
         ((_DAT_00280804 != 0 &&
          (((0xb < _DAT_00280808 && (0x203 < _DAT_00280808)) && (_DAT_00280a00 != (code *)0x0))))))
      {
        iVar2 = (*_DAT_00280a00)(*piVar11,local_3f30);
        if (iVar2 != 0) break;
        uVar3 = local_3f34;
      }
      uVar8 = uVar8 + 1;
      piVar11 = piVar11 + 0x7e;
    } while (uVar8 < uVar3);
  }
LAB_10008aa2:
  iVar7 = 0x49;
  puVar6 = &DAT_1000f4e4;
  puVar9 = &DAT_1000f008;
  do {
    local_3f14 = 0;
    local_3f10 = 0;
    local_3f0c = 0;
    local_3f08 = 0;
    local_3f04 = 0;
    local_3f00 = 0;
    local_3f30 = (char *)*puVar9;
    bVar1 = false;
    if (_DAT_00280800 == 0x50414d57) {
      if (_DAT_00280804 == 0) {
LAB_10008ac0:
        bVar1 = false;
      }
      else {
        bVar1 = false;
        if ((0xb < _DAT_00280808) && (bVar1 = false, 0x207 < _DAT_00280808)) {
          if (_DAT_00280a04 == (code *)0x0) goto LAB_10008ac0;
          iVar2 = (*_DAT_00280a04)(puVar9[-1],&local_3f14);
          bVar1 = local_3f14 == 1 && iVar2 != 0;
        }
      }
    }
    pcVar4 = (char *)local_3f10;
    if (0xffffff < local_3f10) {
      pcVar4 = local_3f30;
    }
    if (!bVar1) {
      pcVar4 = local_3f30;
    }
    *puVar6 = (uint)pcVar4;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  DAT_1000f608 = '\x01';
LAB_10008bae:
  recovered_100024b0(param_1,0,0x34);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_3 << 2;
  uVar5 = 0xf6f6f6;
  if (DAT_1000f608 != '\0') {
    uVar5 = DAT_1000f4e4;
  }
  param_1[4] = uVar5;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  return param_1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808bc
#undef DAT_002808c0
#undef DAT_00280a00
#undef DAT_00280a04
#undef DAT_1000f008
#undef DAT_1000f4e4
#undef DAT_1000f608
#undef PTR_str_1000e6a9_1000f004
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808bc
#undef _DAT_002808c0
#undef _DAT_00280a00
#undef _DAT_00280a04
#undef str_1000ef46
#undef local_3f34
#undef local_3f30
#undef local_3f2c
#undef local_3f28
#undef local_3f24
#undef local_3f20
#undef local_3f1c
#undef local_3f18
#undef local_3f14
#undef local_3f10
#undef local_3f0c
#undef local_3f08
#undef local_3f04
#undef local_3f00
#undef local_3d24

#define uStack0000001c (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c20
 */

void recovered_10008c20(undefined4 *param_1,undefined4 param_2,uint in_stack_0000003c)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  uStack0000001c = 100;
  if (in_stack_0000003c < 100) {
    uStack0000001c = in_stack_0000003c;
  }
  puVar2 = &param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef uStack0000001c

#define uStack00000020 (*(uint *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c60
 */

void recovered_10008c60(undefined4 *param_1,undefined4 param_2,uint in_stack_0000003c)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  uStack00000020 = 100;
  if (in_stack_0000003c < 100) {
    uStack00000020 = in_stack_0000003c;
  }
  puVar2 = &param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef uStack00000020

#define iStack00000024 (*(int *)(pf_stack_frame + 68))
#define uStack00000028 (*(uint *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ca0
 */

void recovered_10008ca0(undefined4 *param_1,undefined4 param_2,int in_stack_0000003c,
                       uint in_stack_00000040)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  iStack00000024 = -1;
  if (in_stack_0000003c + 1U < 5) {
    iStack00000024 = in_stack_0000003c;
  }
  uStack00000028 = 100;
  if (in_stack_00000040 < 100) {
    uStack00000028 = in_stack_00000040;
  }
  puVar2 = &param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef iStack00000024
#undef uStack00000028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cf0
 */

void recovered_10008cf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d50
 */

void recovered_10008d50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008db0
 */

void recovered_10008db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 100;
  if (param_15 < 100) {
    uVar1 = param_15;
  }
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 2;
  param_1[8] = uVar1;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e20
 */

void recovered_10008e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 100;
  if (param_15 < 100) {
    uVar1 = param_15;
  }
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 3;
  param_1[8] = uVar1;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_002808a0
#define DAT_002808a0 (*(uint8_t *)(0x2808a0U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_002808a0
#define _DAT_002808a0 (*(code * *)(0x2808a0U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
#define local_64 (*(uint *)(pf_stack_frame + 28))
#define local_5c (*(uint *)(pf_stack_frame + 36))
#define local_50 (*(uint *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10008e90(int *param_1,int *param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  longlong lVar24;
  undefined8 uVar25;

  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  uVar10 = param_2[1];
  if (uVar10 == 0) {
    return 0;
  }
  uVar12 = param_2[2];
  if (uVar12 == 0) {
    return 0;
  }
  iVar11 = *param_2;
  local_50 = param_2[3];
  iVar9 = param_2[4];
  uVar21 = param_2[5];
  uVar15 = param_2[6];
  iVar1 = param_2[7];
  uVar2 = param_2[8];
  puVar3 = (undefined *)param_2[9];
  puVar4 = (undefined *)param_2[10];
  puVar5 = (undefined *)param_2[0xb];
  uVar6 = param_2[0xc];
  if ((uint)((ulonglong)uVar12 * (ulonglong)uVar10 >> 0x20) <
      (uint)((uint)((ulonglong)uVar12 * (ulonglong)uVar10) < 0x40000000)) {
LAB_1000918b:
    uVar16 = uVar12;
    uVar19 = uVar10;
    if (local_50 == 0) goto LAB_10009196;
  }
  else {
    if (uVar10 < uVar12) {
      lVar24 = recovered_10001d70((uint)((ulonglong)uVar12 * 0x3fffffff),
                                  (uint)((ulonglong)uVar12 * 0x3fffffff >> 0x20),uVar10,0);
      uVar7 = (uint)((ulonglong)lVar24 >> 0x20);
      uVar19 = 0;
      uVar16 = 0x40000000;
      do {
        local_5c = uVar16;
        uVar20 = uVar19;
        uVar19 = local_5c << 0x1e | uVar20 >> 2;
        uVar16 = local_5c >> 2;
      } while (uVar7 < local_5c || uVar7 - local_5c < (uint)((uint)lVar24 < uVar20));
      uVar16 = 0;
      if (uVar20 != 0 || local_5c != 0) {
        uVar16 = 0;
        uVar19 = 0;
        do {
          local_64 = (uint)((ulonglong)lVar24 >> 0x20);
          uVar7 = uVar19 << 0x1f | uVar16 >> 1;
          uVar17 = uVar16 + uVar20;
          uVar16 = uVar19 + local_5c + (uint)CARRY4(uVar16,uVar20);
          bVar22 = local_64 < uVar16;
          bVar23 = local_64 - uVar16 < (uint)((uint)lVar24 < uVar17);
          if (bVar22 || bVar23) {
            uVar16 = 0;
            uVar17 = 0;
          }
          uVar18 = uVar20;
          uVar13 = local_5c;
          if (bVar22 || bVar23) {
            uVar13 = 0;
            uVar18 = 0;
          }
          lVar24 = lVar24 - CONCAT44(uVar16,uVar17);
          uVar16 = uVar18 + uVar7;
          uVar19 = (uVar19 >> 1) + uVar13 + (uint)CARRY4(uVar18,uVar7);
          bVar23 = 3 < uVar20;
          bVar22 = local_5c != 0;
          uVar7 = -local_5c;
          uVar20 = local_5c << 0x1e | uVar20 >> 2;
          local_5c = local_5c >> 2;
        } while (bVar22 || uVar7 < bVar23);
      }
      uVar16 = uVar16 + (uVar16 == 0);
      uVar25 = recovered_10001d70((uint)((ulonglong)uVar16 * (ulonglong)uVar10),
                                  (uint)((ulonglong)uVar16 * (ulonglong)uVar10 >> 0x20),uVar12,0);
      uVar19 = (int)uVar25 + (uint)((int)uVar25 == 0);
    }
    else {
      lVar24 = recovered_10001d70((uint)((ulonglong)uVar10 * 0x3fffffff),
                                  (uint)((ulonglong)uVar10 * 0x3fffffff >> 0x20),uVar12,0);
      uVar7 = (uint)((ulonglong)lVar24 >> 0x20);
      uVar19 = 0;
      uVar16 = 0x40000000;
      do {
        local_5c = uVar16;
        uVar20 = uVar19;
        uVar19 = local_5c << 0x1e | uVar20 >> 2;
        uVar16 = local_5c >> 2;
      } while (uVar7 < local_5c || uVar7 - local_5c < (uint)((uint)lVar24 < uVar20));
      uVar19 = 0;
      if (uVar20 != 0 || local_5c != 0) {
        uVar19 = 0;
        uVar16 = 0;
        do {
          local_64 = (uint)((ulonglong)lVar24 >> 0x20);
          uVar7 = uVar16 << 0x1f | uVar19 >> 1;
          uVar17 = uVar19 + uVar20;
          uVar19 = uVar16 + local_5c + (uint)CARRY4(uVar19,uVar20);
          bVar22 = local_64 < uVar19;
          bVar23 = local_64 - uVar19 < (uint)((uint)lVar24 < uVar17);
          if (bVar22 || bVar23) {
            uVar19 = 0;
            uVar17 = 0;
          }
          uVar18 = uVar20;
          uVar13 = local_5c;
          if (bVar22 || bVar23) {
            uVar13 = 0;
            uVar18 = 0;
          }
          lVar24 = lVar24 - CONCAT44(uVar19,uVar17);
          uVar19 = uVar18 + uVar7;
          uVar16 = (uVar16 >> 1) + uVar13 + (uint)CARRY4(uVar18,uVar7);
          bVar23 = 3 < uVar20;
          bVar22 = local_5c != 0;
          uVar7 = -local_5c;
          uVar20 = local_5c << 0x1e | uVar20 >> 2;
          local_5c = local_5c >> 2;
        } while (bVar22 || uVar7 < bVar23);
      }
      uVar19 = uVar19 + (uVar19 == 0);
      uVar25 = recovered_10001d70((uint)((ulonglong)uVar19 * (ulonglong)uVar12),
                                  (uint)((ulonglong)uVar19 * (ulonglong)uVar12 >> 0x20),uVar10,0);
      uVar16 = (int)uVar25 + (uint)((int)uVar25 == 0);
    }
    if ((uint)((uint)((ulonglong)uVar19 * (ulonglong)uVar16) < 0x40000000) <=
        (uint)((ulonglong)uVar19 * (ulonglong)uVar16 >> 0x20)) {
      if (uVar19 < uVar16) {
        uVar16 = (uint)(0x3fffffff / (ulonglong)uVar19);
      }
      else {
        uVar19 = (uint)(0x3fffffff / (ulonglong)uVar16);
      }
    }
    if (uVar19 == uVar10) {
      if (uVar16 == uVar12) goto LAB_1000918b;
    }
LAB_10009196:
    local_50 = uVar19 * 4;
  }
  if (uVar16 == 0) {
    return 0;
  }
  if (uVar19 + 0xc0000000 < 0xc0000001) {
    return 0;
  }
  iVar14 = (int)((ulonglong)uVar19 * (ulonglong)uVar16 >> 0x20);
  if (iVar14 != 0 ||
      (uint)-iVar14 < (uint)(0x3fffffff < (uint)((ulonglong)uVar19 * (ulonglong)uVar16))) {
    return 0;
  }
  uVar10 = local_50;
  if (local_50 == 0) {
    uVar10 = uVar19 * 4;
  }
  if (uVar10 < uVar19 * 4) {
    return 0;
  }
  iVar14 = (int)((ulonglong)uVar10 * (ulonglong)uVar16);
  if (((int)((ulonglong)uVar10 * (ulonglong)uVar16 >> 0x20) == 0) &&
     (recovered_100024b0(param_1,0,0x340), _DAT_00280800 == 0x50414d57)) {
    if (_DAT_00280804 == 0) {
      return 0;
    }
    if (_DAT_00280808 < 0xc) {
      return 0;
    }
    if (_DAT_00280808 < 0xa4) {
      return 0;
    }
    if (_DAT_002808a0 == (code *)0x0) {
      return 0;
    }
    iVar8 = (*_DAT_002808a0)(iVar11,uVar19,uVar16);
    if (iVar8 == 0) {
      return 0;
    }
    *param_1 = iVar8;
    param_1[1] = uVar19;
    param_1[2] = uVar16;
    param_1[3] = local_50;
    param_1[4] = iVar9;
    uVar10 = 100;
    if (uVar21 < 100) {
      uVar10 = uVar21;
    }
    uVar12 = 0xf;
    if (uVar21 != 0xffffffff) {
      uVar12 = uVar10;
    }
    param_1[5] = uVar12;
    uVar10 = 100;
    if (uVar15 < 100) {
      uVar10 = uVar15;
    }
    uVar12 = 0;
    if (uVar15 != 0xffffffff) {
      uVar12 = uVar10;
    }
    param_1[6] = uVar12;
    iVar9 = -1;
    if (iVar1 + 1U < 5) {
      iVar9 = iVar1;
    }
    param_1[7] = iVar9;
    uVar10 = 100;
    if (uVar2 < 100) {
      uVar10 = uVar2;
    }
    param_1[8] = uVar10;
    param_1[0xc] = iVar11;
    if ((uVar6 & 1) == 0) {
LAB_10009326:
      if ((puVar3 != (undefined *)0x0 || puVar4 != (undefined *)0x0) || puVar5 != (undefined *)0x0)
      {
        recovered_100094f0(param_1,puVar3,puVar4,puVar5);
      }
      if ((uVar21 & uVar15) != 0xffffffff) {
        recovered_10009580(param_1,param_1[5],param_1[6]);
      }
      uVar10 = param_1[7];
      if ((uVar10 != 0xffffffff) && (*param_1 != 0)) {
        uVar12 = 0xffffffff;
        if (uVar10 < 4) {
          uVar12 = uVar10;
        }
        uVar21 = 100;
        if ((uint)param_1[8] < 100) {
          uVar21 = param_1[8];
        }
        uVar15 = 0;
        if (uVar10 < 4) {
          uVar10 = param_1[2];
          if ((uint)param_1[1] < (uint)param_1[2]) {
            uVar10 = param_1[1];
          }
          uVar15 = (uVar10 * uVar21 + 0x32) / 100;
        }
        if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
            ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))) &&
           (iVar11 = (*_DAT_00280964)(*param_1,uVar12,uVar15), iVar11 != 0)) {
          param_1[7] = uVar12;
          param_1[8] = uVar21;
        }
      }
      return iVar8;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
      iVar11 = (*_DAT_0028084c)(iVar14);
      param_1[0xb] = iVar11;
      if (iVar11 != 0) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
        param_1[10] = iVar14;
        goto LAB_10009326;
      }
    }
    else {
      param_1[0xb] = 0;
    }
    recovered_100094a0();
    recovered_100024b0(param_1,0,0x340);
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_002808a0
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_002808a0
#undef _DAT_00280964
#undef local_64
#undef local_5c
#undef local_50

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808a8
#define DAT_002808a8 (*(uint8_t *)(0x2808a8U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808a8
#define _DAT_002808a8 (*(code * *)(0x2808a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100094a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xab < _DAT_00280808 && (_DAT_002808a8 != (code *)0x0)))) {
    (*_DAT_002808a8)();
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808a8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808a8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808ec
#define DAT_002808ec (*(uint8_t *)(0x2808ecU))
#undef DAT_1000e5bb
#define DAT_1000e5bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808ec
#define _DAT_002808ec (*(code * *)(0x2808ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100094f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100094f0(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_1000e5bb;
    }
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_1000e5bb;
    }
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_1000e5bb;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0xef < _DAT_00280808 && (_DAT_002808ec != (code *)0x0)))) {
      uVar1 = (*_DAT_002808ec)(*param_1,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808ec
#undef DAT_1000e5bb
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808ec

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280960
#define _DAT_00280960 (*(code * *)(0x280960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009580(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar3 = 100;
    if (param_3 < 100) {
      uVar3 = param_3;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x163 < _DAT_00280808 && (_DAT_00280960 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280960)(*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                               (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280960
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280960

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009650(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar5 = -1;
    if (param_2 + 1U < 5) {
      iVar5 = param_2;
    }
    uVar4 = 100;
    if (param_3 < 100) {
      uVar4 = param_3;
    }
    uVar3 = 0;
    if (iVar5 != -1) {
      uVar3 = param_1[2];
      if ((uint)param_1[1] < (uint)param_1[2]) {
        uVar3 = param_1[1];
      }
      uVar3 = (uVar3 * uVar4 + 0x32) / 100;
    }
    uVar1 = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280964)(*param_1,iVar5,uVar3);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[7] = iVar5;
        param_1[8] = uVar4;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808a4
#define DAT_002808a4 (*(uint8_t *)(0x2808a4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808a4
#define _DAT_002808a4 (*(code * *)(0x2808a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_10009730(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  param_1[0xf] = 0;
  if (param_4 == 0) {
    param_4 = param_1[1];
  }
  if (param_5 == 0) {
    param_5 = param_1[2];
  }
  uVar7 = param_4 * 4;
  if (param_6 == 0) {
    param_6 = uVar7;
  }
  iVar5 = (int)((ulonglong)param_5 * (ulonglong)param_4 >> 0x20);
  if (iVar5 != 0 ||
      (uint)-iVar5 < (uint)(0x3fffffff < (uint)((ulonglong)param_5 * (ulonglong)param_4))) {
    return 0;
  }
  if (param_4 + 0xc0000000 < 0xc0000001 || param_5 == 0) {
    return 0;
  }
  uVar4 = param_4 >> 0x1e;
  if (uVar4 != 0 || -uVar4 < (uint)(param_6 < uVar7)) {
    return 0;
  }
  lVar2 = (ulonglong)(param_5 - 1) * (ulonglong)param_6 + CONCAT44(uVar4,uVar7);
  iVar5 = (int)lVar2;
  if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
    if (param_2 == (byte *)0x0) {
      param_2 = (byte *)param_1[0xc];
    }
    uVar7 = ((param_7 >> 0x10 & 0xff ^
             (param_7 >> 8 & 0xff ^
             (param_7 & 0xff ^
             ((param_6 >> 0x10 & 0xff ^
              (param_6 >> 8 & 0xff ^
              (param_6 & 0xff ^
              ((param_5 >> 0x10 & 0xff ^
               (param_5 >> 8 & 0xff ^
               (param_5 & 0xff ^
               ((param_4 >> 0x10 & 0xff ^
                (param_4 >> 8 & 0xff ^ (param_4 & 0xff ^ 0x811c9dc5) * 0x1000193) * 0x1000193) *
                0x1000193 ^ param_4 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^
              param_5 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ param_6 >> 0x18)
             * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ param_7 >> 0x18) * 0x1000193;
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      pbVar6 = param_2;
      while (bVar1 != 0) {
        pbVar6 = pbVar6 + 1;
        uVar7 = (bVar1 ^ uVar7) * 0x1000193;
        bVar1 = *pbVar6;
      }
    }
    if ((param_3 != (byte *)0x0) && (iVar5 != 0)) {
      pbVar6 = param_3;
      do {
        uVar7 = (*pbVar6 ^ uVar7) * 0x1000193;
        pbVar6 = pbVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((param_1[0xe] == 0) || (uVar7 != param_1[0xd])) {
      if (_DAT_00280800 != 0x50414d57) goto LAB_100099ea;
      if (_DAT_00280804 == 0) {
        return 0;
      }
      if (_DAT_00280808 < 0xc) {
        return 0;
      }
      if (_DAT_00280808 < 0xa8) {
        return 0;
      }
      if (_DAT_002808a4 == (code *)0x0) {
        return 0;
      }
      iVar5 = (*_DAT_002808a4)(*param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar5 == 0) {
        return 0;
      }
      param_1[0xd] = uVar7;
      param_1[0xe] = 1;
    }
    param_1[0xc] = (int)param_2;
    param_1[1] = param_4;
    param_1[2] = param_5;
    param_1[3] = param_6;
    param_1[4] = param_7;
    uVar3 = 1;
  }
  else {
LAB_100099ea:
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808a4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808a4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a14
#define DAT_00280a14 (*(uint8_t *)(0x280a14U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a14
#define _DAT_00280a14 (*(code * *)(0x280a14U))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(int *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
#define local_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009a00(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;

  uVar1 = 0;
  if ((((param_1 != (int *)0x0) &&
       (pbVar4 = (byte *)param_1[0xb],
       (0 < param_5 && (0 < param_4 && -1 < (int)(param_2 | param_3))) && pbVar4 != (byte *)0x0)) &&
      (uVar5 = param_1[1], param_4 + param_2 <= uVar5)) &&
     (local_38 = param_1[2], param_5 + param_3 <= local_38)) {
    param_1[0xf] = 0;
    uVar3 = param_1[3];
    local_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    local_18 = param_5;
    local_30 = uVar5;
    local_2c = local_38;
    local_28 = uVar3;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x217 < _DAT_00280808 && (_DAT_00280a14 != (code *)0x0)))))) {
      iVar2 = (*_DAT_00280a14)(*param_1,pbVar4,&local_30);
      if (iVar2 != 0) {
        param_1[0xe] = 0;
        return 1;
      }
      pbVar4 = (byte *)param_1[0xb];
      uVar5 = param_1[1];
      local_38 = param_1[2];
      uVar3 = param_1[3];
    }
    uVar1 = recovered_10009730(param_1,(byte *)param_1[0xc],pbVar4,uVar5,local_38,uVar3,param_1[4]);
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a14
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a14
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b50
 */

undefined4 recovered_10009b50(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10009730(param_1,(byte *)param_1[0xc],(byte *)param_1[0xb],param_1[1],
                               param_1[2],param_1[3],param_1[4]);
  }
  return uVar1;
}


#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b90
 */

undefined4 recovered_10009b90(int *param_1,byte *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_3 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_1 == (int *)0x0) {
      uVar1 = 0xf6f6f6;
      if (DAT_1000f608 != '\0') {
        uVar1 = DAT_1000f4e4;
      }
    }
    else {
      uVar1 = param_1[4];
    }
    uVar2 = recovered_10009730(param_1,param_2,(byte *)param_3[3],*param_3,param_3[1],param_3[2],
                               uVar1);
  }
  return uVar2;
}

#undef DAT_1000f4e4
#undef DAT_1000f608

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280854
#define _DAT_00280854 (*(code * *)(0x280854U))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009c00(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  uVar7 = param_3;
  uVar5 = param_2;
  if ((uint)((uint)((ulonglong)param_3 * (ulonglong)param_2) < 0x40000000) <=
      (uint)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20)) {
    if (param_2 < param_3) {
      lVar11 = recovered_10001d70((uint)((ulonglong)param_3 * 0x3fffffff),
                                  (uint)((ulonglong)param_3 * 0x3fffffff >> 0x20),param_2,0);
      uVar8 = (uint)((ulonglong)lVar11 >> 0x20);
      uVar7 = 0;
      uVar5 = 0x40000000;
      do {
        local_24 = uVar5;
        uVar2 = uVar7;
        uVar7 = local_24 << 0x1e | uVar2 >> 2;
        uVar5 = local_24 >> 2;
      } while (uVar8 < local_24 || uVar8 - local_24 < (uint)((uint)lVar11 < uVar2));
      uVar7 = 0;
      if (uVar2 != 0 || local_24 != 0) {
        uVar7 = 0;
        uVar5 = 0;
        do {
          local_30 = (uint)((ulonglong)lVar11 >> 0x20);
          uVar1 = uVar5 << 0x1f | uVar7 >> 1;
          uVar8 = uVar7 + uVar2;
          uVar7 = uVar5 + local_24 + (uint)CARRY4(uVar7,uVar2);
          bVar9 = local_30 < uVar7;
          bVar10 = local_30 - uVar7 < (uint)((uint)lVar11 < uVar8);
          uVar3 = local_24;
          if (bVar9 || bVar10) {
            uVar7 = 0;
            uVar8 = 0;
            uVar3 = 0;
          }
          uVar6 = uVar2;
          if (bVar9 || bVar10) {
            uVar6 = 0;
          }
          lVar11 = lVar11 - CONCAT44(uVar7,uVar8);
          uVar7 = uVar6 + uVar1;
          uVar5 = (uVar5 >> 1) + uVar3 + (uint)CARRY4(uVar6,uVar1);
          bVar10 = 3 < uVar2;
          bVar9 = local_24 != 0;
          uVar8 = -local_24;
          uVar2 = local_24 << 0x1e | uVar2 >> 2;
          local_24 = local_24 >> 2;
        } while (bVar9 || uVar8 < bVar10);
      }
      uVar7 = uVar7 + (uVar7 == 0);
      uVar12 = recovered_10001d70((uint)((ulonglong)uVar7 * (ulonglong)param_2),
                                  (uint)((ulonglong)uVar7 * (ulonglong)param_2 >> 0x20),param_3,0);
      uVar5 = (int)uVar12 + (uint)((int)uVar12 == 0);
    }
    else {
      lVar11 = recovered_10001d70((uint)((ulonglong)param_2 * 0x3fffffff),
                                  (uint)((ulonglong)param_2 * 0x3fffffff >> 0x20),param_3,0);
      uVar8 = (uint)((ulonglong)lVar11 >> 0x20);
      uVar7 = 0;
      uVar5 = 0x40000000;
      do {
        local_24 = uVar5;
        uVar2 = uVar7;
        uVar7 = local_24 << 0x1e | uVar2 >> 2;
        uVar5 = local_24 >> 2;
      } while (uVar8 < local_24 || uVar8 - local_24 < (uint)((uint)lVar11 < uVar2));
      uVar5 = 0;
      if (uVar2 != 0 || local_24 != 0) {
        uVar5 = 0;
        uVar7 = 0;
        do {
          local_30 = (uint)((ulonglong)lVar11 >> 0x20);
          uVar1 = uVar7 << 0x1f | uVar5 >> 1;
          uVar8 = uVar5 + uVar2;
          uVar5 = uVar7 + local_24 + (uint)CARRY4(uVar5,uVar2);
          bVar9 = local_30 < uVar5;
          bVar10 = local_30 - uVar5 < (uint)((uint)lVar11 < uVar8);
          uVar3 = local_24;
          if (bVar9 || bVar10) {
            uVar5 = 0;
            uVar8 = 0;
            uVar3 = 0;
          }
          uVar6 = uVar2;
          if (bVar9 || bVar10) {
            uVar6 = 0;
          }
          lVar11 = lVar11 - CONCAT44(uVar5,uVar8);
          uVar5 = uVar6 + uVar1;
          uVar7 = (uVar7 >> 1) + uVar3 + (uint)CARRY4(uVar6,uVar1);
          bVar10 = 3 < uVar2;
          bVar9 = local_24 != 0;
          uVar8 = -local_24;
          uVar2 = local_24 << 0x1e | uVar2 >> 2;
          local_24 = local_24 >> 2;
        } while (bVar9 || uVar8 < bVar10);
      }
      uVar5 = uVar5 + (uVar5 == 0);
      uVar12 = recovered_10001d70((uint)((ulonglong)uVar5 * (ulonglong)param_3),
                                  (uint)((ulonglong)uVar5 * (ulonglong)param_3 >> 0x20),param_2,0);
      uVar7 = (int)uVar12 + (uint)((int)uVar12 == 0);
    }
    if ((uint)((uint)((ulonglong)uVar5 * (ulonglong)uVar7) < 0x40000000) <=
        (uint)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x20)) {
      if (uVar5 < uVar7) {
        uVar7 = (uint)(0x3fffffff / (ulonglong)uVar5);
      }
      else {
        uVar5 = (uint)(0x3fffffff / (ulonglong)uVar7);
      }
    }
  }
  if (uVar7 == 0) {
    return 0;
  }
  if (uVar5 + 0xc0000000 < 0xc0000001) {
    return 0;
  }
  iVar4 = (int)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x20);
  if (iVar4 == 0 && (uint)(0x3fffffff < (uint)((ulonglong)uVar5 * (ulonglong)uVar7)) <= (uint)-iVar4
     ) {
    uVar8 = uVar5 * 4;
    uVar2 = (uint)((ulonglong)uVar8 * (ulonglong)uVar7);
    if ((int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20) != 0) {
      return 0;
    }
    uVar3 = param_1[10];
    bVar10 = true;
    if ((param_1[1] == uVar5) && (param_1[2] == uVar7)) {
      bVar10 = param_1[3] != uVar8;
    }
    iVar4 = param_1[0xb];
    if (uVar2 <= uVar3) {
      if (iVar4 != 0) goto LAB_10009f47;
      iVar4 = 0;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x57 < _DAT_00280808 && (_DAT_00280854 != (code *)0x0)))) {
      iVar4 = (*_DAT_00280854)(iVar4,uVar2);
      if (iVar4 == 0) {
        return 0;
      }
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
      param_1[0xb] = iVar4;
      param_1[10] = uVar2;
      if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
        recovered_100024b0((void *)(iVar4 + uVar3),0,uVar2 - uVar3);
      }
      param_1[0xe] = 0;
LAB_10009f47:
      param_1[1] = uVar5;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      if (bVar10) {
        param_1[0xe] = 0;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280854
#undef local_30
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a010
 */

undefined4 recovered_1000a010(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x50);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_2 + 0x18);
    }
    uVar3 = *(uint *)(param_2 + 0x54);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_2 + 0x1c);
    }
    if (uVar2 != 0) goto joined_r0x1000a060;
  }
  uVar2 = param_1[1];
joined_r0x1000a060:
  if (uVar3 == 0) {
    uVar3 = param_1[2];
  }
  uVar1 = recovered_10009c00(param_1,uVar2,uVar3);
  return uVar1;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
#define local_240 (*(uint *)(pf_stack_frame + 112))
#define local_294 (*(uint *)(pf_stack_frame + 28))
#define local_28c (*(undefined1 (*)[652])(pf_stack_frame + 36))
#define local_274 (*(uint *)(pf_stack_frame + 60))
#define local_270 (*(uint *)(pf_stack_frame + 64))
#define local_26c (*(int *)(pf_stack_frame + 68))
#define local_268 (*(int *)(pf_stack_frame + 72))
#define local_24c (*(uint *)(pf_stack_frame + 100))
#define local_248 (*(uint *)(pf_stack_frame + 104))
#define local_244 (*(int *)(pf_stack_frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a070(int *param_1,void *param_2)

{
  unsigned char pf_stack_frame[720] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[0xf] == 0) {
    recovered_100024b0(local_28c,0,0x278);
    if (_DAT_00280800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00280804 == 0) {
      return 0;
    }
    if (_DAT_00280808 < 0xc) {
      return 0;
    }
    if (_DAT_00280808 < 0xb8) {
      return 0;
    }
    if (_DAT_002808b4 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_002808b4)(*param_1,local_28c);
    if (iVar2 == 0) {
      return 0;
    }
    recovered_10002220(param_1 + 0x10,local_28c,0x278);
    param_1[0xf] = 1;
    param_1[1] = local_274;
    param_1[2] = local_270;
    param_1[3] = local_26c;
    param_1[4] = local_268;
    if (local_24c == 0xffffffff) {
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xff;
      if (local_24c < 0xff) {
        uVar3 = local_24c;
      }
      uVar3 = (uVar3 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[5] = uVar3;
    local_294 = 0;
    uVar3 = 0;
    if (local_248 != 0xffffffff) {
      uVar3 = 0xff;
      if (local_248 < 0xff) {
        uVar3 = local_248;
      }
      uVar3 = (uVar3 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[6] = uVar3;
    iVar2 = -1;
    if (local_244 + 1U < 5) {
      iVar2 = local_244;
    }
    param_1[7] = iVar2;
    if (local_274 < local_270) {
      local_270 = local_274;
    }
    uVar3 = local_270 * 100 + 0x32;
    if (99 < uVar3) {
      lVar1 = (ulonglong)local_240 * 100 + (ulonglong)(uVar3 / 200);
      uVar4 = recovered_10001d70((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),uVar3 / 100,0);
      local_294 = 100;
      if ((uint)uVar4 < 100) {
        local_294 = (uint)uVar4;
      }
    }
    param_1[8] = local_294;
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10002220(param_2,local_28c,0x278);
  }
  else {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10002220(param_2,param_1 + 0x10,0x278);
  }
  return 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4
#undef local_240
#undef local_294
#undef local_28c
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_24c
#undef local_248
#undef local_244

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a290
 */

void recovered_1000a290(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2b0
 */

bool recovered_1000a2b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = (*(byte *)(param_1 + 0x28) & 0x11) != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2d0
 */

void recovered_1000a2d0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (void *)0x0) {
    recovered_100024b0(param_1,0,0x18);
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a300(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_1 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    recovered_100024b0(param_1,0,0x18);
    while ((((_DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           (((0x2f < _DAT_00280808 && (_DAT_0028082c != (code *)0x0)) &&
            (uVar1 = (*_DAT_0028082c)(), uVar1 != 0))))) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      if ((byte)((char)uVar1 - 0x20U) < 0x5f) {
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
    uVar2 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c

#define local_290 (*(undefined1 (*)[656])(pf_stack_frame + 16))
#define local_268 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a670
 */

bool recovered_1000a670(int *param_1)

{
  unsigned char pf_stack_frame[704] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1000a070(param_1,local_290);
  return (local_268 & 0x11) != 0 || iVar1 == 0;
}

#undef local_290
#undef local_268

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_002808a8
#define DAT_002808a8 (*(uint8_t *)(0x2808a8U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_002808a8
#define _DAT_002808a8 (*(code * *)(0x2808a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a6a0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0xab < _DAT_00280808 && (_DAT_002808a8 != (code *)0x0)))) {
        uVar1 = (*_DAT_002808a8)(*param_1);
      }
    }
    if (((((*(byte *)(param_1 + 9) & 1) != 0) && (param_1[0xb] != 0)) &&
        ((_DAT_00280800 == 0x50414d57 &&
         (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808)))))) &&
       (_DAT_00280850 != (code *)0x0)) {
      (*_DAT_00280850)(param_1[0xb]);
    }
    recovered_100024b0(param_1,0,0x340);
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_002808a8
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_002808a8

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a08
#define DAT_00280a08 (*(uint8_t *)(0x280a08U))
#undef DAT_1000e5bb
#define DAT_1000e5bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a08
#define _DAT_00280a08 (*(code * *)(0x280a08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a770(int *param_1,undefined *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined *puVar2;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    puVar2 = &DAT_1000e5bb;
    if (param_2 != (undefined *)0x0) {
      puVar2 = param_2;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x20b < _DAT_00280808 && (_DAT_00280a08 != (code *)0x0)))) {
      uVar1 = (*_DAT_00280a08)(*param_1,puVar2);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a08
#undef DAT_1000e5bb
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a08

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280960
#define _DAT_00280960 (*(code * *)(0x280960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a7f0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar3 = 100;
    if ((uint)param_1[6] < 100) {
      uVar3 = param_1[6];
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x163 < _DAT_00280808 && (_DAT_00280960 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280960)(*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                               (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280960
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280960

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280960
#define _DAT_00280960 (*(code * *)(0x280960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a8c0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar4 = param_1[5];
    if (99 < uVar4) {
      uVar4 = 100;
    }
    uVar3 = 100;
    if (param_2 < 100) {
      uVar3 = param_2;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x163 < _DAT_00280808 && (_DAT_00280960 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280960)(*param_1,(uVar4 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                               (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[5] = uVar4;
        param_1[6] = uVar3;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280960
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280960

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000a990(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00280800 == 0x50414d57)) &&
     (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
      ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))))) {
    iVar2 = (*_DAT_00280964)(*param_1,0,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      param_1[7] = 0;
      param_1[8] = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000aa20(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00280800 == 0x50414d57)) &&
     (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
      ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))))) {
    iVar2 = (*_DAT_00280964)(*param_1,1,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      param_1[7] = 1;
      param_1[8] = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000aab0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar3 = 100;
    if (param_2 < 100) {
      uVar3 = param_2;
    }
    uVar1 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar1 = param_1[1];
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280964)(*param_1,2,(uVar1 * uVar3 + 0x32) / 100);
      if (iVar2 != 0) {
        param_1[7] = 2;
        param_1[8] = uVar3;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ab60(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar3 = 100;
    if (param_2 < 100) {
      uVar3 = param_2;
    }
    uVar1 = param_1[2];
    if ((uint)param_1[1] < (uint)param_1[2]) {
      uVar1 = param_1[1];
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280964)(*param_1,3,(uVar1 * uVar3 + 0x32) / 100);
      if (iVar2 != 0) {
        param_1[7] = 3;
        param_1[8] = uVar3;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280964

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280900
#define DAT_00280900 (*(uint8_t *)(0x280900U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280900
#define _DAT_00280900 (*(code * *)(0x280900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ac10(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || *param_1 == 0)) || (_DAT_00280800 != 0x50414d57)
      ) || (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
            ((_DAT_00280808 < 0x104 || (_DAT_00280900 == (code *)0x0)))))) {
    return 0;
  }
  uVar1 = (*_DAT_00280900)(*param_1,param_2);
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280900
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280900

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a30
#define DAT_00280a30 (*(uint8_t *)(0x280a30U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a30
#define _DAT_00280a30 (*(code * *)(0x280a30U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ac80(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || *param_1 == 0)) || (_DAT_00280800 != 0x50414d57)
      ) || (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
            ((_DAT_00280808 < 0x234 || (_DAT_00280a30 == (code *)0x0)))))) {
    return 0;
  }
  uVar1 = (*_DAT_00280a30)(*param_1,param_2);
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a30
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a34
#define DAT_00280a34 (*(uint8_t *)(0x280a34U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a34
#define _DAT_00280a34 (*(code * *)(0x280a34U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000acf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000acf0(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (_DAT_00280800 != 0x50414d57)) ||
     (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x238 || (_DAT_00280a34 == (code *)0x0)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00280a34)(*param_1,param_2);
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a34
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b0
#define DAT_002808b0 (*(uint8_t *)(0x2808b0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b0
#define _DAT_002808b0 (*(code * *)(0x2808b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000ad60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xb3 < _DAT_00280808 && (_DAT_002808b0 != (code *)0x0)))) {
    uVar1 = (*_DAT_002808b0)(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028097c
#define DAT_0028097c (*(uint8_t *)(0x28097cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028097c
#define _DAT_0028097c (*(code * *)(0x28097cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000adc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000adc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x17f < _DAT_00280808 && (_DAT_0028097c != (code *)0x0)))) {
    uVar1 = (*_DAT_0028097c)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028097c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028097c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808ac
#define DAT_002808ac (*(uint8_t *)(0x2808acU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808ac
#define _DAT_002808ac (*(code * *)(0x2808acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ae20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xaf < _DAT_00280808 && (_DAT_002808ac != (code *)0x0)))) {
    uVar1 = (*_DAT_002808ac)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808ac
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808ac

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808f0
#define DAT_002808f0 (*(uint8_t *)(0x2808f0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808f0
#define _DAT_002808f0 (*(code * *)(0x2808f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000ae80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xf3 < _DAT_00280808 && (_DAT_002808f0 != (code *)0x0)))) {
    uVar1 = (*_DAT_002808f0)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808f0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808f0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808fc
#define DAT_002808fc (*(uint8_t *)(0x2808fcU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808fc
#define _DAT_002808fc (*(code * *)(0x2808fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1000aee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xff < _DAT_00280808 && (_DAT_002808fc != (code *)0x0)))) {
    uVar1 = (*_DAT_002808fc)(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808fc
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808fc

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b0
#define DAT_002808b0 (*(uint8_t *)(0x2808b0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b0
#define _DAT_002808b0 (*(code * *)(0x2808b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000af40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xb3 < _DAT_00280808 && (_DAT_002808b0 != (code *)0x0)))) {
    uVar1 = (*_DAT_002808b0)(param_1,param_2,param_3,0xe,10);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b0
#define DAT_002808b0 (*(uint8_t *)(0x2808b0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b0
#define _DAT_002808b0 (*(code * *)(0x2808b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000afa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0xb3 < _DAT_00280808 && (_DAT_002808b0 != (code *)0x0)))) {
    uVar1 = (*_DAT_002808b0)(param_1,param_2,param_3,1,1);
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000b000(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  while( true ) {
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       (((_DAT_00280808 < 0x30 || (_DAT_0028082c == (code *)0x0)) ||
        (uVar1 = (*_DAT_0028082c)(), uVar1 == 0)))) {
      return 0;
    }
    uVar2 = CONCAT31((int3)((uVar1 & 0xff00) >> 8),1);
    if ((uVar1 & 0xff00) == 0x100) {
      return 0x101;
    }
    if ((uVar1 & 0xdf) == 0x51) break;
    if ((uVar1 & 0xff) == 0x1b) {
      return uVar2;
    }
  }
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef DAT_00280974
#define DAT_00280974 (*(uint8_t *)(0x280974U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(code * *)(0x28089cU))
#undef _DAT_00280974
#define _DAT_00280974 (*(code * *)(0x280974U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000b080(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  while( true ) {
    if (param_1 == 0) {
      return;
    }
    uVar2 = 0x20c49b;
    if (param_1 < 0x20c49b) {
      uVar2 = param_1;
    }
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       (((_DAT_00280808 < 0x178 || (_DAT_00280974 == (code *)0x0)) ||
        (iVar1 = (*_DAT_00280974)(uVar2 * 2000), iVar1 == 0)))) break;
    param_1 = param_1 - uVar2;
  }
  if (_DAT_00280800 != 0x50414d57) {
    return;
  }
  if (_DAT_00280804 == 0) {
    return;
  }
  if (_DAT_00280808 < 0xc) {
    return;
  }
  if (_DAT_00280808 < 0xa0) {
    return;
  }
  if (_DAT_0028089c == (code *)0x0) {
    return;
  }
  (*_DAT_0028089c)();
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028089c
#undef DAT_00280974
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028089c
#undef _DAT_00280974

#undef DAT_1000f4f8
#define DAT_1000f4f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1037U)))
#undef DAT_1000f4fc
#define DAT_1000f4fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x103bU)))
#undef DAT_1000f504
#define DAT_1000f504 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1043U)))
#undef DAT_1000f508
#define DAT_1000f508 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1047U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
#define local_6c (*(uint *)(pf_stack_frame + 52))
#define local_68 (*(int *)(pf_stack_frame + 56))
#define local_64 (*(int *)(pf_stack_frame + 60))
#define local_60 (*(int *)(pf_stack_frame + 64))
#define local_5c (*(uint *)(pf_stack_frame + 68))
#define local_58 (*(uint *)(pf_stack_frame + 72))
#define local_54 (*(int *)(pf_stack_frame + 76))
#define aiStack_1c (*(int (*)[7])(pf_stack_frame + 132))
#define local_50 (*(int *)(pf_stack_frame + 80))
#define local_4c (*(uint *)(pf_stack_frame + 84))
#define local_48 (*(uint *)(pf_stack_frame + 88))
#define local_44 (*(int *)(pf_stack_frame + 92))
#define local_40 (*(int *)(pf_stack_frame + 96))
#define local_3c (*(int *)(pf_stack_frame + 100))
#define local_38 (*(int *)(pf_stack_frame + 104))
#define local_34 (*(int *)(pf_stack_frame + 108))
#define local_30 (*(int *)(pf_stack_frame + 112))
#define local_2c (*(int *)(pf_stack_frame + 116))
#define local_28 (*(int *)(pf_stack_frame + 120))
#define local_24 (*(undefined4 (*)[9])(pf_stack_frame + 124))
#define local_88 (*(int *)(pf_stack_frame + 24))
#define local_84 (*(uint *)(pf_stack_frame + 28))
#define local_80 (*(int *)(pf_stack_frame + 32))
#define local_7c (*(uint *)(pf_stack_frame + 36))
#define local_78 (*(undefined4 *)(pf_stack_frame + 40))
#define local_74 (*(undefined4 *)(pf_stack_frame + 44))
#define local_70 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b140
 */

void recovered_1000b140(int param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  if (param_1 != 0) {
    local_88 = *(int *)(param_1 + 0x2c);
    if ((((param_2 != (uint *)0x0 && local_88 != 0) && (0 < (int)param_2[3])) &&
        (0 < (int)param_2[4])) &&
       ((uVar3 = *param_2, uVar3 < 2 && (local_84 = *(uint *)(param_1 + 4), -1 < (int)local_84)))) {
      local_80 = *(int *)(param_1 + 8);
      if (-1 < local_80) {
        local_7c = *(uint *)(param_1 + 0xc);
        if (local_84 >> 0x1e == 0 && (uint)(local_7c < local_84 * 4) <= -(local_84 >> 0x1e)) {
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = local_84;
          local_68 = local_80;
          recovered_1000b430(local_24,param_2[1],param_2[2],param_2[3],param_2[4],uVar3,param_3);
          iVar1 = aiStack_1c[uVar3 == 1];
          recovered_1000b430(&local_34,param_2[5],param_2[6],param_2[7],param_2[8],uVar3,param_3);
          recovered_1000b430(&local_44,param_2[0x11],param_2[0x12],param_2[0x13],param_2[0x14],uVar3
                             ,param_3);
          recovered_1000b430(&local_54,param_2[9],param_2[10],param_2[0xb],param_2[0xc],uVar3,
                             param_3);
          recovered_1000b430(&local_64,param_2[0xd],param_2[0xe],param_2[0xf],param_2[0x10],uVar3,
                             param_3);
          uVar2 = 0xe4e4e4;
          if (DAT_1000f608 != '\0') {
            uVar2 = DAT_1000f4f8;
          }
          uVar3 = (uint)(2 < iVar1);
          recovered_1000b530(&local_88,local_34,local_30,local_2c,local_28,uVar2);
          uVar2 = 0xacacac;
          if (DAT_1000f608 != '\0') {
            uVar2 = DAT_1000f504;
          }
          recovered_1000b5f0(&local_88,local_34,local_30,local_2c,local_28,uVar2);
          uVar2 = 0xbebebe;
          if (DAT_1000f608 != '\0') {
            uVar2 = DAT_1000f4fc;
          }
          recovered_1000b530(&local_88,local_44 + uVar3,local_40 + uVar3,local_3c + uVar3 * -2,
                             local_38 + uVar3 * -2,uVar2);
          uVar2 = 0x747474;
          if (DAT_1000f608 != '\0') {
            uVar2 = DAT_1000f508;
          }
          recovered_1000b5f0(&local_88,local_44,local_40,local_3c,local_38,uVar2);
          recovered_1000b960(&local_88,local_54,local_50,local_4c,local_48,*param_2,1);
          recovered_1000b960(&local_88,local_64,local_60,local_5c,local_58,*param_2,0);
        }
      }
    }
  }
  return;
}

#undef DAT_1000f4f8
#undef DAT_1000f4fc
#undef DAT_1000f504
#undef DAT_1000f508
#undef DAT_1000f608
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef aiStack_1c
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
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b430
 */

void recovered_1000b430(undefined4 *in_ECX,undefined4 in_EDX,int param_3,int param_4,int param_5,
                       int param_6,uint param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_6 == 1) {
    if (param_5 < 3) {
      uVar2 = (uint)(0 < param_5);
    }
    else {
      uVar2 = (param_5 + 2U) / 5;
    }
    uVar1 = 0x20;
    if (param_7 < 0x20) {
      uVar1 = param_7;
    }
    iVar3 = param_3 + param_5;
    param_5 = ((param_5 - uVar2) *
               ((uVar1 * -0x40 + 0xc00) * uVar1 * 0x20 * uVar1 * 0x20 + 0x80000 >> 0x14) + 0x200 >>
              10) + uVar2;
    param_3 = iVar3 - param_5;
  }
  else {
    if (param_4 < 3) {
      uVar2 = (uint)(0 < param_4);
    }
    else {
      uVar2 = (param_4 + 2U) / 5;
    }
    uVar1 = 0x20;
    if (param_7 < 0x20) {
      uVar1 = param_7;
    }
    param_4 = ((param_4 - uVar2) *
               ((uVar1 * -0x40 + 0xc00) * uVar1 * 0x20 * uVar1 * 0x20 + 0x80000 >> 0x14) + 0x200 >>
              10) + uVar2;
  }
  *in_ECX = in_EDX;
  in_ECX[1] = param_3;
  in_ECX[2] = param_4;
  in_ECX[3] = param_5;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b530
 */

void recovered_1000b530(int *in_ECX,int in_EDX,int param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;

  if (in_ECX != (int *)0x0) {
    iVar2 = in_ECX[5];
    iVar1 = iVar2;
    if (iVar2 < in_EDX) {
      iVar1 = in_EDX;
    }
    iVar6 = in_ECX[6];
    iVar3 = iVar6;
    if (iVar6 < param_3) {
      iVar3 = param_3;
    }
    iVar5 = iVar2 + in_ECX[7];
    if (in_EDX + param_4 < iVar2 + in_ECX[7]) {
      iVar5 = in_EDX + param_4;
    }
    iVar2 = iVar6 + in_ECX[8];
    if (param_3 + param_5 < iVar6 + in_ECX[8]) {
      iVar2 = param_3 + param_5;
    }
    if ((((iVar3 < iVar2) && (iVar5 - iVar1 != 0 && iVar1 <= iVar5)) && (*in_ECX != 0)) &&
       ((0 < param_4 && (0 < param_5)))) {
      do {
        puVar4 = (undefined1 *)(in_ECX[3] * iVar3 + *in_ECX + iVar1 * 4);
        iVar6 = iVar5 - iVar1;
        do {
          *puVar4 = (char)((uint)param_6 >> 0x10);
          puVar4[1] = (char)((uint)param_6 >> 8);
          puVar4[2] = (char)param_6;
          puVar4[3] = 0xff;
          puVar4 = puVar4 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar2);
    }
  }
  return;
}


#define local_3c (*(int *)(pf_stack_frame + 20))
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(int *)(pf_stack_frame + 40))
#define local_18 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5f0
 */

void recovered_1000b5f0(int *in_ECX,int in_EDX,int param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  if (in_ECX == (int *)0x0 || (param_5 < 1 || param_4 < 1)) {
    return;
  }
  local_2c = in_ECX[5];
  local_30 = local_2c;
  if (local_2c < in_EDX) {
    local_30 = in_EDX;
  }
  iVar8 = in_ECX[6];
  iVar7 = iVar8;
  if (iVar8 < param_3) {
    iVar7 = param_3;
  }
  iVar4 = param_4 + in_EDX;
  local_34 = in_ECX[7] + local_2c;
  local_18 = local_34;
  if (iVar4 < local_34) {
    local_18 = iVar4;
  }
  local_3c = in_ECX[8] + iVar8;
  iVar6 = param_3 + 1;
  if (local_3c <= param_3 + 1) {
    iVar6 = local_3c;
  }
  local_28 = *in_ECX;
  uVar1 = (undefined1)param_6;
  uVar2 = (undefined1)((uint)param_6 >> 8);
  uVar3 = (undefined1)((uint)param_6 >> 0x10);
  if (((iVar7 < iVar6) && (!(local_18 - local_30 == 0 || local_18 < local_30))) && (local_28 != 0))
  {
    do {
      puVar5 = (undefined1 *)(in_ECX[3] * iVar7 + *in_ECX + local_30 * 4);
      iVar8 = local_18 - local_30;
      do {
        *puVar5 = uVar3;
        puVar5[1] = uVar2;
        puVar5[2] = uVar1;
        puVar5[3] = 0xff;
        puVar5 = puVar5 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
    local_2c = in_ECX[5];
    iVar8 = in_ECX[6];
    local_30 = local_2c;
    if (local_2c < in_EDX) {
      local_30 = in_EDX;
    }
    local_34 = in_ECX[7] + local_2c;
    local_18 = local_34;
    if (iVar4 < local_34) {
      local_18 = iVar4;
    }
    local_3c = in_ECX[8] + iVar8;
    local_28 = *in_ECX;
  }
  iVar7 = param_5 + -1 + param_3;
  iVar6 = param_5 + param_3;
  if (iVar7 <= iVar8) {
    iVar7 = iVar8;
  }
  if (iVar6 < local_3c) {
    local_3c = iVar6;
  }
  if (((iVar7 < local_3c) && (local_18 - local_30 != 0 && local_30 <= local_18)) && (local_28 != 0))
  {
    do {
      puVar5 = (undefined1 *)(in_ECX[3] * iVar7 + *in_ECX + local_30 * 4);
      iVar8 = local_18 - local_30;
      do {
        *puVar5 = uVar3;
        puVar5[1] = uVar2;
        puVar5[2] = uVar1;
        puVar5[3] = 0xff;
        puVar5 = puVar5 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar7 = iVar7 + 1;
    } while (iVar7 != local_3c);
    local_2c = in_ECX[5];
    iVar8 = in_ECX[6];
    local_30 = local_2c;
    if (local_2c < in_EDX) {
      local_30 = in_EDX;
    }
    local_34 = in_ECX[7] + local_2c;
    local_3c = in_ECX[8] + iVar8;
    if (iVar6 < in_ECX[8] + iVar8) {
      local_3c = iVar6;
    }
    local_28 = *in_ECX;
  }
  if (iVar8 < param_3) {
    iVar8 = param_3;
  }
  iVar7 = in_EDX + 1;
  if (local_34 <= in_EDX + 1) {
    iVar7 = local_34;
  }
  if (((iVar8 < local_3c) && (!(iVar7 - local_30 == 0 || iVar7 < local_30))) && (local_28 != 0)) {
    do {
      puVar5 = (undefined1 *)(in_ECX[3] * iVar8 + *in_ECX + local_30 * 4);
      iVar9 = iVar7 - local_30;
      do {
        *puVar5 = uVar3;
        puVar5[1] = uVar2;
        puVar5[2] = uVar1;
        puVar5[3] = 0xff;
        puVar5 = puVar5 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar8 = iVar8 + 1;
    } while (iVar8 != local_3c);
    local_2c = in_ECX[5];
    iVar7 = in_ECX[6];
    iVar8 = param_3;
    if (param_3 <= iVar7) {
      iVar8 = iVar7;
    }
    local_34 = in_ECX[7] + local_2c;
    local_3c = iVar7 + in_ECX[8];
    if (iVar6 < iVar7 + in_ECX[8]) {
      local_3c = iVar6;
    }
    local_28 = *in_ECX;
  }
  if (local_2c < iVar4 + -1) {
    local_2c = iVar4 + -1;
  }
  if (iVar4 < local_34) {
    local_34 = iVar4;
  }
  if (((iVar8 < local_3c) && (local_34 - local_2c != 0 && local_2c <= local_34)) && (local_28 != 0))
  {
    do {
      puVar5 = (undefined1 *)(in_ECX[3] * iVar8 + *in_ECX + local_2c * 4);
      iVar7 = local_34 - local_2c;
      do {
        *puVar5 = uVar3;
        puVar5[1] = uVar2;
        puVar5[2] = uVar1;
        puVar5[3] = 0xff;
        puVar5 = puVar5 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar8 = iVar8 + 1;
    } while (iVar8 != local_3c);
  }
  return;
}

#undef local_3c
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_18

#undef DAT_1000f500
#define DAT_1000f500 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x103fU)))
#undef DAT_1000f50c
#define DAT_1000f50c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x104bU)))
#undef DAT_1000f510
#define DAT_1000f510 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x104fU)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
#define local_3c (*(int *)(pf_stack_frame + 20))
#define local_2c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b960
 */

void recovered_1000b960(int *in_ECX,int in_EDX,int param_3,uint param_4,uint param_5,int param_6,
                       byte param_7)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar9;
  uint uVar7;
  int iVar8;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;

  cVar1 = DAT_1000f608;
  if (0 < (int)param_5 && 0 < (int)param_4) {
    uVar5 = param_4;
    if (param_6 == 1) {
      uVar5 = param_5;
    }
    uVar3 = uVar5 + 1 >> 1;
    uVar7 = 4;
    if (uVar3 < 4) {
      uVar7 = uVar3;
    }
    uVar4 = 0xeeeeee;
    if (DAT_1000f608 != '\0') {
      uVar4 = DAT_1000f500;
    }
    if (in_ECX != (int *)0x0) {
      iVar17 = in_ECX[5];
      iVar15 = iVar17;
      if (iVar17 < in_EDX) {
        iVar15 = in_EDX;
      }
      iVar8 = in_ECX[6];
      iVar16 = iVar8;
      if (iVar8 < param_3) {
        iVar16 = param_3;
      }
      iVar20 = iVar17 + in_ECX[7];
      if ((int)(in_EDX + param_4) < iVar17 + in_ECX[7]) {
        iVar20 = in_EDX + param_4;
      }
      iVar17 = iVar8 + in_ECX[8];
      if ((int)(param_5 + param_3) < iVar8 + in_ECX[8]) {
        iVar17 = param_5 + param_3;
      }
      if (((iVar16 < iVar17) && (iVar20 - iVar15 != 0 && iVar15 <= iVar20)) && (*in_ECX != 0)) {
        do {
          puVar10 = (undefined1 *)(in_ECX[3] * iVar16 + *in_ECX + iVar15 * 4);
          iVar8 = iVar20 - iVar15;
          do {
            *puVar10 = (char)((uint)uVar4 >> 0x10);
            puVar10[1] = (char)((uint)uVar4 >> 8);
            puVar10[2] = (char)uVar4;
            puVar10[3] = 0xff;
            puVar10 = puVar10 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          iVar16 = iVar16 + 1;
        } while (iVar16 != iVar17);
      }
    }
    uVar4 = 0x969696;
    if (cVar1 != '\0') {
      uVar4 = DAT_1000f50c;
    }
    recovered_1000b5f0(in_ECX,in_EDX,param_3,param_4,param_5,uVar4);
    if (uVar5 != 0) {
      iVar8 = (param_5 >> 1) + param_3;
      uVar5 = (uint)(byte)~param_7 * 2 | 0xfffffffc;
      iVar17 = (param_4 >> 1) + in_EDX;
      iVar16 = iVar8 + uVar5;
      iVar15 = uVar5 + iVar17;
      local_3c = (param_4 >> 1) + 1 + uVar5 + in_EDX;
      uVar5 = 0;
      local_2c = iVar15;
      do {
        uVar3 = ~uVar5 + uVar7;
        if (param_7 != 0) {
          uVar3 = uVar5;
        }
        uVar4 = 0x464646;
        if (cVar1 != '\0') {
          uVar4 = DAT_1000f510;
        }
        uVar9 = (undefined1)((uint)uVar4 >> 8);
        uVar2 = (undefined1)((uint)uVar4 >> 0x10);
        if (param_6 == 1) {
          if (in_ECX != (int *)0x0) {
            iVar13 = iVar8 - uVar3;
            iVar20 = in_ECX[5];
            iVar12 = iVar15 + uVar5;
            if ((int)(iVar15 + uVar5) <= iVar20) {
              iVar12 = iVar20;
            }
            iVar19 = in_ECX[6];
            iVar14 = iVar19;
            if (iVar19 < iVar13) {
              iVar14 = iVar13;
            }
            iVar18 = in_ECX[7] + iVar20;
            iVar6 = iVar15 + 1 + uVar5;
            if (iVar18 <= iVar6) {
              iVar6 = iVar18;
            }
            iVar13 = iVar13 + 1 + uVar3 * 2;
            iVar11 = iVar19 + in_ECX[8];
            if (iVar13 < iVar19 + in_ECX[8]) {
              iVar11 = iVar13;
            }
            if (((iVar14 < iVar11) && (iVar12 < iVar6)) && ((*in_ECX != 0 && (-1 < (int)uVar3)))) {
              if (local_3c < iVar18) {
                iVar18 = local_3c;
              }
              if (iVar20 <= local_2c) {
                iVar20 = local_2c;
              }
              do {
                puVar10 = (undefined1 *)(in_ECX[3] * iVar14 + *in_ECX + iVar12 * 4);
                iVar13 = iVar18 - iVar20;
                do {
                  *puVar10 = uVar2;
                  puVar10[1] = uVar9;
                  puVar10[2] = (char)uVar4;
                  puVar10[3] = 0xff;
                  puVar10 = puVar10 + 4;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
                iVar14 = iVar14 + 1;
              } while (iVar14 != iVar11);
            }
          }
        }
        else if (in_ECX != (int *)0x0) {
          iVar19 = iVar17 - uVar3;
          iVar12 = iVar16 + uVar5;
          iVar20 = in_ECX[5];
          iVar13 = iVar20;
          if (iVar20 < iVar19) {
            iVar13 = iVar19;
          }
          iVar14 = in_ECX[6];
          if (iVar12 <= iVar14) {
            iVar12 = iVar14;
          }
          iVar19 = iVar19 + 1 + uVar3 * 2;
          iVar6 = iVar20 + in_ECX[7];
          if (iVar19 < iVar20 + in_ECX[7]) {
            iVar6 = iVar19;
          }
          iVar20 = iVar16 + 1 + uVar5;
          iVar19 = iVar14 + in_ECX[8];
          if (iVar20 < iVar14 + in_ECX[8]) {
            iVar19 = iVar20;
          }
          if (((iVar12 < iVar19) && (iVar6 - iVar13 != 0 && iVar13 <= iVar6)) &&
             ((*in_ECX != 0 && (-1 < (int)uVar3)))) {
            do {
              puVar10 = (undefined1 *)(in_ECX[3] * iVar12 + *in_ECX + iVar13 * 4);
              iVar20 = iVar6 - iVar13;
              do {
                *puVar10 = uVar2;
                puVar10[1] = uVar9;
                puVar10[2] = (char)uVar4;
                puVar10[3] = 0xff;
                puVar10 = puVar10 + 4;
                iVar20 = iVar20 + -1;
              } while (iVar20 != 0);
              iVar12 = iVar12 + 1;
            } while (iVar12 != iVar19);
          }
        }
        uVar5 = uVar5 + 1;
        local_3c = local_3c + 1;
        local_2c = local_2c + 1;
      } while (uVar5 != uVar7 + (uVar7 == 0));
    }
  }
  return;
}

#undef DAT_1000f500
#undef DAT_1000f50c
#undef DAT_1000f510
#undef DAT_1000f608
#undef local_3c
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bd80
 */

void recovered_1000bd80(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bda0
 */

void recovered_1000bda0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdd0
 */

void recovered_1000bdd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_2;
  return;
}


#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdf0
 */

void * recovered_1000bdf0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  *(undefined4 *)((int)param_1 + 0x1c) = 1;
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  *(undefined4 *)((int)param_1 + 0x20) = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  *(undefined4 *)((int)param_1 + 0x24) = uVar1;
  *(undefined4 *)((int)param_1 + 0x28) = 1;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be50
 */

undefined4 * recovered_1000be50(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  param_1[7] = 1;
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 1;
  param_1[2] = param_2;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bec0
 */

undefined4 * recovered_1000bec0(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  recovered_100024b0(param_1,0,0x4c);
  param_1[7] = 1;
  uVar1 = 0x202020;
  if (DAT_1000f608 != '\0') {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  param_1[10] = 1;
  *param_1 = 2;
  param_1[9] = param_2;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  return param_1;
}

#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf30
 */

undefined4 * recovered_1000bf30(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  param_1[7] = 1;
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 4;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfa0
 */

undefined4 *
recovered_1000bfa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  param_1[7] = 1;
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 3;
  param_1[2] = param_2;
  param_1[0x11] = param_3;
  param_1[0x12] = param_4;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c020
 */

undefined4 *
recovered_1000c020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4,
                  undefined4 param_5,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 8;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[7] = 0;
  param_1[0x11] = param_5;
  param_1[0x12] = param_6;
  if (param_4 != '\0') {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x10;
  }
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c0b0
 */

undefined4 *
recovered_1000c0b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 5;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = 1;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c130
 */

undefined4 *
recovered_1000c130(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 6;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = 1;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

#undef DAT_1000f4e4
#define DAT_1000f4e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1023U)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1b0
 */

undefined4 * recovered_1000c1b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;

  recovered_100024b0(param_1,0,0x4c);
  bVar2 = DAT_1000f608 != '\0';
  uVar1 = 0x202020;
  if (bVar2) {
    uVar1 = DAT_1000f4e8;
  }
  param_1[8] = uVar1;
  uVar1 = 0xf6f6f6;
  if (bVar2) {
    uVar1 = DAT_1000f4e4;
  }
  param_1[9] = uVar1;
  param_1[10] = 1;
  *param_1 = 7;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[7] = 1;
  return param_1;
}

#undef DAT_1000f4e4
#undef DAT_1000f4e8
#undef DAT_1000f608

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c230
 */

void recovered_1000c230(undefined4 *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  puVar2 = &param_2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c270
 */

void recovered_1000c270(undefined4 *param_1,undefined4 param_2,byte param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  param_3 = param_3 | 1;
  puVar2 = &param_2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2a0
 */

void recovered_1000c2a0(undefined4 *param_1,undefined4 param_2,byte param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  param_3 = param_3 | 2;
  puVar2 = &param_2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


#define iStack00000034 (*(int *)(pf_stack_frame + 84))
#define iStack00000038 (*(int *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2d0
 */

void recovered_1000c2d0(undefined4 *param_1,undefined4 param_2,byte param_3,int in_stack_00000054,
                       int in_stack_00000058)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (-1 < in_stack_00000054) {
    iStack00000034 = in_stack_00000054;
    param_3 = param_3 | 4;
  }
  if (-1 < in_stack_00000058) {
    iStack00000038 = in_stack_00000058;
    param_3 = param_3 | 8;
  }
  puVar2 = &param_2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef iStack00000034
#undef iStack00000038

#define iStack00000030 (*(int *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c310
 */

void recovered_1000c310(undefined4 *param_1,undefined4 param_2,int in_stack_00000054)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  iStack00000030 = in_stack_00000054 + (uint)(in_stack_00000054 == 0);
  puVar2 = &param_2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef iStack00000030

#define uStack00000024 (*(uint *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c340
 */

void recovered_1000c340(undefined4 *param_1,undefined4 param_2,uint in_stack_00000054)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  uStack00000024 = 1;
  if (in_stack_00000054 < 4) {
    uStack00000024 = in_stack_00000054;
  }
  puVar2 = &param_2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef uStack00000024

#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_18 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c380
 */

undefined8 recovered_1000c380(undefined4 *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;

  if (param_1 == (undefined4 *)0x0) {
    iVar1 = 0;
    iVar5 = 0;
    goto LAB_1000c6f8;
  }
  iVar1 = param_1[0xe];
  iVar5 = param_1[0x10];
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar2 = param_1[0xd];
  iVar5 = param_2 - (iVar5 + iVar1);
  iVar1 = param_1[0xf];
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar1 = param_3 - (iVar1 + iVar2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  uVar11 = 0;
  switch((uintptr_t)(*param_1)) {
  case 1:
    uVar10 = recovered_1000dc70((undefined *)param_1[2],param_1[10] + (uint)(param_1[10] == 0));
LAB_1000c6a5:
    uVar11 = uVar10;
    break;
  case 2:
    uVar11 = 0x1000000010;
    break;
  case 3:
    lVar12 = recovered_1000dc70((undefined *)param_1[2],param_1[10] + (uint)(param_1[10] == 0));
    iVar1 = 0xc;
    if (0xcffffffff < lVar12) {
      iVar1 = (int)((ulonglong)lVar12 >> 0x20);
    }
    uVar11 = CONCAT44(iVar1 + 0xc,(int)lVar12 + 0x14);
    break;
  case 4:
    break;
  case 5:
    uVar9 = param_1[5];
    if (uVar9 < 2) {
      local_24 = 0;
      local_18 = 0;
      iVar2 = local_24;
      if (uVar9 != 0) goto LAB_1000c58a;
    }
    else {
      iVar2 = (uVar9 - 1) * param_1[6];
LAB_1000c58a:
      iVar7 = 0;
      local_24 = 0;
      local_28 = 0;
      uVar8 = 0;
      local_18 = iVar2;
      do {
        piVar4 = (int *)(param_1[4] + iVar7);
        if (param_1[4] == 0) {
          piVar4 = (int *)0x0;
        }
        if ((piVar4 == (int *)0x0) || (*piVar4 != 4)) {
          uVar11 = recovered_1000c380(piVar4,iVar5,iVar1);
          iVar2 = (int)((ulonglong)uVar11 >> 0x20);
          local_18 = local_18 + (int)uVar11;
          if (local_24 <= iVar2) {
            local_24 = iVar2;
          }
          uVar9 = param_1[5];
        }
        else {
          local_28 = local_28 + 1;
        }
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x4c;
      } while (uVar8 < uVar9);
      if (iVar5 < local_18) {
        iVar5 = local_18;
      }
      uVar11 = CONCAT44(local_24,iVar5);
      if (local_28 != 0) break;
    }
    uVar11 = CONCAT44(local_24,local_18);
    break;
  case 6:
    uVar9 = param_1[5];
    if (uVar9 < 2) {
      local_24 = 0;
      uVar10 = 0;
      if (uVar9 == 0) goto LAB_1000c6a5;
    }
    else {
      local_24 = (uVar9 - 1) * param_1[6];
    }
    iVar7 = 0;
    iVar2 = 0;
    uVar8 = 0;
    local_28 = 0;
    do {
      piVar4 = (int *)(param_1[4] + iVar7);
      if (param_1[4] == 0) {
        piVar4 = (int *)0x0;
      }
      if ((piVar4 == (int *)0x0) || (*piVar4 != 4)) {
        uVar11 = recovered_1000c380(piVar4,iVar5,iVar1);
        if (iVar2 <= (int)uVar11) {
          iVar2 = (int)uVar11;
        }
        local_24 = local_24 + (int)((ulonglong)uVar11 >> 0x20);
        uVar9 = param_1[5];
      }
      else {
        local_28 = local_28 + 1;
      }
      uVar10 = CONCAT44(local_24,iVar2);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 0x4c;
    } while (uVar8 < uVar9);
    if (iVar1 < local_24) {
      iVar1 = local_24;
    }
    uVar11 = CONCAT44(iVar1,iVar2);
    if (local_28 == 0) goto LAB_1000c6a5;
    break;
  case 7:
    uVar11 = 0;
    if (param_1[5] != 0) {
      iVar7 = 0;
      uVar9 = 0;
      iVar2 = 0;
      local_28 = 0;
      do {
        puVar3 = (undefined4 *)(param_1[4] + iVar7);
        if (param_1[4] == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        uVar11 = recovered_1000c380(puVar3,iVar5,iVar1);
        iVar6 = (int)((ulonglong)uVar11 >> 0x20);
        if (local_28 <= (int)uVar11) {
          local_28 = (int)uVar11;
        }
        if (iVar2 <= iVar6) {
          iVar2 = iVar6;
        }
        uVar11 = CONCAT44(iVar2,local_28);
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 0x4c;
      } while (uVar9 < (uint)param_1[5]);
    }
    break;
  case 8:
    in_ECX = (char *)param_1[2];
    if ((in_ECX == (char *)0x0) || (*in_ECX == '\0')) {
      in_ECX = (char *)param_1[3];
    }
    lVar12 = recovered_1000dc70(in_ECX,param_1[10] + (uint)(param_1[10] == 0));
    iVar1 = 100;
    if (100 < (int)lVar12) {
      iVar1 = (int)lVar12;
    }
    iVar5 = 0x10;
    if (0x10ffffffff < lVar12) {
      iVar5 = (int)((ulonglong)lVar12 >> 0x20);
    }
    uVar11 = CONCAT44(iVar5 + 0xc,iVar1 + 0x14);
    break;
  default:
    uVar11 = 0;
  }
  local_28 = (int)uVar11;
  if ((param_1[1] & 4) != 0) {
    local_28 = 0;
    if (0 < (int)param_1[0xb]) {
      local_28 = param_1[0xb];
    }
  }
  iVar2 = (int)((ulonglong)uVar11 >> 0x20);
  if ((param_1[1] & 8) != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[0xc]) {
      iVar2 = param_1[0xc];
    }
  }
  iVar5 = param_1[0xe];
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar1 = param_1[0x10];
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar1 = iVar5 + local_28 + iVar1;
  iVar7 = param_1[0xd];
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar5 = 0;
  if (0 < (int)param_1[0xf]) {
    iVar5 = param_1[0xf];
  }
  iVar5 = iVar7 + iVar2 + iVar5;
LAB_1000c6f8:
  return CONCAT44(iVar5,iVar1);
}

#undef local_28
#undef local_24
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280900
#define DAT_00280900 (*(uint8_t *)(0x280900U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280900
#define _DAT_00280900 (*(code * *)(0x280900U))
#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_1c (*(undefined4 *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define local_30 (*(undefined1 (*)[48])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c720
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000c720(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_2 == (byte *)0x0) {
    iVar1 = 0;
  }
  else {
    recovered_100024b0(param_2,0,0x2c);
    recovered_100024b0(local_30,0,0x1c);
    iVar2 = 0;
    if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00280800 == 0x50414d57)) &&
       (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) &&
        ((0x103 < _DAT_00280808 && (_DAT_00280900 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280900)(*param_1,local_30);
      if (iVar1 != 0) {
        *param_2 = *param_2 | 1;
        *(undefined4 *)(param_2 + 4) = local_1c;
        *(undefined4 *)(param_2 + 8) = local_18;
        *(undefined4 *)(param_2 + 0xc) = local_2c;
        *(undefined4 *)(param_2 + 0x10) = local_28;
        iVar2 = 1;
      }
    }
    *param_2 = *param_2 | 2;
    iVar1 = recovered_1000a300(param_2 + 0x14);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280900
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280900
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_30

#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(int *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c800
 */

undefined4
recovered_1000c800(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  undefined4 param_7)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar1 = 0;
  if (((param_2 != 0 && param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
     (uVar7 = *(uint *)(param_1 + 4), -1 < (int)uVar7)) {
    uVar2 = *(uint *)(param_1 + 8);
    if ((-1 < (int)uVar2) && (0xc0000000 < uVar7 + 0xc0000000 && uVar2 != 0)) {
      iVar3 = (int)((ulonglong)uVar2 * (ulonglong)uVar7 >> 0x20);
      uVar1 = 0;
      if (iVar3 == 0 &&
          (uint)(0x3fffffff < (uint)((ulonglong)uVar2 * (ulonglong)uVar7)) <= (uint)-iVar3) {
        uVar6 = *(uint *)(param_1 + 0xc);
        uVar7 = uVar7 * 4;
        uVar4 = uVar6;
        if (uVar6 == 0) {
          uVar4 = uVar7;
        }
        if (uVar7 <= uVar4) {
          if ((int)((ulonglong)uVar4 * (ulonglong)uVar2 >> 0x20) == 0) {
            uVar1 = 0;
            if ((0 < (int)param_6 && 0 < (int)param_5) && uVar7 <= uVar6) {
              uVar7 = param_5 + param_3;
              iVar5 = ((int)param_3 >> 0x1f) + (uint)CARRY4(param_5,param_3);
              uVar1 = 0;
              iVar3 = -iVar5;
              if ((SBORROW4(0,iVar5) != SBORROW4(iVar3,(uint)(0x7fffffff < uVar7))) ==
                  (int)(iVar3 - (uint)(0x7fffffff < uVar7)) < 0) {
                uVar2 = param_6 + param_4;
                iVar5 = ((int)param_4 >> 0x1f) + (uint)CARRY4(param_6,param_4);
                uVar1 = 0;
                iVar3 = -iVar5;
                if ((SBORROW4(0,iVar5) != SBORROW4(iVar3,(uint)(0x7fffffff < uVar2))) ==
                    (int)(iVar3 - (uint)(0x7fffffff < uVar2)) < 0) {
                  recovered_100024b0(&local_38,0,0x24);
                  local_38 = *(int *)(param_1 + 0x2c);
                  local_34 = *(uint *)(param_1 + 4);
                  local_30 = *(uint *)(param_1 + 8);
                  local_2c = *(undefined4 *)(param_1 + 0xc);
                  local_28 = param_7;
                  uVar1 = 0;
                  local_24 = 0;
                  if (0 < (int)param_3) {
                    local_24 = param_3;
                  }
                  local_20 = 0;
                  if (0 < (int)param_4) {
                    local_20 = param_4;
                  }
                  uVar6 = local_34;
                  if ((int)uVar7 < (int)local_34) {
                    uVar6 = uVar7;
                  }
                  uVar7 = local_30;
                  if ((int)uVar2 < (int)local_30) {
                    uVar7 = uVar2;
                  }
                  local_18 = uVar7 - local_20;
                  local_1c = uVar6 - local_24;
                  if (0 < local_18 && (local_1c != 0 && (int)local_24 <= (int)uVar6)) {
                    recovered_1000c9c0(&local_38,(int *)param_2,param_3,param_4,param_5,param_6);
                    uVar1 = 1;
                  }
                }
              }
            }
          }
          else {
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}

#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000e5bb
#define DAT_1000e5bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef DAT_1000f4e8
#define DAT_1000f4e8 (*(int *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef DAT_1000f4ec
#define DAT_1000f4ec (*(uint *)(((uintptr_t)pf_module_state + 0x102bU)))
#undef DAT_1000f4f0
#define DAT_1000f4f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x102fU)))
#undef DAT_1000f4f4
#define DAT_1000f4f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1033U)))
#undef DAT_1000f514
#define DAT_1000f514 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1053U)))
#undef DAT_1000f518
#define DAT_1000f518 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1057U)))
#undef DAT_1000f560
#define DAT_1000f560 (*(uint *)(((uintptr_t)pf_module_state + 0x109fU)))
#undef DAT_1000f5a8
#define DAT_1000f5a8 (*(int *)(((uintptr_t)pf_module_state + 0x10e7U)))
#undef DAT_1000f608
#define DAT_1000f608 (*(char *)(((uintptr_t)pf_module_state + 0x1147U)))
#define local_68 (*(int *)(pf_stack_frame + 40))
#define local_60 (*(int *)(pf_stack_frame + 48))
#define local_5c (*(int *)(pf_stack_frame + 52))
#define local_58 (*(int *)(pf_stack_frame + 56))
#define local_54 (*(int *)(pf_stack_frame + 60))
#define local_38 (*(int *)(pf_stack_frame + 88))
#define local_2c (*(uint *)(pf_stack_frame + 100))
#define local_28 (*(int *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9c0
 */

void recovered_1000c9c0(int *in_ECX,int *in_EDX,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  undefined1 *puVar23;
  bool bVar24;
  undefined8 uVar25;
  longlong lVar26;
  char cVar27;

  if (param_6 < 1 || (param_5 < 1 || (in_EDX == (int *)0x0 || in_ECX == (int *)0x0))) {
    return;
  }
  local_5c = *in_EDX;
  if ((((*(byte *)(in_EDX + 1) & 2) != 0) && (local_5c != 3)) && (local_5c != 8)) {
    iVar3 = in_ECX[5];
    iVar13 = iVar3;
    if (iVar3 < param_3) {
      iVar13 = param_3;
    }
    iVar7 = in_ECX[6];
    iVar17 = iVar7;
    if (iVar7 < param_4) {
      iVar17 = param_4;
    }
    iVar14 = iVar3 + in_ECX[7];
    if (param_3 + param_5 < iVar3 + in_ECX[7]) {
      iVar14 = param_3 + param_5;
    }
    iVar3 = iVar7 + in_ECX[8];
    if (param_4 + param_6 < iVar7 + in_ECX[8]) {
      iVar3 = param_4 + param_6;
    }
    if (((iVar17 < iVar3) && (iVar14 - iVar13 != 0 && iVar13 <= iVar14)) && (*in_ECX != 0)) {
      iVar7 = in_EDX[9];
      do {
        puVar23 = (undefined1 *)(in_ECX[3] * iVar17 + *in_ECX + iVar13 * 4);
        iVar20 = iVar14 - iVar13;
        do {
          *puVar23 = (char)((uint)iVar7 >> 0x10);
          puVar23[1] = (char)((uint)iVar7 >> 8);
          puVar23[2] = (char)iVar7;
          puVar23[3] = 0xff;
          puVar23 = puVar23 + 4;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar3);
      local_5c = *in_EDX;
    }
  }
  cVar27 = DAT_1000f608;
  local_68 = in_EDX[0xd];
  local_60 = in_EDX[0xe];
  iVar3 = in_EDX[0xf];
  iVar13 = in_EDX[0x10];
  if (local_60 < 1) {
    local_60 = 0;
  }
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  if (local_68 < 1) {
    local_68 = 0;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar13 = param_5 - (iVar13 + local_60);
  local_58 = 0;
  if (0 < iVar13) {
    local_58 = iVar13;
  }
  iVar3 = param_6 - (iVar3 + local_68);
  local_54 = 0;
  if (0 < iVar3) {
    local_54 = iVar3;
  }
  if (7 < local_5c - 1U) {
    return;
  }
  local_60 = local_60 + param_3;
  local_68 = local_68 + param_4;
  switch((uintptr_t)(local_5c)) {
  case 1:
    uVar25 = recovered_1000dc70((undefined *)in_EDX[2],in_EDX[10] + (uint)(in_EDX[10] == 0));
    iVar7 = (int)((ulonglong)uVar25 >> 0x20);
    iVar3 = in_EDX[7];
    iVar13 = (int)uVar25;
    if (local_58 < (int)uVar25) {
      iVar13 = local_58;
    }
    if (local_54 < iVar7) {
      iVar7 = local_54;
    }
    if (iVar3 == 1) {
      local_60 = local_60 + (local_58 - iVar13) / 2;
      local_68 = local_68 + (local_54 - iVar7) / 2;
LAB_1000d485:
      local_58 = iVar13;
      local_54 = iVar7;
    }
    else {
      if (iVar3 == 2) {
        local_60 = (local_60 + local_58) - iVar13;
        local_68 = (local_68 + local_54) - iVar7;
        goto LAB_1000d485;
      }
      if (iVar3 != 3) goto LAB_1000d485;
    }
    puVar11 = &DAT_1000e5bb;
    if ((undefined *)in_EDX[2] != (undefined *)0x0) {
      puVar11 = (undefined *)in_EDX[2];
    }
    if ((*(byte *)(in_EDX + 1) & 1) == 0) {
      iVar7 = 0x202020;
      if (DAT_1000f608 != '\0') {
        iVar7 = DAT_1000f4e8;
      }
    }
    else {
      iVar7 = in_EDX[8];
    }
    iVar13 = in_EDX[10] + (uint)(in_EDX[10] == 0);
    goto LAB_1000d7ff;
  case 2:
    uVar4 = 0xf4f4f4;
    if (DAT_1000f608 != '\0') {
      uVar4 = DAT_1000f4ec;
    }
    if ((*(byte *)(in_EDX + 1) & 2) != 0) {
      uVar4 = in_EDX[9];
    }
    iVar7 = in_ECX[5];
    iVar17 = iVar7;
    if (iVar7 < local_60) {
      iVar17 = local_60;
    }
    iVar14 = in_ECX[6];
    iVar20 = iVar14;
    if (iVar14 < local_68) {
      iVar20 = local_68;
    }
    iVar22 = iVar7 + in_ECX[7];
    if (local_58 + local_60 < iVar7 + in_ECX[7]) {
      iVar22 = local_58 + local_60;
    }
    iVar7 = iVar14 + in_ECX[8];
    if (local_54 + local_68 < iVar14 + in_ECX[8]) {
      iVar7 = local_54 + local_68;
    }
    if ((((iVar20 < iVar7) && (iVar17 < iVar22)) && (*in_ECX != 0)) && ((0 < iVar13 && (0 < iVar3)))
       ) {
      do {
        puVar23 = (undefined1 *)(in_ECX[3] * iVar20 + *in_ECX + iVar17 * 4);
        iVar3 = iVar17 - iVar22;
        do {
          *puVar23 = (char)(uVar4 >> 0x10);
          puVar23[1] = (char)(uVar4 >> 8);
          puVar23[2] = (char)uVar4;
          puVar23[3] = 0xff;
          puVar23 = puVar23 + 4;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar7);
    }
    break;
  case 3:
    pbVar21 = (byte *)in_ECX[4];
    if (((pbVar21 == (byte *)0x0) || ((*pbVar21 & 1) == 0)) ||
       (iVar7 = *(int *)(pbVar21 + 4), iVar7 < local_60)) {
LAB_1000ce10:
      PF_PART1(local_5c, 0) = 0;
      bVar1 = false;
      bVar2 = 0;
    }
    else {
      PF_PART1(local_5c, 0) = 0;
      iVar17 = *(int *)(pbVar21 + 8);
      if (iVar17 < local_68) goto LAB_1000ce10;
      if (iVar7 < local_60 + local_58) {
        bVar1 = false;
        bVar2 = 0;
        if (iVar17 < local_68 + local_54) {
          if (((iVar7 < in_ECX[5]) || (iVar17 < in_ECX[6])) ||
             (PF_PART1(local_5c, 0) = 0, in_ECX[5] + in_ECX[7] <= iVar7)) goto LAB_1000d839;
          bVar1 = false;
          bVar2 = 0;
          if (iVar17 < in_ECX[6] + in_ECX[8]) {
            PF_PART1(local_5c, 0) = pbVar21[0xc] & 1;
            bVar2 = pbVar21[0x10] & 1;
            bVar1 = true;
          }
        }
      }
      else {
LAB_1000d839:
        PF_PART1(local_5c, 0) = 0;
        bVar1 = false;
        bVar2 = 0;
      }
    }
    uVar4 = 0xf4f4f4;
    if (DAT_1000f608 != '\0') {
      uVar4 = DAT_1000f4ec;
    }
    if ((*(byte *)(in_EDX + 1) & 2) != 0) {
      uVar4 = in_EDX[9];
    }
    if ((byte)local_5c == 0) {
      if (bVar1) {
        local_28 = 0x12;
        local_38 = 0x52;
        local_2c = 0xffffff;
        puVar5 = &DAT_1000f518;
        goto LAB_1000cece;
      }
      iVar7 = in_ECX[5];
      iVar17 = in_ECX[6];
      iVar14 = iVar7;
      if (iVar7 < local_60) {
        iVar14 = local_60;
      }
      iVar20 = iVar17;
      if (iVar17 < local_68) {
        iVar20 = local_68;
      }
      iVar22 = iVar7 + in_ECX[7];
      if (local_58 + local_60 < iVar7 + in_ECX[7]) {
        iVar22 = local_58 + local_60;
      }
      iVar7 = iVar17 + in_ECX[8];
      if (local_54 + local_68 < iVar17 + in_ECX[8]) {
        iVar7 = local_54 + local_68;
      }
      if (((iVar20 < iVar7) && (iVar14 < iVar22)) &&
         ((*in_ECX != 0 && ((0 < iVar13 && (0 < iVar3)))))) {
        do {
          puVar23 = (undefined1 *)(in_ECX[3] * iVar20 + *in_ECX + iVar14 * 4);
          iVar17 = iVar14 - iVar22;
          do {
            *puVar23 = (char)(uVar4 >> 0x10);
            puVar23[1] = (char)(uVar4 >> 8);
            puVar23[2] = (char)uVar4;
            puVar23[3] = 0xff;
            puVar23 = puVar23 + 4;
            iVar17 = iVar17 + 1;
          } while (iVar17 != 0);
          iVar20 = iVar20 + 1;
        } while (iVar20 != iVar7);
      }
LAB_1000d727:
      uVar6 = 0x9a9a9a;
      puVar16 = &DAT_1000f4f0;
    }
    else {
      local_28 = 0xc;
      local_38 = 0x58;
      local_2c = 0;
      puVar5 = &DAT_1000f514;
LAB_1000cece:
      iVar7 = in_ECX[5];
      iVar17 = in_ECX[6];
      iVar14 = iVar7;
      if (iVar7 < local_60) {
        iVar14 = local_60;
      }
      iVar20 = iVar17;
      if (iVar17 < local_68) {
        iVar20 = local_68;
      }
      iVar22 = iVar7 + in_ECX[7];
      if (local_60 + local_58 < iVar7 + in_ECX[7]) {
        iVar22 = local_60 + local_58;
      }
      iVar7 = iVar17 + in_ECX[8];
      if (local_54 + local_68 < iVar17 + in_ECX[8]) {
        iVar7 = local_54 + local_68;
      }
      if ((((iVar20 < iVar7) && (iVar14 < iVar22)) && (*in_ECX != 0)) &&
         ((0 < iVar13 && (0 < iVar3)))) {
        if (DAT_1000f608 != '\0') {
          local_2c = *puVar5;
        }
        uVar12 = (local_2c & 0xff) * local_28 + 0x32 + (uVar4 & 0xff) * local_38 >> 2;
        uVar8 = (local_2c >> 8 & 0xff) * local_28 + 0x32 + (uVar4 >> 8 & 0xff) * local_38 >> 2;
        do {
          pbVar21 = (byte *)(in_ECX[3] * iVar20 + *in_ECX + iVar14 * 4);
          iVar17 = iVar14 - iVar22;
          do {
            *pbVar21 = (byte)(uVar8 * 0x147b >> 0x19) |
                       (byte)(((local_2c >> 0x10 & 0xff) * local_28 + 0x32 +
                              (uVar4 >> 0x10 & 0xff) * local_38) / 100);
            pbVar21[1] = (byte)(uVar12 * 0x147b >> 0x19) | (byte)(uVar8 / 0x19);
            pbVar21[2] = (byte)(uVar12 / 0x19);
            pbVar21[3] = 0xff;
            pbVar21 = pbVar21 + 4;
            iVar17 = iVar17 + 1;
          } while (iVar17 != 0);
          iVar20 = iVar20 + 1;
        } while (iVar20 != iVar7);
      }
      if (!bVar1) goto LAB_1000d727;
      uVar6 = 0x286dc4;
      puVar16 = &DAT_1000f4f4;
    }
    if (cVar27 != '\0') {
      uVar6 = *puVar16;
    }
    recovered_1000b5f0(in_ECX,local_60,local_68,local_58,local_54,uVar6);
    if ((bVar2 != 0) && ((code *)in_EDX[0x11] != (code *)0x0)) {
      (*(code *)in_EDX[0x11])(in_EDX[0x12]);
    }
    if ((*(byte *)(in_EDX + 1) & 1) == 0) {
      iVar7 = 0x202020;
      if (DAT_1000f608 != '\0') {
        iVar7 = DAT_1000f4e8;
      }
    }
    else {
      iVar7 = in_EDX[8];
    }
    puVar11 = &DAT_1000e5bb;
    if ((undefined *)in_EDX[2] != (undefined *)0x0) {
      puVar11 = (undefined *)in_EDX[2];
    }
    local_54 = 0xc;
    if (0xc < iVar3) {
      local_54 = iVar3;
    }
    local_54 = local_54 + -0xc;
    local_58 = 0x14;
    if (0x14 < iVar13) {
      local_58 = iVar13;
    }
    local_58 = local_58 + -0x14;
    local_68 = local_68 + 6;
    local_60 = local_60 + 10;
    iVar13 = in_EDX[10] + (uint)(in_EDX[10] == 0);
    iVar3 = 1;
LAB_1000d7ff:
    recovered_1000e0d0(in_ECX,local_60,local_68,local_58,local_54,(int)puVar11,iVar7,iVar13,iVar3,
                       '\0');
    break;
  case 5:
    cVar27 = '\x01';
    goto LAB_1000ce92;
  case 6:
    cVar27 = '\0';
LAB_1000ce92:
    recovered_1000ddf0(in_ECX,(int)in_EDX,param_3,param_4,param_5,param_6,cVar27);
    break;
  case 7:
    if ((in_EDX[4] != 0) && (in_EDX[5] != 0)) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        iVar13 = in_EDX[4];
        uVar25 = recovered_1000c380((int *)(iVar13 + iVar3),local_58,local_54);
        iVar14 = (int)((ulonglong)uVar25 >> 0x20);
        iVar7 = in_EDX[7];
        iVar17 = (int)uVar25;
        if (local_58 < (int)uVar25) {
          iVar17 = local_58;
        }
        if (local_54 < iVar14) {
          iVar14 = local_54;
        }
        if (iVar7 == 1) {
          iVar22 = (local_58 - iVar17) / 2 + local_60;
          iVar20 = (local_54 - iVar14) / 2 + local_68;
        }
        else if (iVar7 == 2) {
          iVar22 = (local_60 + local_58) - iVar17;
          iVar20 = (local_68 + local_54) - iVar14;
        }
        else {
          iVar20 = local_68;
          iVar22 = local_60;
          if (iVar7 == 3) {
            iVar17 = local_58;
            iVar14 = local_54;
          }
        }
        recovered_1000c9c0(in_ECX,(int *)(iVar13 + iVar3),iVar22,iVar20,iVar17,iVar14);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x4c;
      } while (uVar4 < (uint)in_EDX[5]);
    }
    break;
  case 8:
    pbVar21 = (byte *)in_ECX[4];
    if ((pbVar21 == (byte *)0x0) || ((*pbVar21 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      iVar7 = *(int *)(pbVar21 + 4);
      bVar1 = false;
      if ((local_60 <= iVar7) && (iVar17 = *(int *)(pbVar21 + 8), local_68 <= iVar17)) {
        if (iVar7 < local_60 + local_58) {
          if (iVar17 < local_68 + local_54) {
            bVar1 = false;
            if ((iVar7 < in_ECX[5]) || (iVar17 < in_ECX[6])) goto LAB_1000d80c;
            if (iVar7 < in_ECX[5] + in_ECX[7]) {
              bVar1 = iVar17 < in_ECX[6] + in_ECX[8];
            }
          }
        }
        else {
LAB_1000d80c:
          bVar1 = false;
        }
      }
    }
    if ((char *)in_EDX[2] == (char *)0x0) {
      bVar24 = false;
    }
    else {
      bVar24 = *(char *)in_EDX[2] != '\0';
    }
    uVar4 = in_EDX[1];
    iVar7 = in_EDX[10] + (uint)(in_EDX[10] == 0);
    uVar8 = local_58 - 0x14;
    uVar12 = 0;
    if (0 < (int)uVar8) {
      uVar12 = uVar8;
    }
    iVar17 = 0xc;
    if (0xc < iVar3) {
      iVar17 = iVar3;
    }
    uVar9 = 0xffffff;
    if (DAT_1000f608 != '\0') {
      uVar9 = DAT_1000f560;
    }
    if ((uVar4 & 2) != 0) {
      uVar9 = in_EDX[9];
    }
    bVar2 = (byte)((uVar4 & 0x10) >> 4);
    if (bVar1 && bVar2 == 0) {
      uVar18 = 0xffffff;
      if (DAT_1000f608 != '\0') {
        uVar18 = DAT_1000f518;
      }
      uVar9 = ((uVar9 & 0xff) * 0x5a + 0x32 + (uVar18 & 0xff) * 10 & 0xffff) / 100 |
              (((uVar9 >> 8 & 0xff) * 0x5a + 0x32 + (uVar18 >> 8 & 0xff) * 10 & 0xffff) >> 2) *
              0x147b >> 9 & 0x3ff00 |
              (((uVar9 >> 0x10 & 0xff) * 0x5a + 0x32 + (uVar18 >> 0x10 & 0xff) * 10 & 0xffff) >> 2)
              * 0x147b >> 1 & 0x3ff0000;
    }
    iVar14 = in_ECX[5];
    iVar20 = iVar14;
    if (iVar14 < local_60) {
      iVar20 = local_60;
    }
    iVar22 = in_ECX[6];
    iVar19 = iVar22;
    if (iVar22 < local_68) {
      iVar19 = local_68;
    }
    iVar15 = iVar14 + in_ECX[7];
    if (local_60 + local_58 < iVar14 + in_ECX[7]) {
      iVar15 = local_60 + local_58;
    }
    iVar14 = iVar22 + in_ECX[8];
    if (local_68 + local_54 < iVar22 + in_ECX[8]) {
      iVar14 = local_68 + local_54;
    }
    if ((((iVar19 < iVar14) && (iVar20 < iVar15)) && (*in_ECX != 0)) &&
       ((0 < iVar13 && (0 < iVar3)))) {
      do {
        puVar23 = (undefined1 *)(in_ECX[3] * iVar19 + *in_ECX + iVar20 * 4);
        iVar22 = iVar20 - iVar15;
        do {
          *puVar23 = (char)(uVar9 >> 0x10);
          puVar23[1] = (char)(uVar9 >> 8);
          puVar23[2] = (char)uVar9;
          puVar23[3] = 0xff;
          puVar23 = puVar23 + 4;
          iVar22 = iVar22 + 1;
        } while (iVar22 != 0);
        iVar19 = iVar19 + 1;
      } while (iVar19 != iVar14);
    }
    uVar6 = 0x286dc4;
    if (cVar27 != '\0') {
      uVar6 = DAT_1000f4f4;
    }
    uVar10 = 0x9a9a9a;
    if (cVar27 != '\0') {
      uVar10 = DAT_1000f4f0;
    }
    if (bVar1) {
      uVar10 = uVar6;
    }
    if ((uVar4 & 0x10) != 0) {
      uVar10 = uVar6;
    }
    recovered_1000b5f0(in_ECX,local_60,local_68,local_58,local_54,uVar10);
    if (((bVar1) && ((*(byte *)(in_ECX[4] + 0x10) & 1) != 0)) &&
       ((code *)in_EDX[0x11] != (code *)0x0)) {
      (*(code *)in_EDX[0x11])(in_EDX[0x12]);
    }
    local_60 = local_60 + 10;
    uVar9 = iVar17 - 0xc;
    if (bVar24 == false) {
      puVar11 = &DAT_1000e5bb;
      if ((undefined *)in_EDX[3] != (undefined *)0x0) {
        puVar11 = (undefined *)in_EDX[3];
      }
      iVar17 = 0x5c5c5c;
      if (DAT_1000f608 != '\0') {
        iVar17 = DAT_1000f5a8;
      }
    }
    else {
      puVar11 = (undefined *)in_EDX[2];
      if ((*(byte *)(in_EDX + 1) & 1) == 0) {
        iVar17 = 0x202020;
        if (DAT_1000f608 != '\0') {
          iVar17 = DAT_1000f4e8;
        }
      }
      else {
        iVar17 = in_EDX[8];
      }
    }
    recovered_1000e0d0(in_ECX,local_60,local_68 + 6,uVar12,uVar9,(int)puVar11,iVar17,iVar7,0,
                       bVar2 & bVar24);
    if ((((uVar4 & 0x10) != 0) && (0x14 < iVar13)) && (0xc < iVar3)) {
      if (bVar24 == false) {
        puVar11 = &DAT_1000e5bb;
      }
      else {
        puVar11 = (undefined *)in_EDX[2];
      }
      lVar26 = recovered_1000dc70(puVar11,iVar7);
      uVar4 = 8;
      if (0x8ffffffff < lVar26) {
        uVar4 = (uint)((ulonglong)lVar26 >> 0x20);
      }
      if (uVar9 < uVar4) {
        uVar4 = uVar9;
      }
      iVar3 = (int)(uVar9 - uVar4) / 2 + local_68 + 6;
      uVar12 = 2;
      if (2 < uVar8) {
        uVar12 = uVar8;
      }
      iVar13 = uVar12 - 2;
      if ((int)lVar26 < (int)(uVar12 - 2)) {
        iVar13 = (int)lVar26;
      }
      iVar7 = iVar13 + 1 + local_60;
      iVar17 = in_ECX[5];
      iVar14 = iVar13 + local_60;
      if (iVar13 + local_60 <= iVar17) {
        iVar14 = iVar17;
      }
      iVar13 = in_ECX[6];
      iVar20 = iVar13;
      if (iVar13 < iVar3) {
        iVar20 = iVar3;
      }
      iVar22 = iVar17 + in_ECX[7];
      if (iVar7 < iVar17 + in_ECX[7]) {
        iVar22 = iVar7;
      }
      iVar7 = iVar13 + in_ECX[8];
      if ((int)(iVar3 + uVar4) < iVar13 + in_ECX[8]) {
        iVar7 = iVar3 + uVar4;
      }
      if (((iVar22 - iVar14 != 0 && iVar14 <= iVar22) && (*in_ECX != 0)) && (iVar20 < iVar7)) {
        uVar6 = 0x286dc4;
        if (DAT_1000f608 != '\0') {
          uVar6 = DAT_1000f4f4;
        }
        do {
          puVar23 = (undefined1 *)(in_ECX[3] * iVar20 + *in_ECX + iVar14 * 4);
          iVar3 = iVar22 - iVar14;
          do {
            *puVar23 = (char)((uint)uVar6 >> 0x10);
            puVar23[1] = (char)((uint)uVar6 >> 8);
            puVar23[2] = (char)uVar6;
            puVar23[3] = 0xff;
            puVar23 = puVar23 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          iVar20 = iVar20 + 1;
        } while (iVar20 != iVar7);
      }
    }
  }
  return;
}

#undef DAT_1000e5bb
#undef DAT_1000f4e8
#undef DAT_1000f4ec
#undef DAT_1000f4f0
#undef DAT_1000f4f4
#undef DAT_1000f514
#undef DAT_1000f518
#undef DAT_1000f560
#undef DAT_1000f5a8
#undef DAT_1000f608
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_38
#undef local_2c
#undef local_28

#define local_2b0 (*(int *)(pf_stack_frame + 16))
#define local_2ac (*(int *)(pf_stack_frame + 20))
#define local_2a8 (*(int *)(pf_stack_frame + 24))
#define local_2a4 (*(int *)(pf_stack_frame + 28))
#define local_2a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_29c (*(undefined4 *)(pf_stack_frame + 36))
#define local_298 (*(undefined4 *)(pf_stack_frame + 40))
#define local_294 (*(int *)(pf_stack_frame + 44))
#define local_290 (*(int *)(pf_stack_frame + 48))
#define local_28c (*(undefined1 (*)[652])(pf_stack_frame + 52))
#define local_274 (*(uint *)(pf_stack_frame + 76))
#define local_270 (*(uint *)(pf_stack_frame + 80))
#define local_264 (*(byte *)(pf_stack_frame + 92))
#define local_23c (*(uint *)(pf_stack_frame + 132))
#define local_238 (*(uint *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d870
 */

undefined4 recovered_1000d870(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[736] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar4 = 0;
  if ((param_2 != 0 && param_1 != (int *)0x0) && (*param_1 != 0)) {
    recovered_100024b0(local_28c,0,0x278);
    iVar1 = recovered_1000a070(param_1,local_28c);
    if ((iVar1 != 0) && ((local_264 & 0x11) == 0)) {
      if (local_23c != 0) {
        local_274 = local_23c;
      }
      if (local_238 == 0) {
        local_238 = local_270;
      }
      if (local_274 == 0) {
        local_274 = param_1[1];
      }
      if (local_238 == 0) {
        local_238 = param_1[2];
      }
      iVar1 = recovered_10009c00(param_1,local_274,local_238);
      if ((iVar1 != 0) && (param_1[0xb] != 0)) {
        recovered_100024b0(&local_2b0,0,0x24);
        local_2b0 = param_1[0xb];
        local_2ac = param_1[1];
        local_2a8 = param_1[2];
        local_2a4 = param_1[3];
        local_2a0 = param_3;
        local_29c = 0;
        local_298 = 0;
        iVar3 = local_2a8;
        iVar1 = local_2ac;
        if ((0 < local_2a8 && 0 < local_2ac) && local_2b0 != 0) {
          iVar1 = param_1[4];
          iVar3 = 0;
          do {
            puVar2 = (undefined1 *)(local_2a4 * iVar3 + local_2b0);
            iVar5 = local_2ac;
            do {
              *puVar2 = (char)((uint)iVar1 >> 0x10);
              puVar2[1] = (char)((uint)iVar1 >> 8);
              puVar2[2] = (char)iVar1;
              puVar2[3] = 0xff;
              puVar2 = puVar2 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar3 = iVar3 + 1;
          } while (iVar3 != local_2a8);
          iVar1 = param_1[1];
          iVar3 = param_1[2];
        }
        local_294 = local_2ac;
        local_290 = local_2a8;
        recovered_1000c9c0(&local_2b0,(int *)param_2,0,0,iVar1,iVar3);
        uVar4 = recovered_10009730(param_1,(byte *)param_1[0xc],(byte *)param_1[0xb],param_1[1],
                                   param_1[2],param_1[3],param_1[4]);
      }
    }
  }
  return uVar4;
}

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
#undef local_274
#undef local_270
#undef local_264
#undef local_23c
#undef local_238

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef DAT_00280974
#define DAT_00280974 (*(uint8_t *)(0x280974U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(code * *)(0x28089cU))
#undef _DAT_00280974
#define _DAT_00280974 (*(code * *)(0x280974U))
#define local_844 (*(undefined1 (*)[2116])(pf_stack_frame + 28))
#define local_81c (*(uint *)(pf_stack_frame + 68))
#define local_5cc (*(undefined1 (*)[1484])(pf_stack_frame + 660))
#define local_354 (*(int (*)[213])(pf_stack_frame + 1292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000da30(undefined4 *param_1)

{
  unsigned char pf_stack_frame[2176] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;

  uVar4 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_1[0xe] != 0)) {
    recovered_100024b0(local_354,0,0x340);
    piVar1 = (int *)*param_1;
    piVar2 = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar2 = local_354;
    }
    if ((*piVar2 == 0) && (iVar3 = recovered_10008e90(piVar2,param_1 + 1), iVar3 == 0)) {
      return 0;
    }
    piVar7 = local_354;
    if (piVar1 != (int *)0x0) {
      piVar7 = piVar1;
    }
    piVar7[0xf] = 0;
    iVar3 = recovered_1000a070(piVar2,local_844);
    if ((iVar3 != 0) && ((local_81c & 0x11) == 0)) {
      uVar6 = 0;
      while( true ) {
        recovered_100024b0(local_5cc,0,0x278);
        recovered_1000a070(piVar2,local_5cc);
        if (((((code *)param_1[0xf] != (code *)0x0) &&
             (iVar3 = (*(code *)param_1[0xf])(piVar2,local_5cc,param_1[0x10]), iVar3 == 0)) ||
            (iVar3 = (*(code *)param_1[0xe])(piVar2,param_1[0x10]), iVar3 == 0)) ||
           (uVar6 = uVar6 + 1, param_1[0x11] - 1 < uVar6)) break;
        uVar8 = param_1[0x12] + (uint)(param_1[0x12] == 0);
        do {
          uVar5 = 0x20c49b;
          if (uVar8 < 0x20c49b) {
            uVar5 = uVar8;
          }
          if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
              ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x178 || (_DAT_00280974 == (code *)0x0)))))
              ) || (iVar3 = (*_DAT_00280974)(uVar5 * 2000), iVar3 == 0)) {
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x9f < _DAT_00280808 && (_DAT_0028089c != (code *)0x0)))) {
              (*_DAT_0028089c)();
            }
            break;
          }
          uVar8 = uVar8 - uVar5;
        } while (uVar8 != 0);
        piVar7[0xf] = 0;
        iVar3 = recovered_1000a070(piVar2,local_844);
        if ((iVar3 == 0) || ((local_81c & 0x11) != 0)) break;
      }
    }
    recovered_1000a6a0(piVar2);
    uVar4 = 1;
  }
  return uVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028089c
#undef DAT_00280974
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028089c
#undef _DAT_00280974
#undef local_844
#undef local_81c
#undef local_5cc
#undef local_354

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280978
#define DAT_00280978 (*(uint8_t *)(0x280978U))
#undef DAT_00280a10
#define DAT_00280a10 (*(uint8_t *)(0x280a10U))
#undef DAT_1000e5bb
#define DAT_1000e5bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_00280978
#define _DAT_00280978 (*(code * *)(0x280978U))
#undef _DAT_00280a10
#define _DAT_00280a10 (*(code * *)(0x280a10U))
#define local_4c (*(int *)(pf_stack_frame + 20))
#define local_48 (*(int *)(pf_stack_frame + 24))
#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_3c (*(int *)(pf_stack_frame + 36))
#define local_34 (*(int *)(pf_stack_frame + 44))
#define local_30 (*(int *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000dc70(undefined *in_ECX,undefined4 in_EDX)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;

  recovered_100024b0(&local_34,0,0x20);
  recovered_100024b0(&local_4c,0,0x18);
  puVar2 = &DAT_1000e5bb;
  if (in_ECX != (undefined *)0x0) {
    puVar2 = in_ECX;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x213 < _DAT_00280808 && (_DAT_00280a10 != (code *)0x0)) &&
      (iVar1 = (*_DAT_00280a10)(0,puVar2,in_EDX,&local_34), iVar1 != 0)))) {
LAB_1000ddcb:
    if (local_34 < 1) {
      local_34 = 0;
    }
    iVar1 = 0;
    if (0 < local_30) {
      iVar1 = local_30;
    }
  }
  else {
    local_34 = 0;
    iVar1 = 0;
    if (_DAT_00280800 != 0x50414d57) goto LAB_1000dddd;
    if (_DAT_00280804 != 0) {
      local_34 = 0;
      if (_DAT_00280808 < 0xc) goto LAB_1000dddd;
      local_34 = 0;
      if (_DAT_00280808 < 0x17c) goto LAB_1000dddd;
      if ((_DAT_00280978 != (code *)0x0) &&
         (iVar1 = (*_DAT_00280978)(puVar2,0xffffffff,in_EDX,0,&local_4c), iVar1 != 0)) {
        if ((local_48 != 0 || local_4c != 0) &&
           ((((_DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
            ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
          (*_DAT_00280850)(local_4c);
        }
        local_34 = local_40;
        local_30 = local_3c;
        goto LAB_1000ddcb;
      }
    }
    local_34 = 0;
    iVar1 = 0;
  }
LAB_1000dddd:
  return CONCAT44(iVar1,local_34);
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280978
#undef DAT_00280a10
#undef DAT_1000e5bb
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280978
#undef _DAT_00280a10
#undef local_4c
#undef local_48
#undef local_40
#undef local_3c
#undef local_34
#undef local_30

#define local_4c (*(int *)(pf_stack_frame + 20))
#define local_48 (*(int *)(pf_stack_frame + 24))
#define local_44 (*(int *)(pf_stack_frame + 28))
#define local_28 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddf0
 */

void recovered_1000ddf0(int *in_ECX,int in_EDX_00,int param_3,int param_4,int param_5,int param_6,
                       char param_7)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  iVar3 = *(int *)(in_EDX_00 + 0x38);
  iVar1 = *(int *)(in_EDX_00 + 0x40);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar11 = *(int *)(in_EDX_00 + 0x34);
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  iVar8 = *(int *)(in_EDX_00 + 0x3c);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  iVar5 = param_3 + iVar3;
  iVar1 = param_5 - (iVar1 + iVar3);
  iVar3 = param_4 + iVar11;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar11 = param_6 - (iVar8 + iVar11);
  local_44 = 0;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  iVar8 = iVar3;
  if (param_7 != '\0') {
    iVar8 = iVar5;
  }
  uVar7 = *(uint *)(in_EDX_00 + 0x14);
  if (1 < uVar7) {
    local_44 = (uVar7 - 1) * *(int *)(in_EDX_00 + 0x18);
  }
  if (uVar7 != 0 && *(int *)(in_EDX_00 + 0x10) != 0) {
    iVar6 = 0;
    iVar12 = 0;
    uVar9 = 0;
    do {
      if (*(int *)(*(int *)(in_EDX_00 + 0x10) + iVar6) == 4) {
        iVar12 = iVar12 + 1;
      }
      else {
        uVar13 = recovered_1000c380((undefined4 *)(*(int *)(in_EDX_00 + 0x10) + iVar6),iVar1,iVar11)
        ;
        iVar2 = (int)((ulonglong)uVar13 >> 0x20);
        if (param_7 != '\0') {
          iVar2 = (int)uVar13;
        }
        local_44 = local_44 + iVar2;
        uVar7 = *(uint *)(in_EDX_00 + 0x14);
      }
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 0x4c;
    } while (uVar9 < uVar7);
    if (iVar12 == 0) {
      local_28 = 0;
    }
    else {
      iVar6 = iVar11;
      if (param_7 != '\0') {
        iVar6 = iVar1;
      }
      local_28 = 0;
      if (0 < iVar6 - local_44) {
        local_28 = iVar6 - local_44;
      }
      local_28 = local_28 / iVar12;
    }
    if (uVar7 != 0) {
      iVar6 = 0;
      uVar7 = 0;
      do {
        iVar12 = *(int *)(in_EDX_00 + 0x10);
        in_EDX = (int *)(iVar12 + iVar6);
        uVar14 = recovered_1000c380(in_EDX,iVar1,iVar11);
        iVar12 = *(int *)(iVar12 + iVar6);
        uVar13 = CONCAT44(iVar11,iVar1);
        if (iVar12 != 4) {
          uVar13 = uVar14;
        }
        iVar10 = (int)((ulonglong)uVar13 >> 0x20);
        iVar2 = (int)uVar13;
        iVar4 = local_28;
        if (param_7 == '\0') {
          iVar10 = *(int *)(in_EDX_00 + 0x1c);
          local_48 = iVar2;
          if (iVar10 == 3) {
            local_48 = iVar1;
          }
          if (iVar12 != 4) {
            iVar4 = (int)((ulonglong)uVar14 >> 0x20);
          }
          if ((iVar10 == 1) && (local_48 < iVar1)) {
            iVar2 = (iVar1 - iVar2) / 2 + iVar5;
          }
          else {
            if (local_48 < iVar1) {
              iVar2 = (iVar5 + iVar1) - iVar2;
            }
            else {
              iVar2 = iVar5;
            }
            if (iVar10 != 2) {
              iVar2 = iVar5;
            }
          }
          iVar10 = iVar8;
          local_4c = iVar4;
LAB_1000df67:
        }
        else {
          if (iVar12 != 4) {
            iVar4 = (int)uVar14;
          }
          iVar12 = *(int *)(in_EDX_00 + 0x1c);
          local_4c = iVar10;
          if (iVar12 == 3) {
            local_4c = iVar11;
          }
          iVar2 = iVar8;
          local_48 = iVar4;
          if ((iVar12 == 1) && (local_4c < iVar11)) {
            iVar10 = (iVar11 - iVar10) / 2 + iVar3;
            goto LAB_1000df67;
          }
          if (local_4c < iVar11) {
            iVar10 = (iVar3 + iVar11) - iVar10;
          }
          else {
            iVar10 = iVar3;
          }
          if (iVar12 != 2) {
            iVar10 = iVar3;
          }
        }
        iVar8 = iVar8 + iVar4 + *(int *)(in_EDX_00 + 0x18);
        recovered_1000c9c0(in_ECX,in_EDX,iVar2,iVar10,local_48,local_4c);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x4c;
      } while (uVar7 < *(uint *)(in_EDX_00 + 0x14));
    }
  }
  return;
}

#undef local_4c
#undef local_48
#undef local_44
#undef local_28

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280978
#define DAT_00280978 (*(uint8_t *)(0x280978U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_00280978
#define _DAT_00280978 (*(code * *)(0x280978U))
#define local_58 (*(int *)(pf_stack_frame + 24))
#define local_44 (*(int *)(pf_stack_frame + 44))
#define local_2c (*(int (*)[11])(pf_stack_frame + 68))
#define local_20 (*(uint *)(pf_stack_frame + 80))
#define local_1c (*(uint *)(pf_stack_frame + 84))
#define local_18 (*(int *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e0d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000e0d0(int *in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6,
                       int param_7,undefined4 param_8,int param_9,char param_10)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;

  recovered_100024b0(local_2c,0,0x18);
  if (in_ECX == (int *)0x0) {
    return;
  }
  if ((param_5 < 1 || param_4 < 1) || (param_6 == 0 || *in_ECX == 0)) {
    return;
  }
  if (_DAT_00280800 != 0x50414d57) {
    return;
  }
  if (_DAT_00280804 == 0) {
    return;
  }
  if (_DAT_00280808 < 0xc) {
    return;
  }
  if (_DAT_00280808 < 0x17c) {
    return;
  }
  if (_DAT_00280978 == (code *)0x0) {
    return;
  }
  iVar1 = (*_DAT_00280978)(param_6,0xffffffff,param_8,param_7 << 8 | 0xff,local_2c);
  if (iVar1 == 0) {
    return;
  }
  if (local_2c[0] == 0) {
    return;
  }
  if ((param_10 == '\0') || ((int)local_20 < param_4 + -2)) {
    iVar1 = in_EDX;
    if (param_9 == 2) {
      if ((int)local_20 < param_4) {
        iVar1 = (param_4 + in_EDX) - local_20;
      }
    }
    else if ((param_9 == 1) && (param_4 - local_20 != 0 && (int)local_20 <= param_4)) {
      iVar1 = (int)(param_4 - local_20) / 2 + in_EDX;
    }
  }
  else {
    iVar1 = ((in_EDX + param_4) - local_20) + -2;
  }
  local_58 = param_3;
  if (param_5 - local_1c != 0 && (int)local_1c <= param_5) {
    if (local_1c == 0) goto LAB_1000e47b;
    local_58 = (int)(param_5 - local_1c) / 2 + param_3;
  }
  uVar3 = 0;
  local_44 = local_58;
  do {
    iVar4 = uVar3 + local_58;
    if (((param_3 <= iVar4) && (-1 < iVar4 && iVar4 < param_5 + param_3)) &&
       (local_20 != 0 && iVar4 < in_ECX[2])) {
      uVar8 = 0;
      do {
        iVar5 = iVar1 + uVar8;
        if (((((in_EDX <= iVar5) && (-1 < iVar5 && iVar5 < param_4 + in_EDX)) &&
             ((iVar5 < in_ECX[1] && ((*in_ECX != 0 && (iVar4 < in_ECX[2])))))) &&
            (in_ECX[5] <= iVar5)) &&
           (((in_ECX[6] <= iVar4 && (iVar5 < in_ECX[5] + in_ECX[7])) &&
            (iVar4 < in_ECX[6] + in_ECX[8])))) {
          iVar5 = local_18 * uVar3 + local_2c[0] + 1;
          uVar6 = (uint)*(byte *)(iVar5 + 2 + uVar8 * 4);
          if (uVar6 != 0) {
            iVar7 = *in_ECX + iVar1 * 4 + in_ECX[3] * local_44;
            if (uVar6 == 0xff) {
              *(undefined1 *)(iVar7 + uVar8 * 4) = *(undefined1 *)(iVar5 + -1 + uVar8 * 4);
              *(undefined1 *)(iVar7 + 1 + uVar8 * 4) = *(undefined1 *)(iVar5 + uVar8 * 4);
              *(undefined1 *)(iVar7 + 2 + uVar8 * 4) = *(undefined1 *)(iVar5 + 1 + uVar8 * 4);
            }
            else {
              uVar2 = uVar6 ^ 0xff;
              *(char *)(iVar7 + uVar8 * 4) =
                   (char)((ulonglong)
                          (*(byte *)(iVar5 + -1 + uVar8 * 4) * uVar6 + 0x7f +
                          *(byte *)(iVar7 + uVar8 * 4) * uVar2) * 0x1010102 >> 0x20);
              *(char *)(iVar7 + 1 + uVar8 * 4) =
                   (char)((ulonglong)
                          (*(byte *)(iVar5 + uVar8 * 4) * uVar6 + 0x7f +
                          *(byte *)(iVar7 + 1 + uVar8 * 4) * uVar2) * 0x1010102 >> 0x20);
              *(char *)(iVar7 + 2 + uVar8 * 4) =
                   (char)((ulonglong)
                          (*(byte *)(iVar5 + 1 + uVar8 * 4) * uVar6 + 0x7f +
                          *(byte *)(iVar7 + 2 + uVar8 * 4) * uVar2) * 0x1010102 >> 0x20);
            }
            *(undefined1 *)(iVar7 + 3 + uVar8 * 4) = 0xff;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_20);
    }
    uVar3 = uVar3 + 1;
    local_44 = local_44 + 1;
  } while (uVar3 < local_1c);
LAB_1000e47b:
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
    (*_DAT_00280850)(local_2c[0]);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280978
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280978
#undef local_58
#undef local_44
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18

/* Release 1.1 aggregate exports. */
PFUIInsets pf_ui_insets(int32_t all){return (PFUIInsets){all,all,all,all};}
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y){return (PFUIInsets){y,x,y,x};}
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l){return (PFUIInsets){t,r,b,l};}
PFUIView pf_ui_view_empty(void){PFUIView v;recovered_1000bdf0(&v);return v;}
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
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height){PFUIWindowSpec value;recovered_10008840(&value,title,width,height);return value;}
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
