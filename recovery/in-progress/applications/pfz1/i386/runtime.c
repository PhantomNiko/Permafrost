/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000a034
#define DAT_1000a034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e4U)))
#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000760
 */

/* WARNING: Removing unreachable block (ram,0x1000079c) */

void recovered_10000760(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000a034 = 0;
    recovered_100007c0();
    DAT_1000a03c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000a034
#undef DAT_1000a03c

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000a034
#define DAT_1000a034 (*(char *)(((uintptr_t)pf_module_state + 0x9e4U)))
#undef DAT_1000a038
#define DAT_1000a038 (*(int *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a040
#define DAT_1000a040 (*(int *)(((uintptr_t)pf_module_state + 0x9f0U)))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100007c0(void)

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
  if (DAT_1000a034 != '\0') {
    return;
  }
  DAT_1000a038 = 0;
  DAT_1000a040 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_1000082b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_1000082b:
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
        if (iVar9 == 0) goto LAB_10000980;
      }
      do {
        recovered_10004b20((int *)local_9c);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000a038 != 0) goto LAB_100009bb;
    }
  }
LAB_10000980:
  recovered_10004b20((int *)local_9c);
LAB_100009bb:
  if (DAT_1000a040 == 0) {
    DAT_1000a040 = DAT_1000a038;
  }
  DAT_1000a034 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000a034
#undef DAT_1000a038
#undef DAT_1000a040
#undef _DAT_0028008c
#undef local_9c

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e0
 */

/* WARNING: Removing unreachable block (ram,0x10000a2c) */

void recovered_100009e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000a50(param_3);
    DAT_1000a03c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000a03c

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000a038
#define DAT_1000a038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a040
#define DAT_1000a040 (*(int * *)(((uintptr_t)pf_module_state + 0x9f0U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a50
 */

