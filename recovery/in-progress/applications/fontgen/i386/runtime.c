/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000705c
#define DAT_1000705c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001140
 */

/* WARNING: Removing unreachable block (ram,0x1000117c) */

void recovered_10001140(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000705c = 0;
    recovered_100011a0();
    DAT_10007064 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000705c
#undef DAT_10007064

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000705c
#define DAT_1000705c (*(char *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef DAT_10007060
#define DAT_10007060 (*(int *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007068
#define DAT_10007068 (*(int *)(((uintptr_t)pf_module_state + 0x5b4U)))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100011a0(void)

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
  if (DAT_1000705c != '\0') {
    return;
  }
  DAT_10007060 = 0;
  DAT_10007068 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_1000120b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_1000120b:
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
        if (iVar9 == 0) goto LAB_10001360;
      }
      do {
        recovered_10005500((int *)local_9c);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_10007060 != 0) goto LAB_1000139b;
    }
  }
LAB_10001360:
  recovered_10005500((int *)local_9c);
LAB_1000139b:
  if (DAT_10007068 == 0) {
    DAT_10007068 = DAT_10007060;
  }
  DAT_1000705c = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000705c
#undef DAT_10007060
#undef DAT_10007068
#undef _DAT_0028008c
#undef local_9c

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013c0
 */

/* WARNING: Removing unreachable block (ram,0x1000140c) */

void recovered_100013c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001430(param_3);
    DAT_10007064 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10007064

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007068
#define DAT_10007068 (*(int * *)(((uintptr_t)pf_module_state + 0x5b4U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001430
 */

