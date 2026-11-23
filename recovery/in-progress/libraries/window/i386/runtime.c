/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000e144
#define DAT_1000e144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x433U)))
#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bf0
 */

/* WARNING: Removing unreachable block (ram,0x10000c2c) */

void recovered_10000bf0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000e144 = 0;
    recovered_10000c50();
    DAT_1000e14c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e144
#undef DAT_1000e14c

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000e144
#define DAT_1000e144 (*(char *)(((uintptr_t)pf_module_state + 0x433U)))
#undef DAT_1000e148
#define DAT_1000e148 (*(int *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(int *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000c50(void)

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
  if (DAT_1000e144 != '\0') {
    return;
  }
  DAT_1000e148 = 0;
  DAT_1000e150 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_10000cbb;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_10000cbb:
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
        if (iVar9 == 0) goto LAB_10000e10;
      }
      do {
        recovered_10004fb0((int *)local_9c);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000e148 != 0) goto LAB_10000e4b;
    }
  }
LAB_10000e10:
  recovered_10004fb0((int *)local_9c);
LAB_10000e4b:
  if (DAT_1000e150 == 0) {
    DAT_1000e150 = DAT_1000e148;
  }
  DAT_1000e144 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000e144
#undef DAT_1000e148
#undef DAT_1000e150
#undef _DAT_0028008c
#undef local_9c

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e70
 */

/* WARNING: Removing unreachable block (ram,0x10000ebc) */