bool recovered_10000a50(int param_1)

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
    recovered_100007c0();
    local_18 = DAT_1000a038;
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
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10000b50;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10000b50:
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
      piVar1 = DAT_1000a038;
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
    piVar5 = (int *)&DAT_1000a038;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10004b20(&local_1c);
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
    if (DAT_1000a040 == (int *)0x0) {
      DAT_1000a040 = DAT_1000a038;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_1000a038
#undef DAT_1000a040
#undef local_1c
#undef local_18

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c90
 */

/* WARNING: Removing unreachable block (ram,0x10000cdc) */

void recovered_10000c90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000a50(1);
    DAT_1000a03c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000a03c

#undef DAT_1000a038
#define DAT_1000a038 (*(int * *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d10
 */

/* WARNING: Removing unreachable block (ram,0x10000d4c) */

int recovered_10000d10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100007c0();
  iVar1 = 0;
  for (piVar2 = DAT_1000a038; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_1000a03c = 0;
  return iVar1;
}

#undef DAT_1000a038
#undef DAT_1000a03c

#undef DAT_1000a038
#define DAT_1000a038 (*(int *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d90
 */

/* WARNING: Removing unreachable block (ram,0x10000dcc) */

void recovered_10000d90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100007c0();
  for (iVar1 = DAT_1000a038; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000a03c = 0;
  return;
}

#undef DAT_1000a038
#undef DAT_1000a03c

#undef DAT_1000a038
#define DAT_1000a038 (*(int * *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e10
 */

/* WARNING: Removing unreachable block (ram,0x10000e4c) */

int recovered_10000e10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100007c0();
  iVar2 = 0;
  for (piVar1 = DAT_1000a038; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_1000a03c = 0;
  return iVar2;
}

#undef DAT_1000a038
#undef DAT_1000a03c

#undef DAT_1000a038
#define DAT_1000a038 (*(int *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e80
 */

/* WARNING: Removing unreachable block (ram,0x10000ebc) */

void recovered_10000e80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100007c0();
  for (iVar1 = DAT_1000a038; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000a03c = 0;
  return;
}

#undef DAT_1000a038
#undef DAT_1000a03c

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f00
 */

/* WARNING: Removing unreachable block (ram,0x10000f4c) */

void recovered_10000f00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000f70((uint *)0xffffffff);
    DAT_1000a03c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000a03c

#undef DAT_1000a038
#define DAT_1000a038 (*(uint * *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a040
#define DAT_1000a040 (*(uint * *)(((uintptr_t)pf_module_state + 0x9f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f70
 */

uint * recovered_10000f70(uint *param_1)

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
    recovered_100007c0();
    puVar3 = DAT_1000a038;
    puVar4 = DAT_1000a040;
    if (DAT_1000a040 == (uint *)0x0) {
      puVar4 = DAT_1000a038;
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
              if (uVar8 < uVar10) goto LAB_10001052;
            }
          }
          else {
LAB_10001052:
            if ((uVar9 - 1 <= (uint)((int)param_1 - (int)puVar7) && puVar7 <= param_1) &&
               (uVar9 <= uVar10 - uVar8 && uVar8 <= uVar10)) {
              if (uVar9 - 1 < uVar10) {
                bVar2 = 0xffffffef < uVar10;
                if ((uint)(uVar10 - uVar9 < 0x20) <= -(uint)(uVar10 < uVar9)) {
                  bVar2 = 0xffffffdf < uVar9;
                }
                if (!bVar2) {
                  if (uVar8 == 0) {
LAB_10001134:
                    if ((bool)(~(uVar10 < uVar9) & 0x1f < uVar10 - uVar9)) {
                      DAT_1000a040 = (uint *)((int)puVar6 + uVar9 + 0x10);
                      *(uint *)((int)puVar6 + uVar9 + 0x10) = (uVar10 - uVar9) - 0x10;
                      uVar10 = puVar6[1];
                      *(uint *)((int)puVar6 + uVar9 + 0x14) = uVar10;
                      *(uint **)((int)puVar6 + uVar9 + 0x18) = puVar6;
                      *(undefined1 *)((int)puVar6 + uVar9 + 0x1c) = 1;
                      if (uVar10 != 0) {
                        *(uint **)(uVar10 + 8) = DAT_1000a040;
                      }
                      *puVar6 = uVar9;
                      puVar6[1] = (uint)DAT_1000a040;
                    }
                    else {
                      DAT_1000a040 = (uint *)puVar6[1];
                    }
                    *(undefined1 *)(puVar6 + 3) = 0;
                    if (DAT_1000a040 == (uint *)0x0) {
                      DAT_1000a040 = DAT_1000a038;
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
                      puVar6 = recovered_10004cc0();
                      if (puVar6 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar10 = *puVar6;
                      goto LAB_10001134;
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

#undef DAT_1000a038
#undef DAT_1000a040

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

/* WARNING: Removing unreachable block (ram,0x100011ec) */

void recovered_100011a0(undefined4 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000f70(param_2);
    DAT_1000a03c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000a03c

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001210
 */

/* WARNING: Removing unreachable block (ram,0x1000125c) */

uint * recovered_10001210(undefined4 param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10000f70((uint *)param_3);
  }
  DAT_1000a03c = 0;
  return puVar2;
}

#undef DAT_1000a03c

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

/* WARNING: Removing unreachable block (ram,0x100012cc) */

void recovered_10001280(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_100012f0();
    DAT_1000a03c = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000a03c

#undef DAT_1000a040
#define DAT_1000a040 (*(uint * *)(((uintptr_t)pf_module_state + 0x9f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f0
 */

void recovered_100012f0(void)

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
  recovered_100007c0();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000a040 == puVar3) {
        DAT_1000a040 = puVar2;
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
      DAT_1000a040 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000a040 = puVar2;
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
        if (DAT_1000a040 == puVar2) {
          DAT_1000a040 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000a040 = puVar2;
  return;
}

#undef DAT_1000a040

#undef DAT_1000a03c
#define DAT_1000a03c (*(int *)(((uintptr_t)pf_module_state + 0x9ecU)))
#undef DAT_1000a040
#define DAT_1000a040 (*(uint * *)(((uintptr_t)pf_module_state + 0x9f0U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001410
 */

/* WARNING: Removing unreachable block (ram,0x1000145c) */

undefined4 * recovered_10001410(undefined4 *param_1,uint param_2)

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

  iVar1 = DAT_1000a03c;
  { __typeof__(DAT_1000a03c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000a03c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar9 = recovered_10000f70((uint *)0xffffffff);
    DAT_1000a03c = 0;
    return puVar9;
  }
  if (param_2 == 0) {
    recovered_100012f0();
    DAT_1000a03c = 0;
    return (undefined4 *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_1000a03c = 0;
    return (undefined4 *)0x0;
  }
  recovered_100007c0();
  uVar8 = param_2 + 0xf & 0xfffffff0;
  puVar9 = param_1 + -4;
  uVar6 = param_1[-4];
  if (uVar8 <= uVar6) {
    if (uVar6 <= uVar8 - 1) {
      DAT_1000a03c = 0;
      return (undefined4 *)0x0;
    }
    uVar2 = uVar6 - uVar8;
    bVar10 = 0xffffffdf < uVar8;
    if (-(uint)(uVar6 < uVar8) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar6;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_1000a03c = 0;
        return param_1;
      }
      DAT_1000a040 = (uint *)((int)param_1 + uVar8);
      *(uint *)((int)param_1 + uVar8) = uVar2 - 0x10;
      iVar1 = param_1[-3];
      *(int *)((int)param_1 + uVar8 + 4) = iVar1;
      *(uint **)((int)param_1 + uVar8 + 8) = puVar9;
      *(undefined1 *)((int)param_1 + uVar8 + 0xc) = 1;
      if (iVar1 != 0) {
        *(uint **)(iVar1 + 8) = DAT_1000a040;
      }
      param_1[-4] = uVar8;
      param_1[-3] = DAT_1000a040;
      DAT_1000a03c = 0;
      return param_1;
    }
    DAT_1000a03c = 0;
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
      local_20 = DAT_1000a040;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar6 ||
            (((uint *)(uVar6 + (int)param_1) != puVar3 || (-uVar6 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar9;
          DAT_1000a040 = puVar9;
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
        DAT_1000a03c = 0;
        return (undefined4 *)0x0;
      }
      uVar4 = recovered_10004d20();
      if ((char)uVar4 != '\0') {
        DAT_1000a040 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000a03c = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10000f70((uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_1000a03c = 0;
    return (undefined4 *)0x0;
  }
  if (*puVar9 < uVar8) {
    uVar8 = *puVar9;
  }
  puVar9 = puVar3;
  if (uVar8 < 8) {
LAB_10001685:
    if (uVar8 == 0) goto LAB_1000169c;
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
    goto LAB_10001685;
  }
  uVar6 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar6) = *(undefined1 *)((int)param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar8 != uVar6);
LAB_1000169c:
  recovered_100012f0();
  DAT_1000a03c = 0;
  return puVar3;
}

#undef DAT_1000a03c
#undef DAT_1000a040
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017b0
 */

undefined8 recovered_100017b0(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_100017eb;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_100017eb;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_100017eb:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001800
 */

undefined8 recovered_10001800(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001850
 */

undefined8 recovered_10001850(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001890
 */

undefined8 recovered_10001890(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001980
 */

undefined8 recovered_10001980(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100019f0
 */

undefined8 recovered_100019f0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001b40
 */

undefined8 recovered_10001b40(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001c10
 */

void recovered_10001c10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c30
 */

int recovered_10001c30(int param_1)

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
 * Address: 0x10001c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10001c50(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
    pvVar1 = (*_DAT_0028084c)(param_1);
    return pvVar1;
  }
  return (void *)0x0;
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
 * Address: 0x10001ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ca0(void *param_1)

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
 * Address: 0x10001cf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10001cf0(void *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && (_DAT_00280854 != (code *)0x0)))) {
    pvVar1 = (*_DAT_00280854)(param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
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
 * Address: 0x10001d40
 */

void recovered_10001d40(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001d6a;
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
LAB_10001d6a:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e00
 */

undefined4 * recovered_10001e00(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10001fd0
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_10001fd0(byte *param_1,byte param_2,uint param_3)

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
 * Address: 0x10002080
 */

void recovered_10002080(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002120
 */

void recovered_10002120(undefined4 *param_1,uint param_2)

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
 * Address: 0x100021c0
 */

char * recovered_100021c0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10002200
 */

int recovered_10002200(uint *param_1,uint *param_2,uint param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_1000229e;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_100022b5;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_100022e6:
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
      if (uVar7 != uVar8) goto LAB_100022e6;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_100022e6;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_100022e6;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002330();
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_1000229e:
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
LAB_100022b5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002330
 */

int recovered_10002330(void)

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
 * Address: 0x10002380
 */

bool recovered_10002380(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023a0
 */

bool recovered_100023a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c0
 */

bool recovered_100023c0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023e0
 */

bool recovered_100023e0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002410
 */

bool recovered_10002410(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002430
 */

bool recovered_10002430(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002450
 */

int recovered_10002450(int param_1)

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
 * Address: 0x10002470
 */

int recovered_10002470(int param_1)

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
 * Address: 0x10002490
 */

int recovered_10002490(int param_1)

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
 * Address: 0x100024d0
 */

int recovered_100024d0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002506;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002506:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002510
 */

int recovered_10002510(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002546;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002546:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002550
 */

void recovered_10002550(int param_1,int param_2)

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
 * Address: 0x10002580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002580(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002698;
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
LAB_10002698:
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
 * Address: 0x100026c0
 */

char * recovered_100026c0(char *param_1,char param_2)

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
 * Address: 0x10002700
 */

int recovered_10002700(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000274b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000274b;
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
 * Address: 0x10002760
 */

int recovered_10002760(char *param_1,char *param_2)

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
 * Address: 0x100027c0
 */

char * recovered_100027c0(char *param_1,char *param_2)

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
 * Address: 0x10002810
 */

char * recovered_10002810(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002853;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002853:
  return pcVar3;
}


#undef DAT_100096f0
#define DAT_100096f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002860
 */

undefined * recovered_10002860(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100096f0;
}

#undef DAT_100096f0

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

undefined ** recovered_10002880(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000a000;
}

#undef PTR_DAT_1000a000

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
 * Address: 0x100028a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100028a0(undefined4 *param_1)

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

#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002940
 */

longdouble recovered_10002940(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_10009650;
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

#undef DAT_10009650

#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002990
 */

void recovered_10002990(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_10009650;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_10009650 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_10009650);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_10009650

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a50
 */

longdouble recovered_10002a50(double param_1,double param_2)

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
 * Address: 0x10002ab0
 */

longdouble recovered_10002ab0(double param_1,double param_2)

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
 * Address: 0x10002b40
 */

longdouble recovered_10002b40(double param_1)

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
 * Address: 0x10002b90
 */

longdouble recovered_10002b90(double param_1)

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
 * Address: 0x10002bf0
 */

void recovered_10002bf0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10009654
#define DAT_10009654 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10009658
#define DAT_10009658 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000965c
#define DAT_1000965c (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10009660
#define DAT_10009660 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10009664
#define DAT_10009664 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10009668
#define DAT_10009668 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000966c
#define DAT_1000966c (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10009670
#define DAT_10009670 (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10009674
#define DAT_10009674 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10009678
#define DAT_10009678 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000967c
#define DAT_1000967c (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10009680
#define DAT_10009680 (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_100096a8
#define DAT_100096a8 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

longdouble recovered_10002cf0(double param_1)

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
    lVar2 = (longdouble)DAT_10009654;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_10009658 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_10009650;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_10009658 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000965c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000965c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_10009680 +
            lVar9 / (longdouble)DAT_1000967c +
            lVar8 / (longdouble)DAT_10009678 +
            lVar7 / (longdouble)DAT_10009674 +
            lVar6 / (longdouble)DAT_10009670 +
            lVar5 / (longdouble)DAT_1000966c +
            lVar4 / (longdouble)DAT_10009668 +
            lVar3 / (longdouble)DAT_10009664 +
            (lVar10 * lVar2) / (longdouble)DAT_10009660 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_100096a8;
  }
  return lVar2;
}

#undef DAT_10009650
#undef DAT_10009654
#undef DAT_10009658
#undef DAT_1000965c
#undef DAT_10009660
#undef DAT_10009664
#undef DAT_10009668
#undef DAT_1000966c
#undef DAT_10009670
#undef DAT_10009674
#undef DAT_10009678
#undef DAT_1000967c
#undef DAT_10009680
#undef DAT_100096a8

#undef DAT_100096d0
#define DAT_100096d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e00
 */

longlong recovered_10002e00(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_100096d0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_100096d0

#undef DAT_10009684
#define DAT_10009684 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10009688
#define DAT_10009688 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000968c
#define DAT_1000968c (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_100096b0
#define DAT_100096b0 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_100096b8
#define DAT_100096b8 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_100096c0
#define DAT_100096c0 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_100096c8
#define DAT_100096c8 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e60
 */

longdouble recovered_10002e60(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_100096b0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_100096b8;
    } while ((longdouble)DAT_100096b0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_100096c0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_100096c8;
    } while (lVar1 < (longdouble)DAT_100096c0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000968c +
         (lVar2 * lVar2) / (longdouble)DAT_10009688 +
         (longdouble)1 + lVar2 / (longdouble)DAT_10009684) * lVar1;
}

#undef DAT_10009684
#undef DAT_10009688
#undef DAT_1000968c
#undef DAT_100096b0
#undef DAT_100096b8
#undef DAT_100096c0
#undef DAT_100096c8

#undef DAT_10009690
#define DAT_10009690 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10009694
#define DAT_10009694 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10009698
#define DAT_10009698 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_100096b0
#define DAT_100096b0 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_100096b8
#define DAT_100096b8 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_100096c0
#define DAT_100096c0 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_100096c8
#define DAT_100096c8 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

longdouble recovered_10002ef0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_100096b0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_100096b8;
    } while ((longdouble)DAT_100096b0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_100096c0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_100096c8;
    } while (lVar1 < (longdouble)DAT_100096c0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_10009698 +
         (lVar1 * lVar1) / (longdouble)DAT_10009694 +
         (longdouble)1 + lVar1 * (longdouble)DAT_10009690;
}

#undef DAT_10009690
#undef DAT_10009694
#undef DAT_10009698
#undef DAT_100096b0
#undef DAT_100096b8
#undef DAT_100096c0
#undef DAT_100096c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f80
 */

longdouble recovered_10002f80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1000969c
#define DAT_1000969c (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa0
 */

undefined8 recovered_10002fa0(double param_1)

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
    dVar3 = (double)DAT_1000969c;
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
      dVar3 = dVar3 * (double)DAT_10009650;
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

#undef DAT_10009650
#undef DAT_1000969c

#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_1000969c
#define DAT_1000969c (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

undefined8 recovered_10003060(double param_1)

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
    dVar2 = (double)DAT_1000969c;
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
      dVar2 = dVar2 * (double)DAT_10009650;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_10009650
#undef DAT_1000969c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030f0
 */

void recovered_100030f0(uint param_1,uint param_2)

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
 * Address: 0x10003160
 */

void recovered_10003160(uint param_1,uint param_2)

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
 * Address: 0x10003220
 */

void recovered_10003220(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003290
 */

void recovered_10003290(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_10009650;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_10009650 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_10009650);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_10009650

#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003380
 */

longdouble recovered_10003380(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_10009650;
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

#undef DAT_10009650

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e0
 */

longdouble recovered_100033e0(float param_1,float param_2)

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
 * Address: 0x10003480
 */

longdouble recovered_10003480(float param_1)

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
 * Address: 0x100034e0
 */

longdouble recovered_100034e0(float param_1)

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
 * Address: 0x10003550
 */

longdouble recovered_10003550(double param_1)

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
 * Address: 0x100035c0
 */

longdouble recovered_100035c0(float param_1)

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
 * Address: 0x10003630
 */

longdouble recovered_10003630(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002bf0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10009658
#define DAT_10009658 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000965c
#define DAT_1000965c (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003650
 */

void recovered_10003650(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_10009658 < param_1) {
      do {
        param_1 = param_1 * DAT_10009650;
      } while (DAT_10009658 < param_1);
    }
    for (; param_1 < DAT_1000965c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_10009650
#undef DAT_10009658
#undef DAT_1000965c

#undef DAT_100096d0
#define DAT_100096d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

undefined4 recovered_10003770(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_100096d0 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_100096d0
#undef local_10

#undef DAT_10009684
#define DAT_10009684 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10009688
#define DAT_10009688 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000968c
#define DAT_1000968c (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_100096b0
#define DAT_100096b0 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_100096b8
#define DAT_100096b8 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_100096c0
#define DAT_100096c0 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_100096c8
#define DAT_100096c8 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037c0
 */

longdouble recovered_100037c0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_100096b0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_100096b8;
    } while ((float)DAT_100096b0 < param_1);
  }
  if (param_1 < (float)DAT_100096c0) {
    do {
      param_1 = param_1 + (float)DAT_100096c8;
    } while (param_1 < (float)DAT_100096c0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000968c +
          (fVar1 * fVar1) / DAT_10009688 + fVar1 / DAT_10009684 + 1.0) * param_1);
}

#undef DAT_10009684
#undef DAT_10009688
#undef DAT_1000968c
#undef DAT_100096b0
#undef DAT_100096b8
#undef DAT_100096c0
#undef DAT_100096c8

#undef DAT_10009690
#define DAT_10009690 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10009694
#define DAT_10009694 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10009698
#define DAT_10009698 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_100096b0
#define DAT_100096b0 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_100096b8
#define DAT_100096b8 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_100096c0
#define DAT_100096c0 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_100096c8
#define DAT_100096c8 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003850
 */

longdouble recovered_10003850(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_100096b0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_100096b8;
    } while ((float)DAT_100096b0 < param_1);
  }
  if (param_1 < (float)DAT_100096c0) {
    do {
      param_1 = param_1 + (float)DAT_100096c8;
    } while (param_1 < (float)DAT_100096c0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_10009698 +
         (fVar1 * fVar1) / DAT_10009694 + fVar1 * DAT_10009690 + 1.0);
}

#undef DAT_10009690
#undef DAT_10009694
#undef DAT_10009698
#undef DAT_100096b0
#undef DAT_100096b8
#undef DAT_100096c0
#undef DAT_100096c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e0
 */

longdouble recovered_100038e0(float param_1)

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
 * Address: 0x10003900
 */

int recovered_10003900(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10003a50
 */

int recovered_10003a50(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_10009650
#define DAT_10009650 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100096a0
#define DAT_100096a0 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ba0
 */

longdouble recovered_10003ba0(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_100096a0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_100096a0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_100096a0;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003c73;
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
LAB_10003c73:
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
              lVar10 = lVar10 * (longdouble)DAT_10009650;
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

#undef DAT_10009650
#undef DAT_100096a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d60
 */

longdouble recovered_10003d60(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003ba0(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_100096a0
#define DAT_100096a0 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef str_100096f2
#define str_100096f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2U)))
#undef str_100096fc
#define str_100096fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacU)))
#undef str_1000970d
#define str_1000970d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdU)))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

int recovered_10003d90(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10003e23;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10003e23;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10003e85;
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
LAB_10003e85:
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
      goto LAB_10003f6c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10003f78;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_10003f6c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10003f78;
    case 0x7a:
      cVar7 = '\x05';
LAB_10003f78:
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
        goto LAB_10004289;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004289:
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
        abStack_51[iVar12 + 1] = str_1000970d[uVar15 + uVar9 * -10];
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
      goto LAB_10003dd8;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10003e23;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_100043b7;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_100043b7;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_100043b7:
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
      pcVar14 = str_1000970d;
      if (*param_3 == 0x58) {
        pcVar14 = str_100096fc;
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
LAB_1000438c:
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
LAB_10003e23:
      local_c0 = local_c0 + 1;
LAB_10003e24:
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
                        goto LAB_100044c5;
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
LAB_100044c5:
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
          abStack_51[iVar12 + 1] = str_1000970d[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_100096a0;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_100096a0;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_100096a0;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_100096a0;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_100096a0);
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
        abStack_51[iVar12 + 1] = str_1000970d[uVar8 & 0xf];
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
      goto LAB_10003e24;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_100096f2;
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
      goto LAB_1000438c;
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
        goto LAB_1000459f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_1000459f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_1000459f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000970d[uVar8 + uVar9 * -10];
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
LAB_10003dd8:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_100096a0
#undef str_100096f2
#undef str_100096fc
#undef str_1000970d
#undef local_80
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef abStack_51

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004af0
 */

void recovered_10004af0(byte *param_1,uint param_2,byte *param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003d90(param_1,param_2,param_3,(double *)&param_4);
  return;
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
#undef DAT_1000a038
#define DAT_1000a038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9e8U)))
#undef DAT_1000a040
#define DAT_1000a040 (*(int * *)(((uintptr_t)pf_module_state + 0x9f0U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004b20(int *param_1)

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
        if (DAT_1000a038 == 0) {
          puVar2 = &DAT_1000a038;
        }
        *puVar2 = piVar4;
        *param_1 = (int)piVar4;
        if (DAT_1000a040 == (int *)0x0) {
          DAT_1000a040 = piVar4;
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
    if (DAT_1000a038 == 0) {
      puVar2 = &DAT_1000a038;
    }
    *puVar2 = 0x10000000;
    *param_1 = 0x10000000;
    if (DAT_1000a040 != (int *)0x0) {
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
    if (DAT_1000a038 == 0) {
      puVar2 = &DAT_1000a038;
    }
    *puVar2 = piVar4;
    *param_1 = (int)piVar4;
    if (DAT_1000a040 != (int *)0x0) {
      return;
    }
  }
  DAT_1000a040 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000a038
#undef DAT_1000a040
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cc0
 */

uint * recovered_10004cc0(void)

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
 * Address: 0x10004d20
 */

undefined4 recovered_10004d20(void)

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
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_002808bc
#define DAT_002808bc (*(uint8_t *)(0x2808bcU))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280910
#define DAT_00280910 (*(uint8_t *)(0x280910U))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef DAT_1000983e
#define DAT_1000983e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eeU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_002808bc
#define _DAT_002808bc (*(code * *)(0x2808bcU))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(code * *)(0x2808c8U))
#undef _DAT_00280910
#define _DAT_00280910 (*(code * *)(0x280910U))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(code * *)(0x280a18U))
#undef str_1000971e
#define str_1000971e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
#undef str_1000972f
#define str_1000972f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdfU)))
#undef str_10009736
#define str_10009736 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6U)))
#undef str_1000973e
#define str_1000973e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_10009749
#define str_10009749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf9U)))
#undef str_10009767
#define str_10009767 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117U)))
#undef str_10009770
#define str_10009770 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_10009778
#define str_10009778 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_100097b7
#define str_100097b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x167U)))
#undef str_100097be
#define str_100097be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_1000981a
#define str_1000981a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1caU)))
#undef str_10009841
#define str_10009841 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f1U)))
#undef str_10009860
#define str_10009860 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x210U)))
#undef str_1000988b
#define str_1000988b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23bU)))
#undef str_100098bd
#define str_100098bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_100098ec
#define str_100098ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_1000990c
#define str_1000990c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bcU)))
#undef str_10009915
#define str_10009915 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c5U)))
#undef str_1000994c
#define str_1000994c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#undef str_10009990
#define str_10009990 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
#undef str_100099b5
#define str_100099b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x365U)))
#undef str_100099d9
#define str_100099d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x389U)))
#undef str_100099f5
#define str_100099f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a5U)))
#undef str_10009a1e
#define str_10009a1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ceU)))
#define local_9c (*(uint *)(pf_stack_frame + 116))
#define local_98 (*(int *)(pf_stack_frame + 120))
#define local_f8 (*(char * *)(pf_stack_frame + 24))
#define local_f0 (*(char * *)(pf_stack_frame + 32))
#define local_ec (*(char * *)(pf_stack_frame + 36))
#define local_e8 (*(char * *)(pf_stack_frame + 40))
#define local_e0 (*(byte * *)(pf_stack_frame + 48))
#define local_d4 (*(uint *)(pf_stack_frame + 60))
#define local_d0 (*(int *)(pf_stack_frame + 64))
#define local_cc (*(int *)(pf_stack_frame + 68))
#define local_c8 (*(char * *)(pf_stack_frame + 72))
#define local_c4 (*(char * *)(pf_stack_frame + 76))
#define local_c0 (*(uint *)(pf_stack_frame + 80))
#define local_bc (*(char * *)(pf_stack_frame + 84))
#define local_b8 (*(uint *)(pf_stack_frame + 88))
#define local_b4 (*(byte *)(pf_stack_frame + 92))
#define local_b0 (*(char * *)(pf_stack_frame + 96))
#define local_ac (*(uint *)(pf_stack_frame + 100))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 104))
#define local_a4 (*(char * *)(pf_stack_frame + 108))
#define local_a0 (*(char * *)(pf_stack_frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004d80(int param_1,int param_2)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint *puVar2;
  char *arg_ecx;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined3 extraout_var = 0;
  char *pcVar13;
  byte bVar14;
  int iVar15;

  local_f0 = str_10009778;
  pcVar11 = local_f0;
  if (param_1 < 2 || param_2 == 0) {
LAB_10004ede:
    local_f0 = pcVar11;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(str_100097b7);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
      (*_DAT_00280828)(local_f0);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(str_100097be);
    }
    return 1;
  }
  iVar15 = 1;
  local_f8 = (char *)0x0;
  local_a4 = str_1000971e;
  local_e8 = str_10009749;
  local_e0 = (byte *)0x0;
  local_ec = (char *)0x0;
  do {
    puVar2 = *(uint **)(param_2 + iVar15 * 4);
    pcVar11 = local_a4;
    if ((puVar2 == (uint *)0x0) ||
       (uVar5 = recovered_10002490((int)puVar2), pcVar11 = local_e8, uVar5 < 6)) goto LAB_10004ede;
    iVar6 = recovered_10002200(puVar2,(uint *)str_1000972f,6);
    if (iVar6 == 0 && local_f8 == (char *)0x0) {
      local_f8 = (char *)((int)puVar2 + 6);
    }
    else {
      pcVar11 = local_e8;
      if (uVar5 == 6) goto LAB_10004ede;
      iVar6 = recovered_10002200(puVar2,(uint *)str_10009736,7);
      if (iVar6 == 0 && local_ec == (char *)0x0) {
        local_ec = (char *)((int)puVar2 + 7);
      }
      else {
        pcVar11 = local_e8;
        if (((uVar5 < 10) ||
            (iVar6 = recovered_10002200(puVar2,(uint *)str_1000973e,10), pcVar11 = local_e8,
            iVar6 != 0)) || (pcVar11 = local_e8, local_e0 != (byte *)0x0)) goto LAB_10004ede;
        local_e0 = (byte *)((int)puVar2 + 10);
      }
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < param_1);
  pcVar11 = local_f0;
  if (((local_f8 == (char *)0x0) || (local_ec == (char *)0x0 || *local_f8 == '\0')) ||
     ((local_e0 == (byte *)0x0 || *local_ec == '\0' ||
      ((iVar15 = recovered_100024d0(local_e0,(byte *)str_10009767), iVar15 != 0 &&
       (iVar15 = recovered_100024d0(local_e0,(byte *)str_10009770), iVar15 != 0))))))
  goto LAB_10004ede;
  local_c4 = local_f8;
  local_c8 = local_ec;
  local_d0 = -1;
  if ((_DAT_00280800 == 0x50414d57) &&
     ((((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0xbf < _DAT_00280808)) &&
      (_DAT_002808bc != (code *)0x0)))) {
    local_d0 = (*_DAT_002808bc)();
  }
  local_cc = local_d0;
  recovered_100059a0(local_f8,&local_cc,&local_c4);
  recovered_100059a0(local_ec,&local_d0,&local_c8);
  pcVar10 = local_c4;
  pcVar11 = local_c8;
  iVar6 = local_cc;
  iVar15 = local_d0;
  if (local_d0 == 0x7fffffff || local_cc == 0x7fffffff) {
    pcVar13 = str_1000981a;
  }
  else {
    iVar7 = recovered_100024d0(local_e0,(byte *)str_10009770);
    if (((iVar6 < 0) && (iVar6 = -1, _DAT_00280800 == 0x50414d57)) &&
       (((_DAT_00280804 != 0 && ((0xb < _DAT_00280808 && (0xbf < _DAT_00280808)))) &&
        (_DAT_002808bc != (code *)0x0)))) {
      iVar6 = (*_DAT_002808bc)();
    }
    if ((((iVar15 < 0) && (iVar15 = -1, _DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
       (((0xb < _DAT_00280808 && (0xbf < _DAT_00280808)) && (_DAT_002808bc != (code *)0x0)))) {
      iVar15 = (*_DAT_002808bc)();
    }
    recovered_10001fd0((byte *)&local_a0,0,0x8c);
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        (((0x113 < _DAT_00280808 && (_DAT_00280910 != (code *)0x0)) &&
         (iVar8 = (*_DAT_00280910)(iVar6,&local_a0), iVar3 = local_98, iVar8 != 0)))))) {
      pcVar13 = str_1000988b;
      if ((((local_98 != 0) &&
           (recovered_10001fd0((byte *)&local_a0,0,0x8c), _DAT_00280800 == 0x50414d57)) &&
          ((_DAT_00280804 != 0 && ((0xb < _DAT_00280808 && (0x113 < _DAT_00280808)))))) &&
         ((_DAT_00280910 != (code *)0x0 &&
          ((iVar9 = (*_DAT_00280910)(iVar15,&local_a0), iVar8 = local_98, iVar9 != 0 &&
           (local_98 != 0)))))) {
        pcVar10 = recovered_10005bb0(pcVar10);
        pcVar11 = recovered_10005bb0(pcVar11);
        local_98 = 0;
        local_9c = 0;
        local_a0 = (char *)0x0;
        local_a8 = 0;
        local_ac = 0;
        local_b0 = (char *)0x0;
        pcVar13 = str_100098bd;
        if ((pcVar10 == (char *)0x0) || (pcVar11 == (char *)0x0)) goto LAB_100057cb;
        if (iVar7 == 0) {
          iVar6 = recovered_10007810(iVar6,pcVar10,(uint *)&local_bc);
          arg_ecx = local_bc;
          if (iVar6 == 0) {
            pcVar13 = str_100099b5;
          }
          else {
            local_b0 = local_bc;
            local_d4 = 0;
            local_c0 = 0;
            pcVar13 = str_100099d9;
            if (((local_b4 & 2) == 0) &&
               (iVar6 = recovered_10007a00(local_bc,local_b8,0xffffffff,(int *)&local_d4),
               iVar6 != 0)) {
              pcVar13 = recovered_10007a60(local_d4);
              local_a0 = pcVar13;
              if (pcVar13 == (char *)0x0) {
                pcVar13 = str_100099f5;
                goto LAB_100057cb;
              }
              bVar4 = recovered_10007ab0(arg_ecx,local_b8,(int)pcVar13,local_d4,&local_c0);
              if (CONCAT31(extraout_var,bVar4) == 0) {
                pcVar13 = str_10009a1e;
                goto LAB_100057cb;
              }
              pcVar13 = recovered_10007de0(iVar15,pcVar11,iVar8 == 0xd,pcVar13,local_c0);
              goto LAB_100057c9;
            }
          }
        }
        else {
          uVar5 = recovered_10002490((int)pcVar11);
          if (uVar5 < 8) {
LAB_1000544f:
            iVar7 = recovered_10002490((int)pcVar11);
            if (iVar7 - 0x2ff9U < 0xffffcffe) {
              pcVar13 = str_100098ec;
              goto LAB_100057cb;
            }
            recovered_10001d40((undefined4 *)(pcVar11 + iVar7),(undefined4 *)str_1000990c,9);
          }
          else {
            bVar1 = pcVar11[uVar5 - 8];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x2e) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 7];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x70) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 6];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x69) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 5];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 99) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 4];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x6f) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 3];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x7a) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 2];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x69) goto LAB_1000544f;
            bVar1 = pcVar11[uVar5 - 1];
            bVar14 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar14 = bVar1;
            }
            if (bVar14 != 0x70) goto LAB_1000544f;
          }
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             ((0x21b < _DAT_00280808 && (_DAT_00280a18 != (code *)0x0)))) {
            iVar7 = (*_DAT_00280a18)(iVar15,pcVar11,&local_bc);
          }
          else {
            if (((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808))))
               && (0xcb < _DAT_00280808)) {
              if (_DAT_002808c8 == (code *)0x0) {
                iVar7 = 0;
              }
              else {
                iVar7 = (*_DAT_002808c8)(iVar15,pcVar11,&local_bc);
              }
            }
            else {
              iVar7 = 0;
              if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
                 && ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
                iVar7 = (*_DAT_00280834)(pcVar11,&local_bc);
              }
            }
            local_bc = (char *)0x0;
          }
          if (iVar7 == 0) {
            pcVar13 = recovered_10005fa0(iVar6,pcVar10,iVar3 == 0xd,(int *)&local_a0);
            if ((pcVar13 == (char *)0x0) &&
               (pcVar13 = recovered_10007040((int)local_a0,local_9c,(int *)&local_b0),
               pcVar13 == (char *)0x0)) {
              iVar6 = recovered_10005eb0(iVar15,pcVar11,(uint *)&local_bc);
              if (iVar6 == 0) {
                iVar15 = recovered_10007770(iVar15,pcVar11,local_b0,local_ac);
                pcVar13 = str_10009990;
                if (iVar15 != 0) {
                  pcVar13 = (char *)0x0;
                }
              }
              else {
                pcVar13 = str_1000994c;
              }
            }
            else {
LAB_100057c9:
            }
          }
          else {
            pcVar13 = str_10009915;
          }
        }
LAB_100057cb:
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
          (*_DAT_00280850)(pcVar10);
        }
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
          (*_DAT_00280850)(pcVar11);
        }
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
          (*_DAT_00280850)(local_a0);
        }
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
          (*_DAT_00280850)(local_b0);
        }
        if (pcVar13 == (char *)0x0) {
          iVar15 = recovered_100024d0(local_e0,(byte *)str_10009770);
          pcVar11 = str_10009860;
          if (iVar15 == 0) {
            pcVar11 = str_10009841;
          }
          if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) {
            return 0;
          }
          if (_DAT_00280808 < 0x2c) {
            return 0;
          }
          uVar12 = 0;
          if (_DAT_00280828 == (code *)0x0) {
            return 0;
          }
          goto LAB_10005554;
        }
      }
    }
    else {
      pcVar13 = str_1000988b;
    }
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(str_100097b7);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(pcVar13);
  }
  uVar12 = 1;
  if (_DAT_00280800 != 0x50414d57) {
    return 1;
  }
  if (_DAT_00280804 == 0) {
    return 1;
  }
  if (_DAT_00280808 < 0xc) {
    return 1;
  }
  if (_DAT_00280808 < 0x2c) {
    return 1;
  }
  if (_DAT_00280828 == (code *)0x0) {
    return 1;
  }
  pcVar11 = &DAT_1000983e;
LAB_10005554:
  (*_DAT_00280828)(pcVar11);
  return uVar12;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280828
#undef DAT_00280834
#undef DAT_00280850
#undef DAT_002808bc
#undef DAT_002808c8
#undef DAT_00280910
#undef DAT_00280a18
#undef DAT_1000983e
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280828
#undef _DAT_00280834
#undef _DAT_00280850
#undef _DAT_002808bc
#undef _DAT_002808c8
#undef _DAT_00280910
#undef _DAT_00280a18
#undef str_1000971e
#undef str_1000972f
#undef str_10009736
#undef str_1000973e
#undef str_10009749
#undef str_10009767
#undef str_10009770
#undef str_10009778
#undef str_100097b7
#undef str_100097be
#undef str_1000981a
#undef str_10009841
#undef str_10009860
#undef str_1000988b
#undef str_100098bd
#undef str_100098ec
#undef str_1000990c
#undef str_10009915
#undef str_1000994c
#undef str_10009990
#undef str_100099b5
#undef str_100099d9
#undef str_100099f5
#undef str_10009a1e
#undef local_9c
#undef local_98
#undef local_f8
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e0
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

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a20
#define DAT_00280a20 (*(uint8_t *)(0x280a20U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a20
#define _DAT_00280a20 (*(code * *)(0x280a20U))
#define local_114 (*(char (*)[276])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100059a0(char *path,int *device,char **relative)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;

  if (path == (char *)0x0) {
    return;
  }
  if (*path != '[') {
    return;
  }
  uVar1 = 0;
  for (iVar8 = 1; (cVar4 = path[iVar8], cVar4 != '\0' && (cVar4 != ']')); iVar8 = iVar8 + 1) {
    if (uVar1 + 1 < 0x80) {
      local_114[uVar1] = cVar4;
      uVar1 = uVar1 + 1;
    }
  }
  local_114[uVar1] = '\0';
  uVar1 = (uint)(cVar4 == ']');
  iVar7 = 0x7fffffff;
  if (uVar1 + iVar8 < 0x82 && cVar4 == ']') {
    pcVar6 = local_114;
    if (local_114[0] == '[') {
      pcVar6 = local_114 + 1;
    }
    for (iVar2 = -0x7f;
        ((cVar4 = pcVar6[iVar2 + 0x7f], cVar4 != '\0' && (cVar4 != ']')) && (iVar2 != 0));
        iVar2 = iVar2 + 1) {
      local_114[iVar2 + 0xff] = cVar4;
    }
    local_114[iVar2 + 0xff] = '\0';
    iVar7 = 0x7fffffff;
    if (local_114[0] == '[') {
      if (cVar4 != ']') goto LAB_10005b16;
      cVar4 = local_114[iVar2 + 0x81];
    }
    if ((cVar4 == '\0') && (local_114[0x80] != '\0')) {
      uVar3 = 1;
      iVar7 = 0;
      iVar2 = -0x7f;
      do {
        if (iVar2 == 0) goto LAB_10005b0e;
        if (local_114[0x80] == '\\') {
          if (iVar7 == 0) goto LAB_10005b0e;
          uVar3 = uVar3 + 1;
          iVar7 = 0;
          if (6 < uVar3) goto LAB_10005b0e;
        }
        else {
          if (((9 < (byte)(local_114[0x80] - 0x30U)) &&
              (uVar5 = CONCAT11(local_114[0x80],local_114[0x80]) & 0xdfff, cVar4 = (char)uVar5,
              0x19 < (byte)((char)(uVar5 >> 8) + 0xbfU))) && ((cVar4 != '_' && (cVar4 != '-'))))
          goto LAB_10005b0e;
          iVar7 = iVar7 + 1;
        }
        local_114[0x80] = local_114[iVar2 + 0x100];
        iVar2 = iVar2 + 1;
      } while (local_114[0x80] != '\0');
      if (uVar3 < 2 || iVar7 == 0) {
LAB_10005b0e:
        iVar7 = 0x7fffffff;
      }
      else {
        iVar7 = 0x7fffffff;
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x223 < _DAT_00280808 && (_DAT_00280a20 != (code *)0x0)))) {
          iVar2 = (*_DAT_00280a20)(0xfffffffe,local_114 + 0x80,0x80);
          iVar7 = 0x7fffffff;
          if (-1 < iVar2) {
            iVar7 = iVar2;
          }
        }
      }
    }
  }
LAB_10005b16:
  if (device != (int *)0x0) {
    *device = iVar7;
  }
  if (relative != (char **)0x0) {
    *relative = path + iVar8 + uVar1;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a20
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a20
#undef local_114

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#define local_30 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10005bb0(char *arg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar9;
  uint uVar4;
  undefined1 *pointer;
  uint uVar5;
  undefined3 uVar10;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  byte in_DL;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  bool bVar15;

  puVar11 = (undefined1 *)0x0;
  if (arg_ecx != (char *)0x0) {
    uVar4 = recovered_10002490((int)arg_ecx);
    if (((((uVar4 < 0x3001) && (*arg_ecx != '[')) && (_DAT_00280800 == 0x50414d57)) &&
        ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
       ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
      pointer = (*_DAT_0028084c)(0x3001);
      if (pointer != (undefined1 *)0x0) {
        *pointer = 0x5c;
        puVar11 = pointer;
        if (*arg_ecx == '\0') {
          pointer[1] = 0;
        }
        else {
          iVar13 = 0;
          uVar4 = 1;
          do {
            iVar14 = iVar13 + -1;
            uVar6 = (uint)(in_DL ^ 1) << 8;
            pcVar7 = arg_ecx + iVar13 + 1;
            do {
              pcVar12 = pcVar7;
              cVar1 = arg_ecx[iVar14 + 1];
              uVar5 = CONCAT31((int3)(uVar6 >> 8),cVar1);
              uVar3 = uVar6 >> 8;
              iVar14 = iVar14 + 1;
              uVar6 = uVar5;
              pcVar7 = pcVar12 + 1;
            } while ((cVar1 == '/' & (byte)uVar3) != 0 || cVar1 == '\\');
            iVar13 = 0;
            while ((uVar6 = uVar5, cVar1 != '\0' && ((uVar5 & 0xff) != 0x5c))) {
              bVar15 = (char)uVar5 == '/';
              uVar10 = (undefined3)(uVar5 >> 8);
              uVar6 = CONCAT31(uVar10,bVar15);
              if ((bVar15 & (byte)(uVar5 >> 8)) != 0) break;
              cVar1 = *pcVar12;
              iVar13 = iVar13 + -1;
              pcVar12 = pcVar12 + 1;
              uVar5 = CONCAT31(uVar10,cVar1);
            }
            bVar9 = (byte)(uVar6 >> 8);
            if (iVar13 == 0) break;
            local_30 = -iVar13;
            pcVar7 = (char *)recovered_100086d0((int)(arg_ecx + iVar14),local_30,in_DL);
            if (pcVar7 == (char *)0x0) {
LAB_10005e5e:
              if (_DAT_00280800 != 0x50414d57) {
                return (undefined1 *)0x0;
              }
              if (_DAT_00280804 == 0) {
                return (undefined1 *)0x0;
              }
              if (_DAT_00280808 < 0xc) {
                return (undefined1 *)0x0;
              }
              if (_DAT_00280808 < 0x54) {
                return (undefined1 *)0x0;
              }
              if (_DAT_00280850 == (code *)0x0) {
                return (undefined1 *)0x0;
              }
              (*_DAT_00280850)(pointer);
              return (undefined1 *)0x0;
            }
            pcVar2 = arg_ecx + iVar14;
            if (in_DL != 0) {
              local_30 = recovered_10002490((int)pcVar7);
              pcVar2 = pcVar7;
            }
            if (0x3001 - uVar4 <= (local_30 + 1) - (uint)(uVar4 < 2)) {
              if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
                 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
                (*_DAT_00280850)(pcVar7);
              }
              goto LAB_10005e5e;
            }
            if (1 < uVar4) {
              pointer[uVar4] = 0x5c;
              uVar4 = uVar4 + 1;
            }
            recovered_10001d40((undefined4 *)(pointer + uVar4),(undefined4 *)pcVar2,local_30);
            if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
               ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))
               ) {
              (*_DAT_00280850)(pcVar7);
            }
            iVar13 = iVar14 - iVar13;
            uVar4 = uVar4 + local_30;
            bVar9 = in_DL ^ 1;
          } while (pcVar12[-1] != '\0');
          pointer[uVar4] = 0;
          if ((1 < uVar4 && bVar9 == 0) &&
             (uVar8 = recovered_10008a10((int)(pointer + 1),uVar4 - 1), (char)uVar8 == '\0')) {
            recovered_10008680(pointer);
            puVar11 = (undefined1 *)0x0;
          }
        }
      }
    }
  }
  return puVar11;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef local_30

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(code * *)(0x2808c8U))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(code * *)(0x280a18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10005eb0(int device,char *path,uint *record)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x21b < _DAT_00280808 && (_DAT_00280a18 != (code *)0x0)))) {
    iVar1 = (*_DAT_00280a18)(device,path,record);
  }
  else {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
      if (_DAT_002808c8 == (code *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*_DAT_002808c8)(device,path,record);
      }
    }
    else {
      iVar1 = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
        iVar1 = (*_DAT_00280834)(path,record);
      }
    }
    if (record != (uint *)0x0) {
      *record = 0;
    }
  }
  return iVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_002808c8
#undef DAT_00280a18
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_002808c8
#undef _DAT_00280a18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280910
#define DAT_00280910 (*(uint8_t *)(0x280910U))
#undef DAT_002809d4
#define DAT_002809d4 (*(uint8_t *)(0x2809d4U))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef DAT_10009a4f
#define DAT_10009a4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ffU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint8_t * *)(0x280834U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_00280854
#define _DAT_00280854 (*(code * *)(0x280854U))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint8_t * *)(0x2808c8U))
#undef _DAT_00280910
#define _DAT_00280910 (*(code * *)(0x280910U))
#undef _DAT_002809d4
#define _DAT_002809d4 (*(code * *)(0x2809d4U))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(code * *)(0x280a18U))
#undef str_10009a54
#define str_10009a54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x404U)))
#undef str_10009a67
#define str_10009a67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x417U)))
#undef str_10009a8b
#define str_10009a8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43bU)))
#undef str_10009aad
#define str_10009aad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45dU)))
#undef str_10009acb
#define str_10009acb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
#undef str_10009aff
#define str_10009aff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4afU)))
#undef str_10009b1c
#define str_10009b1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ccU)))
#undef str_10009b3b
#define str_10009b3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ebU)))
#undef str_10009b67
#define str_10009b67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x517U)))
#undef str_10009b86
#define str_10009b86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x536U)))
#undef str_10009ba0
#define str_10009ba0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x550U)))
#undef str_10009bcb
#define str_10009bcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57bU)))
#undef str_10009bf7
#define str_10009bf7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a7U)))
#undef str_10009c23
#define str_10009c23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d3U)))
#undef str_10009c43
#define str_10009c43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f3U)))
#undef str_10009c78
#define str_10009c78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#define local_ec (*(undefined4 * *)(pf_stack_frame + 68))
#define local_e0 (*(uint *)(pf_stack_frame + 80))
#define local_dc (*(uint *)(pf_stack_frame + 84))
#define local_d8 (*(undefined4 * *)(pf_stack_frame + 88))
#define local_d4 (*(undefined4 * *)(pf_stack_frame + 92))
#define local_d0 (*(uint *)(pf_stack_frame + 96))
#define local_cc (*(undefined4 * *)(pf_stack_frame + 100))
#define local_c8 (*(uint *)(pf_stack_frame + 104))
#define local_c4 (*(uint *)(pf_stack_frame + 108))
#define local_c0 (*(char (*)[192])(pf_stack_frame + 112))
#define local_bb (*(undefined1 *)(pf_stack_frame + 117))
#define local_ba (*(undefined1 *)(pf_stack_frame + 118))
#define local_b9 (*(undefined1 *)(pf_stack_frame + 119))
#define local_b8 (*(uint *)(pf_stack_frame + 120))
#define local_b4 (*(uint *)(pf_stack_frame + 124))
#define local_b0 (*(uint *)(pf_stack_frame + 128))
#define local_ac (*(int *)(pf_stack_frame + 132))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 136))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 140))
#define local_a0 (*(byte (*)[160])(pf_stack_frame + 144))
#define local_98 (*(int *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10005fa0(undefined4 arg_ecx,char *arg_edx,byte param_3,int *param_4)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  undefined4 **path;
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *pointer;
  undefined1 *pointer_00;
  undefined4 *pointer_01;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pointer_02;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  void *pointer_03;
  int *piVar17;
  bool bVar18;
  undefined4 **ppuVar19;
  undefined4 **ppuVar20;
  undefined4 **ppuVar21;

  pcVar3 = arg_edx;
  pcVar10 = arg_edx;
  do {
    while( true ) {
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
      if (cVar2 != '\\') break;
      pcVar3 = pcVar11;
    }
  } while (cVar2 != '\0');
  pcVar10 = &DAT_10009a4f;
  if (*pcVar3 != '\0') {
    pcVar10 = pcVar3;
  }
  uVar4 = recovered_10002490((int)pcVar10);
  pointer = (undefined1 *)recovered_100086d0((int)pcVar10,uVar4,param_3);
  pointer_00 = recovered_10005bb0(arg_edx);
  if (pointer == (undefined1 *)0x0 || pointer_00 == (undefined1 *)0x0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
      (*_DAT_00280850)(pointer);
    }
    pcVar10 = str_10009a54;
    if (_DAT_00280800 != 0x50414d57) {
      return pcVar10;
    }
    if (_DAT_00280804 == 0) {
      return pcVar10;
    }
    if (_DAT_00280808 < 0xc) {
      return pcVar10;
    }
    if (_DAT_00280808 < 0x54) {
      return pcVar10;
    }
    if (_DAT_00280850 == (code *)0x0) {
      return pcVar10;
    }
LAB_100062d2:
    (*_DAT_00280850)(pointer_00);
    return pcVar10;
  }
  if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
     ((_DAT_00280808 < 0xc ||
      (((_DAT_00280808 < 0x50 || (_DAT_0028084c == (code *)0x0)) ||
       (pointer_01 = (*_DAT_0028084c)(0x10), pointer_01 == (undefined4 *)0x0)))))) {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
      (*_DAT_00280850)(pointer_00);
    }
    pcVar10 = str_10009a67;
    if (_DAT_00280800 != 0x50414d57) {
      return pcVar10;
    }
    if (_DAT_00280804 == 0) {
      return pcVar10;
    }
    if (_DAT_00280808 < 0xc) {
      return pcVar10;
    }
    if (_DAT_00280808 < 0x54) {
      return pcVar10;
    }
    if (_DAT_00280850 == (code *)0x0) {
      return pcVar10;
    }
    pointer_00 = pointer;
    goto LAB_100062d2;
  }
  *pointer_01 = 0;
  pointer_01[1] = arg_ecx;
  pointer_01[2] = pointer_00;
  pointer_01[3] = pointer;
  local_a4 = 0;
  local_a8 = 0x31415a50;
  uVar4 = param_4[1];
  pcVar10 = str_10009a8b;
  if (0xfffffff7 < uVar4) goto LAB_10006168;
  uVar6 = uVar4 + 8;
  uVar16 = param_4[2];
  if (uVar16 < uVar6) {
    uVar4 = 0x100;
    if (uVar16 != 0) {
      uVar4 = uVar16;
    }
    for (; uVar4 < uVar6; uVar4 = uVar4 * 2) {
      if ((int)uVar4 < 0) {
        uVar4 = uVar6;
        break;
      }
    }
    if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
       ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0))))))
    goto LAB_10006168;
    pvVar9 = (*_DAT_00280854)((void *)*param_4,uVar4);
    if (pvVar9 == (void *)0x0) goto LAB_10006168;
    *param_4 = (int)pvVar9;
    param_4[2] = uVar4;
    uVar4 = param_4[1];
  }
  else {
    pvVar9 = (void *)*param_4;
  }
  recovered_10001d40((undefined4 *)(uVar4 + (int)pvVar9),&local_a8,8);
  param_4[1] = uVar6;
  iVar14 = 0;
  puVar15 = pointer_01;
  local_d4 = pointer_01;
  do {
    ppuVar21 = (undefined4 **)0xc;
    recovered_10001fd0((byte *)&local_cc,0,0xc);
    path = (undefined4 **)puVar15[2];
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x21b < _DAT_00280808 && (_DAT_00280a18 != (code *)0x0)))) {
      iVar5 = (*_DAT_00280a18)((int)puVar15[1],(char *)path,&local_cc);
    }
    else {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
        if (_DAT_002808c8 != (code *)0x0) {
          ppuVar21 = &local_cc;
          pcVar12 = _DAT_002808c8;
          ppuVar19 = (undefined4 **)puVar15[1];
          ppuVar20 = path;
          goto LAB_10006451;
        }
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
          ppuVar20 = &local_cc;
          pcVar12 = _DAT_00280834;
          ppuVar19 = path;
LAB_10006451:
          iVar5 = (*pcVar12)(ppuVar19,ppuVar20,ppuVar21);
        }
      }
      local_cc = (undefined4 *)0x0;
    }
    uVar4 = local_c4;
    if (iVar5 == 0) {
      pcVar10 = str_10009aad;
      goto LAB_10006168;
    }
    uVar6 = recovered_10002490(puVar15[3]);
    uVar7 = recovered_10008a10(puVar15[3],uVar6);
    if ((char)uVar7 == '\0') {
      pcVar10 = str_10009acb;
      goto LAB_10006168;
    }
    local_c0[0] = '\x02' - ((uVar4 & 2) == 0);
    local_b8 = 0;
    local_c0[1] = '\0';
    local_c0[2] = '\0';
    local_c0[3] = 0;
    local_c0[4] = (char)uVar6;
    local_bb = (undefined1)(uVar6 >> 8);
    local_ba = (undefined1)(uVar6 >> 0x10);
    local_b9 = (undefined1)(uVar6 >> 0x18);
    local_ac = iVar14;
    if ((uVar4 & 2) == 0) {
      local_b8 = local_c8;
      iVar14 = recovered_10007810(puVar15[1],(char *)puVar15[2],(uint *)&local_cc);
      puVar8 = local_cc;
      if (iVar14 == 0) {
        pcVar10 = str_10009aff;
        goto LAB_10006168;
      }
      if (((local_c4 & 2) != 0) || (local_cc == (undefined4 *)0x0 && local_c8 != 0)) {
        pcVar10 = str_10009b1c;
        if (((_DAT_00280800 == 0x50414d57) &&
            (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808)))) &&
           (_DAT_00280850 != (code *)0x0)) {
          (*_DAT_00280850)(local_cc);
        }
        goto LAB_10006168;
      }
      local_b8 = local_c8;
      uVar4 = param_4[1];
      if (uVar4 < 0xfffffff4) {
        uVar16 = uVar4 + 0xc;
        uVar13 = param_4[2];
        if (uVar13 < uVar16) {
          if (uVar13 == 0) {
            uVar13 = 0x100;
          }
          for (; uVar13 < uVar16; uVar13 = uVar13 * 2) {
            if ((int)uVar13 < 0) {
              uVar13 = uVar16;
              break;
            }
          }
          if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
              ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0))))))
             || (pvVar9 = (*_DAT_00280854)((void *)*param_4,uVar13), pvVar9 == (void *)0x0))
          goto LAB_10006dbf;
          *param_4 = (int)pvVar9;
          param_4[2] = uVar13;
          uVar13 = param_4[1];
        }
        else {
          pvVar9 = (void *)*param_4;
          uVar13 = uVar4;
        }
        recovered_10001d40((undefined4 *)(uVar13 + (int)pvVar9),(undefined4 *)local_c0,0xc);
        param_4[1] = uVar16;
        if (-uVar4 - 0xd < uVar6) goto LAB_10006dbf;
        puVar1 = (undefined4 *)puVar15[3];
        uVar16 = uVar16 + uVar6;
        uVar4 = param_4[2];
        if (uVar4 < uVar16) {
          if (uVar4 == 0) {
            uVar4 = 0x100;
          }
          for (; uVar4 < uVar16; uVar4 = uVar4 * 2) {
            if ((int)uVar4 < 0) {
              uVar4 = uVar16;
              break;
            }
          }
          if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
              ((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0)))) ||
             (pvVar9 = (*_DAT_00280854)((void *)*param_4,uVar4), pvVar9 == (void *)0x0))
          goto LAB_10006dbf;
          *param_4 = (int)pvVar9;
          param_4[2] = uVar4;
        }
        if (uVar6 != 0) {
          recovered_10001d40((undefined4 *)(*param_4 + param_4[1]),puVar1,uVar6);
        }
        param_4[1] = uVar16;
        uVar7 = recovered_10008d20((uint *)param_4,puVar8,local_c8);
        cVar2 = (char)uVar7;
      }
      else {
LAB_10006dbf:
        cVar2 = '\0';
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
        (*_DAT_00280850)(puVar8);
      }
      if (cVar2 == '\0') {
        pcVar10 = str_10009b3b;
        goto LAB_10006168;
      }
    }
    else {
      uVar4 = param_4[1];
      pcVar10 = str_10009b3b;
      if (0xfffffff3 < uVar4) goto LAB_10006168;
      uVar16 = uVar4 + 0xc;
      uVar13 = param_4[2];
      if (uVar13 < uVar16) {
        if (uVar13 == 0) {
          uVar13 = 0x100;
        }
        for (; uVar13 < uVar16; uVar13 = uVar13 * 2) {
          if ((int)uVar13 < 0) {
            uVar13 = uVar16;
            break;
          }
        }
        if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
           ((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0)))) goto LAB_10006168;
        pvVar9 = (*_DAT_00280854)((void *)*param_4,uVar13);
        if (pvVar9 == (void *)0x0) goto LAB_10006168;
        *param_4 = (int)pvVar9;
        param_4[2] = uVar13;
        uVar13 = param_4[1];
      }
      else {
        pvVar9 = (void *)*param_4;
        uVar13 = uVar4;
      }
      recovered_10001d40((undefined4 *)(uVar13 + (int)pvVar9),(undefined4 *)local_c0,0xc);
      param_4[1] = uVar16;
      if (-uVar4 - 0xd < uVar6) goto LAB_10006168;
      puVar8 = (undefined4 *)puVar15[3];
      uVar16 = uVar16 + uVar6;
      uVar4 = param_4[2];
      if (uVar4 < uVar16) {
        if (uVar4 == 0) {
          uVar4 = 0x100;
        }
        for (; uVar4 < uVar16; uVar4 = uVar4 * 2) {
          if ((int)uVar4 < 0) {
            uVar4 = uVar16;
            break;
          }
        }
        if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
           ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0))))))
        goto LAB_10006168;
        pvVar9 = (*_DAT_00280854)((void *)*param_4,uVar4);
        pcVar10 = str_10009b3b;
        if (pvVar9 == (void *)0x0) goto LAB_10006168;
        *param_4 = (int)pvVar9;
        param_4[2] = uVar4;
      }
      if (uVar6 != 0) {
        recovered_10001d40((undefined4 *)(*param_4 + param_4[1]),puVar8,uVar6);
      }
      param_4[1] = uVar16;
      local_dc = 0;
      local_e0 = 0;
      local_d0 = 0;
      local_b4 = 0;
      pcVar10 = str_10009b67;
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         ((_DAT_00280808 < 0x1d8 || (_DAT_002809d4 == (code *)0x0)))) goto LAB_10006168;
      iVar14 = (*_DAT_002809d4)(puVar15[1],puVar15[2],0,0,0,0,&local_dc,&local_e0);
      if (iVar14 == 0) goto LAB_10006168;
      if (0x9249249 < local_dc) {
        pcVar10 = str_10009b86;
        goto LAB_10006168;
      }
      pointer_03 = (void *)0x0;
      pvVar9 = (void *)0x0;
      if (local_dc != 0) {
        pvVar9 = recovered_10007a60(local_dc * 0x1c);
      }
      if (local_e0 != 0) {
        pointer_03 = recovered_10007a60(local_e0);
      }
      pcVar10 = str_10009ba0;
      if (pvVar9 == (void *)0x0 && local_dc != 0) {
        bVar18 = false;
      }
      else {
        if (pointer_03 != (void *)0x0 || local_e0 == 0) {
          iVar14 = recovered_10008e00();
          pcVar10 = str_10009bcb;
          if (((iVar14 != 0) && (local_d0 == local_dc)) && (local_b4 <= local_e0)) {
            if (local_d0 != 0) {
              uVar4 = 0;
              do {
                pcVar10 = str_10009bf7;
                if ((*(int *)((int)pvVar9 + uVar4 * 0x1c) == 0) ||
                   (piVar17 = (int *)(uVar4 * 0x1c + (int)pvVar9), piVar17[1] == 0)) {
                  bVar18 = false;
                  goto LAB_10006cab;
                }
                local_b0 = uVar4;
                if (1 < piVar17[4] - 1U) goto LAB_10006ca7;
                iVar14 = piVar17[5];
                recovered_10001fd0(local_a0,0,0x8c);
                if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
                    (_DAT_00280808 < 0xc)) ||
                   (((_DAT_00280808 < 0x114 || (_DAT_00280910 == (code *)0x0)) ||
                    ((iVar14 = (*_DAT_00280910)(iVar14,local_a0), iVar14 == 0 ||
                     (local_ec = (undefined4 *)0x0, local_98 == 0)))))) goto LAB_10006ca7;
                bVar18 = local_98 == 0xd;
                iVar14 = *piVar17;
                uVar4 = recovered_10002490(iVar14);
                puVar8 = (undefined4 *)recovered_100086d0(iVar14,uVar4,bVar18);
                pointer_02 = recovered_10005bb0((char *)piVar17[1]);
                local_d8 = puVar8;
                if (puVar8 != (undefined4 *)0x0) {
                  puVar1 = (undefined4 *)puVar15[3];
                  uVar6 = recovered_10002490((int)puVar8);
                  uVar16 = recovered_10002490((int)puVar1);
                  local_ec = (undefined4 *)0x0;
                  uVar4 = 0;
                  if (uVar16 != 0) {
                    uVar4 = uVar16;
                    do {
                      if (*(char *)((int)puVar1 + (uVar4 - 1)) != '\\') goto LAB_10006b20;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    uVar4 = 0;
                  }
LAB_10006b20:
                  if (((uVar4 < 0x3000) && (uVar6 <= 0x2fff - uVar4)) &&
                     ((_DAT_00280800 == 0x50414d57 &&
                      ((((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x4f < _DAT_00280808)) &&
                       (_DAT_0028084c != (code *)0x0)))))) {
                    puVar8 = (*_DAT_0028084c)(uVar4 + 2 + uVar6);
                    if (puVar8 != (undefined4 *)0x0) {
                      recovered_10001d40(puVar8,puVar1,uVar4);
                      *(undefined1 *)((int)puVar8 + uVar4) = 0x5c;
                      recovered_10001d40((undefined4 *)((int)puVar8 + uVar4 + 1),local_d8,uVar6);
                      *(undefined1 *)((int)puVar8 + uVar6 + uVar4 + 1) = 0;
                      local_ec = puVar8;
                    }
                  }
                }
                if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                   ((0xb < _DAT_00280808 &&
                    ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
                  (*_DAT_00280850)(local_d8);
                }
                if ((pointer_02 == (byte *)0x0) || (local_ec == (undefined4 *)0x0)) {
                  if (((_DAT_00280800 == 0x50414d57) &&
                      (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808))))
                     && (_DAT_00280850 != (code *)0x0)) {
                    (*_DAT_00280850)(pointer_02);
                  }
                  pcVar10 = str_10009c23;
                  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
                     ((0xb < _DAT_00280808 &&
                      ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
                    (*_DAT_00280850)(local_ec);
                  }
                  goto LAB_10006ca7;
                }
                puVar8 = pointer_01;
                if (piVar17[4] == 2) {
                  do {
                    if ((puVar8[1] == piVar17[5]) &&
                       (iVar14 = recovered_100024d0((byte *)puVar8[2],pointer_02), iVar14 == 0)) {
                      recovered_10008680(pointer_02);
                      recovered_10008680(local_ec);
                      pcVar10 = str_10009c43;
                      goto LAB_10006ca7;
                    }
                    puVar8 = (undefined4 *)*puVar8;
                  } while (puVar8 != (undefined4 *)0x0);
                }
                puVar8 = recovered_10008c30(piVar17[5],pointer_02,local_ec);
                if (puVar8 == (undefined4 *)0x0) {
                  pcVar10 = str_10009a67;
                  goto LAB_10006ca7;
                }
                *local_d4 = puVar8;
                uVar4 = local_b0 + 1;
                local_d4 = puVar8;
              } while (uVar4 < local_d0);
            }
            pcVar10 = (char *)0x0;
            bVar18 = true;
            goto LAB_10006cab;
          }
        }