bool recovered_10001430(int param_1)

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
    recovered_100011a0();
    local_18 = DAT_10007060;
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
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10001530;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10001530:
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
      piVar1 = DAT_10007060;
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
    piVar5 = (int *)&DAT_10007060;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10005500(&local_1c);
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
    if (DAT_10007068 == (int *)0x0) {
      DAT_10007068 = DAT_10007060;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_10007060
#undef DAT_10007068
#undef local_1c
#undef local_18

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001670
 */

/* WARNING: Removing unreachable block (ram,0x100016bc) */

void recovered_10001670(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001430(1);
    DAT_10007064 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10007064

#undef DAT_10007060
#define DAT_10007060 (*(int * *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

/* WARNING: Removing unreachable block (ram,0x1000172c) */

int recovered_100016f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100011a0();
  iVar1 = 0;
  for (piVar2 = DAT_10007060; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_10007064 = 0;
  return iVar1;
}

#undef DAT_10007060
#undef DAT_10007064

#undef DAT_10007060
#define DAT_10007060 (*(int *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001770
 */

/* WARNING: Removing unreachable block (ram,0x100017ac) */

void recovered_10001770(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100011a0();
  for (iVar1 = DAT_10007060; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_10007064 = 0;
  return;
}

#undef DAT_10007060
#undef DAT_10007064

#undef DAT_10007060
#define DAT_10007060 (*(int * *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f0
 */

/* WARNING: Removing unreachable block (ram,0x1000182c) */

int recovered_100017f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100011a0();
  iVar2 = 0;
  for (piVar1 = DAT_10007060; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_10007064 = 0;
  return iVar2;
}

#undef DAT_10007060
#undef DAT_10007064

#undef DAT_10007060
#define DAT_10007060 (*(int *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

/* WARNING: Removing unreachable block (ram,0x1000189c) */

void recovered_10001860(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100011a0();
  for (iVar1 = DAT_10007060; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_10007064 = 0;
  return;
}

#undef DAT_10007060
#undef DAT_10007064

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e0
 */

/* WARNING: Removing unreachable block (ram,0x1000192c) */

void recovered_100018e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001950((uint *)0xffffffff);
    DAT_10007064 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10007064

#undef DAT_10007060
#define DAT_10007060 (*(uint * *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007068
#define DAT_10007068 (*(uint * *)(((uintptr_t)pf_module_state + 0x5b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001950
 */

uint * recovered_10001950(uint *param_1)

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
    recovered_100011a0();
    puVar3 = DAT_10007060;
    puVar4 = DAT_10007068;
    if (DAT_10007068 == (uint *)0x0) {
      puVar4 = DAT_10007060;
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
              if (uVar8 < uVar10) goto LAB_10001a32;
            }
          }
          else {
LAB_10001a32:
            if ((uVar9 - 1 <= (uint)((int)param_1 - (int)puVar7) && puVar7 <= param_1) &&
               (uVar9 <= uVar10 - uVar8 && uVar8 <= uVar10)) {
              if (uVar9 - 1 < uVar10) {
                bVar2 = 0xffffffef < uVar10;
                if ((uint)(uVar10 - uVar9 < 0x20) <= -(uint)(uVar10 < uVar9)) {
                  bVar2 = 0xffffffdf < uVar9;
                }
                if (!bVar2) {
                  if (uVar8 == 0) {
LAB_10001b14:
                    if ((bool)(~(uVar10 < uVar9) & 0x1f < uVar10 - uVar9)) {
                      DAT_10007068 = (uint *)((int)puVar6 + uVar9 + 0x10);
                      *(uint *)((int)puVar6 + uVar9 + 0x10) = (uVar10 - uVar9) - 0x10;
                      uVar10 = puVar6[1];
                      *(uint *)((int)puVar6 + uVar9 + 0x14) = uVar10;
                      *(uint **)((int)puVar6 + uVar9 + 0x18) = puVar6;
                      *(undefined1 *)((int)puVar6 + uVar9 + 0x1c) = 1;
                      if (uVar10 != 0) {
                        *(uint **)(uVar10 + 8) = DAT_10007068;
                      }
                      *puVar6 = uVar9;
                      puVar6[1] = (uint)DAT_10007068;
                    }
                    else {
                      DAT_10007068 = (uint *)puVar6[1];
                    }
                    *(undefined1 *)(puVar6 + 3) = 0;
                    if (DAT_10007068 == (uint *)0x0) {
                      DAT_10007068 = DAT_10007060;
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
                      puVar6 = recovered_100056a0();
                      if (puVar6 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar10 = *puVar6;
                      goto LAB_10001b14;
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

#undef DAT_10007060
#undef DAT_10007068

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b80
 */

/* WARNING: Removing unreachable block (ram,0x10001bcc) */

void recovered_10001b80(undefined4 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001950(param_2);
    DAT_10007064 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10007064

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bf0
 */

/* WARNING: Removing unreachable block (ram,0x10001c3c) */

uint * recovered_10001bf0(undefined4 param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001950((uint *)param_3);
  }
  DAT_10007064 = 0;
  return puVar2;
}

#undef DAT_10007064

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

/* WARNING: Removing unreachable block (ram,0x10001cac) */

void recovered_10001c60(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001cd0();
    DAT_10007064 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_10007064

#undef DAT_10007068
#define DAT_10007068 (*(uint * *)(((uintptr_t)pf_module_state + 0x5b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd0
 */

void recovered_10001cd0(void)

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
  recovered_100011a0();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_10007068 == puVar3) {
        DAT_10007068 = puVar2;
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
      DAT_10007068 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_10007068 = puVar2;
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
        if (DAT_10007068 == puVar2) {
          DAT_10007068 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_10007068 = puVar2;
  return;
}

#undef DAT_10007068

#undef DAT_10007064
#define DAT_10007064 (*(int *)(((uintptr_t)pf_module_state + 0x5b0U)))
#undef DAT_10007068
#define DAT_10007068 (*(uint * *)(((uintptr_t)pf_module_state + 0x5b4U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df0
 */

/* WARNING: Removing unreachable block (ram,0x10001e3c) */

undefined4 * recovered_10001df0(undefined4 *param_1,uint param_2)

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

  iVar1 = DAT_10007064;
  { __typeof__(DAT_10007064) pf_atomic_old = __atomic_exchange_n(&(DAT_10007064),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar9 = recovered_10001950((uint *)0xffffffff);
    DAT_10007064 = 0;
    return puVar9;
  }
  if (param_2 == 0) {
    recovered_10001cd0();
    DAT_10007064 = 0;
    return (undefined4 *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_10007064 = 0;
    return (undefined4 *)0x0;
  }
  recovered_100011a0();
  uVar8 = param_2 + 0xf & 0xfffffff0;
  puVar9 = param_1 + -4;
  uVar6 = param_1[-4];
  if (uVar8 <= uVar6) {
    if (uVar6 <= uVar8 - 1) {
      DAT_10007064 = 0;
      return (undefined4 *)0x0;
    }
    uVar2 = uVar6 - uVar8;
    bVar10 = 0xffffffdf < uVar8;
    if (-(uint)(uVar6 < uVar8) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar6;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_10007064 = 0;
        return param_1;
      }
      DAT_10007068 = (uint *)((int)param_1 + uVar8);
      *(uint *)((int)param_1 + uVar8) = uVar2 - 0x10;
      iVar1 = param_1[-3];
      *(int *)((int)param_1 + uVar8 + 4) = iVar1;
      *(uint **)((int)param_1 + uVar8 + 8) = puVar9;
      *(undefined1 *)((int)param_1 + uVar8 + 0xc) = 1;
      if (iVar1 != 0) {
        *(uint **)(iVar1 + 8) = DAT_10007068;
      }
      param_1[-4] = uVar8;
      param_1[-3] = DAT_10007068;
      DAT_10007064 = 0;
      return param_1;
    }
    DAT_10007064 = 0;
    return (undefined4 *)0x0;
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
      local_20 = DAT_10007068;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar6 ||
            (((uint *)(uVar6 + (int)param_1) != puVar3 || (-uVar6 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar9;
          DAT_10007068 = puVar9;
        }
        uVar6 = uVar6 + 0x10 + *puVar3;
        param_1[-4] = uVar6;
        puVar3 = (uint *)puVar3[1];
        param_1[-3] = puVar3;
        if (puVar3 != (uint *)0x0) {
          puVar3[2] = (uint)puVar9;
        }
      } while (uVar6 < uVar8);
      if (uVar6 < uVar8) {
        DAT_10007064 = 0;
        return (undefined4 *)0x0;
      }
      uVar4 = recovered_10005700();
      if ((char)uVar4 != '\0') {
        DAT_10007068 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10007064 = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10001950((uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_10007064 = 0;
    return (undefined4 *)0x0;
  }
  if (*puVar9 < uVar8) {
    uVar8 = *puVar9;
  }
  puVar9 = puVar3;
  if (uVar8 < 8) {
LAB_10002065:
    if (uVar8 == 0) goto LAB_1000207c;
  }
  else if ((((uint)puVar3 ^ (uint)param_1) & 3) == 0) {
    if (((uint)puVar3 & 3) != 0) {
      puVar7 = puVar3;
      do {
        puVar7 = (uint *)((int)puVar7 + 1);
        uVar6 = *param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
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
    goto LAB_10002065;
  }
  uVar6 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar6) = *(undefined1 *)((int)param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar8 != uVar6);
LAB_1000207c:
  recovered_10001cd0();
  DAT_10007064 = 0;
  return puVar3;
}

#undef DAT_10007064
#undef DAT_10007068
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

undefined8 recovered_10002190(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_100021cb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_100021cb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_100021cb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e0
 */

undefined8 recovered_100021e0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002230
 */

undefined8 recovered_10002230(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10002270
 */

undefined8 recovered_10002270(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002360
 */

undefined8 recovered_10002360(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100023d0
 */

undefined8 recovered_100023d0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002520
 */

undefined8 recovered_10002520(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100025f0
 */

void recovered_100025f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002610
 */

int recovered_10002610(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
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
 * Address: 0x10002630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10002630(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
    pvVar1 = (*_DAT_0028084c)(param_1);
    return pvVar1;
  }
  return (void *)0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

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
 * Address: 0x10002680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002680(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
    (*_DAT_00280850)(param_1);
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
 * Address: 0x100026d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_100026d0(void *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && (_DAT_00280854 != (code *)0x0)))) {
    pvVar1 = (*_DAT_00280854)(param_1,param_2);
    return pvVar1;
  }
  return (void *)0;
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
 * Address: 0x10002720
 */

void recovered_10002720(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000274a;
    if (((uint)param_1 & 3) != 0) {
      puVar4 = param_1;
      do {
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        uVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        *(undefined1 *)param_1 = uVar1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        bVar5 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar5) break;
      } while (((uint)puVar4 & 3) != 0);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return;
  }
LAB_1000274a:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e0
 */

undefined4 * recovered_100027e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  if (param_3 != 0 && param_1 != param_2) {
    if ((param_1 < param_2) || (puVar5 = (undefined4 *)((int)param_2 + param_3), puVar5 <= param_1))
    {
      puVar5 = param_1;
      if ((7 < param_3) && (puVar7 = param_1, (((uint)param_2 ^ (uint)param_1) & 3) == 0)) {
        do {
          if (((uint)puVar7 & 3) == 0) break;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          uVar2 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          *(undefined1 *)puVar5 = uVar2;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          bVar8 = param_3 != 1;
          param_3 = param_3 - 1;
        } while (bVar8);
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          *puVar5 = *param_2;
          puVar5[1] = param_2[1];
          puVar5[2] = param_2[2];
          puVar5[3] = param_2[3];
          puVar5 = puVar5 + 4;
          param_2 = param_2 + 4;
        }
        for (; 3 < param_3; param_3 = param_3 - 4) {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
          *puVar5 = uVar3;
          puVar5 = puVar5 + 1;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar5 + uVar4) = *(undefined1 *)((int)param_2 + uVar4);
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    else {
      uVar4 = (int)param_1 + param_3;
      if ((7 < param_3) && ((((uint)puVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)param_1 + (param_3 - 1)) =
                 *(undefined1 *)((int)param_2 + (param_3 - 1));
            uVar1 = param_3 - 1;
            if (param_3 == 1) break;
            iVar6 = param_3 - 1;
            param_3 = uVar1;
          } while (((int)param_1 + iVar6 & 3U) != 0);
          puVar5 = (undefined4 *)((int)param_2 + uVar1);
          uVar4 = (int)param_1 + uVar1;
          param_3 = uVar1;
        }
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          *(undefined4 *)(uVar4 - 4) = puVar5[-1];
          *(undefined4 *)(uVar4 - 8) = puVar5[-2];
          *(undefined4 *)(uVar4 - 0xc) = puVar5[-3];
          *(undefined4 *)(uVar4 - 0x10) = puVar5[-4];
          uVar4 = uVar4 - 0x10;
          puVar5 = puVar5 + -4;
        }
        for (; 3 < param_3; param_3 = param_3 - 4) {
          puVar7 = puVar5 + -1;
          puVar5 = puVar5 + -1;
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)puVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != param_3);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b0
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_100029b0(byte *param_1,byte param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;

  pbVar1 = param_1;
  if (7 < param_3) {
    if (((uint)param_1 & 3) != 0) {
      pbVar2 = param_1;
      do {
        pbVar2 = pbVar2 + 1;
        *pbVar1 = param_2;
        pbVar1 = pbVar1 + 1;
        bVar4 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar4) break;
      } while (((uint)pbVar2 & 3) != 0);
    }
    iVar3 = (uint)param_2 * 0x1010101;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *(int *)pbVar1 = iVar3;
      *(int *)(pbVar1 + 4) = iVar3;
      *(int *)(pbVar1 + 8) = iVar3;
      *(int *)(pbVar1 + 0xc) = iVar3;
      pbVar1 = pbVar1 + 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *(int *)pbVar1 = iVar3;
      pbVar1 = pbVar1 + 4;
    }
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *pbVar1 = param_2;
    pbVar1 = pbVar1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

void recovered_10002a60(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002b00
 */

void recovered_10002b00(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002ba0
 */

char * recovered_10002ba0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10002be0
 */

int recovered_10002be0(uint *param_1,uint *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10002c7e;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10002c95;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_10002cc6:
        if ((char)uVar7 == (char)uVar8) {
          uVar5 = uVar7 >> 8;
          uVar4 = uVar8 >> 8;
          if ((char)(uVar7 >> 8) == (char)(uVar8 >> 8)) {
            uVar5 = uVar7 >> 0x10;
            uVar4 = uVar8 >> 0x10;
            if ((char)(uVar7 >> 0x10) == (char)(uVar8 >> 0x10)) {
              uVar5 = uVar7 >> 0x18;
              uVar4 = uVar8 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar7;
          uVar4 = uVar8;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar7 = param_1[1];
      uVar8 = param_2[1];
      if (uVar7 != uVar8) goto LAB_10002cc6;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_10002cc6;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_10002cc6;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002d10();
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10002c7e:
  uVar7 = 0;
  while( true ) {
    bVar1 = *(byte *)((int)param_1 + uVar7);
    bVar2 = *(byte *)((int)param_2 + uVar7);
    if (bVar1 != bVar2) break;
    uVar7 = uVar7 + 1;
    if (param_3 == uVar7) {
      return 0;
    }
  }
LAB_10002c95:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

int recovered_10002d10(void)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d60
 */

bool recovered_10002d60(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d80
 */

bool recovered_10002d80(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002da0
 */

bool recovered_10002da0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc0
 */

bool recovered_10002dc0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df0
 */

bool recovered_10002df0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e10
 */

bool recovered_10002e10(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e30
 */

int recovered_10002e30(int param_1)

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
 * Address: 0x10002e50
 */

int recovered_10002e50(int param_1)

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
 * Address: 0x10002e70
 */

int recovered_10002e70(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eb0
 */

int recovered_10002eb0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002ee6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002ee6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

int recovered_10002ef0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002f26;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002f26:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

void recovered_10002f30(int param_1,int param_2)

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
 * Address: 0x10002f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002f60(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint size;
  uint uVar7;

  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  size = 0;
  do {
    uVar5 = size;
    size = uVar5 + 1;
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
  puVar4 = (*_DAT_0028084c)(size);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar6 = puVar4;
  if (7 < size) {
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10003078;
    if (((uint)puVar4 & 3) != 0) {
      uVar7 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar7) = *(undefined1 *)((int)param_1 + uVar7);
        uVar1 = uVar7 + 1;
        if (uVar5 == uVar7) break;
        iVar3 = uVar7 + 1;
        uVar7 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      size = size - uVar1;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < size; size = size - 0x10) {
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      puVar6[2] = param_1[2];
      puVar6[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < size; size = size - 4) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (size == 0) {
    return puVar4;
  }
LAB_10003078:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)((int)param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (size != uVar5);
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
 * Address: 0x100030a0
 */

char * recovered_100030a0(char *param_1,char param_2)

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
 * Address: 0x100030e0
 */

int recovered_100030e0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000312b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000312b;
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
 * Address: 0x10003140
 */

int recovered_10003140(char *param_1,char *param_2)

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
 * Address: 0x100031a0
 */

char * recovered_100031a0(char *param_1,char *param_2)

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
 * Address: 0x100031f0
 */

char * recovered_100031f0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10003233;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10003233:
  return pcVar3;
}


#undef DAT_10006b61
#define DAT_10006b61 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003240
 */

undefined * recovered_10003240(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10006b61;
}

#undef DAT_10006b61

#undef PTR_DAT_10007028
#define PTR_DAT_10007028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x574U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003260
 */

undefined ** recovered_10003260(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10007028;
}

#undef PTR_DAT_10007028

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
 * Address: 0x10003280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003280(undefined4 *param_1)

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

#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

longdouble recovered_10003320(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_10006ac0;
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

#undef DAT_10006ac0

#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

void recovered_10003370(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_10006ac0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_10006ac0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_10006ac0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_10006ac0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003430
 */

longdouble recovered_10003430(double param_1,double param_2)

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
 * Address: 0x10003490
 */

longdouble recovered_10003490(double param_1,double param_2)

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
 * Address: 0x10003520
 */

longdouble recovered_10003520(double param_1)

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
 * Address: 0x10003570
 */

longdouble recovered_10003570(double param_1)

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
 * Address: 0x100035d0
 */

void recovered_100035d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10006ac4
#define DAT_10006ac4 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10006ac8
#define DAT_10006ac8 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006acc
#define DAT_10006acc (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10006ad0
#define DAT_10006ad0 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10006ad4
#define DAT_10006ad4 (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10006ad8
#define DAT_10006ad8 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10006adc
#define DAT_10006adc (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10006ae0
#define DAT_10006ae0 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10006ae4
#define DAT_10006ae4 (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10006ae8
#define DAT_10006ae8 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10006aec
#define DAT_10006aec (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10006af0
#define DAT_10006af0 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10006b18
#define DAT_10006b18 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036d0
 */

longdouble recovered_100036d0(double param_1)

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
    lVar2 = (longdouble)DAT_10006ac4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_10006ac8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_10006ac0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_10006ac8 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_10006acc) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_10006acc);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_10006af0 +
            lVar9 / (longdouble)DAT_10006aec +
            lVar8 / (longdouble)DAT_10006ae8 +
            lVar7 / (longdouble)DAT_10006ae4 +
            lVar6 / (longdouble)DAT_10006ae0 +
            lVar5 / (longdouble)DAT_10006adc +
            lVar4 / (longdouble)DAT_10006ad8 +
            lVar3 / (longdouble)DAT_10006ad4 +
            (lVar10 * lVar2) / (longdouble)DAT_10006ad0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_10006b18;
  }
  return lVar2;
}

#undef DAT_10006ac0
#undef DAT_10006ac4
#undef DAT_10006ac8
#undef DAT_10006acc
#undef DAT_10006ad0
#undef DAT_10006ad4
#undef DAT_10006ad8
#undef DAT_10006adc
#undef DAT_10006ae0
#undef DAT_10006ae4
#undef DAT_10006ae8
#undef DAT_10006aec
#undef DAT_10006af0
#undef DAT_10006b18

#undef DAT_10006b40
#define DAT_10006b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e0
 */

longlong recovered_100037e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10006b40 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10006b40

#undef DAT_10006af4
#define DAT_10006af4 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10006af8
#define DAT_10006af8 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10006afc
#define DAT_10006afc (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10006b20
#define DAT_10006b20 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10006b28
#define DAT_10006b28 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10006b30
#define DAT_10006b30 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10006b38
#define DAT_10006b38 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003840
 */

longdouble recovered_10003840(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_10006b20 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10006b28;
    } while ((longdouble)DAT_10006b20 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_10006b30) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10006b38;
    } while (lVar1 < (longdouble)DAT_10006b30);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_10006afc +
         (lVar2 * lVar2) / (longdouble)DAT_10006af8 +
         (longdouble)1 + lVar2 / (longdouble)DAT_10006af4) * lVar1;
}

#undef DAT_10006af4
#undef DAT_10006af8
#undef DAT_10006afc
#undef DAT_10006b20
#undef DAT_10006b28
#undef DAT_10006b30
#undef DAT_10006b38

#undef DAT_10006b00
#define DAT_10006b00 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10006b04
#define DAT_10006b04 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10006b08
#define DAT_10006b08 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10006b20
#define DAT_10006b20 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10006b28
#define DAT_10006b28 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10006b30
#define DAT_10006b30 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10006b38
#define DAT_10006b38 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d0
 */

longdouble recovered_100038d0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_10006b20 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10006b28;
    } while ((longdouble)DAT_10006b20 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_10006b30) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_10006b38;
    } while (lVar1 < (longdouble)DAT_10006b30);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_10006b08 +
         (lVar1 * lVar1) / (longdouble)DAT_10006b04 +
         (longdouble)1 + lVar1 * (longdouble)DAT_10006b00;
}

#undef DAT_10006b00
#undef DAT_10006b04
#undef DAT_10006b08
#undef DAT_10006b20
#undef DAT_10006b28
#undef DAT_10006b30
#undef DAT_10006b38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003960
 */

longdouble recovered_10003960(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10006b0c
#define DAT_10006b0c (*(float *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003980
 */

undefined8 recovered_10003980(double param_1)

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
    dVar3 = (double)DAT_10006b0c;
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
      dVar3 = dVar3 * (double)DAT_10006ac0;
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

#undef DAT_10006ac0
#undef DAT_10006b0c

#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10006b0c
#define DAT_10006b0c (*(float *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a40
 */

undefined8 recovered_10003a40(double param_1)

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
    dVar2 = (double)DAT_10006b0c;
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
      dVar2 = dVar2 * (double)DAT_10006ac0;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_10006ac0
#undef DAT_10006b0c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad0
 */

void recovered_10003ad0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;

  if (param_1 != 0 || param_2 != 0) {
    do {
      bVar2 = 1 < param_1;
      bVar3 = param_2 != 0;
      uVar1 = -param_2;
      param_1 = param_2 << 0x1f | param_1 >> 1;
      param_2 = param_2 >> 1;
    } while (bVar3 || uVar1 < bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b40
 */

void recovered_10003b40(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  if ((int)param_2 < 0) {
    uVar2 = -param_1;
    uVar3 = -(uint)(param_1 != 0) - param_2;
    do {
      bVar4 = 1 < uVar2;
      bVar5 = uVar3 != 0;
      uVar1 = -uVar3;
      uVar2 = uVar3 << 0x1f | uVar2 >> 1;
      uVar3 = uVar3 >> 1;
    } while (bVar5 || uVar1 < bVar4);
  }
  else if (param_1 != 0 || param_2 != 0) {
    do {
      bVar4 = 1 < param_1;
      bVar5 = param_2 != 0;
      uVar2 = -param_2;
      param_1 = param_2 << 0x1f | param_1 >> 1;
      param_2 = param_2 >> 1;
    } while (bVar5 || uVar2 < bVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c00
 */

void recovered_10003c00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c70
 */

void recovered_10003c70(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_10006ac0;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_10006ac0 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_10006ac0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_10006ac0

#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d60
 */

longdouble recovered_10003d60(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_10006ac0;
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

#undef DAT_10006ac0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc0
 */

longdouble recovered_10003dc0(float param_1,float param_2)

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
 * Address: 0x10003e60
 */

longdouble recovered_10003e60(float param_1)

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
 * Address: 0x10003ec0
 */

longdouble recovered_10003ec0(float param_1)

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
 * Address: 0x10003f30
 */

longdouble recovered_10003f30(double param_1)

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
 * Address: 0x10003fa0
 */

longdouble recovered_10003fa0(float param_1)

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
 * Address: 0x10004010
 */

longdouble recovered_10004010(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_100035d0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10006ac8
#define DAT_10006ac8 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006acc
#define DAT_10006acc (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004030
 */

void recovered_10004030(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_10006ac8 < param_1) {
      do {
        param_1 = param_1 * DAT_10006ac0;
      } while (DAT_10006ac8 < param_1);
    }
    for (; param_1 < DAT_10006acc; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_10006ac0
#undef DAT_10006ac8
#undef DAT_10006acc

#undef DAT_10006b40
#define DAT_10006b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004150
 */

undefined4 recovered_10004150(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10006b40 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_10006b40
#undef local_10

#undef DAT_10006af4
#define DAT_10006af4 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10006af8
#define DAT_10006af8 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10006afc
#define DAT_10006afc (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10006b20
#define DAT_10006b20 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10006b28
#define DAT_10006b28 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10006b30
#define DAT_10006b30 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10006b38
#define DAT_10006b38 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a0
 */

longdouble recovered_100041a0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_10006b20 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_10006b28;
    } while ((float)DAT_10006b20 < param_1);
  }
  if (param_1 < (float)DAT_10006b30) {
    do {
      param_1 = param_1 + (float)DAT_10006b38;
    } while (param_1 < (float)DAT_10006b30);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_10006afc +
          (fVar1 * fVar1) / DAT_10006af8 + fVar1 / DAT_10006af4 + 1.0) * param_1);
}

#undef DAT_10006af4
#undef DAT_10006af8
#undef DAT_10006afc
#undef DAT_10006b20
#undef DAT_10006b28
#undef DAT_10006b30
#undef DAT_10006b38

#undef DAT_10006b00
#define DAT_10006b00 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10006b04
#define DAT_10006b04 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10006b08
#define DAT_10006b08 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10006b20
#define DAT_10006b20 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10006b28
#define DAT_10006b28 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10006b30
#define DAT_10006b30 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10006b38
#define DAT_10006b38 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004230
 */

longdouble recovered_10004230(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_10006b20 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_10006b28;
    } while ((float)DAT_10006b20 < param_1);
  }
  if (param_1 < (float)DAT_10006b30) {
    do {
      param_1 = param_1 + (float)DAT_10006b38;
    } while (param_1 < (float)DAT_10006b30);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_10006b08 +
         (fVar1 * fVar1) / DAT_10006b04 + fVar1 * DAT_10006b00 + 1.0);
}

#undef DAT_10006b00
#undef DAT_10006b04
#undef DAT_10006b08
#undef DAT_10006b20
#undef DAT_10006b28
#undef DAT_10006b30
#undef DAT_10006b38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

longdouble recovered_100042c0(float param_1)

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
 * Address: 0x100042e0
 */

int recovered_100042e0(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10004430
 */

int recovered_10004430(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_10006ac0
#define DAT_10006ac0 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10006b10
#define DAT_10006b10 (*(float *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004580
 */

longdouble recovered_10004580(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_10006b10 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_10006b10 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_10006b10;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004653;
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
LAB_10004653:
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
              lVar10 = lVar10 * (longdouble)DAT_10006ac0;
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

#undef DAT_10006ac0
#undef DAT_10006b10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004740
 */

longdouble recovered_10004740(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10004580(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_10006b10
#define DAT_10006b10 (*(float *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_10006b63
#define str_10006b63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafU)))
#undef str_10006b6d
#define str_10006b6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9U)))
#undef str_10006b7e
#define str_10006b7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcaU)))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004770
 */

int recovered_10004770(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10004803;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10004803;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004865;
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
LAB_10004865:
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
      goto LAB_1000494c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004958;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000494c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004958;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004958:
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
        goto LAB_10004c69;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004c69:
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
        abStack_51[iVar12 + 1] = str_10006b7e[uVar15 + uVar9 * -10];
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
      goto LAB_100047b8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004803;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004d97;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004d97;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004d97:
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
      pcVar14 = str_10006b7e;
      if (*param_3 == 0x58) {
        pcVar14 = str_10006b6d;
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
LAB_10004d6c:
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
LAB_10004803:
      local_c0 = local_c0 + 1;
LAB_10004804:
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
                        goto LAB_10004ea5;
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
LAB_10004ea5:
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
          abStack_51[iVar12 + 1] = str_10006b7e[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_10006b10;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_10006b10;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_10006b10;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_10006b10;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_10006b10);
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
        abStack_51[iVar12 + 1] = str_10006b7e[uVar8 & 0xf];
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
      goto LAB_10004804;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_10006b63;
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
      goto LAB_10004d6c;
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
        goto LAB_10004f7f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004f7f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004f7f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_10006b7e[uVar8 + uVar9 * -10];
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
LAB_100047b8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_10006b10
#undef str_10006b63
#undef str_10006b6d
#undef str_10006b7e
#undef local_80
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef abStack_51

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_100054d0(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10004770(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


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
#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_10007068
#define DAT_10007068 (*(int * *)(((uintptr_t)pf_module_state + 0x5b4U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005500(int *param_1)

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
        if (DAT_10007060 == 0) {
          puVar2 = &DAT_10007060;
        }
        *puVar2 = piVar4;
        *param_1 = (int)piVar4;
        if (DAT_10007068 == (int *)0x0) {
          DAT_10007068 = piVar4;
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
    if (DAT_10007060 == 0) {
      puVar2 = &DAT_10007060;
    }
    *puVar2 = 0x10000000;
    *param_1 = 0x10000000;
    if (DAT_10007068 != (int *)0x0) {
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
    if (DAT_10007060 == 0) {
      puVar2 = &DAT_10007060;
    }
    *puVar2 = piVar4;
    *param_1 = (int)piVar4;
    if (DAT_10007068 != (int *)0x0) {
      return;
    }
  }
  DAT_10007068 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_10007060
#undef DAT_10007068
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

uint * recovered_100056a0(void)

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
 * Address: 0x10005700
 */

undefined4 recovered_10005700(void)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

undefined4 recovered_10005760(uint param_1,uint param_2,uint *param_3,uint *param_4,int *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar5 = 1;
  if (param_5 != (int *)0x0 && (param_4 != (uint *)0x0 && param_3 != (uint *)0x0)) {
    uVar1 = *param_3;
    uVar5 = 2;
    if (((0xffffffdf < uVar1 - 0x21) && (uVar2 = param_3[1], 0xffffffdf < uVar2 - 0x21)) &&
       (uVar5 = 3, param_2 != 0 && param_1 != 0)) {
      if (param_1 % uVar1 == 0) {
        uVar5 = 3;
        if (param_2 % uVar2 == 0) {
          uVar6 = param_3[3];
          if (param_3[3] == 0) {
            uVar6 = param_1 / uVar1;
          }
          uVar5 = 4;
          if (uVar6 - 1 < param_1 / uVar1) {
            uVar3 = param_3[2];
            lVar4 = (ulonglong)(param_2 / uVar2) * (ulonglong)uVar6;
            uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
            uVar7 = (uint)lVar4;
            uVar8 = param_3[4];
            if (param_3[4] == 0) {
              if (uVar9 != 0 || -uVar9 < (uint)(0x100 < uVar7)) {
                return 5;
              }
              uVar8 = uVar7;
            }
            uVar5 = 5;
            if ((((uVar7 < uVar8) <= uVar9 && 0xfffffeff < uVar8 - 0x101) &&
                (uVar5 = 6, uVar3 < 0x100)) && (uVar3 + uVar8 < 0x101)) {
              *param_4 = uVar1;
              param_4[1] = uVar2;
              param_4[2] = uVar3;
              param_4[3] = uVar6;
              param_4[4] = uVar8;
              *param_5 = uVar2 * uVar8 * (uVar1 + 7 >> 3) + 0xc;
              uVar5 = 0;
            }
          }
        }
      }
      else {
        uVar5 = 3;
      }
    }
  }
  return uVar5;
}


#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(uint *)(pf_stack_frame + 40))
#define local_30 (*(uint *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058e0
 */

undefined4
recovered_100058e0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6,
                  undefined4 *param_7,uint param_8,uint *param_9)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint in_EDX;
  uint unaff_EBX = 0;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;

  if (param_6 == (uint *)0x0) {
    uVar4 = 1;
  }
  else {
    local_38 = *param_6;
    in_EDX = local_38 - 0x21;
    uVar4 = 2;
    if (0xffffffdf < in_EDX) {
      uVar7 = param_6[1];
      in_EDX = uVar7 - 0x21;
      unaff_EBX = uVar7;
      if (0xffffffdf < in_EDX) {
        in_EDX = (uint)(param_4 == 0 || param_3 == 0);
        uVar4 = 3;
        if (param_4 != 0 && param_3 != 0) {
          uVar5 = param_3 / local_38;
          uVar6 = uVar5;
          if ((param_3 % local_38 != 0) || (uVar6 = param_4 / uVar7, param_4 % uVar7 != 0)) {
            local_40 = 0;
            bVar3 = false;
            uVar4 = 3;
            local_44 = uVar6;
            goto LAB_10005978;
          }
          uVar10 = param_6[3];
          if (param_6[3] == 0) {
            uVar10 = uVar5;
          }
          in_EDX = uVar10 - 1;
          unaff_EBX = uVar10;
          if (in_EDX < uVar5) {
            local_44 = param_6[2];
            in_EDX = (uint)((ulonglong)uVar6 * (ulonglong)uVar10 >> 0x20);
            uVar5 = (uint)((ulonglong)uVar6 * (ulonglong)uVar10);
            uVar6 = param_6[4];
            local_30 = uVar10;
            if (param_6[4] == 0) {
              unaff_EBX = -in_EDX - (uint)(0x100 < uVar5);
              if (in_EDX != 0 || -in_EDX < (uint)(0x100 < uVar5)) {
                uVar4 = 5;
                goto LAB_10005972;
              }
              uVar6 = uVar5;
            }
            bVar11 = uVar6 - 0x101 < 0xffffff00;
            unaff_EBX = CONCAT31((int3)(unaff_EBX >> 8),bVar11);
            bVar3 = in_EDX < (uVar5 < uVar6);
            in_EDX = in_EDX - (uVar5 < uVar6);
            local_3c = uVar6;
            if (bVar3 || bVar11) {
              uVar4 = 5;
            }
            else {
              local_40 = 0;
              uVar4 = 6;
              if (local_44 < 0x100) {
                bVar3 = false;
                if (uVar6 + local_44 < 0x101) {
                  local_40 = uVar7 * uVar6 * (local_38 + 7 >> 3) + 0xc;
                  uVar4 = 0;
                  bVar3 = true;
                }
                goto LAB_10005978;
              }
            }
          }
          else {
            uVar4 = 4;
          }
        }
      }
    }
  }
LAB_10005972:
  uVar7 = unaff_EBX;
  local_40 = 0;
  bVar3 = false;
  local_44 = in_EDX;
LAB_10005978:
  if (param_9 != (uint *)0x0) {
    *param_9 = local_40;
  }
  if ((((bVar3) &&
       (uVar4 = 1, (param_7 != (undefined4 *)0x0 && param_1 != 0) && param_9 != (uint *)0x0)) &&
      (uVar4 = 7, param_3 >> 0x1e == 0 && (uint)(param_5 < param_3 << 2) <= -(param_3 >> 0x1e))) &&
     ((uVar4 = 7,
      (uint)((ulonglong)param_5 * (ulonglong)param_4) <= param_2 &&
      (int)((ulonglong)param_5 * (ulonglong)param_4 >> 0x20) == 0 &&
      (uVar4 = 8, local_40 <= param_8)))) {
    recovered_100029b0((byte *)param_7,0,local_40);
    *param_7 = 0x31464257;
    *(char *)(param_7 + 1) = (char)local_38;
    *(char *)((int)param_7 + 5) = (char)uVar7;
    *(char *)((int)param_7 + 6) = (char)local_44;
    *(char *)((int)param_7 + 7) = (char)local_3c;
    uVar6 = local_38 + 7 >> 3;
    *(char *)(param_7 + 2) = (char)uVar6;
    uVar5 = 0;
    do {
      uVar10 = 0;
      do {
        iVar9 = (uVar10 + (uVar5 / local_30) * uVar7) * param_5 + param_1;
        uVar8 = 0;
        do {
          iVar1 = uVar8 + (uVar5 % local_30) * local_38;
          if ((*(char *)(iVar9 + 3 + iVar1 * 4) < '\0') &&
             ((uint)*(byte *)(iVar9 + 2 + iVar1 * 4) * 0x72 +
              (uint)*(byte *)(iVar9 + 1 + iVar1 * 4) * 0x24b +
              (uint)*(byte *)(iVar9 + iVar1 * 4) * 299 < 0x1f400)) {
            pbVar2 = (byte *)((int)param_7 +
                             (uVar8 >> 3) + uVar10 * uVar6 + uVar6 * uVar7 * uVar5 + 0xc);
            *pbVar2 = *pbVar2 | (byte)(0x80 >> ((byte)uVar8 & 7));
          }
          uVar8 = uVar8 + 1;
        } while (local_38 != uVar8);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
      uVar5 = uVar5 + 1;
    } while (uVar5 != local_3c);
    uVar4 = 0;
  }
  return uVar4;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_30

#undef DAT_10006b8f
#define DAT_10006b8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
#undef str_10006b4f
#define str_10006b4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

undefined4 recovered_10005c20(char *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  bool bVar8;

  uVar2 = 9;
  if (param_3 == 0 || (param_2 == 0 || param_1 == (char *)0x0)) {
    return 9;
  }
  cVar7 = *param_1;
  if (cVar7 == '\0') {
    return 9;
  }
  pcVar6 = param_1;
  do {
    pcVar6 = pcVar6 + 1;
    if ((cVar7 == '/') || (cVar7 == '\\')) {
      param_1 = pcVar6;
    }
    else if (cVar7 == '\0') break;
    cVar7 = *pcVar6;
  } while( true );
  if (*param_1 != '\0') {
    uVar3 = recovered_10002e70((int)param_1);
    uVar4 = uVar3;
    do {
      uVar5 = uVar3;
      if (uVar4 == 0) break;
      iVar1 = uVar4 - 1;
      bVar8 = uVar4 == 1;
      uVar4 = uVar4 - 1;
      uVar5 = uVar4;
    } while (bVar8 || param_1[iVar1] != '.');
    uVar2 = 9;
    if (uVar5 + 0x15 <= param_3 && uVar5 != 0) {
      recovered_10002720((undefined4 *)param_2,(undefined4 *)(str_10006b4f + 1),0x10
                        );
      recovered_10002720((undefined4 *)(param_2 + 0x10),(undefined4 *)param_1,uVar5);
      recovered_10002720((undefined4 *)(param_2 + 0x10 + uVar5),(undefined4 *)&DAT_10006b8f,5);
      uVar2 = 0;
    }
  }
  return uVar2;
}

#undef DAT_10006b8f
#undef str_10006b4f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d40
 */

undefined4 recovered_10005d40(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;

  if (param_2 != (uint *)0x0 && param_1 != (byte *)0x0) {
    for (; (bVar1 = *param_1, bVar1 == 9 || (bVar1 == 0x20)); param_1 = param_1 + 1) {
    }
    if ((bVar1 == 0x30) && ((param_1[1] | 0x20) == 0x78)) {
      param_1 = param_1 + 2;
      uVar2 = 0x10;
    }
    else {
      uVar2 = 10;
    }
    iVar5 = 0;
    uVar3 = 0;
    while( true ) {
      pbVar6 = param_1 + 1;
      bVar1 = *param_1;
      uVar4 = (uint)bVar1;
      if (((uVar4 == 0) || (uVar4 == 0x20)) || (uVar4 == 9)) break;
      if ((byte)(bVar1 - 0x30U) < 10) {
        uVar4 = (uint)(byte)(bVar1 - 0x30U);
      }
      else if ((byte)(bVar1 + 0x9f) < 6) {
        uVar4 = uVar4 - 0x57;
      }
      else {
        if (5 < (byte)(bVar1 + 0xbf)) {
          return 0;
        }
        uVar4 = uVar4 - 0x37;
      }
      if (uVar2 <= uVar4) {
        return 0;
      }
      if (~uVar4 / uVar2 < uVar3) {
        return 0;
      }
      uVar3 = uVar3 * uVar2 + uVar4;
      iVar5 = iVar5 + -1;
      param_1 = pbVar6;
    }
    while (((char)uVar4 == ' ' || (uVar4 == 9))) {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar4 = (uint)bVar1;
    }
    if (iVar5 != 0) {
      if ((char)uVar4 == '\0') {
        *param_2 = uVar3;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x54cU)))
#undef str_10006d14
#define str_10006d14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x260U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb0
 */

char * recovered_10005eb0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 < 10) {
    pcVar1 = (&PTR_DAT_10007000)[param_1];
  }
  else {
    pcVar1 = str_10006d14;
  }
  return pcVar1;
}

#undef PTR_DAT_10007000
#undef str_10006d14

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_00280844
#define DAT_00280844 (*(uint8_t *)(0x280844U))
#undef DAT_10006f3b
#define DAT_10006f3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x487U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
#undef _DAT_00280844
#define _DAT_00280844 (*(code * *)(0x280844U))
#undef str_10006b97
#define str_10006b97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3U)))
#undef str_10006ba8
#define str_10006ba8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10006bdf
#define str_10006bdf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12bU)))
#undef str_10006c1a
#define str_10006c1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x166U)))
#undef str_10006c3f
#define str_10006c3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_10006c77
#define str_10006c77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10006cac
#define str_10006cac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f8U)))
#undef str_10006cd2
#define str_10006cd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21eU)))
#undef str_10006cf1
#define str_10006cf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23dU)))
#undef str_10006d14
#define str_10006d14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x260U)))
#undef str_10006d32
#define str_10006d32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27eU)))
#undef str_10006d5c
#define str_10006d5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a8U)))
#undef str_10006d6d
#define str_10006d6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b9U)))
#undef str_10006d80
#define str_10006d80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
#undef str_10006d95
#define str_10006d95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e1U)))
#undef str_10006dab
#define str_10006dab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_10006dc6
#define str_10006dc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_10006de2
#define str_10006de2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32eU)))
#undef str_10006dfc
#define str_10006dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x348U)))
#undef str_10006e15
#define str_10006e15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x361U)))
#undef str_10006e32
#define str_10006e32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_10006e6d
#define str_10006e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b9U)))
#undef str_10006e83
#define str_10006e83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cfU)))
#undef str_10006ea3
#define str_10006ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_10006eb1
#define str_10006eb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fdU)))
#undef str_10006ed1
#define str_10006ed1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_10006ef8
#define str_10006ef8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x444U)))
#undef str_10006f08
#define str_10006f08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x454U)))
#undef str_10006f25
#define str_10006f25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x471U)))
#undef str_10006f3e
#define str_10006f3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48aU)))
#undef str_10006f4c
#define str_10006f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x498U)))
#undef str_10006f74
#define str_10006f74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#define local_30c4 (*(char * *)(pf_stack_frame + 28))
#define local_30c0 (*(uint *)(pf_stack_frame + 32))
#define local_30bc (*(void * *)(pf_stack_frame + 36))
#define local_30b8 (*(uint *)(pf_stack_frame + 40))
#define local_30b4 (*(uint *)(pf_stack_frame + 44))
#define uStack_309c (*(uint *)(pf_stack_frame + 68))
#define local_30b0 (*(uint *)(pf_stack_frame + 48))
#define local_30ac (*(uint *)(pf_stack_frame + 52))
#define local_30a8 (*(uint *)(pf_stack_frame + 56))
#define uStack_3090 (*(uint *)(pf_stack_frame + 80))
#define local_30a4 (*(void * *)(pf_stack_frame + 60))
#define local_30a0 (*(int *)(pf_stack_frame + 64))
#define uStack_307c (*(undefined4 *)(pf_stack_frame + 100))
#define local_3098 (*(uint *)(pf_stack_frame + 72))
#define local_3094 (*(uint *)(pf_stack_frame + 76))
#define acStack_1015 (*(char (*)[4117])(pf_stack_frame + 8395))
#define local_308c (*(uint (*)[3107])(pf_stack_frame + 84))
#define local_3077 (*(byte (*)[12407])(pf_stack_frame + 105))
#define local_2016 (*(char (*)[8214])(pf_stack_frame + 4298))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005ee0(void)

{
  unsigned char pf_stack_frame[12544] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 *data;
  char *pcVar3;
  char *pcVar4;

  local_30c0 = 0;
  recovered_100029b0((byte *)&local_30b8,0,0x14);
  recovered_100029b0((byte *)local_308c,0,0x14);
  recovered_100029b0((byte *)&local_30a4,0,0x18);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(str_10006d32);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(&DAT_10006f3b);
  }
  local_2016[0] = '\0';
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)) &&
      ((iVar1 = (*_DAT_00280844)(local_2016,0x1001,str_10006d5c,1), iVar1 != 0 &&
       (local_2016[0] != '\0')))))) {
    while ((((local_3077[0] = 0, _DAT_00280800 == 0x50414d57 && (_DAT_00280804 != 0)) &&
            (0xb < _DAT_00280808)) &&
           (((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)) &&
            (iVar1 = (*_DAT_00280844)(local_3077,0x40,str_10006d80,1), iVar1 != 0))))) {
      iVar1 = recovered_10005d40(local_3077,&local_30b8);
      if ((iVar1 != 0) && (local_30b8 - 1 < 0x20)) goto LAB_100060e2;
      recovered_10006890(str_10006f3e,str_10006f4c);
    }
  }
LAB_10006370:
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(str_10006d6d);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(&DAT_10006f3b);
  }
  return 1;
LAB_100060e2:
  local_3077[0] = 0;
  if ((((_DAT_00280800 != 0x50414d57) || ((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)))) ||
      (_DAT_00280808 < 0x48)) ||
     ((_DAT_00280844 == (code *)0x0 ||
      (iVar1 = (*_DAT_00280844)(local_3077,0x40,str_10006d95,1), iVar1 == 0)))) goto LAB_10006370;
  iVar1 = recovered_10005d40(local_3077,&local_30b4);
  if ((iVar1 != 0) && (local_30b4 - 1 < 0x20)) goto LAB_10006188;
  recovered_10006890(str_10006f3e,str_10006f4c);
  goto LAB_100060e2;
LAB_10006188:
  local_3077[0] = 0;
  if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x48 || (_DAT_00280844 == (code *)0x0)))) ||
     (iVar1 = (*_DAT_00280844)(local_3077,0x40,str_10006dab,1), iVar1 == 0)) goto LAB_10006370;
  if (local_3077[0] == 0) {
    local_30b0 = 0;
    goto LAB_1000622c;
  }
  iVar1 = recovered_10005d40(local_3077,&local_30b0);
  if ((iVar1 != 0) && (local_30b0 < 0x100)) goto LAB_1000622c;
  recovered_10006890(str_10006f3e,str_10006f74);
  goto LAB_10006188;
LAB_1000622c:
  local_3077[0] = 0;
  if (((_DAT_00280800 != 0x50414d57) ||
      (((_DAT_00280804 == 0 || (_DAT_00280808 < 0xc)) || (_DAT_00280808 < 0x48)))) ||
     ((_DAT_00280844 == (code *)0x0 ||
      (iVar1 = (*_DAT_00280844)(local_3077,0x40,str_10006dc6,1), iVar1 == 0)))) goto LAB_10006370;
  if (local_3077[0] == 0) {
    local_30ac = 0;
    goto LAB_100062e5;
  }
  iVar1 = recovered_10005d40(local_3077,&local_30ac);
  if (iVar1 != 0) goto LAB_100062e5;
  recovered_10006890(str_10006f3e,str_10006f74);
  goto LAB_1000622c;
LAB_100062e5:
  local_3077[0] = 0;
  if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
     ((_DAT_00280808 < 0xc ||
      (((_DAT_00280808 < 0x48 || (_DAT_00280844 == (code *)0x0)) ||
       (iVar1 = (*_DAT_00280844)(local_3077,0x40,str_10006de2,1), iVar1 == 0))))))
  goto LAB_10006370;
  if (local_3077[0] == 0) {
    local_30a8 = 0;
LAB_10006411:
    iVar1 = recovered_100067e0(local_2016,&local_30a4);
    if (iVar1 == 0) {
      local_3077[0] = 0;
      pcVar4 = (char *)local_3077;
      recovered_10006830(pcVar4);
      pcVar3 = str_10006dfc;
LAB_10006589:
      recovered_10006890(pcVar3,pcVar4);
      return 1;
    }
    if ((local_30a0 != 0) || (local_30bc = local_30a4, local_30a4 == (void *)0x0)) {
      pcVar3 = str_10006e15;
      pcVar4 = str_10006e32;
      goto LAB_10006589;
    }
    local_30c4 = str_10006b97;
    uVar2 = recovered_10005760(local_3098,local_3094,&local_30b8,local_308c,(int *)&local_30c0);
                    /* WARNING: Switch is manually overridden */
    switch((uintptr_t)(uVar2)) {
    case 0:
      data = (undefined4 *)recovered_10006980(local_30c0);
      if (data != (undefined4 *)0x0) {
        uVar2 = recovered_100058e0((int)local_30bc,uStack_309c,local_3098,local_3094,uStack_3090,
                                   &local_30b8,data,local_30c0,&local_30c0);
        pcVar3 = str_10006b97;
        switch((uintptr_t)(uVar2)) {
        case 0:
          pcVar3 = str_10006b97;
          uVar2 = recovered_10005c20(local_2016,(int)acStack_1015,0x1001);
                    /* WARNING: Switch is manually overridden */
          switch((uintptr_t)(uVar2)) {
          case 0:
            recovered_100069d0((char *)((uintptr_t)pf_module_state + 0x43eU));
            recovered_100069d0(str_10006ef8);
            iVar1 = recovered_10006a20(acStack_1015,data,local_30c0);
            if (iVar1 == 0) {
              local_3077[0] = 0;
              pcVar3 = (char *)local_3077;
              recovered_10006830(pcVar3);
              pcVar4 = str_10006f08;
              goto LAB_10006647;
            }
            recovered_100054d0((char *)local_3077,0x1061,str_10006f25,
                               uStack_307c,acStack_1015);
            recovered_10006740((char *)local_3077);
            uVar2 = 0;
            goto LAB_10006651;
          case 2:
            pcVar3 = str_10006ba8;
            break;
          case 3:
            pcVar3 = str_10006bdf;
            break;
          case 4:
            pcVar3 = str_10006c1a;
            break;
          case 5:
            pcVar3 = str_10006c3f;
            break;
          case 6:
            pcVar3 = str_10006c77;
            break;
          case 7:
            pcVar3 = str_10006cac;
            break;
          case 8:
            pcVar3 = str_10006cd2;
            break;
          case 9:
            pcVar3 = str_10006cf1;
          }
          pcVar4 = str_10006ed1;
          goto LAB_10006647;
        case 1:
          break;
        case 2:
          pcVar3 = str_10006ba8;
          break;
        case 3:
          pcVar3 = str_10006bdf;
          break;
        case 4:
          pcVar3 = str_10006c1a;
          break;
        case 5:
          pcVar3 = str_10006c3f;
          break;
        case 6:
          pcVar3 = str_10006c77;
          break;
        case 7:
          pcVar3 = str_10006cac;
          break;
        case 8:
          pcVar3 = str_10006cd2;
          break;
        case 9:
          pcVar3 = str_10006cf1;
          break;
        default:
          pcVar3 = str_10006d14;
        }
        pcVar4 = str_10006eb1;
LAB_10006647:
        recovered_10006890(pcVar4,pcVar3);
        uVar2 = 1;
LAB_10006651:
        recovered_10006a70(data);
        goto joined_r0x100065db;
      }
      pcVar3 = str_10006e83;
      local_30c4 = str_10006ea3;
      goto LAB_100065cc;
    case 2:
      local_30c4 = str_10006ba8;
      break;
    case 3:
      local_30c4 = str_10006bdf;
      break;
    case 4:
      local_30c4 = str_10006c1a;
      break;
    case 5:
      local_30c4 = str_10006c3f;
      break;
    case 6:
      local_30c4 = str_10006c77;
    }
    pcVar3 = str_10006e6d;
LAB_100065cc:
    recovered_10006890(pcVar3,local_30c4);
    uVar2 = 1;
joined_r0x100065db:
    if (local_30bc != (void *)0x0) {
      recovered_10006a70(local_30bc);
    }
    return uVar2;
  }
  iVar1 = recovered_10005d40(local_3077,&local_30a8);
  if ((iVar1 != 0) && (local_30a8 < 0x101)) goto LAB_10006411;
  recovered_10006890(str_10006f3e,str_10006f74);
  goto LAB_100062e5;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_00280844
#undef DAT_10006f3b
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef _DAT_00280844
#undef str_10006b97
#undef str_10006ba8
#undef str_10006bdf
#undef str_10006c1a
#undef str_10006c3f
#undef str_10006c77
#undef str_10006cac
#undef str_10006cd2
#undef str_10006cf1
#undef str_10006d14
#undef str_10006d32
#undef str_10006d5c
#undef str_10006d6d
#undef str_10006d80
#undef str_10006d95
#undef str_10006dab
#undef str_10006dc6
#undef str_10006de2
#undef str_10006dfc
#undef str_10006e15
#undef str_10006e32
#undef str_10006e6d
#undef str_10006e83
#undef str_10006ea3
#undef str_10006eb1
#undef str_10006ed1
#undef str_10006ef8
#undef str_10006f08
#undef str_10006f25
#undef str_10006f3e
#undef str_10006f4c
#undef str_10006f74
#undef local_30c4
#undef local_30c0
#undef local_30bc
#undef local_30b8
#undef local_30b4
#undef uStack_309c
#undef local_30b0
#undef local_30ac
#undef local_30a8
#undef uStack_3090
#undef local_30a4
#undef local_30a0
#undef uStack_307c
#undef local_3098
#undef local_3094
#undef acStack_1015
#undef local_308c
#undef local_3077
#undef local_2016

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_10006f3b
#define DAT_10006f3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x487U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006740(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((((text != (char *)0x0) && (*text != '\0')) && (_DAT_00280800 == 0x50414d57)) &&
      ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(text);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(&DAT_10006f3b);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_10006f3b
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280858
#define DAT_00280858 (*(uint8_t *)(0x280858U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280858
#define _DAT_00280858 (*(code * *)(0x280858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100067e0(char *path,void *image)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x5b < _DAT_00280808 && (_DAT_00280858 != (code *)0x0)))) {
    iVar1 = (*_DAT_00280858)(path,image);
    return iVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280858
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280858

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280958
#define DAT_00280958 (*(uint8_t *)(0x280958U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280958
#define _DAT_00280958 (*(code * *)(0x280958U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006830(char *buffer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0x15b < _DAT_00280808)) {
    if (_DAT_00280958 != (code *)0x0) {
      (*_DAT_00280958)(buffer,0xa0);
    }
  }
  else if (buffer != (char *)0x0) {
    *buffer = '\0';
    return;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280958
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280958

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_10006b6c
#define DAT_10006b6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_10006f3b
#define DAT_10006f3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x487U)))
#undef DAT_10006fb5
#define DAT_10006fb5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
#undef str_10006f9e
#define str_10006f9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10006fae
#define str_10006fae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4faU)))
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006890(char *message,char *detail)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char *arg4;
  char *arg3;

  if (detail == (char *)0x0) {
    arg4 = &DAT_10006b6c;
    detail = &DAT_10006b6c;
  }
  else {
    arg4 = &DAT_10006fb5;
    if (*detail == '\0') {
      arg4 = &DAT_10006b6c;
      detail = &DAT_10006b6c;
    }
  }
  arg3 = str_10006fae;
  if (message != (char *)0x0) {
    arg3 = message;
  }
  recovered_100054d0(local_114,0x100,str_10006f9e,arg3,arg4,detail);
  if (((((local_114[0] != '\0') && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
      ((0xb < _DAT_00280808 && (0x2b < _DAT_00280808)))) && (_DAT_00280828 != (code *)0x0)) {
    (*_DAT_00280828)(local_114);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(&DAT_10006f3b);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_10006b6c
#undef DAT_10006f3b
#undef DAT_10006fb5
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef str_10006f9e
#undef str_10006fae
#undef local_114

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
 * Address: 0x10006980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006980(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
    pvVar1 = (*_DAT_0028084c)(size);
    return (uint)pvVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028088c
#define DAT_0028088c (*(uint8_t *)(0x28088cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028088c
#define _DAT_0028088c (*(code * *)(0x28088cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100069d0(char *path)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x8f < _DAT_00280808 && (_DAT_0028088c != (code *)0x0)))) {
    (*_DAT_0028088c)(path);
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028088c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028088c

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
 * Address: 0x10006a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10006a20(char *path,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)))) {
    iVar1 = (*_DAT_00280838)(path,data,size);
    return iVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
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
 * Address: 0x10006a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006a70(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
    (*_DAT_00280850)(pointer);
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