void recovered_10000e70(undefined4 param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000ee0(param_3);
    DAT_1000e14c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e14c

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000e148
#define DAT_1000e148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(int * *)(((uintptr_t)pf_module_state + 0x43fU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee0
 */

bool recovered_10000ee0(int param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int in_EDX;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;

  iVar10 = 0;
  bVar11 = false;
  if (param_1 != 0 && (in_EDX != 0 && in_ECX != 0)) {
    recovered_10000c50();
    local_18 = DAT_1000e148;
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
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10000fe0;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10000fe0:
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
      piVar1 = DAT_1000e148;
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
    } while (iVar10 != param_1);
    piVar5 = (int *)&DAT_1000e148;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10004fb0(&local_1c);
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
    if (DAT_1000e150 == (int *)0x0) {
      DAT_1000e150 = DAT_1000e148;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_1000e148
#undef DAT_1000e150
#undef local_1c
#undef local_18

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001120
 */

/* WARNING: Removing unreachable block (ram,0x1000116c) */

void recovered_10001120(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000ee0(1);
    DAT_1000e14c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e14c

#undef DAT_1000e148
#define DAT_1000e148 (*(int * *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

/* WARNING: Removing unreachable block (ram,0x100011dc) */

int recovered_100011a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000c50();
  iVar1 = 0;
  for (piVar2 = DAT_1000e148; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_1000e14c = 0;
  return iVar1;
}

#undef DAT_1000e148
#undef DAT_1000e14c

#undef DAT_1000e148
#define DAT_1000e148 (*(int *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001220
 */

/* WARNING: Removing unreachable block (ram,0x1000125c) */

void recovered_10001220(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000c50();
  for (iVar1 = DAT_1000e148; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000e14c = 0;
  return;
}

#undef DAT_1000e148
#undef DAT_1000e14c

#undef DAT_1000e148
#define DAT_1000e148 (*(int * *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012a0
 */

/* WARNING: Removing unreachable block (ram,0x100012dc) */

int recovered_100012a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_10000c50();
  iVar2 = 0;
  for (piVar1 = DAT_1000e148; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_1000e14c = 0;
  return iVar2;
}

#undef DAT_1000e148
#undef DAT_1000e14c

#undef DAT_1000e148
#define DAT_1000e148 (*(int *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001310
 */

/* WARNING: Removing unreachable block (ram,0x1000134c) */

void recovered_10001310(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_10000c50();
  for (iVar1 = DAT_1000e148; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000e14c = 0;
  return;
}

#undef DAT_1000e148
#undef DAT_1000e14c

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

/* WARNING: Removing unreachable block (ram,0x100013dc) */

uint * recovered_10001390(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    puVar2 = recovered_10001400((uint *)0xffffffff);
    DAT_1000e14c = 0;
    return puVar2;
  }
  do {
  } while( true );
}

#undef DAT_1000e14c

#undef DAT_1000e148
#define DAT_1000e148 (*(uint * *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint * *)(((uintptr_t)pf_module_state + 0x43fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001400
 */

uint * recovered_10001400(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int in_ECX;
  uint *in_EDX;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (0xf < in_ECX + 0xfU) {
    recovered_10000c50();
    puVar3 = DAT_1000e148;
    puVar4 = DAT_1000e150;
    if (DAT_1000e150 == (uint *)0x0) {
      puVar4 = DAT_1000e148;
    }
    if (puVar4 != (uint *)0x0) {
      uVar9 = in_ECX + 0xfU & 0xfffffff0;
      puVar5 = (uint *)((int)in_EDX + 0xfU & 0xfffffff0);
      puVar6 = puVar4;
      do {
        if (((char)puVar6[3] == '\x01') && (uVar10 = *puVar6, uVar9 <= uVar10)) {
          puVar1 = puVar6 + 4;
          uVar8 = 0;
          puVar7 = puVar1;
          if (puVar1 < in_EDX) {
            if ((in_EDX < (uint *)0xfffffff1) && (puVar1 < (uint *)0xffffffe0)) {
              puVar7 = puVar5;
              if (puVar5 <= puVar6 + 0xc) {
                puVar7 = puVar6 + 0xc;
              }
              uVar8 = (int)puVar7 - (int)puVar1;
              if (uVar8 < uVar10) goto LAB_100014e2;
            }
          }
          else {
LAB_100014e2:
            if ((uVar9 - 1 <= (uint)((int)param_1 - (int)puVar7) && puVar7 <= param_1) &&
               (uVar9 <= uVar10 - uVar8 && uVar8 <= uVar10)) {
              if (uVar9 - 1 < uVar10) {
                bVar2 = 0xffffffef < uVar10;
                if ((uint)(uVar10 - uVar9 < 0x20) <= -(uint)(uVar10 < uVar9)) {
                  bVar2 = 0xffffffdf < uVar9;
                }
                if (!bVar2) {
                  if (uVar8 == 0) {
LAB_100015c4:
                    if ((bool)(~(uVar10 < uVar9) & 0x1f < uVar10 - uVar9)) {
                      DAT_1000e150 = (uint *)((int)puVar6 + uVar9 + 0x10);
                      *(uint *)((int)puVar6 + uVar9 + 0x10) = (uVar10 - uVar9) - 0x10;
                      uVar10 = puVar6[1];
                      *(uint *)((int)puVar6 + uVar9 + 0x14) = uVar10;
                      *(uint **)((int)puVar6 + uVar9 + 0x18) = puVar6;
                      *(undefined1 *)((int)puVar6 + uVar9 + 0x1c) = 1;
                      if (uVar10 != 0) {
                        *(uint **)(uVar10 + 8) = DAT_1000e150;
                      }
                      *puVar6 = uVar9;
                      puVar6[1] = (uint)DAT_1000e150;
                    }
                    else {
                      DAT_1000e150 = (uint *)puVar6[1];
                    }
                    *(undefined1 *)(puVar6 + 3) = 0;
                    if (DAT_1000e150 == (uint *)0x0) {
                      DAT_1000e150 = DAT_1000e148;
                    }
                    return puVar6 + 4;
                  }
                  if ((uVar8 - 1) + uVar9 < uVar10) {
                    uVar8 = uVar8 + uVar9;
                    bVar2 = 0xffffffdf < uVar8;
                    if (-(uint)(uVar10 < uVar8) < (uint)(uVar10 - uVar8 < 0x20)) {
                      bVar2 = 0xffffffef < uVar10;
                    }
                    if (!bVar2) {
                      puVar6 = recovered_10005150();
                      if (puVar6 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar10 = *puVar6;
                      goto LAB_100015c4;
                    }
                  }
                }
              }
              *(undefined1 *)(puVar6 + 3) = 0;
            }
          }
        }
        puVar1 = puVar6 + 1;
        puVar6 = puVar3;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar6 = (uint *)*puVar1;
        }
        if (puVar6 == (uint *)0x0) {
          return (uint *)0x0;
        }
        if (puVar6 == puVar4) {
          return (uint *)0x0;
        }
      } while( true );
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000e148
#undef DAT_1000e150

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

/* WARNING: Removing unreachable block (ram,0x1000167c) */

void recovered_10001630(undefined4 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001400(param_2);
    DAT_1000e14c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e14c

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016a0
 */

/* WARNING: Removing unreachable block (ram,0x100016ec) */

uint * recovered_100016a0(undefined4 param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001400(param_3);
  }
  DAT_1000e14c = 0;
  return puVar2;
}

#undef DAT_1000e14c

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001710
 */

/* WARNING: Removing unreachable block (ram,0x1000175c) */

void recovered_10001710(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001780();
    DAT_1000e14c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000e14c

#undef DAT_1000e150
#define DAT_1000e150 (*(uint * *)(((uintptr_t)pf_module_state + 0x43fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001780
 */

void recovered_10001780(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int in_ECX;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (in_ECX == 0) {
    return;
  }
  recovered_10000c50();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000e150 == puVar3) {
        DAT_1000e150 = puVar2;
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
      DAT_1000e150 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000e150 = puVar2;
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
        if (DAT_1000e150 == puVar2) {
          DAT_1000e150 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000e150 = puVar2;
  return;
}

#undef DAT_1000e150

#undef DAT_1000e14c
#define DAT_1000e14c (*(int *)(((uintptr_t)pf_module_state + 0x43bU)))
#undef DAT_1000e150
#define DAT_1000e150 (*(uint * *)(((uintptr_t)pf_module_state + 0x43fU)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a0
 */

/* WARNING: Removing unreachable block (ram,0x100018ec) */

uint * recovered_100018a0(uint *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;

  iVar1 = DAT_1000e14c;
  { __typeof__(DAT_1000e14c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000e14c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (uint *)0x0) {
    puVar9 = recovered_10001400((uint *)0xffffffff);
    DAT_1000e14c = 0;
    return puVar9;
  }
  if (param_2 == 0) {
    recovered_10001780();
    DAT_1000e14c = 0;
    return (uint *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_1000e14c = 0;
    return (uint *)0x0;
  }
  recovered_10000c50();
  uVar8 = param_2 + 0xf & 0xfffffff0;
  puVar9 = param_1 + -4;
  uVar6 = param_1[-4];
  if (uVar8 <= uVar6) {
    if (uVar6 <= uVar8 - 1) {
      DAT_1000e14c = 0;
      return (uint *)0x0;
    }
    uVar2 = uVar6 - uVar8;
    bVar10 = 0xffffffdf < uVar8;
    if (-(uint)(uVar6 < uVar8) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar6;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_1000e14c = 0;
        return param_1;
      }
      DAT_1000e150 = (uint *)((int)param_1 + uVar8);
      *(uint *)((int)param_1 + uVar8) = uVar2 - 0x10;
      uVar6 = param_1[-3];
      *(uint *)((int)param_1 + uVar8 + 4) = uVar6;
      *(uint **)((int)param_1 + uVar8 + 8) = puVar9;
      *(undefined1 *)((int)param_1 + uVar8 + 0xc) = 1;
      if (uVar6 != 0) {
        *(uint **)(uVar6 + 8) = DAT_1000e150;
      }
      param_1[-4] = uVar8;
      param_1[-3] = (uint)DAT_1000e150;
      DAT_1000e14c = 0;
      return param_1;
    }
    DAT_1000e14c = 0;
    return (uint *)0x0;
  }
  puVar3 = puVar9;
  uVar2 = uVar6;
  uVar5 = uVar6;
  do {
    puVar7 = (uint *)puVar3[1];
    if ((((puVar7 == (uint *)0x0) || ((char)puVar7[3] != '\x01')) || (0xffffffef < uVar2)) ||
       (((uint *)((int)puVar3 + uVar5 + 0x10) != puVar7 || (uVar5 = *puVar7, -uVar2 - 0x11 < uVar5))
       )) break;
    uVar2 = uVar2 + 0x10 + uVar5;
    puVar3 = puVar7;
  } while (uVar2 < uVar8);
  if (uVar8 - 1 < uVar2) {
    bVar10 = 0xffffffdf < uVar8;
    if (-(uint)(uVar2 < uVar8) < (uint)(uVar2 - uVar8 < 0x20)) {
      bVar10 = 0xffffffef < uVar2;
    }
    if (!bVar10) {
      local_20 = DAT_1000e150;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar6 ||
            (((uint *)(uVar6 + (int)param_1) != puVar3 || (-uVar6 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar9;
          DAT_1000e150 = puVar9;
        }
        uVar6 = uVar6 + 0x10 + *puVar3;
        param_1[-4] = uVar6;
        puVar3 = (uint *)puVar3[1];
        param_1[-3] = (uint)puVar3;
        if (puVar3 != (uint *)0x0) {
          puVar3[2] = (uint)puVar9;
        }
      } while (uVar6 < uVar8);
      if (uVar6 < uVar8) {
        DAT_1000e14c = 0;
        return (uint *)0x0;
      }
      uVar4 = recovered_100051b0();
      if ((char)uVar4 != '\0') {
        DAT_1000e150 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000e14c = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10001400((uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_1000e14c = 0;
    return (uint *)0x0;
  }
  if (*puVar9 < uVar8) {
    uVar8 = *puVar9;
  }
  puVar9 = puVar3;
  if (uVar8 < 8) {
LAB_10001b15:
    if (uVar8 == 0) goto LAB_10001b2c;
  }
  else if ((((uint)puVar3 ^ (uint)param_1) & 3) == 0) {
    if (((uint)puVar3 & 3) != 0) {
      puVar7 = puVar3;
      do {
        puVar7 = (uint *)((int)puVar7 + 1);
        uVar6 = *param_1;
        param_1 = (uint *)((int)param_1 + 1);
        *(char *)puVar9 = (char)uVar6;
        puVar9 = (uint *)((int)puVar9 + 1);
        bVar10 = uVar8 == 1;
        uVar8 = uVar8 - 1;
        if (bVar10) break;
      } while (((uint)puVar7 & 3) != 0);
    }
    for (; 0xf < uVar8; uVar8 = uVar8 - 0x10) {
      *puVar9 = *param_1;
      puVar9[1] = param_1[1];
      puVar9[2] = param_1[2];
      puVar9[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar9 = puVar9 + 4;
    }
    for (; 3 < uVar8; uVar8 = uVar8 - 4) {
      uVar6 = *param_1;
      param_1 = param_1 + 1;
      *puVar9 = uVar6;
      puVar9 = puVar9 + 1;
    }
    goto LAB_10001b15;
  }
  uVar6 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar6) = *(undefined1 *)((int)param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar8 != uVar6);
LAB_10001b2c:
  recovered_10001780();
  DAT_1000e14c = 0;
  return puVar3;
}

#undef DAT_1000e14c
#undef DAT_1000e150
#undef local_20

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longlong recovered_10001c40(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (0 < (int)param_3) {
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44(param_2 << (bVar1 & 0x1f) | param_1 >> (0x20 - bVar1 & 0x1f),
                        param_1 << (bVar1 & 0x1f));
      }
      return (ulonglong)(param_1 << (bVar1 - 0x20 & 0x1f)) << 0x20;
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulonglong recovered_10001c90(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (0 < (int)param_3) {
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44(param_2 >> (bVar1 & 0x1f),
                        param_1 >> (bVar1 & 0x1f) | param_2 << (0x20 - bVar1 & 0x1f));
      }
      return (ulonglong)(param_2 >> (bVar1 - 0x20 & 0x1f));
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10001ce0(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;

  uVar1 = param_1;
  if (0 < (int)param_3) {
    uVar1 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44((int)param_2 >> (bVar2 & 0x1f),
                        param_1 >> (bVar2 & 0x1f) | param_2 << (0x20 - bVar2 & 0x1f));
      }
      return CONCAT44(uVar1,(int)param_2 >> (bVar2 - 0x20 & 0x1f));
    }
    param_2 = uVar1;
  }
  return CONCAT44(param_2,uVar1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(uint *)(frame + 20))
#define local_18 (*(uint *)(frame + 16))
undefined8 recovered_10001d20(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[72] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
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
    uVar6 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = 0x3f;
    iVar10 = 0;
    uVar1 = 0;
    uVar6 = 0;
    do {
      bVar4 = (byte)uVar5;
      uVar8 = 1 << (bVar4 & 0x1f);
      uVar2 = 0;
      if ((uVar5 & 0x20) == 0) {
        uVar2 = uVar8;
      }
      if ((uVar5 & 0x20) == 0) {
        uVar8 = 0 << (bVar4 & 0x1f) | 1U >> 0x20 - (bVar4 & 0x1f);
      }
      uVar3 = param_2 >> (bVar4 & 0x1f);
      if ((uVar5 & 0x20) == 0) {
        uVar3 = param_1 >> (bVar4 & 0x1f) | param_2 << 0x20 - (bVar4 & 0x1f);
      }
      uVar11 = iVar10 << 1 | uVar9 >> 0x1f;
      uVar3 = (uVar3 & 1) + uVar9 * 2;
      local_18 = 0;
      local_14 = 0;
      uVar9 = 0;
      uVar7 = 0;
      if (param_4 <= uVar11 && (uint)(uVar3 < param_3) <= uVar11 - param_4) {
        local_14 = param_4;
        uVar9 = uVar2;
        uVar7 = param_3;
        local_18 = uVar8;
      }
      uVar1 = uVar1 | uVar9;
      uVar6 = uVar6 | local_18;
      uVar9 = uVar3 - uVar7;
      iVar10 = (uVar11 - local_14) - (uint)(uVar3 < uVar7);
      bVar12 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar12);
  }
  return CONCAT44(uVar6,uVar1);
}

#undef local_14
#undef local_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10001e10(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

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
      bVar1 = (byte)uVar3 & 0x1f;
      uVar7 = param_2 >> ((byte)uVar3 & 0x1f);
      if ((uVar3 & 0x20) == 0) {
        uVar7 = param_1 >> bVar1 | param_2 << 0x20 - bVar1;
      }
      uVar5 = iVar4 << 1 | uVar2 >> 0x1f;
      uVar7 = (uVar7 & 1) + uVar2 * 2;
      uVar6 = 0;
      uVar8 = 0;
      if (param_4 <= uVar5 && (uint)(uVar7 < param_3) <= uVar5 - param_4) {
        uVar6 = param_4;
        uVar8 = param_3;
      }
      uVar2 = uVar7 - uVar8;
      iVar4 = (uVar5 - uVar6) - (uint)(uVar7 < uVar8);
      bVar9 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar9);
  }
  return CONCAT44(iVar4,uVar2);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_1c (*(uint *)(frame + 24))
#define local_20 (*(uint *)(frame + 20))
#define local_24 (*(uint *)(frame + 16))
undefined8 recovered_10001e80(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[84] = {0};

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
  int iVar13;
  uint uVar14;
  bool bVar15;

  if (param_3 == 0 && param_4 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = (int)param_2 >> 0x1f;
    uVar11 = 0;
    uVar12 = ((param_2 ^ uVar1) - uVar1) - (uint)((param_1 ^ uVar1) < uVar1);
    uVar2 = (int)param_4 >> 0x1f;
    uVar8 = (param_3 ^ uVar2) - uVar2;
    uVar6 = ((param_4 ^ uVar2) - uVar2) - (uint)((param_3 ^ uVar2) < uVar2);
    uVar7 = 0x3f;
    iVar13 = 0;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar5 = (byte)uVar7;
      local_1c = 1 << (bVar5 & 0x1f);
      uVar10 = 0;
      if ((uVar7 & 0x20) == 0) {
        uVar10 = local_1c;
      }
      if ((uVar7 & 0x20) == 0) {
        local_1c = 0 << (bVar5 & 0x1f) | 1U >> 0x20 - (bVar5 & 0x1f);
      }
      uVar4 = uVar12 >> (bVar5 & 0x1f);
      if ((uVar7 & 0x20) == 0) {
        uVar4 = (param_1 ^ uVar1) - uVar1 >> (bVar5 & 0x1f) | uVar12 << 0x20 - (bVar5 & 0x1f);
      }
      uVar14 = iVar13 << 1 | uVar11 >> 0x1f;
      uVar4 = (uVar4 & 1) + uVar11 * 2;
      local_20 = 0;
      local_24 = 0;
      uVar9 = 0;
      uVar11 = 0;
      if (uVar6 <= uVar14 && (uint)(uVar4 < uVar8) <= uVar14 - uVar6) {
        local_20 = local_1c;
        uVar9 = uVar6;
        uVar11 = uVar10;
        local_24 = uVar8;
      }
      uVar3 = uVar3 | uVar11;
      uVar2 = uVar2 | local_20;
      uVar11 = uVar4 - local_24;
      iVar13 = (uVar14 - uVar9) - (uint)(uVar4 < local_24);
      bVar15 = uVar7 != 0;
      uVar7 = uVar7 - 1;
    } while (bVar15);
    uVar1 = uVar3;
    if (param_2 >> 0x1f != param_4 >> 0x1f) {
      uVar1 = -uVar3;
      uVar2 = -(uint)(uVar3 != 0) - uVar2;
    }
  }
  return CONCAT44(uVar2,uVar1);
}

#undef local_1c
#undef local_20
#undef local_24

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10001fd0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar12 = 0;
  }
  else {
    uVar2 = (int)param_2 >> 0x1f;
    uVar13 = ((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2);
    uVar3 = (int)param_4 >> 0x1f;
    uVar6 = (param_3 ^ uVar3) - uVar3;
    uVar4 = ((param_4 ^ uVar3) - uVar3) - (uint)((param_3 ^ uVar3) < uVar3);
    uVar3 = 0;
    uVar5 = 0x3f;
    iVar7 = 0;
    do {
      bVar1 = (byte)uVar5 & 0x1f;
      uVar11 = uVar13 >> ((byte)uVar5 & 0x1f);
      if ((uVar5 & 0x20) == 0) {
        uVar11 = (param_1 ^ uVar2) - uVar2 >> bVar1 | uVar13 << 0x20 - bVar1;
      }
      uVar8 = iVar7 << 1 | uVar3 >> 0x1f;
      uVar11 = (uVar11 & 1) + uVar3 * 2;
      uVar9 = 0;
      uVar10 = 0;
      if (uVar4 <= uVar8 && (uint)(uVar11 < uVar6) <= uVar8 - uVar4) {
        uVar9 = uVar6;
        uVar10 = uVar4;
      }
      uVar3 = uVar11 - uVar9;
      iVar7 = (uVar8 - uVar10) - (uint)(uVar11 < uVar9);
      bVar14 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar14);
    uVar2 = -uVar3;
    iVar12 = -(uint)(uVar3 != 0) - iVar7;
    if (-1 < (int)param_2) {
      uVar2 = uVar3;
      iVar12 = iVar7;
    }
  }
  return CONCAT44(iVar12,uVar2);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100020a0(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100020c0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100020e0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10002130(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002180(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021d0
 */

void * recovered_100021d0(void *dst,void *src,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;

  pvVar3 = dst;
  if (7 < bytes) {
    if ((((uint)src ^ (uint)dst) & 3) != 0) goto LAB_100021fa;
    if (((uint)dst & 3) != 0) {
      pvVar5 = dst;
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        uVar1 = *(undefined1 *)src;
        src = (void *)((int)src + 1);
        *(undefined1 *)dst = uVar1;
        dst = (void *)((int)dst + 1);
        bVar6 = bytes == 1;
        bytes = bytes - 1;
        if (bVar6) break;
      } while (((uint)pvVar5 & 3) != 0);
    }
    for (; 0xf < bytes; bytes = bytes - 0x10) {
      *(undefined4 *)dst = *(undefined4 *)src;
      *(undefined4 *)((int)dst + 4) = *(undefined4 *)((int)src + 4);
      *(undefined4 *)((int)dst + 8) = *(undefined4 *)((int)src + 8);
      *(undefined4 *)((int)dst + 0xc) = *(undefined4 *)((int)src + 0xc);
      dst = (void *)((int)dst + 0x10);
      src = (void *)((int)src + 0x10);
    }
    for (; 3 < bytes; bytes = bytes - 4) {
      uVar2 = *(undefined4 *)src;
      src = (void *)((int)src + 4);
      *(undefined4 *)dst = uVar2;
      dst = (void *)((int)dst + 4);
    }
  }
  if (bytes == 0) {
    return pvVar3;
  }
LAB_100021fa:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)dst + uVar4) = *(undefined1 *)((int)src + uVar4);
    uVar4 = uVar4 + 1;
  } while (bytes != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002290
 */

void * recovered_10002290(void *dst,void *src,uint bytes)

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

  if (bytes != 0 && dst != src) {
    if ((dst < src) || (pvVar5 = (void *)((int)src + bytes), pvVar5 <= dst)) {
      puVar7 = dst;
      if ((7 < bytes) && (pvVar5 = dst, (((uint)src ^ (uint)dst) & 3) == 0)) {
        do {
          if (((uint)pvVar5 & 3) == 0) break;
          pvVar5 = (void *)((int)pvVar5 + 1);
          uVar2 = *(undefined1 *)src;
          src = (void *)((int)src + 1);
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          bVar8 = bytes != 1;
          bytes = bytes - 1;
        } while (bVar8);
        for (; 0xf < bytes; bytes = bytes - 0x10) {
          *puVar7 = *(undefined4 *)src;
          puVar7[1] = *(undefined4 *)((int)src + 4);
          puVar7[2] = *(undefined4 *)((int)src + 8);
          puVar7[3] = *(undefined4 *)((int)src + 0xc);
          puVar7 = puVar7 + 4;
          src = (void *)((int)src + 0x10);
        }
        for (; 3 < bytes; bytes = bytes - 4) {
          uVar3 = *(undefined4 *)src;
          src = (void *)((int)src + 4);
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        }
        if (bytes == 0) {
          return dst;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar7 + uVar4) = *(undefined1 *)((int)src + uVar4);
        uVar4 = uVar4 + 1;
      } while (bytes != uVar4);
    }
    else {
      uVar4 = (int)dst + bytes;
      if ((7 < bytes) && ((((uint)pvVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)dst + (bytes - 1)) = *(undefined1 *)((int)src + (bytes - 1));
            uVar1 = bytes - 1;
            if (bytes == 1) break;
            iVar6 = bytes - 1;
            bytes = uVar1;
          } while (((int)dst + iVar6 & 3U) != 0);
          pvVar5 = (void *)((int)src + uVar1);
          uVar4 = (int)dst + uVar1;
          bytes = uVar1;
        }
        for (; 0xf < bytes; bytes = bytes - 0x10) {
          *(undefined4 *)(uVar4 - 4) = *(undefined4 *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 8) = *(undefined4 *)((int)pvVar5 - 8);
          *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)((int)pvVar5 - 0xc);
          *(undefined4 *)(uVar4 - 0x10) = *(undefined4 *)((int)pvVar5 - 0x10);
          uVar4 = uVar4 - 0x10;
          pvVar5 = (void *)((int)pvVar5 - 0x10);
        }
        for (; 3 < bytes; bytes = bytes - 4) {
          puVar7 = (undefined4 *)((int)pvVar5 - 4);
          pvVar5 = (void *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (bytes == 0) {
          return dst;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)pvVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != bytes);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002460
 */

/* WARNING: Variable defined which should be unmapped: dst */

void * recovered_10002460(void *dst,int byte,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;

  piVar1 = dst;
  if (7 < bytes) {
    if (((uint)dst & 3) != 0) {
      pvVar2 = dst;
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        *(char *)piVar1 = (char)byte;
        piVar1 = (int *)((int)piVar1 + 1);
        bVar4 = bytes == 1;
        bytes = bytes - 1;
        if (bVar4) break;
      } while (((uint)pvVar2 & 3) != 0);
    }
    iVar3 = (byte & 0xffU) * 0x1010101;
    for (; 0xf < bytes; bytes = bytes - 0x10) {
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
      piVar1[2] = iVar3;
      piVar1[3] = iVar3;
      piVar1 = piVar1 + 4;
    }
    for (; 3 < bytes; bytes = bytes - 4) {
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
    }
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *(char *)piVar1 = (char)byte;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002510
 */

void recovered_10002510(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < (uint)param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = puVar1 + 1;
      *param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < (uint)param_2; param_2 = param_2 - 0x10) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      param_1 = (undefined1 *)((int)param_1 + 0x10);
    }
    for (; 3 < (uint)param_2; param_2 = param_2 - 4) {
      *(undefined4 *)param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b0
 */

void recovered_100025b0(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < (uint)param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = puVar1 + 1;
      *param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < (uint)param_2; param_2 = param_2 - 0x10) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      param_1 = (undefined1 *)((int)param_1 + 0x10);
    }
    for (; 3 < (uint)param_2; param_2 = param_2 - 4) {
      *(undefined4 *)param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((int)param_1 + 1);
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10002650(char *param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002690
 */

int recovered_10002690(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (7 < (uint)param_3) {
    if (((param_2 ^ param_1) & 3U) != 0) goto LAB_1000272e;
    if ((param_1 & 3U) != 0) {
      uVar6 = param_3;
      uVar7 = param_1;
      do {
        uVar7 = uVar7 + 1;
        bVar1 = (byte)*(uint *)param_1;
        bVar2 = (byte)*(uint *)param_2;
        if (bVar1 != bVar2) goto LAB_10002745;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        param_3 = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = param_3, (uVar7 & 3) != 0));
    }
    for (; 0xf < (uint)param_3; param_3 = param_3 - 0x10) {
      uVar7 = *(uint *)param_1;
      uVar6 = *(uint *)param_2;
      if (uVar7 != uVar6) {
LAB_10002776:
        if ((char)uVar7 == (char)uVar6) {
          uVar5 = uVar7 >> 8;
          uVar4 = uVar6 >> 8;
          if ((char)(uVar7 >> 8) == (char)(uVar6 >> 8)) {
            uVar5 = uVar7 >> 0x10;
            uVar4 = uVar6 >> 0x10;
            if ((char)(uVar7 >> 0x10) == (char)(uVar6 >> 0x10)) {
              uVar5 = uVar7 >> 0x18;
              uVar4 = uVar6 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar7;
          uVar4 = uVar6;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar7 = *(uint *)(param_1 + 4);
      uVar6 = *(uint *)(param_2 + 4);
      if (uVar7 != uVar6) goto LAB_10002776;
      uVar7 = *(uint *)(param_1 + 8);
      uVar6 = *(uint *)(param_2 + 8);
      if (uVar7 != uVar6) goto LAB_10002776;
      uVar7 = *(uint *)(param_1 + 0xc);
      uVar6 = *(uint *)(param_2 + 0xc);
      if (uVar7 != uVar6) goto LAB_10002776;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
    }
    for (; 3 < (uint)param_3; param_3 = param_3 - 4) {
      if (*(uint *)param_1 != *(uint *)param_2) {
        iVar3 = recovered_100027c0();
        return iVar3;
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_1000272e:
  uVar7 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + uVar7);
    bVar2 = *(byte *)(param_2 + uVar7);
    if (bVar1 != bVar2) break;
    uVar7 = uVar7 + 1;
    if (param_3 == uVar7) {
      return 0;
    }
  }
LAB_10002745:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c0
 */

int recovered_100027c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *in_ECX;
  char *in_EDX;
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002810(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002830(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002850(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002870(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100028a0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100028c0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100028e0(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002900(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10002920(char *text)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if (text == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    uVar1 = uVar3 + 1;
    iVar2 = uVar3 + 1;
    uVar3 = uVar1;
  } while (text[iVar2] != '\0');
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002960(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

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
      if (bVar1 != *param_2) goto LAB_10001136;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001136:
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100029a0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

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
      if (bVar1 != *param_2) goto LAB_10001176;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001176:
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100029e0(int param_1,int param_2)

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
 * Address: 0x10002a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002a10(int param_1)

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

  if (param_1 == 0) {
    return 0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (*(char *)(param_1 + uVar5) != '\0');
  if (_DAT_00280800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00280804 == 0) {
    return 0;
  }
  if (_DAT_00280808 < 0xc) {
    return 0;
  }
  if (_DAT_00280808 < 0x50) {
    return 0;
  }
  if (_DAT_0028084c == (code *)0x0) {
    return 0;
  }
  puVar4 = (undefined4 *)(*_DAT_0028084c)(uVar7);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  puVar6 = puVar4;
  if (7 < uVar7) {
    if ((((uint)puVar4 ^ param_1) & 3) != 0) goto LAB_10002b28;
    if (((uint)puVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar8) = *(undefined1 *)(param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      uVar7 = uVar7 - uVar1;
      param_1 = param_1 + uVar1;
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *puVar6 = *(undefined4 *)param_1;
      puVar6[1] = *(undefined4 *)(param_1 + 4);
      puVar6[2] = *(undefined4 *)(param_1 + 8);
      puVar6[3] = *(undefined4 *)(param_1 + 0xc);
      param_1 = param_1 + 0x10;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (uVar7 == 0) {
    return (int)puVar4;
  }
LAB_10002b28:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)(param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  return (int)puVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10002b50(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002b90(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_100012bb:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_100012bb;
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
 * Address: 0x10002bf0
 */

int recovered_10002bf0(char *param_1,char *param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10002c50(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10002ca0(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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
          if (cVar4 == '\0') goto LAB_10001363;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001363:
  return pcVar3;
}


#undef DAT_1000de04
#define DAT_1000de04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

undefined * recovered_10002cf0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000de04;
}

#undef DAT_1000de04

#undef PTR_DAT_1000e0a4
#define PTR_DAT_1000e0a4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

undefined ** recovered_10002d10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000e0a4;
}

#undef PTR_DAT_1000e0a4

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
 * Address: 0x10002d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002d30(undefined4 *param_1)

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
  return local_2c;
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

#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dd0
 */

longdouble recovered_10002dd0(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000dd20;
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

#undef DAT_1000dd20

#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e20
 */

void recovered_10002e20(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_1000dd20;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000dd20 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000dd20);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000dd20

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10002ee0(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_2;
  if ((lVar1 != (longdouble)0) || (NAN(lVar1) || NAN((longdouble)0))) {
    lVar1 = (longdouble)param_1 - lVar1 * (longdouble)(int)ROUND((longdouble)param_1 / lVar1);
  }
  else {
    lVar1 = (longdouble)0;
  }
  return lVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10002f40(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  longdouble lVar4;
  longdouble lVar5;

  lVar4 = (longdouble)param_1;
  uVar1 = (uint)ROUND(param_2);
  lVar5 = (longdouble)0;
  if ((((double)(int)uVar1 == param_2) && (!NAN((double)(int)uVar1) && !NAN(param_2))) &&
     (lVar5 = (longdouble)1, uVar1 != 0)) {
    lVar5 = (longdouble)1;
    uVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar4 * lVar5;
      }
      lVar4 = lVar4 * lVar4;
      bVar2 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      lVar5 = (longdouble)1 / lVar5;
    }
  }
  return lVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10002fd0(double param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;

  iVar1 = (int)ROUND((longdouble)param_1);
  lVar2 = (longdouble)iVar1;
  lVar3 = (longdouble)(iVar1 + -1);
  if (lVar2 <= (longdouble)param_1) {
    lVar3 = lVar2;
  }
  return lVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003020(double param_1)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  lVar3 = (longdouble)((int)ROUND(lVar1) + -1);
  if (lVar2 <= lVar1) {
    lVar3 = lVar2;
  }
  lVar2 = (longdouble)1 + lVar3;
  if (lVar1 <= lVar3) {
    lVar2 = lVar3;
  }
  return lVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003080(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd24
#define DAT_1000dd24 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000dd28
#define DAT_1000dd28 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000dd2c
#define DAT_1000dd2c (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_1000dd30
#define DAT_1000dd30 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000dd34
#define DAT_1000dd34 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_1000dd38
#define DAT_1000dd38 (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000dd3c
#define DAT_1000dd3c (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_1000dd40
#define DAT_1000dd40 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000dd44
#define DAT_1000dd44 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000dd48
#define DAT_1000dd48 (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000dd4c
#define DAT_1000dd4c (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000dd50
#define DAT_1000dd50 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000dd78
#define DAT_1000dd78 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003180
 */

longdouble recovered_10003180(double param_1)

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
    lVar2 = (longdouble)DAT_1000dd24;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000dd28 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000dd20;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000dd28 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000dd2c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000dd2c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000dd50 +
            lVar9 / (longdouble)DAT_1000dd4c +
            lVar8 / (longdouble)DAT_1000dd48 +
            lVar7 / (longdouble)DAT_1000dd44 +
            lVar6 / (longdouble)DAT_1000dd40 +
            lVar5 / (longdouble)DAT_1000dd3c +
            lVar4 / (longdouble)DAT_1000dd38 +
            lVar3 / (longdouble)DAT_1000dd34 +
            (lVar10 * lVar2) / (longdouble)DAT_1000dd30 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000dd78;
  }
  return lVar2;
}

#undef DAT_1000dd20
#undef DAT_1000dd24
#undef DAT_1000dd28
#undef DAT_1000dd2c
#undef DAT_1000dd30
#undef DAT_1000dd34
#undef DAT_1000dd38
#undef DAT_1000dd3c
#undef DAT_1000dd40
#undef DAT_1000dd44
#undef DAT_1000dd48
#undef DAT_1000dd4c
#undef DAT_1000dd50
#undef DAT_1000dd78

#undef DAT_1000dda0
#define DAT_1000dda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003290
 */

longlong recovered_10003290(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000dda0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000dda0

#undef DAT_1000dd54
#define DAT_1000dd54 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000dd58
#define DAT_1000dd58 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000dd5c
#define DAT_1000dd5c (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000dd80
#define DAT_1000dd80 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000dd88
#define DAT_1000dd88 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000dd98
#define DAT_1000dd98 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f0
 */

longdouble recovered_100032f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000dd80 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000dd88;
    } while ((longdouble)DAT_1000dd80 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000dd90) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000dd98;
    } while (lVar1 < (longdouble)DAT_1000dd90);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000dd5c +
         (lVar2 * lVar2) / (longdouble)DAT_1000dd58 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000dd54) * lVar1;
}

#undef DAT_1000dd54
#undef DAT_1000dd58
#undef DAT_1000dd5c
#undef DAT_1000dd80
#undef DAT_1000dd88
#undef DAT_1000dd90
#undef DAT_1000dd98

#undef DAT_1000dd60
#define DAT_1000dd60 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000dd64
#define DAT_1000dd64 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000dd68
#define DAT_1000dd68 (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000dd80
#define DAT_1000dd80 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000dd88
#define DAT_1000dd88 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000dd98
#define DAT_1000dd98 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003380
 */

longdouble recovered_10003380(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000dd80 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000dd88;
    } while ((longdouble)DAT_1000dd80 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000dd90) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000dd98;
    } while (lVar1 < (longdouble)DAT_1000dd90);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000dd68 +
         (lVar1 * lVar1) / (longdouble)DAT_1000dd64 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000dd60;
}

#undef DAT_1000dd60
#undef DAT_1000dd64
#undef DAT_1000dd68
#undef DAT_1000dd80
#undef DAT_1000dd88
#undef DAT_1000dd90
#undef DAT_1000dd98

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003410(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd6c
#define DAT_1000dd6c (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003430
 */

undefined8 recovered_10003430(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if ((param_1 != 0.0) || (uVar7 = 0, uVar8 = 0, NAN(param_1))) {
    dVar2 = param_1;
    if (param_1 < -param_1) {
      dVar2 = -param_1;
    }
    dVar3 = (double)DAT_1000dd6c;
    uVar7 = 0x3f;
    uVar9 = 0;
    uVar10 = 0;
    do {
      bVar1 = (byte)uVar7 & 0x1f;
      uVar5 = 1 << ((byte)uVar7 & 0x1f);
      uVar6 = uVar5;
      uVar8 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar7 & 0x20) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      dVar4 = dVar2 - dVar3;
      if (dVar2 < dVar3) {
        uVar6 = 0;
        uVar8 = 0;
        dVar4 = dVar2;
      }
      dVar2 = dVar4;
      uVar10 = uVar10 | uVar8;
      uVar9 = uVar9 | uVar6;
      dVar3 = dVar3 * (double)DAT_1000dd20;
      bVar11 = uVar7 != 0;
      uVar7 = uVar7 - 1;
    } while (bVar11);
    uVar7 = -uVar9;
    uVar8 = -(uint)(uVar9 != 0) - uVar10;
    if (0.0 <= param_1) {
      uVar7 = uVar9;
      uVar8 = uVar10;
    }
  }
  return CONCAT44(uVar8,uVar7);
}

#undef DAT_1000dd20
#undef DAT_1000dd6c

#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd6c
#define DAT_1000dd6c (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034f0
 */

undefined8 recovered_100034f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar4 = 0;
  uVar6 = 0;
  if (0.0 < param_1) {
    dVar2 = (double)DAT_1000dd6c;
    uVar5 = 0x3f;
    uVar4 = 0;
    uVar6 = 0;
    do {
      bVar1 = (byte)uVar5 & 0x1f;
      uVar8 = 1 << ((byte)uVar5 & 0x1f);
      uVar9 = uVar8;
      uVar7 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar5 & 0x20) != 0) {
        uVar9 = 0;
        uVar7 = uVar8;
      }
      dVar3 = param_1 - dVar2;
      if (param_1 < dVar2) {
        uVar9 = 0;
        uVar7 = 0;
        dVar3 = param_1;
      }
      param_1 = dVar3;
      uVar6 = uVar6 | uVar7;
      uVar4 = uVar4 | uVar9;
      dVar2 = dVar2 * (double)DAT_1000dd20;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_1000dd20
#undef DAT_1000dd6c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003580(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  longdouble lVar5;
  longdouble lVar6;

  lVar6 = (longdouble)0;
  if (param_1 != 0 || param_2 != 0) {
    lVar6 = (longdouble)0;
    lVar5 = (longdouble)1;
    do {
      if ((param_1 & 1) != 0) {
        lVar6 = lVar6 + lVar5;
      }
      uVar1 = param_2 << 0x1f;
      lVar5 = lVar5 + lVar5;
      bVar3 = 1 < param_1;
      bVar4 = param_2 != 0;
      uVar2 = -param_2;
      param_2 = param_2 >> 1;
      param_1 = uVar1 | param_1 >> 1;
    } while (bVar4 || uVar2 < bVar3);
  }
  return lVar6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_100035f0(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longdouble lVar6;
  longdouble lVar7;

  if ((int)param_2 < 0) {
    lVar7 = (longdouble)0;
    lVar6 = (longdouble)1;
    uVar2 = -param_1;
    uVar3 = -(uint)(param_1 != 0) - param_2;
    do {
      if ((uVar2 & 1) != 0) {
        lVar7 = lVar6 + lVar7;
      }
      lVar6 = lVar6 + lVar6;
      bVar4 = 1 < uVar2;
      bVar5 = uVar3 != 0;
      uVar1 = -uVar3;
      uVar2 = uVar3 << 0x1f | uVar2 >> 1;
      uVar3 = uVar3 >> 1;
    } while (bVar5 || uVar1 < bVar4);
    lVar7 = -lVar7;
  }
  else {
    lVar7 = (longdouble)0;
    if (param_1 != 0 || param_2 != 0) {
      lVar7 = (longdouble)0;
      lVar6 = (longdouble)1;
      do {
        if ((param_1 & 1) != 0) {
          lVar7 = lVar6 + lVar7;
        }
        lVar6 = lVar6 + lVar6;
        bVar4 = 1 < param_1;
        bVar5 = param_2 != 0;
        uVar2 = -param_2;
        param_1 = param_2 << 0x1f | param_1 >> 1;
        param_2 = param_2 >> 1;
      } while (bVar5 || uVar2 < bVar4);
    }
  }
  return lVar7;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100036b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003720
 */

void recovered_10003720(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_1000dd20;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000dd20 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000dd20);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000dd20

#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003810
 */

longdouble recovered_10003810(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000dd20;
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

#undef DAT_1000dd20

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003870(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;
  longdouble lVar5;

  uVar1 = (uint)ROUND(param_2);
  lVar5 = (longdouble)0;
  if ((((float)(int)uVar1 == param_2) && (!NAN((float)(int)uVar1) && !NAN(param_2))) &&
     (lVar5 = (longdouble)1, uVar1 != 0)) {
    fVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        fVar3 = fVar3 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
    lVar5 = (longdouble)fVar3;
  }
  return lVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003910(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  fVar2 = (float)((int)ROUND(param_1) + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  return (longdouble)fVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003970(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  fVar2 = (float)((int)ROUND(param_1) + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (param_1 <= fVar2) {
    fVar1 = fVar2;
  }
  return (longdouble)fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_100039e0(double param_1)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  lVar3 = (longdouble)((int)ROUND(lVar1) + -1);
  if (lVar2 <= lVar1) {
    lVar3 = lVar2;
  }
  lVar2 = (longdouble)1 + lVar3;
  if (lVar1 <= lVar3) {
    lVar2 = lVar3;
  }
  if ((longdouble)0 <= lVar1) {
    lVar2 = lVar3;
  }
  return lVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003a50(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  fVar2 = (float)((int)ROUND(param_1) + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (param_1 <= fVar2) {
    fVar1 = fVar2;
  }
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  return (longdouble)fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003ac0(float param_1)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_10003080();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd28
#define DAT_1000dd28 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000dd2c
#define DAT_1000dd2c (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae0
 */

void recovered_10003ae0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000dd28 < param_1) {
      do {
        param_1 = param_1 * DAT_1000dd20;
      } while (DAT_1000dd28 < param_1);
    }
    for (; param_1 < DAT_1000dd2c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000dd20
#undef DAT_1000dd28
#undef DAT_1000dd2c

#undef DAT_1000dda0
#define DAT_1000dda0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c00
 */

undefined4 recovered_10003c00(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000dda0 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1000dda0
#undef local_10

#undef DAT_1000dd54
#define DAT_1000dd54 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000dd58
#define DAT_1000dd58 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000dd5c
#define DAT_1000dd5c (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000dd80
#define DAT_1000dd80 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000dd88
#define DAT_1000dd88 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000dd98
#define DAT_1000dd98 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c50
 */

longdouble recovered_10003c50(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000dd80 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000dd88;
    } while ((float)DAT_1000dd80 < param_1);
  }
  if (param_1 < (float)DAT_1000dd90) {
    do {
      param_1 = param_1 + (float)DAT_1000dd98;
    } while (param_1 < (float)DAT_1000dd90);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000dd5c +
          (fVar1 * fVar1) / DAT_1000dd58 + fVar1 / DAT_1000dd54 + 1.0) * param_1);
}

#undef DAT_1000dd54
#undef DAT_1000dd58
#undef DAT_1000dd5c
#undef DAT_1000dd80
#undef DAT_1000dd88
#undef DAT_1000dd90
#undef DAT_1000dd98

#undef DAT_1000dd60
#define DAT_1000dd60 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000dd64
#define DAT_1000dd64 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000dd68
#define DAT_1000dd68 (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_1000dd80
#define DAT_1000dd80 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_1000dd88
#define DAT_1000dd88 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#undef DAT_1000dd90
#define DAT_1000dd90 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#undef DAT_1000dd98
#define DAT_1000dd98 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce0
 */

longdouble recovered_10003ce0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000dd80 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000dd88;
    } while ((float)DAT_1000dd80 < param_1);
  }
  if (param_1 < (float)DAT_1000dd90) {
    do {
      param_1 = param_1 + (float)DAT_1000dd98;
    } while (param_1 < (float)DAT_1000dd90);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000dd68 +
         (fVar1 * fVar1) / DAT_1000dd64 + fVar1 * DAT_1000dd60 + 1.0);
}

#undef DAT_1000dd60
#undef DAT_1000dd64
#undef DAT_1000dd68
#undef DAT_1000dd80
#undef DAT_1000dd88
#undef DAT_1000dd90
#undef DAT_1000dd98

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003d70(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003d90(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar3;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar7 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar3 + uVar7;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar3[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar3 + uVar7 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar3[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar3 + uVar7 + 2;
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
  iVar4 = 0;
  do {
    bVar2 = *pbVar5;
    iVar6 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar7 = iVar6 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar7 = iVar6 - 0x57;
    }
    else {
      if (0x19 < (byte)(bVar2 + 0xbf)) {
LAB_100024fc:
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = param_1;
        }
        if (bVar1 == 0x2d) {
          iVar4 = -iVar4;
        }
        return iVar4;
      }
      uVar7 = iVar6 - 0x37;
    }
    if (param_3 <= uVar7) goto LAB_100024fc;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003ee0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar3;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar7 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar3 + uVar7;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar3[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar3 + uVar7 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar3[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar3 + uVar7 + 2;
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
  iVar4 = 0;
  do {
    bVar2 = *pbVar5;
    iVar6 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar7 = iVar6 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar7 = iVar6 - 0x57;
    }
    else {
      if (0x19 < (byte)(bVar2 + 0xbf)) {
LAB_1000264c:
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = param_1;
        }
        if (bVar1 == 0x2d) {
          iVar4 = -iVar4;
        }
        return iVar4;
      }
      uVar7 = iVar6 - 0x37;
    }
    if (param_3 <= uVar7) goto LAB_1000264c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd70
#define DAT_1000dd70 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004030
 */

longdouble recovered_10004030(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_1000dd70 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_1000dd70 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000dd70;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004103;
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
LAB_10004103:
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
              lVar10 = lVar10 * (longdouble)DAT_1000dd20;
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

#undef DAT_1000dd20
#undef DAT_1000dd70

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_100041f0(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_10004030(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000dd70
#define DAT_1000dd70 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef str_1000de06
#define str_1000de06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5U)))
#undef str_1000de10
#define str_1000de10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffU)))
#undef str_1000de21
#define str_1000de21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110U)))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004220
 */

int recovered_10004220(char *buffer,ulong capacity,char *format,void *arguments)

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

  if (capacity != 0) {
    *buffer = '\0';
  }
  local_c4 = arguments;
  local_c0 = 0;
  local_bc = capacity;
  do {
    bVar6 = *format;
    if (bVar6 != 0x25) {
      if (bVar6 == 0) {
        if (capacity != 0) {
          *buffer = 0;
        }
        return local_c0;
      }
      if (1 < local_bc) {
        *buffer = bVar6;
        buffer = buffer + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_100042b3;
    }
    bVar6 = format[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *buffer = 0x25;
        buffer = buffer + 1;
        local_bc = local_bc - 1;
      }
      format = format + 1;
      goto LAB_100042b3;
    }
    pbVar10 = (byte *)(format + 2);
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004315;
        }
        break;
      }
      format = format + 1;
      bVar6 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    }
    do {
      bVar6 = format[1];
      pbVar10 = (byte *)(format + 1);
      format = (char *)pbVar10;
    } while ((byte)(bVar6 - 0x30U) < 10);
LAB_10004315:
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
    format = (char *)pbVar10;
    switch((uintptr_t)(bVar6)) {
    case 0x4c:
      format = (char *)(pbVar10 + 1);
      cVar7 = '\b';
      bVar19 = true;
      break;
    case 0x68:
      format = (char *)(pbVar10 + 1);
      if (pbVar10[1] == 0x68) {
        format = (char *)(pbVar10 + 2);
      }
      cVar7 = (pbVar10[1] != 0x68) + '\x01';
      goto LAB_100043fc;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004408;
    case 0x6c:
      format = (char *)(pbVar10 + 1);
      if (pbVar10[1] == 0x6c) {
        format = (char *)(pbVar10 + 2);
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_100043fc:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004408;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004408:
      format = (char *)(pbVar10 + 1);
      bVar19 = false;
    }
    local_b8 = (byte *)buffer;
    switch((uintptr_t)(*format)) {
    case 'I':
    case 'd':
    case 'i':
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
        goto LAB_10004719;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004719:
      if ((int)uVar8 < 0) {
        if (1 < local_bc) {
          *buffer = 0x2d;
          buffer = buffer + 1;
          local_bc = local_bc - 1;
        }
        local_c0 = local_c0 + 1;
        bVar19 = uVar15 != 0;
        uVar15 = -uVar15;
        uVar8 = -(uint)bVar19 - uVar8;
        local_b8 = (byte *)buffer;
      }
      iVar12 = 0;
      do {
        uVar16 = uVar8 << 0x1f | uVar15 >> 1;
        uVar11 = uVar8 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000de21[uVar15 + uVar9 * -10];
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
      goto LAB_10004268;
    default:
      if (1 < local_bc) {
        *buffer = 0x3f;
        buffer = buffer + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_100042b3;
    case 'X':
    case 'x':
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004847;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004847;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004847:
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
      pcVar14 = str_1000de21;
      if (*format == 0x58) {
        pcVar14 = str_1000de10;
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
          *buffer = abStack_51[iVar12];
          buffer = buffer + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
        pdVar1 = local_c4;
      } while (iVar12 != 0);
LAB_1000481c:
      local_c4 = pdVar1;
      format = format + 1;
      break;
    case 'c':
      if (1 < local_bc) {
        *buffer = *(byte *)local_c4;
        buffer = buffer + 1;
        local_bc = local_bc - 1;
      }
      local_c4 = (double *)((int)local_c4 + 4);
LAB_100042b3:
      local_c0 = local_c0 + 1;
LAB_100042b4:
      format = format + 1;
      break;
    case 'f':
      if (bVar19) {
        if (1 < local_bc) {
          *buffer = 0x30;
          if (local_bc - 3 < 0xfffffffe) {
            buffer[1] = 0x2e;
            uVar8 = local_bc & 0xfffffffe;
            if (uVar8 == 2) {
              buffer = buffer + 2;
            }
            else {
              buffer[2] = 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                buffer[3] = 0x30;
                if (uVar8 == 4) {
                  buffer = buffer + 4;
                }
                else {
                  buffer[4] = 0x30;
                  if (local_bc - 7 < 0xfffffffe) {
                    buffer[5] = 0x30;
                    if (uVar8 == 6) {
                      buffer = buffer + 6;
                    }
                    else {
                      buffer[6] = 0x30;
                      if (local_bc - 9 < 0xfffffffe) {
                        buffer[7] = 0x30;
                        buffer = buffer + 8;
                        local_bc = local_bc - 8;
                        goto LAB_10004955;
                      }
                      buffer = buffer + 7;
                    }
                  }
                  else {
                    buffer = buffer + 5;
                  }
                }
              }
              else {
                buffer = buffer + 3;
              }
            }
          }
          else {
            buffer = buffer + 1;
          }
          local_bc = 1;
        }
LAB_10004955:
        local_c4 = local_c4 + 2;
        local_c0 = local_c0 + 8;
        format = format + 1;
      }
      else {
        dVar2 = *local_c4;
        if (dVar2 < 0.0) {
          if (1 < local_bc) {
            *buffer = 0x2d;
            buffer = buffer + 1;
            local_bc = local_bc - 1;
          }
          local_c0 = local_c0 + 1;
          dVar2 = -dVar2;
          local_b8 = (byte *)buffer;
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
          abStack_51[iVar12 + 1] = str_1000de21[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000dd70;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000dd70;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000dd70;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000dd70;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000dd70);
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
        format = format + 1;
        buffer = (char *)local_b8;
      }
      break;
    case 'p':
      uVar8 = *(uint *)local_c4;
      if (1 < local_bc) {
        *buffer = 0x30;
        if (local_bc - 3 < 0xfffffffe) {
          buffer[1] = 0x78;
          local_b8 = (byte *)(buffer + 2);
          local_bc = local_bc - 2;
        }
        else {
          local_b8 = (byte *)(buffer + 1);
          local_bc = 1;
        }
      }
      local_c4 = (double *)((int)local_c4 + 4);
      iVar12 = 0;
      do {
        abStack_51[iVar12 + 1] = str_1000de21[uVar8 & 0xf];
        iVar12 = iVar12 + 1;
        bVar19 = 0xf < uVar8;
        uVar8 = uVar8 >> 4;
      } while (bVar19);
      local_c0 = local_c0 + 2 + iVar12;
      buffer = (char *)local_b8;
      do {
        if (1 < local_bc) {
          *buffer = abStack_51[iVar12];
          buffer = buffer + 1;
          local_bc = local_bc - 1;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      goto LAB_100042b4;
    case 's':
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000de06;
        if (*(byte **)local_c4 != (byte *)0x0) {
          pbVar10 = *(byte **)local_c4;
        }
        do {
          if (*pbVar10 == 0) break;
          if (1 < local_bc) {
            *buffer = *pbVar10;
            buffer = buffer + 1;
            local_bc = local_bc - 1;
          }
          pbVar10 = pbVar10 + 1;
          local_c0 = local_c0 + 1;
          iVar12 = iVar12 - (uint)(0 < iVar12);
        } while (iVar12 != 0);
      }
      goto LAB_1000481c;
    case 'u':
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
        goto LAB_10004a2f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004a2f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004a2f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000de21[uVar8 + uVar9 * -10];
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
LAB_10004268:
      format = format + 1;
      buffer = (char *)local_b8;
    }
  } while( true );
}

#undef DAT_1000dd70
#undef str_1000de06
#undef str_1000de10
#undef str_1000de21
#undef local_80
#undef local_c4
#undef local_c0
#undef local_bc
#undef abStack_51
#undef local_b8

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10004f80(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004220(buffer,capacity,format,(void *)args);
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
#undef DAT_1000e148
#define DAT_1000e148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x437U)))
#undef DAT_1000e150
#define DAT_1000e150 (*(int * *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004fb0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *in_ECX;
  undefined4 *puVar2;
  uint in_EDX;
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
      if (param_1 == (int *)0x0) {
        return;
      }
      piVar4 = (int *)((uint)(in_ECX + 0xf) & 0xffffff0);
      uVar3 = (0x8000000U - (int)in_ECX) - ((int)piVar4 - (int)in_ECX);
      if (((uint)((int)piVar4 - (int)in_ECX) <= 0x8000000U - (int)in_ECX && uVar3 != 0) &&
         (uVar3 = uVar3 & 0xfffffff0, 0x20 < uVar3)) {
        *piVar4 = uVar3 - 0x10;
        piVar4[1] = 0;
        iVar1 = *param_1;
        piVar4[2] = iVar1;
        *(undefined1 *)(piVar4 + 3) = 1;
        puVar2 = (undefined4 *)(iVar1 + 4);
        if (DAT_1000e148 == 0) {
          puVar2 = &DAT_1000e148;
        }
        *puVar2 = piVar4;
        *param_1 = (int)piVar4;
        if (DAT_1000e150 == (int *)0x0) {
          DAT_1000e150 = piVar4;
        }
      }
    }
    if (param_1 == (int *)0x0 || puVar5 < &DAT_10000001) {
      return;
    }
    if (((uint)puVar5 & 0xfffffff0) + 0xf0000000 < 0x21) {
      return;
    }
    _DAT_10000000 = ((uint)puVar5 & 0xfffffff0) + 0xeffffff0;
    _DAT_10000004 = 0;
    _DAT_10000008 = *param_1;
    DAT_1000000c = 1;
    puVar2 = (undefined4 *)(_DAT_10000008 + 4);
    if (DAT_1000e148 == 0) {
      puVar2 = &DAT_1000e148;
    }
    *puVar2 = 0x10000000;
    *param_1 = 0x10000000;
    if (DAT_1000e150 != (int *)0x0) {
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
    if (param_1 == (int *)0x0) {
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
    iVar1 = *param_1;
    piVar4[2] = iVar1;
    *(undefined1 *)(piVar4 + 3) = 1;
    puVar2 = (undefined4 *)(iVar1 + 4);
    if (DAT_1000e148 == 0) {
      puVar2 = &DAT_1000e148;
    }
    *puVar2 = piVar4;
    *param_1 = (int)piVar4;
    if (DAT_1000e150 != (int *)0x0) {
      return;
    }
  }
  DAT_1000e150 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000e148
#undef DAT_1000e150
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005150
 */

uint * recovered_10005150(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint *in_ECX;
  uint *in_EDX;
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
 * Address: 0x100051b0
 */

undefined4 recovered_100051b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint *in_ECX;
  int in_EDX;
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
#undef DAT_1000e154
#define DAT_1000e154 (*(uint *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_1000e158
#define DAT_1000e158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
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
 * Address: 0x10005210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005210(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000e154 != 0) {
          DAT_1000e154 = DAT_1000e154 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000e154 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_100021d0(local_214,&DAT_1000e158,DAT_1000e154);
            uVar3 = DAT_1000e154;
          }
          local_214[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000e154 = 0;
        }
        else {
          if (DAT_1000e154 - 0x1ff < 0xfffffe00) {
            recovered_100021d0(local_214,&DAT_1000e158,DAT_1000e154);
            local_214[DAT_1000e154] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000e154 = 0;
          }
          pcVar1 = &DAT_1000e158 + DAT_1000e154;
          DAT_1000e154 = DAT_1000e154 + 1;
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
#undef DAT_1000e154
#undef DAT_1000e158
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
#undef DAT_1000e154
#define DAT_1000e154 (*(uint *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_1000e158
#define DAT_1000e158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
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
 * Address: 0x100053d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100053d0(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1000e154 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_100021d0(local_21c,&DAT_1000e158,DAT_1000e154);
    uVar1 = DAT_1000e154;
  }
  local_21c[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000e154 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000e154
#undef DAT_1000e158
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
#undef DAT_1000e154
#define DAT_1000e154 (*(uint *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_1000e158
#define DAT_1000e158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
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
 * Address: 0x10005470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005470(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000e154 != 0) {
    recovered_100021d0(local_210,&DAT_1000e158,DAT_1000e154);
    local_210[DAT_1000e154] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000e154 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000e154
#undef DAT_1000e158
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_1000de32
#define DAT_1000de32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x121U)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

void recovered_10005500(undefined *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int extraout_EAX = 0;
  char *pcVar2;

  pcVar2 = &DAT_1000de32;
  if (param_1 != (undefined *)0x0) {
    pcVar2 = param_1;
  }
  puVar1 = &DAT_1000de0f;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  recovered_10004f80(acStack_150,0x140,pcVar2,(char)puVar1);
  if (0 < extraout_EAX) {
    recovered_10005210(acStack_150,extraout_EAX);
  }
  return;
}

#undef DAT_1000de0f
#undef DAT_1000de32
#undef acStack_150

#undef DAT_1000de50
#define DAT_1000de50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef str_1000de35
#define str_1000de35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005560
 */

void recovered_10005560(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002920(str_1000de35);
  recovered_10005210(str_1000de35,uVar1);
  uVar1 = recovered_10002920(&DAT_1000de50);
  recovered_10005210(&DAT_1000de50,uVar1);
  return;
}

#undef DAT_1000de50
#undef str_1000de35

#undef DAT_1000de50
#define DAT_1000de50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13fU)))
#undef str_1000de53
#define str_1000de53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002920(str_1000de53);
  recovered_10005210(str_1000de53,uVar1);
  uVar1 = recovered_10002920(&DAT_1000de50);
  recovered_10005210(&DAT_1000de50,uVar1);
  return;
}

#undef DAT_1000de50
#undef str_1000de53

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
#undef DAT_1000e154
#define DAT_1000e154 (*(uint *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_1000e158
#define DAT_1000e158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
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
 * Address: 0x10005600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10005600(int param_1,int param_2,char *param_3,byte param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000e154 != 0) {
      recovered_100021d0(local_214,&DAT_1000e158,DAT_1000e154);
      local_214[DAT_1000e154] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000e154 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return '\0';
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000e154
#undef DAT_1000e158
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10005700(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005710(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10005720(void)

{
  unsigned char frame[64] = {0};

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
#undef DAT_1000de32
#define DAT_1000de32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x121U)))
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_1000ded4
#define str_1000ded4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_1000dee1
#define str_1000dee1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_1000deef
#define str_1000deef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1deU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005730(int param_1,int param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *dst;
  bool bVar8;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002960((byte *)param_1,(byte *)str_1000ded4);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_10002960((byte *)param_1,(byte *)str_1000dee1);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_10002960((byte *)param_1,(byte *)str_1000deef);
      if (iVar4 != 0) {
        puVar5 = recovered_100020e0(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_10002460(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10002b50((char *)param_2,'r');
          bVar8 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002b50((char *)param_2,'+');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002b50((char *)param_2,'a');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar8;
          pcVar6 = recovered_10002b50((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002b50((char *)param_2,'a');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002b50((char *)param_2,'+');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar8 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar8;
          pcVar6 = recovered_10002b50((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          recovered_10004f80((char *)(puVar5 + 1),0xf1,&DAT_1000de32,(char)param_1);
          recovered_10002460(&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002b50((char *)param_2,'w');
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
                  dst = recovered_10002180((void *)puVar5[0x3f],uVar7);
                  if (dst == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000e000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_10005a77;
                  }
                  puVar5[0x3f] = dst;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = dst;
                }
                else {
                  dst = (void *)puVar5[0x3f];
                }
                recovered_100021d0(dst,local_20,local_1c);
              }
              else {
                puVar5[0x3e] = local_20;
              }
              puVar5[0x40] = local_1c;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x10005a54;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000e000 = 2;
LAB_10005a77:
            recovered_10002130(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x10005a54:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_100058d5;
      }
      local_24 = 3;
    }
  }
  puVar5 = recovered_100020e0(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_10002460(puVar5,0,800);
    *puVar5 = local_24;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    recovered_10004f80((char *)(puVar5 + 1),0xf1,&DAT_1000de32,(char)param_1);
    return puVar5;
  }
LAB_100058d5:
  *(undefined4 *)PTR_DAT_1000e000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000de32
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000ded4
#undef str_1000dee1
#undef str_1000deef
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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005ae0(int param_1,int param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_10005bb7;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10005b9a;
      }
    }
    *(undefined4 *)PTR_DAT_1000e000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10005b9a:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10002130((void *)param_3[0x3f]);
  }
  recovered_10002130(param_3);
LAB_10005bb7:
  recovered_10005730(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000e000
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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005bd0(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000e000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002130((void *)param_1[0x3f]);
  }
  recovered_10002130(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb0
 */

int recovered_10005cb0(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;

  uVar2 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    if ((*param_4 == 0) && (param_4[0x43] == -1)) {
      uVar1 = param_4[0x42];
      uVar4 = param_4[0x40] - uVar1;
      if ((uint)param_4[0x40] < uVar1 || uVar4 == 0) {
        *(undefined1 *)(param_4 + 0x45) = 1;
      }
      else {
        uVar7 = 0xffffffff;
        if ((int)((ulonglong)(uint)param_2 * (ulonglong)(uint)param_3 >> 0x20) == 0) {
          uVar7 = param_3 * param_2;
        }
        uVar2 = uVar7;
        if (uVar4 < uVar7) {
          uVar2 = uVar4;
        }
        recovered_100021d0(param_1,(void *)(uVar1 + param_4[0x3e]),uVar2);
        param_4[0x42] = param_4[0x42] + uVar2;
        if (uVar4 < uVar7) {
          *(undefined1 *)(param_4 + 0x45) = 1;
        }
        uVar2 = uVar2 / (uint)param_2;
      }
    }
    else {
      iVar3 = 0;
      do {
        iVar5 = param_2;
        puVar6 = param_1;
        do {
          uVar2 = recovered_10005dc0(param_4);
          if (uVar2 == 0xffffffff) {
            return iVar3;
          }
          *puVar6 = (char)uVar2;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar3 = iVar3 + 1;
        param_1 = param_1 + param_2;
      } while (iVar3 != param_3);
      uVar2 = param_3;
    }
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
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_1000e154
#define DAT_1000e154 (*(uint *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_1000e158
#define DAT_1000e158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
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
 * Address: 0x10005dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10005dc0(int *param_1)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

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
LAB_10005e21:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1000e154 != 0) {
      recovered_100021d0(local_214,&DAT_1000e158,DAT_1000e154);
      local_214[DAT_1000e154] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000e154 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000de0f,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002920((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_10005e21;
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

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_00280844
#undef DAT_1000de0f
#undef DAT_1000e154
#undef DAT_1000e158
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f80
 */

int recovered_10005f80(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_100060ea:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005210((char *)param_1,uVar5);
      param_4[0x42] = param_4[0x42] + uVar5;
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
    if (uVar2 < uVar4 + uVar5) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + uVar5);
      pvVar3 = recovered_10002180((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000e000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_100060ea;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10002460((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_100021d0((void *)(uVar4 + param_4[0x3f]),(void *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000e000

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006100
 */

undefined4 recovered_10006100(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006119;
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
LAB_10006119:
  *(undefined4 *)PTR_DAT_1000e000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000e000

#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061a0
 */

undefined4 recovered_100061a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000e000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100061d0(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000e000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10006290(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100062b0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100062d0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10006300(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006340(int param_1)

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
  *(undefined4 *)PTR_DAT_1000e000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000e000
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
#undef PTR_DAT_1000e000
#define PTR_DAT_1000e000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2efU)))
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
 * Address: 0x100063c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100063c0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000e000 = 0x16;
  }
  else {
    recovered_10002460(&local_20,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000e000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000e000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028083c
#undef local_20
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram00006800 (*(uint32_t *)(0x280800U))
#define Ram00006804 (*(uint32_t *)(0x6804U))
#define Ram00006808 (*(uint32_t *)(0x6808U))
#define local_18 (*(uint *)(frame + 20))
#define local_1c (*(void * *)(frame + 16))
undefined4 recovered_10006540(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[76] = {0};

  code *pcVar1;
  int iVar2;
  void *dst;
  uint uVar3;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != 0)) {
    recovered_10002460(&local_1c,0,0xc);
    iVar2 = Ram00006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       (((uVar3 = Ram00006808, 0x37 < uVar3 &&
         (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6834), pcVar1 != (code *)0x0)) &&
        (iVar2 = (*pcVar1)((char *)param_1,&local_1c), iVar2 != 0)))) {
      dst = recovered_100020e0(local_18 + (local_18 == 0));
      if (dst == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_100021d0(dst,local_1c,local_18);
        uVar3 = local_18;
      }
      *param_2 = (int)dst;
      *param_3 = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return 0;
}

#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef local_18
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define Ram00006800 (*(uint32_t *)(0x280800U))
#define Ram00006804 (*(uint32_t *)(0x6804U))
#define Ram00006808 (*(uint32_t *)(0x6808U))
bool recovered_10006620(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) ||
      (iVar3 = Ram00006800, iVar3 != 0x50414d57)) ||
     (((iVar3 = Ram00006804, iVar3 == 0 || (uVar1 = Ram00006808, uVar1 < 0xc)) ||
      ((uVar1 = Ram00006808, uVar1 < 0x3c || (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6838), pcVar2 == (code *)0x0)
       ))))) {
    return false;
  }
  iVar3 = (*pcVar2)((char *)param_1,(void *)param_2,param_3);
  return iVar3 != 0;
}

#undef Ram00006800
#undef Ram00006804
#undef Ram00006808

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100066a0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100066b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100066c0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100066d0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100066e0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100066f0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;

  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      bVar1 = *(byte *)(param_1 + iVar2);
      if (bVar1 != *(byte *)(param_2 + iVar2)) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar3 = param_3 + -1 == iVar2;
      iVar2 = iVar2 + 1;
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = (uint)bVar1 - (uint)*(byte *)(param_2 + iVar2);
  }
  return iVar2;
}


#undef DAT_1000de63
#define DAT_1000de63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x152U)))
#undef str_1000de66
#define str_1000de66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x155U)))
#undef str_1000de73
#define str_1000de73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#undef str_1000de7d
#define str_1000de7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#undef str_1000de91
#define str_1000de91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_1000de9f
#define str_1000de9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_1000deb1
#define str_1000deb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_1000debd
#define str_1000debd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1acU)))
#undef str_1000dece
#define str_1000dece (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

char * recovered_10006740(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000de63;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000dece;
    break;
  case 2:
    pcVar1 = str_1000de66;
    break;
  case 5:
    pcVar1 = str_1000de73;
    break;
  case 9:
    pcVar1 = str_1000de7d;
    break;
  case 0xc:
    pcVar1 = str_1000de91;
    break;
  case 0xd:
    pcVar1 = str_1000de9f;
    break;
  case 0x11:
    pcVar1 = str_1000deb1;
    break;
  case 0x16:
    pcVar1 = str_1000debd;
  }
  return pcVar1;
}

#undef DAT_1000de63
#undef str_1000de66
#undef str_1000de73
#undef str_1000de7d
#undef str_1000de91
#undef str_1000de9f
#undef str_1000deb1
#undef str_1000debd
#undef str_1000dece

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006810(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006820(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000e358
#define DAT_1000e358 (*(int *)(((uintptr_t)pf_module_state + 0x647U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006830
 */

void recovered_10006830(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000e358 = DAT_1000e358 + 1;
  return;
}

#undef DAT_1000e358

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006850
 */

longlong recovered_10006850(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10003290((double)param_1);
  return lVar1;
}


#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

void recovered_10006870(char *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004220(local_21c,0x200,param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005210(local_21c,uVar2);
  }
  return;
}

#undef local_21c

#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

void recovered_100068c0(char *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004220(local_21c,0x200,param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005210(local_21c,uVar2);
  }
  return;
}

#undef local_21c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006920(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x100043dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Native IA32 nonlocal context and floating-point control state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006930(void *context){
 __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nmovl $-1,24(%eax)\nmovl %eax,%esi\nmovl $1,%eax\ncpuid\nandl $0x3000000,%edx\ncmpl $0x3000000,%edx\njne 1f\nstmxcsr 24(%esi)\n1: fnstcw 28(%esi)\nxorl %eax,%eax\nmovl 0(%esi),%ebx\nmovl 4(%esi),%esi\nret");
}


/* Native IA32 context restore and zero-to-one longjmp normalization.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006980(void *context,int value){
 __asm__ volatile("movl 4(%esp),%edx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njne 1f\nmovl $1,%eax\n1: cmpl $-1,24(%edx)\nje 2f\nldmxcsr 24(%edx)\n2: fldcw 28(%edx)\nmovl 0(%edx),%ebx\nmovl 4(%edx),%esi\nmovl 8(%edx),%edi\nmovl 12(%edx),%ebp\nmovl 16(%edx),%esp\njmpl *20(%edx)");
}


#undef DAT_1000df24
#define DAT_1000df24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x213U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c0
 */

void recovered_100069c0(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a40;
  local_2c = &DAT_1000df24;
  local_24 = 0x40;
  local_44 = 1;
  recovered_100070b0(&local_48);
  recovered_100020a0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000df24
#undef auStackY_d0
#undef local_48
#undef local_44
#undef auStack_1c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006a40(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006a50(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006a70(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100069c0();
}


#undef DAT_1000e35c
#define DAT_1000e35c (*(int *)(((uintptr_t)pf_module_state + 0x64bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a70
 */

int recovered_10006a70(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  int iVar1;

  recovered_10006eb0();
  if (extraout_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100069c0();
  }
  *(int *)(extraout_EAX + 8) = DAT_1000e35c;
  *(undefined1 *)(extraout_EAX + 0x20) = 0;
  DAT_1000e35c = extraout_EAX;
  iVar1 = recovered_10006f00(param_1);
  return iVar1;
}

#undef DAT_1000e35c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10006ab0(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_100020e0(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100020a0();
  }
  return (int)pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10006ae0(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_100020e0(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100020a0();
  }
  return (int)pvVar1;
}


#undef DAT_1000df34
#define DAT_1000df34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x223U)))
#define in_stack_00000004 (*(void * *)(pf_stack_frame + 228))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b10
 */

void recovered_10006b10(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a40;
  local_2c = &DAT_1000df34;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100070b0(&local_48);
  recovered_10002130(in_stack_00000004);
  recovered_100070e0(&local_48);
  return;
}

#undef DAT_1000df34
#undef in_stack_00000004
#undef local_24
#undef local_20
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef auStack_1c
#undef local_2c
#undef local_28

#undef DAT_1000df44
#define DAT_1000df44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x233U)))
#define in_stack_00000004 (*(void * *)(pf_stack_frame + 228))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

void recovered_10006ba0(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a40;
  local_2c = &DAT_1000df44;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100070b0(&local_48);
  recovered_10002130(in_stack_00000004);
  recovered_100070e0(&local_48);
  return;
}

#undef DAT_1000df44
#undef in_stack_00000004
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000df54
#define DAT_1000df54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x243U)))
#define in_stack_00000004 (*(void * *)(pf_stack_frame + 228))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c30
 */

void recovered_10006c30(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a40;
  local_2c = &DAT_1000df54;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100070b0(&local_48);
  recovered_10002130(in_stack_00000004);
  recovered_100070e0(&local_48);
  return;
}

#undef DAT_1000df54
#undef in_stack_00000004
#undef local_20
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef auStack_1c
#undef local_28
#undef local_24

#undef DAT_1000df64
#define DAT_1000df64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x253U)))
#define in_stack_00000004 (*(void * *)(pf_stack_frame + 228))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cc0
 */

void recovered_10006cc0(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006a40;
  local_2c = &DAT_1000df64;
  local_24 = 0x58;
  local_44 = 1;
  recovered_100070b0(&local_48);
  recovered_10002130(in_stack_00000004);
  recovered_100070e0(&local_48);
  return;
}

#undef DAT_1000df64
#undef in_stack_00000004
#undef local_48
#undef auStackY_d0
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006d50(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10006d60(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006d80(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006d90(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 * recovered_10006da0(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_100020e0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100069c0();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  return puVar1 + 0x1c;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006e40(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    recovered_10002130((void *)(param_1 + -0x1c));
  }
  return;
}


#undef DAT_1000e368
#define DAT_1000e368 (*(int *)(((uintptr_t)pf_module_state + 0x657U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb0
 */

void recovered_10006eb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;

  iVar1 = DAT_1000e368;
  if (DAT_1000e368 != in_ECX && DAT_1000e368 != 0) {
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

#undef DAT_1000e368

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10006f00(int in_ECX)

{
  unsigned char frame[64] = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000e35c
#define DAT_1000e35c (*(void * *)(((uintptr_t)pf_module_state + 0x64bU)))
#undef DAT_1000e368
#define DAT_1000e368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x657U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

void recovered_10006f10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000e35c;
  if (DAT_1000e35c != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000e35c + 8);
    DAT_1000e35c = *(void **)((int)DAT_1000e35c + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000e368;
      if (DAT_1000e368 == pointer) {
        puVar2 = &DAT_1000e368;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_10006f84;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_10006f84:
      recovered_10002130(pointer);
    }
  }
  return;
}

#undef DAT_1000e35c
#undef DAT_1000e368

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006fa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10006fe0(param_1 + -0x1c);
}


#undef DAT_1000e35c
#define DAT_1000e35c (*(int *)(((uintptr_t)pf_module_state + 0x64bU)))
#undef DAT_1000e360
#define DAT_1000e360 (*(int * *)(((uintptr_t)pf_module_state + 0x64fU)))
#define in_stack_ffffffd4 (*(uchar * *)(pf_stack_frame + 52))
#define in_stack_ffffffd8 (*(ushort * *)(pf_stack_frame + 56))
#define local_20 (*(undefined4 *)(pf_stack_frame + 64))
#define local_1c (*(undefined4 *)(pf_stack_frame + 68))
#define in_stack_ffffffb0 (*(int *)(pf_stack_frame + 16))
#define local_18 (*(undefined4 *)(pf_stack_frame + 72))
#define in_ECX_00 (*(undefined4 * *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe0
 */

void recovered_10006fe0(int in_ECX)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int in_ECX_01;
  int *piVar3;

  if (DAT_1000e360 != (int *)0x0) {
    piVar3 = DAT_1000e360;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      in_ECX_00 = &local_20;
      uVar2 = recovered_100079b0((int)&local_20,in_stack_ffffffd4,in_stack_ffffffd8);
      if (((char)uVar2 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(in_ECX_01 + 0x10) = piVar3;
        *(undefined4 *)(in_ECX_01 + 0x14) = local_1c;
        *(undefined4 *)(in_ECX_01 + 0x18) = local_18;
        recovered_100071b0((int)in_ECX_00);
        iVar1 = DAT_1000e35c;
        if (DAT_1000e35c == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_100069c0();
        }
        *(undefined1 *)(DAT_1000e35c + 0x20) = 1;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10006fe0(in_stack_ffffffb0);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100069c0();
}

#undef DAT_1000e35c
#undef DAT_1000e360
#undef in_stack_ffffffd4
#undef in_stack_ffffffd8
#undef local_20
#undef local_1c
#undef in_stack_ffffffb0
#undef local_18
#undef in_ECX_00

#undef DAT_1000e35c
#define DAT_1000e35c (*(int *)(((uintptr_t)pf_module_state + 0x64bU)))
#define in_stack_ffffffe0 (*(int *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007070
 */

void recovered_10007070(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000e35c;
  if (DAT_1000e35c == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100069c0();
  }
  *(undefined1 *)(DAT_1000e35c + 0x20) = 1;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10006fe0(in_stack_ffffffe0);
}

#undef DAT_1000e35c
#undef in_stack_ffffffe0

#undef DAT_1000e360
#define DAT_1000e360 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x64fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

void recovered_100070b0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000e360;
  DAT_1000e360 = param_1;
  return;
}

#undef DAT_1000e360

#undef DAT_1000e360
#define DAT_1000e360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e0
 */

void recovered_100070e0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000e360;
  if (DAT_1000e360 == param_1) {
    puVar2 = &DAT_1000e360;
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

#undef DAT_1000e360

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define in_stack_00000004 (*(int *)(frame + 36))
void recovered_10007120(void)

{
  unsigned char frame[64] = {0};


                    /* WARNING: Subroutine does not return */
  recovered_10006fe0(in_stack_00000004);
}

#undef in_stack_00000004

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007140(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100069c0();
}


#undef DAT_1000e360
#define DAT_1000e360 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x64fU)))
#undef DAT_1000e368
#define DAT_1000e368 (*(int *)(((uintptr_t)pf_module_state + 0x657U)))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
#define in_stack_00000004 (*(int *)(pf_stack_frame + 100))
#define in_stack_ffffffb4 (*(uchar * *)(pf_stack_frame + 20))
#define in_stack_ffffffb8 (*(ushort * *)(pf_stack_frame + 24))
#define in_stack_ffffffe0 (*(int *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007150
 */

void recovered_10007150(void)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX = 0;

  iVar4 = DAT_1000e368;
  if (DAT_1000e368 != in_stack_00000004 && DAT_1000e368 != 0) {
    do {
      if (*(int *)(iVar4 + 0x1c) == in_stack_00000004) goto LAB_10007192;
      iVar4 = *(int *)(iVar4 + 0xc);
    } while ((iVar4 != 0) && (iVar4 != in_stack_00000004));
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100069c0();
  }
LAB_10007192:
  if (DAT_1000e360 != (undefined4 *)0x0) {
    DAT_1000e360 = (undefined4 *)*DAT_1000e360;
  }
  recovered_100071b0(in_stack_ffffffe0);
  if (DAT_1000e360 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
    do {
      puVar2 = DAT_1000e360;
      if (DAT_1000e360 == puVar1) {
        DAT_1000e360[2] = extraout_ECX;
        puVar2[3] = *(undefined4 *)(extraout_ECX + 0x18);
        uVar3 = *(undefined4 *)(extraout_ECX + 0x14);
LAB_1000724e:
        puVar2[1] = uVar3;
        recovered_10006920((int)puVar2);
        recovered_10007150();
        return;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_100079b0((int)&uStack_40,in_stack_ffffffb4,in_stack_ffffffb8);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_1000724e;
      }
      DAT_1000e360 = (undefined4 *)*puVar2;
    } while (DAT_1000e360 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100069c0();
}

#undef DAT_1000e360
#undef DAT_1000e368
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef in_stack_00000004
#undef in_stack_ffffffb4
#undef in_stack_ffffffb8
#undef in_stack_ffffffe0

#undef DAT_1000e360
#define DAT_1000e360 (*(int * *)(((uintptr_t)pf_module_state + 0x64fU)))
#define in_stack_ffffffd8 (*(ushort * *)(pf_stack_frame + 24))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define in_stack_ffffffd4 (*(uchar * *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071b0
 */

void recovered_100071b0(int in_ECX)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX_00;

  if (DAT_1000e360 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX_00 + 0x10);
    do {
      piVar2 = DAT_1000e360;
      if (DAT_1000e360 == piVar1) {
        DAT_1000e360[2] = in_ECX_00;
        piVar2[3] = *(int *)(in_ECX_00 + 0x18);
        iVar3 = *(int *)(in_ECX_00 + 0x14);
LAB_1000724e:
        piVar2[1] = iVar3;
        recovered_10006920((int)piVar2);
        recovered_10007150();
        return;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_100079b0((int)&local_20,in_stack_ffffffd4,in_stack_ffffffd8);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX_00;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_1000724e;
      }
      DAT_1000e360 = (int *)*piVar2;
    } while (DAT_1000e360 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100069c0();
}

#undef DAT_1000e360
#undef in_stack_ffffffd8
#undef local_20
#undef local_1c
#undef local_18
#undef in_stack_ffffffd4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007260(undefined4 param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007150();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10007280(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007290(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100069c0();
}


#undef DAT_1000e0fc
#define DAT_1000e0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ebU)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072a0
 */

int recovered_100072a0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_10007360;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10007360;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000e0fc) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10007360:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000e0fc
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007380(void)

{
  unsigned char frame[64] = {0};

  recovered_100020a0();
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100073a0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100073b0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100073d0(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007410(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007440(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007460(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte recovered_10007480(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100074c0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd60
#define DAT_1000dd60 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ddb0
#define DAT_1000ddb0 (*(float *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef DAT_1000ddb8
#define DAT_1000ddb8 (*(double *)(((uintptr_t)pf_module_state + 0xa7U)))
#undef DAT_1000ddc0
#define DAT_1000ddc0 (*(double *)(((uintptr_t)pf_module_state + 0xafU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074e0
 */

longdouble recovered_100074e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;

  lVar4 = (longdouble)param_1;
  if (!NAN(lVar4)) {
    if ((longdouble)DAT_1000ddb8 < lVar4) {
      return (longdouble)DAT_1000ddb0;
    }
    if (lVar4 < (longdouble)DAT_1000ddc0) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000dd20;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000dd60) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000dd20;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000dd60);
    }
    lVar1 = (longdouble)1;
    iVar3 = 0x20;
    lVar7 = lVar1;
    lVar4 = lVar1;
    lVar6 = lVar1;
    do {
      lVar7 = (lVar5 / lVar6) * lVar7;
      lVar4 = lVar4 + lVar7;
      lVar6 = lVar6 + lVar1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar2 != 0) {
      do {
        lVar4 = lVar4 * lVar4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return lVar4;
    }
  }
  return lVar4;
}

#undef DAT_1000dd20
#undef DAT_1000dd60
#undef DAT_1000ddb0
#undef DAT_1000ddb8
#undef DAT_1000ddc0

#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd60
#define DAT_1000dd60 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ddb0
#define DAT_1000ddb0 (*(float *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef DAT_1000ddb8
#define DAT_1000ddb8 (*(double *)(((uintptr_t)pf_module_state + 0xa7U)))
#undef DAT_1000ddc0
#define DAT_1000ddc0 (*(double *)(((uintptr_t)pf_module_state + 0xafU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d0
 */

longdouble recovered_100075d0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  if (!NAN(param_1)) {
    fVar1 = DAT_1000ddb0;
    if (((float)DAT_1000ddb8 < param_1) || (fVar1 = 0.0, param_1 < (float)DAT_1000ddc0))
    goto LAB_100076bd;
    iVar4 = 0;
    if (DAT_1000dd20 < param_1) {
      iVar4 = 0;
      do {
        param_1 = param_1 * DAT_1000dd20;
        iVar4 = iVar4 + 1;
      } while (DAT_1000dd20 < param_1);
    }
    if (DAT_1000dd60 <= param_1) {
      fVar1 = param_1;
    }
    else {
      do {
        param_1 = param_1 * DAT_1000dd20;
        iVar4 = iVar4 + 1;
        fVar1 = param_1;
      } while (param_1 < DAT_1000dd60);
    }
    iVar5 = 0x20;
    fVar2 = 1.0;
    fVar3 = 1.0;
    param_1 = 1.0;
    do {
      fVar2 = (fVar1 / fVar3) * fVar2;
      param_1 = param_1 + fVar2;
      fVar3 = fVar3 + 1.0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar4 != 0) {
      do {
        param_1 = param_1 * param_1;
        iVar4 = iVar4 + -1;
        fVar1 = param_1;
      } while (iVar4 != 0);
      goto LAB_100076bd;
    }
  }
  fVar1 = param_1;
LAB_100076bd:
  return (longdouble)fVar1;
}

#undef DAT_1000dd20
#undef DAT_1000dd60
#undef DAT_1000ddb0
#undef DAT_1000ddb8
#undef DAT_1000ddc0

#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd60
#define DAT_1000dd60 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ddb0
#define DAT_1000ddb0 (*(float *)(((uintptr_t)pf_module_state + 0x9fU)))
#undef DAT_1000ddb8
#define DAT_1000ddb8 (*(double *)(((uintptr_t)pf_module_state + 0xa7U)))
#undef DAT_1000ddc0
#define DAT_1000ddc0 (*(double *)(((uintptr_t)pf_module_state + 0xafU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076d0
 */

longdouble recovered_100076d0(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  int iVar2;
  int iVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;

  lVar4 = (longdouble)(double)param_1;
  if (!NAN(lVar4)) {
    if ((longdouble)DAT_1000ddb8 < lVar4) {
      return (longdouble)DAT_1000ddb0;
    }
    if (lVar4 < (longdouble)DAT_1000ddc0) {
      return (longdouble)0;
    }
    iVar2 = 0;
    lVar5 = (longdouble)DAT_1000dd20;
    if (lVar5 < lVar4) {
      iVar2 = 0;
      do {
        lVar4 = lVar4 * lVar5;
        iVar2 = iVar2 + 1;
      } while (lVar5 < lVar4);
    }
    lVar5 = lVar4;
    if (lVar4 < (longdouble)DAT_1000dd60) {
      do {
        lVar5 = lVar5 * (longdouble)DAT_1000dd20;
        iVar2 = iVar2 + 1;
      } while (lVar5 < (longdouble)DAT_1000dd60);
    }
    lVar1 = (longdouble)1;
    iVar3 = 0x20;
    lVar7 = lVar1;
    lVar4 = lVar1;
    lVar6 = lVar1;
    do {
      lVar7 = (lVar5 / lVar6) * lVar7;
      lVar4 = lVar4 + lVar7;
      lVar6 = lVar6 + lVar1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar2 != 0) {
      do {
        lVar4 = lVar4 * lVar4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return lVar4;
    }
  }
  return lVar4;
}

#undef DAT_1000dd20
#undef DAT_1000dd60
#undef DAT_1000ddb0
#undef DAT_1000ddb8
#undef DAT_1000ddc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077c0
 */

longdouble recovered_100077c0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longdouble)param_1 - (longdouble)param_2;
}


#undef DAT_1000dd20
#define DAT_1000dd20 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000dd60
#define DAT_1000dd60 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

longdouble recovered_100077f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10002fd0(param_1);
  if ((longdouble)DAT_1000dd20 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000dd60 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000dd20
#undef DAT_1000dd60

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(uint *)(frame + 16))
ulonglong recovered_10007850(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[68] = {0};

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
      local_14 = 0x10;
      pbVar7 = pbVar7 + 2;
      goto LAB_10004dcd;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_10004dcd;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_10004dcd;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_10004dcd;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_10004dcd:
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
      else if (uVar5 - 0x41 < 0x1a) {
        uVar3 = uVar5 - 0x37;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    if (((int)uVar3 < 0) || ((int)local_14 <= (int)uVar3)) break;
    uVar1 = (uVar1 & 0xffffffff) * (ulonglong)local_14 + CONCAT44(iVar6 * local_14,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (iVar4 != 0) {
      param_1 = pbVar7 + iVar4;
    }
    *param_2 = param_1;
  }
  uVar2 = CONCAT44(-(uint)((int)uVar1 != 0) - iVar6,-(int)uVar1);
  if (!bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define in_stack_00000004 (*(byte * *)(frame + 36))
#define in_stack_00000008 (*(undefined4 * *)(frame + 40))
#define in_stack_0000000c (*(uint *)(frame + 44))
void recovered_10007990(void)

{
  unsigned char frame[64] = {0};


  recovered_10007850(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

#undef DAT_1000e0fc
#define DAT_1000e0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ebU)))
#define in_stack_ffffffb0 (*(uint *)(pf_stack_frame + 16))
#define in_stack_ffffffb4 (*(int * *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079b0
 */

uint recovered_100079b0(int in_ECX,uchar *in_EDX,ushort *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  byte bVar10;
  byte bVar11;
  int in_ECX_00;
  int iVar12;
  uint uVar13;
  uchar *in_EDX_00;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uchar *puVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  bool bVar21;
  char cVar22;

  pcVar3 = *(char **)(in_ECX_00 + 0x1c);
  if (pcVar3 != (char *)0x0) {
    pbVar14 = (byte *)(pcVar3 + 1);
    if (*pcVar3 != -1) {
      recovered_10007d40(in_stack_ffffffb0,in_stack_ffffffb4);
    }
    bVar11 = *pbVar14;
    pbVar5 = (byte *)0x0;
    if (bVar11 != 0xff) {
      bVar10 = 0;
      uVar6 = 0;
      pbVar5 = (byte *)(pcVar3 + 2);
      do {
        pbVar14 = pbVar5;
        uVar6 = uVar6 | (*pbVar14 & 0x7f) << (bVar10 & 0x1f);
        bVar10 = bVar10 + 7;
        pbVar5 = pbVar14 + 1;
      } while ((char)*pbVar14 < '\0');
      pbVar5 = pbVar14 + 1 + uVar6;
    }
    bVar10 = 0;
    pbVar14 = pbVar14 + 2;
    uVar6 = 0;
    do {
      bVar1 = *pbVar14;
      uVar6 = uVar6 | (bVar1 & 0x7f) << (bVar10 & 0x1f);
      pbVar14 = pbVar14 + 1;
      bVar10 = bVar10 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(in_ECX_00 + 4)) && (0 < (int)uVar6)) {
      pbVar19 = pbVar14 + uVar6;
      iVar12 = 0;
      do {
        bVar10 = 0;
        uVar6 = 0;
        do {
          bVar1 = *pbVar14;
          uVar6 = uVar6 | (bVar1 & 0x7f) << (bVar10 & 0x1f);
          pbVar14 = pbVar14 + 1;
          bVar10 = bVar10 + 7;
        } while ((char)bVar1 < '\0');
        bVar10 = 0;
        uVar7 = 0;
        do {
          bVar1 = *pbVar14;
          uVar7 = uVar7 | (bVar1 & 0x7f) << (bVar10 & 0x1f);
          pbVar14 = pbVar14 + 1;
          bVar10 = bVar10 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar12 == *(int *)(in_ECX_00 + 4) + -1) {
          *(undefined2 *)in_ECX = 1;
          *(undefined1 *)(in_ECX + 2) = 0;
          *(uint *)(in_ECX + 4) = uVar6;
          *(undefined4 *)(in_ECX + 8) = 0;
          if (uVar7 == 0) {
            *(undefined1 *)(in_ECX + 1) = 1;
            return 0;
          }
          pbVar19 = pbVar19 + (uVar7 - 1);
          bVar11 = bVar11 & 0xf;
          uVar7 = CONCAT13(in_EDX_00 != (uchar *)0x0,(int3)in_stack_ffffffb0);
          uVar6 = 0;
          goto LAB_10007b60;
        }
        iVar12 = iVar12 + 1;
      } while (pbVar14 < pbVar19);
    }
  }
  *(undefined2 *)in_ECX = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return 0;
LAB_10007b60:
  uVar15 = 0;
  uVar8 = 0;
  do {
    bVar10 = *pbVar19;
    uVar15 = uVar15 | (bVar10 & 0x7f) << ((byte)uVar8 & 0x1f);
    pbVar19 = pbVar19 + 1;
    uVar8 = uVar8 + 7;
  } while ((char)bVar10 < '\0');
  uVar16 = -1 << ((byte)uVar8 & 0x1f);
  uVar20 = 0;
  uVar13 = 0;
  pbVar14 = pbVar19;
  do {
    bVar1 = *pbVar14;
    uVar20 = uVar20 | (bVar1 & 0x7f) << ((byte)uVar13 & 0x1f);
    pbVar14 = pbVar14 + 1;
    uVar13 = uVar13 + 7;
  } while ((char)bVar1 < '\0');
  if (bVar10 < 0x40) {
    uVar16 = 0;
  }
  if (0x1f < uVar8) {
    uVar16 = 0;
  }
  uVar8 = -1 << ((byte)uVar13 & 0x1f);
  if (bVar1 < 0x40) {
    uVar8 = 0;
  }
  if (0x1f < uVar13) {
    uVar8 = 0;
  }
  uVar15 = uVar15 | uVar16;
  if (uVar15 == 0) {
    *(undefined1 *)(in_ECX + 1) = 1;
  }
  else if (0 < (int)uVar15) {
    if (((0xc < bVar11 || pbVar5 == (byte *)0x0) || (((0x1c1dU >> bVar11 ^ 1) & 1) != 0)) ||
       (puVar9 = recovered_10007d40(uVar7,(int *)(uint)bVar10), puVar9 == (uchar *)0x0)) {
LAB_10007d1e:
      *(undefined1 *)(in_ECX + 2) = 1;
      *(uint *)(in_ECX + 8) = uVar15;
      return CONCAT31((int3)((uint)in_ECX >> 8),1);
    }
    cVar22 = (char)(uVar7 >> 0x18);
    if ((in_EDX_00 != (uchar *)0x0) && (puVar9 != in_EDX_00)) {
      iVar12 = *(int *)(puVar9 + 4);
      puVar17 = in_EDX_00;
      do {
        iVar4 = *(int *)(puVar17 + 4);
        if ((iVar12 == 0) || (iVar4 == 0)) {
          if (iVar4 == iVar12) goto LAB_10007d1e;
        }
        else {
          iVar18 = 0;
          do {
            cVar22 = *(char *)(iVar4 + iVar18);
            cVar2 = *(char *)(iVar12 + iVar18);
            if ((cVar22 == '\0') || (cVar2 == '\0')) {
              if (cVar22 == cVar2) goto LAB_10007d1e;
              break;
            }
            iVar18 = iVar18 + 1;
          } while (cVar22 == cVar2);
        }
        if (*(undefined **)puVar17 != &DAT_1000e0fc) goto LAB_10007cf7;
        puVar17 = *(uchar **)(puVar17 + 8);
        cVar22 = puVar17 != (uchar *)0x0;
      } while ((puVar17 != puVar9) && (puVar17 != (uchar *)0x0));
    }
    if (cVar22 != '\0') goto LAB_10007d1e;
  }
LAB_10007cf7:
  if ((uVar20 | uVar8) == 0) {
    return 0;
  }
  pbVar19 = pbVar19 + (uVar20 | uVar8);
  bVar21 = 0x3e < uVar6;
  uVar6 = uVar6 + 1;
  if (bVar21) {
    return 0;
  }
  goto LAB_10007b60;
}

#undef DAT_1000e0fc
#undef in_stack_ffffffb0
#undef in_stack_ffffffb4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uchar * recovered_10007d40(uint in_ECX,int *in_EDX)

{
  unsigned char frame[64] = {0};

  ushort *puVar1;
  ushort uVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uchar *unaff_EDI;
  uint uVar9;

  puVar3 = (uchar *)0x0;
  if (in_ECX == 0xff) {
    return (uchar *)0x0;
  }
  if (0xc < (in_ECX & 0xf)) {
    return (uchar *)0x0;
  }
  puVar1 = (ushort *)*in_EDX;
  switch((uintptr_t)(in_ECX & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    unaff_EDI = *(uchar **)puVar1;
    puVar6 = puVar1 + 2;
    goto LAB_100052c5;
  case 1:
    bVar4 = 0;
    unaff_EDI = (uchar *)0x0;
    puVar6 = puVar1;
    do {
      *in_EDX = (int)puVar6 + 1;
      uVar2 = *puVar6;
      unaff_EDI = (uchar *)((uint)unaff_EDI | ((byte)uVar2 & 0x7f) << (bVar4 & 0x1f));
      bVar4 = bVar4 + 7;
      puVar6 = (ushort *)((int)puVar6 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    unaff_EDI = (uchar *)(uint)*puVar1;
    puVar6 = puVar1 + 1;
    goto LAB_100052c5;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000521d_caseD_5;
  case 9:
    uVar9 = 0;
    uVar5 = 0;
    puVar6 = puVar1;
    do {
      *in_EDX = (int)puVar6 + 1;
      bVar4 = (byte)*puVar6;
      uVar9 = uVar9 | (bVar4 & 0x7f) << ((byte)uVar5 & 0x1f);
      uVar5 = uVar5 + 7;
      puVar6 = (ushort *)((int)puVar6 + 1);
    } while ((char)bVar4 < '\0');
    uVar8 = 0;
    if (0x3f < bVar4) {
      uVar8 = -1 << ((byte)uVar5 & 0x1f);
    }
    uVar7 = 0;
    if (uVar5 < 0x20) {
      uVar7 = uVar8;
    }
    unaff_EDI = (uchar *)(uVar9 | uVar7);
    break;
  case 10:
    unaff_EDI = (uchar *)((uint)(-1 < (char)*(byte *)((int)puVar1 + 1)) * 0x10000 + -0x10000 +
                         (uint)*puVar1);
    puVar6 = puVar1 + 1;
LAB_100052c5:
    *in_EDX = (int)puVar6;
  }
  puVar3 = unaff_EDI;
  if ((in_ECX & 0x70) != 0) {
    if ((in_ECX & 0x70) != 0x10) {
      return (uchar *)0x0;
    }
    puVar3 = unaff_EDI + (int)puVar1;
  }
  if (((char)in_ECX < '\0') && (puVar3 != (uchar *)0x0)) {
    puVar3 = *(uchar **)puVar3;
  }
switchD_1000521d_caseD_5:
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e90
 */

void recovered_10007e90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  recovered_10006b10();
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280814
#define DAT_00280814 (*(uint8_t *)(0x280814U))
#undef DAT_00280818
#define DAT_00280818 (*(uint8_t *)(0x280818U))
#undef DAT_002808a0
#define DAT_002808a0 (*(uint8_t *)(0x2808a0U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_1000e378
#define DAT_1000e378 (*(int * *)(((uintptr_t)pf_module_state + 0x667U)))
#undef DAT_1000e37c
#define DAT_1000e37c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_1000e380
#define DAT_1000e380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280814
#define _DAT_00280814 (*(code * *)(0x280814U))
#undef _DAT_00280818
#define _DAT_00280818 (*(code * *)(0x280818U))
#undef _DAT_002808a0
#define _DAT_002808a0 (*(code * *)(0x2808a0U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
#undef str_1000defd
#define str_1000defd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10007ec0(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;

  piVar1 = (int *)recovered_10006ab0(0x2fc);
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  *(undefined1 *)(piVar1 + 4) = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  *(undefined1 *)(piVar1 + 9) = 0;
  *(undefined1 *)((int)piVar1 + 0x25) = 0;
  *(undefined1 *)((int)piVar1 + 0x26) = 0xf6;
  *(undefined1 *)((int)piVar1 + 0x27) = 0xf6;
  *(undefined1 *)(piVar1 + 10) = 0xf6;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  *(undefined1 *)(piVar1 + 0x10) = 0;
  *(undefined1 *)((int)piVar1 + 0x41) = 0;
  *(undefined1 *)((int)piVar1 + 0x42) = 0;
  *(undefined1 *)((int)piVar1 + 0x43) = 0;
  *(undefined1 *)(piVar1 + 0x11) = 0;
  *(undefined1 *)((int)piVar1 + 0x45) = 0;
  *(undefined1 *)((int)piVar1 + 0x46) = 0;
  *(undefined1 *)((int)piVar1 + 0x47) = 0;
  *(undefined1 *)(piVar1 + 0x12) = 0;
  *(undefined1 *)((int)piVar1 + 0x49) = 0;
  *(undefined1 *)((int)piVar1 + 0x4a) = 0;
  *(undefined1 *)((int)piVar1 + 0x4b) = 0;
  *(undefined1 *)(piVar1 + 0x13) = 0;
  *(undefined1 *)((int)piVar1 + 0x4d) = 0;
  *(undefined1 *)((int)piVar1 + 0x4e) = 0;
  piVar1[0x14] = 0;
  piVar1[0x15] = 0;
  piVar1[0x16] = 0;
  piVar1[0x17] = 0;
  piVar1[0x18] = 0;
  piVar1[0x19] = 0;
  piVar1[0x1a] = 0;
  piVar1[0x1b] = 0;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  piVar1[0x1f] = 0;
  piVar1[0x20] = 0;
  pcVar6 = str_1000defd;
  if (param_1 != (char *)0x0) {
    pcVar6 = param_1;
  }
  piVar1[0x21] = 0;
  piVar1[0x22] = 0;
  piVar1[0x23] = 0;
  piVar1[0x24] = 0;
  piVar1[0x25] = 0;
  piVar1[0x26] = 0;
  piVar1[0x27] = 0;
  piVar1[0x28] = 0;
  piVar1[0x29] = 0;
  piVar1[0x2a] = 0;
  piVar1[0x2b] = 0;
  piVar1[0x2c] = 0;
  piVar1[0x2d] = 0;
  piVar1[0x2e] = 0;
  piVar1[0x2f] = 0;
  piVar1[0x30] = 0;
  piVar1[0x31] = 0;
  piVar1[0x32] = 0;
  piVar1[0x33] = 0;
  piVar1[0x34] = 0;
  piVar1[0x35] = 0;
  piVar1[0x36] = 0;
  recovered_100025b0((undefined1 *)(piVar1 + 0x37),0x220);
  uVar2 = 0xffffffff;
  do {
    iVar3 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (pcVar6[iVar3] != '\0');
  recovered_1000d640(piVar1,(int)pcVar6,uVar2);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  piVar1[5] = param_2;
  uVar2 = 1;
  if (1 < (int)param_3) {
    uVar2 = param_3;
  }
  piVar1[6] = uVar2;
  piVar1[0xc] = param_2 >> 1;
  piVar1[0xd] = uVar2 >> 1;
  piVar1[0xe] = param_2 >> 1;
  piVar1[0xf] = uVar2 >> 1;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x17 < _DAT_00280808 && (_DAT_00280814 != (code *)0x0)))) {
    iVar3 = (*_DAT_00280814)();
    *(bool *)(piVar1 + 4) = iVar3 != 0;
    if (iVar3 != 0) {
      uVar4 = recovered_10008440();
      if ((char)uVar4 != '\0') {
        DAT_1000e37c = 0;
        DAT_1000e380 = 0;
        DAT_1000e370 = 0;
        DAT_1000e378 = piVar1;
        recovered_100088a0();
        if (*(char *)((int)piVar1 + 0x25) != '\0') {
          return piVar1;
        }
        DAT_1000e378 = (int *)0x0;
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x1b < _DAT_00280808 && (_DAT_00280818 != (code *)0x0)))))) {
        (*_DAT_00280818)();
      }
      goto LAB_100083e4;
    }
    param_2 = piVar1[5];
    uVar2 = piVar1[6];
  }
  else {
    *(undefined1 *)(piVar1 + 4) = 0;
  }
  puVar5 = &DAT_1000de0f;
  if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*piVar1;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0xa3 < _DAT_00280808 && (_DAT_002808a0 != (code *)0x0)))))) {
    iVar3 = (*_DAT_002808a0)(puVar5,param_2,uVar2);
    piVar1[3] = iVar3;
    if (iVar3 != 0) {
      DAT_1000e37c = 0;
      DAT_1000e380 = 0;
      DAT_1000e370 = 0;
      DAT_1000e378 = piVar1;
      recovered_100088a0();
      if ((char)piVar1[4] != '\0') {
        return piVar1;
      }
      if (piVar1[3] == 0) {
        return piVar1;
      }
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (((0xb7 < _DAT_00280808 && (_DAT_002808b4 != (code *)0x0)) &&
          (iVar3 = (*_DAT_002808b4)(piVar1[3],piVar1 + 0x21), iVar3 != 0)))) {
        piVar1[7] = piVar1[0x2c];
        piVar1[8] = piVar1[0x2d];
        if ((*(byte *)(piVar1 + 0x2b) & 1) == 0) {
          return piVar1;
        }
      }
      *(undefined1 *)(piVar1 + 9) = 1;
      return piVar1;
    }
  }
  else {
    piVar1[3] = 0;
  }
LAB_100083e4:
  piVar1[0x1c] = 0;
  recovered_10006b10();
  piVar1[0x19] = 0;
  recovered_10006b10();
  recovered_10006b10();
  recovered_10006b10();
  return (int *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280814
#undef DAT_00280818
#undef DAT_002808a0
#undef DAT_002808b4
#undef DAT_1000de0f
#undef DAT_1000e370
#undef DAT_1000e378
#undef DAT_1000e37c
#undef DAT_1000e380
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280814
#undef _DAT_00280818
#undef _DAT_002808a0
#undef _DAT_002808b4
#undef str_1000defd

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028087c
#define DAT_0028087c (*(uint8_t *)(0x28087cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028087c
#define _DAT_0028087c (*(code * *)(0x28087cU))
#define local_4c (*(uint *)(pf_stack_frame + 84))
#define local_48 (*(uint *)(pf_stack_frame + 88))
#define local_44 (*(uint *)(pf_stack_frame + 92))
#define local_40 (*(uint *)(pf_stack_frame + 96))
#define local_3c (*(uint *)(pf_stack_frame + 100))
#define local_38 (*(uint *)(pf_stack_frame + 104))
#define local_34 (*(uint *)(pf_stack_frame + 108))
#define local_30 (*(uint *)(pf_stack_frame + 112))
#define local_2c (*(uint *)(pf_stack_frame + 116))
#define local_28 (*(uint *)(pf_stack_frame + 120))
#define local_20 (*(uint * *)(pf_stack_frame + 128))
#define local_18 (*(byte *)(pf_stack_frame + 136))
#define local_90 (*(uint *)(pf_stack_frame + 16))
#define local_8c (*(uint *)(pf_stack_frame + 20))
#define local_88 (*(uint *)(pf_stack_frame + 24))
#define local_84 (*(int *)(pf_stack_frame + 28))
#define local_68 (*(uint *)(pf_stack_frame + 56))
#define local_64 (*(uint *)(pf_stack_frame + 60))
#define local_58 (*(uint *)(pf_stack_frame + 72))
#define local_54 (*(uint *)(pf_stack_frame + 76))
#define local_50 (*(uint *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008440(void)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint *in_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  if ((((in_ECX != (uint *)0x0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
     (((0xb < _DAT_00280808 && (0x7f < _DAT_00280808)) && (_DAT_0028087c != (code *)0x0)))) {
    local_20 = in_ECX;
    iVar6 = (*_DAT_0028087c)(&local_58);
    local_8c = 0;
    if (iVar6 != 0) {
      bVar1 = local_38 + local_3c <= local_40;
      bVar2 = local_30 + local_34 <= local_40;
      bVar3 = local_28 + local_2c <= local_40;
      local_90 = 0;
      local_68 = 0;
      local_64 = 0;
      uVar7 = 0;
      uVar9 = 0;
      if (bVar3 && ((bVar2 && (bVar1 && (local_28 < local_40 && local_30 < local_40))) &&
                   ((local_38 < local_40 && (local_2c <= local_40 && local_34 <= local_40)) &&
                   ((local_3c <= local_40 && local_2c != 0) && (local_34 != 0 && local_3c != 0)))))
      {
        uVar8 = -1 << ((byte)local_3c & 0x1f);
        uVar9 = uVar8;
        uVar7 = 0xffffffff;
        if ((local_3c & 0x20) != 0) {
          uVar9 = 0;
          uVar7 = uVar8;
        }
        bVar5 = (byte)local_38 & 0x1f;
        uVar8 = ~uVar9 << ((byte)local_38 & 0x1f);
        local_68 = uVar8;
        local_64 = ~uVar7 << bVar5 | ~uVar9 >> 0x20 - bVar5;
        if ((local_38 & 0x20) != 0) {
          local_68 = 0;
          local_64 = uVar8;
        }
        uVar8 = -1 << ((byte)local_34 & 0x1f);
        uVar9 = uVar8;
        uVar7 = 0xffffffff;
        if ((local_34 & 0x20) != 0) {
          uVar9 = 0;
          uVar7 = uVar8;
        }
        bVar5 = (byte)local_30 & 0x1f;
        uVar8 = ~uVar9 << ((byte)local_30 & 0x1f);
        local_90 = uVar8;
        local_8c = ~uVar7 << bVar5 | ~uVar9 >> 0x20 - bVar5;
        if ((local_30 & 0x20) != 0) {
          local_90 = 0;
          local_8c = uVar8;
        }
        uVar8 = -1 << ((byte)local_2c & 0x1f);
        uVar9 = uVar8;
        uVar7 = 0xffffffff;
        if ((local_2c & 0x20) != 0) {
          uVar9 = 0;
          uVar7 = uVar8;
        }
        bVar5 = (byte)local_28 & 0x1f;
        uVar8 = ~uVar9 << ((byte)local_28 & 0x1f);
        uVar7 = ~uVar7 << bVar5 | ~uVar9 >> 0x20 - bVar5;
        uVar9 = uVar8;
        if ((local_28 & 0x20) != 0) {
          uVar9 = 0;
          uVar7 = uVar8;
        }
      }
      uVar8 = local_40 + 7 >> 3;
      if (local_44 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)uVar8 * (ulonglong)local_48 +
                (ulonglong)(local_44 - 1) * (ulonglong)local_4c;
      }
      local_84 = (int)((ulonglong)lVar4 >> 0x20);
      local_88 = (uint)lVar4;
      if (local_44 == 0) {
        return 0;
      }
      local_18 = (byte)(0x20203 >> ((byte)(local_40 - 0xf) & 0x1f));
      if (((bVar3 && ((bVar2 && (bVar1 && (local_28 < local_40 && local_30 < local_40))) &&
                     ((local_38 < local_40 && (local_2c <= local_40 && local_34 <= local_40)) &&
                     ((local_3c <= local_40 && local_2c != 0) && (local_34 != 0 && local_3c != 0))))
           ) & ((local_4c != 0 && local_48 != 0) &&
               ((local_58 != 0 || local_54 != 0) && local_50 != 0)) &
               local_40 - 0xf < 0x12 & local_18) == 0) {
        return 0;
      }
      if ((local_64 & local_8c) != 0 || (local_68 & local_90) != 0) {
        return 0;
      }
      if ((local_64 & uVar7) != 0 || (local_68 & uVar9) != 0) {
        return 0;
      }
      if ((uVar7 & local_8c) != 0 || (uVar9 & local_90) != 0) {
        return 0;
      }
      lVar4 = (ulonglong)uVar8 * (ulonglong)local_48;
      iVar6 = (int)((ulonglong)lVar4 >> 0x20);
      if ((local_54 != 0 || (local_84 != 0 || (uint)-local_84 < (uint)(local_50 < local_88))) ||
          (iVar6 != 0 || (uint)-iVar6 < (uint)(local_4c < (uint)lVar4))) {
        return 0;
      }
      if ((uint)(~local_58 < local_50 - 1) <= -local_54) {
        *local_20 = local_58;
        local_20[1] = local_54;
        local_20[2] = local_50;
        local_20[3] = local_4c;
        local_20[4] = local_48;
        local_20[5] = local_44;
        local_20[6] = local_40;
        local_20[7] = local_3c;
        local_20[8] = local_34;
        local_20[9] = local_2c;
        local_20[10] = local_38;
        local_20[0xb] = local_30;
        local_20[0xc] = local_28;
        return CONCAT31((int3)(local_28 >> 8),1);
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028087c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028087c
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
#undef local_20
#undef local_18
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_68
#undef local_64
#undef local_58
#undef local_54
#undef local_50

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808a4
#define DAT_002808a4 (*(uint8_t *)(0x2808a4U))
#undef DAT_1000df74
#define DAT_1000df74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x263U)))
#undef PTR_recovered_10006a40_1000e00c
#define PTR_recovered_10006a40_1000e00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2fbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808a4
#define _DAT_002808a4 (*(code * *)(0x2808a4U))
#define local_8c (*(uint *)(pf_stack_frame + 180))
#define local_88 (*(uint *)(pf_stack_frame + 184))
#define local_7c (*(int *)(pf_stack_frame + 196))
#define local_6c (*(uint *)(pf_stack_frame + 212))
#define local_68 (*(uint *)(pf_stack_frame + 216))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_48 (*(undefined4 *)(pf_stack_frame + 248))
#define local_44 (*(undefined4 *)(pf_stack_frame + 252))
#define local_30 (*(undefined * *)(pf_stack_frame + 272))
#define local_2c (*(undefined * *)(pf_stack_frame + 276))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 280))
#define local_24 (*(undefined4 *)(pf_stack_frame + 284))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 288))
#define auStackY_130 (*(undefined1 (*)[304])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100088a0(void)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int in_ECX;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_130 + 0x80;
  local_30 = PTR_recovered_10006a40_1000e00c;
  local_2c = &DAT_1000df74;
  local_24 = 0x479;
  recovered_100070b0(&local_48);
  if (in_ECX == 0) goto LAB_10008d12;
  if (*(char *)(in_ECX + 0x10) == '\x01') {
    local_44 = 0xffffffff;
    uVar6 = recovered_10009c50();
    *(char *)(in_ECX + 0x25) = (char)uVar6;
    if ((char)uVar6 == '\0') {
      *(undefined1 *)(in_ECX + 0x24) = 1;
    }
    goto LAB_10008d12;
  }
  if (*(int *)(in_ECX + 100) == 0) {
    iVar11 = 0;
    iVar9 = *(int *)(in_ECX + 0xc);
  }
  else {
    iVar11 = *(int *)(in_ECX + 0x60);
    iVar9 = *(int *)(in_ECX + 0xc);
  }
  if (iVar9 == 0) goto LAB_10008d12;
  uVar8 = *(uint *)(in_ECX + 0x14);
  local_8c = *(uint *)(in_ECX + 0x18);
  if (*(char *)(in_ECX + 0x24) == '\0') {
    uVar4 = *(uint *)(in_ECX + 0x7c);
    uVar5 = *(uint *)(in_ECX + 0x80);
    if (((0 < (int)uVar5 && 0 < (int)uVar4) && iVar11 != 0) && (local_8c != uVar5 || uVar8 != uVar4)
       ) {
      uVar7 = uVar8 * (uintptr_t)local_8c * 4;
      if (uVar7 == 0) {
        local_7c = 0;
      }
      else {
        local_44 = 1;
        local_7c = recovered_10006ab0(uVar7);
        recovered_10006b10();
        uVar8 = 0;
        do {
          *(undefined1 *)(local_7c + uVar8) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
        uVar1 = *(undefined1 *)(in_ECX + 0x26);
        uVar2 = *(undefined1 *)(in_ECX + 0x27);
        uVar3 = *(undefined1 *)(in_ECX + 0x28);
        uVar8 = 0;
        do {
          *(undefined1 *)(local_7c + uVar8) = uVar1;
          *(undefined1 *)(local_7c + 1 + uVar8) = uVar2;
          *(undefined1 *)(local_7c + 2 + uVar8) = uVar3;
          *(undefined1 *)(local_7c + 3 + uVar8) = 0xff;
          uVar8 = uVar8 + 4;
        } while (uVar8 < uVar7);
        uVar8 = *(uint *)(in_ECX + 0x14);
        local_8c = *(uint *)(in_ECX + 0x18);
      }
      uVar16 = recovered_10001e80((uint)((ulonglong)uVar8 * (ulonglong)uVar5),
                                  ((int)uVar8 >> 0x1f) * uVar5 +
                                  (int)((ulonglong)uVar8 * (ulonglong)uVar5 >> 0x20),uVar4,0);
      local_6c = (uint)uVar16;
      if ((int)local_6c < 2) {
        local_6c = 1;
      }
      if ((int)local_8c < (int)local_6c) {
        uVar16 = recovered_10001e80((uint)((ulonglong)local_8c * (ulonglong)uVar4),
                                    ((int)local_8c >> 0x1f) * uVar4 +
                                    (int)((ulonglong)local_8c * (ulonglong)uVar4 >> 0x20),uVar5,0);
        local_88 = 1;
        if (1 < (int)(uint)uVar16) {
          local_88 = (uint)uVar16;
        }
        if ((int)local_8c < 1) goto LAB_10008c1e;
        iVar12 = (int)(uVar8 - local_88) / 2;
        iVar9 = 0;
        local_6c = local_8c;
      }
      else {
        iVar9 = (int)(local_8c - local_6c) / 2;
        iVar12 = 0;
        local_88 = uVar8;
      }
      local_58 = (undefined1 *)(local_7c + 3 + (iVar9 * uVar8 + iVar12) * 4);
      local_68 = 0;
      do {
        if (0 < (int)local_88) {
          uVar13 = 0;
          uVar7 = (local_68 * uVar5) / local_6c;
          if ((int)(uVar5 - 1) < (int)uVar7) {
            uVar7 = uVar5 - 1;
          }
          uVar14 = local_88;
          puVar15 = local_58;
          do {
            uVar10 = uVar13 / local_88;
            if ((int)(uVar4 - 1) < (int)(uVar13 / local_88)) {
              uVar10 = uVar4 - 1;
            }
            iVar9 = uVar10 + uVar7 * uVar4;
            puVar15[-3] = *(undefined1 *)(iVar11 + iVar9 * 4);
            puVar15[-2] = *(undefined1 *)(iVar11 + 1 + iVar9 * 4);
            puVar15[-1] = *(undefined1 *)(iVar11 + 2 + iVar9 * 4);
            *puVar15 = *(undefined1 *)(iVar11 + 3 + iVar9 * 4);
            puVar15 = puVar15 + 4;
            uVar13 = uVar13 + uVar4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        local_68 = local_68 + 1;
        local_58 = local_58 + (uintptr_t)uVar8 * 4;
      } while (local_68 != local_6c);
    }
LAB_10008c1e:
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0xa7 < _DAT_00280808 && (_DAT_002808a4 != (code *)0x0)))) {
      local_44 = 2;
      iVar11 = (*_DAT_002808a4)();
      *(bool *)(in_ECX + 0x25) = iVar11 != 0;
      if (iVar11 != 0) goto LAB_10008d0a;
    }
    else {
      *(undefined1 *)(in_ECX + 0x25) = 0;
    }
    *(undefined1 *)(in_ECX + 0x24) = 1;
  }
LAB_10008d0a:
  recovered_10006b10();
LAB_10008d12:
  recovered_100070e0(&local_48);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808a4
#undef DAT_1000df74
#undef PTR_recovered_10006a40_1000e00c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808a4
#undef local_8c
#undef local_88
#undef local_7c
#undef local_6c
#undef local_68
#undef local_58
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_130
#undef auStack_1c

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
 * Address: 0x10008d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008d80(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((param_1 != 0) && (*(undefined1 *)(param_1 + 0x24) = 1, *(char *)(param_1 + 0x10) == '\0'))
     && (*(int *)(param_1 + 0xc) != 0)) {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0xb3 < _DAT_00280808 && (_DAT_002808b0 != (code *)0x0)))))) {
      (*_DAT_002808b0)(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),1,1);
    }
  }
  return;
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
#undef DAT_00280818
#define DAT_00280818 (*(uint8_t *)(0x280818U))
#undef DAT_002808a8
#define DAT_002808a8 (*(uint8_t *)(0x2808a8U))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_1000e378
#define DAT_1000e378 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x667U)))
#undef DAT_1000e37c
#define DAT_1000e37c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_1000e380
#define DAT_1000e380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280818
#define _DAT_00280818 (*(code * *)(0x280818U))
#undef _DAT_002808a8
#define _DAT_002808a8 (*(code * *)(0x2808a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008e00(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_1000e378 == param_1) {
    DAT_1000e378 = (undefined4 *)0x0;
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 == '\x01') {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x1b < _DAT_00280808 && (_DAT_00280818 != (code *)0x0)))) {
      (*_DAT_00280818)();
    }
  }
  else if (((param_1[3] != 0) && (_DAT_00280800 == 0x50414d57)) &&
          ((_DAT_00280804 != 0 &&
           (((0xb < _DAT_00280808 && (0xab < _DAT_00280808)) && (_DAT_002808a8 != (code *)0x0))))))
  {
    (*_DAT_002808a8)(param_1[3]);
  }
  DAT_1000e37c = 0;
  DAT_1000e380 = 0;
  DAT_1000e370 = 0;
  param_1[0x1c] = 0;
  recovered_10006b10();
  param_1[0x19] = 0;
  recovered_10006b10();
  recovered_10006b10();
  recovered_10006b10();
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280818
#undef DAT_002808a8
#undef DAT_1000e370
#undef DAT_1000e378
#undef DAT_1000e37c
#undef DAT_1000e380
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280818
#undef _DAT_002808a8

#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_1000df7c
#define DAT_1000df7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26bU)))
#undef PTR_recovered_10006a40_1000e00c
#define PTR_recovered_10006a40_1000e00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2fbU)))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_54 (*(undefined1 * *)(pf_stack_frame + 172))
#define local_50 (*(int *)(pf_stack_frame + 176))
#define local_4c (*(undefined4 *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined * *)(pf_stack_frame + 208))
#define local_2c (*(undefined * *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f20
 */

int recovered_10008f20(undefined4 *param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *dst;
  undefined1 *puVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_54 = (undefined1 *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_30 = PTR_recovered_10006a40_1000e00c;
  local_2c = &DAT_1000df7c;
  local_24 = 0xf6;
  recovered_100070b0(&local_48);
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = 1;
  }
  else {
    puVar2 = &DAT_1000de0f;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_44 = 0xffffffff;
    recovered_1000d640((int *)&local_54,(int)puVar2,param_1[1]);
    iVar1 = local_50 + 1;
  }
  local_44 = 1;
  dst = (void *)recovered_10006ae0(iVar1);
  puVar2 = &DAT_1000de0f;
  if (local_54 != (undefined1 *)0x0) {
    puVar2 = local_54;
  }
  local_44 = 2;
  recovered_100021d0(dst,puVar2,local_50 + 1);
  recovered_10006b10();
  recovered_100070e0(&local_48);
  return (int)dst;
}

#undef DAT_1000de0f
#undef DAT_1000df7c
#undef PTR_recovered_10006a40_1000e00c
#undef auStackY_f0
#undef auStack_1c
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009070
 */

void recovered_10009070(int param_1,undefined4 *param_2,undefined4 *param_3)

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
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090b0
 */

void recovered_100090b0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  if (param_1 != 0) {
    if (param_2 < 2) {
      param_2 = 1;
    }
    *(int *)(param_1 + 0x14) = param_2;
    iVar2 = 1;
    if (1 < param_3) {
      iVar2 = param_3;
    }
    *(int *)(param_1 + 0x18) = iVar2;
    iVar1 = *(int *)(param_1 + 0x30);
    iVar3 = param_2 + -1;
    if (iVar1 <= param_2 + -1) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    iVar1 = *(int *)(param_1 + 0x34);
    iVar3 = iVar2 + -1;
    if (iVar1 <= iVar2 + -1) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x34) = iVar3;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    else {
      recovered_100088a0();
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009120
 */

void recovered_10009120(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(in_ECX + 0x14);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar1 = *(int *)(in_ECX + 0x30);
  iVar3 = iVar2 + -1;
  if (iVar1 <= iVar2 + -1) {
    iVar3 = iVar1;
  }
  if (iVar1 < 0) {
    iVar3 = 0;
  }
  *(int *)(in_ECX + 0x30) = iVar3;
  iVar2 = 1;
  if (1 < *(int *)(in_ECX + 0x18)) {
    iVar2 = *(int *)(in_ECX + 0x18);
  }
  iVar1 = *(int *)(in_ECX + 0x34);
  iVar3 = iVar2 + -1;
  if (iVar1 <= iVar2 + -1) {
    iVar3 = iVar1;
  }
  if (iVar1 < 0) {
    iVar3 = 0;
  }
  *(int *)(in_ECX + 0x34) = iVar3;
  return;
}


#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009170
 */

void recovered_10009170(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;

  if (param_1 != (int *)0x0) {
    puVar2 = &DAT_1000de0f;
    if (param_2 != (undefined1 *)0x0) {
      puVar2 = param_2;
    }
    uVar3 = 0xffffffff;
    do {
      iVar1 = uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while (puVar2[iVar1] != '\0');
    recovered_1000d640(param_1,(int)puVar2,uVar3);
    if ((char)param_1[4] == '\0') {
      recovered_100088a0();
    }
  }
  return;
}

#undef DAT_1000de0f

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100091d0(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;

  if (param_2 == (int *)0x0 || param_1 == 0) {
    return;
  }
  if (param_2[2] == 0) {
    return;
  }
  if (*param_2 < 1) {
    return;
  }
  if (param_2[1] < 1) {
    return;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
       (((_DAT_00280808 < 0xb8 || (_DAT_002808b4 == (code *)0x0)) ||
        (iVar4 = (*_DAT_002808b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar4 == 0)))) {
      *(undefined1 *)(param_1 + 0x24) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
    if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar4 = *param_2;
    puVar2 = (undefined1 *)param_2[2];
    iVar3 = param_2[1];
    cVar1 = *(char *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 100) = 0;
    recovered_1000dba0((int *)(param_1 + 0x60),*(int *)(param_1 + 0x60),puVar2,
                       puVar2 + iVar4 * (uintptr_t)iVar3 * 4);
    *(int *)(param_1 + 0x7c) = *param_2;
    *(int *)(param_1 + 0x80) = param_2[1];
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    else {
      recovered_100088a0();
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(code * *)(0x28089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009300(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if (*(char *)(param_1 + 0x4c) == '\0') {
        recovered_10009390();
      }
      uVar1 = recovered_10009c50();
      *(char *)(param_1 + 0x25) = (char)uVar1;
      if ((char)uVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x25) == '\0') {
      recovered_100088a0();
    }
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x9f < _DAT_00280808 && (_DAT_0028089c != (code *)0x0)))) {
      (*_DAT_0028089c)();
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028089c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028089c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280880
#define DAT_00280880 (*(uint8_t *)(0x280880U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_00280900
#define DAT_00280900 (*(uint8_t *)(0x280900U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280880
#define _DAT_00280880 (*(code * *)(0x280880U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
#undef _DAT_00280900
#define _DAT_00280900 (*(code * *)(0x280900U))
#define local_a0 (*(uint *)(pf_stack_frame + 16))
#define local_9c (*(uint *)(pf_stack_frame + 20))
#define local_94 (*(uint *)(pf_stack_frame + 28))
#define local_90 (*(uint *)(pf_stack_frame + 32))
#define local_8c (*(uint *)(pf_stack_frame + 36))
#define local_88 (*(uint *)(pf_stack_frame + 40))
#define local_84 (*(int *)(pf_stack_frame + 44))
#define local_80 (*(int *)(pf_stack_frame + 48))
#define local_7c (*(uint *)(pf_stack_frame + 52))
#define local_78 (*(uint *)(pf_stack_frame + 56))
#define local_74 (*(uint *)(pf_stack_frame + 60))
#define local_70 (*(uint *)(pf_stack_frame + 64))
#define local_6c (*(uint *)(pf_stack_frame + 68))
#define local_68 (*(uint *)(pf_stack_frame + 72))
#define local_64 (*(uint *)(pf_stack_frame + 76))
#define local_60 (*(uint *)(pf_stack_frame + 80))
#define local_5c (*(uint *)(pf_stack_frame + 84))
#define local_58 (*(undefined4 *)(pf_stack_frame + 88))
#define local_54 (*(int *)(pf_stack_frame + 92))
#define local_50 (*(int *)(pf_stack_frame + 96))
#define local_4c (*(int *)(pf_stack_frame + 100))
#define local_48 (*(undefined4 *)(pf_stack_frame + 104))
#define local_44 (*(undefined4 *)(pf_stack_frame + 108))
#define local_40 (*(undefined4 *)(pf_stack_frame + 112))
#define local_3c (*(undefined4 *)(pf_stack_frame + 116))
#define local_38 (*(uint *)(pf_stack_frame + 120))
#define local_34 (*(uint *)(pf_stack_frame + 124))
#define local_30 (*(undefined4 *)(pf_stack_frame + 128))
#define local_2c (*(undefined4 *)(pf_stack_frame + 132))
#define local_28 (*(undefined4 *)(pf_stack_frame + 136))
#define local_24 (*(undefined4 *)(pf_stack_frame + 140))
#define local_20 (*(undefined4 *)(pf_stack_frame + 144))
#define local_1c (*(undefined4 *)(pf_stack_frame + 148))
#define local_18 (*(undefined4 *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009390(void)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  byte bVar3;
  char cVar10;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;

  if (in_ECX == 0) {
    return;
  }
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  if (*(char *)(in_ECX + 0x10) != '\x01') {
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_38 = 0;
    local_34 = 0;
    if (*(int *)(in_ECX + 0xc) == 0) {
      return;
    }
    if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
        ((_DAT_00280808 < 0xb8 || (_DAT_002808b4 == (code *)0x0)))) ||
       (iVar5 = (*_DAT_002808b4)(*(int *)(in_ECX + 0xc),in_ECX + 0x84), iVar5 == 0)) {
LAB_1000961f:
      *(undefined1 *)(in_ECX + 0x24) = 1;
      return;
    }
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0xb0);
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(in_ECX + 0xb4);
    if ((*(byte *)(in_ECX + 0xac) & 1) != 0) goto LAB_1000961f;
    if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
      return;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        (((0x103 < _DAT_00280808 && (_DAT_00280900 != (code *)0x0)) &&
         (iVar5 = (*_DAT_00280900)(*(undefined4 *)(in_ECX + 0xc),&local_64), iVar5 != 0)))))) {
      if ((local_64 & 1) == 0) {
        *(undefined2 *)(in_ECX + 0x40) = 0;
        *(undefined1 *)(in_ECX + 0x42) = 0;
        iVar5 = *(int *)(in_ECX + 0x14);
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        iVar9 = *(int *)(in_ECX + 0x30);
        iVar12 = iVar5 + -1;
        if (iVar9 <= iVar5 + -1) {
          iVar12 = iVar9;
        }
        if (iVar9 < 0) {
          iVar12 = 0;
        }
        *(int *)(in_ECX + 0x30) = iVar12;
        iVar5 = 1;
        if (1 < *(int *)(in_ECX + 0x18)) {
          iVar5 = *(int *)(in_ECX + 0x18);
        }
        local_4c = *(int *)(in_ECX + 0x34);
        goto LAB_10009b4f;
      }
      bVar14 = (*(uint *)(in_ECX + 0xac) & 6) == 2;
      bVar15 = (local_64 & 4) != 0;
      *(int *)(in_ECX + 0x38) = local_50;
      *(int *)(in_ECX + 0x3c) = local_4c;
      if (local_54 == *(int *)(in_ECX + 0x2c)) {
        if (!((local_64 & 2) != 0 && (bVar15 && bVar14))) goto LAB_10009ad7;
        bVar3 = (byte)(local_60 >> 1);
        *(byte *)(in_ECX + 0x40) = (byte)local_60 & 1;
LAB_10009b12:
        *(byte *)(in_ECX + 0x41) = bVar3 & 1;
        bVar3 = (byte)(local_60 >> 2) & 1;
      }
      else {
        *(int *)(in_ECX + 0x2c) = local_54;
        if (((byte)local_64 >> 1 & (bVar15 && bVar14)) != 0) {
          if ((local_5c & 1) != 0) {
            *(undefined1 *)(in_ECX + 0x49) = 1;
          }
          if ((local_5c & 2) != 0) {
            *(undefined1 *)(in_ECX + 0x4a) = 1;
          }
          local_60 = local_60 | local_5c;
          if ((local_5c & 4) != 0) {
            *(undefined1 *)(in_ECX + 0x4b) = 1;
          }
          *(byte *)(in_ECX + 0x40) = (byte)local_60 & 1;
          bVar3 = (byte)local_60 >> 1;
          goto LAB_10009b12;
        }
LAB_10009ad7:
        *(undefined2 *)(in_ECX + 0x40) = 0;
        bVar3 = 0;
      }
      *(byte *)(in_ECX + 0x42) = bVar3;
      iVar5 = *(int *)(in_ECX + 0x14);
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      iVar9 = iVar5 + -1;
      if (local_50 <= iVar5 + -1) {
        iVar9 = local_50;
      }
      if (local_50 < 0) {
        iVar9 = 0;
      }
      *(int *)(in_ECX + 0x30) = iVar9;
      iVar5 = 1;
      if (1 < *(int *)(in_ECX + 0x18)) {
        iVar5 = *(int *)(in_ECX + 0x18);
      }
LAB_10009b4f:
      iVar9 = iVar5 + -1;
      if (local_4c <= iVar5 + -1) {
        iVar9 = local_4c;
      }
      if (local_4c < 0) {
        iVar9 = 0;
      }
      *(int *)(in_ECX + 0x34) = iVar9;
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
    if (_DAT_00280808 < 0x84) {
      return;
    }
    if (_DAT_00280880 == (code *)0x0) {
      return;
    }
    iVar5 = (*_DAT_00280880)(&local_94);
    if (iVar5 == 0) {
      return;
    }
    uVar6 = recovered_10008440();
    if ((local_94 & 1) == 0 || (char)uVar6 != '\x01') {
      if (((local_94 & 2) != 0) && (local_84 != 0 || local_80 != 0)) {
        iVar5 = *(int *)(in_ECX + 0x3c);
        iVar9 = *(int *)(in_ECX + 0x38);
        iVar12 = local_80 + iVar5;
        if (SCARRY4(local_80,iVar5)) {
          iVar12 = (local_80 + iVar5 >> 0x1f) + -0x80000000LL;
        }
        iVar5 = local_84 + iVar9;
        if (SCARRY4(local_84,iVar9)) {
          iVar5 = (local_84 + iVar9 >> 0x1f) + -0x80000000LL;
        }
        *(int *)(in_ECX + 0x30) = iVar5;
        goto LAB_10009bc0;
      }
    }
    else {
      iVar5 = *(int *)(in_ECX + 0x1c);
      iVar9 = *(int *)(in_ECX + 0x20);
      uVar16 = 0;
      if (1 < (int)local_38) {
        if (local_7c == 0) {
          uVar11 = local_38 - 1;
          if (local_8c <= local_38 - 1) {
            uVar11 = local_8c;
          }
          uVar16 = 0;
          if (-1 < (int)local_8c) {
            uVar16 = CONCAT44(local_8c,uVar11);
          }
        }
        else {
          uVar11 = 0;
          if (0 < (int)local_8c) {
            uVar11 = local_8c;
          }
          if (local_7c <= uVar11) {
            uVar11 = local_7c;
          }
          lVar1 = (ulonglong)(local_38 - 1) * (ulonglong)uVar11;
          uVar16 = recovered_10001d20((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_7c,0);
        }
      }
      uVar17 = 0;
      if (1 < (int)local_34) {
        if (local_78 == 0) {
          uVar11 = local_34 - 1;
          if (local_88 <= local_34 - 1) {
            uVar11 = local_88;
          }
          uVar17 = 0;
          if (-1 < (int)local_88) {
            uVar17 = CONCAT44(local_88,uVar11);
          }
        }
        else {
          uVar11 = 0;
          if (0 < (int)local_88) {
            uVar11 = local_88;
          }
          if (local_78 <= uVar11) {
            uVar11 = local_78;
          }
          lVar1 = (ulonglong)(local_34 - 1) * (ulonglong)uVar11;
          uVar17 = recovered_10001d20((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_78,0);
        }
      }
      *(int *)(in_ECX + 0x30) = ((int)uVar16 - iVar5) + -0xe;
      iVar12 = ((int)uVar17 - iVar9) + -0x26;
LAB_10009bc0:
      *(int *)(in_ECX + 0x34) = iVar12;
    }
    uVar11 = *(uint *)(in_ECX + 0xac) & 6;
    if (uVar11 == 2) {
      if (((local_90 & 1) != 0) && (*(char *)(in_ECX + 0x40) == '\0')) {
        *(undefined1 *)(in_ECX + 0x49) = 1;
      }
      if (((local_90 & 2) != 0) && (*(char *)(in_ECX + 0x41) == '\0')) {
        *(undefined1 *)(in_ECX + 0x4a) = 1;
      }
      if ((local_90 & 4) != 0) {
        PF_PART1(local_a0, 0) = 1;
        if (*(char *)(in_ECX + 0x42) == '\0') {
          *(undefined1 *)(in_ECX + 0x4b) = 1;
        }
        goto LAB_10009bfc;
      }
    }
    PF_PART1(local_a0, 0) = 0;
LAB_10009bfc:
    *(byte *)(in_ECX + 0x40) = (byte)local_90 & uVar11 == 2;
    *(byte *)(in_ECX + 0x41) = (byte)((local_90 & 2) >> 1) & uVar11 == 2;
    *(undefined1 *)(in_ECX + 0x42) = (undefined1)local_a0;
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x30);
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x34);
    recovered_10009120();
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
  if (_DAT_00280808 < 0x84) {
    return;
  }
  if (_DAT_00280880 == (code *)0x0) {
    return;
  }
  iVar5 = (*_DAT_00280880)(&local_94);
  if (iVar5 == 0) {
    return;
  }
  if ((local_94 & 1) == 0) {
    if (((local_94 & 2) != 0) &&
       (*(undefined2 *)(in_ECX + 0x4d) = 0, local_84 != 0 || local_80 != 0)) {
      *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + local_84;
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + local_80;
    }
    goto LAB_1000968a;
  }
  if (((*(char *)(in_ECX + 0x4d) == '\x01') && (*(uint *)(in_ECX + 0x58) == local_7c)) &&
     (*(uint *)(in_ECX + 0x5c) == local_78)) {
    if ((*(uint *)(in_ECX + 0x50) == local_8c) && (*(uint *)(in_ECX + 0x54) == local_88)) {
      if ((*(byte *)(in_ECX + 0x4e) & 1) == 0) goto LAB_1000966e;
    }
    else {
      *(undefined1 *)(in_ECX + 0x4e) = 1;
    }
    local_44 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar6 = recovered_10008440();
    uVar2 = local_34;
    uVar8 = local_38;
    local_a0 = local_8c;
    uVar11 = *(uint *)(in_ECX + 0x14);
    if ((char)uVar6 == '\0') {
LAB_10009959:
      uVar8 = 0;
      if ((int)uVar11 < 2) {
        local_9c = local_7c;
      }
      else if (local_7c == 0) {
        uVar8 = uVar11 - 1;
        if (local_8c <= uVar11 - 1) {
          uVar8 = local_8c;
        }
        local_9c = 0;
        if ((int)local_8c < 0) {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (0 < (int)local_8c) {
          uVar8 = local_8c;
        }
        if (local_7c <= uVar8) {
          uVar8 = local_7c;
        }
        lVar1 = (ulonglong)(uVar11 - 1) * (ulonglong)uVar8;
        local_9c = local_7c;
        uVar16 = recovered_10001d20((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_7c,0);
        uVar8 = (uint)uVar16;
      }
LAB_100099c7:
      uVar7 = local_78;
      uVar11 = local_88;
      *(uint *)(in_ECX + 0x30) = uVar8;
      iVar5 = *(int *)(in_ECX + 0x18);
      uVar8 = 0;
      if (1 < iVar5) {
        if (local_78 != 0) {
          uVar8 = 0;
          if (0 < (int)local_88) {
            uVar8 = local_88;
          }
          if (local_78 <= uVar8) {
            uVar8 = local_78;
          }
          lVar1 = (ulonglong)(iVar5 - 1) * (ulonglong)uVar8;
          uVar16 = recovered_10001d20((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_78,0);
          uVar8 = (uint)uVar16;
          goto LAB_100099fb;
        }
        uVar11 = iVar5 - 1U;
        if (local_88 <= iVar5 - 1U) {
          uVar11 = local_88;
        }
        uVar8 = 0;
        if (-1 < (int)local_88) {
          uVar8 = uVar11;
        }
      }
    }
    else {
      if ((int)uVar11 < 1) {
        local_9c = local_7c;
        uVar8 = 0;
        goto LAB_100099c7;
      }
      local_74 = *(uint *)(in_ECX + 0x18);
      if ((((int)local_74 < 1) || (local_38 == 0)) || (local_34 == 0)) goto LAB_10009959;
      uVar16 = recovered_10001d20((uint)((ulonglong)local_38 * (ulonglong)local_74),
                                  (uint)((ulonglong)local_38 * (ulonglong)local_74 >> 0x20),uVar11,0
                                 );
      uVar7 = (uint)uVar16;
      local_70 = uVar8;
      local_68 = uVar7 + (uVar7 == 0);
      if (uVar2 < uVar7) {
        uVar16 = recovered_10001d20((uint)((ulonglong)uVar2 * (ulonglong)uVar11),
                                    (uint)((ulonglong)uVar2 * (ulonglong)uVar11 >> 0x20),local_74,0)
        ;
        uVar8 = (int)uVar16 + (uint)((int)uVar16 == 0);
        local_68 = uVar2;
      }
      local_6c = uVar2 - local_68 >> 1;
      local_a0 = local_8c;
      local_9c = local_7c;
      uVar6 = recovered_1000d7b0(local_70,local_70 - uVar8 >> 1,uVar8,uVar11);
      uVar7 = local_78;
      uVar11 = local_88;
      *(undefined4 *)(in_ECX + 0x30) = uVar6;
      uVar8 = recovered_1000d7b0(uVar2,local_6c,local_68,local_74);
LAB_100099fb:
      local_88 = uVar11;
      local_78 = uVar7;
    }
    *(uint *)(in_ECX + 0x34) = uVar8;
  }
  else {
    *(undefined2 *)(in_ECX + 0x4d) = 1;
LAB_1000966e:
    local_a0 = local_8c;
    local_9c = local_7c;
  }
  *(uint *)(in_ECX + 0x50) = local_a0;
  *(uint *)(in_ECX + 0x54) = local_88;
  *(uint *)(in_ECX + 0x58) = local_9c;
  *(uint *)(in_ECX + 0x5c) = local_78;
LAB_1000968a:
  uVar4 = CONCAT11((byte)local_90,(byte)local_90) & 0x1ff;
  cVar10 = (char)(uVar4 >> 8);
  if ((cVar10 != '\0') && (*(char *)(in_ECX + 0x40) == '\0')) {
    *(undefined1 *)(in_ECX + 0x46) = 1;
    *(undefined1 *)(in_ECX + 0x49) = 1;
  }
  bVar3 = (byte)uVar4 >> 2;
  *(char *)(in_ECX + 0x40) = cVar10;
  if ((((byte)local_90 >> 1 & 1) != 0) && (*(char *)(in_ECX + 0x41) == '\0')) {
    *(undefined1 *)(in_ECX + 0x47) = 1;
    *(undefined1 *)(in_ECX + 0x4a) = 1;
  }
  uVar11 = (CONCAT11((byte)local_90 >> 1,bVar3) & 0x1ff) & 0xffffff01;
  *(char *)(in_ECX + 0x41) = (char)(uVar11 >> 8);
  if (((bVar3 & 1) != 0) && (*(char *)(in_ECX + 0x42) == '\0')) {
    *(undefined1 *)(in_ECX + 0x48) = 1;
    *(undefined1 *)(in_ECX + 0x4b) = 1;
  }
  *(char *)(in_ECX + 0x42) = (char)uVar11;
  iVar5 = *(int *)(in_ECX + 0x30);
  *(int *)(in_ECX + 0x38) = iVar5;
  iVar9 = *(int *)(in_ECX + 0x34);
  *(int *)(in_ECX + 0x3c) = iVar9;
  iVar12 = *(int *)(in_ECX + 0x14);
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  iVar13 = iVar12 + -1;
  if (iVar5 <= iVar12 + -1) {
    iVar13 = iVar5;
  }
  if (iVar5 < 0) {
    iVar13 = 0;
  }
  *(int *)(in_ECX + 0x30) = iVar13;
  iVar5 = 1;
  if (1 < *(int *)(in_ECX + 0x18)) {
    iVar5 = *(int *)(in_ECX + 0x18);
  }
  iVar12 = iVar5 + -1;
  if (iVar9 <= iVar5 + -1) {
    iVar12 = iVar9;
  }
  if (iVar9 < 0) {
    iVar12 = 0;
  }
  *(int *)(in_ECX + 0x34) = iVar12;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280880
#undef DAT_002808b4
#undef DAT_00280900
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280880
#undef _DAT_002808b4
#undef _DAT_00280900
#undef local_a0
#undef local_9c
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
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028095c
#define DAT_0028095c (*(uint8_t *)(0x28095cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c50
 */

/* WARNING: Removing unreachable block (ram,0x1000a8fe) */
/* WARNING: Removing unreachable block (ram,0x1000a7cb) */
/* WARNING: Removing unreachable block (ram,0x1000a871) */
/* WARNING: Removing unreachable block (ram,0x1000a84d) */
/* WARNING: Removing unreachable block (ram,0x1000a775) */
/* WARNING: Removing unreachable block (ram,0x1000a75b) */
/* WARNING: Removing unreachable block (ram,0x1000a77b) */
/* WARNING: Removing unreachable block (ram,0x1000a58e) */
/* WARNING: Removing unreachable block (ram,0x1000a576) */
/* WARNING: Removing unreachable block (ram,0x1000a594) */
/* WARNING: Removing unreachable block (ram,0x1000a5a4) */
/* WARNING: Removing unreachable block (ram,0x1000a5d3) */
/* WARNING: Removing unreachable block (ram,0x1000a551) */
/* WARNING: Removing unreachable block (ram,0x1000a4e3) */
/* WARNING: Removing unreachable block (ram,0x1000a4fc) */
/* WARNING: Removing unreachable block (ram,0x1000a502) */
/* WARNING: Removing unreachable block (ram,0x1000a512) */
/* WARNING: Removing unreachable block (ram,0x1000a543) */
/* WARNING: Removing unreachable block (ram,0x1000a459) */
/* WARNING: Removing unreachable block (ram,0x1000a3f4) */
/* WARNING: Removing unreachable block (ram,0x1000a2f4) */
/* WARNING: Removing unreachable block (ram,0x1000a320) */
/* WARNING: Removing unreachable block (ram,0x1000a32d) */
/* WARNING: Removing unreachable block (ram,0x1000a2b5) */
/* WARNING: Removing unreachable block (ram,0x1000a23b) */
/* WARNING: Removing unreachable block (ram,0x1000a24c) */
/* WARNING: Removing unreachable block (ram,0x1000a259) */
/* WARNING: Removing unreachable block (ram,0x1000a25c) */
/* WARNING: Removing unreachable block (ram,0x1000a1e5) */
/* WARNING: Removing unreachable block (ram,0x1000a1ae) */
/* WARNING: Removing unreachable block (ram,0x1000a135) */
/* WARNING: Removing unreachable block (ram,0x1000a14a) */
/* WARNING: Removing unreachable block (ram,0x1000a152) */
/* WARNING: Removing unreachable block (ram,0x1000a155) */
/* WARNING: Removing unreachable block (ram,0x10009f72) */
/* WARNING: Removing unreachable block (ram,0x10009edf) */
/* WARNING: Removing unreachable block (ram,0x10009ef5) */
/* WARNING: Removing unreachable block (ram,0x10009ea7) */
/* WARNING: Removing unreachable block (ram,0x10009e35) */
/* WARNING: Removing unreachable block (ram,0x10009e18) */
/* WARNING: Removing unreachable block (ram,0x10009daf) */
/* WARNING: Removing unreachable block (ram,0x10009d82) */
/* WARNING: Removing unreachable block (ram,0x10009d29) */
/* WARNING: Removing unreachable block (ram,0x10009d13) */
/* WARNING: Removing unreachable block (ram,0x10009d31) */
/* WARNING: Removing unreachable block (ram,0x10009d34) */
/* WARNING: Removing unreachable block (ram,0x10009d3b) */
/* WARNING: Removing unreachable block (ram,0x10009d41) */
/* WARNING: Removing unreachable block (ram,0x10009d9c) */
/* WARNING: Removing unreachable block (ram,0x10009db7) */
/* WARNING: Removing unreachable block (ram,0x10009dba) */
/* WARNING: Removing unreachable block (ram,0x10009dc6) */
/* WARNING: Removing unreachable block (ram,0x10009dcc) */
/* WARNING: Removing unreachable block (ram,0x10009e27) */
/* WARNING: Removing unreachable block (ram,0x10009e3d) */
/* WARNING: Removing unreachable block (ram,0x10009e40) */
/* WARNING: Removing unreachable block (ram,0x10009e4c) */
/* WARNING: Removing unreachable block (ram,0x10009e57) */
/* WARNING: Removing unreachable block (ram,0x10009eb6) */
/* WARNING: Removing unreachable block (ram,0x10009edb) */
/* WARNING: Removing unreachable block (ram,0x10009f40) */
/* WARNING: Removing unreachable block (ram,0x10009efb) */
/* WARNING: Removing unreachable block (ram,0x10009f07) */
/* WARNING: Removing unreachable block (ram,0x10009f20) */
/* WARNING: Removing unreachable block (ram,0x10009f2d) */
/* WARNING: Removing unreachable block (ram,0x10009ef0) */
/* WARNING: Removing unreachable block (ram,0x10009ed0) */
/* WARNING: Removing unreachable block (ram,0x10009ed6) */
/* WARNING: Removing unreachable block (ram,0x10009f7a) */
/* WARNING: Removing unreachable block (ram,0x10009fa9) */
/* WARNING: Removing unreachable block (ram,0x10009fcc) */
/* WARNING: Removing unreachable block (ram,0x10009ff2) */
/* WARNING: Removing unreachable block (ram,0x10009ffd) */
/* WARNING: Removing unreachable block (ram,0x1000a00b) */
/* WARNING: Removing unreachable block (ram,0x1000a05f) */
/* WARNING: Removing unreachable block (ram,0x1000a032) */
/* WARNING: Removing unreachable block (ram,0x1000a071) */
/* WARNING: Removing unreachable block (ram,0x1000a161) */
/* WARNING: Removing unreachable block (ram,0x1000a16c) */
/* WARNING: Removing unreachable block (ram,0x1000a1bd) */
/* WARNING: Removing unreachable block (ram,0x1000a1ce) */
/* WARNING: Removing unreachable block (ram,0x1000a1d6) */
/* WARNING: Removing unreachable block (ram,0x1000a1d9) */
/* WARNING: Removing unreachable block (ram,0x1000a1eb) */
/* WARNING: Removing unreachable block (ram,0x1000a22c) */
/* WARNING: Removing unreachable block (ram,0x1000a268) */
/* WARNING: Removing unreachable block (ram,0x1000a26e) */
/* WARNING: Removing unreachable block (ram,0x1000a2b8) */
/* WARNING: Removing unreachable block (ram,0x1000a2d6) */
/* WARNING: Removing unreachable block (ram,0x1000a2e4) */
/* WARNING: Removing unreachable block (ram,0x1000a0e0) */
/* WARNING: Removing unreachable block (ram,0x1000a095) */
/* WARNING: Removing unreachable block (ram,0x1000a0a6) */
/* WARNING: Removing unreachable block (ram,0x1000a0f1) */
/* WARNING: Removing unreachable block (ram,0x1000a1b1) */
/* WARNING: Removing unreachable block (ram,0x1000a22f) */
/* WARNING: Removing unreachable block (ram,0x1000a2c0) */
/* WARNING: Removing unreachable block (ram,0x1000a2c2) */
/* WARNING: Removing unreachable block (ram,0x1000a332) */
/* WARNING: Removing unreachable block (ram,0x1000a347) */
/* WARNING: Removing unreachable block (ram,0x1000a352) */
/* WARNING: Removing unreachable block (ram,0x1000a366) */
/* WARNING: Removing unreachable block (ram,0x1000a369) */
/* WARNING: Removing unreachable block (ram,0x1000a36d) */
/* WARNING: Removing unreachable block (ram,0x1000a370) */
/* WARNING: Removing unreachable block (ram,0x1000a39d) */
/* WARNING: Removing unreachable block (ram,0x1000a3a0) */
/* WARNING: Removing unreachable block (ram,0x1000a3ae) */
/* WARNING: Removing unreachable block (ram,0x1000a3b1) */
/* WARNING: Removing unreachable block (ram,0x1000a561) */
/* WARNING: Removing unreachable block (ram,0x1000a6c5) */
/* WARNING: Removing unreachable block (ram,0x1000a7d3) */
/* WARNING: Removing unreachable block (ram,0x1000a6d3) */
/* WARNING: Removing unreachable block (ram,0x1000a56b) */
/* WARNING: Removing unreachable block (ram,0x1000a3ec) */
/* WARNING: Removing unreachable block (ram,0x1000a407) */
/* WARNING: Removing unreachable block (ram,0x1000a40d) */
/* WARNING: Removing unreachable block (ram,0x1000a41c) */
/* WARNING: Removing unreachable block (ram,0x1000a44b) */
/* WARNING: Removing unreachable block (ram,0x1000a45c) */
/* WARNING: Removing unreachable block (ram,0x1000a461) */
/* WARNING: Removing unreachable block (ram,0x1000a46c) */
/* WARNING: Removing unreachable block (ram,0x1000a487) */
/* WARNING: Removing unreachable block (ram,0x1000a48d) */
/* WARNING: Removing unreachable block (ram,0x1000a49d) */
/* WARNING: Removing unreachable block (ram,0x1000a4ca) */
/* WARNING: Removing unreachable block (ram,0x1000a4d8) */
/* WARNING: Removing unreachable block (ram,0x1000a4db) */
/* WARNING: Removing unreachable block (ram,0x1000a554) */
/* WARNING: Removing unreachable block (ram,0x1000a5de) */
/* WARNING: Removing unreachable block (ram,0x1000a5e1) */
/* WARNING: Removing unreachable block (ram,0x1000a5e4) */
/* WARNING: Removing unreachable block (ram,0x1000a5e8) */
/* WARNING: Removing unreachable block (ram,0x1000a5fb) */
/* WARNING: Removing unreachable block (ram,0x1000a601) */
/* WARNING: Removing unreachable block (ram,0x1000a610) */
/* WARNING: Removing unreachable block (ram,0x1000a63d) */
/* WARNING: Removing unreachable block (ram,0x1000a646) */
/* WARNING: Removing unreachable block (ram,0x1000a649) */
/* WARNING: Removing unreachable block (ram,0x1000a64b) */
/* WARNING: Removing unreachable block (ram,0x1000a903) */
/* WARNING: Removing unreachable block (ram,0x1000a657) */
/* WARNING: Removing unreachable block (ram,0x1000a66f) */
/* WARNING: Removing unreachable block (ram,0x1000a675) */
/* WARNING: Removing unreachable block (ram,0x1000a685) */
/* WARNING: Removing unreachable block (ram,0x1000a6b0) */
/* WARNING: Removing unreachable block (ram,0x1000a6bd) */
/* WARNING: Removing unreachable block (ram,0x1000a6c0) */
/* WARNING: Removing unreachable block (ram,0x1000a905) */
/* WARNING: Removing unreachable block (ram,0x1000a6de) */
/* WARNING: Removing unreachable block (ram,0x1000a6fa) */
/* WARNING: Removing unreachable block (ram,0x1000a700) */
/* WARNING: Removing unreachable block (ram,0x1000a710) */
/* WARNING: Removing unreachable block (ram,0x1000a73f) */
/* WARNING: Removing unreachable block (ram,0x1000a74d) */
/* WARNING: Removing unreachable block (ram,0x1000a750) */
/* WARNING: Removing unreachable block (ram,0x1000a753) */
/* WARNING: Removing unreachable block (ram,0x1000a7de) */
/* WARNING: Removing unreachable block (ram,0x1000a7fa) */
/* WARNING: Removing unreachable block (ram,0x1000a800) */
/* WARNING: Removing unreachable block (ram,0x1000a810) */
/* WARNING: Removing unreachable block (ram,0x1000a83f) */
/* WARNING: Removing unreachable block (ram,0x1000a850) */
/* WARNING: Removing unreachable block (ram,0x1000a853) */
/* WARNING: Removing unreachable block (ram,0x1000a857) */
/* WARNING: Removing unreachable block (ram,0x1000a877) */
/* WARNING: Removing unreachable block (ram,0x1000a791) */
/* WARNING: Removing unreachable block (ram,0x1000a88b) */
/* WARNING: Removing unreachable block (ram,0x1000a7be) */
/* WARNING: Removing unreachable block (ram,0x1000a7ce) */
/* WARNING: Removing unreachable block (ram,0x1000a890) */
/* WARNING: Removing unreachable block (ram,0x1000a912) */
/* WARNING: Removing unreachable block (ram,0x1000a89b) */
/* WARNING: Removing unreachable block (ram,0x1000a8ac) */
/* WARNING: Removing unreachable block (ram,0x1000a8b2) */
/* WARNING: Removing unreachable block (ram,0x1000a8c1) */
/* WARNING: Removing unreachable block (ram,0x1000a8f0) */
/* WARNING: Removing unreachable block (ram,0x1000a901) */
/* WARNING: Removing unreachable block (ram,0x1000a914) */
/* WARNING: Removing unreachable block (ram,0x1000a91e) */
/* WARNING: Removing unreachable block (ram,0x1000a9ae) */
/* WARNING: Removing unreachable block (ram,0x1000a9b8) */
/* WARNING: Removing unreachable block (ram,0x1000a9c4) */
/* WARNING: Removing unreachable block (ram,0x1000a9e0) */
/* WARNING: Removing unreachable block (ram,0x1000a9ed) */
/* WARNING: Removing unreachable block (ram,0x1000a960) */
/* WARNING: Removing unreachable block (ram,0x1000a935) */
/* WARNING: Removing unreachable block (ram,0x1000a943) */
/* WARNING: Removing unreachable block (ram,0x1000a96a) */
/* WARNING: Removing unreachable block (ram,0x1000a98b) */
/* WARNING: Removing unreachable block (ram,0x1000a993) */
/* WARNING: Removing unreachable block (ram,0x1000a99a) */
/* WARNING: Removing unreachable block (ram,0x1000a9a5) */
/* WARNING: Removing unreachable block (ram,0x1000a9a8) */
/* WARNING: Removing unreachable block (ram,0x1000a9f2) */
/* WARNING: Removing unreachable block (ram,0x1000aa08) */
/* WARNING: Removing unreachable block (ram,0x1000aa11) */
/* WARNING: Removing unreachable block (ram,0x1000aa1c) */
/* WARNING: Removing unreachable block (ram,0x1000aa2a) */
/* WARNING: Removing unreachable block (ram,0x1000aa34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009c50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  if ((((*(char *)(in_ECX + 0x10) == '\x01') && (*(char *)(in_ECX + 0x24) == '\0')) &&
      (0 < *(int *)(in_ECX + 0x14))) && (0 < *(int *)(in_ECX + 0x18))) {
    recovered_10008440();
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028095c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_1000e36c
#define DAT_1000e36c (*(int *)(((uintptr_t)pf_module_state + 0x65bU)))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_1000e374
#define DAT_1000e374 (*(uint *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_1000e378
#define DAT_1000e378 (*(int *)(((uintptr_t)pf_module_state + 0x667U)))
#undef DAT_1000e380
#define DAT_1000e380 (*(int *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_1000aa60(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar5 = DAT_1000e380;
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if ((DAT_1000e378 == param_1) && (*(char *)(param_1 + 0x24) == '\0')) {
joined_r0x1000aaaf:
      do {
        while( true ) {
          if (((_DAT_00280800 != 0x50414d57) ||
              (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) || (_DAT_00280808 < 0x30)))) ||
             ((_DAT_0028082c == (code *)0x0 || (uVar3 = (*_DAT_0028082c)(), uVar3 == 0))))
          goto LAB_1000acca;
          uVar6 = uVar3 >> 8 & 0xff;
          uVar8 = uVar3 & 0xff;
          if ((uVar8 == 0x1b || uVar6 != 1) && (uVar6 != 0x17 || uVar8 != 0)) break;
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        if (DAT_1000e370 == DAT_1000e374) {
          uVar6 = DAT_1000e370 * 2;
          if (DAT_1000e370 == 0) {
            uVar6 = 4;
          }
          if (DAT_1000e370 < uVar6) {
            iVar4 = recovered_10006ab0(uVar6 * 4);
            uVar2 = DAT_1000e370;
            iVar1 = DAT_1000e36c;
            if (DAT_1000e370 != 0) {
              uVar7 = 0;
              do {
                *(undefined4 *)(iVar4 + uVar7 * 4) = *(undefined4 *)(iVar1 + uVar7 * 4);
                uVar7 = uVar7 + 1;
              } while (uVar2 != uVar7);
            }
            recovered_10006b10();
            DAT_1000e36c = iVar4;
            DAT_1000e374 = uVar6;
          }
        }
        *(uint *)(DAT_1000e36c + DAT_1000e370 * 4) = uVar3;
        DAT_1000e370 = DAT_1000e370 + 1;
      } while (uVar8 == 0);
      if (DAT_1000e380 == 2) {
        DAT_1000e380 = 0;
        if (uVar8 != 0x1b || 0xfb < (byte)((char)uVar3 + 0xbbU)) goto joined_r0x1000aaaf;
      }
      else {
        if (DAT_1000e380 == 1) {
          if (uVar8 == 0x5b) {
            DAT_1000e380 = 2;
            goto joined_r0x1000aaaf;
          }
          DAT_1000e380 = 0;
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        if (uVar8 != 0x1b) goto joined_r0x1000aaaf;
      }
      DAT_1000e380 = 1;
      goto joined_r0x1000aaaf;
    }
  }
  else if (*(int *)(param_1 + 0xc) != 0) {
    if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
        ((0xb7 < _DAT_00280808 && (_DAT_002808b4 != (code *)0x0)))) &&
       (iVar5 = (*_DAT_002808b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
      if ((*(byte *)(param_1 + 0xac) & 1) == 0) goto LAB_1000acb4;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
LAB_1000acb4:
  return *(undefined1 *)(param_1 + 0x24);
LAB_1000acca:
  if (DAT_1000e380 == 1 && iVar5 == 1) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    DAT_1000e380 = 0;
  }
  else if (DAT_1000e380 == 2 && iVar5 == 2) {
    DAT_1000e380 = 0;
  }
  goto LAB_1000acb4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef DAT_002808b4
#undef DAT_1000e36c
#undef DAT_1000e370
#undef DAT_1000e374
#undef DAT_1000e378
#undef DAT_1000e380
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c
#undef _DAT_002808b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad00
 */

void recovered_1000ad00(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x26) = param_2;
    *(undefined1 *)(param_1 + 0x27) = param_3;
    *(undefined1 *)(param_1 + 0x28) = param_4;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    else {
      recovered_100088a0();
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad40
 */

int * recovered_1000ad40(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  void *dst;
  int iVar5;
  uint bytes;
  int iVar6;
  uint uVar7;

  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)recovered_10006ab0(0x18);
    iVar5 = *(int *)(param_1 + 0x7c);
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    *piVar4 = iVar5;
    iVar6 = *(int *)(param_1 + 0x80);
    if (iVar6 < 1) {
      iVar6 = *(int *)(param_1 + 0x18);
    }
    piVar4[1] = iVar6;
    bytes = iVar5 * (uintptr_t)iVar6 * 4;
    dst = (void *)recovered_10006ae0(bytes);
    piVar4[2] = (int)dst;
    if (((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x7c) != iVar5)) ||
       (*(int *)(param_1 + 0x80) != iVar6)) {
      if (bytes != 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x26);
        uVar2 = *(undefined1 *)(param_1 + 0x27);
        uVar3 = *(undefined1 *)(param_1 + 0x28);
        uVar7 = 0;
        do {
          *(undefined1 *)((int)dst + uVar7) = uVar1;
          *(undefined1 *)((int)dst + uVar7 + 1) = uVar2;
          *(undefined1 *)((int)dst + uVar7 + 2) = uVar3;
          *(undefined1 *)((int)dst + uVar7 + 3) = 0xff;
          uVar7 = uVar7 + 4;
        } while (uVar7 < bytes);
      }
    }
    else {
      recovered_100021d0(dst,*(void **)(param_1 + 0x60),bytes);
    }
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  return piVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae20
 */

void recovered_1000ae20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x30);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  *param_3 = uVar1;
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_1000e378
#define DAT_1000e378 (*(int *)(((uintptr_t)pf_module_state + 0x667U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte recovered_1000ae70(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;

  if (param_2 < 3 && param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      if (*(char *)(param_1 + 0x24) == '\0') {
LAB_1000aeab:
        if (DAT_1000e378 == param_1) {
          bVar1 = *(byte *)(param_1 + 0x43 + param_2);
        }
        else {
          recovered_10009390();
          bVar1 = 1;
          if (*(char *)(param_1 + 0x40 + param_2) == '\0') {
            bVar1 = *(byte *)(param_1 + 0x46 + param_2);
          }
          *(byte *)(param_1 + 0x43 + param_2) = bVar1;
          *(undefined1 *)(param_1 + 0x46 + param_2) = 0;
        }
        goto LAB_1000af6c;
      }
    }
    else if (*(int *)(param_1 + 0xc) != 0) {
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         (((0xb7 < _DAT_00280808 && (_DAT_002808b4 != (code *)0x0)) &&
          (iVar2 = (*_DAT_002808b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar2 != 0)))) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
        if ((*(uint *)(param_1 + 0xac) & 1) != 0) {
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        if ((*(uint *)(param_1 + 0xac) & 6) == 2) goto LAB_1000aeab;
      }
      else {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x43 + param_2) = 0;
  }
  bVar1 = 0;
LAB_1000af6c:
  return bVar1 & 1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef DAT_1000e378
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_1000e114
#define DAT_1000e114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x403U)))
#undef DAT_1000e115
#define DAT_1000e115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x404U)))
#undef DAT_1000e116
#define DAT_1000e116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_1000e117
#define DAT_1000e117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x406U)))
#undef DAT_1000e118
#define DAT_1000e118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x407U)))
#undef DAT_1000e119
#define DAT_1000e119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x408U)))
#undef DAT_1000e11a
#define DAT_1000e11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x409U)))
#undef DAT_1000e11b
#define DAT_1000e11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40aU)))
#undef DAT_1000e11c
#define DAT_1000e11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40bU)))
#undef DAT_1000e11d
#define DAT_1000e11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#undef DAT_1000e11e
#define DAT_1000e11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000e11f
#define DAT_1000e11f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_1000e120
#define DAT_1000e120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40fU)))
#undef DAT_1000e121
#define DAT_1000e121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x410U)))
#undef DAT_1000e122
#define DAT_1000e122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x411U)))
#undef DAT_1000e123
#define DAT_1000e123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x412U)))
#undef DAT_1000e124
#define DAT_1000e124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_1000e125
#define DAT_1000e125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x414U)))
#undef DAT_1000e126
#define DAT_1000e126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x415U)))
#undef DAT_1000e127
#define DAT_1000e127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x416U)))
#undef DAT_1000e128
#define DAT_1000e128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x417U)))
#undef DAT_1000e129
#define DAT_1000e129 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x418U)))
#undef DAT_1000e12a
#define DAT_1000e12a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x419U)))
#undef DAT_1000e12b
#define DAT_1000e12b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41aU)))
#undef DAT_1000e12c
#define DAT_1000e12c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41bU)))
#undef DAT_1000e12d
#define DAT_1000e12d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41cU)))
#undef DAT_1000e12e
#define DAT_1000e12e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_1000e12f
#define DAT_1000e12f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41eU)))
#undef DAT_1000e130
#define DAT_1000e130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41fU)))
#undef DAT_1000e131
#define DAT_1000e131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x420U)))
#undef DAT_1000e132
#define DAT_1000e132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x421U)))
#undef DAT_1000e133
#define DAT_1000e133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x422U)))
#undef DAT_1000e134
#define DAT_1000e134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x423U)))
#undef DAT_1000e135
#define DAT_1000e135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_1000e136
#define DAT_1000e136 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x425U)))
#undef DAT_1000e137
#define DAT_1000e137 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x426U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x427U)))
#undef DAT_1000e139
#define DAT_1000e139 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x428U)))
#undef DAT_1000e13a
#define DAT_1000e13a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x429U)))
#undef DAT_1000e13b
#define DAT_1000e13b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_1000e13c
#define DAT_1000e13c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42bU)))
#undef DAT_1000e13d
#define DAT_1000e13d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_1000e13e
#define DAT_1000e13e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42dU)))
#undef DAT_1000e13f
#define DAT_1000e13f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42eU)))
#undef DAT_1000e140
#define DAT_1000e140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42fU)))
#undef DAT_1000e141
#define DAT_1000e141 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x430U)))
#undef DAT_1000e142
#define DAT_1000e142 (*(byte *)(((uintptr_t)pf_module_state + 0x431U)))
#undef DAT_1000e36c
#define DAT_1000e36c (*(int *)(((uintptr_t)pf_module_state + 0x65bU)))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_1000e374
#define DAT_1000e374 (*(uint *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_1000e378
#define DAT_1000e378 (*(int *)(((uintptr_t)pf_module_state + 0x667U)))
#undef DAT_1000e37c
#define DAT_1000e37c (*(int *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_1000e380
#define DAT_1000e380 (*(int *)(((uintptr_t)pf_module_state + 0x66fU)))
#undef PTR_DAT_1000e014
#define PTR_DAT_1000e014 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x303U)))
#undef PTR_DAT_1000e07c
#define PTR_DAT_1000e07c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000af80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;

  iVar4 = DAT_1000e378;
  DAT_1000e114 = 0;
  DAT_1000e115 = 0;
  DAT_1000e116 = 0;
  DAT_1000e117 = 0;
  DAT_1000e118 = 0;
  DAT_1000e119 = 0;
  DAT_1000e11a = 0;
  DAT_1000e11b = 0;
  DAT_1000e11c = 0;
  DAT_1000e11d = 0;
  DAT_1000e11e = 0;
  DAT_1000e11f = 0;
  DAT_1000e120 = 0;
  DAT_1000e121 = 0;
  DAT_1000e122 = 0;
  DAT_1000e123 = 0;
  DAT_1000e124 = 0;
  DAT_1000e125 = 0;
  DAT_1000e126 = 0;
  DAT_1000e127 = 0;
  DAT_1000e128 = 0;
  DAT_1000e129 = 0;
  DAT_1000e12a = 0;
  DAT_1000e12b = 0;
  DAT_1000e12c = 0;
  DAT_1000e12d = 0;
  DAT_1000e12e = 0;
  DAT_1000e12f = 0;
  DAT_1000e130 = 0;
  DAT_1000e131 = 0;
  DAT_1000e132 = 0;
  DAT_1000e133 = 0;
  DAT_1000e134 = 0;
  DAT_1000e135 = 0;
  DAT_1000e136 = 0;
  DAT_1000e137 = 0;
  DAT_1000e138 = 0;
  DAT_1000e139 = 0;
  DAT_1000e13a = 0;
  DAT_1000e13b = 0;
  DAT_1000e13c = 0;
  DAT_1000e13d = 0;
  DAT_1000e13e = 0;
  DAT_1000e13f = 0;
  DAT_1000e140 = 0;
  DAT_1000e141 = 0;
  DAT_1000e142 = 0;
  if (DAT_1000e378 == 0) {
    DAT_1000e114 = 0;
    DAT_1000e115 = 0;
    DAT_1000e116 = 0;
    DAT_1000e117 = 0;
    DAT_1000e118 = 0;
    DAT_1000e119 = 0;
    DAT_1000e11a = 0;
    DAT_1000e11b = 0;
    DAT_1000e11c = 0;
    DAT_1000e11d = 0;
    DAT_1000e11e = 0;
    DAT_1000e11f = 0;
    DAT_1000e120 = 0;
    DAT_1000e121 = 0;
    DAT_1000e122 = 0;
    DAT_1000e123 = 0;
    DAT_1000e124 = 0;
    DAT_1000e125 = 0;
    DAT_1000e126 = 0;
    DAT_1000e127 = 0;
    DAT_1000e128 = 0;
    DAT_1000e129 = 0;
    DAT_1000e12a = 0;
    DAT_1000e12b = 0;
    DAT_1000e12c = 0;
    DAT_1000e12d = 0;
    DAT_1000e12e = 0;
    DAT_1000e12f = 0;
    DAT_1000e130 = 0;
    DAT_1000e131 = 0;
    DAT_1000e132 = 0;
    DAT_1000e133 = 0;
    DAT_1000e134 = 0;
    DAT_1000e135 = 0;
    DAT_1000e136 = 0;
    DAT_1000e137 = 0;
    DAT_1000e138 = 0;
    DAT_1000e139 = 0;
    DAT_1000e13a = 0;
    DAT_1000e13b = 0;
    DAT_1000e13c = 0;
    DAT_1000e13d = 0;
    DAT_1000e13e = 0;
    DAT_1000e13f = 0;
    DAT_1000e140 = 0;
    DAT_1000e141 = 0;
    DAT_1000e142 = 0;
    return;
  }
  if (*(char *)(DAT_1000e378 + 0x10) == '\x01') {
    if (*(char *)(DAT_1000e378 + 0x24) != '\0') {
      DAT_1000e114 = 0;
      DAT_1000e115 = 0;
      DAT_1000e116 = 0;
      DAT_1000e117 = 0;
      DAT_1000e118 = 0;
      DAT_1000e119 = 0;
      DAT_1000e11a = 0;
      DAT_1000e11b = 0;
      DAT_1000e11c = 0;
      DAT_1000e11d = 0;
      DAT_1000e11e = 0;
      DAT_1000e11f = 0;
      DAT_1000e120 = 0;
      DAT_1000e121 = 0;
      DAT_1000e122 = 0;
      DAT_1000e123 = 0;
      DAT_1000e124 = 0;
      DAT_1000e125 = 0;
      DAT_1000e126 = 0;
      DAT_1000e127 = 0;
      DAT_1000e128 = 0;
      DAT_1000e129 = 0;
      DAT_1000e12a = 0;
      DAT_1000e12b = 0;
      DAT_1000e12c = 0;
      DAT_1000e12d = 0;
      DAT_1000e12e = 0;
      DAT_1000e12f = 0;
      DAT_1000e130 = 0;
      DAT_1000e131 = 0;
      DAT_1000e132 = 0;
      DAT_1000e133 = 0;
      DAT_1000e134 = 0;
      DAT_1000e135 = 0;
      DAT_1000e136 = 0;
      DAT_1000e137 = 0;
      DAT_1000e138 = 0;
      DAT_1000e139 = 0;
      DAT_1000e13a = 0;
      DAT_1000e13b = 0;
      DAT_1000e13c = 0;
      DAT_1000e13d = 0;
      DAT_1000e13e = 0;
      DAT_1000e13f = 0;
      DAT_1000e140 = 0;
      DAT_1000e141 = 0;
      DAT_1000e142 = 0;
      return;
    }
  }
  else {
    if (*(int *)(DAT_1000e378 + 0xc) == 0) {
      DAT_1000e114 = 0;
      DAT_1000e115 = 0;
      DAT_1000e116 = 0;
      DAT_1000e117 = 0;
      DAT_1000e118 = 0;
      DAT_1000e119 = 0;
      DAT_1000e11a = 0;
      DAT_1000e11b = 0;
      DAT_1000e11c = 0;
      DAT_1000e11d = 0;
      DAT_1000e11e = 0;
      DAT_1000e11f = 0;
      DAT_1000e120 = 0;
      DAT_1000e121 = 0;
      DAT_1000e122 = 0;
      DAT_1000e123 = 0;
      DAT_1000e124 = 0;
      DAT_1000e125 = 0;
      DAT_1000e126 = 0;
      DAT_1000e127 = 0;
      DAT_1000e128 = 0;
      DAT_1000e129 = 0;
      DAT_1000e12a = 0;
      DAT_1000e12b = 0;
      DAT_1000e12c = 0;
      DAT_1000e12d = 0;
      DAT_1000e12e = 0;
      DAT_1000e12f = 0;
      DAT_1000e130 = 0;
      DAT_1000e131 = 0;
      DAT_1000e132 = 0;
      DAT_1000e133 = 0;
      DAT_1000e134 = 0;
      DAT_1000e135 = 0;
      DAT_1000e136 = 0;
      DAT_1000e137 = 0;
      DAT_1000e138 = 0;
      DAT_1000e139 = 0;
      DAT_1000e13a = 0;
      DAT_1000e13b = 0;
      DAT_1000e13c = 0;
      DAT_1000e13d = 0;
      DAT_1000e13e = 0;
      DAT_1000e13f = 0;
      DAT_1000e140 = 0;
      DAT_1000e141 = 0;
      DAT_1000e142 = 0;
      return;
    }
    if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
        ((_DAT_00280808 < 0xb8 || (_DAT_002808b4 == (code *)0x0)))) ||
       (iVar3 = (*_DAT_002808b4)(*(int *)(DAT_1000e378 + 0xc),DAT_1000e378 + 0x84), iVar3 == 0)) {
      *(undefined1 *)(iVar4 + 0x24) = 1;
      return;
    }
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + 0xb0);
    *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar4 + 0xb4);
    if ((*(uint *)(iVar4 + 0xac) & 1) != 0) {
      *(undefined1 *)(iVar4 + 0x24) = 1;
    }
    if ((*(uint *)(iVar4 + 0xac) & 6) != 2) {
      return;
    }
  }
  iVar4 = DAT_1000e378;
  *(undefined4 *)(DAT_1000e378 + 0x70) = 0;
  *(undefined4 *)(iVar4 + 0x78) = 0;
  iVar3 = DAT_1000e37c;
  DAT_1000e380 = 0;
  recovered_10009390();
  iVar4 = DAT_1000e378;
  *(undefined1 *)(DAT_1000e378 + 0x4c) = 1;
  uVar9 = 1;
  uVar10 = 1;
  if (*(char *)(iVar4 + 0x40) == '\0') {
    uVar10 = *(undefined1 *)(iVar4 + 0x46);
  }
  *(undefined1 *)(iVar4 + 0x43) = uVar10;
  *(undefined1 *)(iVar4 + 0x46) = 0;
  if (*(char *)(iVar4 + 0x41) == '\0') {
    uVar9 = *(undefined1 *)(iVar4 + 0x47);
  }
  *(undefined1 *)(iVar4 + 0x44) = uVar9;
  *(undefined1 *)(iVar4 + 0x47) = 0;
  uVar10 = 1;
  if (*(char *)(iVar4 + 0x42) == '\0') {
    uVar10 = *(undefined1 *)(iVar4 + 0x48);
  }
  *(undefined1 *)(iVar4 + 0x45) = uVar10;
  *(undefined1 *)(iVar4 + 0x48) = 0;
  if (_DAT_00280800 == 0x50414d57) {
    do {
      if (((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) ||
         ((_DAT_00280808 < 0x30 ||
          ((_DAT_0028082c == (code *)0x0 || (iVar4 = (*_DAT_0028082c)(), iVar4 == 0)))))) break;
      if (DAT_1000e370 == DAT_1000e374) {
        uVar11 = DAT_1000e370 * 2;
        if (DAT_1000e370 == 0) {
          uVar11 = 4;
        }
        if (DAT_1000e370 < uVar11) {
          iVar5 = recovered_10006ab0(uVar11 * 4);
          uVar8 = DAT_1000e370;
          iVar1 = DAT_1000e36c;
          if (DAT_1000e370 != 0) {
            uVar12 = 0;
            do {
              *(undefined4 *)(iVar5 + uVar12 * 4) = *(undefined4 *)(iVar1 + uVar12 * 4);
              uVar12 = uVar12 + 1;
            } while (uVar8 != uVar12);
          }
          recovered_10006b10();
          DAT_1000e36c = iVar5;
          DAT_1000e374 = uVar11;
        }
      }
      *(int *)(DAT_1000e36c + DAT_1000e370 * 4) = iVar4;
      DAT_1000e370 = DAT_1000e370 + 1;
    } while (_DAT_00280800 == 0x50414d57);
  }
  if (DAT_1000e370 != 0) {
    uVar11 = 0;
    do {
      iVar4 = DAT_1000e378;
      uVar8 = *(uint *)(DAT_1000e36c + uVar11 * 4);
      uVar12 = uVar8 >> 8;
      uVar13 = uVar8 & 0xff;
      if ((uVar13 != 0x1b & (uVar12 & 0xff) == 1 & *(byte *)(DAT_1000e378 + 0x10)) == 1) {
        *(undefined1 *)(DAT_1000e378 + 0x24) = 1;
        goto LAB_1000b314;
      }
      if (uVar13 == 0) {
        switch((uintptr_t)(uVar12 & 0xff)) {
        case 1:
          DAT_1000e115 = 1;
          break;
        case 2:
          DAT_1000e116 = 1;
          break;
        case 3:
          DAT_1000e118 = 1;
          break;
        case 4:
          DAT_1000e117 = 1;
          break;
        default:
switchD_1000b3a9_caseD_5:
          iVar4 = DAT_1000e378;
          switch((uintptr_t)(uVar12 & 0xff)) {
          case 0xe:
            DAT_1000e13f = 1;
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
            break;
          case 0x1c:
            DAT_1000e114 = 1;
            break;
          case 0x48:
            DAT_1000e115 = 1;
            break;
          case 0x4b:
            DAT_1000e117 = 1;
            break;
          case 0x4d:
            DAT_1000e118 = 1;
            break;
          case 0x50:
            DAT_1000e116 = 1;
            break;
          case 0x53:
            DAT_1000e140 = 1;
            break;
          default:
            if ((uVar12 & 0xff) == 1) {
              *(undefined1 *)(DAT_1000e378 + 0x24) = 1;
            }
          }
          goto switchD_1000b62d_caseD_f;
        case 0x17:
          *(undefined1 *)(DAT_1000e378 + 0x24) = 1;
        }
      }
      else {
        bVar15 = (byte)uVar8;
        if (DAT_1000e37c == 2) {
          DAT_1000e37c = 0;
          switch((uintptr_t)(uVar8 & 0xff)) {
          case 0x1b:
            goto switchD_1000b3d5_caseD_1b;
          default:
            goto switchD_1000b3d5_caseD_1c;
          case 0x41:
            DAT_1000e115 = 1;
            break;
          case 0x42:
            DAT_1000e116 = 1;
            break;
          case 0x43:
            DAT_1000e118 = 1;
            break;
          case 0x44:
            DAT_1000e117 = 1;
          }
        }
        else {
          if (DAT_1000e37c == 1) {
            if (bVar15 == 0x5b) {
              DAT_1000e37c = 2;
              goto switchD_1000b5c4_caseD_5;
            }
            DAT_1000e37c = 0;
            *(undefined1 *)(DAT_1000e378 + 0x24) = 1;
          }
          if (bVar15 == 0x1b) {
switchD_1000b3d5_caseD_1b:
            DAT_1000e37c = 1;
          }
          else {
switchD_1000b3d5_caseD_1c:
            if (bVar15 < 0x20) {
              if (bVar15 < 0xe) {
                if ((0x2500U >> (uVar8 & 0x1f) & 1) != 0) goto LAB_1000b428;
                if ((0x18U >> (uVar8 & 0x1f) & 1) == 0) goto switchD_1000b5c4_caseD_5;
switchD_1000b5c4_caseD_3:
                *(undefined1 *)(iVar4 + 0x24) = 1;
              }
            }
            else {
LAB_1000b428:
              bVar2 = bVar15;
              if (bVar15 == 10) {
                bVar2 = 0xd;
              }
              if (bVar15 == 0x7f) {
                bVar2 = 8;
              }
              uVar16 = *(uint *)(iVar4 + 0x70);
              if (uVar16 == *(uint *)(iVar4 + 0x74)) {
                uVar6 = uVar16 * 2;
                if (uVar16 == 0) {
                  uVar6 = 4;
                }
                if (uVar16 < uVar6) {
                  iVar7 = recovered_10006ab0(uVar6);
                  iVar1 = *(int *)(iVar4 + 0x6c);
                  iVar5 = *(int *)(iVar4 + 0x70);
                  if (iVar5 != 0) {
                    iVar14 = 0;
                    do {
                      *(undefined1 *)(iVar7 + iVar14) = *(undefined1 *)(iVar1 + iVar14);
                      iVar14 = iVar14 + 1;
                    } while (iVar5 != iVar14);
                  }
                  recovered_10006b10();
                  *(int *)(iVar4 + 0x6c) = iVar7;
                  *(uint *)(iVar4 + 0x74) = uVar6;
                  uVar16 = *(uint *)(iVar4 + 0x70);
                }
              }
              *(byte *)(*(int *)(iVar4 + 0x6c) + uVar16) = bVar2;
              *(int *)(iVar4 + 0x70) = *(int *)(iVar4 + 0x70) + 1;
              if ((byte)(bVar15 - 0x20) < 0x5f) {
                DAT_1000e142 = bVar15;
                if ((byte)(bVar15 + 0x9f) < 0x1a) {
                  **(undefined1 **)
                    ((int)&PTR_DAT_1000e014 + ((int)(uVar8 * 0x1000000 + -0x61000000) >> 0x16)) = 1;
                }
                else {
                  bVar2 = bVar15 + 0xbf;
                  if (bVar2 < 0x1a) {
                    if (bVar2 < 0x1a) {
                      *(&PTR_DAT_1000e014)[bVar2] = 1;
                    }
                  }
                  else {
                    if (9 < (byte)(bVar15 - 0x30U)) goto LAB_1000b5b3;
                    *(&PTR_DAT_1000e07c)[uVar8 + 0xd0 & 0xff] = 1;
                  }
                }
              }
              else {
LAB_1000b5b3:
                switch((uintptr_t)(uVar8 & 0xff)) {
                case 3:
                case 4:
                  goto switchD_1000b5c4_caseD_3;
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
                  break;
                case 8:
switchD_1000b5c4_caseD_8:
                  DAT_1000e13f = 1;
                  break;
                case 10:
                case 0xd:
                  DAT_1000e114 = 1;
                  break;
                case 0x20:
                  DAT_1000e141 = 1;
                  break;
                case 0x2d:
                  DAT_1000e13d = 1;
                  break;
                case 0x2e:
                  DAT_1000e13e = 1;
                  break;
                default:
                  if ((uVar8 & 0xff) == 0x7f) goto switchD_1000b5c4_caseD_8;
                }
              }
            }
          }
        }
switchD_1000b5c4_caseD_5:
        if (uVar13 != 0x1b) {
          if (DAT_1000e378 != 0) goto switchD_1000b3a9_caseD_5;
          iVar4 = 0;
switchD_1000b62d_caseD_f:
          if (uVar13 == 0 && (uVar12 & 0xff) == 0xe) {
            uVar8 = *(uint *)(iVar4 + 0x70);
            if (uVar8 == *(uint *)(iVar4 + 0x74)) {
              uVar12 = uVar8 * 2;
              if (uVar8 == 0) {
                uVar12 = 4;
              }
              if (uVar8 < uVar12) {
                iVar7 = recovered_10006ab0(uVar12);
                iVar1 = *(int *)(iVar4 + 0x6c);
                iVar5 = *(int *)(iVar4 + 0x70);
                if (iVar5 != 0) {
                  iVar14 = 0;
                  do {
                    *(undefined1 *)(iVar7 + iVar14) = *(undefined1 *)(iVar1 + iVar14);
                    iVar14 = iVar14 + 1;
                  } while (iVar5 != iVar14);
                }
                recovered_10006b10();
                *(int *)(iVar4 + 0x6c) = iVar7;
                *(uint *)(iVar4 + 0x74) = uVar12;
                uVar8 = *(uint *)(iVar4 + 0x70);
              }
            }
            *(undefined1 *)(*(int *)(iVar4 + 0x6c) + uVar8) = 8;
            *(int *)(iVar4 + 0x70) = *(int *)(iVar4 + 0x70) + 1;
          }
        }
      }
LAB_1000b314:
      uVar11 = uVar11 + 1;
    } while (uVar11 < DAT_1000e370);
  }
  DAT_1000e370 = 0;
  if (DAT_1000e37c == 1 && iVar3 == 1) {
    *(undefined1 *)(DAT_1000e378 + 0x24) = 1;
  }
  else if (DAT_1000e37c != 2 || iVar3 != 2) {
    DAT_1000e370 = 0;
    DAT_1000e380 = DAT_1000e37c;
    return;
  }
  DAT_1000e380 = 0;
  DAT_1000e37c = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef DAT_002808b4
#undef DAT_1000e114
#undef DAT_1000e115
#undef DAT_1000e116
#undef DAT_1000e117
#undef DAT_1000e118
#undef DAT_1000e119
#undef DAT_1000e11a
#undef DAT_1000e11b
#undef DAT_1000e11c
#undef DAT_1000e11d
#undef DAT_1000e11e
#undef DAT_1000e11f
#undef DAT_1000e120
#undef DAT_1000e121
#undef DAT_1000e122
#undef DAT_1000e123
#undef DAT_1000e124
#undef DAT_1000e125
#undef DAT_1000e126
#undef DAT_1000e127
#undef DAT_1000e128
#undef DAT_1000e129
#undef DAT_1000e12a
#undef DAT_1000e12b
#undef DAT_1000e12c
#undef DAT_1000e12d
#undef DAT_1000e12e
#undef DAT_1000e12f
#undef DAT_1000e130
#undef DAT_1000e131
#undef DAT_1000e132
#undef DAT_1000e133
#undef DAT_1000e134
#undef DAT_1000e135
#undef DAT_1000e136
#undef DAT_1000e137
#undef DAT_1000e138
#undef DAT_1000e139
#undef DAT_1000e13a
#undef DAT_1000e13b
#undef DAT_1000e13c
#undef DAT_1000e13d
#undef DAT_1000e13e
#undef DAT_1000e13f
#undef DAT_1000e140
#undef DAT_1000e141
#undef DAT_1000e142
#undef DAT_1000e36c
#undef DAT_1000e370
#undef DAT_1000e374
#undef DAT_1000e378
#undef DAT_1000e37c
#undef DAT_1000e380
#undef PTR_DAT_1000e014
#undef PTR_DAT_1000e07c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c
#undef _DAT_002808b4

#undef DAT_1000e114
#define DAT_1000e114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x403U)))
#undef DAT_1000e115
#define DAT_1000e115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x404U)))
#undef DAT_1000e116
#define DAT_1000e116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_1000e117
#define DAT_1000e117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x406U)))
#undef DAT_1000e118
#define DAT_1000e118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x407U)))
#undef DAT_1000e119
#define DAT_1000e119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x408U)))
#undef DAT_1000e11a
#define DAT_1000e11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x409U)))
#undef DAT_1000e11b
#define DAT_1000e11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40aU)))
#undef DAT_1000e11c
#define DAT_1000e11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40bU)))
#undef DAT_1000e11d
#define DAT_1000e11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#undef DAT_1000e11e
#define DAT_1000e11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40dU)))
#undef DAT_1000e11f
#define DAT_1000e11f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_1000e120
#define DAT_1000e120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40fU)))
#undef DAT_1000e121
#define DAT_1000e121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x410U)))
#undef DAT_1000e122
#define DAT_1000e122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x411U)))
#undef DAT_1000e123
#define DAT_1000e123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x412U)))
#undef DAT_1000e124
#define DAT_1000e124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_1000e125
#define DAT_1000e125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x414U)))
#undef DAT_1000e126
#define DAT_1000e126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x415U)))
#undef DAT_1000e127
#define DAT_1000e127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x416U)))
#undef DAT_1000e128
#define DAT_1000e128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x417U)))
#undef DAT_1000e129
#define DAT_1000e129 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x418U)))
#undef DAT_1000e12a
#define DAT_1000e12a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x419U)))
#undef DAT_1000e12b
#define DAT_1000e12b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41aU)))
#undef DAT_1000e12c
#define DAT_1000e12c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41bU)))
#undef DAT_1000e12d
#define DAT_1000e12d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41cU)))
#undef DAT_1000e12e
#define DAT_1000e12e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_1000e12f
#define DAT_1000e12f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41eU)))
#undef DAT_1000e130
#define DAT_1000e130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41fU)))
#undef DAT_1000e131
#define DAT_1000e131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x420U)))
#undef DAT_1000e132
#define DAT_1000e132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x421U)))
#undef DAT_1000e133
#define DAT_1000e133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x422U)))
#undef DAT_1000e134
#define DAT_1000e134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x423U)))
#undef DAT_1000e135
#define DAT_1000e135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_1000e136
#define DAT_1000e136 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x425U)))
#undef DAT_1000e137
#define DAT_1000e137 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x426U)))
#undef DAT_1000e138
#define DAT_1000e138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x427U)))
#undef DAT_1000e139
#define DAT_1000e139 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x428U)))
#undef DAT_1000e13a
#define DAT_1000e13a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x429U)))
#undef DAT_1000e13b
#define DAT_1000e13b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42aU)))
#undef DAT_1000e13c
#define DAT_1000e13c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42bU)))
#undef DAT_1000e13d
#define DAT_1000e13d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42cU)))
#undef DAT_1000e13e
#define DAT_1000e13e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42dU)))
#undef DAT_1000e13f
#define DAT_1000e13f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42eU)))
#undef DAT_1000e140
#define DAT_1000e140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42fU)))
#undef DAT_1000e141
#define DAT_1000e141 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x430U)))
#undef DAT_1000e142
#define DAT_1000e142 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x431U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba30
 */

void recovered_1000ba30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000e114 = 0;
  DAT_1000e115 = 0;
  DAT_1000e116 = 0;
  DAT_1000e117 = 0;
  DAT_1000e118 = 0;
  DAT_1000e119 = 0;
  DAT_1000e11a = 0;
  DAT_1000e11b = 0;
  DAT_1000e11c = 0;
  DAT_1000e11d = 0;
  DAT_1000e11e = 0;
  DAT_1000e11f = 0;
  DAT_1000e120 = 0;
  DAT_1000e121 = 0;
  DAT_1000e122 = 0;
  DAT_1000e123 = 0;
  DAT_1000e124 = 0;
  DAT_1000e125 = 0;
  DAT_1000e126 = 0;
  DAT_1000e127 = 0;
  DAT_1000e128 = 0;
  DAT_1000e129 = 0;
  DAT_1000e12a = 0;
  DAT_1000e12b = 0;
  DAT_1000e12c = 0;
  DAT_1000e12d = 0;
  DAT_1000e12e = 0;
  DAT_1000e12f = 0;
  DAT_1000e130 = 0;
  DAT_1000e131 = 0;
  DAT_1000e132 = 0;
  DAT_1000e133 = 0;
  DAT_1000e134 = 0;
  DAT_1000e135 = 0;
  DAT_1000e136 = 0;
  DAT_1000e137 = 0;
  DAT_1000e138 = 0;
  DAT_1000e139 = 0;
  DAT_1000e13a = 0;
  DAT_1000e13b = 0;
  DAT_1000e13c = 0;
  DAT_1000e13d = 0;
  DAT_1000e13e = 0;
  DAT_1000e13f = 0;
  DAT_1000e140 = 0;
  DAT_1000e141 = 0;
  DAT_1000e142 = 0;
  return;
}

#undef DAT_1000e114
#undef DAT_1000e115
#undef DAT_1000e116
#undef DAT_1000e117
#undef DAT_1000e118
#undef DAT_1000e119
#undef DAT_1000e11a
#undef DAT_1000e11b
#undef DAT_1000e11c
#undef DAT_1000e11d
#undef DAT_1000e11e
#undef DAT_1000e11f
#undef DAT_1000e120
#undef DAT_1000e121
#undef DAT_1000e122
#undef DAT_1000e123
#undef DAT_1000e124
#undef DAT_1000e125
#undef DAT_1000e126
#undef DAT_1000e127
#undef DAT_1000e128
#undef DAT_1000e129
#undef DAT_1000e12a
#undef DAT_1000e12b
#undef DAT_1000e12c
#undef DAT_1000e12d
#undef DAT_1000e12e
#undef DAT_1000e12f
#undef DAT_1000e130
#undef DAT_1000e131
#undef DAT_1000e132
#undef DAT_1000e133
#undef DAT_1000e134
#undef DAT_1000e135
#undef DAT_1000e136
#undef DAT_1000e137
#undef DAT_1000e138
#undef DAT_1000e139
#undef DAT_1000e13a
#undef DAT_1000e13b
#undef DAT_1000e13c
#undef DAT_1000e13d
#undef DAT_1000e13e
#undef DAT_1000e13f
#undef DAT_1000e140
#undef DAT_1000e141
#undef DAT_1000e142

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000bb90(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000bba0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000bbb0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000bbc0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000bbd0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_1000df8c
#define DAT_1000df8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27bU)))
#undef PTR_recovered_10006a40_1000e00c
#define PTR_recovered_10006a40_1000e00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2fbU)))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 260))
#define local_7c (*(char * *)(pf_stack_frame + 164))
#define local_78 (*(undefined4 * *)(pf_stack_frame + 168))
#define local_74 (*(undefined4 * *)(pf_stack_frame + 172))
#define local_70 (*(uint *)(pf_stack_frame + 176))
#define local_6c (*(char * *)(pf_stack_frame + 180))
#define local_68 (*(uint *)(pf_stack_frame + 184))
#define local_64 (*(char * *)(pf_stack_frame + 188))
#define local_60 (*(undefined4 * *)(pf_stack_frame + 192))
#define local_5c (*(int *)(pf_stack_frame + 196))
#define local_58 (*(uint *)(pf_stack_frame + 200))
#define local_54 (*(undefined4 *)(pf_stack_frame + 204))
#define local_50 (*(int *)(pf_stack_frame + 208))
#define local_4c (*(int * *)(pf_stack_frame + 212))
#define local_48 (*(undefined4 *)(pf_stack_frame + 216))
#define local_44 (*(undefined4 *)(pf_stack_frame + 220))
#define local_30 (*(undefined * *)(pf_stack_frame + 240))
#define local_2c (*(undefined * *)(pf_stack_frame + 244))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_24 (*(undefined4 *)(pf_stack_frame + 252))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 256))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdc0
 */

int * recovered_1000bdc0(void)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *in_ECX;
  undefined4 *in_EDX;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_110 + 0x80;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  iVar1 = in_EDX[1];
  local_30 = PTR_recovered_10006a40_1000e00c;
  local_2c = &DAT_1000df8c;
  local_24 = 0x487;
  local_4c = in_ECX;
  recovered_100070b0(&local_48);
  uVar2 = 0;
  if (iVar1 == 0) {
    local_68 = 0;
  }
  else {
    pcVar3 = (char *)*in_EDX;
    pcVar4 = &DAT_1000de0f;
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3;
    }
    local_68 = CONCAT31((int3)((uint)pcVar3 >> 8),*pcVar4 == '/');
  }
  local_50 = 0x1000bdda;
  local_6c = &DAT_1000de0f;
  local_64 = (char *)in_EDX;
  do {
    uVar8 = *(uint *)((int)local_64 + 4);
    uVar5 = uVar8 - uVar2;
    if (uVar8 < uVar2 || uVar5 == 0) break;
    pcVar3 = *(char **)local_64;
    if (*(char **)local_64 == (char *)0x0) {
      pcVar3 = local_6c;
    }
    uVar7 = uVar2;
    do {
      if (pcVar3[uVar7] == '/') {
        if (uVar7 != 0xffffffff) {
          local_60 = (undefined4 *)0x0;
          local_70 = uVar7;
          goto LAB_1000bf0e;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
    local_70 = 0xffffffff;
    in_EDX = (undefined4 *)CONCAT31((int3)((uint)in_EDX >> 8),1);
    uVar7 = uVar8;
    local_60 = in_EDX;
LAB_1000bf0e:
    uVar7 = uVar7 - uVar2;
    uVar8 = uVar7;
    if (uVar5 < uVar7) {
      uVar8 = uVar5;
    }
    if (uVar7 == 0xffffffff) {
      uVar8 = uVar5;
    }
    local_7c = (char *)0x0;
    local_78 = (undefined4 *)0x0;
    local_74 = (undefined4 *)0x0;
    local_44 = 1;
    recovered_1000d640((int *)&local_7c,(int)(pcVar3 + uVar2),uVar8);
    uVar2 = local_70;
    if (local_78 != (undefined4 *)0x0) {
      pcVar3 = local_7c;
      if (local_7c == (char *)0x0) {
        pcVar3 = local_6c;
      }
      if (local_78 == (undefined4 *)0x2) {
        if ((*pcVar3 == '.') && (pcVar3[1] == '.')) {
          if (local_58 != 0) {
            pcVar3 = *(char **)(local_5c + -0xc + local_58 * 0xc);
            if (pcVar3 == (char *)0x0) {
              pcVar3 = local_6c;
            }
            if (((*(int *)(local_5c + -8 + local_58 * 0xc) != 2) || (*pcVar3 != '.')) ||
               (pcVar3[1] != '.')) {
              recovered_10006b10();
              local_58 = local_58 - 1;
              goto LAB_1000be90;
            }
          }
          if ((char)local_68 != '\0') goto LAB_1000be90;
        }
      }
      else if ((local_78 == (undefined4 *)0x1) && (*pcVar3 == '.')) goto LAB_1000be90;
      local_44 = 2;
      recovered_1000d8c0(&local_5c,&local_7c);
      uVar2 = local_70;
    }
LAB_1000be90:
    uVar2 = uVar2 + 1;
    recovered_10006b10();
  } while ((char)local_60 == '\0');
  local_64 = (char *)(local_50 + 0x213b);
  pcVar3 = local_6c;
  if ((char)local_68 != '\0') {
    pcVar3 = local_64;
  }
  local_7c = (char *)0x0;
  local_78 = (undefined4 *)0x0;
  local_74 = (undefined4 *)0x0;
  uVar2 = 0xffffffff;
  do {
    iVar1 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (pcVar3[iVar1] != '\0');
  local_44 = 3;
  recovered_1000d640((int *)&local_7c,(int)pcVar3,uVar2);
  if (local_58 != 0) {
    uVar2 = 0;
    do {
      local_70 = uVar2;
      if (uVar2 != 0 || (local_68 & 1) != 0) {
        if (local_78 == local_74) {
          puVar6 = (undefined4 *)((int)local_78 * 2);
          if (local_78 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x10;
          }
          if (puVar6 <= local_78) goto LAB_1000c0f0;
          local_44 = 4;
          local_60 = puVar6;
          pcVar3 = (char *)recovered_10006ab0((uint)puVar6 | 1);
          uVar2 = local_70;
          *pcVar3 = '\0';
          if (local_78 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
            do {
              pcVar3[(int)puVar6] = local_7c[(int)puVar6];
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            } while (local_78 != puVar6);
          }
          pcVar3[(int)local_78] = '\0';
          recovered_10006b10();
          local_74 = local_60;
LAB_1000c117:
          local_7c = pcVar3;
        }
        else {
LAB_1000c0f0:
          if (local_7c == (char *)0x0) {
            local_44 = 5;
            pcVar3 = (char *)recovered_10006ab0(1);
            *pcVar3 = '\0';
            local_74 = (undefined4 *)0x0;
            uVar2 = local_70;
            goto LAB_1000c117;
          }
        }
        local_7c[(int)local_78] = '/';
        local_7c[(int)local_78 + 1] = '\0';
        local_78 = (undefined4 *)((int)local_78 + 1);
      }
      pcVar3 = *(char **)(local_5c + uVar2 * 0xc);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = local_6c;
      }
      local_44 = 6;
      recovered_1000da00((int *)&local_7c,(int)pcVar3,*(uint *)(local_5c + 4 + uVar2 * 0xc));
      uVar2 = local_70 + 1;
    } while (uVar2 < local_58);
  }
  if (local_78 == (undefined4 *)0x0) {
    pcVar3 = (char *)(local_50 + 0x2033);
    if ((char)local_68 != '\0') {
      pcVar3 = local_64;
    }
    *local_4c = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    puVar6 = (undefined4 *)0xffffffff;
    do {
      pcVar4 = pcVar3 + 1 + (int)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (*pcVar4 != '\0');
  }
  else {
    *local_4c = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    pcVar3 = local_6c;
    if (local_7c != (char *)0x0) {
      pcVar3 = local_7c;
    }
    puVar6 = local_78;
  }
  local_44 = 7;
  recovered_1000d640(local_4c,(int)pcVar3,(uint)puVar6);
  recovered_10006b10();
  for (uVar2 = local_58; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10006b10();
  }
  local_58 = 0;
  recovered_10006b10();
  recovered_100070e0(&local_48);
  return local_4c;
}

#undef DAT_1000de0f
#undef DAT_1000df8c
#undef PTR_recovered_10006a40_1000e00c
#undef auStack_1c
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
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_110

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280858
#define DAT_00280858 (*(uint8_t *)(0x280858U))
#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
#undef DAT_1000dfa0
#define DAT_1000dfa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef PTR_recovered_10006a40_1000e00c
#define PTR_recovered_10006a40_1000e00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2fbU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280858
#define _DAT_00280858 (*(code * *)(0x280858U))
#define local_60 (*(undefined4 *)(pf_stack_frame + 192))
#define local_5c (*(undefined4 *)(pf_stack_frame + 196))
#define local_48 (*(undefined * *)(pf_stack_frame + 216))
#define local_44 (*(undefined * *)(pf_stack_frame + 220))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_3c (*(undefined4 *)(pf_stack_frame + 228))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_2c (*(int (*)[11])(pf_stack_frame + 244))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 256))
#define local_1c (*(int *)(pf_stack_frame + 260))
#define auStackY_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define auStack_18 (*(undefined1 (*)[24])(pf_stack_frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2d0
 */

/* WARNING: Removing unreachable block (ram,0x1000c555) */
/* WARNING: Removing unreachable block (ram,0x1000c53e) */
/* WARNING: Removing unreachable block (ram,0x1000c54a) */
/* WARNING: Removing unreachable block (ram,0x1000c560) */
/* WARNING: Removing unreachable block (ram,0x1000c5a4) */
/* WARNING: Removing unreachable block (ram,0x1000c5ad) */
/* WARNING: Removing unreachable block (ram,0x1000c5b7) */
/* WARNING: Removing unreachable block (ram,0x1000c5c1) */
/* WARNING: Removing unreachable block (ram,0x1000c5ca) */
/* WARNING: Removing unreachable block (ram,0x1000c5df) */
/* WARNING: Removing unreachable block (ram,0x1000c5e6) */
/* WARNING: Removing unreachable block (ram,0x1000c5ec) */
/* WARNING: Removing unreachable block (ram,0x1000c5f7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1000c2d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;

  local_40 = auStack_18 + 0x14;
  local_38 = auStackY_110 + 0x80;
  local_48 = PTR_recovered_10006a40_1000e00c;
  local_44 = &DAT_1000dfa0;
  local_3c = 0x337;
  recovered_100070b0(&local_60);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) goto LAB_1000c609;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  uVar2 = 0xffffffff;
  do {
    pcVar1 = (char *)(param_1 + 1 + uVar2);
    uVar2 = uVar2 + 1;
  } while (*pcVar1 != '\0');
  local_5c = 0xffffffff;
  recovered_1000d640(local_2c,param_1,uVar2);
  local_5c = 1;
  recovered_1000bdc0();
  recovered_10006b10();
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x5b < _DAT_00280808 && (_DAT_00280858 != (code *)0x0)))) {
    local_5c = 2;
    iVar3 = (*_DAT_00280858)();
    if (iVar3 == 0) goto LAB_1000c468;
  }
  else {
LAB_1000c468:
    iVar3 = -1;
    do {
      pcVar1 = (char *)(param_1 + 1 + iVar3);
      iVar3 = iVar3 + 1;
    } while (*pcVar1 != '\0');
    puVar4 = &DAT_1000de0f;
    if (local_20 != (undefined1 *)0x0) {
      puVar4 = local_20;
    }
    if (local_1c == iVar3) {
      if (local_1c != 0) {
        iVar3 = 0;
        do {
          if (puVar4[iVar3] != *(char *)(param_1 + iVar3)) goto LAB_1000c4b5;
          iVar3 = iVar3 + 1;
        } while (local_1c != iVar3);
      }
    }
    else {
LAB_1000c4b5:
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x5b < _DAT_00280808 && (_DAT_00280858 != (code *)0x0)))))) {
        local_5c = 3;
        (*_DAT_00280858)();
      }
    }
  }
  recovered_10006b10();
LAB_1000c609:
  recovered_100070e0(&local_60);
  return (void *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280858
#undef DAT_1000de0f
#undef DAT_1000dfa0
#undef PTR_recovered_10006a40_1000e00c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280858
#undef local_60
#undef local_5c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_2c
#undef local_20
#undef local_1c
#undef auStackY_110
#undef auStack_18

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
 * Address: 0x1000c680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c680(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
    (*_DAT_00280850)();
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

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280868
#define DAT_00280868 (*(uint8_t *)(0x280868U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280868
#define _DAT_00280868 (*(code * *)(0x280868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1000c6d0(char *param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x6b < _DAT_00280808 && (_DAT_00280868 != (code *)0x0)))) {
    pvVar1 = (void *)(*_DAT_00280868)(param_1,param_2);
  }
  else {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280868
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280868

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280870
#define DAT_00280870 (*(uint8_t *)(0x280870U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280870
#define _DAT_00280870 (*(code * *)(0x280870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c730(void *param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x73 < _DAT_00280808 && (_DAT_00280870 != (code *)0x0)))) {
    (*_DAT_00280870)(param_1,param_2);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280870
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280870

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280874
#define DAT_00280874 (*(uint8_t *)(0x280874U))
#undef DAT_1000de00
#define DAT_1000de00 (*(float *)(((uintptr_t)pf_module_state + 0xefU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_00280874
#define _DAT_00280874 (*(code * *)(0x280874U))
#define local_38 (*(void * *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(int *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(longlong *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_1000c790(int param_1,int param_2,uint param_3,uint param_4,uint param_5,
                        double param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  double dVar1;
  void *src;
  int iVar2;
  int *piVar3;
  void *dst;
  uint bytes;

  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (void *)0x0;
  if (param_2 != 0 && param_1 != 0) {
    dVar1 = param_6;
    if (1.0 < param_6) {
      dVar1 = 1.0;
    }
    dVar1 = dVar1 * (double)DAT_1000de00;
    if (param_6 < 0.0) {
      dVar1 = 0.0;
    }
    local_20 = (longlong)ROUND(dVar1);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x77 < _DAT_00280808 && (_DAT_00280874 != (code *)0x0)) &&
        (iVar2 = (*_DAT_00280874)(param_1,param_2,param_3,param_4,param_5,(undefined4)local_20,
                                  &local_38), src = local_38, iVar2 != 0)))) {
      if (local_28 != 0 && (local_2c != 0 && local_38 != (void *)0x0)) {
        bytes = local_2c * (uintptr_t)local_28 * 4;
        if (local_30 != 0) {
          bytes = local_30;
        }
        piVar3 = (int *)recovered_10006ab0(0x18);
        *piVar3 = local_2c;
        piVar3[1] = local_28;
        dst = (void *)recovered_10006ae0(bytes);
        piVar3[2] = (int)dst;
        recovered_100021d0(dst,src,bytes);
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        if (_DAT_00280800 != 0x50414d57) {
          return piVar3;
        }
        if (_DAT_00280804 == 0) {
          return piVar3;
        }
        if (_DAT_00280808 < 0xc) {
          return piVar3;
        }
        if (_DAT_00280808 < 0x54) {
          return piVar3;
        }
        if (_DAT_00280850 == (code *)0x0) {
          return piVar3;
        }
        (*_DAT_00280850)(src);
        return piVar3;
      }
      if (local_38 != (void *)0x0) {
        if (_DAT_00280800 != 0x50414d57) {
          return (int *)0x0;
        }
        if (_DAT_00280804 == 0) {
          return (int *)0x0;
        }
        if (_DAT_00280808 < 0xc) {
          return (int *)0x0;
        }
        if (_DAT_00280808 < 0x54) {
          return (int *)0x0;
        }
        if (_DAT_00280850 == (code *)0x0) {
          return (int *)0x0;
        }
        (*_DAT_00280850)(local_38);
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280874
#undef DAT_1000de00
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280874
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280878
#define DAT_00280878 (*(uint8_t *)(0x280878U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280878
#define _DAT_00280878 (*(code * *)(0x280878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000c9d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x7b < _DAT_00280808 && (_DAT_00280878 != (code *)0x0)))) {
    (*_DAT_00280878)();
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280878
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280878

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca20
 */

uint * recovered_1000ca20(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5,undefined1 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  puVar3 = (uint *)0x0;
  if ((0 < (int)param_2 && 0 < (int)param_1) &&
     (puVar3 = (uint *)0x0, param_1 <= (uint)(0x3fffffff / (ulonglong)param_2))) {
    uVar4 = param_1 * (uintptr_t)param_2 * 4;
    puVar3 = (uint *)recovered_10006ab0(0x18);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = param_1;
    puVar3[1] = param_2;
    uVar1 = recovered_10006ae0(uVar4);
    puVar3[2] = uVar1;
    if (uVar4 != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(uVar1 + uVar2) = param_3;
        *(undefined1 *)(uVar1 + 1 + uVar2) = param_4;
        *(undefined1 *)(uVar1 + 2 + uVar2) = param_5;
        *(undefined1 *)(uVar1 + 3 + uVar2) = param_6;
        uVar2 = uVar2 + 4;
      } while (uVar2 < uVar4);
    }
  }
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cad0
 */

void recovered_1000cad0(int *param_1,uint param_2,uint param_3,undefined1 param_4,undefined1 param_5
                       ,undefined1 param_6,undefined1 param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 != (int *)0x0) {
    iVar1 = param_1[2];
    if (((-1 < (int)(param_3 | param_2) && iVar1 != 0) && ((int)param_2 < *param_1)) &&
       ((int)param_3 < param_1[1])) {
      iVar2 = *param_1 * param_3 + param_2;
      *(undefined1 *)(iVar1 + iVar2 * 4) = param_4;
      *(undefined1 *)(iVar1 + 1 + iVar2 * 4) = param_5;
      *(undefined1 *)(iVar1 + 2 + iVar2 * 4) = param_6;
      *(undefined1 *)(iVar1 + 3 + iVar2 * 4) = param_7;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb30
 */

void recovered_1000cb30(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      recovered_10006ba0();
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      recovered_10006ba0();
    }
    recovered_10006b10();
  }
  return;
}


#define local_3c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb70
 */

void recovered_1000cb70(uint *param_1,int *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;

  if ((((param_2 != (int *)0x0 && param_1 != (uint *)0x0) && (param_1[2] != 0)) && (param_2[2] != 0)
      ) && (local_3c = param_2[1], 0 < local_3c)) {
    uVar9 = 0;
    do {
      iVar2 = ((int)param_4 >> 0x1f) + (uint)CARRY4(uVar9,param_4);
      if (((-1 < iVar2) &&
          (iVar7 = (int)param_1[1] >> 0x1f, uVar4 = (uint)(uVar9 + param_4 < param_1[1]),
          iVar8 = iVar2 - iVar7,
          (SBORROW4(iVar2,iVar7) != SBORROW4(iVar8,uVar4)) != (int)(iVar8 - uVar4) < 0)) &&
         (iVar2 = *param_2, 0 < iVar2)) {
        uVar4 = 0;
        do {
          iVar8 = ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar4,param_3);
          if ((-1 < iVar8) &&
             (uVar3 = *param_1, uVar1 = (uint)(uVar4 + param_3 < uVar3),
             iVar7 = iVar8 - ((int)uVar3 >> 0x1f),
             (SBORROW4(iVar8,(int)uVar3 >> 0x1f) != SBORROW4(iVar7,uVar1)) !=
             (int)(iVar7 - uVar1) < 0)) {
            iVar8 = param_2[2];
            iVar10 = uVar9 * iVar2 + uVar4;
            uVar1 = param_1[2];
            iVar7 = uVar3 * (uVar9 + param_4) + uVar4 + param_3;
            uVar6 = (uint)*(byte *)(iVar8 + 3 + iVar10 * 4);
            uVar11 = ((uVar6 ^ 0xff) * (uint)*(byte *)(uVar1 + 3 + iVar7 * 4) + 0x7f & 0xffff) /
                     0xff;
            uVar3 = uVar11 + uVar6;
            if (uVar3 != 0) {
              uVar5 = uVar3 >> 1;
              *(char *)(uVar1 + iVar7 * 4) =
                   (char)((*(byte *)(uVar1 + iVar7 * 4) * uVar11 +
                           *(byte *)(iVar8 + iVar10 * 4) * uVar6 + uVar5) / uVar3);
              *(char *)(uVar1 + 1 + iVar7 * 4) =
                   (char)((*(byte *)(uVar1 + 1 + iVar7 * 4) * uVar11 +
                           *(byte *)(iVar8 + 1 + iVar10 * 4) * uVar6 + uVar5) / uVar3);
              *(char *)(uVar1 + 2 + iVar7 * 4) =
                   (char)((*(byte *)(uVar1 + 2 + iVar7 * 4) * uVar11 +
                           *(byte *)(iVar8 + 2 + iVar10 * 4) * uVar6 + uVar5) / uVar3);
              *(char *)(uVar1 + 3 + iVar7 * 4) = (char)uVar3;
              iVar2 = *param_2;
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < iVar2);
        local_3c = param_2[1];
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < local_3c);
  }
  return;
}

#undef local_3c

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
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * recovered_1000cd80(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                         byte param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *dst;

  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  if (param_1 != 0) {
    uVar5 = 0xff;
    if (param_5 < 0xff) {
      uVar5 = param_5;
    }
    uVar5 = uVar5 << 8;
    uVar6 = 0xff;
    if (param_4 < 0xff) {
      uVar6 = param_4;
    }
    uVar6 = uVar6 << 0x10;
    uVar7 = 0xff;
    if (param_3 < 0xff) {
      uVar7 = param_3;
    }
    uVar7 = uVar7 << 0x18;
    if ((int)param_3 < 0) {
      uVar7 = 0;
    }
    if ((int)param_4 < 0) {
      uVar6 = 0;
    }
    if ((int)param_5 < 0) {
      uVar5 = 0;
    }
    if (_DAT_00280800 != 0x50414d57) {
      return (uint *)0x0;
    }
    if (_DAT_00280804 == 0) {
      return (uint *)0x0;
    }
    if (_DAT_00280808 < 0xc) {
      return (uint *)0x0;
    }
    if (_DAT_00280808 < 0x17c) {
      return (uint *)0x0;
    }
    if (_DAT_00280978 == (code *)0x0) {
      return (uint *)0x0;
    }
    iVar3 = (*_DAT_00280978)(param_1,0xffffffff,param_2,(uint)param_6 | uVar6 | uVar7 | uVar5,
                             &local_34);
    iVar2 = local_34;
    if (iVar3 != 0) {
      if (local_34 == 0) {
        return (uint *)0x0;
      }
      if (local_30 != 0) {
        return (uint *)0x0;
      }
      if (0 < (int)local_24 && 0 < (int)local_28) {
        uVar5 = local_28 >> 0x1e;
        local_1c = local_28 * 4;
        local_18 = 0;
        if ((uVar5 == 0 && (uint)(local_20 < local_1c) <= -uVar5) &&
           (lVar1 = (ulonglong)local_20 * (ulonglong)(local_24 - 1) + CONCAT44(uVar5,local_1c),
           iVar3 = (int)((ulonglong)lVar1 >> 0x20), uVar5 = (uint)(local_2c < (uint)lVar1),
           uVar6 = -iVar3, local_18 = uVar6 - uVar5, iVar3 == 0 && uVar5 <= uVar6)) {
          puVar4 = recovered_1000ca20(local_28,local_24,0,0,0,0);
          if ((puVar4 != (uint *)0x0) && (local_24 != 0)) {
            uVar5 = local_28 * 4;
            dst = (void *)puVar4[2];
            uVar6 = 0;
            do {
              recovered_100021d0(dst,(void *)(local_20 * uVar6 + iVar2),uVar5);
              uVar6 = uVar6 + 1;
              dst = (void *)((int)dst + uVar5);
            } while (uVar6 < local_24);
          }
          recovered_1000c680();
          return puVar4;
        }
      }
      if (_DAT_00280800 != 0x50414d57) {
        return (uint *)0x0;
      }
      if (_DAT_00280804 == 0) {
        return (uint *)0x0;
      }
      if (_DAT_00280808 < 0xc) {
        return (uint *)0x0;
      }
      if (_DAT_00280808 < 0x54) {
        return (uint *)0x0;
      }
      if (_DAT_00280850 == (code *)0x0) {
        return (uint *)0x0;
      }
      (*_DAT_00280850)(local_34);
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
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
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Native system-font selection through the WinterScript variable service.
 * Pooka's Free Software License. */
void *recovered_1000cfc0(float size){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
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
 * Address: 0x1000d230
 */

undefined1 recovered_1000d230(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;

  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x78);
    if (uVar2 < *(uint *)(param_1 + 0x70)) {
      *(uint *)(param_1 + 0x78) = uVar2 + 1;
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x6c) + uVar2);
      if (uVar2 + 1 == *(uint *)(param_1 + 0x70)) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        return uVar1;
      }
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d280
 */

void recovered_1000d280(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      recovered_10009390();
      *(undefined1 *)(param_1 + 0x4c) = 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
  }
  *param_3 = uVar1;
  return;
}


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
 * Address: 0x1000d2e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000d2e0(int param_1,uint param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != 0) {
    if (3 < param_2) {
      return false;
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      return false;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))) {
      iVar1 = (*_DAT_00280964)(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
      return iVar1 != 0;
    }
  }
  return false;
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
#undef DAT_002808b0
#define DAT_002808b0 (*(uint8_t *)(0x2808b0U))
#undef DAT_002808b4
#define DAT_002808b4 (*(uint8_t *)(0x2808b4U))
#undef DAT_00280960
#define DAT_00280960 (*(uint8_t *)(0x280960U))
#undef DAT_00280964
#define DAT_00280964 (*(uint8_t *)(0x280964U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002808b0
#define _DAT_002808b0 (*(code * *)(0x2808b0U))
#undef _DAT_002808b4
#define _DAT_002808b4 (*(code * *)(0x2808b4U))
#undef _DAT_00280960
#define _DAT_00280960 (*(code * *)(0x280960U))
#undef _DAT_00280964
#define _DAT_00280964 (*(code * *)(0x280964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000d360(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 != 0) && (*(char *)(param_1 + 0x10) == '\0')) && (*(int *)(param_1 + 0xc) != 0)) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
        ((0xb < _DAT_00280808 && ((0xb7 < _DAT_00280808 && (_DAT_002808b4 != (code *)0x0)))))) &&
       (iVar1 = (*_DAT_002808b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
      if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      if ((((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x167 < _DAT_00280808 && (_DAT_00280964 != (code *)0x0)))) &&
          ((iVar1 = (*_DAT_00280964)(*(undefined4 *)(param_1 + 0xc),1,0), iVar1 != 0 &&
           ((_DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)))))) &&
         ((0xb < _DAT_00280808 &&
          (((0x163 < _DAT_00280808 && (_DAT_00280960 != (code *)0x0)) &&
           (iVar1 = (*_DAT_00280960)(*(undefined4 *)(param_1 + 0xc),0xff,0), iVar1 != 0)))))) {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && ((0xb3 < _DAT_00280808 && (_DAT_002808b0 != (code *)0x0)))))) {
          iVar1 = (*_DAT_002808b0)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xb0),
                                   *(undefined4 *)(param_1 + 0xb4),0x100,0x100);
          return iVar1 != 0;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
  return false;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b0
#undef DAT_002808b4
#undef DAT_00280960
#undef DAT_00280964
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b0
#undef _DAT_002808b4
#undef _DAT_00280960
#undef _DAT_00280964

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 recovered_1000d550(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;

  if (2 < param_2 || param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (*(char *)(param_1 + 0x24) == '\0') {
LAB_1000d584:
      if (*(char *)(param_1 + 0x4c) == '\0') {
        recovered_10009390();
        *(undefined1 *)(param_1 + 0x4c) = 1;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x49 + param_2);
      goto LAB_1000d634;
    }
  }
  else if (*(int *)(param_1 + 0xc) != 0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0xb7 < _DAT_00280808 && (_DAT_002808b4 != (code *)0x0)) &&
        (iVar2 = (*_DAT_002808b4)(*(int *)(param_1 + 0xc),param_1 + 0x84), iVar2 != 0)))) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xb4);
      if ((*(uint *)(param_1 + 0xac) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      if ((*(uint *)(param_1 + 0xac) & 6) == 2) goto LAB_1000d584;
    }
    else {
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
  uVar1 = 0;
LAB_1000d634:
  *(undefined1 *)(param_1 + 0x49 + param_2) = 0;
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002808b4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002808b4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(int *)(frame + 24))
#define local_18 (*(int *)(frame + 20))
#define local_1c (*(int *)(frame + 16))
void recovered_1000d640(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[76] = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = param_3;
  }
  puVar3 = (undefined1 *)*param_1;
  if (param_2 != 0 && puVar3 != (undefined1 *)0x0) {
    uVar4 = param_2 - (int)puVar3;
    uVar7 = 0;
    do {
      if (uVar4 == uVar7) {
        uVar7 = param_1[1] - uVar4;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        recovered_1000d640(&local_1c,(int)(puVar3 + uVar4),uVar6);
        iVar1 = *param_1;
        *param_1 = local_1c;
        iVar2 = param_1[1];
        param_1[1] = local_18;
        iVar5 = param_1[2];
        param_1[2] = local_14;
        local_1c = iVar1;
        local_18 = iVar2;
        local_14 = iVar5;
        recovered_10006b10();
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  if (uVar6 == 0) {
    if (*param_1 == 0) {
      puVar3 = (undefined1 *)recovered_10006ab0(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = (undefined1 *)recovered_10006ab0(uVar6 + 1);
      *puVar3 = 0;
      iVar1 = *param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)(iVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      recovered_10006b10();
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar4 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
    param_1[1] = param_3;
    *(undefined1 *)(*param_1 + param_3) = 0;
  }
  return;
}

#undef local_14
#undef local_18
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7b0
 */

undefined4 recovered_1000d7b0(uint param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint in_ECX;
  uint in_EDX;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;

  uVar5 = 0;
  if (1 < param_4 && (1 < param_3 && 1 < param_1)) {
    uVar6 = 0;
    if (1 < (int)param_1) {
      if (in_EDX == 0) {
        uVar4 = param_1 - 1;
        if (in_ECX <= param_1 - 1) {
          uVar4 = in_ECX;
        }
        uVar6 = 0;
        if (-1 < (int)in_ECX) {
          uVar6 = uVar4;
        }
      }
      else {
        uVar6 = 0;
        if (0 < (int)in_ECX) {
          uVar6 = in_ECX;
        }
        if (in_EDX <= uVar6) {
          uVar6 = in_EDX;
        }
        lVar2 = (ulonglong)(param_1 - 1) * (ulonglong)uVar6;
        uVar7 = recovered_10001d20((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),in_EDX,0);
        uVar6 = (uint)uVar7;
      }
    }
    iVar3 = ((int)uVar6 >> 0x1f) - (uint)(uVar6 < param_2);
    uVar4 = param_3 - 1;
    if (iVar3 < 0) {
      uVar6 = 0;
      iVar3 = 0;
    }
    else {
      uVar1 = (uint)(uVar4 < uVar6 - param_2);
      uVar6 = uVar6 - param_2;
      if ((SBORROW4(0,iVar3) != SBORROW4(-iVar3,uVar1)) != (int)(-iVar3 - uVar1) < 0) {
        iVar3 = 0;
        uVar6 = uVar4;
      }
    }
    lVar2 = (ulonglong)uVar6 * (ulonglong)(param_4 - 1U);
    uVar7 = recovered_10001d20((uint)lVar2,(int)((ulonglong)lVar2 >> 0x20) + iVar3 * (param_4 - 1U),
                               uVar4,0);
    uVar5 = (undefined4)uVar7;
  }
  return uVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d870(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10006b10();
  }
  param_1[1] = 0;
  recovered_10006b10();
  return;
}


#undef DAT_1000de0f
#define DAT_1000de0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8c0
 */

int recovered_1000d8c0(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar4 = 4;
    if (uVar5 != 0) {
      uVar4 = uVar5 * 2;
    }
    if (uVar5 < uVar4) {
      iVar2 = recovered_10006ab0(uVar4 * 0xc);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 8;
        do {
          iVar1 = *param_1;
          *(undefined4 *)(iVar2 + -8 + iVar6) = *(undefined4 *)(iVar1 + -8 + iVar6);
          *(undefined4 *)(iVar2 + -4 + iVar6) = *(undefined4 *)(iVar1 + -4 + iVar6);
          *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar1 + iVar6);
          *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
          *(undefined4 *)(iVar1 + iVar6) = 0;
          recovered_10006b10();
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10006b10();
      *param_1 = iVar2;
      param_1[2] = uVar4;
      uVar5 = param_1[1];
    }
  }
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar2 + 4 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar2 + 8 + uVar5 * 0xc) = 0;
  puVar3 = &DAT_1000de0f;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  recovered_1000d640((int *)(iVar2 + uVar5 * 0xc),(int)puVar3,param_2[1]);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0xc + *param_1;
}

#undef DAT_1000de0f

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_18 (*(undefined1 * *)(frame + 16))
int * recovered_1000da00(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[72] = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (param_3 != 0 && param_2 != 0) {
    local_18 = (undefined1 *)*param_1;
    if (local_18 != (undefined1 *)0x0) {
      uVar6 = param_1[1];
      uVar7 = param_2 - (int)local_18;
      uVar2 = 0;
LAB_10007650:
      if (uVar7 != uVar2) goto code_r0x10007658;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_18 = (undefined1 *)recovered_10006ab0(uVar2 + 1);
        *local_18 = 0;
        iVar4 = *param_1;
        iVar1 = param_1[1];
        if (iVar1 != 0) {
          iVar5 = 0;
          do {
            local_18[iVar5] = *(undefined1 *)(iVar4 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar1 != iVar5);
        }
        local_18[iVar1] = 0;
        recovered_10006b10();
        *param_1 = (int)local_18;
        param_1[2] = uVar2;
      }
      if (param_3 != 0) {
        uVar2 = param_3;
        do {
          *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(*param_1 + uVar7);
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        goto LAB_10007774;
      }
      goto LAB_10007776;
    }
    uVar6 = param_1[1];
LAB_10007662:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = (undefined1 *)recovered_10006ab0(uVar6 + 1);
      *puVar3 = 0;
      iVar4 = *param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)(iVar4 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      puVar3[iVar1] = 0;
      recovered_10006b10();
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_10007774:
    local_18 = (undefined1 *)*param_1;
LAB_10007776:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_18[iVar4] = 0;
  }
  return param_1;
code_r0x10007658:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_10007662;
  goto LAB_10007650;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dba0
 */

int recovered_1000dba0(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;

  iVar5 = *param_1;
  bVar9 = iVar5 == 0;
  if (bVar9) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar5;
  }
  if (param_3 != param_4) {
    uVar3 = param_1[1];
    puVar8 = (undefined1 *)param_1[2];
    if (puVar8 < param_4 + (uVar3 - (int)param_3)) {
      puVar1 = (undefined1 *)0x4;
      if (puVar8 != (undefined1 *)0x0) {
        puVar1 = puVar8;
      }
      do {
        puVar8 = puVar1;
        puVar1 = (undefined1 *)((int)(uintptr_t)puVar8 * 2);
      } while (puVar8 < param_4 + (uVar3 - (int)param_3));
      iVar2 = recovered_10006ab0((int)puVar8);
      iVar5 = *param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)(iVar2 + iVar6) = *(undefined1 *)(iVar5 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
      }
      recovered_10006b10();
      *param_1 = iVar2;
      param_1[2] = (int)puVar8;
      uVar3 = param_1[1];
    }
    for (; uVar7 < uVar3; uVar3 = uVar3 - 1) {
      param_4[((uVar3 - 1) + *param_1) - (int)param_3] = *(undefined1 *)((uVar3 - 1) + *param_1);
    }
    uVar3 = uVar7;
    puVar8 = param_3;
    do {
      *(undefined1 *)(*param_1 + uVar3) = *puVar8;
      puVar8 = puVar8 + 1;
      uVar3 = uVar3 + 1;
    } while (puVar8 != param_4);
    param_1[1] = (int)(param_4 + (param_1[1] - (int)param_3));
    iVar5 = *param_1;
    bVar9 = iVar5 == 0;
  }
  iVar4 = 0;
  if (!bVar9) {
    iVar4 = iVar5 + uVar7;
  }
  return iVar4;
}


#undef DAT_1000e36c
#define DAT_1000e36c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65bU)))
#undef DAT_1000e370
#define DAT_1000e370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65fU)))
#undef DAT_1000e374
#define DAT_1000e374 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x663U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcc0
 */

void recovered_1000dcc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000e36c = 0;
  DAT_1000e370 = 0;
  DAT_1000e374 = 0;
  recovered_10006d50();
  return;
}

#undef DAT_1000e36c
#undef DAT_1000e370
#undef DAT_1000e374