LAB_10006ca7:
        bVar18 = false;
      }
LAB_10006cab:
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
        (*_DAT_00280850)(pvVar9);
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
        (*_DAT_00280850)(pointer_03);
      }
      if (!bVar18) goto LAB_10006168;
    }
    if (local_ac == -1) {
      pcVar10 = str_10009c78;
      goto LAB_10006168;
    }
    iVar14 = local_ac + 1;
    puVar15 = (undefined4 *)*puVar15;
  } while (puVar15 != (undefined4 *)0x0);
  *(int *)(*param_4 + 4) = iVar14;
  pcVar10 = (char *)0x0;
LAB_10006168:
  do {
    puVar15 = (undefined4 *)*pointer_01;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
      (*_DAT_00280850)((void *)pointer_01[2]);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
      (*_DAT_00280850)((void *)pointer_01[3]);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
      (*_DAT_00280850)(pointer_01);
    }
    pointer_01 = puVar15;
  } while (puVar15 != (undefined4 *)0x0);
  return pcVar10;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_00280854
#undef DAT_002808c8
#undef DAT_00280910
#undef DAT_002809d4
#undef DAT_00280a18
#undef DAT_10009a4f
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_00280854
#undef _DAT_002808c8
#undef _DAT_00280910
#undef _DAT_002809d4
#undef _DAT_00280a18
#undef str_10009a54
#undef str_10009a67
#undef str_10009a8b
#undef str_10009aad
#undef str_10009acb
#undef str_10009aff
#undef str_10009b1c
#undef str_10009b3b
#undef str_10009b67
#undef str_10009b86
#undef str_10009ba0
#undef str_10009bcb
#undef str_10009bf7
#undef str_10009c23
#undef str_10009c43
#undef str_10009c78
#undef local_ec
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bb
#undef local_ba
#undef local_b9
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_98

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_00280854
#define DAT_00280854 (*(uint8_t *)(0x280854U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_00280854
#define _DAT_00280854 (*(code * *)(0x280854U))
#undef str_10009c91
#define str_10009c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x641U)))
#define local_28 (*(int *)(pf_stack_frame + 88))
#define local_24 (*(undefined4 *)(pf_stack_frame + 92))
#define local_20 (*(undefined4 *)(pf_stack_frame + 96))
#define local_1c (*(undefined4 *)(pf_stack_frame + 100))
#define local_18 (*(undefined4 *)(pf_stack_frame + 104))
#define local_69 (*(byte *)(pf_stack_frame + 23))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_64 (*(uint *)(pf_stack_frame + 28))
#define local_60 (*(int *)(pf_stack_frame + 32))
#define local_5c (*(uint *)(pf_stack_frame + 36))
#define local_58 (*(void * *)(pf_stack_frame + 40))
#define local_52 (*(ushort *)(pf_stack_frame + 46))
#define local_50 (*(uint *)(pf_stack_frame + 48))
#define local_4c (*(uint *)(pf_stack_frame + 52))
#define local_48 (*(uint *)(pf_stack_frame + 56))
#define local_44 (*(uint *)(pf_stack_frame + 60))
#define local_40 (*(uint *)(pf_stack_frame + 64))
#define local_3c (*(uint *)(pf_stack_frame + 68))
#define local_38 (*(uint *)(pf_stack_frame + 72))
#define local_34 (*(uint *)(pf_stack_frame + 76))
#define local_30 (*(uint *)(pf_stack_frame + 80))
#define local_2c (*(uint *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10007040(int arg_ecx,uint arg_edx,int *param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;

  if (_DAT_00280800 != 0x50414d57) {
    return str_10009c91;
  }
  if (_DAT_00280804 == 0) {
    return str_10009c91;
  }
  if (_DAT_00280808 < 0xc) {
    return str_10009c91;
  }
  if (_DAT_00280808 < 0x50) {
    return str_10009c91;
  }
  if (_DAT_0028084c == (code *)0x0) {
    return str_10009c91;
  }
  local_28 = 0x10007051;
  local_60 = arg_ecx;
  local_50 = arg_edx;
  local_58 = (*_DAT_0028084c)(0x10000);
  if (local_58 == (void *)0x0) {
    return str_10009c91;
  }
  iVar2 = -0x10000;
  do {
    *(undefined4 *)((int)local_58 + iVar2 + 0x10004) = 0xffffffff;
    *(undefined4 *)((int)local_58 + iVar2 + 0x10000) = 0xffffffff;
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0x315a4650;
  uVar9 = param_3[1];
  pcVar10 = (char *)(local_28 + 0x2a3a);
  if (uVar9 < 0xfffffff0) {
    local_5c = uVar9 + 0x10;
    uVar3 = param_3[2];
    if (uVar3 < local_5c) {
      uVar9 = 0x100;
      if (uVar3 != 0) {
        uVar9 = uVar3;
      }
      for (; uVar9 < local_5c; uVar9 = uVar9 * 2) {
        if ((int)uVar9 < 0) {
          uVar9 = local_5c;
          break;
        }
      }
      if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
          ((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0)))) ||
         (pvVar6 = (*_DAT_00280854)((void *)*param_3,uVar9), pvVar6 == (void *)0x0))
      goto LAB_1000771b;
      *param_3 = (int)pvVar6;
      param_3[2] = uVar9;
      uVar9 = param_3[1];
    }
    else {
      pvVar6 = (void *)*param_3;
    }
    recovered_10001d40((undefined4 *)(uVar9 + (int)pvVar6),&local_24,0x10);
    param_3[1] = local_5c;
    uVar9 = 0;
    if (local_50 == 0) {
LAB_1000769d:
      pcVar10 = (char *)0x0;
      *(uint *)(*param_3 + 4) = local_50;
      *(int *)(*param_3 + 8) = param_3[1] + -0x10;
      *(uint *)(*param_3 + 0xc) = uVar9;
    }
    else {
      local_69 = 0;
      if (local_5c != 0xffffffff) {
        uVar9 = 0;
        local_34 = 0xffffffff;
        do {
          local_69 = 0;
          uVar13 = local_5c + 1;
          uVar3 = param_3[2];
          if (local_5c < uVar3) {
            pvVar6 = (void *)*param_3;
            uVar3 = local_5c;
          }
          else {
            if (uVar3 == 0) {
              uVar3 = 0x100;
            }
            for (; uVar3 <= local_5c; uVar3 = uVar3 * 2) {
              if ((int)uVar3 < 0) {
                uVar3 = uVar13;
                break;
              }
            }
            if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
               ((_DAT_00280808 < 0xc ||
                (((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0)) ||
                 (pvVar6 = (*_DAT_00280854)((void *)*param_3,uVar3), pvVar6 == (void *)0x0))))))
            break;
            *param_3 = (int)pvVar6;
            param_3[2] = uVar3;
            uVar3 = param_3[1];
          }
          recovered_10001d40((undefined4 *)(uVar3 + (int)pvVar6),(undefined4 *)&local_69,1);
          param_3[1] = uVar13;
          if (uVar9 < local_50) {
            uVar3 = 0;
            do {
              local_40 = local_50 - uVar9;
              if (local_40 < 3) {
                bVar8 = *(byte *)(local_60 + uVar9);
LAB_100073e2:
                local_64 = 1;
                local_69 = local_69 | (byte)(1 << ((byte)uVar3 & 0x1f));
                local_52 = CONCAT11(PF_PART1(local_52, 1),bVar8);
                local_68 = 1;
              }
              else {
                bVar8 = *(byte *)(local_60 + uVar9);
                local_30 = (uint)bVar8;
                uVar4 = (uint)*(byte *)(local_60 + 2 + uVar9) + local_30 * 0xfb +
                        (uint)*(byte *)(local_60 + 1 + uVar9) * 0x11 & 0xfff;
                uVar12 = *(uint *)((int)local_58 + uVar4 * 8 + 4);
                local_3c = uVar13;
                if (((int)uVar12 < 0) ||
                   (uVar4 = *(uint *)((int)local_58 + uVar4 * 8), (uVar4 < uVar9) <= uVar12))
                goto LAB_100073e2;
                uVar5 = 0x12;
                if (local_40 < 0x12) {
                  uVar5 = local_40;
                }
                local_44 = 0;
                local_68 = 0;
                local_64 = 0;
                while( true ) {
                  uVar11 = uVar12;
                  uVar7 = uVar4;
                  if (0x1000 < uVar9 - uVar7) break;
                  if (0x3f < local_44) break;
                  uVar12 = 0;
                  do {
                    if (*(char *)(uVar7 + local_60 + uVar12) != *(char *)(local_60 + uVar9 + uVar12)
                       ) goto LAB_10007350;
                    uVar12 = uVar12 + 1;
                  } while (uVar5 != uVar12);
                  uVar12 = uVar5;
LAB_10007350:
                  if (local_64 < uVar12) {
                    local_68 = uVar9 - uVar7;
                    local_64 = uVar12;
                  }
                  local_4c = uVar7;
                  local_48 = uVar11;
                  if (local_64 == 0x12) {
                    local_64 = 0x12;
                    goto LAB_10007635;
                  }
                  uVar4 = *(uint *)((int)local_58 + (uVar7 & 0xfff) * 8 + 0x8000);
                  uVar12 = *(uint *)((int)local_58 + (uVar7 & 0xfff) * 8 + 0x8004);
                  if (((SBORROW4(uVar12,uVar11) != SBORROW4(uVar12 - uVar11,(uint)(uVar4 < uVar7)))
                       == (int)((uVar12 - uVar11) - (uint)(uVar4 < uVar7)) < 0) || ((int)uVar12 < 0)
                     ) break;
                  local_44 = local_44 + 1;
                  if ((uVar4 < uVar9) <= uVar12) break;
                }
                if (local_64 < 3) goto LAB_100073e2;
LAB_10007635:
                local_52 = (short)local_64 - 3U | (short)local_68 * 0x10 - 0x10U;
                local_68 = 2;
              }
              uVar12 = uVar13 + local_68;
              local_38 = uVar9;
              local_2c = uVar3;
              if (CARRY4(uVar13,local_68)) goto LAB_100076b4;
              uVar9 = param_3[2];
              local_4c = uVar12;
              if (uVar9 < uVar12) {
                if (uVar9 == 0) {
                  uVar9 = 0x100;
                }
                for (; uVar9 < uVar12; uVar9 = uVar9 * 2) {
                  if ((int)uVar9 < 0) {
                    uVar9 = uVar12;
                    break;
                  }
                }
                if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
                    (_DAT_00280808 < 0xc)) ||
                   (((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0)) ||
                    (pvVar6 = (*_DAT_00280854)((void *)*param_3,uVar9), pvVar6 == (void *)0x0))))
                goto LAB_100076b4;
                *param_3 = (int)pvVar6;
                param_3[2] = uVar9;
                uVar13 = param_3[1];
              }
              else {
                pvVar6 = (void *)*param_3;
              }
              recovered_10001d40((undefined4 *)(uVar13 + (int)pvVar6),(undefined4 *)&local_52,
                                 local_68);
              param_3[1] = local_4c;
              uVar9 = local_40;
              uVar3 = local_64 + (local_64 == 0);
              uVar12 = local_38;
              do {
                local_68 = uVar12;
                local_44 = uVar3;
                local_40 = uVar9;
                uVar9 = (uint)*(byte *)(local_60 + local_68);
                if (2 < local_40) {
                  uVar3 = (uint)*(byte *)(local_60 + 2 + local_68) + uVar9 * 0xfb +
                          (uint)*(byte *)(local_60 + 1 + local_68) * 0x11 & 0xfff;
                  uVar1 = *(undefined4 *)((int)local_58 + uVar3 * 8);
                  *(undefined4 *)((int)local_58 + (local_68 & 0xfff) * 8 + 0x8004) =
                       *(undefined4 *)((int)local_58 + uVar3 * 8 + 4);
                  *(undefined4 *)((int)local_58 + (local_68 & 0xfff) * 8 + 0x8000) = uVar1;
                  *(uint *)((int)local_58 + uVar3 * 8) = local_68;
                  *(undefined4 *)((int)local_58 + uVar3 * 8 + 4) = 0;
                  local_48 = uVar9;
                }
                local_34 = local_34 ^ uVar9;
                uVar9 = -(local_34 & 1) & 0xedb88320 ^ local_34 >> 1;
                uVar3 = (int)(local_34 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar9 >> 1;
                local_34 = (int)(uVar3 << 0x1a) >> 0x1f & 0xedb88320U ^
                           (int)(uVar9 << 0x1a) >> 0x1f & 0x76dc4190U ^
                           (int)(local_34 << 0x1a) >> 0x1f & 0x3b6e20c8U ^
                           (int)(local_34 << 0x1b) >> 0x1f & 0x1db71064U ^
                           (int)(local_34 << 0x1c) >> 0x1f & 0xedb8832U ^
                           (int)(local_34 << 0x1d) >> 0x1f & 0x76dc419U ^ uVar3 >> 6;
                uVar9 = local_40 - 1;
                uVar3 = local_44 - 1;
                uVar12 = local_68 + 1;
              } while (local_44 - 1 != 0);
              uVar9 = local_38 + local_64;
              if (6 < local_2c) break;
              uVar3 = local_2c + 1;
              uVar13 = local_4c;
            } while (uVar9 < local_50);
            *(byte *)(*param_3 + local_5c) = local_69;
            if (local_50 <= uVar9) {
              uVar9 = ~local_34;
              goto LAB_1000769d;
            }
          }
          else {
            *(byte *)(*param_3 + local_5c) = local_69;
          }
          local_5c = param_3[1];
          local_69 = 0;
        } while (local_5c != 0xffffffff);
      }
LAB_100076b4:
      pcVar10 = (char *)(local_28 + 0x2aea);
    }
  }
LAB_1000771b:
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
    (*_DAT_00280850)(local_58);
  }
  return pcVar10;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_00280854
#undef str_10009c91
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_69
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_52
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

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_002808d0
#define DAT_002808d0 (*(uint8_t *)(0x2808d0U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
#undef _DAT_002808d0
#define _DAT_002808d0 (*(code * *)(0x2808d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10007770(int device,char *path,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (0xd3 < _DAT_00280808)) {
    if (_DAT_002808d0 != (code *)0x0) {
      iVar1 = (*_DAT_002808d0)(device,path,data,size);
      return iVar1;
    }
  }
  else if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
          ((0xb < _DAT_00280808 && ((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)))))) {
    iVar1 = (*_DAT_00280838)(path,data,size);
    return iVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef DAT_002808d0
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838
#undef _DAT_002808d0

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_00280a1c
#define DAT_00280a1c (*(uint8_t *)(0x280a1cU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint8_t * *)(0x280834U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(uint8_t * *)(0x2808c8U))
#undef _DAT_00280a1c
#define _DAT_00280a1c (*(code * *)(0x280a1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10007810(int device,char *path,uint *record)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *pointer;
  uint uVar4;

  if (record != (uint *)0x0) {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x21f < _DAT_00280808 && (_DAT_00280a1c != (code *)0x0)))) {
      iVar2 = (*_DAT_00280a1c)(device,path,record);
      return iVar2;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && (0xcb < _DAT_00280808)))) {
      if (_DAT_002808c8 == (code *)0x0) {
        return 0;
      }
      pcVar3 = _DAT_002808c8;
    }
    else {
      if (_DAT_00280800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_00280804 == 0) {
        return 0;
      }
      if (_DAT_00280808 < 0xc) {
        return 0;
      }
      if (_DAT_00280808 < 0x38) {
        return 0;
      }
      if (_DAT_00280834 == (code *)0x0) {
        return 0;
      }
      pcVar3 = _DAT_00280834;
      device = (int)path;
      path = (char *)record;
    }
    iVar2 = (*pcVar3)(device,path);
    if (iVar2 != 0) {
      uVar1 = *record;
      *record = 0;
      if (record[1] == 0) {
        return 1;
      }
      if ((((uVar1 != 0) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
         (((0xb < _DAT_00280808 && (0x4f < _DAT_00280808)) &&
          ((_DAT_0028084c != (code *)0x0 &&
           (pointer = (*_DAT_0028084c)(record[1]), pointer != (void *)0x0)))))) {
        uVar4 = record[1];
        if (uVar4 == 0 || pointer <= (void *)-uVar4) {
          if (uVar4 != 0) {
            uVar4 = 0;
            do {
              *(undefined1 *)((int)pointer + uVar4) = *(undefined1 *)(uVar1 + uVar4);
              uVar4 = uVar4 + 1;
            } while (uVar4 < record[1]);
          }
          *record = (uint)pointer;
          return 1;
        }
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
          (*_DAT_00280850)(pointer);
        }
      }
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_002808c8
#undef DAT_00280a1c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_002808c8
#undef _DAT_00280a1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

undefined4 recovered_10007a00(char *arg_ecx,uint arg_edx,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((((((param_4 != (int *)0x0) && (3 < arg_edx && arg_ecx != (char *)0x0)) && (*arg_ecx == 'P'))
       && ((arg_ecx[1] == 'F' && (arg_ecx[2] == 'Z')))) &&
      ((0xf < arg_edx && ((arg_ecx[3] == '1' && (*(int *)(arg_ecx + 4) - 1U < param_3)))))) &&
     (*(int *)(arg_ecx + 8) == arg_edx - 0x10)) {
    *param_4 = *(int *)(arg_ecx + 4);
    uVar1 = 1;
  }
  return uVar1;
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
 * Address: 0x10007a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10007a60(uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
    pvVar1 = (*_DAT_0028084c)(size);
    return pvVar1;
  }
  return (void *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c

#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ab0
 */

bool recovered_10007ab0(char *arg_ecx,uint arg_edx,int param_3,uint param_4,uint *param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  bVar11 = false;
  if (((((3 < arg_edx && arg_ecx != (char *)0x0) && (*arg_ecx == 'P')) && (arg_ecx[1] == 'F')) &&
      ((arg_ecx[2] == 'Z' && (0xf < arg_edx)))) &&
     ((arg_ecx[3] == '1' &&
      ((uVar3 = *(uint *)(arg_ecx + 4), uVar3 - 1 < param_4 &&
       (*(int *)(arg_ecx + 8) == arg_edx - 0x10)))))) {
    uVar10 = 0xffffffff;
    uVar6 = 0x10;
    uVar8 = 0;
    do {
      if (arg_edx <= uVar6) goto LAB_10007dcf;
      bVar1 = arg_ecx[uVar6];
      uVar6 = uVar6 + 1;
      local_24 = 0;
      do {
        if (uVar3 == uVar8) {
          uVar8 = uVar3;
          if (bVar1 >> ((byte)local_24 & 0x1f) != 0) goto LAB_10007dcf;
          goto LAB_10007da5;
        }
        if ((bVar1 >> (local_24 & 0x1f) & 1) == 0) {
          if (arg_edx - uVar6 < 2) {
            return false;
          }
          uVar4 = (uint)(ushort)(CONCAT11(arg_ecx[uVar6 + 1],arg_ecx[uVar6]) >> 4);
          if (uVar8 <= uVar4) {
            return false;
          }
          uVar9 = ((byte)arg_ecx[uVar6] & 0xf) + 3;
          if (uVar3 - uVar8 < uVar9) {
            return false;
          }
          uVar6 = uVar6 + 2;
          do {
            bVar2 = *(byte *)(~uVar4 + param_3 + uVar8);
            *(byte *)(param_3 + uVar8) = bVar2;
            uVar10 = uVar10 ^ bVar2;
            uVar5 = -(uVar10 & 1) & 0xedb88320 ^ uVar10 >> 1;
            uVar7 = (int)(uVar10 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar5 >> 1;
            uVar10 = (int)(uVar7 << 0x1a) >> 0x1f & 0xedb88320U ^
                     (int)(uVar5 << 0x1a) >> 0x1f & 0x76dc4190U ^
                     (int)(uVar10 << 0x1a) >> 0x1f & 0x3b6e20c8U ^
                     (int)(uVar10 << 0x1b) >> 0x1f & 0x1db71064U ^
                     (int)(uVar10 << 0x1c) >> 0x1f & 0xedb8832U ^
                     (int)(uVar10 << 0x1d) >> 0x1f & 0x76dc419U ^ uVar7 >> 6;
            uVar8 = uVar8 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        else {
          if (arg_edx <= uVar6) goto LAB_10007dcf;
          bVar2 = arg_ecx[uVar6];
          *(byte *)(param_3 + uVar8) = bVar2;
          uVar10 = uVar10 ^ bVar2;
          uVar4 = -(uVar10 & 1) & 0xedb88320 ^ uVar10 >> 1;
          uVar9 = (int)(uVar10 << 0x1e) >> 0x1f & 0xedb88320U ^ uVar4 >> 1;
          uVar10 = (int)(uVar9 << 0x1a) >> 0x1f & 0xedb88320U ^
                   (int)(uVar4 << 0x1a) >> 0x1f & 0x76dc4190U ^
                   (int)(uVar10 << 0x1a) >> 0x1f & 0x3b6e20c8U ^
                   (int)(uVar10 << 0x1b) >> 0x1f & 0x1db71064U ^
                   (int)(uVar10 << 0x1c) >> 0x1f & 0xedb8832U ^
                   (int)(uVar10 << 0x1d) >> 0x1f & 0x76dc419U ^ uVar9 >> 6;
          uVar6 = uVar6 + 1;
          uVar8 = uVar8 + 1;
        }
        local_24 = local_24 + 1;
      } while (local_24 != 8);
    } while (uVar8 < uVar3);
LAB_10007da5:
    if (uVar6 == arg_edx) {
      bVar11 = (uVar10 ^ *(uint *)(arg_ecx + 0xc)) == 0xffffffff;
      if ((param_5 != (uint *)0x0) && ((uVar10 ^ *(uint *)(arg_ecx + 0xc)) == 0xffffffff)) {
        *param_5 = uVar8;
        bVar11 = true;
      }
    }
    else {
LAB_10007dcf:
      bVar11 = false;
    }
  }
  return bVar11;
}

#undef local_24

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
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef DAT_0028088c
#define DAT_0028088c (*(uint8_t *)(0x28088cU))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_002808d0
#define DAT_002808d0 (*(uint8_t *)(0x2808d0U))
#undef DAT_002808dc
#define DAT_002808dc (*(uint8_t *)(0x2808dcU))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef DAT_10009cbb
#define DAT_10009cbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(uint8_t * *)(0x280838U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_0028088c
#define _DAT_0028088c (*(uint8_t * *)(0x28088cU))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(code * *)(0x2808c8U))
#undef _DAT_002808d0
#define _DAT_002808d0 (*(uint8_t * *)(0x2808d0U))
#undef _DAT_002808dc
#define _DAT_002808dc (*(uint8_t * *)(0x2808dcU))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(code * *)(0x280a18U))
#undef str_10009cc0
#define str_10009cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x670U)))
#undef str_10009cf0
#define str_10009cf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a0U)))
#undef str_10009d0c
#define str_10009d0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bcU)))
#undef str_10009d36
#define str_10009d36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e6U)))
#undef str_10009d62
#define str_10009d62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x712U)))
#undef str_10009d7b
#define str_10009d7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72bU)))
#undef str_10009d9a
#define str_10009d9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74aU)))
#undef str_10009db2
#define str_10009db2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x762U)))
#undef str_10009de8
#define str_10009de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x798U)))
#undef str_10009e0d
#define str_10009e0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bdU)))
#undef str_10009e5a
#define str_10009e5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80aU)))
#undef str_10009e92
#define str_10009e92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x842U)))
#undef str_10009eb4
#define str_10009eb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x864U)))
#undef str_10009ee9
#define str_10009ee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x899U)))
#undef str_10009f26
#define str_10009f26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d6U)))
#define local_58 (*(uint *)(pf_stack_frame + 56))
#define local_54 (*(char * *)(pf_stack_frame + 60))
#define local_48 (*(char * *)(pf_stack_frame + 72))
#define local_2c (*(uint (*)[11])(pf_stack_frame + 100))
#define local_24 (*(byte *)(pf_stack_frame + 108))
#define local_20 (*(char * *)(pf_stack_frame + 112))
#define local_1c (*(byte * *)(pf_stack_frame + 116))
#define local_18 (*(int *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10007de0(int device,char *destination,byte encoded,char *data,uint size)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint arg_edx;
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pointer;
  byte *pointer_00;
  char *pcVar4;
  undefined4 uVar5;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  uint *path;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *arg_ecx;
  byte *pbVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;

  if (size < 8) {
    return str_10009cc0;
  }
  iVar3 = recovered_10002200((uint *)data,(uint *)&DAT_10009cbb,4);
  if (iVar3 != 0) {
    return str_10009cc0;
  }
  uVar8 = *(uint *)(data + 4);
  if (uVar8 == 0) {
    return str_10009cf0;
  }
  if (0xaaaaaaa < uVar8 || (size - 8) / 0xd < uVar8) {
    return str_10009cf0;
  }
  if (_DAT_00280800 != 0x50414d57) {
    return str_10009d0c;
  }
  if (_DAT_00280804 == 0) {
    return str_10009d0c;
  }
  if (_DAT_00280808 < 0xc) {
    return str_10009d0c;
  }
  if (_DAT_00280808 < 0x50) {
    return str_10009d0c;
  }
  if (_DAT_0028084c == (code *)0x0) {
    return str_10009d0c;
  }
  pointer = (*_DAT_0028084c)(uVar8 * 0x18);
  if (pointer == (byte *)0x0) {
    return str_10009d0c;
  }
  recovered_10001fd0(pointer,0,uVar8 * 0x18);
  iVar3 = 2;
  if ((((((((uVar8 != 1) && (iVar3 = 4, 2 < uVar8)) && (iVar3 = 8, 4 < uVar8)) &&
         (((iVar3 = 0x10, 8 < uVar8 && (iVar3 = 0x20, 0x10 < uVar8)) &&
          ((iVar3 = 0x40, 0x20 < uVar8 &&
           ((iVar3 = 0x80, 0x40 < uVar8 && (iVar3 = 0x100, 0x80 < uVar8)))))))) &&
        (iVar3 = 0x200, 0x100 < uVar8)) &&
       (((((iVar3 = 0x400, 0x200 < uVar8 && (iVar3 = 0x800, 0x400 < uVar8)) &&
          (iVar3 = 0x1000, 0x800 < uVar8)) &&
         ((iVar3 = 0x2000, 0x1000 < uVar8 && (iVar3 = 0x4000, 0x2000 < uVar8)))) &&
        ((iVar3 = 0x8000, 0x4000 < uVar8 &&
         ((iVar3 = 0x10000, 0x8000 < uVar8 && (iVar3 = 0x20000, 0x10000 < uVar8)))))))) &&
      ((iVar3 = 0x40000, 0x20000 < uVar8 &&
       (((iVar3 = 0x80000, 0x40000 < uVar8 && (iVar3 = 0x100000, 0x80000 < uVar8)) &&
        (iVar3 = 0x200000, 0x100000 < uVar8)))))) &&
     (((iVar3 = 0x400000, 0x200000 < uVar8 && (iVar3 = 0x800000, 0x400000 < uVar8)) &&
      (((iVar3 = 0x1000000, 0x800000 < uVar8 &&
        ((iVar3 = 0x2000000, 0x1000000 < uVar8 && (iVar3 = 0x4000000, 0x2000000 < uVar8)))) &&
       (iVar3 = 0x8000000, 0x4000000 < uVar8)))))) {
    iVar3 = (uint)(0x8000000 < uVar8) * 0x10000000 + 0x10000000;
  }
  pointer_00 = recovered_10007a60(iVar3 * 4);
  if (pointer_00 == (byte *)0x0) {
    recovered_10008680(pointer);
    return str_10009d36;
  }
  recovered_10001fd0(pointer_00,0,iVar3 * 4);
  pcVar4 = recovered_10008e60(device,destination,'\0');
  if (pcVar4 == (char *)0x0) {
    local_1c = pointer + -8;
    bVar2 = encoded ^ 1;
    uVar9 = 0;
    uVar6 = 8;
    local_48 = str_10009d62;
    local_54 = str_10009d7b;
    local_20 = str_10009d9a;
    do {
      if ((size < uVar6) || (size - uVar6 < 0xc)) {
        pcVar4 = local_48;
        goto LAB_100080a5;
      }
      iVar10 = *(int *)(data + uVar6);
      *(int *)(pointer + uVar9 * 0x18 + 0x10) = iVar10;
      arg_edx = *(uint *)(data + uVar6 + 4);
      *(uint *)(pointer + uVar9 * 0x18 + 8) = arg_edx;
      uVar1 = *(uint *)(data + uVar6 + 8);
      *(uint *)(pointer + uVar9 * 0x18 + 0xc) = uVar1;
      if ((1 < iVar10 - 1U) || (uVar1 != 0 && iVar10 == 2)) {
LAB_10008389:
        pcVar4 = local_54;
        goto LAB_100080a5;
      }
      iVar10 = uVar6 + 0xc;
      if ((size - iVar10 < arg_edx) || ((size - iVar10) - arg_edx < uVar1)) goto LAB_10008389;
      arg_ecx = data + iVar10;
      local_18 = iVar10;
      uVar5 = recovered_10008a10((int)arg_ecx,arg_edx);
      if ((char)uVar5 == '\0') goto LAB_10008389;
      pbVar11 = pointer + uVar9 * 0x18;
      *(char **)pbVar11 = arg_ecx;
      *(char **)(pbVar11 + 4) = arg_ecx + arg_edx;
      puVar14 = (uint *)(uint)bVar2;
      recovered_100090e0(arg_ecx,arg_edx,(int)pointer,(int)pointer_00,iVar3,bVar2);
      if (*(int *)(pointer_00 + extraout_EAX * 4) != 0) {
        pcVar4 = local_20;
        goto LAB_100080a5;
      }
      if (arg_edx != 0) {
        uVar6 = arg_edx;
        do {
          uVar6 = uVar6 - 1;
          if (arg_ecx[uVar6] == '\\') {
            puVar14 = (uint *)(uint)bVar2;
            recovered_100090e0(arg_ecx,uVar6,(int)pointer,(int)pointer_00,iVar3,bVar2);
            pcVar4 = str_10009db2;
            if ((*(int *)(pointer_00 + extraout_EAX_00 * 4) == 0) ||
               (*(int *)(local_1c + *(int *)(pointer_00 + extraout_EAX_00 * 4) * 0x18) != 2))
            goto LAB_100080a5;
            goto LAB_100082cf;
          }
        } while (uVar6 != 0);
      }
      if (uVar9 != 0) {
        pcVar4 = str_10009de8;
        goto LAB_100080a5;
      }
LAB_100082cf:
      uVar9 = uVar9 + 1;
      *(uint *)(pointer_00 + extraout_EAX * 4) = uVar9;
      path = (uint *)(uint)encoded;
      pcVar4 = (char *)recovered_10009210((undefined4 *)destination,(int)arg_ecx,arg_edx,encoded);
      *(char **)(pbVar11 + 0x14) = pcVar4;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = str_10009e0d;
        goto LAB_100080a5;
      }
      iVar10 = recovered_10005eb0(device,pcVar4,local_2c);
      if ((iVar10 != 0) && ((*(int *)(pbVar11 + 0x10) != 2 || ((local_24 & 2) == 0)))) {
        pcVar4 = str_10009e5a;
        goto LAB_100080a5;
      }
      uVar6 = local_18 + arg_edx + uVar1;
    } while (uVar9 < uVar8);
    pcVar4 = str_10009e92;
    if (uVar6 == size) {
      pcVar4 = recovered_10008e60(device,destination,'\x01');
    }
    if (pcVar4 == (char *)0x0) {
      pbVar11 = pointer + 0x14;
      local_58 = 0;
      while( true ) {
        puVar13 = *(uint **)pbVar11;
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x21b < _DAT_00280808 && (_DAT_00280a18 != (code *)0x0)))) {
          iVar3 = (*_DAT_00280a18)(device,(char *)puVar13,local_2c);
        }
        else {
          if (((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
             (0xcb < _DAT_00280808)) {
            if (_DAT_002808c8 == (code *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (*_DAT_002808c8)(device,(char *)puVar13,local_2c);
              path = puVar13;
            }
          }
          else {
            iVar3 = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
              path = local_2c;
              iVar3 = (*_DAT_00280834)(puVar13);
            }
          }
          puVar13 = path;
          local_2c[0] = 0;
        }
        if (iVar3 == 0) break;
        pcVar4 = str_10009eb4;
        if ((*(int *)(pbVar11 + -4) != 2) || (path = puVar13, (local_24 & 2) == 0))
        goto LAB_100080a5;
LAB_100083e8:
        local_58 = local_58 + 1;
        pbVar11 = pbVar11 + 0x18;
        pcVar4 = (char *)0x0;
        if (uVar8 <= local_58) goto LAB_100080a5;
      }
      path = *(uint **)pbVar11;
      if (*(int *)(pbVar11 + -4) == 2) {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && (0xdf < _DAT_00280808)))) {
          if (_DAT_002808dc != (code *)0x0) {
            pcVar7 = _DAT_002808dc;
            puVar12 = (uint *)device;
            goto override_prt_100083db_2a216ffa;
          }
        }
        else {
          pcVar4 = str_10009ee9;
          if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
             ((_DAT_00280808 < 0x90 || (_DAT_0028088c == (code *)0x0)))) goto LAB_100080a5;
          pcVar7 = _DAT_0028088c;
          puVar12 = path;
          path = puVar13;
override_prt_100083db_2a216ffa:
          iVar3 = (*pcVar7)((int)puVar12,(char *)path);
          if (iVar3 != 0) goto LAB_100083e8;
        }
        pcVar4 = str_10009ee9;
      }
      else {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && (0xd3 < _DAT_00280808)))) {
          if (_DAT_002808d0 != (code *)0x0) {
            pcVar7 = _DAT_002808d0;
            puVar13 = (uint *)device;
            puVar12 = *(uint **)(pbVar11 + -0x10);
            puVar14 = *(uint **)(pbVar11 + -8);
            goto LAB_10008656;
          }
        }
        else {
          pcVar4 = str_10009f26;
          if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
             ((_DAT_00280808 < 0x3c || (_DAT_00280838 == (code *)0x0)))) goto LAB_100080a5;
          pcVar7 = _DAT_00280838;
          puVar13 = path;
          path = *(uint **)(pbVar11 + -0x10);
          puVar12 = *(uint **)(pbVar11 + -8);
LAB_10008656:
          iVar3 = (*pcVar7)(puVar13,path,puVar12,puVar14);
          if (iVar3 != 0) goto LAB_100083e8;
        }
        pcVar4 = str_10009f26;
      }
    }
  }
LAB_100080a5:
  pbVar11 = pointer + 0x14;
  do {
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
      (*_DAT_00280850)(*(void **)pbVar11);
    }
    pbVar11 = pbVar11 + 0x18;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  recovered_10008680(pointer_00);
  recovered_10008680(pointer);
  return pcVar4;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028084c
#undef DAT_00280850
#undef DAT_0028088c
#undef DAT_002808c8
#undef DAT_002808d0
#undef DAT_002808dc
#undef DAT_00280a18
#undef DAT_10009cbb
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028084c
#undef _DAT_00280850
#undef _DAT_0028088c
#undef _DAT_002808c8
#undef _DAT_002808d0
#undef _DAT_002808dc
#undef _DAT_00280a18
#undef str_10009cc0
#undef str_10009cf0
#undef str_10009d0c
#undef str_10009d36
#undef str_10009d62
#undef str_10009d7b
#undef str_10009d9a
#undef str_10009db2
#undef str_10009de8
#undef str_10009e0d
#undef str_10009e5a
#undef str_10009e92
#undef str_10009eb4
#undef str_10009ee9
#undef str_10009f26
#undef local_58
#undef local_54
#undef local_48
#undef local_2c
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
 * Address: 0x10008680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008680(void *pointer)

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

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef str_10009a3e
#define str_10009a3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eeU)))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_24 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100086d0(int arg_ecx,uint arg_edx,byte param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  void *pointer;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  void *pvVar9;
  int iVar10;

  pvVar9 = (void *)0x0;
  if ((((0xfffffd02 < arg_edx - 0x2fe) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
     (((0xb < _DAT_00280808 && (0x4f < _DAT_00280808)) && (_DAT_0028084c != (code *)0x0)))) {
    pointer = (*_DAT_0028084c)(arg_edx * 3 + 1);
    if (pointer != (void *)0x0) {
      local_38 = 0;
      local_24 = 0;
      local_30 = 0;
      local_34 = 0;
      iVar10 = 0;
      do {
        iVar4 = iVar10;
        cVar1 = *(char *)(arg_ecx + local_38);
        uVar5 = (uint)CONCAT11(cVar1 == '%',cVar1);
        if ((2 < arg_edx - local_38 & param_3 & cVar1 == '%') == 1) {
          bVar8 = *(byte *)(arg_ecx + 1 + local_38);
          uVar7 = (uint)bVar8;
          bVar3 = bVar8 - 0x30U;
          if (bVar3 < 10) {
            iVar10 = uVar7 - 0x30;
          }
          else if ((byte)(bVar8 + 0xbf) < 6) {
            iVar10 = uVar7 - 0x37;
          }
          else {
            uVar5 = 0x25;
            if (5 < (byte)(bVar8 + 0x9f)) goto LAB_10008930;
            iVar10 = uVar7 - 0x57;
          }
          uVar5 = 0x25;
          if (-1 < iVar10) {
            bVar2 = *(byte *)(arg_ecx + 2 + local_38);
            uVar7 = (uint)bVar2;
            bVar6 = bVar2 - 0x30U;
            if (bVar6 < 10) {
              iVar10 = uVar7 - 0x30;
            }
            else if ((byte)(bVar2 + 0xbf) < 6) {
              iVar10 = uVar7 - 0x37;
            }
            else {
              if (5 < (byte)(bVar2 + 0x9f)) goto LAB_10008930;
              iVar10 = uVar7 - 0x57;
            }
            if (-1 < iVar10) {
              if (9 < bVar3) {
                if ((byte)(bVar8 + 0xbf) < 6) {
                  bVar3 = bVar8 - 0x37;
                }
                else {
                  bVar3 = bVar8 + 0xa9;
                  if (5 < (byte)(bVar8 + 0x9f)) {
                    bVar3 = 0xff;
                  }
                }
              }
              if (9 < bVar6) {
                if ((byte)(bVar2 + 0xbf) < 6) {
                  bVar6 = bVar2 - 0x37;
                }
                else {
                  bVar6 = bVar2 + 0xa9;
                  if (5 < (byte)(bVar2 + 0x9f)) {
                    bVar6 = 0xff;
                  }
                }
              }
              local_38 = local_38 + 2;
              uVar5 = (uint)(byte)(bVar3 << 4 | bVar6);
            }
          }
        }
LAB_10008930:
        bVar8 = (byte)uVar5;
        uVar7 = uVar5 & 0xff;
        if (iVar4 == 0) {
          local_30 = uVar7;
        }
        if (iVar4 == 1) {
          local_24 = uVar7;
        }
        if (iVar4 == 0xff) goto LAB_100089bb;
        if ((((byte)(bVar8 - 0x20) < 0x5f) && (bVar8 != 0x25)) && (uVar7 != 0x5c)) {
          *(byte *)((int)pointer + local_34) = bVar8;
          local_34 = local_34 + 1;
        }
        else {
          *(undefined1 *)((int)pointer + local_34) = 0x25;
          *(char *)((int)pointer + local_34 + 1) = str_10009a3e[bVar8 >> 4];
          *(char *)((int)pointer + local_34 + 2) = str_10009a3e[uVar5 & 0xf];
          local_34 = local_34 + 3;
        }
        local_38 = local_38 + 1;
        iVar10 = iVar4 + 1;
      } while (local_38 < arg_edx);
      *(undefined1 *)((int)pointer + local_34) = 0;
      if (((iVar4 == 0) && ((char)local_30 == '.')) ||
         ((iVar4 + 1 == 2 && (((char)local_30 == '.' && ((char)local_24 == '.')))))) {
LAB_100089bb:
        pvVar9 = (void *)0x0;
        if (((_DAT_00280800 == 0x50414d57) &&
            (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808)))) &&
           (_DAT_00280850 != (code *)0x0)) {
          (*_DAT_00280850)(pointer);
          pvVar9 = (void *)0x0;
        }
      }
      else {
        pvVar9 = pointer;
      }
    }
  }
  return (int)pvVar9;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef str_10009a3e
#undef local_38
#undef local_34
#undef local_30
#undef local_24

#define local_18 (*(uint *)(pf_stack_frame + 40))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_20 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a10
 */

undefined4 recovered_10008a10(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar3 = 0;
  if (0xffffcfff < arg_edx - 0x3001) {
    uVar7 = 0;
    local_18 = 0;
    uVar8 = 0;
    local_20 = 0;
    uVar9 = 0;
    do {
      uVar6 = uVar7;
      if (arg_edx == uVar7) {
LAB_10008a8b:
        if (uVar9 == 0) {
          return 0;
        }
        if ((uVar9 == 1) && ((char)uVar8 == '.')) {
          return 0;
        }
        uVar4 = 0;
        if (((uVar9 == 2) && ((char)uVar8 == '.')) && ((char)local_18 == '.')) {
          return 0;
        }
        if (arg_edx == uVar7) {
          uVar6 = arg_edx;
        }
        else {
          local_20 = local_20 + 1;
          uVar4 = 0;
          if (0x1000 < local_20) {
            return 0;
          }
        }
      }
      else {
        bVar1 = *(byte *)(arg_ecx + uVar7);
        uVar5 = (uint)bVar1;
        if (uVar5 == 0x25) {
          if (arg_edx - uVar7 < 3) {
            return 0;
          }
          bVar1 = *(byte *)(arg_ecx + 1 + uVar7);
          uVar6 = (uint)bVar1;
          if ((byte)(bVar1 - 0x30U) < 10) {
            local_28 = uVar6 - 0x30;
          }
          else if ((byte)(bVar1 + 0xbf) < 6) {
            local_28 = uVar6 - 0x37;
          }
          else if ((byte)(bVar1 + 0x9f) < 6) {
            local_28 = uVar6 - 0x57;
          }
          else {
            local_28 = -1;
          }
          bVar2 = *(byte *)(arg_ecx + 2 + uVar7);
          uVar5 = (uint)bVar2;
          if ((byte)(bVar2 - 0x30U) < 10) {
            uVar5 = uVar5 - 0x30;
          }
          else if ((byte)(bVar2 + 0xbf) < 6) {
            uVar5 = uVar5 - 0x37;
          }
          else if ((byte)(bVar2 + 0x9f) < 6) {
            uVar5 = uVar5 - 0x57;
          }
          else {
            uVar5 = 0xffffffff;
          }
          if ((byte)(bVar2 + 0x9f) < 6) {
            return 0;
          }
          if ((byte)(bVar1 + 0x9f) < 6) {
            return 0;
          }
          if (local_28 < 0) {
            return 0;
          }
          if ((int)uVar5 < 0) {
            return 0;
          }
          uVar4 = uVar7 + 2;
          uVar5 = uVar5 | local_28 << 4;
          uVar6 = uVar4;
          if (0xa0 < (byte)((char)uVar5 + 0x81U)) {
            if (uVar5 != 0x5c) {
              uVar6 = uVar7;
            }
            if (uVar5 == 0x25) {
              uVar6 = uVar4;
            }
            else if (uVar5 != 0x5c) {
              return 0;
            }
          }
        }
        else {
          if (uVar5 == 0x5c) goto LAB_10008a8b;
          if (bVar1 == 0x5c) {
            return 0;
          }
          if (0x5e < (byte)(bVar1 - 0x20)) {
            return 0;
          }
        }
        uVar4 = uVar9 + 1;
        if (0xff < uVar4) {
          return 0;
        }
        if (uVar9 == 1) {
          local_18 = uVar5 & 0xff;
        }
        if (uVar9 == 0) {
          uVar8 = uVar5 & 0xff;
        }
        local_20 = local_20 + 1;
        if (0x1000 < local_20) {
          return 0;
        }
      }
      uVar7 = uVar6 + 1;
      uVar9 = uVar4;
    } while (uVar7 <= arg_edx);
    uVar3 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar3;
}

#undef local_18
#undef local_28
#undef local_20

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10008c30(undefined4 arg_ecx,void *arg_edx,void *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)) &&
      (puVar1 = (*_DAT_0028084c)(0x10), puVar1 != (undefined4 *)0x0)))) {
    *puVar1 = 0;
    puVar1[1] = arg_ecx;
    puVar1[2] = arg_edx;
    puVar1[3] = param_3;
    return puVar1;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
    (*_DAT_00280850)(arg_edx);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))) {
    (*_DAT_00280850)(param_3);
  }
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
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
 * Address: 0x10008d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008d20(uint *arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  void *pvVar2;
  void *extraout_EAX;
  void *size;
  void *pvVar3;

  pvVar3 = (void *)(arg_ecx[1] + param_3);
  if (CARRY4(arg_ecx[1],param_3)) {
LAB_10008d36:
    uVar1 = 0;
  }
  else {
    pvVar2 = (void *)arg_ecx[2];
    if (pvVar2 < pvVar3) {
      size = (void *)0x100;
      if (pvVar2 != (void *)0x0) {
        size = pvVar2;
      }
      for (; size < pvVar3; size = (void *)((int)(uintptr_t)size * 2)) {
        if ((int)size < 0) {
          size = pvVar3;
          break;
        }
      }
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         (((_DAT_00280808 < 0x58 || (_DAT_00280854 == (code *)0x0)) ||
          (pvVar2 = (*_DAT_00280854)((void *)*arg_ecx,(ulong)size), pvVar2 == (void *)0x0))))
      goto LAB_10008d36;
      *arg_ecx = (uint)pvVar2;
      arg_ecx[2] = (uint)size;
    }
    if (param_3 != 0) {
      recovered_10001d40((undefined4 *)(*arg_ecx + arg_ecx[1]),arg_edx,param_3);
      pvVar2 = extraout_EAX;
    }
    arg_ecx[1] = (uint)pvVar3;
    uVar1 = CONCAT31((int3)((uint)pvVar2 >> 8),1);
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280854
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280854

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_002809d4
#define DAT_002809d4 (*(uint8_t *)(0x2809d4U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_002809d4
#define _DAT_002809d4 (*(code * *)(0x2809d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008e00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x1d7 < _DAT_00280808 && (_DAT_002809d4 != (code *)0x0)))) {
    uVar1 = (*_DAT_002809d4)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_002809d4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_002809d4

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_0028088c
#define DAT_0028088c (*(uint8_t *)(0x28088cU))
#undef DAT_002808c8
#define DAT_002808c8 (*(uint8_t *)(0x2808c8U))
#undef DAT_002808dc
#define DAT_002808dc (*(uint8_t *)(0x2808dcU))
#undef DAT_00280a18
#define DAT_00280a18 (*(uint8_t *)(0x280a18U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_0028088c
#define _DAT_0028088c (*(code * *)(0x28088cU))
#undef _DAT_002808c8
#define _DAT_002808c8 (*(code * *)(0x2808c8U))
#undef _DAT_002808dc
#define _DAT_002808dc (*(code * *)(0x2808dcU))
#undef _DAT_00280a18
#define _DAT_00280a18 (*(code * *)(0x280a18U))
#undef str_10009f60
#define str_10009f60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x910U)))
#undef str_10009f8e
#define str_10009f8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93eU)))
#define local_20 (*(undefined4 (*)[8])(pf_stack_frame + 16))
#define local_18 (*(byte *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10008e60(int arg_ecx,char *arg_edx,char param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *pcVar5;
  bool bVar6;

  pcVar5 = arg_edx;
LAB_10008e91:
  do {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
    if (cVar1 != '\\') {
      if (cVar1 != '\0') goto LAB_10008e91;
    }
    *pcVar5 = '\0';
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x21b < _DAT_00280808 && (_DAT_00280a18 != (code *)0x0)))) {
      iVar2 = (*_DAT_00280a18)(arg_ecx,arg_edx,local_20);
      if (iVar2 != 0) goto LAB_100090a0;
LAB_10008f10:
      if (param_3 != '\0') {
        if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
           ((0xb < _DAT_00280808 && (0xdf < _DAT_00280808)))) {
          if (_DAT_002808dc == (code *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (*_DAT_002808dc)(arg_ecx,arg_edx);
          }
        }
        else {
          iVar2 = 0;
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             ((0x8f < _DAT_00280808 && (_DAT_0028088c != (code *)0x0)))) {
            iVar2 = (*_DAT_0028088c)(arg_edx);
          }
        }
        bVar6 = iVar2 == 0;
        bVar4 = !bVar6;
        pcVar3 = str_10009f8e;
        goto LAB_100090bf;
      }
      pcVar3 = (char *)0x0;
      bVar4 = true;
    }
    else {
      if (((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
         (0xcb < _DAT_00280808)) {
        if (_DAT_002808c8 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*_DAT_002808c8)(arg_ecx,arg_edx,local_20);
        }
      }
      else {
        iVar2 = 0;
        if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
           ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
          iVar2 = (*_DAT_00280834)(arg_edx,local_20);
        }
      }
      local_20[0] = 0;
      if (iVar2 == 0) goto LAB_10008f10;
LAB_100090a0:
      bVar4 = (bool)((local_18 & 2) >> 1);
      bVar6 = bVar4 == false;
      pcVar3 = str_10009f60;
LAB_100090bf:
      if (!bVar6) {
        pcVar3 = (char *)0x0;
      }
    }
    *pcVar5 = cVar1;
    if ((cVar1 == '\0') || (bVar4 == false)) {
      return pcVar3;
    }
  } while( true );
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_0028088c
#undef DAT_002808c8
#undef DAT_002808dc
#undef DAT_00280a18
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef _DAT_0028088c
#undef _DAT_002808c8
#undef _DAT_002808dc
#undef _DAT_00280a18
#undef str_10009f60
#undef str_10009f8e
#undef local_20
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100090e0
 */

void recovered_100090e0(char *arg_ecx,int arg_edx,int param_3,int param_4,int param_5,char param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar4;
  uint uVar3;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;

  uVar2 = 0x811c9dc5;
  if (arg_edx != 0) {
    pcVar8 = arg_ecx;
    iVar9 = arg_edx;
    do {
      cVar1 = *pcVar8;
      bVar4 = cVar1 + 0xbf;
      uVar7 = CONCAT11(bVar4,cVar1) & 0xff;
      uVar3 = CONCAT11(bVar4,cVar1) & 0xff | 0x20;
      if (0x19 < bVar4) {
        uVar3 = uVar7;
      }
      if (param_6 == '\0') {
        uVar3 = uVar7;
      }
      uVar2 = (uVar3 ^ uVar2) * 0x1000193;
      pcVar8 = pcVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar2 = uVar2 & param_5 - 1U;
  iVar9 = *(int *)(param_4 + uVar2 * 4);
  if (iVar9 != 0) {
    do {
      if (*(int *)(param_3 + -0x10 + iVar9 * 0x18) == arg_edx) {
        if (arg_edx != 0) {
          iVar9 = param_3 + iVar9 * 0x18;
          iVar10 = 0;
          do {
            bVar4 = arg_ecx[iVar10];
            if (param_6 == '\0') {
              if (bVar4 != *(byte *)(*(int *)(iVar9 + -0x18) + iVar10)) goto LAB_10009161;
            }
            else {
              bVar6 = bVar4 | 0x20;
              if (0x19 < (byte)(bVar4 + 0xbf)) {
                bVar6 = bVar4;
              }
              bVar4 = *(byte *)(*(int *)(iVar9 + -0x18) + iVar10);
              bVar5 = bVar4 | 0x20;
              if (0x19 < (byte)(bVar4 + 0xbf)) {
                bVar5 = bVar4;
              }
              if (bVar6 != bVar5) goto LAB_10009161;
            }
            iVar10 = iVar10 + 1;
            if (arg_edx == iVar10) {
              return;
            }
          } while( true );
        }
        iVar10 = 0;
LAB_10009161:
        if (iVar10 == arg_edx) {
          return;
        }
      }
      uVar2 = uVar2 + 1 & param_5 - 1U;
      iVar9 = *(int *)(param_4 + uVar2 * 4);
    } while (iVar9 != 0);
  }
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
#undef DAT_00280850
#define DAT_00280850 (*(uint8_t *)(0x280850U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#define local_28 (*(undefined4 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10009210(undefined4 *arg_ecx,int arg_edx,uint param_3,byte param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar8;
  undefined3 uVar9;
  uint uVar7;
  byte bVar10;
  undefined4 *puVar11;
  uint uVar12;

  puVar11 = (undefined4 *)0x0;
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) &&
     (local_28 = (*_DAT_0028084c)(param_3 + 1), local_28 != (undefined4 *)0x0)) {
    uVar12 = 0;
    if (param_3 != 0) {
      uVar6 = 0;
      uVar12 = 0;
      uVar2 = (uint)param_4 << 8;
LAB_100092c2:
      bVar10 = *(byte *)(arg_edx + uVar6);
      uVar9 = (undefined3)(uVar2 >> 8);
      uVar7 = CONCAT31(uVar9,bVar10);
      cVar8 = (char)(uVar2 >> 8);
      if ((cVar8 != '\0') || (bVar10 != 0x25)) {
        uVar2 = uVar7;
        if (cVar8 == '\0') goto LAB_10009357;
        goto switchD_1000937c_caseD_23;
      }
      cVar8 = *(char *)(arg_edx + 1 + uVar6);
      bVar10 = cVar8 - 0x30;
      if (9 < bVar10) {
        if ((byte)(cVar8 + 0xbfU) < 6) {
          bVar10 = cVar8 - 0x37;
        }
        else {
          bVar10 = cVar8 + 0xa9;
          if (5 < (byte)(cVar8 + 0x9fU)) {
            bVar10 = 0xff;
          }
        }
      }
      cVar8 = *(char *)(arg_edx + 2 + uVar6);
      uVar7 = CONCAT31(uVar9,cVar8);
      bVar1 = cVar8 - 0x30;
      if (9 < bVar1) {
        if ((byte)(cVar8 + 0xbfU) < 6) {
          bVar1 = cVar8 - 0x37;
        }
        else {
          bVar1 = cVar8 + 0xa9;
          if (5 < (byte)(cVar8 + 0x9fU)) {
            bVar1 = 0xff;
          }
        }
      }
      uVar6 = uVar6 + 2;
      uVar2 = (uint)(byte)(bVar10 << 4 | bVar1);
LAB_10009357:
      bVar10 = (byte)uVar2;
      if (bVar10 < 0x20) goto switchD_1000937c_caseD_22;
      switch((uintptr_t)(uVar2 & 0xff)) {
      case 0x22:
      case 0x2a:
      case 0x2f:
      case 0x3a:
      case 0x3c:
      case 0x3e:
      case 0x3f:
        break;
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
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
      case 0x3b:
      case 0x3d:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto switchD_1000937c_caseD_23;
      case 0x5c:
        if ((char)uVar7 == '\\') goto switchD_1000937c_caseD_23;
        break;
      default:
        if ((uVar2 & 0xff) != 0x7c) goto switchD_1000937c_caseD_23;
      }
switchD_1000937c_caseD_22:
      if (_DAT_00280800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_00280804 == 0) {
        return 0;
      }
      if (_DAT_00280808 < 0xc) {
        return 0;
      }
      if (_DAT_00280808 < 0x54) {
        return 0;
      }
      if (_DAT_00280850 == (code *)0x0) {
        return 0;
      }
      goto LAB_10009556;
    }
LAB_100093d4:
    *(undefined1 *)((int)local_28 + uVar12) = 0;
    for (uVar2 = recovered_10002490((int)arg_ecx); uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(char *)((int)arg_ecx + (uVar2 - 1)) != '\\') goto LAB_1000940a;
    }
    uVar2 = 0;
LAB_1000940a:
    puVar11 = (undefined4 *)0x0;
    if ((((uVar12 <= 0x2fff - uVar2 && uVar2 < 0x3000) && (_DAT_00280800 == 0x50414d57)) &&
        (_DAT_00280804 != 0)) &&
       (((0xb < _DAT_00280808 && (0x4f < _DAT_00280808)) && (_DAT_0028084c != (code *)0x0)))) {
      puVar3 = (*_DAT_0028084c)(uVar2 + 2 + uVar12);
      if (puVar3 != (undefined4 *)0x0) {
        recovered_10001d40(puVar3,arg_ecx,uVar2);
        *(undefined1 *)((int)puVar3 + uVar2) = 0x5c;
        recovered_10001d40((undefined4 *)((int)puVar3 + uVar2 + 1),local_28,uVar12);
        *(undefined1 *)((int)puVar3 + uVar2 + uVar12 + 1) = 0;
        puVar11 = puVar3;
      }
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x53 < _DAT_00280808 && (_DAT_00280850 != (code *)0x0)))))) {
      (*_DAT_00280850)(local_28);
    }
    if (param_4 == 1 && puVar11 != (undefined4 *)0x0) {
      iVar4 = recovered_10002490((int)puVar11);
      uVar5 = recovered_10008a10((int)puVar11 + 1,iVar4 - 1);
      if ((char)uVar5 == '\0') {
        if (_DAT_00280800 != 0x50414d57) {
          return 0;
        }
        if (_DAT_00280804 == 0) {
          return 0;
        }
        if (_DAT_00280808 < 0xc) {
          return 0;
        }
        if (_DAT_00280808 < 0x54) {
          return 0;
        }
        local_28 = puVar11;
        if (_DAT_00280850 == (code *)0x0) {
          return 0;
        }
LAB_10009556:
        (*_DAT_00280850)(local_28);
        return 0;
      }
    }
  }
  return (int)puVar11;
switchD_1000937c_caseD_23:
  *(byte *)((int)local_28 + uVar12) = bVar10;
  uVar12 = uVar12 + 1;
  uVar6 = uVar6 + 1;
  uVar2 = uVar7;
  if (param_3 <= uVar6) goto LAB_100093d4;
  goto LAB_100092c2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028084c
#undef DAT_00280850
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028084c
#undef _DAT_00280850
#undef local_28
